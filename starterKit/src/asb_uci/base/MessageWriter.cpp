#include "../../../include/asb_uci/base/MessageWriter.h"
#include "../../../include/asb_uci/base/Externalizer.h"
#include <cms/Connection.h>
#include <cms/Session.h>
#include <string>
#include <iostream>
#include <cms/MessageProducer.h>
#include <cms/DeliveryMode.h>
#include <log4cpp/Category.hh>//Libreria para los Logs 
#include <log4cpp/PropertyConfigurator.hh> //libreria para

namespace asb_uci{
    namespace base{

        template <typename T>
        class MessageWriter : public asb_uci::base::MessageWriter<T>{
            public :

                MessageWriter::MessageWriter(cms::Connection* conn, const std::string& tn,const std::shared_ptr<T>& t, asb_uci::base::Externalizer* ext){
                    typeSP = t;
                    topicName : tn;
                    externalizer = ext;

                    try
                    {
                        session(conn->createSession(cms::Session::AcknowledgeMode::AUTO_ACKNOWLEDGE));

                        cms::Destination* destination = session.createTopic(tn);

                        producer = session.createProducer(destination);
                        producer.setDeliveryMode(cms::DeliveryMode::NON_PERSISTENT);

                        root.info("Created writer for type {} on topic {} ",tn);
                    }
                    catch(const std::exception& e)
                    {
                        throw std::runtime_error("Failed to create reader for topic " + tn);
                    }
                    
                }

                MessageWriter::~MessageWriter(){
                    session.close();
                    root.info("Closed writer for type {} on topic {}", std::string(typeid(*typeSP).name()), topicName);
                }

                void MessageWriter::write(T message){

                    try
                    {
                        std::string xml = nullptr;

                        std::ostringstream baos;
                        externalizer.writer(message,baos);
                        xml = baos.str();

                        std::lock_guard<std::mutex> lock(sendLock);

                        try
                        {
                            cms::TextMessage jmsMessage = session.createTextMessage(xml);
                            producer.send(jmsMessage);
                            root.info("Wrote message to topic {}: {}", topicName, xml)
                        }
                        catch(const std::exception& e)
                        {
                            root.error("Can’t Write a message to the topic",topicName,xml);
                        }
                    }
                    catch(const std::exception& e)
                    {
                        throw std::runtime_error("Failed to write to topic",std::string(typeid(*message).name()),topicName,e.what());
                    }
                    
                }
        }
    }
}