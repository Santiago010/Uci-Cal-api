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
#include <log4cpp/Category.hh>//Libreria para los Logs 
#include <log4cpp/PropertyConfigurator.hh> //libreria para los Logs
#include <cms/Message.h>
#include <cms/TextMessage.h>


namespace asb_uci {
    namespace base {

        template <typename T>
        class MessageReader {
        private: 
            std::unique_ptr<cms::Connection> connection;
            std::unique_ptr<cms::Session> session;
            std::unique_ptr<cms::MessageConsumer> consumer;
            asb_uci::base::Externalizer* externalizer;
            std::string topicName;
            std::shared_ptr<T> typeSP;
            std::vector<asb_uci::base::MessageListener> listeners;
            log4cpp::Category& root = log4cpp::Category::getRoot();
        public:
            virtual ~MessageReader() = default;
            static_assert(std::is_base_of<asb_uci::type::MessageType, T>::value, "T must derive from MessageType");

             /**
             * Registers a listener that will listen for new messages as they arrive.
             * When a new message arrives, the listener's handleMessage function will be invoked.
             * 
             * @param listener The listener that handles the message.
             * @return The instance of the added listener.
             */
            virtual asb_uci::base::MessageListener addListener(asb_uci::base::MessageListener listener) = 0;

            /**
             * Removes the specified listener that was previously added to listen to the arrival of new messages.
             * 
             * @param listener The listener that is to be removed.
             */
            virtual void removeListener(asb_uci::base::MessageListener listener) = 0;

            /**
             * Reads arriving messages. If no messages have arrived previous to the invocation of this method, then this method
             * will block waiting for messages to arrive or until the timeout expires in which case this method will immediately
             * return nullptr. Once messages are available for processing, the messages will be returned in FIFO order.
             * 
             * @param timeoutSeconds Maximum time in seconds to wait for new messages to arrive.
             *                       A timeout of zero never expires and the call blocks indefinitely.
             *                       The timeout is ignored if one or more messages are already queued.
             * @return The next message on the receive queue, or nullptr if timeout occurs.
             */
            virtual std::shared_ptr<T> read(long timeoutSeconds) = 0;

            virtual T parseMessage(cms::Message message) = 0;

             /**
             * Reads arriving messages. If no messages have arrived previous to the invocation of this method, then this method
             * will immediately return nullptr. If messages are available for processing, the messages will be returned
             * in FIFO order.
             * 
             * @return The next message on the receive queue, or nullptr if the queue is empty.
             */
            virtual std::shared_ptr<T> readNoWait() = 0;

            MessageReader(cms::Connection* conn, const std::string& tn,const std::shared_ptr<T>& t, asb_uci::base::Externalizer* ext);

            virtual bool listenerEmpty() = 0;

            virtual void onMessage(cms::Message message) = 0;
        };

    } // namespace base
} // namespace asb_uci

#endif // ASB_UCI_BASE_MESSAGEREADER_H
