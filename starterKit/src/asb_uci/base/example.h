// Example.h

#include "../../../include/asb_uci/base/Externalizer.h"
#include "../../../include/asb_uci/base/AbstractServiceBusConnection.h"

#ifndef EXAMPLE_H
#define EXAMPLE_H

class Example {
    private :
    public:
        static void runExample(int argc, char* argv[]);
        // TODO:metodo por implementarº
        static void testExternalizerRead(asb_uci::base::Externalizer& externalizer);
        // TODO:metodo por implementarº
        static std::istream& readFile(const std::string& filename);
        // TODO:metodo por implementar
        static void testOMS93testForeachAndAddmethods();
        static void testVersion3UUIDGeneration(asb_uci::base::AbstractServiceBusConnection asbs);

};

#endif // EXAMPLE_H
