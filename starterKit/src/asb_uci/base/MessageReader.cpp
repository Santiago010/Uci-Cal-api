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

namespace asb_uci{
    namespace base{
        template <typename T>
        class MessageReader : public asb_uci::base::MessageReader<T>{
            public :
                MessageReader::MessageReader(cms::Connection* conn, const std::string& topicName, asb_uci::base::Externalizer* ext){
                    // TODO:falta recibir el parametro type y guardarlo en un miembro con el mismo nombre
                    topicName = topicName;
                    externalizer = ext;

                    try
                    {
                        session.reset(conn->createSession(cms::Session::AcknowledgeMode::AUTO_ACKNOWLEDGE));

                        cms::Destination* destination = session.createTopic(topicName);

                        consumer.reset(session->createConsumer(destination));

                        std::cout << "Created reader for topic " << topicName << std::endl;

                    }
                    catch(const std::exception& e)
                    {
                        std::cerr << "Failed to create reader for topic " << topicName << ": " << e.getMessage() << std::endl;
                        throw std::runtime_error("Failed to create reader for topic " + topicName);
                    }
                    

                }

                bool MessageReader::listenerEmpty(){
                    listeners.empty()
                }

                MessageReader::addListener(asb_uci::base::MessageListener listener){
                    try{
                        if(listenerEmpty()){
                            consumer.setMessageListener(listener);

                        }
                        listeners.push_back(listener);
                        root.info("Added listener {}");

                    }catch(const std::exception& e){
                        root.error("Failed to add listener ");
                        throw std::runtime_error("Failed to add listener");
                    }

                    return listener;
                }
            
            MessageReader::removeListener(asb_uci::base::MessageListener listener){
                try
                {
                    auto it = std::find(listeners.begin(),listeners.end(),listeners);

                    if(it != listeners.end()){
                        listeners.erase(it);
                        root.info("Removed listener " + std::string(typeid(*listener).name()));
                        if(listenerEmpty()){
                            consumer.setMessageListener(nullptr);
                        }
                    }else{
                        root.info("Did not remove listener " + std::string(typeid(*listener).name()));

                    }
                }
                catch(const std::exception& e)
                {
                    std::cerr << "Failed to remove listener "  << e.getMessage() << std::endl;
                }
                
            }
        }
    }
}