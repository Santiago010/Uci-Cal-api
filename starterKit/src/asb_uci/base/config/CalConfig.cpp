#include "CalConfig.h"
#include <iostream>
#include <string.h>

namespace asb_uci
{
    namespace base
    {
        namespace config
        {
            CalConfig::CalConfig(const CalConfig& xmlConf){
                systemLabel = xmlConf.getSystemLabel();
                xmlConf.getUUIDGenerationNamespaceID();
            }

            std::string CalConfig::getSystemLabel(){
                return systemLabel;
            }

            // TODO:falta definir este metodo
            CalConfig CalConfig::load(){

            }
            

        } // namespace config
        
    } // namespace base
    
} // namespace asb_uci
