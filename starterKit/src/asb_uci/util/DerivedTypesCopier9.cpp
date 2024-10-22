/** @file DerivedTypesCopier9.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:16 PM
 *
 * <pre>
 * Unclassified               U N C L A S S I F I E D               Unclassified
 *
 * DISTRIBUTION STATEMENT D: Distribution authorized to Department of Defense
 *    and U.S. DoD contractors only, Critical Technology, Export Controlled,
 *    26 January 2023. Other requests for this document shall be referred to
 *    AFLCMC/XA (OAMO), Wright-Patterson AFB OH 45433.
 *
 * DESTRUCTION NOTICE: Destroy by any method that will prevent disclosure of
 *    contents or reconstruction of the document.
 *
 * WARNING - This document contains technical data whose export is restricted
 *    by the Arms Export Control Act (Section 2751 of Title 22, United States
 *    Code) or the Export Control Reform Act of 2018 (Chapter 58 Sections
 *    4801-4852 of Title 50, United States Code). Violations of these export
 *    laws are subject to severe criminal penalties. Disseminate in accordance
 *    with provisions of DoD Directive 5230.25 and DoD Instruction 2040.02.
 *
 * Controlled by: USAF
 * Controlled by: AFLCMC/XA (OAMO)
 * CUI Category(ies): CTI, EXPT
 * Distribution Statement D
 * POC: Wayne Artuso, 937-713-5124
 *
 * CUI//SP-CTI/SP-EXPT
 * </pre>
 *
 */

#include "asb_uci/util/DerivedTypesCopier9.h"

