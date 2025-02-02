/** @file DerivedTypesCreator9.cpp
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

#include "asb_uci/util/DerivedTypesCreator9.h"

#include <boost/smart_ptr/make_unique.hpp>

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

/**  */
namespace asb_uci {

/**  */
namespace util {

uci::base::Accessor* DerivedTypesCreator9::create(const uci::base::accessorType::AccessorType type) {
  switch (type) {
    case uci::type::accessorType::gatewayActivityMT:
      return boost::make_unique<asb_uci::type::GatewayActivityMT>().release();
    case uci::type::accessorType::gatewayActivityType:
      return boost::make_unique<asb_uci::type::GatewayActivityType>().release();
    case uci::type::accessorType::gatewayCapabilityCommandType:
      return boost::make_unique<asb_uci::type::GatewayCapabilityCommandType>().release();
    case uci::type::accessorType::gatewayCapabilityMDT:
      return boost::make_unique<asb_uci::type::GatewayCapabilityMDT>().release();
    case uci::type::accessorType::gatewayCapabilityMT:
      return boost::make_unique<asb_uci::type::GatewayCapabilityMT>().release();
    case uci::type::accessorType::gatewayCapabilitySettingsCommandBaseType:
      return boost::make_unique<asb_uci::type::GatewayCapabilitySettingsCommandBaseType>().release();
    case uci::type::accessorType::gatewayCapabilityStatusMDT:
      return boost::make_unique<asb_uci::type::GatewayCapabilityStatusMDT>().release();
    case uci::type::accessorType::gatewayCapabilityStatusMT:
      return boost::make_unique<asb_uci::type::GatewayCapabilityStatusMT>().release();
    case uci::type::accessorType::gatewayCapabilityStatusType:
      return boost::make_unique<asb_uci::type::GatewayCapabilityStatusType>().release();
    case uci::type::accessorType::gatewayCapabilityType:
      return boost::make_unique<asb_uci::type::GatewayCapabilityType>().release();
    case uci::type::accessorType::gatewayCommandMT:
      return boost::make_unique<asb_uci::type::GatewayCommandMT>().release();
    case uci::type::accessorType::gatewayCommandStatusMDT:
      return boost::make_unique<asb_uci::type::GatewayCommandStatusMDT>().release();
    case uci::type::accessorType::gatewayCommandStatusMT:
      return boost::make_unique<asb_uci::type::GatewayCommandStatusMT>().release();
    case uci::type::accessorType::gatewayConfigurationPET:
      return boost::make_unique<asb_uci::type::GatewayConfigurationPET>().release();
    case uci::type::accessorType::gatewayLink16ConfigurationAnnulusType:
      return boost::make_unique<asb_uci::type::GatewayLink16ConfigurationAnnulusType>().release();
    case uci::type::accessorType::gatewayLink16ConfigurationCircleType:
      return boost::make_unique<asb_uci::type::GatewayLink16ConfigurationCircleType>().release();
    case uci::type::accessorType::gatewayLink16ConfigurationCircularSectorType:
      return boost::make_unique<asb_uci::type::GatewayLink16ConfigurationCircularSectorType>().release();
    case uci::type::accessorType::gatewayLink16ConfigurationClosedAreaType:
      return boost::make_unique<asb_uci::type::GatewayLink16ConfigurationClosedAreaType>().release();
    case uci::type::accessorType::gatewayLink16ConfigurationRectangleType:
      return boost::make_unique<asb_uci::type::GatewayLink16ConfigurationRectangleType>().release();
    case uci::type::accessorType::gatewayNativeStatisticsPET:
      return boost::make_unique<asb_uci::type::GatewayNativeStatisticsPET>().release();
    case uci::type::accessorType::gatewaySettingsCommandMDT:
      return boost::make_unique<asb_uci::type::GatewaySettingsCommandMDT>().release();
    case uci::type::accessorType::gatewaySettingsCommandMT:
      return boost::make_unique<asb_uci::type::GatewaySettingsCommandMT>().release();
    case uci::type::accessorType::gatewaySettingsCommandStatusMDT:
      return boost::make_unique<asb_uci::type::GatewaySettingsCommandStatusMDT>().release();
    case uci::type::accessorType::gatewaySettingsCommandStatusMT:
      return boost::make_unique<asb_uci::type::GatewaySettingsCommandStatusMT>().release();
    case uci::type::accessorType::genericDataLinkNativeInfoType:
      return boost::make_unique<asb_uci::type::GenericDataLinkNativeInfoType>().release();
    case uci::type::accessorType::geoFiltersQueryType:
      return boost::make_unique<asb_uci::type::GeoFiltersQueryType>().release();
    case uci::type::accessorType::gimbalAxisID_Type:
      return boost::make_unique<asb_uci::type::GimbalAxisID_Type>().release();
    case uci::type::accessorType::iD_Type:
      return boost::make_unique<asb_uci::type::ID_Type>().release();
    case uci::type::accessorType::identityConfidenceType:
      return boost::make_unique<asb_uci::type::IdentityConfidenceType>().release();
    case uci::type::accessorType::identityType:
      return boost::make_unique<asb_uci::type::IdentityType>().release();
    case uci::type::accessorType::iFF_ActivityCommandType:
      return boost::make_unique<asb_uci::type::IFF_ActivityCommandType>().release();
    case uci::type::accessorType::iFF_ActivityMT:
      return boost::make_unique<asb_uci::type::IFF_ActivityMT>().release();
    case uci::type::accessorType::iFF_ActivityTransponderType:
      return boost::make_unique<asb_uci::type::IFF_ActivityTransponderType>().release();
    case uci::type::accessorType::iFF_ActivityType:
      return boost::make_unique<asb_uci::type::IFF_ActivityType>().release();
    case uci::type::accessorType::iFF_CapabilityCommandType:
      return boost::make_unique<asb_uci::type::IFF_CapabilityCommandType>().release();
    case uci::type::accessorType::iFF_CapabilityMDT:
      return boost::make_unique<asb_uci::type::IFF_CapabilityMDT>().release();
    case uci::type::accessorType::iFF_CapabilityMT:
      return boost::make_unique<asb_uci::type::IFF_CapabilityMT>().release();
    case uci::type::accessorType::iFF_CapabilityStatusMDT:
      return boost::make_unique<asb_uci::type::IFF_CapabilityStatusMDT>().release();
    case uci::type::accessorType::iFF_CapabilityStatusMT:
      return boost::make_unique<asb_uci::type::IFF_CapabilityStatusMT>().release();
    case uci::type::accessorType::iFF_CapabilityType:
      return boost::make_unique<asb_uci::type::IFF_CapabilityType>().release();
    case uci::type::accessorType::iFF_CollectionConstraintsType:
      return boost::make_unique<asb_uci::type::IFF_CollectionConstraintsType>().release();
    case uci::type::accessorType::iFF_CommandMT:
      return boost::make_unique<asb_uci::type::IFF_CommandMT>().release();
    case uci::type::accessorType::iFF_CommandStatusMDT:
      return boost::make_unique<asb_uci::type::IFF_CommandStatusMDT>().release();
    case uci::type::accessorType::iFF_CommandStatusMT:
      return boost::make_unique<asb_uci::type::IFF_CommandStatusMT>().release();
    case uci::type::accessorType::iFF_ConsentRequestMT:
      return boost::make_unique<asb_uci::type::IFF_ConsentRequestMT>().release();
    case uci::type::accessorType::iFF_ConsentRequestStatusMDT:
      return boost::make_unique<asb_uci::type::IFF_ConsentRequestStatusMDT>().release();
    case uci::type::accessorType::iFF_ConsentRequestStatusMT:
      return boost::make_unique<asb_uci::type::IFF_ConsentRequestStatusMT>().release();
    case uci::type::accessorType::iFF_ConsentRequestType:
      return boost::make_unique<asb_uci::type::IFF_ConsentRequestType>().release();
    case uci::type::accessorType::iFF_SettingsCommandMDT:
      return boost::make_unique<asb_uci::type::IFF_SettingsCommandMDT>().release();
    case uci::type::accessorType::iFF_SettingsCommandMT:
      return boost::make_unique<asb_uci::type::IFF_SettingsCommandMT>().release();
    case uci::type::accessorType::iFF_SettingsCommandStatusMDT:
      return boost::make_unique<asb_uci::type::IFF_SettingsCommandStatusMDT>().release();
    case uci::type::accessorType::iFF_SettingsCommandStatusMT:
      return boost::make_unique<asb_uci::type::IFF_SettingsCommandStatusMT>().release();
    case uci::type::accessorType::iFF_TransponderModeControlType:
      return boost::make_unique<asb_uci::type::IFF_TransponderModeControlType>().release();
    case uci::type::accessorType::iJMS_DataLinkIdentifierType:
      return boost::make_unique<asb_uci::type::IJMS_DataLinkIdentifierType>().release();
    case uci::type::accessorType::iJMS_QuerySpecificDataType:
      return boost::make_unique<asb_uci::type::IJMS_QuerySpecificDataType>().release();
    case uci::type::accessorType::imageAugmentationParametersType:
      return boost::make_unique<asb_uci::type::ImageAugmentationParametersType>().release();
    case uci::type::accessorType::imageGeoRegistrationProcessingResultsType:
      return boost::make_unique<asb_uci::type::ImageGeoRegistrationProcessingResultsType>().release();
    case uci::type::accessorType::imagePixelGeoLocationProcessingParametersType:
      return boost::make_unique<asb_uci::type::ImagePixelGeoLocationProcessingParametersType>().release();
    case uci::type::accessorType::imagePixelGeoLocationProcessingResultsType:
      return boost::make_unique<asb_uci::type::ImagePixelGeoLocationProcessingResultsType>().release();
    case uci::type::accessorType::imageRegionOfInterestPET:
      return boost::make_unique<asb_uci::type::ImageRegionOfInterestPET>().release();
    case uci::type::accessorType::inertialStateRelativeType:
      return boost::make_unique<asb_uci::type::InertialStateRelativeType>().release();
    case uci::type::accessorType::iO_PortCommandMT:
      return boost::make_unique<asb_uci::type::IO_PortCommandMT>().release();
    case uci::type::accessorType::iO_PortCommandStatusMDT:
      return boost::make_unique<asb_uci::type::IO_PortCommandStatusMDT>().release();
    case uci::type::accessorType::iO_PortCommandStatusMT:
      return boost::make_unique<asb_uci::type::IO_PortCommandStatusMT>().release();
    case uci::type::accessorType::iO_PortCommandType:
      return boost::make_unique<asb_uci::type::IO_PortCommandType>().release();
    case uci::type::accessorType::iO_PortStatusMT:
      return boost::make_unique<asb_uci::type::IO_PortStatusMT>().release();
    case uci::type::accessorType::iO_PortStatusType:
      return boost::make_unique<asb_uci::type::IO_PortStatusType>().release();
    case uci::type::accessorType::iP_DataLinkNativeInfoType:
      return boost::make_unique<asb_uci::type::IP_DataLinkNativeInfoType>().release();
    case uci::type::accessorType::iPv4_DataLinkNativeInfoType:
      return boost::make_unique<asb_uci::type::IPv4_DataLinkNativeInfoType>().release();
    case uci::type::accessorType::iPv6_DataLinkNativeInfoType:
      return boost::make_unique<asb_uci::type::IPv6_DataLinkNativeInfoType>().release();
    case uci::type::accessorType::jREAP_GatewayNativeStatisticsType:
      return boost::make_unique<asb_uci::type::JREAP_GatewayNativeStatisticsType>().release();
    case uci::type::accessorType::lAR_ID_Type:
      return boost::make_unique<asb_uci::type::LAR_ID_Type>().release();
    case uci::type::accessorType::lAR_MT:
      return boost::make_unique<asb_uci::type::LAR_MT>().release();
    case uci::type::accessorType::lAR_ReportMT:
      return boost::make_unique<asb_uci::type::LAR_ReportMT>().release();
    case uci::type::accessorType::lAR_RequestMDT:
      return boost::make_unique<asb_uci::type::LAR_RequestMDT>().release();
    case uci::type::accessorType::lAR_RequestMT:
      return boost::make_unique<asb_uci::type::LAR_RequestMT>().release();
    case uci::type::accessorType::lAR_RequestStatusMDT:
      return boost::make_unique<asb_uci::type::LAR_RequestStatusMDT>().release();
    case uci::type::accessorType::lAR_RequestStatusMT:
      return boost::make_unique<asb_uci::type::LAR_RequestStatusMT>().release();
    case uci::type::accessorType::launchObjectID_Type:
      return boost::make_unique<asb_uci::type::LaunchObjectID_Type>().release();
    case uci::type::accessorType::launchObservationID_Type:
      return boost::make_unique<asb_uci::type::LaunchObservationID_Type>().release();
    case uci::type::accessorType::launchObservationMDT:
      return boost::make_unique<asb_uci::type::LaunchObservationMDT>().release();
    case uci::type::accessorType::launchObservationMT:
      return boost::make_unique<asb_uci::type::LaunchObservationMT>().release();
    case uci::type::accessorType::lineDataStatusType:
      return boost::make_unique<asb_uci::type::LineDataStatusType>().release();
    case uci::type::accessorType::linePoint2D_Type:
      return boost::make_unique<asb_uci::type::LinePoint2D_Type>().release();
    case uci::type::accessorType::lineTargetType:
      return boost::make_unique<asb_uci::type::LineTargetType>().release();
    case uci::type::accessorType::lineType:
      return boost::make_unique<asb_uci::type::LineType>().release();
    case uci::type::accessorType::link11DataLinkIdentifierType:
      return boost::make_unique<asb_uci::type::Link11DataLinkIdentifierType>().release();
    case uci::type::accessorType::link11QuerySpecificDataType:
      return boost::make_unique<asb_uci::type::Link11QuerySpecificDataType>().release();
    case uci::type::accessorType::link16DataLinkIdentifierType:
      return boost::make_unique<asb_uci::type::Link16DataLinkIdentifierType>().release();
    case uci::type::accessorType::link16DataLinkNativeInfoType:
      return boost::make_unique<asb_uci::type::Link16DataLinkNativeInfoType>().release();
    case uci::type::accessorType::link16EntityDataLinkNativeFilterType:
      return boost::make_unique<asb_uci::type::Link16EntityDataLinkNativeFilterType>().release();
    case uci::type::accessorType::link16EntityMetadataType:
      return boost::make_unique<asb_uci::type::Link16EntityMetadataType>().release();
    case uci::type::accessorType::link16GatewayConfigurationType:
      return boost::make_unique<asb_uci::type::Link16GatewayConfigurationType>().release();
    case uci::type::accessorType::link16InterfaceDataLinkNativeInfoType:
      return boost::make_unique<asb_uci::type::Link16InterfaceDataLinkNativeInfoType>().release();
    case uci::type::accessorType::link16SystemMetadataType:
      return boost::make_unique<asb_uci::type::Link16SystemMetadataType>().release();
    case uci::type::accessorType::link16TN_QuerySpecificDataType:
      return boost::make_unique<asb_uci::type::Link16TN_QuerySpecificDataType>().release();
    case uci::type::accessorType::locatedEllipseType:
      return boost::make_unique<asb_uci::type::LocatedEllipseType>().release();
    case uci::type::accessorType::locatedRectangleType:
      return boost::make_unique<asb_uci::type::LocatedRectangleType>().release();
    case uci::type::accessorType::locationAndStatusBaseType:
      return boost::make_unique<asb_uci::type::LocationAndStatusBaseType>().release();
    case uci::type::accessorType::locationAndStatusExpireType:
      return boost::make_unique<asb_uci::type::LocationAndStatusExpireType>().release();
    default:
      return nullptr;
  }
}

} // namespace util

} // namespace asb_uci

