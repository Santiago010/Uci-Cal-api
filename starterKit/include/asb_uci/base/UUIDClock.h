#include <iostream>
#include <mutex>
#include <string.h>
#include <regex>
#include <log4cpp/Category.hh>//Libreria para los Logs 
#include <log4cpp/PropertyConfigurator.hh> //libreria para


namespace asb_uci
{
    namespace base
    {
        class UUIDClock
        {
        private:
            /* data */
            log4cpp::Category& root = log4cpp::Category::getRoot();
            std::string clockFile;
            std::mutex clockGuard;
            uint16_t clockSeq = 0;
            uint32_t sec = 0;
            uint16_t usec = 0;
            uint16_t adjustment = 0;
            int MAX_ADJUSTMENT = 9999;
            const std::regex CLOCK_PATTERN("^([0-9a-fA-F]{1,4})-(\\d+)-(\\d+)-(\\d+)$");
        public:
            void parseClockData(std::string clockData, std::string clockFileName, bool isForceClockSeqIncr);
            uint64_t getTime();
            uint32_t getSec();
            uint16_t getUsec();
            uint16_t getAdjustment();
            uint16_t getClockSeq();
            UUIDClock(const std::string& cf);
            void loadClockFile(bool isForceClockSeqIncr);
            void createClockData();
            void tick();
            void parseAndUpdateClockFile(std::fstream clockRAF,bool isForceClockSeqIncr);
            uint16_t hexStringToInt(const std::string& hexStr);
            uint32_t safeConvertToUint32(long value);
            uint16_t safeConvertToIntToUint16(int intValue);
        

        };
        
    } // namespace base
    
} // namespace asb_uci
