#include "../../../include/asb_uci/base/UUIDFactory.h"
#include "../../../include/asb_uci/base/Version3UUIDHelper.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UUID.h"
#include "config/CalConfig.h"
#include <iostream>
#include <string>

namespace asb_uci{
    namespace base{

        UUIDFactory::UUIDFactory(){
            if(config == nullptr){
                std::lock_guard<std::mutex> lock(sendLock);
                try
                {
                    if(config == 0){
                        config = loadConfigFile();
                    }
                }
                catch(const std::exception& e)
                {
                    throw std::runtime_error("Failed to load CAL configuration, check this CAL's config file from constructor" + std::string(e.what()));
                }
                
            }
        }
        std::string UUIDFactory::getName(){
            return UUID_FACTORY_NAME;
        }

        uci::base::UUID UUIDFactory::getNilUUID(){
            return uuid.getNilUUID;
        }

        uci::base::UUID UUIDFactory::generateUUID(){
            return uuidGen.generateUUID();
        }

        uci::base::UUID UUIDFactory::getNamespaceUUID(){
            return defaultNamespace;
        }

        uci::base::UUID UUIDFactory::createVersion3UUID(const uci::base::UUID& namespaceUUID, const std::string& name){
            asb_uci::base::Version3UUIDHelper v;
            return v.createVersion3UUID(namespaceUUID,name);
        }

        uci::base::UUID UUIDFactory::createVersion3UUID(const std::string& name){
            asb_uci::base::Version3UUIDHelper v;
            return v.createVersion3UUID(defaultNamespace,name);
        }

        std::string UUIDFactory::getGeneratorType(){
            return uuidGenType;
        }

        asb_uci::base::config::CalConfig UUIDFactory::loadConfigFile(){
            asb_uci::base::config::CalConfig calConfig = nullptr;
            try
            {
                calConfig.load();

                if(calConfig == nullptr){
                    root.error("Failed to load CAL configuration, check this CAL's config file");
                }
            }
            catch(const std::exception& e)
            {
                throw std::runtime_error("Failed to load CAL configuration, check this CAL's config file from loadConfigFile" + std::string(e.what()));
            }

           return calConfig;            
        }


    }
}