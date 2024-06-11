// Example.cpp

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

#include <string.h>
#include <future>
#include <chrono>
#include <thread>  // Solo para la función de dormir en el ejemplo
#include <log4cpp/Category.hh>//Libreria para los Logs 
#include <log4cpp/PropertyConfigurator.hh> //libreria para los Logs
#include "../../../include/asb_uci/base/AbstractServiceBusConnection.h"
#include "../../../include/asb_uci/base/Externalizer.h"
#include "../../../include/asb_uci/base/ExternalizerLoader.h"
#include <cstdlib> // Para la función exit()
#include "../../../../cppInterface/2.3.2/include/uci/type/FileLocationMT.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/Accessor.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/AbstractServiceBusConnectionStatusListener.h"
#include "ExampleListener.h"
#include "AccessorFileLocationMT.h"
#include "../../../include/asb_uci/base/UUIDGenerator.h"
#include "../../../include/asb_uci/type/CapabilityCommandBaseType.h"
#include <boost/lexical_cast.hpp>
#include "../../../include/asb_uci/type/ServiceStatusMT.h"
#include "../../../include/asb_uci/type/ID_Type.h"
#include "../../../include/asb_uci/type/ServiceID_Type.h"
#include "../../../include/asb_uci/type/HeaderType.h"
#include "../../../include/asb_uci/type/SystemID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MessageModeEnum.h"
#include "../../../include/asb_uci/type/ServiceStatusMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ServiceStateEnum.h"



#include "example.h"

using namespace std;



 std::istream& readFile(const std::string& filename) {
    static std::stringstream null_stream; // Establece un flujo de entrada vacío como valor predeterminado

    std::ifstream file(filename, std::ios::binary);
    if (!file.is_open()) {
        std::cerr << "Error al abrir el archivo." << std::endl;
        return null_stream; // Devuelve el flujo de entrada vacío si hay un error al abrir el archivo
    }

    // Crea un nuevo flujo de entrada y copia el contenido del archivo a este flujo
    static std::stringstream input_stream;
    input_stream.str(""); // Limpia el contenido anterior
    input_stream << file.rdbuf();
    file.close(); // Cerrar el archivo después de leerlo

    return input_stream;
}

// TODO:implementar esta funcion en un futuro
void Example::testVersion3UUIDGeneration(asb_uci::base::AbstractServiceBusConnection asbc){
}

// TODO:implementar esta funcione en un futuro
void Example::testOMS93testForeachAndAddmethods(){

}



