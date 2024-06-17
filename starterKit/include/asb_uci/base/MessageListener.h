#ifndef ASB_UCI_BASE_MESSAGELISTENER_H
#define ASB_UCI_BASE_MESSAGELISTENER_H

#include "../type/MessageType.h"
#include <memory> // Para std::shared_ptr
#include <stdexcept> // Para std::runtime_error

namespace asb_uci {
namespace base {

template <typename T>
class MessageListener {
public:
    virtual ~MessageListener() = default;

    /**
     * The handleMessage method is used to handle incoming messages.
     * 
     * @param message The newly arrived message that is to be processed by this method.
     */
    virtual void handleMessage(std::shared_ptr<T> message) = 0;

    /**
     * Optional method to handle any exceptions thrown by handleMessage.
     * 
     * @param exception The exception thrown by handleMessage.
     */
    virtual void handleException(const std::runtime_error& exception) {
        // Default implementation does nothing
    }
};

} // namespace base
} // namespace asb_uci

#endif // ASB_UCI_BASE_MESSAGELISTENER_H
