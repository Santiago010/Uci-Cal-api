/** @file DerivedTypesCopier7.cpp
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

#include "asb_uci/util/DerivedTypesCopier7.h"

#include "asb_uci/type/EffectActivityType.h"
#include "asb_uci/type/EffectAllocationType.h"
#include "asb_uci/type/EffectCancelCommandMDT.h"
#include "asb_uci/type/EffectCancelCommandMT.h"
#include "asb_uci/type/EffectCancelCommandStatusMDT.h"
#include "asb_uci/type/EffectCancelCommandStatusMT.h"
#include "asb_uci/type/EffectCapabilityCommandType.h"
#include "asb_uci/type/EffectCapabilityMDT.h"
#include "asb_uci/type/EffectCapabilityMT.h"
#include "asb_uci/type/EffectCapabilityStatusMDT.h"
#include "asb_uci/type/EffectCapabilityStatusMT.h"
#include "asb_uci/type/EffectCapabilityType.h"
#include "asb_uci/type/EffectCommandMT.h"
#include "asb_uci/type/EffectCommandStatusMDT.h"
#include "asb_uci/type/EffectCommandStatusMT.h"
#include "asb_uci/type/EffectExecutionApprovalStatusMDT.h"
#include "asb_uci/type/EffectExecutionApprovalStatusMT.h"
#include "asb_uci/type/EffectID_Type.h"
#include "asb_uci/type/EffectMT.h"
#include "asb_uci/type/EffectPlanApprovalStatusMT.h"
#include "asb_uci/type/EffectPlanCommandID_Type.h"
#include "asb_uci/type/EffectPlanCommandMT.h"
#include "asb_uci/type/EffectPlanCommandStatusMT.h"
#include "asb_uci/type/EffectPlanExecutionStatusMT.h"
#include "asb_uci/type/EffectPlanID_Type.h"
#include "asb_uci/type/EffectPlanInputsType.h"
#include "asb_uci/type/EffectPlanMT.h"
#include "asb_uci/type/EffectPlanProcessDescriptionType.h"
#include "asb_uci/type/EffectPlanStatusMT.h"
#include "asb_uci/type/EffectPlanValidationCommandMDT.h"
#include "asb_uci/type/EffectPlanValidationCommandMT.h"
#include "asb_uci/type/EffectPlanValidationCommandStatusMDT.h"
#include "asb_uci/type/EffectPlanValidationCommandStatusMT.h"
#include "asb_uci/type/EffectPlanValidationID_Type.h"
#include "asb_uci/type/EffectPlanValidationInputsType.h"
#include "asb_uci/type/EffectPlanValidationMT.h"
#include "asb_uci/type/EffectPlanningResultType.h"
#include "asb_uci/type/EffectPlanningStatusMDT.h"
#include "asb_uci/type/EffectPlanningStatusMT.h"
#include "asb_uci/type/EffectStatusMDT.h"
#include "asb_uci/type/EffectStatusMT.h"
#include "asb_uci/type/ElevationRequestMDT.h"
#include "asb_uci/type/ElevationRequestMT.h"
#include "asb_uci/type/ElevationRequestStatusMDT.h"
#include "asb_uci/type/ElevationRequestStatusMT.h"
#include "asb_uci/type/ElevationVisibilityRequestMDT.h"
#include "asb_uci/type/ElevationVisibilityRequestMT.h"
#include "asb_uci/type/ElevationVisibilityRequestStatusMDT.h"
#include "asb_uci/type/ElevationVisibilityRequestStatusMT.h"
#include "asb_uci/type/EllipseType.h"
#include "asb_uci/type/EmergencyReferenceOpPointType.h"
#include "asb_uci/type/EmitterFixedPositionType.h"
#include "asb_uci/type/EnduranceBaseType.h"
#include "asb_uci/type/EnduranceType.h"
#include "asb_uci/type/EntityConfirmationMT.h"
#include "asb_uci/type/EntityConfirmationRequestMDT.h"
#include "asb_uci/type/EntityConfirmationRequestMT.h"
#include "asb_uci/type/EntityConfirmationRequestStatusMDT.h"
#include "asb_uci/type/EntityConfirmationRequestStatusMT.h"
#include "asb_uci/type/EntityEphemerisRequestParametersType.h"
#include "asb_uci/type/EntityID_Type.h"
#include "asb_uci/type/EntityIdentityType.h"
#include "asb_uci/type/EntityLostMT.h"
#include "asb_uci/type/EntityMT.h"
#include "asb_uci/type/EntityManagementRequestMDT.h"
#include "asb_uci/type/EntityManagementRequestMT.h"
#include "asb_uci/type/EntityManagementRequestStatusMDT.h"
#include "asb_uci/type/EntityManagementRequestStatusMT.h"
#include "asb_uci/type/EntityMetadataMT.h"
#include "asb_uci/type/EntityMetadataPET.h"
#include "asb_uci/type/EntityNotificationMDT.h"
#include "asb_uci/type/EntityNotificationMT.h"
#include "asb_uci/type/EntityOrbitalCSO_ID_Type.h"
#include "asb_uci/type/EntityOrbitalCSO_MT.h"
#include "asb_uci/type/EntityOrbitalElementSetID_Type.h"
#include "asb_uci/type/EntityOrbitalElementSetMDT.h"
#include "asb_uci/type/EntityOrbitalElementSetMT.h"
#include "asb_uci/type/EntityOrbitalElementSetRequestMDT.h"
#include "asb_uci/type/EntityOrbitalElementSetRequestMT.h"
#include "asb_uci/type/EntityOrbitalElementSetRequestStatusMDT.h"
#include "asb_uci/type/EntityOrbitalElementSetRequestStatusMT.h"
#include "asb_uci/type/EntityOrbitalElementSetType.h"
#include "asb_uci/type/EntityOrbitalEphemerisID_Type.h"
#include "asb_uci/type/EntityOrbitalEphemerisMDT.h"
#include "asb_uci/type/EntityOrbitalEphemerisMT.h"
#include "asb_uci/type/EntityOrbitalEphemerisRequestMDT.h"
#include "asb_uci/type/EntityOrbitalEphemerisRequestMT.h"
#include "asb_uci/type/EntityOrbitalEphemerisRequestStatusMDT.h"
#include "asb_uci/type/EntityOrbitalEphemerisRequestStatusMT.h"
#include "asb_uci/type/EntityOrbitalEphemerisType.h"
#include "asb_uci/type/EntityOrbitalManeuverMT.h"
#include "asb_uci/type/EntityOrbitalVCM_ID_Type.h"
#include "asb_uci/type/EntityOrbitalVCM_MDT.h"
#include "asb_uci/type/EntityOrbitalVCM_MT.h"
#include "asb_uci/type/EntityOrbitalVCM_RequestMDT.h"
#include "asb_uci/type/EntityOrbitalVCM_RequestMT.h"
#include "asb_uci/type/EntityOrbitalVCM_RequestStatusMDT.h"
#include "asb_uci/type/EntityOrbitalVCM_RequestStatusMT.h"
#include "asb_uci/type/EntityOrbitalVCM_Type.h"
#include "asb_uci/type/EntityPropagationMT.h"
#include "uci/base/Accessor.h"
#include "uci/base/accessorType.h"
#include "uci/type/EffectActivityType.h"
#include "uci/type/EffectAllocationType.h"
#include "uci/type/EffectCancelCommandMDT.h"
#include "uci/type/EffectCancelCommandMT.h"
#include "uci/type/EffectCancelCommandStatusMDT.h"
#include "uci/type/EffectCancelCommandStatusMT.h"
#include "uci/type/EffectCapabilityCommandType.h"
#include "uci/type/EffectCapabilityMDT.h"
#include "uci/type/EffectCapabilityMT.h"
#include "uci/type/EffectCapabilityStatusMDT.h"
#include "uci/type/EffectCapabilityStatusMT.h"
#include "uci/type/EffectCapabilityType.h"
#include "uci/type/EffectCommandMT.h"
#include "uci/type/EffectCommandStatusMDT.h"
#include "uci/type/EffectCommandStatusMT.h"
#include "uci/type/EffectExecutionApprovalStatusMDT.h"
#include "uci/type/EffectExecutionApprovalStatusMT.h"
#include "uci/type/EffectID_Type.h"
#include "uci/type/EffectMT.h"
#include "uci/type/EffectPlanApprovalStatusMT.h"
#include "uci/type/EffectPlanCommandID_Type.h"
#include "uci/type/EffectPlanCommandMT.h"
#include "uci/type/EffectPlanCommandStatusMT.h"
#include "uci/type/EffectPlanExecutionStatusMT.h"
#include "uci/type/EffectPlanID_Type.h"
#include "uci/type/EffectPlanInputsType.h"
#include "uci/type/EffectPlanMT.h"
#include "uci/type/EffectPlanProcessDescriptionType.h"
#include "uci/type/EffectPlanStatusMT.h"
#include "uci/type/EffectPlanValidationCommandMDT.h"
#include "uci/type/EffectPlanValidationCommandMT.h"
#include "uci/type/EffectPlanValidationCommandStatusMDT.h"
#include "uci/type/EffectPlanValidationCommandStatusMT.h"
#include "uci/type/EffectPlanValidationID_Type.h"
#include "uci/type/EffectPlanValidationInputsType.h"
#include "uci/type/EffectPlanValidationMT.h"
#include "uci/type/EffectPlanningResultType.h"
#include "uci/type/EffectPlanningStatusMDT.h"
#include "uci/type/EffectPlanningStatusMT.h"
#include "uci/type/EffectStatusMDT.h"
#include "uci/type/EffectStatusMT.h"
#include "uci/type/ElevationRequestMDT.h"
#include "uci/type/ElevationRequestMT.h"
#include "uci/type/ElevationRequestStatusMDT.h"
#include "uci/type/ElevationRequestStatusMT.h"
#include "uci/type/ElevationVisibilityRequestMDT.h"
#include "uci/type/ElevationVisibilityRequestMT.h"
#include "uci/type/ElevationVisibilityRequestStatusMDT.h"
#include "uci/type/ElevationVisibilityRequestStatusMT.h"
#include "uci/type/EllipseType.h"
#include "uci/type/EmergencyReferenceOpPointType.h"
#include "uci/type/EmitterFixedPositionType.h"
#include "uci/type/EnduranceBaseType.h"
#include "uci/type/EnduranceType.h"
#include "uci/type/EntityConfirmationMT.h"
#include "uci/type/EntityConfirmationRequestMDT.h"
#include "uci/type/EntityConfirmationRequestMT.h"
#include "uci/type/EntityConfirmationRequestStatusMDT.h"
#include "uci/type/EntityConfirmationRequestStatusMT.h"
#include "uci/type/EntityEphemerisRequestParametersType.h"
#include "uci/type/EntityID_Type.h"
#include "uci/type/EntityIdentityType.h"
#include "uci/type/EntityLostMT.h"
#include "uci/type/EntityMT.h"
#include "uci/type/EntityManagementRequestMDT.h"
#include "uci/type/EntityManagementRequestMT.h"
#include "uci/type/EntityManagementRequestStatusMDT.h"
#include "uci/type/EntityManagementRequestStatusMT.h"
#include "uci/type/EntityMetadataMT.h"
#include "uci/type/EntityMetadataPET.h"
#include "uci/type/EntityNotificationMDT.h"
#include "uci/type/EntityNotificationMT.h"
#include "uci/type/EntityOrbitalCSO_ID_Type.h"
#include "uci/type/EntityOrbitalCSO_MT.h"
#include "uci/type/EntityOrbitalElementSetID_Type.h"
#include "uci/type/EntityOrbitalElementSetMDT.h"
#include "uci/type/EntityOrbitalElementSetMT.h"
#include "uci/type/EntityOrbitalElementSetRequestMDT.h"
#include "uci/type/EntityOrbitalElementSetRequestMT.h"
#include "uci/type/EntityOrbitalElementSetRequestStatusMDT.h"
#include "uci/type/EntityOrbitalElementSetRequestStatusMT.h"
#include "uci/type/EntityOrbitalElementSetType.h"
#include "uci/type/EntityOrbitalEphemerisID_Type.h"
#include "uci/type/EntityOrbitalEphemerisMDT.h"
#include "uci/type/EntityOrbitalEphemerisMT.h"
#include "uci/type/EntityOrbitalEphemerisRequestMDT.h"
#include "uci/type/EntityOrbitalEphemerisRequestMT.h"
#include "uci/type/EntityOrbitalEphemerisRequestStatusMDT.h"
#include "uci/type/EntityOrbitalEphemerisRequestStatusMT.h"
#include "uci/type/EntityOrbitalEphemerisType.h"
#include "uci/type/EntityOrbitalManeuverMT.h"
#include "uci/type/EntityOrbitalVCM_ID_Type.h"
#include "uci/type/EntityOrbitalVCM_MDT.h"
#include "uci/type/EntityOrbitalVCM_MT.h"
#include "uci/type/EntityOrbitalVCM_RequestMDT.h"
#include "uci/type/EntityOrbitalVCM_RequestMT.h"
#include "uci/type/EntityOrbitalVCM_RequestStatusMDT.h"
#include "uci/type/EntityOrbitalVCM_RequestStatusMT.h"
#include "uci/type/EntityOrbitalVCM_Type.h"
#include "uci/type/EntityPropagationMT.h"

/**  */
namespace asb_uci {

/**  */
namespace util {

bool DerivedTypesCopier7::copy(const uci::base::Accessor& source, uci::base::Accessor& destination) {
  switch (source.getAccessorType()) {
    case uci::type::accessorType::effectActivityType:
      dynamic_cast<asb_uci::type::EffectActivityType&>(destination).copyImpl(dynamic_cast<const uci::type::EffectActivityType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectAllocationType:
      dynamic_cast<asb_uci::type::EffectAllocationType&>(destination).copyImpl(dynamic_cast<const uci::type::EffectAllocationType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectCancelCommandMDT:
      dynamic_cast<asb_uci::type::EffectCancelCommandMDT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectCancelCommandMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectCancelCommandMT:
      dynamic_cast<asb_uci::type::EffectCancelCommandMT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectCancelCommandMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectCancelCommandStatusMDT:
      dynamic_cast<asb_uci::type::EffectCancelCommandStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectCancelCommandStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectCancelCommandStatusMT:
      dynamic_cast<asb_uci::type::EffectCancelCommandStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectCancelCommandStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectCapabilityCommandType:
      dynamic_cast<asb_uci::type::EffectCapabilityCommandType&>(destination).copyImpl(dynamic_cast<const uci::type::EffectCapabilityCommandType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectCapabilityMDT:
      dynamic_cast<asb_uci::type::EffectCapabilityMDT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectCapabilityMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectCapabilityMT:
      dynamic_cast<asb_uci::type::EffectCapabilityMT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectCapabilityMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectCapabilityStatusMDT:
      dynamic_cast<asb_uci::type::EffectCapabilityStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectCapabilityStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectCapabilityStatusMT:
      dynamic_cast<asb_uci::type::EffectCapabilityStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectCapabilityStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectCapabilityType:
      dynamic_cast<asb_uci::type::EffectCapabilityType&>(destination).copyImpl(dynamic_cast<const uci::type::EffectCapabilityType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectCommandMT:
      dynamic_cast<asb_uci::type::EffectCommandMT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectCommandMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectCommandStatusMDT:
      dynamic_cast<asb_uci::type::EffectCommandStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectCommandStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectCommandStatusMT:
      dynamic_cast<asb_uci::type::EffectCommandStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectCommandStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectExecutionApprovalStatusMDT:
      dynamic_cast<asb_uci::type::EffectExecutionApprovalStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectExecutionApprovalStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectExecutionApprovalStatusMT:
      dynamic_cast<asb_uci::type::EffectExecutionApprovalStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectExecutionApprovalStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectID_Type:
      dynamic_cast<asb_uci::type::EffectID_Type&>(destination).copyImpl(dynamic_cast<const uci::type::EffectID_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectMT:
      dynamic_cast<asb_uci::type::EffectMT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectPlanApprovalStatusMT:
      dynamic_cast<asb_uci::type::EffectPlanApprovalStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectPlanApprovalStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectPlanCommandID_Type:
      dynamic_cast<asb_uci::type::EffectPlanCommandID_Type&>(destination).copyImpl(dynamic_cast<const uci::type::EffectPlanCommandID_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectPlanCommandMT:
      dynamic_cast<asb_uci::type::EffectPlanCommandMT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectPlanCommandMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectPlanCommandStatusMT:
      dynamic_cast<asb_uci::type::EffectPlanCommandStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectPlanCommandStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectPlanExecutionStatusMT:
      dynamic_cast<asb_uci::type::EffectPlanExecutionStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectPlanExecutionStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectPlanID_Type:
      dynamic_cast<asb_uci::type::EffectPlanID_Type&>(destination).copyImpl(dynamic_cast<const uci::type::EffectPlanID_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectPlanInputsType:
      dynamic_cast<asb_uci::type::EffectPlanInputsType&>(destination).copyImpl(dynamic_cast<const uci::type::EffectPlanInputsType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectPlanMT:
      dynamic_cast<asb_uci::type::EffectPlanMT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectPlanMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectPlanningResultType:
      dynamic_cast<asb_uci::type::EffectPlanningResultType&>(destination).copyImpl(dynamic_cast<const uci::type::EffectPlanningResultType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectPlanningStatusMDT:
      dynamic_cast<asb_uci::type::EffectPlanningStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectPlanningStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectPlanningStatusMT:
      dynamic_cast<asb_uci::type::EffectPlanningStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectPlanningStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectPlanProcessDescriptionType:
      dynamic_cast<asb_uci::type::EffectPlanProcessDescriptionType&>(destination).copyImpl(dynamic_cast<const uci::type::EffectPlanProcessDescriptionType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectPlanStatusMT:
      dynamic_cast<asb_uci::type::EffectPlanStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectPlanStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectPlanValidationCommandMDT:
      dynamic_cast<asb_uci::type::EffectPlanValidationCommandMDT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectPlanValidationCommandMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectPlanValidationCommandMT:
      dynamic_cast<asb_uci::type::EffectPlanValidationCommandMT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectPlanValidationCommandMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectPlanValidationCommandStatusMDT:
      dynamic_cast<asb_uci::type::EffectPlanValidationCommandStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectPlanValidationCommandStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectPlanValidationCommandStatusMT:
      dynamic_cast<asb_uci::type::EffectPlanValidationCommandStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectPlanValidationCommandStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectPlanValidationID_Type:
      dynamic_cast<asb_uci::type::EffectPlanValidationID_Type&>(destination).copyImpl(dynamic_cast<const uci::type::EffectPlanValidationID_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectPlanValidationInputsType:
      dynamic_cast<asb_uci::type::EffectPlanValidationInputsType&>(destination).copyImpl(dynamic_cast<const uci::type::EffectPlanValidationInputsType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectPlanValidationMT:
      dynamic_cast<asb_uci::type::EffectPlanValidationMT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectPlanValidationMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectStatusMDT:
      dynamic_cast<asb_uci::type::EffectStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::effectStatusMT:
      dynamic_cast<asb_uci::type::EffectStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::EffectStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::elevationRequestMDT:
      dynamic_cast<asb_uci::type::ElevationRequestMDT&>(destination).copyImpl(dynamic_cast<const uci::type::ElevationRequestMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::elevationRequestMT:
      dynamic_cast<asb_uci::type::ElevationRequestMT&>(destination).copyImpl(dynamic_cast<const uci::type::ElevationRequestMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::elevationRequestStatusMDT:
      dynamic_cast<asb_uci::type::ElevationRequestStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::ElevationRequestStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::elevationRequestStatusMT:
      dynamic_cast<asb_uci::type::ElevationRequestStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::ElevationRequestStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::elevationVisibilityRequestMDT:
      dynamic_cast<asb_uci::type::ElevationVisibilityRequestMDT&>(destination).copyImpl(dynamic_cast<const uci::type::ElevationVisibilityRequestMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::elevationVisibilityRequestMT:
      dynamic_cast<asb_uci::type::ElevationVisibilityRequestMT&>(destination).copyImpl(dynamic_cast<const uci::type::ElevationVisibilityRequestMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::elevationVisibilityRequestStatusMDT:
      dynamic_cast<asb_uci::type::ElevationVisibilityRequestStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::ElevationVisibilityRequestStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::elevationVisibilityRequestStatusMT:
      dynamic_cast<asb_uci::type::ElevationVisibilityRequestStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::ElevationVisibilityRequestStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::ellipseType:
      dynamic_cast<asb_uci::type::EllipseType&>(destination).copyImpl(dynamic_cast<const uci::type::EllipseType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::emergencyReferenceOpPointType:
      dynamic_cast<asb_uci::type::EmergencyReferenceOpPointType&>(destination).copyImpl(dynamic_cast<const uci::type::EmergencyReferenceOpPointType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::emitterFixedPositionType:
      dynamic_cast<asb_uci::type::EmitterFixedPositionType&>(destination).copyImpl(dynamic_cast<const uci::type::EmitterFixedPositionType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::enduranceBaseType:
      dynamic_cast<asb_uci::type::EnduranceBaseType&>(destination).copyImpl(dynamic_cast<const uci::type::EnduranceBaseType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::enduranceType:
      dynamic_cast<asb_uci::type::EnduranceType&>(destination).copyImpl(dynamic_cast<const uci::type::EnduranceType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityConfirmationMT:
      dynamic_cast<asb_uci::type::EntityConfirmationMT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityConfirmationMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityConfirmationRequestMDT:
      dynamic_cast<asb_uci::type::EntityConfirmationRequestMDT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityConfirmationRequestMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityConfirmationRequestMT:
      dynamic_cast<asb_uci::type::EntityConfirmationRequestMT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityConfirmationRequestMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityConfirmationRequestStatusMDT:
      dynamic_cast<asb_uci::type::EntityConfirmationRequestStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityConfirmationRequestStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityConfirmationRequestStatusMT:
      dynamic_cast<asb_uci::type::EntityConfirmationRequestStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityConfirmationRequestStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityEphemerisRequestParametersType:
      dynamic_cast<asb_uci::type::EntityEphemerisRequestParametersType&>(destination).copyImpl(dynamic_cast<const uci::type::EntityEphemerisRequestParametersType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityID_Type:
      dynamic_cast<asb_uci::type::EntityID_Type&>(destination).copyImpl(dynamic_cast<const uci::type::EntityID_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityIdentityType:
      dynamic_cast<asb_uci::type::EntityIdentityType&>(destination).copyImpl(dynamic_cast<const uci::type::EntityIdentityType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityLostMT:
      dynamic_cast<asb_uci::type::EntityLostMT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityLostMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityManagementRequestMDT:
      dynamic_cast<asb_uci::type::EntityManagementRequestMDT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityManagementRequestMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityManagementRequestMT:
      dynamic_cast<asb_uci::type::EntityManagementRequestMT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityManagementRequestMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityManagementRequestStatusMDT:
      dynamic_cast<asb_uci::type::EntityManagementRequestStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityManagementRequestStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityManagementRequestStatusMT:
      dynamic_cast<asb_uci::type::EntityManagementRequestStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityManagementRequestStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityMetadataMT:
      dynamic_cast<asb_uci::type::EntityMetadataMT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityMetadataMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityMetadataPET:
      dynamic_cast<asb_uci::type::EntityMetadataPET&>(destination).copyImpl(dynamic_cast<const uci::type::EntityMetadataPET&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityMT:
      dynamic_cast<asb_uci::type::EntityMT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityNotificationMDT:
      dynamic_cast<asb_uci::type::EntityNotificationMDT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityNotificationMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityNotificationMT:
      dynamic_cast<asb_uci::type::EntityNotificationMT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityNotificationMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalCSO_ID_Type:
      dynamic_cast<asb_uci::type::EntityOrbitalCSO_ID_Type&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalCSO_ID_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalCSO_MT:
      dynamic_cast<asb_uci::type::EntityOrbitalCSO_MT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalCSO_MT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalElementSetID_Type:
      dynamic_cast<asb_uci::type::EntityOrbitalElementSetID_Type&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalElementSetID_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalElementSetMDT:
      dynamic_cast<asb_uci::type::EntityOrbitalElementSetMDT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalElementSetMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalElementSetMT:
      dynamic_cast<asb_uci::type::EntityOrbitalElementSetMT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalElementSetMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalElementSetRequestMDT:
      dynamic_cast<asb_uci::type::EntityOrbitalElementSetRequestMDT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalElementSetRequestMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalElementSetRequestMT:
      dynamic_cast<asb_uci::type::EntityOrbitalElementSetRequestMT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalElementSetRequestMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalElementSetRequestStatusMDT:
      dynamic_cast<asb_uci::type::EntityOrbitalElementSetRequestStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalElementSetRequestStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalElementSetRequestStatusMT:
      dynamic_cast<asb_uci::type::EntityOrbitalElementSetRequestStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalElementSetRequestStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalElementSetType:
      dynamic_cast<asb_uci::type::EntityOrbitalElementSetType&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalElementSetType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalEphemerisID_Type:
      dynamic_cast<asb_uci::type::EntityOrbitalEphemerisID_Type&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalEphemerisID_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalEphemerisMDT:
      dynamic_cast<asb_uci::type::EntityOrbitalEphemerisMDT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalEphemerisMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalEphemerisMT:
      dynamic_cast<asb_uci::type::EntityOrbitalEphemerisMT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalEphemerisMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalEphemerisRequestMDT:
      dynamic_cast<asb_uci::type::EntityOrbitalEphemerisRequestMDT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalEphemerisRequestMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalEphemerisRequestMT:
      dynamic_cast<asb_uci::type::EntityOrbitalEphemerisRequestMT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalEphemerisRequestMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalEphemerisRequestStatusMDT:
      dynamic_cast<asb_uci::type::EntityOrbitalEphemerisRequestStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalEphemerisRequestStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalEphemerisRequestStatusMT:
      dynamic_cast<asb_uci::type::EntityOrbitalEphemerisRequestStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalEphemerisRequestStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalEphemerisType:
      dynamic_cast<asb_uci::type::EntityOrbitalEphemerisType&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalEphemerisType&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalManeuverMT:
      dynamic_cast<asb_uci::type::EntityOrbitalManeuverMT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalManeuverMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalVCM_ID_Type:
      dynamic_cast<asb_uci::type::EntityOrbitalVCM_ID_Type&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalVCM_ID_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalVCM_MDT:
      dynamic_cast<asb_uci::type::EntityOrbitalVCM_MDT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalVCM_MDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalVCM_MT:
      dynamic_cast<asb_uci::type::EntityOrbitalVCM_MT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalVCM_MT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalVCM_RequestMDT:
      dynamic_cast<asb_uci::type::EntityOrbitalVCM_RequestMDT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalVCM_RequestMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalVCM_RequestMT:
      dynamic_cast<asb_uci::type::EntityOrbitalVCM_RequestMT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalVCM_RequestMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalVCM_RequestStatusMDT:
      dynamic_cast<asb_uci::type::EntityOrbitalVCM_RequestStatusMDT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalVCM_RequestStatusMDT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalVCM_RequestStatusMT:
      dynamic_cast<asb_uci::type::EntityOrbitalVCM_RequestStatusMT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalVCM_RequestStatusMT&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityOrbitalVCM_Type:
      dynamic_cast<asb_uci::type::EntityOrbitalVCM_Type&>(destination).copyImpl(dynamic_cast<const uci::type::EntityOrbitalVCM_Type&>(source), false);
      return true;
      break;
    case uci::type::accessorType::entityPropagationMT:
      dynamic_cast<asb_uci::type::EntityPropagationMT&>(destination).copyImpl(dynamic_cast<const uci::type::EntityPropagationMT&>(source), false);
      return true;
      break;
    default:
      return false;
  }
}

} // namespace util

} // namespace asb_uci

