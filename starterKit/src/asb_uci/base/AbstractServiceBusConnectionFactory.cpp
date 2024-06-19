#include "../../../include/asb_uci/base/AbstractServiceBusConnectionFactory.h"
#include "../../../include/asb_uci/base/AbstractServiceBusConnection.h"
#include "config/CalConfig.h"
#include <iostream>
#include <string>
#include <log4cpp/Category.hh>//Libreria para los Logs 
#include <log4cpp/PropertyConfigurator.hh> //libreria para


namespace asb_uci{
    namespace base{

        asb_uci::base::AbstractServiceBusConnection AbstractServiceBusConnectionFactory::createAbstractServiceBusConnection(std::string serviceInitId){
            if(config == nullptr){
                std::lock_guard<std::mutex> lock(sendLock);

                try
                {
                    if(config == nullptr){
                        config = loadConfigFile();
                    }
                }
                catch(const std::exception& e)
                {
                    throw std::runtime_error("Failed to load CAL configuration, check this CAL's config file from createAbstractServiceBusConnection" + std::string(e.what()));
                }
                
            }

            asb_uci::base::AbstractServiceBusConnection absc(serviceInitId);
            root.info("Initialized ASBC with service identifier '{}'",serviceInitId);

            if(!warningAlreadyPrinted){
                std::cout << "ATTENTION: The StarterKit CAL is not to be fielded in an operational capacity. This software is intended for research, \n"<<
                                "training, and development use and has undergone neither safety nor software assurance testing. Use at your own risk." << std::endl;
                warningAlreadyPrinted = true;
            }

            return absc;
        }

                asb_uci::base::config::CalConfig AbstractServiceBusConnectionFactory::loadConfigFile(){
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

        std::string AbstractServiceBusConnectionFactory::getName(){
            return NAME;
        }
    }
}