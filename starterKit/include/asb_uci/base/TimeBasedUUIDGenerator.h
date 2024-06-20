#include "UUIDGenerator.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UUID.h"
#include "UUIDClock.h"
#include <iostream>
#include <string.h>
#include <log4cpp/Category.hh>//Libreria para los Logs 
#include <log4cpp/PropertyConfigurator.hh> //libreria para


namespace asb_uci
{
    namespace base
    {
        class TimeBasedUUIDGenerator : public asb_uci::base::UUIDGenerator
        {
        private:
            std::string GENERATOR_TYPE = "version 1 (time-based)";
            long long VARIANT = 0x8000000000000000LL;
            log4cpp::Category& root = log4cpp::Category::getRoot();
            asb_uci::base::UUIDClock clock;
            uint64_t leastSigBytes;

        public:
            TimeBasedUUIDGenerator (const std::string& filePath);
            uci::base::UUID generateUUID() override;
            std::string getGeneratorType() override;
            uint64_t getMacAddressLong(const std::vector<uint8_t>& macAddress);
        };
        

        
    } // namespace base
    
} // namespace asb_uci
