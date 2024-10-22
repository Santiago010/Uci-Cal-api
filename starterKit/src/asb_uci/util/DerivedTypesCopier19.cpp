/** @file DerivedTypesCopier19.cpp
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

#include "asb_uci/util/DerivedTypesCopier19.h"

#include "asb_uci/type/SubsystemMaintenanceTestResultPET.h"
#include "asb_uci/type/SubsystemMaintenanceTestResultType.h"
#include "asb_uci/type/SubsystemMaintenanceTestType.h"
#include "asb_uci/type/SubsystemSettingsCommandMDT.h"
#include "asb_uci/type/SubsystemSettingsCommandMT.h"
#include "asb_uci/type/SubsystemSettingsCommandStatusMDT.h"
#include "asb_uci/type/SubsystemSettingsCommandStatusMT.h"
#include "asb_uci/type/SubsystemStateCommandMDT.h"
#include "asb_uci/type/SubsystemStateCommandMT.h"
#include "asb_uci/type/SubsystemStateCommandStatusMDT.h"
#include "asb_uci/type/SubsystemStateCommandStatusMT.h"
#include "asb_uci/type/SubsystemStatusDataRequestMDT.h"
#include "asb_uci/type/SubsystemStatusDataRequestMT.h"
#include "asb_uci/type/SubsystemStatusDataRequestStatusMDT.h"
#include "asb_uci/type/SubsystemStatusDataRequestStatusMT.h"
#include "asb_uci/type/SubsystemStatusDetailedDataRequestMDT.h"
#include "asb_uci/type/SubsystemStatusDetailedDataRequestMT.h"
#include "asb_uci/type/SubsystemStatusDetailedDataRequestStatusMDT.h"
#include "asb_uci/type/SubsystemStatusDetailedDataRequestStatusMT.h"
#include "asb_uci/type/SubsystemStatusDetailedMT.h"
#include "asb_uci/type/SubsystemStatusMT.h"
#include "asb_uci/type/SubsystemStreamMT.h"
#include "asb_uci/type/SupportCapabilityCommandBaseType.h"
#include "asb_uci/type/SupportCapabilityCommandStatusBaseType.h"
#include "asb_uci/type/SupportCapabilityID_Type.h"
#include "asb_uci/type/SupportCapabilityStatusBaseType.h"
#include "asb_uci/type/SupportedResolutionID_Type.h"
#include "asb_uci/type/SurvivabilityRiskLevelID_Type.h"
#include "asb_uci/type/SurvivabilityRiskLevelMT.h"
#include "asb_uci/type/SystemDeploymentActivityMT.h"
#include "asb_uci/type/SystemDeploymentActivityType.h"
#include "asb_uci/type/SystemDeploymentCapabilityMDT.h"
#include "asb_uci/type/SystemDeploymentCapabilityMT.h"
#include "asb_uci/type/SystemDeploymentCapabilityStatusMDT.h"
#include "asb_uci/type/SystemDeploymentCapabilityStatusMT.h"
#include "asb_uci/type/SystemDeploymentCapabilityStatusType.h"
#include "asb_uci/type/SystemDeploymentCapabilityType.h"
#include "asb_uci/type/SystemDeploymentTaskBaseType.h"
#include "asb_uci/type/SystemDeploymentTaskType.h"
#include "asb_uci/type/SystemEphemerisRequestParametersType.h"
#include "asb_uci/type/SystemEstimationRequestMDT.h"
#include "asb_uci/type/SystemEstimationRequestMT.h"
#include "asb_uci/type/SystemEstimationRequestStatusMDT.h"
#include "asb_uci/type/SystemEstimationRequestStatusMT.h"
#include "asb_uci/type/SystemID_Type.h"
#include "asb_uci/type/SystemIdentityType.h"
#include "asb_uci/type/SystemManagementRequestMDT.h"
#include "asb_uci/type/SystemManagementRequestMT.h"
#include "asb_uci/type/SystemManagementRequestStatusMDT.h"
#include "asb_uci/type/SystemManagementRequestStatusMT.h"
#include "asb_uci/type/SystemMetadataMT.h"
#include "asb_uci/type/SystemMetadataPET.h"
#include "asb_uci/type/SystemNotificationMDT.h"
#include "asb_uci/type/SystemNotificationMT.h"
#include "asb_uci/type/SystemOrbitReportMT.h"
#include "asb_uci/type/SystemOrbitalElementSetID_Type.h"
#include "asb_uci/type/SystemOrbitalElementSetMDT.h"
#include "asb_uci/type/SystemOrbitalElementSetMT.h"
#include "asb_uci/type/SystemOrbitalElementSetRequestMDT.h"
#include "asb_uci/type/SystemOrbitalElementSetRequestMT.h"
#include "asb_uci/type/SystemOrbitalElementSetRequestStatusMDT.h"
#include "asb_uci/type/SystemOrbitalElementSetRequestStatusMT.h"
#include "asb_uci/type/SystemOrbitalElementSetType.h"
#include "asb_uci/type/SystemOrbitalEphemerisID_Type.h"
#include "asb_uci/type/SystemOrbitalEphemerisMDT.h"
#include "asb_uci/type/SystemOrbitalEphemerisMT.h"
#include "asb_uci/type/SystemOrbitalEphemerisRequestMDT.h"
#include "asb_uci/type/SystemOrbitalEphemerisRequestMT.h"
#include "asb_uci/type/SystemOrbitalEphemerisRequestStatusMDT.h"
#include "asb_uci/type/SystemOrbitalEphemerisRequestStatusMT.h"
#include "asb_uci/type/SystemOrbitalEphemerisType.h"
#include "asb_uci/type/SystemOrbitalPositionReportMT.h"
#include "asb_uci/type/SystemOrbitalVCM_ID_Type.h"
#include "asb_uci/type/SystemOrbitalVCM_MDT.h"
#include "asb_uci/type/SystemOrbitalVCM_MT.h"
#include "asb_uci/type/SystemOrbitalVCM_RequestMDT.h"
#include "asb_uci/type/SystemOrbitalVCM_RequestMT.h"
#include "asb_uci/type/SystemOrbitalVCM_RequestStatusMDT.h"
#include "asb_uci/type/SystemOrbitalVCM_RequestStatusMT.h"
#include "asb_uci/type/SystemOrbitalVCM_Type.h"
#include "asb_uci/type/SystemReadinessID_Type.h"
#include "asb_uci/type/SystemReadinessMDT.h"
#include "asb_uci/type/SystemReadinessMT.h"
#include "asb_uci/type/SystemStatusMT.h"
#include "asb_uci/type/SystemTimeAtReferenceMT.h"
#include "asb_uci/type/SystemsNeededRequestMDT.h"
#include "asb_uci/type/SystemsNeededRequestMT.h"
#include "asb_uci/type/SystemsNeededRequestStatusMDT.h"
#include "asb_uci/type/SystemsNeededRequestStatusMT.h"
#include "asb_uci/type/TacticalOrderActivityMT.h"
#include "asb_uci/type/TacticalOrderActivityType.h"
#include "asb_uci/type/TacticalOrderCapabilityMDT.h"
#include "asb_uci/type/TacticalOrderCapabilityMT.h"
#include "asb_uci/type/TacticalOrderCapabilityStatusMDT.h"
#include "asb_uci/type/TacticalOrderCapabilityStatusMT.h"
#include "asb_uci/type/TacticalOrderCapabilityType.h"
#include "asb_uci/type/TacticalOrderTaskBaseType.h"
#include "asb_uci/type/TacticalOrderTaskType.h"
#include "asb_uci/type/TagAssociationID_Type.h"
#include "asb_uci/type/TagAssociationMDT.h"
#include "uci/base/Accessor.h"
#include "uci/base/accessorType.h"
#include "uci/type/SubsystemMaintenanceTestResultPET.h"
#include "uci/type/SubsystemMaintenanceTestResultType.h"
#include "uci/type/SubsystemMaintenanceTestType.h"
#include "uci/type/SubsystemSettingsCommandMDT.h"
#include "uci/type/SubsystemSettingsCommandMT.h"
#include "uci/type/SubsystemSettingsCommandStatusMDT.h"
#include "uci/type/SubsystemSettingsCommandStatusMT.h"
#include "uci/type/SubsystemStateCommandMDT.h"
#include "uci/type/SubsystemStateCommandMT.h"
#include "uci/type/SubsystemStateCommandStatusMDT.h"
#include "uci/type/SubsystemStateCommandStatusMT.h"
#include "uci/type/SubsystemStatusDataRequestMDT.h"
#include "uci/type/SubsystemStatusDataRequestMT.h"
#include "uci/type/SubsystemStatusDataRequestStatusMDT.h"
#include "uci/type/SubsystemStatusDataRequestStatusMT.h"
#include "uci/type/SubsystemStatusDetailedDataRequestMDT.h"
#include "uci/type/SubsystemStatusDetailedDataRequestMT.h"
#include "uci/type/SubsystemStatusDetailedDataRequestStatusMDT.h"
#include "uci/type/SubsystemStatusDetailedDataRequestStatusMT.h"
#include "uci/type/SubsystemStatusDetailedMT.h"
#include "uci/type/SubsystemStatusMT.h"
#include "uci/type/SubsystemStreamMT.h"
#include "uci/type/SupportCapabilityCommandBaseType.h"
#include "uci/type/SupportCapabilityCommandStatusBaseType.h"
#include "uci/type/SupportCapabilityID_Type.h"
#include "uci/type/SupportCapabilityStatusBaseType.h"
#include "uci/type/SupportedResolutionID_Type.h"
#include "uci/type/SurvivabilityRiskLevelID_Type.h"
#include "uci/type/SurvivabilityRiskLevelMT.h"
#include "uci/type/SystemDeploymentActivityMT.h"
#include "uci/type/SystemDeploymentActivityType.h"
#include "uci/type/SystemDeploymentCapabilityMDT.h"
#include "uci/type/SystemDeploymentCapabilityMT.h"
#include "uci/type/SystemDeploymentCapabilityStatusMDT.h"
#include "uci/type/SystemDeploymentCapabilityStatusMT.h"
#include "uci/type/SystemDeploymentCapabilityStatusType.h"
#include "uci/type/SystemDeploymentCapabilityType.h"
#include "uci/type/SystemDeploymentTaskBaseType.h"
#include "uci/type/SystemDeploymentTaskType.h"
#include "uci/type/SystemEphemerisRequestParametersType.h"
#include "uci/type/SystemEstimationRequestMDT.h"
#include "uci/type/SystemEstimationRequestMT.h"
#include "uci/type/SystemEstimationRequestStatusMDT.h"
#include "uci/type/SystemEstimationRequestStatusMT.h"
#include "uci/type/SystemID_Type.h"
#include "uci/type/SystemIdentityType.h"
#include "uci/type/SystemManagementRequestMDT.h"
#include "uci/type/SystemManagementRequestMT.h"
#include "uci/type/SystemManagementRequestStatusMDT.h"
#include "uci/type/SystemManagementRequestStatusMT.h"
#include "uci/type/SystemMetadataMT.h"
#include "uci/type/SystemMetadataPET.h"
#include "uci/type/SystemNotificationMDT.h"
#include "uci/type/SystemNotificationMT.h"
#include "uci/type/SystemOrbitReportMT.h"
#include "uci/type/SystemOrbitalElementSetID_Type.h"
#include "uci/type/SystemOrbitalElementSetMDT.h"
#include "uci/type/SystemOrbitalElementSetMT.h"
#include "uci/type/SystemOrbitalElementSetRequestMDT.h"
#include "uci/type/SystemOrbitalElementSetRequestMT.h"
#include "uci/type/SystemOrbitalElementSetRequestStatusMDT.h"
#include "uci/type/SystemOrbitalElementSetRequestStatusMT.h"
#include "uci/type/SystemOrbitalElementSetType.h"
#include "uci/type/SystemOrbitalEphemerisID_Type.h"
#include "uci/type/SystemOrbitalEphemerisMDT.h"
#include "uci/type/SystemOrbitalEphemerisMT.h"
#include "uci/type/SystemOrbitalEphemerisRequestMDT.h"
#include "uci/type/SystemOrbitalEphemerisRequestMT.h"
#include "uci/type/SystemOrbitalEphemerisRequestStatusMDT.h"
#include "uci/type/SystemOrbitalEphemerisRequestStatusMT.h"
#include "uci/type/SystemOrbitalEphemerisType.h"
#include "uci/type/SystemOrbitalPositionReportMT.h"
#include "uci/type/SystemOrbitalVCM_ID_Type.h"
#include "uci/type/SystemOrbitalVCM_MDT.h"
#include "uci/type/SystemOrbitalVCM_MT.h"
#include "uci/type/SystemOrbitalVCM_RequestMDT.h"
#include "uci/type/SystemOrbitalVCM_RequestMT.h"
#include "uci/type/SystemOrbitalVCM_RequestStatusMDT.h"
#include "uci/type/SystemOrbitalVCM_RequestStatusMT.h"
#include "uci/type/SystemOrbitalVCM_Type.h"
#include "uci/type/SystemReadinessID_Type.h"
#include "uci/type/SystemReadinessMDT.h"
#include "uci/type/SystemReadinessMT.h"
#include "uci/type/SystemStatusMT.h"
#include "uci/type/SystemTimeAtReferenceMT.h"
#include "uci/type/SystemsNeededRequestMDT.h"
#include "uci/type/SystemsNeededRequestMT.h"
#include "uci/type/SystemsNeededRequestStatusMDT.h"
#include "uci/type/SystemsNeededRequestStatusMT.h"
#include "uci/type/TacticalOrderActivityMT.h"
#include "uci/type/TacticalOrderActivityType.h"
#include "uci/type/TacticalOrderCapabilityMDT.h"
#include "uci/type/TacticalOrderCapabilityMT.h"
#include "uci/type/TacticalOrderCapabilityStatusMDT.h"
#include "uci/type/TacticalOrderCapabilityStatusMT.h"
#include "uci/type/TacticalOrderCapabilityType.h"
#include "uci/type/TacticalOrderTaskBaseType.h"
#include "uci/type/TacticalOrderTaskType.h"
#include "uci/type/TagAssociationID_Type.h"
#include "uci/type/TagAssociationMDT.h"

/**  */
namespace asb_uci {

/**  */
namespace util {

bool DerivedTypesCopier19::copy(const uci::base::Accessor& source, uci::base::Accessor& destination) {
  switch (source.getAccessorType()) {
    case uci::type::accessorType::subsystemMaintenanceTestResultPET:
      dynamic_cast<asb_uci::type::SubsystemMaintenanceTestResultPET&>(destination).copyImpl(dynamic_cast<const uci::type::SubsystemMaintenanceTestResultPET&>(source), false);
      return true;
      break;
    case uci::type::accessorType::subsystemMaintenanceTestResultType:
      dynamic_cast<asb_uci::type::SubsystemMaintenanceTestResultType&>(destination).copyImpl(dynamic_cast<const uci::type::SubsystemMaintenanceTestResultType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::subsystemMaintenanceTestType:
      dynamic_cast<asb_uci::type::SubsystemMaintenanceTestType&>(destination).copyImpl(dynamic_cast<const uci::type::SubsystemMaintenanceTestType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::subsystemSettingsCommandMDT:
      dynamic_cast<asb_uci::type::SubsystemSettingsCommandMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SubsystemSettingsCommandMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::subsystemSettingsCommandMT:
      dynamic_cast<asb_uci::type::SubsystemSettingsCommandMT&>(destination).copyImpl(dynamic_cast<const uci::type::SubsystemSettingsCommandMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::subsystemSettingsCommandStatusMDT:
      dynamic_cast<asb_uci::type::SubsystemSettingsCommandStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SubsystemSettingsCommandStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::subsystemSettingsCommandStatusMT:
      dynamic_cast<asb_uci::type::SubsystemSettingsCommandStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::SubsystemSettingsCommandStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::subsystemStateCommandMDT:
      dynamic_cast<asb_uci::type::SubsystemStateCommandMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SubsystemStateCommandMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::subsystemStateCommandMT:
      dynamic_cast<asb_uci::type::SubsystemStateCommandMT&>(destination).copyImpl(dynamic_cast<const uci::type::SubsystemStateCommandMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::subsystemStateCommandStatusMDT:
      dynamic_cast<asb_uci::type::SubsystemStateCommandStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SubsystemStateCommandStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::subsystemStateCommandStatusMT:
      dynamic_cast<asb_uci::type::SubsystemStateCommandStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::SubsystemStateCommandStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::subsystemStatusDataRequestMDT:
      dynamic_cast<asb_uci::type::SubsystemStatusDataRequestMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SubsystemStatusDataRequestMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::subsystemStatusDataRequestMT:
      dynamic_cast<asb_uci::type::SubsystemStatusDataRequestMT&>(destination).copyImpl(dynamic_cast<const uci::type::SubsystemStatusDataRequestMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::subsystemStatusDataRequestStatusMDT:
      dynamic_cast<asb_uci::type::SubsystemStatusDataRequestStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SubsystemStatusDataRequestStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::subsystemStatusDataRequestStatusMT:
      dynamic_cast<asb_uci::type::SubsystemStatusDataRequestStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::SubsystemStatusDataRequestStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::subsystemStatusDetailedDataRequestMDT:
      dynamic_cast<asb_uci::type::SubsystemStatusDetailedDataRequestMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SubsystemStatusDetailedDataRequestMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::subsystemStatusDetailedDataRequestMT:
      dynamic_cast<asb_uci::type::SubsystemStatusDetailedDataRequestMT&>(destination).copyImpl(dynamic_cast<const uci::type::SubsystemStatusDetailedDataRequestMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::subsystemStatusDetailedDataRequestStatusMDT:
      dynamic_cast<asb_uci::type::SubsystemStatusDetailedDataRequestStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SubsystemStatusDetailedDataRequestStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::subsystemStatusDetailedDataRequestStatusMT:
      dynamic_cast<asb_uci::type::SubsystemStatusDetailedDataRequestStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::SubsystemStatusDetailedDataRequestStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::subsystemStatusDetailedMT:
      dynamic_cast<asb_uci::type::SubsystemStatusDetailedMT&>(destination).copyImpl(dynamic_cast<const uci::type::SubsystemStatusDetailedMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::subsystemStatusMT:
      dynamic_cast<asb_uci::type::SubsystemStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::SubsystemStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::subsystemStreamMT:
      dynamic_cast<asb_uci::type::SubsystemStreamMT&>(destination).copyImpl(dynamic_cast<const uci::type::SubsystemStreamMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::supportCapabilityCommandBaseType:
      dynamic_cast<asb_uci::type::SupportCapabilityCommandBaseType&>(destination).copyImpl(dynamic_cast<const uci::type::SupportCapabilityCommandBaseType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::supportCapabilityCommandStatusBaseType:
      dynamic_cast<asb_uci::type::SupportCapabilityCommandStatusBaseType&>(destination).copyImpl(dynamic_cast<const uci::type::SupportCapabilityCommandStatusBaseType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::supportCapabilityID_Type:
      dynamic_cast<asb_uci::type::SupportCapabilityID_Type&>(destination).copyImpl(dynamic_cast<const uci::type::SupportCapabilityID_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::supportCapabilityStatusBaseType:
      dynamic_cast<asb_uci::type::SupportCapabilityStatusBaseType&>(destination).copyImpl(dynamic_cast<const uci::type::SupportCapabilityStatusBaseType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::supportedResolutionID_Type:
      dynamic_cast<asb_uci::type::SupportedResolutionID_Type&>(destination).copyImpl(dynamic_cast<const uci::type::SupportedResolutionID_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::survivabilityRiskLevelID_Type:
      dynamic_cast<asb_uci::type::SurvivabilityRiskLevelID_Type&>(destination).copyImpl(dynamic_cast<const uci::type::SurvivabilityRiskLevelID_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::survivabilityRiskLevelMT:
      dynamic_cast<asb_uci::type::SurvivabilityRiskLevelMT&>(destination).copyImpl(dynamic_cast<const uci::type::SurvivabilityRiskLevelMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemDeploymentActivityMT:
      dynamic_cast<asb_uci::type::SystemDeploymentActivityMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemDeploymentActivityMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemDeploymentActivityType:
      dynamic_cast<asb_uci::type::SystemDeploymentActivityType&>(destination).copyImpl(dynamic_cast<const uci::type::SystemDeploymentActivityType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemDeploymentCapabilityMDT:
      dynamic_cast<asb_uci::type::SystemDeploymentCapabilityMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemDeploymentCapabilityMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemDeploymentCapabilityMT:
      dynamic_cast<asb_uci::type::SystemDeploymentCapabilityMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemDeploymentCapabilityMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemDeploymentCapabilityStatusMDT:
      dynamic_cast<asb_uci::type::SystemDeploymentCapabilityStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemDeploymentCapabilityStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemDeploymentCapabilityStatusMT:
      dynamic_cast<asb_uci::type::SystemDeploymentCapabilityStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemDeploymentCapabilityStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemDeploymentCapabilityStatusType:
      dynamic_cast<asb_uci::type::SystemDeploymentCapabilityStatusType&>(destination).copyImpl(dynamic_cast<const uci::type::SystemDeploymentCapabilityStatusType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemDeploymentCapabilityType:
      dynamic_cast<asb_uci::type::SystemDeploymentCapabilityType&>(destination).copyImpl(dynamic_cast<const uci::type::SystemDeploymentCapabilityType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemDeploymentTaskBaseType:
      dynamic_cast<asb_uci::type::SystemDeploymentTaskBaseType&>(destination).copyImpl(dynamic_cast<const uci::type::SystemDeploymentTaskBaseType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemDeploymentTaskType:
      dynamic_cast<asb_uci::type::SystemDeploymentTaskType&>(destination).copyImpl(dynamic_cast<const uci::type::SystemDeploymentTaskType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemEphemerisRequestParametersType:
      dynamic_cast<asb_uci::type::SystemEphemerisRequestParametersType&>(destination).copyImpl(dynamic_cast<const uci::type::SystemEphemerisRequestParametersType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemEstimationRequestMDT:
      dynamic_cast<asb_uci::type::SystemEstimationRequestMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemEstimationRequestMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemEstimationRequestMT:
      dynamic_cast<asb_uci::type::SystemEstimationRequestMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemEstimationRequestMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemEstimationRequestStatusMDT:
      dynamic_cast<asb_uci::type::SystemEstimationRequestStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemEstimationRequestStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemEstimationRequestStatusMT:
      dynamic_cast<asb_uci::type::SystemEstimationRequestStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemEstimationRequestStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemID_Type:
      dynamic_cast<asb_uci::type::SystemID_Type&>(destination).copyImpl(dynamic_cast<const uci::type::SystemID_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemIdentityType:
      dynamic_cast<asb_uci::type::SystemIdentityType&>(destination).copyImpl(dynamic_cast<const uci::type::SystemIdentityType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemManagementRequestMDT:
      dynamic_cast<asb_uci::type::SystemManagementRequestMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemManagementRequestMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemManagementRequestMT:
      dynamic_cast<asb_uci::type::SystemManagementRequestMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemManagementRequestMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemManagementRequestStatusMDT:
      dynamic_cast<asb_uci::type::SystemManagementRequestStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemManagementRequestStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemManagementRequestStatusMT:
      dynamic_cast<asb_uci::type::SystemManagementRequestStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemManagementRequestStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemMetadataMT:
      dynamic_cast<asb_uci::type::SystemMetadataMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemMetadataMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemMetadataPET:
      dynamic_cast<asb_uci::type::SystemMetadataPET&>(destination).copyImpl(dynamic_cast<const uci::type::SystemMetadataPET&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemNotificationMDT:
      dynamic_cast<asb_uci::type::SystemNotificationMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemNotificationMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemNotificationMT:
      dynamic_cast<asb_uci::type::SystemNotificationMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemNotificationMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalElementSetID_Type:
      dynamic_cast<asb_uci::type::SystemOrbitalElementSetID_Type&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalElementSetID_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalElementSetMDT:
      dynamic_cast<asb_uci::type::SystemOrbitalElementSetMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalElementSetMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalElementSetMT:
      dynamic_cast<asb_uci::type::SystemOrbitalElementSetMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalElementSetMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalElementSetRequestMDT:
      dynamic_cast<asb_uci::type::SystemOrbitalElementSetRequestMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalElementSetRequestMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalElementSetRequestMT:
      dynamic_cast<asb_uci::type::SystemOrbitalElementSetRequestMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalElementSetRequestMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalElementSetRequestStatusMDT:
      dynamic_cast<asb_uci::type::SystemOrbitalElementSetRequestStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalElementSetRequestStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalElementSetRequestStatusMT:
      dynamic_cast<asb_uci::type::SystemOrbitalElementSetRequestStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalElementSetRequestStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalElementSetType:
      dynamic_cast<asb_uci::type::SystemOrbitalElementSetType&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalElementSetType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalEphemerisID_Type:
      dynamic_cast<asb_uci::type::SystemOrbitalEphemerisID_Type&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalEphemerisID_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalEphemerisMDT:
      dynamic_cast<asb_uci::type::SystemOrbitalEphemerisMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalEphemerisMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalEphemerisMT:
      dynamic_cast<asb_uci::type::SystemOrbitalEphemerisMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalEphemerisMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalEphemerisRequestMDT:
      dynamic_cast<asb_uci::type::SystemOrbitalEphemerisRequestMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalEphemerisRequestMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalEphemerisRequestMT:
      dynamic_cast<asb_uci::type::SystemOrbitalEphemerisRequestMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalEphemerisRequestMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalEphemerisRequestStatusMDT:
      dynamic_cast<asb_uci::type::SystemOrbitalEphemerisRequestStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalEphemerisRequestStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalEphemerisRequestStatusMT:
      dynamic_cast<asb_uci::type::SystemOrbitalEphemerisRequestStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalEphemerisRequestStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalEphemerisType:
      dynamic_cast<asb_uci::type::SystemOrbitalEphemerisType&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalEphemerisType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalPositionReportMT:
      dynamic_cast<asb_uci::type::SystemOrbitalPositionReportMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalPositionReportMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalVCM_ID_Type:
      dynamic_cast<asb_uci::type::SystemOrbitalVCM_ID_Type&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalVCM_ID_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalVCM_MDT:
      dynamic_cast<asb_uci::type::SystemOrbitalVCM_MDT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalVCM_MDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalVCM_MT:
      dynamic_cast<asb_uci::type::SystemOrbitalVCM_MT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalVCM_MT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalVCM_RequestMDT:
      dynamic_cast<asb_uci::type::SystemOrbitalVCM_RequestMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalVCM_RequestMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalVCM_RequestMT:
      dynamic_cast<asb_uci::type::SystemOrbitalVCM_RequestMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalVCM_RequestMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalVCM_RequestStatusMDT:
      dynamic_cast<asb_uci::type::SystemOrbitalVCM_RequestStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalVCM_RequestStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalVCM_RequestStatusMT:
      dynamic_cast<asb_uci::type::SystemOrbitalVCM_RequestStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalVCM_RequestStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitalVCM_Type:
      dynamic_cast<asb_uci::type::SystemOrbitalVCM_Type&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitalVCM_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemOrbitReportMT:
      dynamic_cast<asb_uci::type::SystemOrbitReportMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemOrbitReportMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemReadinessID_Type:
      dynamic_cast<asb_uci::type::SystemReadinessID_Type&>(destination).copyImpl(dynamic_cast<const uci::type::SystemReadinessID_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemReadinessMDT:
      dynamic_cast<asb_uci::type::SystemReadinessMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemReadinessMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemReadinessMT:
      dynamic_cast<asb_uci::type::SystemReadinessMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemReadinessMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemsNeededRequestMDT:
      dynamic_cast<asb_uci::type::SystemsNeededRequestMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemsNeededRequestMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemsNeededRequestMT:
      dynamic_cast<asb_uci::type::SystemsNeededRequestMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemsNeededRequestMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemsNeededRequestStatusMDT:
      dynamic_cast<asb_uci::type::SystemsNeededRequestStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemsNeededRequestStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemsNeededRequestStatusMT:
      dynamic_cast<asb_uci::type::SystemsNeededRequestStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemsNeededRequestStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemStatusMT:
      dynamic_cast<asb_uci::type::SystemStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::systemTimeAtReferenceMT:
      dynamic_cast<asb_uci::type::SystemTimeAtReferenceMT&>(destination).copyImpl(dynamic_cast<const uci::type::SystemTimeAtReferenceMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::tacticalOrderActivityMT:
      dynamic_cast<asb_uci::type::TacticalOrderActivityMT&>(destination).copyImpl(dynamic_cast<const uci::type::TacticalOrderActivityMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::tacticalOrderActivityType:
      dynamic_cast<asb_uci::type::TacticalOrderActivityType&>(destination).copyImpl(dynamic_cast<const uci::type::TacticalOrderActivityType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::tacticalOrderCapabilityMDT:
      dynamic_cast<asb_uci::type::TacticalOrderCapabilityMDT&>(destination).copyImpl(dynamic_cast<const uci::type::TacticalOrderCapabilityMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::tacticalOrderCapabilityMT:
      dynamic_cast<asb_uci::type::TacticalOrderCapabilityMT&>(destination).copyImpl(dynamic_cast<const uci::type::TacticalOrderCapabilityMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::tacticalOrderCapabilityStatusMDT:
      dynamic_cast<asb_uci::type::TacticalOrderCapabilityStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::TacticalOrderCapabilityStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::tacticalOrderCapabilityStatusMT:
      dynamic_cast<asb_uci::type::TacticalOrderCapabilityStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::TacticalOrderCapabilityStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::tacticalOrderCapabilityType:
      dynamic_cast<asb_uci::type::TacticalOrderCapabilityType&>(destination).copyImpl(dynamic_cast<const uci::type::TacticalOrderCapabilityType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::tacticalOrderTaskBaseType:
      dynamic_cast<asb_uci::type::TacticalOrderTaskBaseType&>(destination).copyImpl(dynamic_cast<const uci::type::TacticalOrderTaskBaseType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::tacticalOrderTaskType:
      dynamic_cast<asb_uci::type::TacticalOrderTaskType&>(destination).copyImpl(dynamic_cast<const uci::type::TacticalOrderTaskType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::tagAssociationID_Type:
      dynamic_cast<asb_uci::type::TagAssociationID_Type&>(destination).copyImpl(dynamic_cast<const uci::type::TagAssociationID_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::tagAssociationMDT:
      dynamic_cast<asb_uci::type::TagAssociationMDT&>(destination).copyImpl(dynamic_cast<const uci::type::TagAssociationMDT&>(source), false);
      return true;
      break;
    default:
      return false;
  }
}

} // namespace util

} // namespace asb_uci

