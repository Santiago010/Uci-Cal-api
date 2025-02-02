/** @file DerivedTypesSerializer3.cpp
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

#include "asb_uci/util/DerivedTypesSerializer3.h"

#include <string>

#include <boost/none.hpp>
#include <boost/property_tree/ptree.hpp>

#include "asb_uci/type/BIT_ID_Type.h"
#include "asb_uci/type/BehaviorType.h"
#include "asb_uci/type/ByRequirementPolicyType.h"
#include "asb_uci/type/ByResultPolicyType.h"
#include "asb_uci/type/ByTriggerPolicyType.h"
#include "asb_uci/type/COE_OrbitBaseType.h"
#include "asb_uci/type/COE_OrbitType.h"
#include "asb_uci/type/COMINT_ActivityCommandType.h"
#include "asb_uci/type/COMINT_ActivityMT.h"
#include "asb_uci/type/COMINT_ActivityType.h"
#include "asb_uci/type/COMINT_CapabilityCommandType.h"
#include "asb_uci/type/COMINT_CapabilityMDT.h"
#include "asb_uci/type/COMINT_CapabilityMT.h"
#include "asb_uci/type/COMINT_CapabilityStatusMDT.h"
#include "asb_uci/type/COMINT_CapabilityStatusMT.h"
#include "asb_uci/type/COMINT_CapabilityType.h"
#include "asb_uci/type/COMINT_CommandMT.h"
#include "asb_uci/type/COMINT_CommandStatusMDT.h"
#include "asb_uci/type/COMINT_CommandStatusMT.h"
#include "asb_uci/type/COMINT_ConsentRequestMT.h"
#include "asb_uci/type/COMINT_ConsentRequestStatusMDT.h"
#include "asb_uci/type/COMINT_ConsentRequestStatusMT.h"
#include "asb_uci/type/COMINT_ConsentRequestType.h"
#include "asb_uci/type/COMINT_ProcessingParametersType.h"
#include "asb_uci/type/COMINT_SettingsCommandMDT.h"
#include "asb_uci/type/COMINT_SettingsCommandMT.h"
#include "asb_uci/type/COMINT_SettingsCommandStatusMDT.h"
#include "asb_uci/type/COMINT_SettingsCommandStatusMT.h"
#include "asb_uci/type/COMINT_TaskBaseType.h"
#include "asb_uci/type/COMINT_TaskType.h"
#include "asb_uci/type/CalibrationID_Type.h"
#include "asb_uci/type/CallSignType.h"
#include "asb_uci/type/CannotComplyType.h"
#include "asb_uci/type/CapabilityBaseType.h"
#include "asb_uci/type/CapabilityCommandBaseType.h"
#include "asb_uci/type/CapabilityCommandStatusBaseType.h"
#include "asb_uci/type/CapabilityConfigurationID_Type.h"
#include "asb_uci/type/CapabilityConsentRequestStatusBaseType.h"
#include "asb_uci/type/CapabilityCoverageAreaID_Type.h"
#include "asb_uci/type/CapabilityCoverageAreaMT.h"
#include "asb_uci/type/CapabilityCoverageAreaRequestMDT.h"
#include "asb_uci/type/CapabilityCoverageAreaRequestMT.h"
#include "asb_uci/type/CapabilityCoverageAreaRequestStatusMDT.h"
#include "asb_uci/type/CapabilityCoverageAreaRequestStatusMT.h"
#include "asb_uci/type/CapabilityDeclarationBaseType.h"
#include "asb_uci/type/CapabilityID_Type.h"
#include "asb_uci/type/CapabilitySettingsCommandBaseType.h"
#include "asb_uci/type/CapabilitySettingsCommandStatusBaseType.h"
#include "asb_uci/type/CapabilityStatusBaseType.h"
#include "asb_uci/type/CapabilityStatusType.h"
#include "asb_uci/type/CapabilityTaxonomyUniversalBaseType.h"
#include "asb_uci/type/CapabilityTaxonomyUniversalType.h"
#include "asb_uci/type/CargoDeliveryCapabilityMT.h"
#include "asb_uci/type/CargoDeliveryCapabilityStatusMDT.h"
#include "asb_uci/type/CargoDeliveryCapabilityStatusMT.h"
#include "asb_uci/type/CargoDeliveryCapabilityType.h"
#include "asb_uci/type/CargoID_Type.h"
#include "asb_uci/type/CargoStatusMT.h"
#include "asb_uci/type/CenterPointImageRegionOfInterestType.h"
#include "asb_uci/type/CollectionConstraintsType.h"
#include "asb_uci/type/ColorDepthSettingsType.h"
#include "asb_uci/type/CommActionExtendedType.h"
#include "asb_uci/type/CommActionType.h"
#include "asb_uci/type/CommAntennaModeType.h"
#include "asb_uci/type/CommAssetEstimationRequestMDT.h"
#include "asb_uci/type/CommAssetEstimationRequestMT.h"
#include "asb_uci/type/CommAssetEstimationRequestStatusMDT.h"
#include "asb_uci/type/CommAssetEstimationRequestStatusMT.h"
#include "asb_uci/type/CommAssetID_Type.h"
#include "asb_uci/type/CommAssetMT.h"
#include "asb_uci/type/CommAssetOrbitID_Type.h"
#include "asb_uci/type/CommAssetOrbitMT.h"
#include "asb_uci/type/CommAssetPositionReportMT.h"
#include "asb_uci/type/CommBLOS_CommWaveformActivityCommandType.h"
#include "asb_uci/type/CommBLOS_CommWaveformActivityType.h"
#include "asb_uci/type/CommBLOS_CommWaveformCapabilityCommandType.h"
#include "asb_uci/type/CommCDL_CommWaveformActivityCommandType.h"
#include "asb_uci/type/CommCDL_CommWaveformActivityType.h"
#include "asb_uci/type/CommCDL_CommWaveformCapabilityCommandType.h"
#include "asb_uci/type/CommConfigurationID_Type.h"
#include "asb_uci/type/CommCoverageDataType.h"
#include "asb_uci/type/CommCoverageUserDataType.h"
#include "asb_uci/type/CommDataType.h"
#include "asb_uci/type/CommEffectivityID_Type.h"
#include "asb_uci/type/CommIFDL_CommWaveformActivityCommandType.h"
#include "asb_uci/type/CommIFDL_CommWaveformActivityType.h"
#include "asb_uci/type/CommIFDL_CommWaveformCapabilityCommandType.h"
#include "asb_uci/type/CommLink16CommWaveformActivityCommandType.h"
#include "asb_uci/type/CommLink16CommWaveformActivityType.h"
#include "asb_uci/type/CommLink16CommWaveformCapabilityCommandType.h"
#include "asb_uci/type/CommMADL_CommWaveformActivityCommandType.h"
#include "asb_uci/type/CommMADL_CommWaveformActivityType.h"
#include "asb_uci/type/CommMADL_CommWaveformCapabilityCommandType.h"
#include "asb_uci/type/CommOutageType.h"
#include "asb_uci/type/CommPointingCommandMDT.h"
#include "asb_uci/type/CommPointingCommandMT.h"
#include "asb_uci/type/CommandBaseType.h"
#include "asb_uci/type/CommandID_Type.h"
#include "asb_uci/type/CommandStatusBaseType.h"
#include "asb_uci/type/CommandableCapabilityDeclarationType.h"
#include "uci/base/Accessor.h"
#include "uci/base/accessorType.h"
#include "uci/type/BIT_ID_Type.h"
#include "uci/type/BehaviorType.h"
#include "uci/type/ByRequirementPolicyType.h"
#include "uci/type/ByResultPolicyType.h"
#include "uci/type/ByTriggerPolicyType.h"
#include "uci/type/COE_OrbitBaseType.h"
#include "uci/type/COE_OrbitType.h"
#include "uci/type/COMINT_ActivityCommandType.h"
#include "uci/type/COMINT_ActivityMT.h"
#include "uci/type/COMINT_ActivityType.h"
#include "uci/type/COMINT_CapabilityCommandType.h"
#include "uci/type/COMINT_CapabilityMDT.h"
#include "uci/type/COMINT_CapabilityMT.h"
#include "uci/type/COMINT_CapabilityStatusMDT.h"
#include "uci/type/COMINT_CapabilityStatusMT.h"
#include "uci/type/COMINT_CapabilityType.h"
#include "uci/type/COMINT_CommandMT.h"
#include "uci/type/COMINT_CommandStatusMDT.h"
#include "uci/type/COMINT_CommandStatusMT.h"
#include "uci/type/COMINT_ConsentRequestMT.h"
#include "uci/type/COMINT_ConsentRequestStatusMDT.h"
#include "uci/type/COMINT_ConsentRequestStatusMT.h"
#include "uci/type/COMINT_ConsentRequestType.h"
#include "uci/type/COMINT_ProcessingParametersType.h"
#include "uci/type/COMINT_SettingsCommandMDT.h"
#include "uci/type/COMINT_SettingsCommandMT.h"
#include "uci/type/COMINT_SettingsCommandStatusMDT.h"
#include "uci/type/COMINT_SettingsCommandStatusMT.h"
#include "uci/type/COMINT_TaskBaseType.h"
#include "uci/type/COMINT_TaskType.h"
#include "uci/type/CalibrationID_Type.h"
#include "uci/type/CallSignType.h"
#include "uci/type/CannotComplyType.h"
#include "uci/type/CapabilityBaseType.h"
#include "uci/type/CapabilityCommandBaseType.h"
#include "uci/type/CapabilityCommandStatusBaseType.h"
#include "uci/type/CapabilityConfigurationID_Type.h"
#include "uci/type/CapabilityConsentRequestStatusBaseType.h"
#include "uci/type/CapabilityCoverageAreaID_Type.h"
#include "uci/type/CapabilityCoverageAreaMT.h"
#include "uci/type/CapabilityCoverageAreaRequestMDT.h"
#include "uci/type/CapabilityCoverageAreaRequestMT.h"
#include "uci/type/CapabilityCoverageAreaRequestStatusMDT.h"
#include "uci/type/CapabilityCoverageAreaRequestStatusMT.h"
#include "uci/type/CapabilityDeclarationBaseType.h"
#include "uci/type/CapabilityID_Type.h"
#include "uci/type/CapabilitySettingsCommandBaseType.h"
#include "uci/type/CapabilitySettingsCommandStatusBaseType.h"
#include "uci/type/CapabilityStatusBaseType.h"
#include "uci/type/CapabilityStatusType.h"
#include "uci/type/CapabilityTaxonomyUniversalBaseType.h"
#include "uci/type/CapabilityTaxonomyUniversalType.h"
#include "uci/type/CargoDeliveryCapabilityMT.h"
#include "uci/type/CargoDeliveryCapabilityStatusMDT.h"
#include "uci/type/CargoDeliveryCapabilityStatusMT.h"
#include "uci/type/CargoDeliveryCapabilityType.h"
#include "uci/type/CargoID_Type.h"
#include "uci/type/CargoStatusMT.h"
#include "uci/type/CenterPointImageRegionOfInterestType.h"
#include "uci/type/CollectionConstraintsType.h"
#include "uci/type/ColorDepthSettingsType.h"
#include "uci/type/CommActionExtendedType.h"
#include "uci/type/CommActionType.h"
#include "uci/type/CommAntennaModeType.h"
#include "uci/type/CommAssetEstimationRequestMDT.h"
#include "uci/type/CommAssetEstimationRequestMT.h"
#include "uci/type/CommAssetEstimationRequestStatusMDT.h"
#include "uci/type/CommAssetEstimationRequestStatusMT.h"
#include "uci/type/CommAssetID_Type.h"
#include "uci/type/CommAssetMT.h"
#include "uci/type/CommAssetOrbitID_Type.h"
#include "uci/type/CommAssetOrbitMT.h"
#include "uci/type/CommAssetPositionReportMT.h"
#include "uci/type/CommBLOS_CommWaveformActivityCommandType.h"
#include "uci/type/CommBLOS_CommWaveformActivityType.h"
#include "uci/type/CommBLOS_CommWaveformCapabilityCommandType.h"
#include "uci/type/CommCDL_CommWaveformActivityCommandType.h"
#include "uci/type/CommCDL_CommWaveformActivityType.h"
#include "uci/type/CommCDL_CommWaveformCapabilityCommandType.h"
#include "uci/type/CommConfigurationID_Type.h"
#include "uci/type/CommCoverageDataType.h"
#include "uci/type/CommCoverageUserDataType.h"
#include "uci/type/CommDataType.h"
#include "uci/type/CommEffectivityID_Type.h"
#include "uci/type/CommIFDL_CommWaveformActivityCommandType.h"
#include "uci/type/CommIFDL_CommWaveformActivityType.h"
#include "uci/type/CommIFDL_CommWaveformCapabilityCommandType.h"
#include "uci/type/CommLink16CommWaveformActivityCommandType.h"
#include "uci/type/CommLink16CommWaveformActivityType.h"
#include "uci/type/CommLink16CommWaveformCapabilityCommandType.h"
#include "uci/type/CommMADL_CommWaveformActivityCommandType.h"
#include "uci/type/CommMADL_CommWaveformActivityType.h"
#include "uci/type/CommMADL_CommWaveformCapabilityCommandType.h"
#include "uci/type/CommOutageType.h"
#include "uci/type/CommPointingCommandMDT.h"
#include "uci/type/CommPointingCommandMT.h"
#include "uci/type/CommandBaseType.h"
#include "uci/type/CommandID_Type.h"
#include "uci/type/CommandStatusBaseType.h"
#include "uci/type/CommandableCapabilityDeclarationType.h"

/**  */
namespace asb_uci {

/**  */
namespace util {

boost::optional<std::string> DerivedTypesSerializer3::serialize(const uci::base::Accessor& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode) {
  switch (accessor.getAccessorType()) {
    case uci::type::accessorType::behaviorType:
      return asb_uci::type::BehaviorType::serialize(dynamic_cast<const uci::type::BehaviorType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::bIT_ID_Type:
      return asb_uci::type::BIT_ID_Type::serialize(dynamic_cast<const uci::type::BIT_ID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::byRequirementPolicyType:
      return asb_uci::type::ByRequirementPolicyType::serialize(dynamic_cast<const uci::type::ByRequirementPolicyType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::byResultPolicyType:
      return asb_uci::type::ByResultPolicyType::serialize(dynamic_cast<const uci::type::ByResultPolicyType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::byTriggerPolicyType:
      return asb_uci::type::ByTriggerPolicyType::serialize(dynamic_cast<const uci::type::ByTriggerPolicyType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::calibrationID_Type:
      return asb_uci::type::CalibrationID_Type::serialize(dynamic_cast<const uci::type::CalibrationID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::callSignType:
      return asb_uci::type::CallSignType::serialize(dynamic_cast<const uci::type::CallSignType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cannotComplyType:
      return asb_uci::type::CannotComplyType::serialize(dynamic_cast<const uci::type::CannotComplyType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::capabilityBaseType:
      return asb_uci::type::CapabilityBaseType::serialize(dynamic_cast<const uci::type::CapabilityBaseType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::capabilityCommandBaseType:
      return asb_uci::type::CapabilityCommandBaseType::serialize(dynamic_cast<const uci::type::CapabilityCommandBaseType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::capabilityCommandStatusBaseType:
      return asb_uci::type::CapabilityCommandStatusBaseType::serialize(dynamic_cast<const uci::type::CapabilityCommandStatusBaseType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::capabilityConfigurationID_Type:
      return asb_uci::type::CapabilityConfigurationID_Type::serialize(dynamic_cast<const uci::type::CapabilityConfigurationID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::capabilityConsentRequestStatusBaseType:
      return asb_uci::type::CapabilityConsentRequestStatusBaseType::serialize(dynamic_cast<const uci::type::CapabilityConsentRequestStatusBaseType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::capabilityCoverageAreaID_Type:
      return asb_uci::type::CapabilityCoverageAreaID_Type::serialize(dynamic_cast<const uci::type::CapabilityCoverageAreaID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::capabilityCoverageAreaMT:
      return asb_uci::type::CapabilityCoverageAreaMT::serialize(dynamic_cast<const uci::type::CapabilityCoverageAreaMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::capabilityCoverageAreaRequestMDT:
      return asb_uci::type::CapabilityCoverageAreaRequestMDT::serialize(dynamic_cast<const uci::type::CapabilityCoverageAreaRequestMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::capabilityCoverageAreaRequestMT:
      return asb_uci::type::CapabilityCoverageAreaRequestMT::serialize(dynamic_cast<const uci::type::CapabilityCoverageAreaRequestMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::capabilityCoverageAreaRequestStatusMDT:
      return asb_uci::type::CapabilityCoverageAreaRequestStatusMDT::serialize(dynamic_cast<const uci::type::CapabilityCoverageAreaRequestStatusMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::capabilityCoverageAreaRequestStatusMT:
      return asb_uci::type::CapabilityCoverageAreaRequestStatusMT::serialize(dynamic_cast<const uci::type::CapabilityCoverageAreaRequestStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::capabilityDeclarationBaseType:
      return asb_uci::type::CapabilityDeclarationBaseType::serialize(dynamic_cast<const uci::type::CapabilityDeclarationBaseType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::capabilityID_Type:
      return asb_uci::type::CapabilityID_Type::serialize(dynamic_cast<const uci::type::CapabilityID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::capabilitySettingsCommandBaseType:
      return asb_uci::type::CapabilitySettingsCommandBaseType::serialize(dynamic_cast<const uci::type::CapabilitySettingsCommandBaseType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::capabilitySettingsCommandStatusBaseType:
      return asb_uci::type::CapabilitySettingsCommandStatusBaseType::serialize(dynamic_cast<const uci::type::CapabilitySettingsCommandStatusBaseType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::capabilityStatusBaseType:
      return asb_uci::type::CapabilityStatusBaseType::serialize(dynamic_cast<const uci::type::CapabilityStatusBaseType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::capabilityStatusType:
      return asb_uci::type::CapabilityStatusType::serialize(dynamic_cast<const uci::type::CapabilityStatusType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::capabilityTaxonomyUniversalBaseType:
      return asb_uci::type::CapabilityTaxonomyUniversalBaseType::serialize(dynamic_cast<const uci::type::CapabilityTaxonomyUniversalBaseType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::capabilityTaxonomyUniversalType:
      return asb_uci::type::CapabilityTaxonomyUniversalType::serialize(dynamic_cast<const uci::type::CapabilityTaxonomyUniversalType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cargoDeliveryCapabilityMT:
      return asb_uci::type::CargoDeliveryCapabilityMT::serialize(dynamic_cast<const uci::type::CargoDeliveryCapabilityMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cargoDeliveryCapabilityStatusMDT:
      return asb_uci::type::CargoDeliveryCapabilityStatusMDT::serialize(dynamic_cast<const uci::type::CargoDeliveryCapabilityStatusMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cargoDeliveryCapabilityStatusMT:
      return asb_uci::type::CargoDeliveryCapabilityStatusMT::serialize(dynamic_cast<const uci::type::CargoDeliveryCapabilityStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cargoDeliveryCapabilityType:
      return asb_uci::type::CargoDeliveryCapabilityType::serialize(dynamic_cast<const uci::type::CargoDeliveryCapabilityType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cargoID_Type:
      return asb_uci::type::CargoID_Type::serialize(dynamic_cast<const uci::type::CargoID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cargoStatusMT:
      return asb_uci::type::CargoStatusMT::serialize(dynamic_cast<const uci::type::CargoStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::centerPointImageRegionOfInterestType:
      return asb_uci::type::CenterPointImageRegionOfInterestType::serialize(dynamic_cast<const uci::type::CenterPointImageRegionOfInterestType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOE_OrbitBaseType:
      return asb_uci::type::COE_OrbitBaseType::serialize(dynamic_cast<const uci::type::COE_OrbitBaseType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOE_OrbitType:
      return asb_uci::type::COE_OrbitType::serialize(dynamic_cast<const uci::type::COE_OrbitType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::collectionConstraintsType:
      return asb_uci::type::CollectionConstraintsType::serialize(dynamic_cast<const uci::type::CollectionConstraintsType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::colorDepthSettingsType:
      return asb_uci::type::ColorDepthSettingsType::serialize(dynamic_cast<const uci::type::ColorDepthSettingsType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOMINT_ActivityCommandType:
      return asb_uci::type::COMINT_ActivityCommandType::serialize(dynamic_cast<const uci::type::COMINT_ActivityCommandType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOMINT_ActivityMT:
      return asb_uci::type::COMINT_ActivityMT::serialize(dynamic_cast<const uci::type::COMINT_ActivityMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOMINT_ActivityType:
      return asb_uci::type::COMINT_ActivityType::serialize(dynamic_cast<const uci::type::COMINT_ActivityType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOMINT_CapabilityCommandType:
      return asb_uci::type::COMINT_CapabilityCommandType::serialize(dynamic_cast<const uci::type::COMINT_CapabilityCommandType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOMINT_CapabilityMDT:
      return asb_uci::type::COMINT_CapabilityMDT::serialize(dynamic_cast<const uci::type::COMINT_CapabilityMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOMINT_CapabilityMT:
      return asb_uci::type::COMINT_CapabilityMT::serialize(dynamic_cast<const uci::type::COMINT_CapabilityMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOMINT_CapabilityStatusMDT:
      return asb_uci::type::COMINT_CapabilityStatusMDT::serialize(dynamic_cast<const uci::type::COMINT_CapabilityStatusMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOMINT_CapabilityStatusMT:
      return asb_uci::type::COMINT_CapabilityStatusMT::serialize(dynamic_cast<const uci::type::COMINT_CapabilityStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOMINT_CapabilityType:
      return asb_uci::type::COMINT_CapabilityType::serialize(dynamic_cast<const uci::type::COMINT_CapabilityType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOMINT_CommandMT:
      return asb_uci::type::COMINT_CommandMT::serialize(dynamic_cast<const uci::type::COMINT_CommandMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOMINT_CommandStatusMDT:
      return asb_uci::type::COMINT_CommandStatusMDT::serialize(dynamic_cast<const uci::type::COMINT_CommandStatusMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOMINT_CommandStatusMT:
      return asb_uci::type::COMINT_CommandStatusMT::serialize(dynamic_cast<const uci::type::COMINT_CommandStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOMINT_ConsentRequestMT:
      return asb_uci::type::COMINT_ConsentRequestMT::serialize(dynamic_cast<const uci::type::COMINT_ConsentRequestMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOMINT_ConsentRequestStatusMDT:
      return asb_uci::type::COMINT_ConsentRequestStatusMDT::serialize(dynamic_cast<const uci::type::COMINT_ConsentRequestStatusMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOMINT_ConsentRequestStatusMT:
      return asb_uci::type::COMINT_ConsentRequestStatusMT::serialize(dynamic_cast<const uci::type::COMINT_ConsentRequestStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOMINT_ConsentRequestType:
      return asb_uci::type::COMINT_ConsentRequestType::serialize(dynamic_cast<const uci::type::COMINT_ConsentRequestType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOMINT_ProcessingParametersType:
      return asb_uci::type::COMINT_ProcessingParametersType::serialize(dynamic_cast<const uci::type::COMINT_ProcessingParametersType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOMINT_SettingsCommandMDT:
      return asb_uci::type::COMINT_SettingsCommandMDT::serialize(dynamic_cast<const uci::type::COMINT_SettingsCommandMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOMINT_SettingsCommandMT:
      return asb_uci::type::COMINT_SettingsCommandMT::serialize(dynamic_cast<const uci::type::COMINT_SettingsCommandMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOMINT_SettingsCommandStatusMDT:
      return asb_uci::type::COMINT_SettingsCommandStatusMDT::serialize(dynamic_cast<const uci::type::COMINT_SettingsCommandStatusMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOMINT_SettingsCommandStatusMT:
      return asb_uci::type::COMINT_SettingsCommandStatusMT::serialize(dynamic_cast<const uci::type::COMINT_SettingsCommandStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOMINT_TaskBaseType:
      return asb_uci::type::COMINT_TaskBaseType::serialize(dynamic_cast<const uci::type::COMINT_TaskBaseType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::cOMINT_TaskType:
      return asb_uci::type::COMINT_TaskType::serialize(dynamic_cast<const uci::type::COMINT_TaskType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commActionExtendedType:
      return asb_uci::type::CommActionExtendedType::serialize(dynamic_cast<const uci::type::CommActionExtendedType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commActionType:
      return asb_uci::type::CommActionType::serialize(dynamic_cast<const uci::type::CommActionType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commandableCapabilityDeclarationType:
      return asb_uci::type::CommandableCapabilityDeclarationType::serialize(dynamic_cast<const uci::type::CommandableCapabilityDeclarationType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commandBaseType:
      return asb_uci::type::CommandBaseType::serialize(dynamic_cast<const uci::type::CommandBaseType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commandID_Type:
      return asb_uci::type::CommandID_Type::serialize(dynamic_cast<const uci::type::CommandID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commandStatusBaseType:
      return asb_uci::type::CommandStatusBaseType::serialize(dynamic_cast<const uci::type::CommandStatusBaseType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commAntennaModeType:
      return asb_uci::type::CommAntennaModeType::serialize(dynamic_cast<const uci::type::CommAntennaModeType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commAssetEstimationRequestMDT:
      return asb_uci::type::CommAssetEstimationRequestMDT::serialize(dynamic_cast<const uci::type::CommAssetEstimationRequestMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commAssetEstimationRequestMT:
      return asb_uci::type::CommAssetEstimationRequestMT::serialize(dynamic_cast<const uci::type::CommAssetEstimationRequestMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commAssetEstimationRequestStatusMDT:
      return asb_uci::type::CommAssetEstimationRequestStatusMDT::serialize(dynamic_cast<const uci::type::CommAssetEstimationRequestStatusMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commAssetEstimationRequestStatusMT:
      return asb_uci::type::CommAssetEstimationRequestStatusMT::serialize(dynamic_cast<const uci::type::CommAssetEstimationRequestStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commAssetID_Type:
      return asb_uci::type::CommAssetID_Type::serialize(dynamic_cast<const uci::type::CommAssetID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commAssetMT:
      return asb_uci::type::CommAssetMT::serialize(dynamic_cast<const uci::type::CommAssetMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commAssetOrbitID_Type:
      return asb_uci::type::CommAssetOrbitID_Type::serialize(dynamic_cast<const uci::type::CommAssetOrbitID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commAssetOrbitMT:
      return asb_uci::type::CommAssetOrbitMT::serialize(dynamic_cast<const uci::type::CommAssetOrbitMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commAssetPositionReportMT:
      return asb_uci::type::CommAssetPositionReportMT::serialize(dynamic_cast<const uci::type::CommAssetPositionReportMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commBLOS_CommWaveformActivityCommandType:
      return asb_uci::type::CommBLOS_CommWaveformActivityCommandType::serialize(dynamic_cast<const uci::type::CommBLOS_CommWaveformActivityCommandType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commBLOS_CommWaveformActivityType:
      return asb_uci::type::CommBLOS_CommWaveformActivityType::serialize(dynamic_cast<const uci::type::CommBLOS_CommWaveformActivityType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commBLOS_CommWaveformCapabilityCommandType:
      return asb_uci::type::CommBLOS_CommWaveformCapabilityCommandType::serialize(dynamic_cast<const uci::type::CommBLOS_CommWaveformCapabilityCommandType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commCDL_CommWaveformActivityCommandType:
      return asb_uci::type::CommCDL_CommWaveformActivityCommandType::serialize(dynamic_cast<const uci::type::CommCDL_CommWaveformActivityCommandType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commCDL_CommWaveformActivityType:
      return asb_uci::type::CommCDL_CommWaveformActivityType::serialize(dynamic_cast<const uci::type::CommCDL_CommWaveformActivityType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commCDL_CommWaveformCapabilityCommandType:
      return asb_uci::type::CommCDL_CommWaveformCapabilityCommandType::serialize(dynamic_cast<const uci::type::CommCDL_CommWaveformCapabilityCommandType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commConfigurationID_Type:
      return asb_uci::type::CommConfigurationID_Type::serialize(dynamic_cast<const uci::type::CommConfigurationID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commCoverageDataType:
      return asb_uci::type::CommCoverageDataType::serialize(dynamic_cast<const uci::type::CommCoverageDataType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commCoverageUserDataType:
      return asb_uci::type::CommCoverageUserDataType::serialize(dynamic_cast<const uci::type::CommCoverageUserDataType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commDataType:
      return asb_uci::type::CommDataType::serialize(dynamic_cast<const uci::type::CommDataType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commEffectivityID_Type:
      return asb_uci::type::CommEffectivityID_Type::serialize(dynamic_cast<const uci::type::CommEffectivityID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commIFDL_CommWaveformActivityCommandType:
      return asb_uci::type::CommIFDL_CommWaveformActivityCommandType::serialize(dynamic_cast<const uci::type::CommIFDL_CommWaveformActivityCommandType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commIFDL_CommWaveformActivityType:
      return asb_uci::type::CommIFDL_CommWaveformActivityType::serialize(dynamic_cast<const uci::type::CommIFDL_CommWaveformActivityType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commIFDL_CommWaveformCapabilityCommandType:
      return asb_uci::type::CommIFDL_CommWaveformCapabilityCommandType::serialize(dynamic_cast<const uci::type::CommIFDL_CommWaveformCapabilityCommandType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commLink16CommWaveformActivityCommandType:
      return asb_uci::type::CommLink16CommWaveformActivityCommandType::serialize(dynamic_cast<const uci::type::CommLink16CommWaveformActivityCommandType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commLink16CommWaveformActivityType:
      return asb_uci::type::CommLink16CommWaveformActivityType::serialize(dynamic_cast<const uci::type::CommLink16CommWaveformActivityType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commLink16CommWaveformCapabilityCommandType:
      return asb_uci::type::CommLink16CommWaveformCapabilityCommandType::serialize(dynamic_cast<const uci::type::CommLink16CommWaveformCapabilityCommandType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commMADL_CommWaveformActivityCommandType:
      return asb_uci::type::CommMADL_CommWaveformActivityCommandType::serialize(dynamic_cast<const uci::type::CommMADL_CommWaveformActivityCommandType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commMADL_CommWaveformActivityType:
      return asb_uci::type::CommMADL_CommWaveformActivityType::serialize(dynamic_cast<const uci::type::CommMADL_CommWaveformActivityType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commMADL_CommWaveformCapabilityCommandType:
      return asb_uci::type::CommMADL_CommWaveformCapabilityCommandType::serialize(dynamic_cast<const uci::type::CommMADL_CommWaveformCapabilityCommandType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commOutageType:
      return asb_uci::type::CommOutageType::serialize(dynamic_cast<const uci::type::CommOutageType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commPointingCommandMDT:
      return asb_uci::type::CommPointingCommandMDT::serialize(dynamic_cast<const uci::type::CommPointingCommandMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::commPointingCommandMT:
      return asb_uci::type::CommPointingCommandMT::serialize(dynamic_cast<const uci::type::CommPointingCommandMT&>(accessor), propTree, nodeName, createNode, true, false);
    default:
      return boost::none;
  }
}

} // namespace util

} // namespace asb_uci

