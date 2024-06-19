#include "../../../include/asb_uci/base/Version3UUIDHelper.h"
#include <boost/uuid/name_generator_sha1.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include "../../../../cppInterface/2.3.2/include/uci/base/UUID.h"

namespace asb_uci{
    namespace base{

        uci::base::UUID Version3UUIDHelper::createVersion3UUID(const uci::base::UUID& namespaceUUID, const std::string& name){
            uci::base::UUID uuid;

            try
            {
                std::vector<uint8_t> nameBytes(name.begin(), name.end());
                std::vector<uint8_t> result = joinBytes(getBytesFromUUID(namespaceUUID), nameBytes);

                boost::uuids::name_generator_sha1 gen(namespaceUUID);
                uuid = gen(result.begin(), result.end());


            }
            catch(const std::exception& e)
            {
                throw std::runtime_error("Exception encountered: " + std::string(e.what()));

            }

            return uuid;
            
        }

        std::vector<uint8_t> Version3UUIDHelper::getBytesFromUUID(const uci::base::UUID& uuid) {
            std::vector<uint8_t> bytes(uuid.size());
            std::copy(uuid.begin(), uuid.end(), bytes.begin());
            return bytes;
        }

        std::vector<uint8_t> Version3UUIDHelper::joinBytes(const std::vector<uint8_t>& byte1, const std::vector<uint8_t>& byte2) {
            std::vector<uint8_t> result(byte1.size() + byte2.size());
            std::copy(byte1.begin(), byte1.end(), result.begin());
            std::copy(byte2.begin(), byte2.end(), result.begin() + byte1.size());
            return result;
        }
    }
        
}