// Example.h

#include "../../../include/asb_uci/base/Externalizer.h"
#include "../../../include/asb_uci/base/AbstractServiceBusConnection.h"
#include "../../../include/asb_uci/type/ServiceStatusMT.h"
#include "../../../include/asb_uci/type/SystemID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TimeType.h"


#ifndef EXAMPLE_H
#define EXAMPLE_H

class Example {
    private :
        static asb_uci::type::ServiceStatusMDT createServiceStatusMT(asb_uci::base::AbstractServiceBusConnection asbs);
        static void testOMS83AddAndChoiceMethods();
    public:

        asb_uci::type::SystemID_Type systemId();
        
        static void runExample(int argc, char* argv[]);
        // TODO:metodo por implementarº
        static void testExternalizerRead(asb_uci::base::Externalizer& externalizer);
        // TODO:metodo por implementarº
        static std::istream& readFile(const std::string& filename);
        // TODO:metodo por implementar
        static void testOMS93testForeachAndAddmethods();
        static void testVersion3UUIDGeneration(asb_uci::base::AbstractServiceBusConnection asbs);
        static std::string getVersion();
        static asb_uci::type::SystemID_Type getSystemId();
        static uci::type::DateTimeTypeValue getCurrentTimeMillis();
        static long long getNanosDuration();
        static uci::type::DateTimeTypeValue addTime(DateTime baseTime, int64_t seconds, int64_t nanoseconds);
        static uci::type::TimeTypeValue secondsSinceMidnight(int64_t seconds);

};

#endif // EXAMPLE_H