#include "asb_uci/type/GatewayActivityMT.h"
#include "asb_uci/type/GatewayActivityType.h"
#include "asb_uci/type/GatewayCapabilityCommandType.h"
#include "asb_uci/type/GatewayCapabilityMDT.h"
#include "asb_uci/type/GatewayCapabilityMT.h"
#include "asb_uci/type/GatewayCapabilitySettingsCommandBaseType.h"
#include "asb_uci/type/GatewayCapabilityStatusMDT.h"
#include "asb_uci/type/GatewayCapabilityStatusMT.h"
#include "asb_uci/type/GatewayCapabilityStatusType.h"
#include "asb_uci/type/GatewayCapabilityType.h"
#include "asb_uci/type/GatewayCommandMT.h"
#include "asb_uci/type/GatewayCommandStatusMDT.h"
#include "asb_uci/type/GatewayCommandStatusMT.h"
#include "asb_uci/type/GatewayConfigurationPET.h"
#include "asb_uci/type/GatewayLink16ConfigurationAnnulusType.h"
#include "asb_uci/type/GatewayLink16ConfigurationCircleType.h"
#include "asb_uci/type/GatewayLink16ConfigurationCircularSectorType.h"
#include "asb_uci/type/GatewayLink16ConfigurationClosedAreaType.h"
#include "asb_uci/type/GatewayLink16ConfigurationRectangleType.h"
#include "asb_uci/type/GatewayNativeStatisticsPET.h"
#include "asb_uci/type/GatewaySettingsCommandMDT.h"
#include "asb_uci/type/GatewaySettingsCommandMT.h"
#include "asb_uci/type/GatewaySettingsCommandStatusMDT.h"
#include "asb_uci/type/GatewaySettingsCommandStatusMT.h"
#include "asb_uci/type/GenericDataLinkNativeInfoType.h"
#include "asb_uci/type/GeoFiltersQueryType.h"
#include "asb_uci/type/GimbalAxisID_Type.h"
#include "asb_uci/type/ID_Type.h"
#include "asb_uci/type/IFF_ActivityCommandType.h"
#include "asb_uci/type/IFF_ActivityMT.h"
#include "asb_uci/type/IFF_ActivityTransponderType.h"
#include "asb_uci/type/IFF_ActivityType.h"
#include "asb_uci/type/IFF_CapabilityCommandType.h"
#include "asb_uci/type/IFF_CapabilityMDT.h"
#include "asb_uci/type/IFF_CapabilityMT.h"
#include "asb_uci/type/IFF_CapabilityStatusMDT.h"
#include "asb_uci/type/IFF_CapabilityStatusMT.h"
#include "asb_uci/type/IFF_CapabilityType.h"
#include "asb_uci/type/IFF_CollectionConstraintsType.h"
#include "asb_uci/type/IFF_CommandMT.h"
#include "asb_uci/type/IFF_CommandStatusMDT.h"
#include "asb_uci/type/IFF_CommandStatusMT.h"
#include "asb_uci/type/IFF_ConsentRequestMT.h"
#include "asb_uci/type/IFF_ConsentRequestStatusMDT.h"
#include "asb_uci/type/IFF_ConsentRequestStatusMT.h"
#include "asb_uci/type/IFF_ConsentRequestType.h"
#include "asb_uci/type/IFF_SettingsCommandMDT.h"
#include "asb_uci/type/IFF_SettingsCommandMT.h"
#include "asb_uci/type/IFF_SettingsCommandStatusMDT.h"
#include "asb_uci/type/IFF_SettingsCommandStatusMT.h"
#include "asb_uci/type/IFF_TransponderModeControlType.h"
#include "asb_uci/type/IJMS_DataLinkIdentifierType.h"
#include "asb_uci/type/IJMS_QuerySpecificDataType.h"
#include "asb_uci/type/IO_PortCommandMT.h"
#include "asb_uci/type/IO_PortCommandStatusMDT.h"
#include "asb_uci/type/IO_PortCommandStatusMT.h"
#include "asb_uci/type/IO_PortCommandType.h"
#include "asb_uci/type/IO_PortStatusMT.h"
#include "asb_uci/type/IO_PortStatusType.h"
#include "asb_uci/type/IP_DataLinkNativeInfoType.h"
#include "asb_uci/type/IPv4_DataLinkNativeInfoType.h"
#include "asb_uci/type/IPv6_DataLinkNativeInfoType.h"
#include "asb_uci/type/IdentityConfidenceType.h"
#include "asb_uci/type/IdentityType.h"
#include "asb_uci/type/ImageAugmentationParametersType.h"
#include "asb_uci/type/ImageGeoRegistrationProcessingResultsType.h"
#include "asb_uci/type/ImagePixelGeoLocationProcessingParametersType.h"
#include "asb_uci/type/ImagePixelGeoLocationProcessingResultsType.h"
#include "asb_uci/type/ImageRegionOfInterestPET.h"
#include "asb_uci/type/InertialStateRelativeType.h"
#include "asb_uci/type/JREAP_GatewayNativeStatisticsType.h"
#include "asb_uci/type/LAR_ID_Type.h"
#include "asb_uci/type/LAR_MT.h"
#include "asb_uci/type/LAR_ReportMT.h"
#include "asb_uci/type/LAR_RequestMDT.h"
#include "asb_uci/type/LAR_RequestMT.h"
#include "asb_uci/type/LAR_RequestStatusMDT.h"
#include "asb_uci/type/LAR_RequestStatusMT.h"
#include "asb_uci/type/LaunchObjectID_Type.h"
#include "asb_uci/type/LaunchObservationID_Type.h"
#include "asb_uci/type/LaunchObservationMDT.h"
#include "asb_uci/type/LaunchObservationMT.h"
#include "asb_uci/type/LineDataStatusType.h"
#include "asb_uci/type/LinePoint2D_Type.h"
#include "asb_uci/type/LineTargetType.h"
#include "asb_uci/type/LineType.h"
#include "asb_uci/type/Link11DataLinkIdentifierType.h"
#include "asb_uci/type/Link11QuerySpecificDataType.h"
#include "asb_uci/type/Link16DataLinkIdentifierType.h"
#include "asb_uci/type/Link16DataLinkNativeInfoType.h"
#include "asb_uci/type/Link16EntityDataLinkNativeFilterType.h"
#include "asb_uci/type/Link16EntityMetadataType.h"
#include "asb_uci/type/Link16GatewayConfigurationType.h"
#include "asb_uci/type/Link16InterfaceDataLinkNativeInfoType.h"
#include "asb_uci/type/Link16SystemMetadataType.h"
#include "asb_uci/type/Link16TN_QuerySpecificDataType.h"
#include "asb_uci/type/LocatedEllipseType.h"
#include "asb_uci/type/LocatedRectangleType.h"
#include "asb_uci/type/LocationAndStatusBaseType.h"
#include "asb_uci/type/LocationAndStatusExpireType.h"
#include "uci/base/Accessor.h"
#include "uci/base/accessorType.h"
#include "uci/type/GatewayActivityMT.h"
#include "uci/type/GatewayActivityType.h"
#include "uci/type/GatewayCapabilityCommandType.h"
#include "uci/type/GatewayCapabilityMDT.h"
#include "uci/type/GatewayCapabilityMT.h"
#include "uci/type/GatewayCapabilitySettingsCommandBaseType.h"
#include "uci/type/GatewayCapabilityStatusMDT.h"
#include "uci/type/GatewayCapabilityStatusMT.h"
#include "uci/type/GatewayCapabilityStatusType.h"
#include "uci/type/GatewayCapabilityType.h"
#include "uci/type/GatewayCommandMT.h"
#include "uci/type/GatewayCommandStatusMDT.h"
#include "uci/type/GatewayCommandStatusMT.h"
#include "uci/type/GatewayConfigurationPET.h"
#include "uci/type/GatewayLink16ConfigurationAnnulusType.h"
#include "uci/type/GatewayLink16ConfigurationCircleType.h"
#include "uci/type/GatewayLink16ConfigurationCircularSectorType.h"
#include "uci/type/GatewayLink16ConfigurationClosedAreaType.h"
#include "uci/type/GatewayLink16ConfigurationRectangleType.h"
#include "uci/type/GatewayNativeStatisticsPET.h"
#include "uci/type/GatewaySettingsCommandMDT.h"
#include "uci/type/GatewaySettingsCommandMT.h"
#include "uci/type/GatewaySettingsCommandStatusMDT.h"
#include "uci/type/GatewaySettingsCommandStatusMT.h"
#include "uci/type/GenericDataLinkNativeInfoType.h"
#include "uci/type/GeoFiltersQueryType.h"
#include "uci/type/GimbalAxisID_Type.h"
#include "uci/type/ID_Type.h"
#include "uci/type/IFF_ActivityCommandType.h"
#include "uci/type/IFF_ActivityMT.h"
#include "uci/type/IFF_ActivityTransponderType.h"
#include "uci/type/IFF_ActivityType.h"
#include "uci/type/IFF_CapabilityCommandType.h"
#include "uci/type/IFF_CapabilityMDT.h"
#include "uci/type/IFF_CapabilityMT.h"
#include "uci/type/IFF_CapabilityStatusMDT.h"
#include "uci/type/IFF_CapabilityStatusMT.h"
#include "uci/type/IFF_CapabilityType.h"
#include "uci/type/IFF_CollectionConstraintsType.h"
#include "uci/type/IFF_CommandMT.h"
#include "uci/type/IFF_CommandStatusMDT.h"
#include "uci/type/IFF_CommandStatusMT.h"
#include "uci/type/IFF_ConsentRequestMT.h"
#include "uci/type/IFF_ConsentRequestStatusMDT.h"
#include "uci/type/IFF_ConsentRequestStatusMT.h"
#include "uci/type/IFF_ConsentRequestType.h"
#include "uci/type/IFF_SettingsCommandMDT.h"
#include "uci/type/IFF_SettingsCommandMT.h"
#include "uci/type/IFF_SettingsCommandStatusMDT.h"
#include "uci/type/IFF_SettingsCommandStatusMT.h"
#include "uci/type/IFF_TransponderModeControlType.h"
#include "uci/type/IJMS_DataLinkIdentifierType.h"
#include "uci/type/IJMS_QuerySpecificDataType.h"
#include "uci/type/IO_PortCommandMT.h"
#include "uci/type/IO_PortCommandStatusMDT.h"
#include "uci/type/IO_PortCommandStatusMT.h"
#include "uci/type/IO_PortCommandType.h"
#include "uci/type/IO_PortStatusMT.h"
#include "uci/type/IO_PortStatusType.h"
#include "uci/type/IP_DataLinkNativeInfoType.h"
#include "uci/type/IPv4_DataLinkNativeInfoType.h"
#include "uci/type/IPv6_DataLinkNativeInfoType.h"
#include "uci/type/IdentityConfidenceType.h"
#include "uci/type/IdentityType.h"
#include "uci/type/ImageAugmentationParametersType.h"
#include "uci/type/ImageGeoRegistrationProcessingResultsType.h"
#include "uci/type/ImagePixelGeoLocationProcessingParametersType.h"
#include "uci/type/ImagePixelGeoLocationProcessingResultsType.h"
#include "uci/type/ImageRegionOfInterestPET.h"
#include "uci/type/InertialStateRelativeType.h"
#include "uci/type/JREAP_GatewayNativeStatisticsType.h"
#include "uci/type/LAR_ID_Type.h"
#include "uci/type/LAR_MT.h"
#include "uci/type/LAR_ReportMT.h"
#include "uci/type/LAR_RequestMDT.h"
#include "uci/type/LAR_RequestMT.h"
#include "uci/type/LAR_RequestStatusMDT.h"
#include "uci/type/LAR_RequestStatusMT.h"
#include "uci/type/LaunchObjectID_Type.h"
#include "uci/type/LaunchObservationID_Type.h"
#include "uci/type/LaunchObservationMDT.h"
#include "uci/type/LaunchObservationMT.h"
#include "uci/type/LineDataStatusType.h"
#include "uci/type/LinePoint2D_Type.h"
#include "uci/type/LineTargetType.h"
#include "uci/type/LineType.h"
#include "uci/type/Link11DataLinkIdentifierType.h"
#include "uci/type/Link11QuerySpecificDataType.h"
#include "uci/type/Link16DataLinkIdentifierType.h"
#include "uci/type/Link16DataLinkNativeInfoType.h"
#include "uci/type/Link16EntityDataLinkNativeFilterType.h"
#include "uci/type/Link16EntityMetadataType.h"
#include "uci/type/Link16GatewayConfigurationType.h"
#include "uci/type/Link16InterfaceDataLinkNativeInfoType.h"
#include "uci/type/Link16SystemMetadataType.h"
#include "uci/type/Link16TN_QuerySpecificDataType.h"
#include "uci/type/LocatedEllipseType.h"
#include "uci/type/LocatedRectangleType.h"
#include "uci/type/LocationAndStatusBaseType.h"
#include "uci/type/LocationAndStatusExpireType.h"

