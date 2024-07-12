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
add_executable(my_example main.cpp example.cpp AbstractServiceBusConnection.cpp ConfigReader.cpp ConnectionStatus.cpp ConnectionMonitor.cpp UUIDGenerator.cpp Externalizer.cpp AccessorFileLocationMT.cpp UUIDFactory.cpp MessageReader.cpp ../type/SecurityInformationType.cpp ../type/ClassificationEnum.cpp ../type/NonUS_ControlsEnum.cpp ../type/DeclassExceptionEnum.cpp ../type/DisseminationControlsEnum.cpp ServiceStatusListener.cpp ExternalizerLoader.cpp Version3UUIDHelper.cpp AbstractServiceBusConnectionFactory.cpp ../type/HeaderType.cpp ../type/MessageModeEnum.cpp ../type/MessageType.cpp ../type/SystemID_Type.cpp ../type/MissionID_Type.cpp ../type/ServiceID_Type.cpp ../type/ServiceStatusMT.cpp ../type/SAR_ActivityType.cpp ../type/SAR_SubCapabilityEnum.cpp ../type/ForeignKeyType.cpp ../type/ActivityBaseType.cpp ../type/ActivityBasisEnum.cpp ../type/ActivityStateEnum.cpp ../type/ActivityID_Type.cpp ../type/CannotComplyType.cpp ../type/CannotComplyEnum.cpp ../type/ServiceStatusMDT.cpp ../type/ServiceStateEnum.cpp ../type/VersionedID_Type.cpp ../type/CapabilityID_Type.cpp ../type/DateTimeRangeType.cpp ../type/ActivitySourceType.cpp ../type/MDF_ReferenceType.cpp ../type/MDF_ID_Type.cpp ../type/ServiceSettingType.cpp ../type/EventSeverityEnum.cpp ../type/ServiceSettingEnum.cpp ../type/WeekdayIntervalType.cpp ../type/WeekdayEnum.cpp ../type/StoreLoadoutItemType.cpp ../type/StoreItemType.cpp ../type/StoreLoadoutItemPET.cpp ../type/ComparableRankingType.cpp ../type/ReleasableToChoiceType.cpp ../type/ReleasableToEnum.cpp ../type/SCI_ControlsChoiceType.cpp ../type/SCI_ControlsEnum.cpp ../type/SCI_ControlsEnum.cpp ../type/StoreLoadoutChoiceType.cpp ../type/VariableSubsystemsType.cpp ../type/OwnerProducerChoiceType.cpp ../type/OwnerProducerEnum.cpp ../type/TargetType.cpp ../type/RadarPointingTargetType.cpp ../type/OpVolumeType.cpp ../type/OrbitAltitudeEnum.cpp ../type/OrbitQualitativeEnum.cpp ../type/EntityID_Type.cpp ../type/OpLineID_Type.cpp ../type/OpZoneID_Type.cpp ../type/SignalID_Type.cpp ../type/LineTargetType.cpp ../type/OpPointID_Type.cpp ../type/OpVolumeID_Type.cpp ../type/OrbitRegimeType.cpp ../type/OrbitClassEnum.cpp ../type/OrbitRegimeEnum.cpp ../type/PointTargetType.cpp ../type/PointChoiceType.cpp ../type/Point2D_Type.cpp ../type/AltitudeReferenceEnum.cpp ../type/UncertaintyType.cpp ../type/EllipseType.cpp ../type/Velocity2D_Type.cpp ../type/ZoneExternalType.cpp ../type/AltitudeRangeType.cpp ../type/GeometricVolumeType.cpp ../type/Shape3D_ChoiceType.cpp ../type/SphereType.cpp ../type/CylinderType.cpp ../type/ArcVolumeType.cpp ../type/EllipsoidType.cpp ../type/QuaternionType.cpp ../type/RectangularConeType.cpp ../type/GeocentricVolumeType.cpp ../type/AnglePairType.cpp ../type/AngleHalfPairType.cpp ../type/KinematicsChoiceType.cpp ../type/Point2D_RelativeType.cpp ../type/IncRaPeriodVolumeType.cpp ../type/RTN_LocalPositionType.cpp ../type/RTN_PositionType.cpp ../type/KinematicsOptionsType.cpp ../type/ReferenceFrameID_Type.cpp ../type/RelativeOffset2D_Type.cpp ../type/RotationEnum.cpp ../type/OffsetXY_Enum.cpp ../type/Z_ChoiceType.cpp ../type/AltitudeReferenceType.cpp ../type/OpVolumeKinematicsType.cpp ../type/StoreLoadoutMissionType.cpp ../type/AlongOrbitalArcDeltaType.cpp ../type/FGI_SourceOpenChoiceType.cpp ../type/FGI_SourceOpenEnum.cpp ../type/NonIC_MarkingsChoiceType.cpp ../type/NonIC_MarkingsEnum.cpp ../type/StoreItemType.cpp ../type/StoreLoadoutCarriageType.cpp ../type/ActivityPlanReferenceType.cpp ../type/MissionPlanID_Type.cpp ../type/PlannedActivityID_Type.cpp ../type/CapabilityCommandBaseType.cpp ../type/CommandBaseType.cpp ../type/CommandStateEnum.cpp ../type/CommandID_Type.cpp ../type/TraceabilityType.cpp ../type/EEI_ID_Type.cpp ../type/ATO_TraceabilityType.cpp ../type/AOCO_TraceabilityType.cpp ../type/ACTDF_TraceabilityType.cpp ../type/ACTDF_TaskID_Type.cpp ../type/CS_STO_TraceabilityType.cpp ../type/ACTDF_CollectionPlanType.cpp ../type/ActivityPlansID_ChoiceType.cpp ../type/ActivityPlanID_Type.cpp ../type/OrbitActivityPlanID_Type.cpp ../type/RouteActivityPlanID_Type.cpp ../type/MDF_SubCategoryFileID_Type.cpp ../type/AltitudeOffsetReferenceType.cpp ../type/AssociatedMessageSourceType.cpp ../type/CapabilityConfigurationType.cpp ../type/SubsystemID_Type.cpp ../type/KinematicsMultiStandardType.cpp ../type/KinematicsType.cpp ../type/OrientationType.cpp ../type/EntityPositionType.cpp ../type/FixedPositionType.cpp ../type/Acceleration3D_Type.cpp ../type/Point2D_ReportedType.cpp ../type/DepthContactEnum.cpp ../type/AltitudeSourceEnum.cpp ../type/RelativePositionType.cpp ../type/LineOfSightChoiceType.cpp ../type/LOS3D_KinematicsType.cpp ../type/LOS3D_CovarianceType.cpp ../type/Point2D_ReferenceType.cpp ../type/ReferenceObjectType.cpp ../type/StateCovarianceNED_Type.cpp ../type/LOS3D_KinematicsType.cpp ../type/RelativeAnglesLOS3D_Type.cpp ../type/LOS_ReferenceEnum.cpp ../type/UnitVectorType.cpp ../type/KinematicsType.cpp ../type/OrientationCovarianceType.cpp ../type/Velocity2D_UncertaintyType.cpp ../type/OrbitalKinematicsChoiceType.cpp ../type/CapabilityCommandRankingType.cpp ../type/RelativeSlantRangeLOS3D_Type.cpp ../type/SAR_ActivityStatusDetailType.cpp ../type/RelativeDirectionEnum.cpp ../type/SAR_PredictedCollectionsType.cpp ../type/Point3D_Type.cpp ../type/ServiceSettingsParameterType.cpp ../type/AtomicEnergyMarkingsChoiceType.cpp ../type/AtomicEnergyMarkingsEnum.cpp ../type/AtomicEnergySigmaMarkingsEnum.cpp ../type/CapabilityConfigurationID_Type.cpp ../type/CollectionDeckTraceabilityType.cpp ../type/SAR_ActivityStatusDetailType.cpp ../type/ConcurrentCollectionDetailsType.cpp ../type/TimeWindowType.cpp ../type/ResourceRequestID_AndOptionType.cpp ../type/RequestID_Type.cpp ../type/SAR_PredictedActivityDetailType.cpp ../type/RequirementInstanceID_ChoiceType.cpp ../type/TaskID_Type.cpp ../type/ActionID_Type.cpp ../type/EffectID_Type.cpp ../type/ResponseID_Type.cpp ../type/SensorReferencedCoverageAreaType.cpp ../type/SensorReferencedCoverageAreaReferenceEnum.cpp ../type/RangeElevationExtentChoiceType.cpp ../type/RangeExtentType.cpp ../type/LOS_MeasurementAndUncertaintyType.cpp ../type/LOS_MeasurementType.cpp ../type/LOS_AzElType.cpp ../type/ConeAngleType.cpp ../type/SlantRangeType.cpp ../type/ArrivalDataType.cpp ../type/LOS_AzElRatesType.cpp ../type/ConeAngleRatesType.cpp ../type/LOS_UncertaintyType.cpp ../type/OperatorLocationOfInterestID_Type.cpp ../type/PositionAndVelocityCovarianceType.cpp ../type/PositionPositionCovarianceType.cpp ../type/PositionVelocityCovarianceType.cpp ../type/VelocityVelocityCovarianceType.cpp ../type/SharedRF_ApertureActivityBaseType.cpp ../type/DependentActivityType.cpp ../type/TypeOfDependencyEnum.cpp ../type/PerformanceMetricSetType.cpp ../type/NegotiableOptionsEnum.cpp ../type/MetricValueType.cpp)

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