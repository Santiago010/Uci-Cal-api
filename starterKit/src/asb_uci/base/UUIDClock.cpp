#include <iostream>
#include <fstream>
#include <unistd.h>
#include <sstream>
#include <string.h>
#include <mutex>
#include <sys/file.h>
#include "../../../include/asb_uci/base/UUIDClock.h"
#include <log4cpp/Category.hh>//Libreria para los Logs 
#include <log4cpp/PropertyConfigurator.hh> //libreria para
#include <chrono>
#include <random>
#include <cstdint>
#include <limits>

namespace asb_uci
{
    namespace base
    {
        UUIDClock::UUIDClock(const std::string& cf){
            clockFile = cf;
            loadClockFile(false);
        }

        void UUIDClock::loadClockFile(bool isForceClockSeqIncr){
            std::fstream clockRAF;
            try
            {
                clockRAF.open(clockFile,std::ios::in | std::ios::out);
                if(!clockRAF.is_open()){
                    root.error("Unable to open clock file: ", clockFile);
                    parseAndUpdateClockFile(clockRAF,false);
                    clockRAF.close();
                }

                root.info("Loading clock file ", clockFile);
                root.info( "Using Time-Based UUID Generator with clock file ",clockFile);

                std::string line;
                while(std::getline(clockRAF,line)){
                    root.info("Processing clock file line: ", line);
                }

                clockRAF.close();
                root.info(" has been closed");
            }
            catch(const std::exception& e)
            {
                root.error("Missing read/write access to the UUID clock file ",e.what());
                if (clockRAF.is_open()) {
                    clockRAF.close();  // Asegurarse de cerrar el archivo si está abierto
                }
            }
            
        } 

        void UUIDClock::parseAndUpdateClockFile(std::fstream clockRAF,bool isForceClockSeqIncr){
            std::string clockFileName = clockFile;

            clockGuard.lock();
            try
            {
                int fd = open(clockFileName.c_str(),O_RDWR);

                if(fd == -1){
                    root.error("Unable to open clock file: ",clockFile);
                }

                root.info("Acquiring lock on ",clockFileName);

                if(flock(fd,LOCK_EX) == -1){
                    close(fd);

                    root.error("Unable to acquire lock on clock file: ",clockFileName);

                }

                root.info("Acquired lock on ",clockFileName);

                if(clockRAF.peek() == std::ifstream::traits_type::eof()){

                    createClockData();
                }else{
                    clockRAF.seekg(0);
                    std::string clockData;
                    std::getline(clockRAF,clockData);
                    root.info("Read clock data",clockData," from ",clockFileName);
                    parseClockData(clockData,clockFileName,isForceClockSeqIncr);    
                }

                std::ostringstream clockData;
                clockData << std::hex << ((clockSeq + 1) & 0x3FFF) << "-" << sec << "-" << usec << "-" << adjustment;
                clockRAF.seekp(0);
                clockRAF << clockData.str() << "\n";

                clockRAF.flush();
                off_t offset = lseek(fd,0,SEEK_CUR);
                if(offset == -1){
                    close(fd);
                    root.error("Unable to get file pointer for clock file: ",clockFileName);
                }
                if(ftruncate(fd,offset) == -1){
                    close(fd);
                    root.error("Unable to truncate clock file: ",clockFileName);
                }
                root.info("Wrote clock data ", clockData.str(), "to ",clockFileName);

                if(flock(fd,LOCK_UN) == -1){
                    close(fd);
                    root.error("Unable to release lock on clock file: ",clockFileName);
                }
                close(fd);
                root.error("Unable to release lock on clock file: ",clockFileName);
            }
            close(fd);
            root.info("Released lock on ", clockFileName);
            catch(const std::exception& e)
            {
                root.error("Error in parseAndUpdateClockFile ",e.what());
            }

            clockGuard.unlock();
            
        }

        uint16_t UUIDClock::hexStringToInt(const std::string& hexStr){
            std::stringstream ss;
            ss << std::hex << hexStr;
            uint16_t result;
            ss >> result;
            return result;
        }

        void UUIDClock::createClockData(){
            root.info("Creating clock data...");
            auto now = std::chrono::system_clock::now();
            auto duration = now.time_since_epoch();
            long curTimeMillis = std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();

            std::random_device rd;
            std::mt19937 gen(rd());
            std::uniform_int_distribution<> dis(0,0x3FFF);
            clockSeq = static_cast<uint16_t>(dis(gen));

            sec = static_cast<uint32_t>(curTimeMillis / 1000);
            usec = static_cast<uint16_t>((curTimeMillis % 1000) * 1000);
            adjustment = 0;

            root.info("Clock data has been created '");
        }