/**  */
namespace asb_uci {

/**  */
namespace util {

bool DerivedTypesCopier9::copy(const uci::base::Accessor& source, uci::base::Accessor& destination) {
  switch (source.getAccessorType()) {
    case uci::type::accessorType::gatewayActivityMT:
      dynamic_cast<asb_uci::type::GatewayActivityMT&>(destination).copyImpl(dynamic_cast<const uci::type::GatewayActivityMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gatewayActivityType:
      dynamic_cast<asb_uci::type::GatewayActivityType&>(destination).copyImpl(dynamic_cast<const uci::type::GatewayActivityType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gatewayCapabilityCommandType:
      dynamic_cast<asb_uci::type::GatewayCapabilityCommandType&>(destination).copyImpl(dynamic_cast<const uci::type::GatewayCapabilityCommandType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gatewayCapabilityMDT:
      dynamic_cast<asb_uci::type::GatewayCapabilityMDT&>(destination).copyImpl(dynamic_cast<const uci::type::GatewayCapabilityMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gatewayCapabilityMT:
      dynamic_cast<asb_uci::type::GatewayCapabilityMT&>(destination).copyImpl(dynamic_cast<const uci::type::GatewayCapabilityMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gatewayCapabilitySettingsCommandBaseType:
      dynamic_cast<asb_uci::type::GatewayCapabilitySettingsCommandBaseType&>(destination).copyImpl(dynamic_cast<const uci::type::GatewayCapabilitySettingsCommandBaseType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gatewayCapabilityStatusMDT:
      dynamic_cast<asb_uci::type::GatewayCapabilityStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::GatewayCapabilityStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gatewayCapabilityStatusMT:
      dynamic_cast<asb_uci::type::GatewayCapabilityStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::GatewayCapabilityStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gatewayCapabilityStatusType:
      dynamic_cast<asb_uci::type::GatewayCapabilityStatusType&>(destination).copyImpl(dynamic_cast<const uci::type::GatewayCapabilityStatusType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gatewayCapabilityType:
      dynamic_cast<asb_uci::type::GatewayCapabilityType&>(destination).copyImpl(dynamic_cast<const uci::type::GatewayCapabilityType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gatewayCommandMT:
      dynamic_cast<asb_uci::type::GatewayCommandMT&>(destination).copyImpl(dynamic_cast<const uci::type::GatewayCommandMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gatewayCommandStatusMDT:
      dynamic_cast<asb_uci::type::GatewayCommandStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::GatewayCommandStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gatewayCommandStatusMT:
      dynamic_cast<asb_uci::type::GatewayCommandStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::GatewayCommandStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gatewayConfigurationPET:
      dynamic_cast<asb_uci::type::GatewayConfigurationPET&>(destination).copyImpl(dynamic_cast<const uci::type::GatewayConfigurationPET&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gatewayLink16ConfigurationAnnulusType:
      dynamic_cast<asb_uci::type::GatewayLink16ConfigurationAnnulusType&>(destination).copyImpl(dynamic_cast<const uci::type::GatewayLink16ConfigurationAnnulusType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gatewayLink16ConfigurationCircleType:
      dynamic_cast<asb_uci::type::GatewayLink16ConfigurationCircleType&>(destination).copyImpl(dynamic_cast<const uci::type::GatewayLink16ConfigurationCircleType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gatewayLink16ConfigurationCircularSectorType:
      dynamic_cast<asb_uci::type::GatewayLink16ConfigurationCircularSectorType&>(destination).copyImpl(dynamic_cast<const uci::type::GatewayLink16ConfigurationCircularSectorType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gatewayLink16ConfigurationClosedAreaType:
      dynamic_cast<asb_uci::type::GatewayLink16ConfigurationClosedAreaType&>(destination).copyImpl(dynamic_cast<const uci::type::GatewayLink16ConfigurationClosedAreaType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gatewayLink16ConfigurationRectangleType:
      dynamic_cast<asb_uci::type::GatewayLink16ConfigurationRectangleType&>(destination).copyImpl(dynamic_cast<const uci::type::GatewayLink16ConfigurationRectangleType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gatewayNativeStatisticsPET:
      dynamic_cast<asb_uci::type::GatewayNativeStatisticsPET&>(destination).copyImpl(dynamic_cast<const uci::type::GatewayNativeStatisticsPET&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gatewaySettingsCommandMDT:
      dynamic_cast<asb_uci::type::GatewaySettingsCommandMDT&>(destination).copyImpl(dynamic_cast<const uci::type::GatewaySettingsCommandMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gatewaySettingsCommandMT:
      dynamic_cast<asb_uci::type::GatewaySettingsCommandMT&>(destination).copyImpl(dynamic_cast<const uci::type::GatewaySettingsCommandMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gatewaySettingsCommandStatusMDT:
      dynamic_cast<asb_uci::type::GatewaySettingsCommandStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::GatewaySettingsCommandStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gatewaySettingsCommandStatusMT:
      dynamic_cast<asb_uci::type::GatewaySettingsCommandStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::GatewaySettingsCommandStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::genericDataLinkNativeInfoType:
      dynamic_cast<asb_uci::type::GenericDataLinkNativeInfoType&>(destination).copyImpl(dynamic_cast<const uci::type::GenericDataLinkNativeInfoType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::geoFiltersQueryType:
      dynamic_cast<asb_uci::type::GeoFiltersQueryType&>(destination).copyImpl(dynamic_cast<const uci::type::GeoFiltersQueryType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::gimbalAxisID_Type:
      dynamic_cast<asb_uci::type::GimbalAxisID_Type&>(destination).copyImpl(dynamic_cast<const uci::type::GimbalAxisID_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iD_Type:
      dynamic_cast<asb_uci::type::ID_Type&>(destination).copyImpl(dynamic_cast<const uci::type::ID_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::identityConfidenceType:
      dynamic_cast<asb_uci::type::IdentityConfidenceType&>(destination).copyImpl(dynamic_cast<const uci::type::IdentityConfidenceType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::identityType:
      dynamic_cast<asb_uci::type::IdentityType&>(destination).copyImpl(dynamic_cast<const uci::type::IdentityType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iFF_ActivityCommandType:
      dynamic_cast<asb_uci::type::IFF_ActivityCommandType&>(destination).copyImpl(dynamic_cast<const uci::type::IFF_ActivityCommandType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iFF_ActivityMT:
      dynamic_cast<asb_uci::type::IFF_ActivityMT&>(destination).copyImpl(dynamic_cast<const uci::type::IFF_ActivityMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iFF_ActivityTransponderType:
      dynamic_cast<asb_uci::type::IFF_ActivityTransponderType&>(destination).copyImpl(dynamic_cast<const uci::type::IFF_ActivityTransponderType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iFF_ActivityType:
      dynamic_cast<asb_uci::type::IFF_ActivityType&>(destination).copyImpl(dynamic_cast<const uci::type::IFF_ActivityType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iFF_CapabilityCommandType:
      dynamic_cast<asb_uci::type::IFF_CapabilityCommandType&>(destination).copyImpl(dynamic_cast<const uci::type::IFF_CapabilityCommandType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iFF_CapabilityMDT:
      dynamic_cast<asb_uci::type::IFF_CapabilityMDT&>(destination).copyImpl(dynamic_cast<const uci::type::IFF_CapabilityMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iFF_CapabilityMT:
      dynamic_cast<asb_uci::type::IFF_CapabilityMT&>(destination).copyImpl(dynamic_cast<const uci::type::IFF_CapabilityMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iFF_CapabilityStatusMDT:
      dynamic_cast<asb_uci::type::IFF_CapabilityStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::IFF_CapabilityStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iFF_CapabilityStatusMT:
      dynamic_cast<asb_uci::type::IFF_CapabilityStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::IFF_CapabilityStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iFF_CapabilityType:
      dynamic_cast<asb_uci::type::IFF_CapabilityType&>(destination).copyImpl(dynamic_cast<const uci::type::IFF_CapabilityType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iFF_CollectionConstraintsType:
      dynamic_cast<asb_uci::type::IFF_CollectionConstraintsType&>(destination).copyImpl(dynamic_cast<const uci::type::IFF_CollectionConstraintsType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iFF_CommandMT:
      dynamic_cast<asb_uci::type::IFF_CommandMT&>(destination).copyImpl(dynamic_cast<const uci::type::IFF_CommandMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iFF_CommandStatusMDT:
      dynamic_cast<asb_uci::type::IFF_CommandStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::IFF_CommandStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iFF_CommandStatusMT:
      dynamic_cast<asb_uci::type::IFF_CommandStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::IFF_CommandStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iFF_ConsentRequestMT:
      dynamic_cast<asb_uci::type::IFF_ConsentRequestMT&>(destination).copyImpl(dynamic_cast<const uci::type::IFF_ConsentRequestMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iFF_ConsentRequestStatusMDT:
      dynamic_cast<asb_uci::type::IFF_ConsentRequestStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::IFF_ConsentRequestStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iFF_ConsentRequestStatusMT:
      dynamic_cast<asb_uci::type::IFF_ConsentRequestStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::IFF_ConsentRequestStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iFF_ConsentRequestType:
      dynamic_cast<asb_uci::type::IFF_ConsentRequestType&>(destination).copyImpl(dynamic_cast<const uci::type::IFF_ConsentRequestType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iFF_SettingsCommandMDT:
      dynamic_cast<asb_uci::type::IFF_SettingsCommandMDT&>(destination).copyImpl(dynamic_cast<const uci::type::IFF_SettingsCommandMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iFF_SettingsCommandMT:
      dynamic_cast<asb_uci::type::IFF_SettingsCommandMT&>(destination).copyImpl(dynamic_cast<const uci::type::IFF_SettingsCommandMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iFF_SettingsCommandStatusMDT:
      dynamic_cast<asb_uci::type::IFF_SettingsCommandStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::IFF_SettingsCommandStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iFF_SettingsCommandStatusMT:
      dynamic_cast<asb_uci::type::IFF_SettingsCommandStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::IFF_SettingsCommandStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iFF_TransponderModeControlType:
      dynamic_cast<asb_uci::type::IFF_TransponderModeControlType&>(destination).copyImpl(dynamic_cast<const uci::type::IFF_TransponderModeControlType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iJMS_DataLinkIdentifierType:
      dynamic_cast<asb_uci::type::IJMS_DataLinkIdentifierType&>(destination).copyImpl(dynamic_cast<const uci::type::IJMS_DataLinkIdentifierType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iJMS_QuerySpecificDataType:
      dynamic_cast<asb_uci::type::IJMS_QuerySpecificDataType&>(destination).copyImpl(dynamic_cast<const uci::type::IJMS_QuerySpecificDataType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::imageAugmentationParametersType:
      dynamic_cast<asb_uci::type::ImageAugmentationParametersType&>(destination).copyImpl(dynamic_cast<const uci::type::ImageAugmentationParametersType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::imageGeoRegistrationProcessingResultsType:
      dynamic_cast<asb_uci::type::ImageGeoRegistrationProcessingResultsType&>(destination).copyImpl(dynamic_cast<const uci::type::ImageGeoRegistrationProcessingResultsType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::imagePixelGeoLocationProcessingParametersType:
      dynamic_cast<asb_uci::type::ImagePixelGeoLocationProcessingParametersType&>(destination).copyImpl(dynamic_cast<const uci::type::ImagePixelGeoLocationProcessingParametersType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::imagePixelGeoLocationProcessingResultsType:
      dynamic_cast<asb_uci::type::ImagePixelGeoLocationProcessingResultsType&>(destination).copyImpl(dynamic_cast<const uci::type::ImagePixelGeoLocationProcessingResultsType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::imageRegionOfInterestPET:
      dynamic_cast<asb_uci::type::ImageRegionOfInterestPET&>(destination).copyImpl(dynamic_cast<const uci::type::ImageRegionOfInterestPET&>(source), false);
      return true;
      break;
    case uci::type::accessorType::inertialStateRelativeType:
      dynamic_cast<asb_uci::type::InertialStateRelativeType&>(destination).copyImpl(dynamic_cast<const uci::type::InertialStateRelativeType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iO_PortCommandMT:
      dynamic_cast<asb_uci::type::IO_PortCommandMT&>(destination).copyImpl(dynamic_cast<const uci::type::IO_PortCommandMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iO_PortCommandStatusMDT:
      dynamic_cast<asb_uci::type::IO_PortCommandStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::IO_PortCommandStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iO_PortCommandStatusMT:
      dynamic_cast<asb_uci::type::IO_PortCommandStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::IO_PortCommandStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iO_PortCommandType:
      dynamic_cast<asb_uci::type::IO_PortCommandType&>(destination).copyImpl(dynamic_cast<const uci::type::IO_PortCommandType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iO_PortStatusMT:
      dynamic_cast<asb_uci::type::IO_PortStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::IO_PortStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iO_PortStatusType:
      dynamic_cast<asb_uci::type::IO_PortStatusType&>(destination).copyImpl(dynamic_cast<const uci::type::IO_PortStatusType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iP_DataLinkNativeInfoType:
      dynamic_cast<asb_uci::type::IP_DataLinkNativeInfoType&>(destination).copyImpl(dynamic_cast<const uci::type::IP_DataLinkNativeInfoType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iPv4_DataLinkNativeInfoType:
      dynamic_cast<asb_uci::type::IPv4_DataLinkNativeInfoType&>(destination).copyImpl(dynamic_cast<const uci::type::IPv4_DataLinkNativeInfoType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::iPv6_DataLinkNativeInfoType:
      dynamic_cast<asb_uci::type::IPv6_DataLinkNativeInfoType&>(destination).copyImpl(dynamic_cast<const uci::type::IPv6_DataLinkNativeInfoType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::jREAP_GatewayNativeStatisticsType:
      dynamic_cast<asb_uci::type::JREAP_GatewayNativeStatisticsType&>(destination).copyImpl(dynamic_cast<const uci::type::JREAP_GatewayNativeStatisticsType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::lAR_ID_Type:
      dynamic_cast<asb_uci::type::LAR_ID_Type&>(destination).copyImpl(dynamic_cast<const uci::type::LAR_ID_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::lAR_MT:
      dynamic_cast<asb_uci::type::LAR_MT&>(destination).copyImpl(dynamic_cast<const uci::type::LAR_MT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::lAR_ReportMT:
      dynamic_cast<asb_uci::type::LAR_ReportMT&>(destination).copyImpl(dynamic_cast<const uci::type::LAR_ReportMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::lAR_RequestMDT:
      dynamic_cast<asb_uci::type::LAR_RequestMDT&>(destination).copyImpl(dynamic_cast<const uci::type::LAR_RequestMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::lAR_RequestMT:
      dynamic_cast<asb_uci::type::LAR_RequestMT&>(destination).copyImpl(dynamic_cast<const uci::type::LAR_RequestMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::lAR_RequestStatusMDT:
      dynamic_cast<asb_uci::type::LAR_RequestStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::LAR_RequestStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::lAR_RequestStatusMT:
      dynamic_cast<asb_uci::type::LAR_RequestStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::LAR_RequestStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::launchObjectID_Type:
      dynamic_cast<asb_uci::type::LaunchObjectID_Type&>(destination).copyImpl(dynamic_cast<const uci::type::LaunchObjectID_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::launchObservationID_Type:
      dynamic_cast<asb_uci::type::LaunchObservationID_Type&>(destination).copyImpl(dynamic_cast<const uci::type::LaunchObservationID_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::launchObservationMDT:
      dynamic_cast<asb_uci::type::LaunchObservationMDT&>(destination).copyImpl(dynamic_cast<const uci::type::LaunchObservationMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::launchObservationMT:
      dynamic_cast<asb_uci::type::LaunchObservationMT&>(destination).copyImpl(dynamic_cast<const uci::type::LaunchObservationMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::lineDataStatusType:
      dynamic_cast<asb_uci::type::LineDataStatusType&>(destination).copyImpl(dynamic_cast<const uci::type::LineDataStatusType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::linePoint2D_Type:
      dynamic_cast<asb_uci::type::LinePoint2D_Type&>(destination).copyImpl(dynamic_cast<const uci::type::LinePoint2D_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::lineTargetType:
      dynamic_cast<asb_uci::type::LineTargetType&>(destination).copyImpl(dynamic_cast<const uci::type::LineTargetType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::lineType:
      dynamic_cast<asb_uci::type::LineType&>(destination).copyImpl(dynamic_cast<const uci::type::LineType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::link11DataLinkIdentifierType:
      dynamic_cast<asb_uci::type::Link11DataLinkIdentifierType&>(destination).copyImpl(dynamic_cast<const uci::type::Link11DataLinkIdentifierType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::link11QuerySpecificDataType:
      dynamic_cast<asb_uci::type::Link11QuerySpecificDataType&>(destination).copyImpl(dynamic_cast<const uci::type::Link11QuerySpecificDataType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::link16DataLinkIdentifierType:
      dynamic_cast<asb_uci::type::Link16DataLinkIdentifierType&>(destination).copyImpl(dynamic_cast<const uci::type::Link16DataLinkIdentifierType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::link16DataLinkNativeInfoType:
      dynamic_cast<asb_uci::type::Link16DataLinkNativeInfoType&>(destination).copyImpl(dynamic_cast<const uci::type::Link16DataLinkNativeInfoType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::link16EntityDataLinkNativeFilterType:
      dynamic_cast<asb_uci::type::Link16EntityDataLinkNativeFilterType&>(destination).copyImpl(dynamic_cast<const uci::type::Link16EntityDataLinkNativeFilterType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::link16EntityMetadataType:
      dynamic_cast<asb_uci::type::Link16EntityMetadataType&>(destination).copyImpl(dynamic_cast<const uci::type::Link16EntityMetadataType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::link16GatewayConfigurationType:
      dynamic_cast<asb_uci::type::Link16GatewayConfigurationType&>(destination).copyImpl(dynamic_cast<const uci::type::Link16GatewayConfigurationType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::link16InterfaceDataLinkNativeInfoType:
      dynamic_cast<asb_uci::type::Link16InterfaceDataLinkNativeInfoType&>(destination).copyImpl(dynamic_cast<const uci::type::Link16InterfaceDataLinkNativeInfoType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::link16SystemMetadataType:
      dynamic_cast<asb_uci::type::Link16SystemMetadataType&>(destination).copyImpl(dynamic_cast<const uci::type::Link16SystemMetadataType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::link16TN_QuerySpecificDataType:
      dynamic_cast<asb_uci::type::Link16TN_QuerySpecificDataType&>(destination).copyImpl(dynamic_cast<const uci::type::Link16TN_QuerySpecificDataType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::locatedEllipseType:
      dynamic_cast<asb_uci::type::LocatedEllipseType&>(destination).copyImpl(dynamic_cast<const uci::type::LocatedEllipseType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::locatedRectangleType:
      dynamic_cast<asb_uci::type::LocatedRectangleType&>(destination).copyImpl(dynamic_cast<const uci::type::LocatedRectangleType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::locationAndStatusBaseType:
      dynamic_cast<asb_uci::type::LocationAndStatusBaseType&>(destination).copyImpl(dynamic_cast<const uci::type::LocationAndStatusBaseType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::locationAndStatusExpireType:
      dynamic_cast<asb_uci::type::LocationAndStatusExpireType&>(destination).copyImpl(dynamic_cast<const uci::type::LocationAndStatusExpireType&>(source), false);
      return true;
      break;
    default:
      return false;
  }
}

} // namespace util

} // namespace asb_uci

