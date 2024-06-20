#include "../../../include/asb_uci/base/RandomUUIDGenerator.h"
#include <iostream>
#include <string.h>
#include <log4cpp/Category.hh>//Libreria para los Logs 
#include <log4cpp/PropertyConfigurator.hh> //libreria para
#include "../../../../cppInterface/2.3.2/include/uci/base/UUID.h"

namespace asb_uci
{
    namespace base{
        RandomUUIDGenerator::RandomUUIDGenerator(){
            root.info("Using Random UUID Generator");
        }

        uci::base::UUID RandomUUIDGenerator::generateUUID(){
            uci::base::UUID uuid;
            uuid.createVersion3UUID();
            root.info("Generated Random UUID: {}", uuid);
            return uuid;
        }

        std::string RandomUUIDGenerator::getGeneratorType(){
            return GENERATOR_TYPE;
        }
    }
} // namespace asb_uci
