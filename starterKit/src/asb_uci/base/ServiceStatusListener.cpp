#include "../../../include/asb_uci/base/ServiceStatusListener.h"
#include "../../../include/asb_uci/base/Externalizer.h"
#include <log4cpp/Category.hh> // Libreria para los Logs 
#include <log4cpp/PropertyConfigurator.hh> // Libreria para los Logs
#include <memory> // Para std::shared_ptr

namespace asb_uci {
    namespace base {
        log4cpp::Category& ServiceStatusListener::root = log4cpp::Category::getRoot();

        ServiceStatusListener::ServiceStatusListener(asb_uci::base::Externalizer xmlExter)
            : xmlExternalizer(xmlExter) {
        }


        // TODO:hay que mirar si es necesaria la implementacion
         void ServiceStatusListener::onMessage(const cms::Message* message){

         }
    }
}