// TODO:implementar esta funcion en un futuro
void Example::testExternalizerRead(asb_uci::base::Externalizer& externalizer){
    cout << "Test Externalizer read" << endl;

    try{
        std::istream& fileLocationCp = readFile("FileLocation_CP-15A.xml");

        uci::base::AcccessorFileLocationMT accessorFileLicationMT;
        accessorFileLicationMT.setData("accessorFileLicationMT");

        externalizer.read(fileLocationCp,accessorFileLicationMT);

 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    


}

std::string Example::getVersion(){
    std::ifstream file("version.properties"); // Abre el archivo
    std::string line;
    while (std::getline(file, line)) { // Lee cada línea del archivo
        size_t found = line.find("version"); // Busca la cadena "version"
        if (found != std::string::npos) { // Si se encuentra
            size_t equalsPos = line.find("="); // Busca el símbolo de igualdad
            if (equalsPos != std::string::npos) { // Si se encuentra
                return line.substr(equalsPos + 1); // Devuelve la parte después del igual
            }
        }
    }
    return "";

}

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

    asb_uci::base::AbstractServiceBusConnection connection("ExampleService");
    connection.init("Example Service Version 3 UUID Name",true);

    /** La clase Externalizer permite exportar e importar mensajes desde y hacia un formato externo. El
  * puede ser independiente de cualquier implementación interna de serialización CAL y transporte.
  */
    asb_uci::base::Externalizer externalizer("XML","3.0","2.3.3");


    testExternalizerRead(externalizer);

    cout << "Externalizer API number version : " + externalizer.getCalApiVersion() << endl;

   int externalizerIsXML = externalizer.getEncoding().compare("XML");

   if(externalizerIsXML < 0 || externalizerIsXML  > 0){

        std::cerr <<"Externalizer Type : expected XML   Actual : " + externalizer.getEncoding();
   }else{
        cout << "Externalizer Type : " + externalizer.getEncoding() << endl;
   }

   cout <<"Externalizer schema version : " + externalizer.getSchemaVersion();

   // Para probar el otro método getExternalizer en ExternalizerLoader crear otro Externalizer y comprobar si no es nulo
    asb_uci::base::ExternalizerLoader eL;
    uci::base::Externalizer* externalizer2 = eL.getExternalizer(externalizer.getSchemaVersion(), externalizer.getCalApiVersion(), externalizer.getEncoding());

    // Verifica si el puntero externalizerPtr no es nulo
    if (externalizer2 == nullptr) {
        // El puntero externalizerPtr no es nulo, puedes continuar utilizando sus métodos
        std::cerr << "FAILED : test using ExternalizerLoader.getExternalizer using 3 params";
        
        // Ahora puedes usar externalizer2 como lo hiciste originalmente con el objeto
    } else {
        cout << "PASSED : test using ExternalizerLoader.getExternalizer using 3 params" << endl;
        // El puntero externalizerPtr es nulo, esto podría indicar un problema al obtener el externalizer
        // Es posible que desees manejar este caso de alguna manera, como imprimir un mensaje de error 
    }

    cout << "Externalizer vendor version : " + externalizer.getVendorVersion() << endl;

    ExampleListener listener;
    connection.addStatusListener(listener);

    asb_uci::base::UUIDGenerator uuid;

    std::string str_uuid = boost::lexical_cast<std::string>(uuid.generateUUID());
    cout << "UUID generated by UUIDGenerator.generateUUID = " << str_uuid << endl;


    // Prueba rápida para probar que el encadenamiento de métodos puede manejar métodos de conjunto de llamadas en una clase donde
        // el conjunto está en la superclase, pero luego se anulan en la clase y devuelven la clase correcta. 
        // Si no funcionaba no compilaría.
    asb_uci::type::CapabilityCommandBaseType capa;
    capa.setOverrideRejection(true).setTrackingRange(1.0);

    // TODO:recuerda implementar las verificaciones para IsReader
    if(isReader){

    }

    if(isWrite){
        asb_uci::type::ServiceStatusMT serviceStatus;

        auto task = []() -> void {
        while (true) {
            std::cout << "hola" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
            }
        };

        //TODO: Usar std::async para ejecutar la tarea en un hilo separado

        std::future<void> future = std::async(std::launch::async, task);

        //TODO: Esperar a que la tarea termine
        //TODO: Note: En este caso, future.get() nunca se completará ya que el bucle es infinito.
        try {
            future.get();
        } catch (const std::exception &e) {
            std::cerr << "Exception: " << e.what() << std::endl;
        }



    }
}

 asb_uci::type::ServiceStatusMT createServiceStatusMT(asb_uci::base::AbstractServiceBusConnection asbs){

    asb_uci::type::ID_Type sysUUID;
    sysUUID.setUUID(asbs.getMySystemUUID());
    sysUUID.setDescriptiveLabel(asbs.getMySystemLabel());


    asb_uci::type::ServiceID_Type ser;
    ser.setServiceVersion(getVersion());
    
    // Establecer encabezado usando métodos de encadenamiento
    asb_uci::type::HeaderType header;
    header.setSystemID(getSystemId()).setTimestamp(getCurrentTimeMillis()).setSchemaVersion("XML").setMode(uci::type::MessageModeEnum::UCI_SIMULATION).setServiceID(ser);

    uci::type::ServiceStatusMDT messageData;
    messageData.setServiceID(ser);
    messageData.setServiceState(uci::type::ServiceStateEnum::UCI_NORMAL);
    messageData.setStatusDetail("All is good in this example!");

        

    // TODO:recuerda retornar el valor correcto
    asb_uci::type::ServiceStatusMT serviceStatus;
    return serviceStatus;
}


Example::getCurrentTimeMillis(){
return std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::system_clock::now().time_since_epoch()).count();
}

Example::getSystemId(){

    return systemId;
}