#include <iostream>
#include <string.h>
#include <log4cpp/Category.hh>//Libreria para los Logs 
#include <log4cpp/PropertyConfigurator.hh> //libreria para


// TODO:definir ahorita
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
        public:
            UUIDClock(const std::string& cf);
            void loadClockFile(bool isForceClockSeqIncr);
            void parseAndUpdateClockFile(std::fstream clockRAF,bool isForceClockSeqIncr);
        

        };
        
    } // namespace base
    
} // namespace asb_uci
