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
// TODO:librerias verificadas 
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"
#include "headers/AccessorFileLocationMT.h"





#include "../../../include/asb_uci/base/AbstractServiceBusConnection.h"
#include "../../../include/asb_uci/base/Externalizer.h"
#include "../../../include/asb_uci/base/ExternalizerLoader.h"
#include <cstdlib> // Para la función exit()
#include "../../../../cppInterface/2.3.2/include/uci/type/FileLocationMT.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/Accessor.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/AbstractServiceBusConnectionStatusListener.h"
#include "headers/ExampleListener.h"
#include "headers/AccessorFileLocationMT.h"
#include "../../../include/asb_uci/base/UUIDGenerator.h"
#include "../../../include/asb_uci/type/CapabilityCommandBaseType.h"
#include "../../../include/asb_uci/type/CapabilityConfigurationType.h"
#include <boost/lexical_cast.hpp>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>
#include "../../../include/asb_uci/type/ServiceStatusMT.h"
#include "../../../include/asb_uci/type/ID_Type.h"
#include "../../../include/asb_uci/type/ServiceID_Type.h"
#include "../../../include/asb_uci/type/HeaderType.h"
#include "../../../include/asb_uci/type/SystemID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MessageModeEnum.h"
#include "../../../include/asb_uci/type/ServiceStatusMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ServiceStateEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ClassificationEnum.h"
#include "../../../include/asb_uci/type/SecurityInformationType.h"
#include "../../../include/asb_uci/type/OwnerProducerChoiceType.h"
#include "../../../include/asb_uci/type/OwnerProducerEnum.h"
#include "../../../include/asb_uci/base/Writer.h"
#include "../../../include/asb_uci/base/Reader.h"
#include "../../../include/asb_uci/type/WeekdayIntervalType.h"
#include "../../../include/asb_uci/type/DateTimeRangeType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TimeType.h"
#include "../../../include/asb_uci/type/SAR_ActivityType.h"
#include "../../../include/asb_uci/type/CapabilityID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UUID.h"
#include "../../../include/asb_uci/type/VariableSubsystemsType.h"
#include "../../../include/asb_uci/type/CapabilityConfigurationType.h"
#include "../../../include/asb_uci/type/StoreLoadoutChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../include/asb_uci/type/StoreLoadoutItemType.h"
#include "../../../include/asb_uci/base/BoundedList.h"


#include "headers/example.h"

using namespace std;

log4cpp::Category& Example::root = log4cpp::Category::getRoot();



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