        void UUIDClock::parseClockData(std::string clockData, std::string clockFileName, bool isForceClockSeqIncr){
            if(clockData.empty()){
                clockData = "";
            }

            std::smatch m;
            if(std::regex_match(clockData,m,CLOCK_PATTERN)){
                std::string hexSeq = m.str(1);
                clockSeq = hexStringToInt(hexSeq)& 0x3FFF;
                sec = safeConvertToUint32(std::stol(m.str(2)));
                usec= safeConvertToUint32(std::stol(m.str(3)));
                adjustment= safeConvertToIntToUint16(std::stoi(m.str(4)));

                root.info("Parsed last clock data '{}'");

            }else{
                root.error("Invalid clock file: could not match regex '" + CLOCK_PATTERN.str(),
                             "' against '", clockData, "' from file " ,clockFileName);
            }


               long curTimeMillis = std::chrono::system_clock::now().time_since_epoch() / std::chrono::milliseconds(1);
               long curSec = curTimeMillis / 1000;
               long curMicros = (curTimeMillis % 1000) * 1000;

               if(isForceClockSeqIncr){
                root.info("Forced to increment clock sequence from clock file.");
                clockSeq = (clockSeq + 1) & 0x3FFF;
               }

               if(curSec > sec || (curSec == sec && curMicros > usec)){
                root.info("Current time is newer than clock file time, using last clock sequence from clock file.");
               }else{

                root.info("Current time is less than or equal to clock file time, incrementing clock sequence from clock file.");
                clockSeq = (clockSeq + 1) & 0x3FFF;
               }
               sec = curSec;
               usec = curMicros;
               adjustment = 0;

               root.info("Clock data has been updated to current time: ClockSeq=", clockSeq, ", Sec=", sec, ", Usec=", usec, ", Adjustment=", adjustment);
        }

        uint32_t UUIDClock::safeConvertToUint32(long value) {
            if (value < 0 || value > std::numeric_limits<uint32_t>::max()) {
                // Manejar el caso donde el valor está fuera del rango válido para uint32_t
                throw std::runtime_error("Valor fuera del rango válido para uint32_t");
            }
            return static_cast<uint32_t>(value);
        }

        uint16_t UUIDClock::safeConvertToIntToUint16(int intValue) {
        if (intValue < 0 || intValue > std::numeric_limits<uint16_t>::max()) {
            throw std::out_of_range("Valor fuera del rango válido para uint16_t");
        }
        return static_cast<uint16_t>(intValue);
        }

        void UUIDClock::tick(){
            bool isTryAgain = true;

            while(isTryAgain){
                auto now = std::chrono::system_clock::now();
                auto duration = now.time_since_epoch();
                auto curTimeMillis = std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();
                auto curSec = curTimeMillis / 1000;
                auto curMicros = (curTimeMillis % 1000) * 1000;

                if (curSec > sec || (curSec == sec && curMicros > usec)) {
                    sec = curSec;
                    usec = curMicros;
                    adjustment = 0;
                    isTryAgain = false;

                    std::cout << "Current time is newer than last time, using current time with adjustment set to 0" << std::endl;
                }
                else if (curSec == sec && curMicros == usec) {
                    if (adjustment < MAX_ADJUSTMENT) {
                        adjustment++;
                        isTryAgain = false;
                        std::cout << "Current time is the same as last time, incremented the adjustment to " << adjustment << std::endl;
                    }
                    else {
                        // Ya se alcanzó el máximo ajuste permitido. Intentar nuevamente hasta alcanzar el siguiente milisegundo.
                        std::cout << "Current time is the same as last time and adjustment reached max value of " << MAX_ADJUSTMENT
                                << ", trying again" << std::endl;
                    }
                }
                else {
                    // Retroceso en el reloj detectado
                    auto lastClockTime = std::chrono::system_clock::time_point(std::chrono::seconds(sec) + std::chrono::microseconds(usec));
                    auto currentClockTime = std::chrono::system_clock::time_point(std::chrono::milliseconds(curTimeMillis));

                    std::time_t lastTime = std::chrono::system_clock::to_time_t(lastClockTime);
                    std::time_t currentTime = std::chrono::system_clock::to_time_t(currentClockTime);

                    std::cout << "Clock ticked backwards: Last clock time '" << std::put_time(std::localtime(&lastTime), "%F %T")
                            << "', current clock time '" << std::put_time(std::localtime(&currentTime), "%F %T") << "'. Reloading UUID Generator and forcing a clock sequence increment." << std::endl;

                    // Simular la carga del archivo del reloj con forzado de incremento de secuencia
                    loadClockFile(true);
                    isTryAgain = false;
                }
            } 
        }

         uint64_t UUIDClock::getTime(){
                uint64_t clockReg = usec * 10 + adjustment;
                clockReg += static_cast<uint64_t>(sec) * 10000000;
                clockReg += (0x01B21DD2L << 32) + 0x13814000L;

                // time low
                uint64_t time = clockReg << 32;

                // time mid
                time |= (clockReg >> 16) & 0xFFFF0000L;

                // version
                time |= 0x1000;

                // time high
                time |= (clockReg >> 48) & 0x0FFF;

                return time;
         }

         uint32_t  UUIDClock::getSec(){
            return sec;
         }

         uint16_t  UUIDClock::getUsec(){
            return usec;
         }
         uint16_t UUIDClock::getAdjustment(){
            return adjustment;
         }

         uint16_t UUIDClock::getClockSeq(){
            return getClockSeq;
         }
    } // namespace base
    
} // namespace asb_uci
