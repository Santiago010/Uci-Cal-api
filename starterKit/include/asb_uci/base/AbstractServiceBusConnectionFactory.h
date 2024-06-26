#include "AbstractServiceBusConnection.h"
#include "../../../src/asb_uci/base/config/CalConfig.h"
#include <iostream>
#include <string>
#include <log4cpp/Category.hh>//Libreria para los Logs 
#include <log4cpp/PropertyConfigurator.hh> //libreria para


namespace asb_uci
{
    namespace base
    {
        class AbstractServiceBusConnectionFactory
        {
        private:
            asb_uci::base::config::CalConfig config;
            std::mutex sendLock;
            log4cpp::Category& root = log4cpp::Category::getRoot();
            bool warningAlreadyPrinted = false;
            std::string NAME = "AbstractServiceBusConnectionFactory";
        public:
            static asb_uci::base::AbstractServiceBusConnection createAbstractServiceBusConnection(std::string serviceInitId);

            asb_uci::base::config::CalConfig loadConfigFile();
            std::string getName(); 
        };
        
        
    } // namespace base
    
} // namespace asb_uci