void Example::testVersion3UUIDGeneration(asb_uci::base::AbstractServiceBusConnection asbc){
    asb_uci::base::UUIDGenerator uuid;
    uuid.generateUUID();
    bool haveUUIDFails = false;

    uci::base::UUID defaultNameSpaceUUID = uuid.getNamespaceUUID();
    string defaultNameSpaceString = boost::uuids::to_string(defaultNameSpaceUUID);
    string expectedDefaultNameSpaceString = "f26ec6d2-467b-30fd-82c4-a882471d36ad";

    if(defaultNameSpaceString == expectedDefaultNameSpaceString){
        cout << "UUIDFactory: Version 3 namespace Test passed" << endl;
    }else{
        cout << "UUIDFactory: Version 3 namespace Test failed : Expected : " << expectedDefaultNameSpaceString << " but got : " << defaultNameSpaceString;
        haveUUIDFails = true;
    }


    // Now test through ASB
    defaultNameSpaceUUID = asbc.getNamespaceUUID();
    defaultNameSpaceString = boost::uuids::to_string(defaultNameSpaceUUID);
    if(defaultNameSpaceString == expectedDefaultNameSpaceString){
        cout << "Version 3 namespace Test passed" << endl;
    }else{
        cout << "Version 3 namespace Test failed : Expected : "<< expectedDefaultNameSpaceString << " but got: "<< defaultNameSpaceString;
        haveUUIDFails = true;
    }

    string expectedNilUUIDString = "00000000-0000-0000-0000-000000000000";
    uci::base::UUID nilUUID = asbc.getNilUUID();
    string defaultNameSpaceStringnilUUID = boost::uuids::to_string(nilUUID);

    if(defaultNameSpaceStringnilUUID == expectedNilUUIDString){
        cout << "Version 3 nilUUID Test passed" << endl;
    }else{
        cout << "Version 3 nilUUID Test failed : Expected : "<< expectedNilUUIDString<< " but got : " << nilUUID << endl;
        haveUUIDFails = true;
    }

    // Test 1 param generateVersion3UUID

    uci::base::UUID defaultNameSpacePlusPatriotsUUID =asbc.createVersion3UUID("Patriots");
    string defaultNameSpacePlusPatriotsUUIDString = boost::uuids::to_string(defaultNameSpacePlusPatriotsUUID);
    string expectedUuid = "f6fd1ae8-a050-361a-ae55-8638b0c2eb9f";

    if(defaultNameSpacePlusPatriotsUUIDString == expectedUuid){
        cout << "Version 3 UUID 1 param PASSED" << endl;
    }else{
        cout << "Version 3 UUID 1 param FAILED = " << defaultNameSpacePlusPatriotsUUIDString + " should be : " << expectedUuid;
        haveUUIDFails = true;
    }

    // Test 2 param generateVersion3UUID
    uci::base::UUID namespaceUUID = uci::base::UUID::fromString("00000000-0000-0000-0000-000000000001");
    expectedUuid = "1a4338f0-a034-35c3-92e3-1c154799cee5";
    uci::base::UUID nameSpacePlusCelticsUUID = asbc.createVersion3UUID(namespaceUUID,"Celtics");
    string dnameSpacePlusCelticsUUIDString = boost::uuids::to_string(nameSpacePlusCelticsUUID);

    if(dnameSpacePlusCelticsUUIDString == expectedUuid){
        cout << "PASSED : Version 3 UUID 2 param" << endl;
    }else{
        cout << "Version 3 UUID 2 param FAILED = " << dnameSpacePlusCelticsUUIDString <<" should be : " << expectedUuid;
        haveUUIDFails = true;
    }

    if(haveUUIDFails){
        root.error("One or more UUID tests failed");
    }
}

void Example::testOMS93testForeachAndAddmethods(){
    asb_uci::type::SAR_ActivityType sarActType;
    asb_uci::type::CapabilityID_Type capIdType;
    std::vector<asb_uci::type::CapabilityID_Type> capabilities;
    capabilities.emplace_back(capIdType);


    asb_uci::type::SAR_ActivityType sarActType2 = asb_uci::type::SAR_ActivityType::createFromCapabilities(capabilities);

}



void Example::testExternalizerRead(asb_uci::base::Externalizer& externalizer){
    cout << "Test Externalizer read" << endl;

    try{
        std::istream& fileLocationMTstream = readFile("FileLocation_CP-15A.xml");

        uci::base::AcccessorFileLocationMT accessorFileLocationMT;
        accessorFileLocationMT.setData("accessorFileLocationMT");

        externalizer.read(fileLocationMTstream,accessorFileLocationMT);

        std::ostringstream oss;
        externalizer.write(accessorFileLocationMT,oss);
        std::string fileLocationMTstreamXmll = oss.str();


        cout << "read in stream : \n" << fileLocationMTstreamXmll << endl;
        cout << "Test Externalizer read : Reader \n" << endl;
        std::istream& reader = readFile("FileLocation_CP-15A.xml");
        externalizer.read(reader,accessorFileLocationMT);

        uci::base::AcccessorFileLocationMT baosReader;
        baosReader.setData("");
         externalizer.write(baosReader,fileLocationMTstreamXmll);


        cout << "read in using reader : \n" << fileLocationMTstreamXmll;

        cout << "Test Externalizer write fragment%n%n" << endl;

        xs::DateTime begin = getCurrentTimeMillis();
        xs::DateTime end = addTime(0,100,222);
        uci::type::TimeTypeValue  beginLocal = secondsSinceMidnight(3600);

        asb_uci::type::DateTimeRangeType dateTimeRangeType;
        asb_uci::type::WeekdayIntervalType weekdayIntervalType;
        
        weekdayIntervalType.setTimeSpan(dateTimeRangeType.setBegin(begin).setEnd(end)).setStartTime(beginLocal);


        std::ostringstream out;
        externalizer.write(weekdayIntervalType,out);
        
        std::string outStr = out.str();
        std::vector<uint8_t> bytes;
        for (char c : outStr) {
            bytes.push_back(static_cast<uint8_t>(c));
        }

        // Convertir los bytes a una cadena
        std::string witXML;
        for (uint8_t b : bytes) {
            witXML += static_cast<char>(b);
        }


        std::cout << "Externalized wrote xml fragment: \n" << witXML << "\n\n";

        std::cout << "Test Externalizer read fragment%n%n" << endl;

        std::istringstream in(std::string(bytes.begin(), bytes.end()));

        externalizer.read(in,weekdayIntervalType);

        externalizer.write(weekdayIntervalType,out);

        std::string outStr2 = out.str();
    
        // Convertir std::string a std::vector<uint8_t> (bytes)
        std::vector<uint8_t> bytes2(outStr2.begin(), outStr2.end());
        
        // Crear un std::string a partir de std::vector<uint8_t>
        std::string witXML2(bytes2.begin(), bytes2.end());
        
        // Mostrar el resultado
        std::cout << "Externalized read xml fragment : " << witXML2 << std::endl;

        if(beginLocal != weekdayIntervalType.getStartTime()){
            root.error("Failed to read and write XML fragment");
        }
        



 
    }
    catch(const std::exception& e)
    {
        cout << "ERROR: see UCIException : \n"<< endl;
        std::cerr << e.what() << '\n';
    }
    


}

