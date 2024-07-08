#include "../../../include/asb_uci/base/AbstractServiceBusConnectionFactory.h"
#include "../../../include/asb_uci/base/AbstractServiceBusConnection.h"
#include <iostream>
#include <string>
#include <log4cpp/Category.hh>//Libreria para los Logs 
#include <log4cpp/PropertyConfigurator.hh> //libreria para


namespace asb_uci{
    namespace base{

        log4cpp::Category& AbstractServiceBusConnectionFactory::root = log4cpp::Category::getRoot();
        bool AbstractServiceBusConnectionFactory::warningAlreadyPrinted = false;

        asb_uci::base::AbstractServiceBusConnection AbstractServiceBusConnectionFactory::createAbstractServiceBusConnection(std::string serviceInitId){


            asb_uci::base::AbstractServiceBusConnection absc(serviceInitId);
            root.info("Initialized ASBC with service identifier '{}'",serviceInitId.c_str());

            if(AbstractServiceBusConnectionFactory::warningAlreadyPrinted == false){
                std::cout << "ATTENTION: The StarterKit CAL is not to be fielded in an operational capacity. This software is intended for research, \n"<<
                                "training, and development use and has undergone neither safety nor software assurance testing. Use at your own risk." << std::endl;
                AbstractServiceBusConnectionFactory::warningAlreadyPrinted = true;
            }

            return absc;
        }



        std::string AbstractServiceBusConnectionFactory::getName(){
            return NAME;
        }
    }
}