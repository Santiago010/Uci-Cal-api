#include <iostream>
#include <memory>
#include <string>
#include <stdexcept>
#include <sstream>
#include <cms/Session.h>
#include <cms/Connection.h>
#include <cms/MessageConsumer.h>
#include <cms/TextMessage.h>
#include <log4cpp/Category.hh>
#include "../../../include/asb_uci/base/Externalizer.h"
#include "../../../include/asb_uci/base/MessageReader.h"
#include "../../../include/asb_uci/base/MessageListener.h"
#include "../../../include/asb_uci/type/ServiceStatusMT.h"


namespace asb_uci {
    namespace base {

        template <typename T>
        MessageReader<T>::MessageReader(cms::Connection* conn, const std::string& tn, const std::shared_ptr<T>& t, asb_uci::base::Externalizer* ext)
            : connection(conn), topicName(tn), typeSP(t), externalizer(ext) {

            try {
                session.reset(conn->createSession(cms::Session::AcknowledgeMode::AUTO_ACKNOWLEDGE));
                cms::Destination* destination = session->createTopic(tn);
                consumer.reset(session->createConsumer(destination));
                root.info("Created reader for topic {}", tn.c_str());
            }
            catch (const std::exception& e) {
                throw std::runtime_error("Failed to create reader for topic " + tn + ": " + e.what());
            }
        }


        template <typename T>
        void MessageReader<T>::onMessage(cms::Message* message) {
            if (!listenerEmpty()) {
                try {
                    std::shared_ptr<T> uciMessage = parseMessage(message);
                    for (auto& listener : listeners) {
                        listener.handleMessage(uciMessage);
                    }
                }
                catch (const std::exception& e) {
                    root.error("Error handling message: ", e.what());
                }
            }
        }

        template <typename T>
        asb_uci::base::MessageListener<T> MessageReader<T>::addListener(asb_uci::base::MessageListener<T> listener) {
            try {
                if (listenerEmpty()) {
                    
                    consumer->setMessageListener(this);
                }
                listeners.push_back(listener);
                root.info("Added listener for topic {}", topicName.c_str());
            }
            catch (const std::exception& e) {
                throw std::runtime_error("Failed to add listener: " + std::string(e.what()));
            }
            return listener;
        }

        template <typename T>
        void MessageReader<T>::removeListener(asb_uci::base::MessageListener<T> listener) {
            try {
                auto it = std::find(listeners.begin(), listeners.end(), listener);
                if (it != listeners.end()) {
                    listeners.erase(it);
                    root.info("Removed listener for topic {}", topicName.c_str());
                    if (listenerEmpty()) {
                        consumer->setMessageListener(nullptr);
                    }
                }
                else {
                    root.info("Listener not found for topic {}", topicName.c_str());
                }
            }
            catch (const std::exception& e) {
                throw std::runtime_error("Failed to remove listener: " + std::string(e.what()));
            }
        }

        template <typename T>
        std::shared_ptr<T> MessageReader<T>::read(long timeoutSeconds) {
            try {
                cms::Message* message = consumer->receive(timeoutSeconds * 1000);
                return parseMessage(message);
            }
            catch (const std::exception& e) {
                root.error("Failed to receive message from topic {}: {}", topicName.c_str(), e.what());
                return nullptr;
            }
        }

        template <typename T>
        std::shared_ptr<T> MessageReader<T>::readNoWait() {
            try {
                cms::Message* message = consumer->receiveNoWait();
                return parseMessage(message);
            }
            catch (const std::exception& e) {
                root.error("Failed to receive message from topic {}: {}", topicName.c_str(), e.what());
                return nullptr;
            }
        }

        template <typename T>
        std::shared_ptr<T> MessageReader<T>::parseMessage(cms::Message* message) {
            try {
                if (!message) {
                    throw std::runtime_error("Received null message");
                }

                cms::TextMessage* textMessage = dynamic_cast<cms::TextMessage*>(message);
                if (!textMessage) {
                    throw std::runtime_error("Received unexpected message type");
                }

                std::string xml = textMessage->getText();
                std::istringstream inputStream(xml);

                return externalizer->read(inputStream, typeSP);
            }
            catch (const std::exception& e) {
                root.error("Failed to parse message from topic {}: {}", topicName, e.what());
                throw;
            }
        }

        template <typename T>
        bool MessageReader<T>::listenerEmpty() {
            return listeners.empty();
        }

        // Instanciación explícita de tipos utilizados
        // template class MessageReader<asb_uci::type::ServiceStatusMT>;
        // Agrega más instanciaciones según sea necesario para otros tipos
        template class MessageReader<asb_uci::type::ServiceStatusMT>;


    } // namespace base
} // namespace asb_uci
