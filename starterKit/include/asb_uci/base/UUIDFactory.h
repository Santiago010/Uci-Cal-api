#include <iostream>
#include <string>
#include "../../../../cppInterface/2.3.2/include/uci/base/UUID.h"
#include "UUIDGenerator.h"
#include <log4cpp/Category.hh>//Libreria para los Logs 
#include <log4cpp/PropertyConfigurator.hh> //libreria para

#ifndef UUIDFACTORY_H
#define UUIDFACTORY_H

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


            private :
                log4cpp::Category& root = log4cpp::Category::getRoot();
                std::string UUID_FACTORY_NAME = "C++RefCALUUIDFactory";
                std::string uuidGenType;
                asb_uci::base::UUIDGenerator uuidGen;
                uci::base::UUID uuid;
                uci::base::UUID defaultNamespace;
    
                static std::mutex sendLock;
        };
    }
}

#endif // UUIDFACTORY_H
