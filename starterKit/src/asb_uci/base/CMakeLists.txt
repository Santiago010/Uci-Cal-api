cmake_minimum_required(VERSION 3.0)

# Establece el estándar de C++11
set(CMAKE_CXX_STANDARD 11)

# Especifica el compilador que deseas usar
set(CMAKE_CXX_COMPILER "/usr/local/Cellar/gcc")

project(Uci-Cal-api)

# Incluye los encabezados de log4cpp, activemq-cpp y apr
include_directories(
    /usr/local/include
    /usr/local/opt/apr/include
    /usr/local/Cellar/boost/1.85.0/include/boost
    /usr/local/Cellar/activemq-cpp/3.9.5_2/include/activemq-cpp-3.9.5
    /usr/local/opt/libxml2/include/libxml2
    /usr/local/include/activemq-cpp-3.9.5

)

# Especifica las rutas de las bibliotecas de log4cpp, activemq-cpp y apr
link_directories(
    /usr/local/lib
    /usr/local/opt/apr/lib
    /usr/local/Cellar/activemq-cpp/3.9.5_2/lib
    /usr/local/opt/libxml2/lib
)

# Agrega tus archivos fuente
add_executable(my_example main.cpp example.cpp AbstractServiceBusConnection.cpp ConfigReader.cpp ConnectionStatus.cpp ConnectionMonitor.cpp UUIDGenerator.cpp Externalizer.cpp)

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
