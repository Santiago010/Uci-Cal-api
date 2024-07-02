#ifndef ASB_UCI_BASE_MESSAGEREADER_H
#define ASB_UCI_BASE_MESSAGEREADER_H

#include "../type/MessageType.h"
#include <type_traits>
#include "MessageListener.h"
#include <memory>
#include <string>
#include <stdexcept>
#include <cms/Session.h>
#include <cms/Connection.h>
#include <cms/MessageConsumer.h>
#include "Externalizer.h"
#include <log4cpp/Category.hh>
#include <log4cpp/PropertyConfigurator.hh>
#include <cms/Message.h>
#include <cms/TextMessage.h>
#include "../../../../cppInterface/2.3.2/include/uci/base/Accessor.h"

namespace asb_uci {
    namespace base {

        template <typename T>
        class MessageReader : public asb_uci::base::MessageListener<T>{
        private:
            std::unique_ptr<cms::Connection> connection;
            std::unique_ptr<cms::Session> session;
            std::unique_ptr<cms::MessageConsumer> consumer;
            asb_uci::base::Externalizer* externalizer;
            std::string topicName;
            std::shared_ptr<T> typeSP;
            uci::base::Accessor typeSPP;
            std::vector<asb_uci::base::MessageListener<T>> listeners;
            log4cpp::Category& root = log4cpp::Category::getRoot();

        public:
            ~MessageReader(){
                try {
                    listeners.clear();
                    session->close();
                    std::cout << "Closed reader for topic {}" << std::endl;
                }
                catch (const std::exception& e) {
                    throw std::runtime_error("Failed to close reader for topic " + topicName + ": " + e.what());
                }
            }
            static_assert(std::is_base_of<asb_uci::type::MessageType, T>::value, "T must derive from MessageType");

            asb_uci::base::MessageListener<T> addListener(asb_uci::base::MessageListener<T> listener);
            void removeListener(asb_uci::base::MessageListener<T> listener);
            std::shared_ptr<T> read(long timeoutSeconds);
            std::shared_ptr<T> readNoWait();
            MessageReader(cms::Connection* conn, const std::string& tn, const std::shared_ptr<T>& t, asb_uci::base::Externalizer* ext);
            void onMessage(cms::Message* message);
            bool listenerEmpty();
            std::shared_ptr<T> parseMessage(cms::Message* message);
        };

    } // namespace base
} // namespace asb_uci


#endif // ASB_UCI_BASE_MESSAGEREADER_H
