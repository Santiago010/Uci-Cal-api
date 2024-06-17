#include "../../../../../cppInterface/2.3.2/include/uci/base/AbstractServiceBusConnectionStatusListener.h"

class ExampleListener : public uci::base::AbstractServiceBusConnectionStatusListener {
public:
    // Implementación del método virtual puro statusChanged
    void statusChanged(uci::base::AbstractServiceBusConnection::AbstractServiceBusConnectionStatusData newStatus);
};
