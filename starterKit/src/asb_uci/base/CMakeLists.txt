cmake_minimum_required(VERSION 3.0)

# Establece el estándar de C++11
set(CMAKE_CXX_STANDARD 11)

# Especifica el compilador que deseas usar
set(CMAKE_CXX_COMPILER "/usr/bin/gcc")

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
add_executable(my_example main.cpp example.cpp AbstractServiceBusConnection.cpp ConfigReader.cpp ConnectionStatus.cpp ConnectionMonitor.cpp UUIDGenerator.cpp Externalizer.cpp AccessorFileLocationMT.cpp UUIDFactory.cpp MessageReader.cpp ../type/SecurityInformationType.cpp ../type/ClassificationEnum.cpp ../type/NonUS_ControlsEnum.cpp ../type/DeclassExceptionEnum.cpp ../type/DisseminationControlsEnum.cpp ServiceStatusListener.cpp ExternalizerLoader.cpp Version3UUIDHelper.cpp AbstractServiceBusConnectionFactory.cpp ../type/HeaderType.cpp ../type/MessageModeEnum.cpp ../type/MessageType.cpp ../type/SystemID_Type.cpp ../type/MissionID_Type.cpp ../type/ServiceID_Type.cpp ../type/ServiceStatusMT.cpp ../type/SAR_ActivityType.cpp ../type/SAR_SubCapabilityEnum.cpp ../type/ForeignKeyType.cpp ../type/ActivityBaseType.cpp ../type/ActivityBasisEnum.cpp ../type/ActivityStateEnum.cpp ../type/ActivityID_Type.cpp ../type/CannotComplyType.cpp ../type/CannotComplyEnum.cpp ../type/ServiceStatusMDT.cpp ../type/ServiceStateEnum.cpp ../type/VersionedID_Type.cpp ../type/CapabilityID_Type.cpp ../type/DateTimeRangeType.cpp ../type/ActivitySourceType.cpp ../type/MDF_ReferenceType.cpp ../type/MDF_ID_Type.cpp ../type/ServiceSettingType.cpp ../type/EventSeverityEnum.cpp ../type/ServiceSettingEnum.cpp ../type/WeekdayIntervalType.cpp ../type/WeekdayEnum.cpp ../type/StoreLoadoutItemType.cpp ../type/StoreItemType.cpp ../type/StoreLoadoutItemPET.cpp ../type/ComparableRankingType.cpp ../type/ReleasableToChoiceType.cpp ../type/ReleasableToEnum.cpp ../type/SCI_ControlsChoiceType.cpp ../type/SCI_ControlsEnum.cpp ../type/SCI_ControlsEnum.cpp ../type/StoreLoadoutChoiceType.cpp ../type/VariableSubsystemsType.cpp ../type/OwnerProducerChoiceType.cpp ../type/OwnerProducerEnum.cpp ../type/TargetType.cpp ../type/RadarPointingTargetType.cpp ../type/OpVolumeType.cpp ../type/OrbitAltitudeEnum.cpp ../type/OrbitQualitativeEnum.cpp ../type/EntityID_Type.cpp ../type/OpLineID_Type.cpp ../type/OpZoneID_Type.cpp ../type/SignalID_Type.cpp ../type/LineTargetType.cpp ../type/OpPointID_Type.cpp ../type/OpVolumeID_Type.cpp ../type/OrbitRegimeType.cpp ../type/OrbitClassEnum.cpp ../type/OrbitRegimeEnum.cpp ../type/PointTargetType.cpp ../type/PointChoiceType.cpp ../type/Point2D_Type.cpp ../type/AltitudeReferenceEnum.cpp ../type/UncertaintyType.cpp ../type/EllipseType.cpp ../type/Velocity2D_Type.cpp ../type/ZoneExternalType.cpp ../type/AltitudeRangeType.cpp ../type/GeometricVolumeType.cpp ../type/Shape3D_ChoiceType.cpp)

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