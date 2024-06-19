#include <iostream>
#include <string>
#include "../../../../cppInterface/2.3.2/include/uci/base/UUID.h"
#include "UUIDGenerator.h"
#include "../../../src/asb_uci/base/config/CalConfig.h"
#include <log4cpp/Category.hh>//Libreria para los Logs 
#include <log4cpp/PropertyConfigurator.hh> //libreria para


namespace asb_uci{
    namespace base{
        class UUIDFactory{

            public:

                UUIDFactory();
                std::string getName();

                uci::base::UUID getNilUUID();

                uci::base::UUID generateUUID();

                std::string getGeneratorType();

                uci::base::UUID getNamespaceUUID();

                uci::base::UUID createVersion3UUID(const uci::base::UUID& namespaceUUID, const std::string& name);

                uci::base::UUID createVersion3UUID(std::string& name);

                asb_uci::base::config::CalConfig loadConfigFile();

            private :
                log4cpp::Category& root = log4cpp::Category::getRoot();
                std::string UUID_FACTORY_NAME = "C++RefCALUUIDFactory";
                std::string uuidGenType;
                asb_uci::base::UUIDGenerator uuidGen;
                uci::base::UUID uuid;
                uci::base::UUID defaultNamespace;
                asb_uci::base::config::CalConfig config;
                std::mutex UUIDFactory<T>::sendLock;
        }
    }
}