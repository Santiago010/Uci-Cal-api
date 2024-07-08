#include "AbstractServiceBusConnection.h"
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
            std::mutex sendLock;
            static log4cpp::Category& root;
            static bool warningAlreadyPrinted;
            std::string NAME = "AbstractServiceBusConnectionFactory";
        public:
            static asb_uci::base::AbstractServiceBusConnection createAbstractServiceBusConnection(std::string serviceInitId);

            std::string getName(); 
        };
        
        
    } // namespace base
    
} // namespace asb_uci
