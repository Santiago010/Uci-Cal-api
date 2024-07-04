#ifndef ASB_UCI_BASE_SERVICESTATUSLISTENER_H
#define ASB_UCI_BASE_SERVICESTATUSLISTENER_H

#include "MessageListener.h"
#include "../type/ServiceStatusMT.h"
#include "Externalizer.h"
#include <log4cpp/Category.hh> // Libreria para los Logs 
#include <log4cpp/PropertyConfigurator.hh> // Libreria para los Logs
#include <memory> // Para std::shared_ptr

namespace asb_uci
{
    namespace base
    {
        class ServiceStatusListener : public asb_uci::base::MessageListener<asb_uci::type::ServiceStatusMT> {
        public:
            ServiceStatusListener(asb_uci::base::Externalizer xmlExter);
            void handleMessage(std::shared_ptr<asb_uci::type::ServiceStatusMT> message);
            void onMessage(const cms::Message* message) override;

        private:
            asb_uci::base::Externalizer xmlExternalizer;
            static log4cpp::Category& root;
        };
    } // namespace base
} // namespace asb_uci

#endif // ASB_UCI_BASE_SERVICESTATUSLISTENER_H
