#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/name_generator.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include "../../../../cppInterface/2.3.2/include/uci/base/UUID.h"


namespace asb_uci{
    namespace base{

        class Version3UUIDHelper
        {
        private:
            /* data */
            // Firma del método helper para convertir UUID a byte array
            static std::vector<uint8_t> getBytesFromUUID(const uci::base::UUID& uuid);

            // Firma del método helper para unir dos byte arrays
            static std::vector<uint8_t> joinBytes(const std::vector<uint8_t>& byte1, const std::vector<uint8_t>& byte2);



        public:
            // Version3UUIDHelper();
            // ~Version3UUIDHelper();

            // Firma del método estático para crear un UUID de versión 3

            static uci::base::UUID createVersion3UUID(const uci::base::UUID& namespaceUUID, const std::string& name);
        };
        
        // Version3UUIDHelper::Version3UUIDHelper(/* args */)
        // {
        // }
        
        // Version3UUIDHelper::~Version3UUIDHelper()
        // {
        // }
        
    }
}