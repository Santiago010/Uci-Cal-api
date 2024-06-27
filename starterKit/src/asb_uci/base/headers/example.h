// Example.h

#include "../../../../include/asb_uci/base/Externalizer.h"
#include "../../../../include/asb_uci/base/AbstractServiceBusConnection.h"
#include "../../../../include/asb_uci/type/ServiceStatusMT.h"
#include "../../../../include/asb_uci/type/SystemID_Type.h"
#include "../../../../../cppInterface/2.3.2/include/uci/type/DateTimeType.h"
#include "../../../../../cppInterface/2.3.2/include/uci/type/TimeType.h"
#include "../../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"
#include <log4cpp/Category.hh>//Libreria para los Logs 
#include <log4cpp/PropertyConfigurator.hh> //libreria para los Logs
#include "../../../../include/asb_uci/type/CapabilityConfigurationType.h"
#include "../../../../include/asb_uci/type/VariableSubsystemsType.h"
#include "../../../../include/asb_uci/type/StoreLoadoutChoiceType.h"
#include "../../../../include/asb_uci/type/StoreLoadoutItemType.h"
#ifndef EXAMPLE_H
#define EXAMPLE_H

class Example {
    private :
        static asb_uci::type::ServiceStatusMT createServiceStatusMT(asb_uci::base::AbstractServiceBusConnection asbs);
        static void testOMS83AddAndChoiceMethods();
        
    public:
        static log4cpp::Category& root;
        asb_uci::type::SystemID_Type systemId();
        template <size_t N>
        static void addConfigurationFromArray(asb_uci::type::VariableSubsystemsType& vst, const asb_uci::type::CapabilityConfigurationType (&arr)[N]);
        template <size_t N>
        static void addConfigurationFromArray2(asb_uci::type::StoreLoadoutChoiceType& slct,const asb_uci::type::StoreLoadoutItemType (&arr)[N]);
        static void runExample(int argc, char* argv[]);
        static void testExternalizerRead(asb_uci::base::Externalizer& externalizer);
        static std::istream& readFile(const std::string& filename);
        static void testOMS93testForeachAndAddmethods();
        static void testVersion3UUIDGeneration(asb_uci::base::AbstractServiceBusConnection asbs);
        static std::string getVersion();
        static asb_uci::type::SystemID_Type getSystemId();
        static uci::type::DateTimeTypeValue getCurrentTimeMillis();
        static long long getNanosDuration();
        static uci::type::DateTimeTypeValue addTime(xs::DateTime baseTime, int64_t seconds, int64_t nanoseconds);
        static uci::type::TimeTypeValue secondsSinceMidnight(int64_t seconds);

};

#endif // EXAMPLE_H
