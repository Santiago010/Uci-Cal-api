#include <iostream>
#include <fstream>
#include <string.h>
#include "../../../include/asb_uci/base/UUIDClock.h"
#include <log4cpp/Category.hh>//Libreria para los Logs 
#include <log4cpp/PropertyConfigurator.hh> //libreria para

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
            
        }
    } // namespace base
    
} // namespace asb_uci
