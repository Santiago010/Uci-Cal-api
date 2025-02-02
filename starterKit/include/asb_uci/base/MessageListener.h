#ifndef ASB_UCI_BASE_MESSAGELISTENER_H
#define ASB_UCI_BASE_MESSAGELISTENER_H

#include "../type/MessageType.h"
#include <memory> // Para std::shared_ptr
#include <stdexcept> // Para std::runtime_error
#include <cms/MessageListener.h>
#include <boost/shared_ptr.hpp>
#include <cms/Message.h>

namespace asb_uci {
namespace base {

template <typename T>
class MessageListener : public cms::MessageListener {
public:
    virtual ~MessageListener() = default;

    /**
     * The handleMessage method is used to handle incoming messages.
     * 
     * @param message The newly arrived message that is to be processed by this method.
     */

    void onMessage(const cms::Message* message) override;

    /**
     * Optional method to handle any exceptions thrown by handleMessage.
     * 
     * @param exception The exception thrown by handleMessage.
     */
    void handleException(const std::runtime_error& exception);
};

} // namespace base
} // namespace asb_uci

#endif // ASB_UCI_BASE_MESSAGELISTENER_H
