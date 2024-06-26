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

namespace asb_uci {
    namespace base {

        template <typename T>
        class MessageReader : public asb_uci::base::MessageReader<T> {
        private:
            std::unique_ptr<cms::Connection> connection;
            std::unique_ptr<cms::Session> session;
            std::unique_ptr<cms::MessageConsumer> consumer;
            asb_uci::base::Externalizer* externalizer;
            std::string topicName;
            std::shared_ptr<T> typeSP;
            std::vector<asb_uci::base::MessageListener<T>> listeners;
            log4cpp::Category& root = log4cpp::Category::getRoot();

        public:
            MessageReader(cms::Connection* conn, const std::string& tn, const std::shared_ptr<T>& t, asb_uci::base::Externalizer* ext)
                : connection(conn), topicName(tn), typeSP(t), externalizer(ext) {

                try {
                    session.reset(conn->createSession(cms::Session::AcknowledgeMode::AUTO_ACKNOWLEDGE));
                    cms::Destination* destination = session->createTopic(tn);
                    consumer.reset(session->createConsumer(destination));
                    root.info("Created reader for topic {}", tn);
                }
                catch (const std::exception& e) {
                    throw std::runtime_error("Failed to create reader for topic " + tn + ": " + e.what());
                }
            }

            ~MessageReader() {
                try {
                    listeners.clear();
                    session->close();
                    root.info("Closed reader for topic {}", topicName);
                }
                catch (const std::exception& e) {
                    throw std::runtime_error("Failed to close reader for topic " + topicName + ": " + e.what());
                }
            }

            void onMessage(cms::Message* message) {
                if (!listenerEmpty()) {
                    try {
                        T uciMessage = parseMessage(message);
                        for (auto& listener : listeners) {
                            listener.handleMessage(uciMessage);
                        }
                    }
                    catch (const std::exception& e) {
                        root.error("Error handling message: ", e.what());
                    }
                }
            }

asb_uci::base::MessageListener<T> addListener(asb_uci::base::MessageListener<T> listener) override {
                try {
                    if (listenerEmpty()) {
                        consumer->setMessageListener(this);
                    }
                    listeners.push_back(listener);
                    root.info("Added listener for topic {}", topicName);
                }
                catch (const std::exception& e) {
                    throw std::runtime_error("Failed to add listener: " + std::string(e.what()));
                }
                return listener;
            }

            void removeListener(asb_uci::base::MessageListener<T> listener) override {
                try {
                    auto it = std::find(listeners.begin(), listeners.end(), listener);
                    if (it != listeners.end()) {
                        listeners.erase(it);
                        root.info("Removed listener for topic {}", topicName);
                        if (listenerEmpty()) {
                            consumer->setMessageListener(nullptr);
                        }
                    }
                    else {
                        root.info("Listener not found for topic {}", topicName);
                    }
                }
                catch (const std::exception& e) {
                    throw std::runtime_error("Failed to remove listener: " + std::string(e.what()));
                }
            }

            std::shared_ptr<T> read(long timeoutSeconds) override {
                try {
                    cms::Message* message = consumer->receive(timeoutSeconds * 1000);
                    return parseMessage(message);
                }
                catch (const std::exception& e) {
                    root.error("Failed to receive message from topic {}: {}", topicName, e.what());
                    return nullptr;
                }
            }

            std::shared_ptr<T> readNoWait() override {
                try {
                    cms::Message* message = consumer->receiveNoWait();
                    return parseMessage(message);
                }
                catch (const std::exception& e) {
                    root.error("Failed to receive message from topic {}: {}", topicName, e.what());
                    return nullptr;
                }
            }

            T parseMessage(cms::Message* message) {
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

            bool listenerEmpty() {
                return listeners.empty();
            }
        };

    } // namespace base
} // namespace asb_uci
