#include "UUIDGenerator.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UUID.h"
#include <iostream>
#include <string.h>
#include <log4cpp/Category.hh>//Libreria para los Logs 
#include <log4cpp/PropertyConfigurator.hh> //libreria para

namespace asb_uci
{
    namespace base
    {
        class RandomUUIDGenerator: public asb_uci::base::UUIDGenerator{
            private:
                std::string GENERATOR_TYPE = "version 4 (random)";
                log4cpp::Category& root = log4cpp::Category::getRoot();
            public:
                 RandomUUIDGenerator();
                 uci::base::UUID generateUUID() override;
                 std::string getGeneratorType() override;

        }
    } // namespace base
    
} // namespace asb_uci
