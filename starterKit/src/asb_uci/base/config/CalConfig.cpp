#include "CalConfig.h"
#include <iostream>
#include <string.h>

      // TODO:falta VERFICAR SI CONFIGREADER ES ESTE MISMO CALCONFIG
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


            CalConfig CalConfig::load(){

            }
            

        } // namespace config
        
    } // namespace base
    
} // namespace asb_uci
