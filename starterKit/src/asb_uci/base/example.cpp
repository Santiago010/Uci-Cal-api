// Example.cpp

#include <iostream>
#include <string.h>
#include <chrono>
#include <thread>  // Solo para la función de dormir en el ejemplo
#include <log4cpp/Category.hh>//Libreria para los Logs 
#include <log4cpp/PropertyConfigurator.hh> //libreria para los Logs
#include "../../../include/asb_uci/base/AbstractServiceBusConnection.h"
#include "../../../include/asb_uci/base/Externalizer.h"
#include <cstdlib> // Para la función exit()



#include "example.h"

using namespace std;

void Example::runExample(int argc, char* argv[]) {

    auto startTime = chrono::high_resolution_clock::now();
    bool isReader  = false;
    bool isWrite = false;

    // Simular alguna operación que tarda tiempo (por ejemplo, dormir 1 segundo)
    this_thread::sleep_for(chrono::seconds(1));

    auto endTime = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::nanoseconds>(endTime - startTime).count();

    //TODO:esto lo usaremos mas tarde
    // cout << "Tiempo transcurrido: " << duration << " nanosegundos" << endl;


    // Configuración básica de Log4cpp
    log4cpp::PropertyConfigurator::configure("log4cpp.properties");

    // Crear un objeto Logger
    log4cpp::Category& root = log4cpp::Category::getRoot();

    // Verificar si el nivel de registro actual permite mensajes de nivel de información
    if (root.isInfoEnabled()) {
        stringstream commandLine;
        commandLine << "uci-cal-example";

        for (int i = 1; i < argc; ++i) {
            commandLine << argv[i] ;
        }

        root.info(commandLine.str());
    }

        for (int i = 1; i < argc; ++i) {
            if(strcmp(argv[i],"-reader")){
                isReader = true;
            }else if(strcmp(argv[i],"-writer")){
                isWrite = true;
            }
        }

        if(!isReader && !isWrite){

            cout << "USAGE: uci-cal-example -reader -writer \n " << "WHERE: -reader runs ServiceStatus reader \n " << "       -writer runs ServiceStatus writer \n "<< "NOTE: a minimum of one argument must be supplied. \n";
            root.error("Without Arguments...");

            exit(1);
        }

    asb_uci::base::AbstractServiceBusConnection connection("Identifi");
    connection.init("exampleServiceIdentifier",true);

    /** La clase Externalizer permite exportar e importar mensajes desde y hacia un formato externo. El
  * puede ser independiente de cualquier implementación interna de serialización CAL y transporte.
  */
    asb_uci::base::Externalizer ownExternalizer(asb_uci::base::Externalizer::getEncoding(),asb_uci::base::Externalizer::getSchemaVersion(),asb_uci::base::Externalizer::getCalApiVersion());
    
    


}
