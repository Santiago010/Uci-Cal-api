#include <iostream>
#include <memory>
#include <string>
#include <stdexcept>
#include <cms/Session.h>
#include <vector>
#include <cms/Connection.h>
#include <cms/MessageConsumer.h>
#include "../../../include/asb_uci/base/Externalizer.h"
#include "../../../include/asb_uci/base/MessageReader.h"
#include "../../../include/asb_uci/base/MessageListener.h"
#include "../../../include/asb_uci/base/Externalizer.h"
#include <cms/Message.h>
#include <cms/TextMessage.h>

namespace asb_uci{
    namespace base{
        template <typename T>
        class MessageReader : public asb_uci::base::MessageReader<T>{
            public :

                MessageReader::~MessageReader(){
                    try
                    {
                        listeners.clear();
                        session.close();
                        root.info("Closed reader for type {} on topic {}", topicName);
                    }
                    catch(const std::exception& e)
                    {
                        throw std::runtime_error("Failed to close reader for topic " + topicName);
                    }
                    
                }

                void MessageReader::onMessage(cms::Message message){
                    if(!listenerEmpty()){
                            T uciMessage = parseMessage(message);

                            for (MessageListener<T> listener : listeners)
                            {
                                try
                                {
                                    listener.handleMessage(uciMessage);
                                }
                                catch(const std::exception& e)
                                {
                                    root.error("Received error while ",std::string(typeid(*message).name()), " was handling message: ",message);
                                }
                                
                            } 
                    }
                }

                MessageReader::MessageReader(cms::Connection* conn, const std::string& tn,const std::shared_ptr<T>& t, asb_uci::base::Externalizer* ext){
                    typeSP = t;
                    topicName = tn;
                    externalizer = ext;

                    try
                    {
                        session.reset(conn->createSession(cms::Session::AcknowledgeMode::AUTO_ACKNOWLEDGE));

                        cms::Destination* destination = session.createTopic(tn);

                        consumer.reset(session->createConsumer(destination));

                        std::cout << "Created reader for topic " << tn << std::endl;

                    }
                    catch(const std::exception& e)
                    {
                        throw std::runtime_error("Failed to create reader for topic " + tn);
                    }
                    

                }

                bool MessageReader::listenerEmpty(){
                    return listeners.empty();
                }

                asb_uci::base::MessageListener MessageReader::addListener(asb_uci::base::MessageListener listener){
                    try{
                        if(listenerEmpty()){
                            consumer.setMessageListener(listener);

                        }
                        listeners.push_back(listener);
                        root.info("Added listener ",std::string(typeid(*listener).name()));

                    }catch(const std::exception& e){
                        throw std::runtime_error("Failed to add listener: " + e.what());
                    }

                    return listener;
                }
            
            MessageReader::removeListener(asb_uci::base::MessageListener listener){
                try
                {
                    auto it = std::find(listeners.begin(),listeners.end(),listeners);

                    if(it != listeners.end()){
                        listeners.erase(it);
                        root.info("Removed listener ",std::string(typeid(*listener).name()));
                        if(listenerEmpty()){
                            consumer.setMessageListener(nullptr);
                        }
                    }else{
                        root.info("Did not remove listener ", std::string(typeid(*listener).name()));

                    }
                }
                catch(const std::exception& e)
                {
                    throw std::runtime_error("Failed to remove listener " + e.what());
                }
                
            }

            T MessageReader::parseMessage(cms::Message message){
                T uciMessage = nullptr;
                std::string xml = nullptr;

                try
                {
                    if(message != nullptr){
                        cms::TextMessage* textMessage = nullptr;
                        if(textMessage = dynamic_cast<cms::TextMessage*>(message)){
                            xml = textMessage->getText();
                            
                            // Convertir std::string a std::istringstream (simulando ByteArrayInputStream)
                            std::istringstream inputStream(xml);

                            // Crear un std::istringstream que se use para leer datos del std::istringstream
                            std::istringstream reader(inputStream);

                            uciMessage = asb_uci::base::Externalizer.read(reader,typeSP);

                            root.info("Received message from topic",topicName, " ", xml);
                        }else{
                            root.error("Received unknown JMS message type ", std::string(typeid(*message).name()), " on topic ")
                        }
                    }
                }
                catch(const std::exception& e)
                {
                    throw std::runtime_error("Failed to receive message from topic " + e.what());
                }
                
            }

            std::shared_ptr<T> MessageReader::read(long timeoutSeconds){
                T uciMessage = nullptr;

                try
                {
                    uciMessage = parseMessage(consumer.receive(timeoutSeconds * 1000));

                }
                catch(const std::exception& e)
                {
                    root.error("Failed to consume JMS Message on topic ", topicName);
                    throw std::runtime_error("Failed to consume JMS Message on topic " + e.what());
                }
                
            }

            std::shared_ptr<T> MessageReader::readNoWait(){
                T uciMessage = nullptr;

                try
                {
                    uciMessage = parseMessage(consumer.receiveNoWait());

                }
                catch(const std::exception& e)
                {
                    root.error("Failed to consume JMS Message on topic ", topicName);
                    throw std::runtime_error("Failed to consume JMS Message on topic " + e.what());
                }
            }
        }
    }
}