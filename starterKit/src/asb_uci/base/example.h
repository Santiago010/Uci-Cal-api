// Example.h

#include "../../../include/asb_uci/base/Externalizer.h"

#ifndef EXAMPLE_H
#define EXAMPLE_H

class Example {
    private :
    public:
        static void runExample(int argc, char* argv[]);
        static void testExternalizerRead(asb_uci::base::Externalizer& externalizer);
        static std::vector<uint8_t> readFile(const std::string& filename);

};

#endif // EXAMPLE_H