int64_t Example::secondsSinceMidnight(int64_t seconds){
    // Asegúrate de que los segundos no excedan 86400 (segundos en un día)
    seconds = seconds % 86400;
    return seconds;
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

template <size_t N>
void Example::addConfigurationFromArray(asb_uci::type::VariableSubsystemsType& vst, const asb_uci::type::CapabilityConfigurationType (&arr)[N]) {
    vst.addConfiguration({arr, arr + N});
}

template <size_t N>
void Example::addConfigurationFromArray2( asb_uci::type::StoreLoadoutChoiceType& slct,const asb_uci::type::StoreLoadoutItemType (&arr)[N]){
    slct.chooseStoreList({arr, arr + N});
}

void Example::testOMS83AddAndChoiceMethods(){
    asb_uci::type::VariableSubsystemsType vst;
    asb_uci::type::CapabilityConfigurationType cct1;
    asb_uci::type::CapabilityConfigurationType cct2;
    asb_uci::type::CapabilityConfigurationType cct3;
    asb_uci::type::CapabilityConfigurationType cct4;

    vst.addConfiguration({cct1,cct2,cct3,cct4});

    int vstSize = vst.getConfiguration().size();

    if(vstSize == 4){
        root.info("PASSED: add vargs test");
    }else{
        root.error("FAILED: add vargs test");
    }

    asb_uci::type::CapabilityConfigurationType iter[2] = {cct1,cct2};

    asb_uci::type::VariableSubsystemsType vst2;
    addConfigurationFromArray(vst,iter);

    vstSize = vst2.getConfiguration().size();
    if (vstSize == 2){
            root.info("PASSED: add iter test");
        }else{
            root.error("FAILED: add iter test");
        }

    asb_uci::type::StoreLoadoutChoiceType slct;

    asb_uci::type::StoreLoadoutItemType pet1;
    pet1.setLocation(1);
    asb_uci::type::StoreLoadoutItemType pet2;
    pet2.setLocation(2);
    asb_uci::type::StoreLoadoutItemType pet3;
    pet3.setLocation(3);

    asb_uci::type::StoreLoadoutItemType iter2[3] = {pet1,pet2,pet3};

    addConfigurationFromArray2(slct,iter2);


      asb_uci::base::BoundedList<uci::type::StoreLoadoutChoiceType,uci::type::accessorType::storeLoadoutChoiceType,asb_uci::type::StoreLoadoutItemType> storeList = slct.asStoreList();

    if (storeList.size() == 3){
            root.info("PASSED: choice StoreLoadoutChoiceType test");
        }
        else
        {
           root.error("FAILED: choice StoreLoadoutChoiceType test");
        }




    
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

    testOMS93testForeachAndAddmethods();

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

    testVersion3UUIDGeneration(connection);

    testOMS83AddAndChoiceMethods();


    // Prueba rápida para probar que el encadenamiento de métodos puede manejar métodos de conjunto de llamadas en una clase donde
        // el conjunto está en la superclase, pero luego se anulan en la clase y devuelven la clase correcta. 
        // Si no funcionaba no compilaría.
    asb_uci::type::CapabilityCommandBaseType capa;
    capa.setOverrideRejection(true).setTrackingRange(1.0);

    if(isReader){
        asb_uci::type::ServiceStatusMT serviceStatus = createServiceStatusMT(connection);
        asb_uci::type::ServiceStatusMT::Reader reader =  serviceStatus.createReader("ServiceStatus",connection);
        root.info("Created ServiceStatus reader");
        reader.addListener(listener); 

        uci::base::AbstractServiceBusConnection::AbstractServiceBusConnectionStatusData status = connection.getStatus();
        
        root.info("CAL status is '" + status.abstractServiceBusConnectionStateToString(status.state) + "', detail: " + status.stateDetail);
    }

    if(isWrite){
        asb_uci::type::ServiceStatusMT serviceStatus = createServiceStatusMT(connection);
        root.info("Created ServiceStatus message");
        asb_uci::base::Writer writer = serviceStatus.createWriter("ServiceStatus",connection);
        root.info("Created ServiceStatus writer");
        uci::base::AbstractServiceBusConnection::AbstractServiceBusConnectionStatusData status = connection.getStatus();
        root.info("CAL status is '" + status.abstractServiceBusConnectionStateToString(status.state) + "', detail: " + status.stateDetail);


        auto task = []() -> void {
        while (true) {
            serviceStatus.getMessageHeader().setTimestamp(getCurrentTimeMillis());
            serviceStatus.getMessageData().setTimeUp(getNanosDuration());

            cout << "Writing ServiceStatus" << endl;
            writer.write(serviceStatus);

            std::ostringstream oss;
            externalizer.write(serviceStatus,oss);

            oss << "This is an example of text written in std::ostringstream.";

            // Obtén la cadena resultante
            std::string xml = oss.str();

            cout << "Wrote ServiceStatus: " << xml << endl;
            root.info("Wrote ServiceStatus:{}{}", xml);
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
    asb_uci::type::SecurityInformationType secInfo;
    serviceStatus.setSecurityInformation(secInfo);
    serviceStatus.getSecurityInformation().setClassification(uci::type::ClassificationEnum::UCI_U);

    asb_uci::type::OwnerProducerChoiceType usaChoiceType;
    usaChoiceType.chooseGovernmentIdentifier(asb_uci::type::OwnerProducerEnum::UCI_USA);
    auto& ownerProducer = serviceStatus.getSecurityInformation().getOwnerProducer().add(usaChoiceType);
    serviceStatus.setMessageHeader(header);
    serviceStatus.setMessageData(messageData);
    
    return serviceStatus;
}




Example::getCurrentTimeMillis(){
return std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::system_clock::now().time_since_epoch()).count();
}

Example::getNanosDuration(){
    // Obtiene el tiempo actual en nanosegundos
    auto start = std::chrono::high_resolution_clock::now();

    // Realiza alguna tarea

    // Obtiene el tiempo actual después de realizar la tarea
    auto end = std::chrono::high_resolution_clock::now();

    // Calcula la duración entre los dos tiempos en nanosegundos
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();

    return duration;
}

Example::addTime(xs::DateTime baseTime, int64_t seconds, int64_t nanoseconds){
    int64_t baseTimeNs = baseTime * 1000000;
    
    // Agregar los segundos y nanosegundos adicionales
    int64_t addedTimeNs = seconds * 1000000000 + nanoseconds;
    
    // Calcular el nuevo tiempo en nanosegundos
    int64_t newTimeNs = baseTimeNs + addedTimeNs;
    
    // Convertir de nuevo a milisegundos
    return newTimeNs / 1000000;
}

Example::getSystemId(){

    return systemId;
}