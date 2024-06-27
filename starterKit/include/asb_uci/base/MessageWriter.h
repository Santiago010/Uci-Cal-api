#ifndef ASB_UCI_BASE_MESSAGEWRITER_H
#define ASB_UCI_BASE_MESSAGEWRITER_H

#include <log4cpp/Category.hh>//Libreria para los Logs 
#include <log4cpp/PropertyConfigurator.hh> //libreria para
#include "Externalizer.h"
#include <cms/Session.h>
#include <cms/MessageProducer.h>
#include <string>
#include <cms/Connection.h>

namespace asb_uci{
    namespace base{

        template <typename T>
        class MessageWriter{
            private:
                log4cpp::Category& root = log4cpp::Category::getRoot();
                std::shared_ptr<T> typeSP;
                asb_uci::base::Externalizer externalizer;
                std::string topicName;
                std::unique_ptr<cms::Session> session;
                std::unique_ptr<cms::MessageProducer> producer;
                std::mutex sendLock;
            public:
                virtual ~MessageWriter() = default;
                static_assert(std::is_base_of<asb_uci::type::MessageType, T>::value, "T must derive from MessageType");

                MessageWriter(cms::Connection* conn, const std::string& tn,const std::shared_ptr<T>& t, asb_uci::base::Externalizer* ext);

                virtual void write(T message) = 0;
        };
    }
}


#endif // ASB_UCI_BASE_MESSAGERWRITER_H