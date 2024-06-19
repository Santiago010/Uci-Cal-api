#include <iostream>
#include <string.h>
#include "../../../../../cppInterface/2.3.2/include/uci/base/UUID.h"

#ifndef CALCONFIG_H
#define CALCONFIG_H

namespace asb_uci
{
    namespace base
    {
        namespace config
        {
            class CalConfig
            {
            private:
                std::string systemLabel;
                uci::base::UUID uuidGenerationNamespaceID;

            public:
                CalConfig(const CalConfig& xmlConf);
                ~CalConfig();
                std::string getSystemLabel();
                uci::base::UUID getUUIDGenerationNamespaceID(){
                    return uuidGenerationNamespaceID;
                }
                CalConfig load();
            };
            
            // CalConfig::CalConfig(/* args */)
            // {
            // }
            
            // CalConfig::~CalConfig()
            // {
            // }
            
        } // namespace config
        
        
    } // namespace base
    
} // namespace asb_uci



#endif // CALCONFIG_H
