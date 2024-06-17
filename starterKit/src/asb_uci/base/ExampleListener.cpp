#include <iostream>

#include "../../../../cppInterface/2.3.2/include/uci/base/AbstractServiceBusConnectionStatusListener.h"


#include "headers/ExampleListener.h"

using namespace std;

// Implementación del método statusChanged
void ExampleListener::statusChanged(uci::base::AbstractServiceBusConnection::AbstractServiceBusConnectionStatusData newStatus) {
    cout << "statusChanged"<< endl;
}
