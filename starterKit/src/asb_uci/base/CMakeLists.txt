cmake_minimum_required(VERSION 3.0)

# Establece el estándar de C++11
set(CMAKE_CXX_STANDARD 11)

# Especifica el compilador que deseas usar
set(CMAKE_CXX_COMPILER "/usr/bin/gcc")

project(Uci-Cal-api)

# Incluye los encabezados de log4cpp, activemq-cpp, apr, boost y libxml2
include_directories(
    /opt/homebrew/include
    /opt/homebrew/opt/apr/include
    /opt/homebrew/opt/boost/include
    /opt/homebrew/Cellar/activemq-cpp/3.9.5_2/include/activemq-cpp-3.9.5
    /opt/homebrew/opt/libxml2/include/libxml2
)

# Especifica las rutas de las bibliotecas de log4cpp, activemq-cpp, apr, boost y libxml2
link_directories(
    /opt/homebrew/lib
    /opt/homebrew/opt/apr/lib
    /opt/homebrew/opt/boost/lib
    /opt/homebrew/Cellar/activemq-cpp/3.9.5_2/lib
    /opt/homebrew/opt/libxml2/lib
)

# Agrega tus archivos fuente
add_executable(my_example main.cpp example.cpp AbstractServiceBusConnection.cpp ConfigReader.cpp ConnectionStatus.cpp ConnectionMonitor.cpp UUIDGenerator.cpp Externalizer.cpp AccessorFileLocationMT.cpp UUIDFactory.cpp MessageReader.cpp ../type/SecurityInformationType.cpp ../type/ClassificationEnum.cpp ../type/NonUS_ControlsEnum.cpp ../type/DeclassExceptionEnum.cpp ../type/DisseminationControlsEnum.cpp ServiceStatusListener.cpp ExternalizerLoader.cpp Version3UUIDHelper.cpp AbstractServiceBusConnectionFactory.cpp ../type/HeaderType.cpp ../type/MessageModeEnum.cpp ../type/MessageType.cpp ../type/SystemID_Type.cpp ../type/MissionID_Type.cpp ../type/ServiceID_Type.cpp ../type/ServiceStatusMT.cpp ../type/SAR_ActivityType.cpp ../type/SAR_SubCapabilityEnum.cpp ../type/ForeignKeyType.cpp ../type/ActivityBaseType.cpp ../type/ActivityBasisEnum.cpp ../type/ActivityStateEnum.cpp ../type/ActivityID_Type.cpp ../type/CannotComplyType.cpp ../type/CannotComplyEnum.cpp ../type/ServiceStatusMDT.cpp ../type/ServiceStateEnum.cpp ../type/VersionedID_Type.cpp ../type/CapabilityID_Type.cpp)

# Especifica las bibliotecas que necesitas enlazar
target_link_libraries(my_example
    log4cpp
    activemq-cpp
    boost_system
    boost_random
    boost_filesystem
    apr-1
    xml2
)
