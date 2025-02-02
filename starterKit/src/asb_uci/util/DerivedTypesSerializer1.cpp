/** @file DerivedTypesSerializer1.cpp
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

#include "asb_uci/util/DerivedTypesSerializer1.h"

#include <string>

#include <boost/none.hpp>
#include <boost/property_tree/ptree.hpp>

#include "asb_uci/type/ACO_FileTraceabilityType.h"
#include "asb_uci/type/ACO_TraceabilityType.h"
#include "asb_uci/type/ACTDF_FileTraceabilityType.h"
#include "asb_uci/type/ACTDF_TaskID_Type.h"
#include "asb_uci/type/ACTDF_TraceabilityType.h"
#include "asb_uci/type/AccessAssessmentID_Type.h"
#include "asb_uci/type/AccessAssessmentMT.h"
#include "asb_uci/type/AccessAssessmentRequestMDT.h"
#include "asb_uci/type/AccessAssessmentRequestMT.h"
#include "asb_uci/type/AccessAssessmentRequestStatusMDT.h"
#include "asb_uci/type/AccessAssessmentRequestStatusMT.h"
#include "asb_uci/type/AchievabilityAssessmentPET.h"
#include "asb_uci/type/AchievabilityAssessmentRequestPET.h"
#include "asb_uci/type/ActionActivityMT.h"
#include "asb_uci/type/ActionActivityType.h"
#include "asb_uci/type/ActionAllocationType.h"
#include "asb_uci/type/ActionCancelCommandMDT.h"
#include "asb_uci/type/ActionCancelCommandMT.h"
#include "asb_uci/type/ActionCancelCommandStatusMDT.h"
#include "asb_uci/type/ActionCancelCommandStatusMT.h"
#include "asb_uci/type/ActionCapabilityCommandType.h"
#include "asb_uci/type/ActionCapabilityMDT.h"
#include "asb_uci/type/ActionCapabilityMT.h"
#include "asb_uci/type/ActionCapabilityStatusMDT.h"
#include "asb_uci/type/ActionCapabilityStatusMT.h"
#include "asb_uci/type/ActionCapabilityType.h"
#include "asb_uci/type/ActionCommandMT.h"
#include "asb_uci/type/ActionCommandStatusMDT.h"
#include "asb_uci/type/ActionCommandStatusMT.h"
#include "asb_uci/type/ActionExecutionApprovalStatusMDT.h"
#include "asb_uci/type/ActionExecutionApprovalStatusMT.h"
#include "asb_uci/type/ActionID_Type.h"
#include "asb_uci/type/ActionMT.h"
#include "asb_uci/type/ActionPlanApprovalStatusMT.h"
#include "asb_uci/type/ActionPlanCommandID_Type.h"
#include "asb_uci/type/ActionPlanCommandMT.h"
#include "asb_uci/type/ActionPlanCommandStatusMT.h"
#include "asb_uci/type/ActionPlanExecutionStatusMT.h"
#include "asb_uci/type/ActionPlanID_Type.h"
#include "asb_uci/type/ActionPlanInputsType.h"
#include "asb_uci/type/ActionPlanMT.h"
#include "asb_uci/type/ActionPlanProcessDescriptionType.h"
#include "asb_uci/type/ActionPlanStatusMT.h"
#include "asb_uci/type/ActionPlanValidationCommandMDT.h"
#include "asb_uci/type/ActionPlanValidationCommandMT.h"
#include "asb_uci/type/ActionPlanValidationCommandStatusMDT.h"
#include "asb_uci/type/ActionPlanValidationCommandStatusMT.h"
#include "asb_uci/type/ActionPlanValidationID_Type.h"
#include "asb_uci/type/ActionPlanValidationInputsType.h"
#include "asb_uci/type/ActionPlanValidationMT.h"
#include "asb_uci/type/ActionPlanningResultType.h"
#include "asb_uci/type/ActionPlanningStatusMDT.h"
#include "asb_uci/type/ActionPlanningStatusMT.h"
#include "asb_uci/type/ActionStatusMDT.h"
#include "asb_uci/type/ActionStatusMT.h"
#include "asb_uci/type/ActivityBaseType.h"
#include "asb_uci/type/ActivityCommandBaseType.h"
#include "asb_uci/type/ActivityExecutionStatusType.h"
#include "asb_uci/type/ActivityID_Type.h"
#include "asb_uci/type/ActivityMetricsID_Type.h"
#include "asb_uci/type/ActivityMetricsMT.h"
#include "asb_uci/type/ActivityMetricsRequestMDT.h"
#include "asb_uci/type/ActivityMetricsRequestMT.h"
#include "asb_uci/type/ActivityMetricsRequestStatusMDT.h"
#include "asb_uci/type/ActivityMetricsRequestStatusMT.h"
#include "asb_uci/type/ActivityPlanApprovalStatusMT.h"
#include "asb_uci/type/ActivityPlanCommandID_Type.h"
#include "asb_uci/type/ActivityPlanCommandMT.h"
#include "asb_uci/type/ActivityPlanCommandStatusMT.h"
#include "asb_uci/type/ActivityPlanExecutionStatusMT.h"
#include "asb_uci/type/ActivityPlanID_Type.h"
#include "asb_uci/type/ActivityPlanInputsType.h"
#include "asb_uci/type/ActivityPlanMT.h"
#include "asb_uci/type/ActivityPlanPartsCommandType.h"
#include "asb_uci/type/ActivityPlanPartsType.h"
#include "asb_uci/type/ActivityPlanProcessDescriptionType.h"
#include "asb_uci/type/ActivityPlanStatusMT.h"
#include "asb_uci/type/ActivityPlanStatusType.h"
#include "asb_uci/type/ActivityPlanValidationCommandMDT.h"
#include "asb_uci/type/ActivityPlanValidationCommandMT.h"
#include "asb_uci/type/ActivityPlanValidationCommandStatusMDT.h"
#include "asb_uci/type/ActivityPlanValidationCommandStatusMT.h"
#include "asb_uci/type/ActivityPlanValidationID_Type.h"
#include "asb_uci/type/ActivityPlanValidationInputsType.h"
#include "asb_uci/type/ActivityPlanValidationMT.h"
#include "asb_uci/type/AirSampleActivityMT.h"
#include "asb_uci/type/AirSampleActivityType.h"
#include "asb_uci/type/AirSampleCapabilityCommandType.h"
#include "asb_uci/type/AirSampleCapabilityMDT.h"
#include "asb_uci/type/AirSampleCapabilityMT.h"
#include "asb_uci/type/AirSampleCapabilityStatusMDT.h"
#include "asb_uci/type/AirSampleCapabilityStatusMT.h"
#include "asb_uci/type/AirSampleCapabilityType.h"
#include "asb_uci/type/AirSampleCommandMT.h"
#include "asb_uci/type/AirfieldGeneralStoreType.h"
#include "asb_uci/type/AirfieldID_Type.h"
#include "asb_uci/type/AirfieldReportID_Type.h"
#include "asb_uci/type/AirfieldReportMT.h"
#include "asb_uci/type/AirfieldStoreType.h"
#include "asb_uci/type/AirfieldStoresPET.h"
#include "uci/base/Accessor.h"
#include "uci/base/accessorType.h"
#include "uci/type/ACO_FileTraceabilityType.h"
#include "uci/type/ACO_TraceabilityType.h"
#include "uci/type/ACTDF_FileTraceabilityType.h"
#include "uci/type/ACTDF_TaskID_Type.h"
#include "uci/type/ACTDF_TraceabilityType.h"
#include "uci/type/AccessAssessmentID_Type.h"
#include "uci/type/AccessAssessmentMT.h"
#include "uci/type/AccessAssessmentRequestMDT.h"
#include "uci/type/AccessAssessmentRequestMT.h"
#include "uci/type/AccessAssessmentRequestStatusMDT.h"
#include "uci/type/AccessAssessmentRequestStatusMT.h"
#include "uci/type/AchievabilityAssessmentPET.h"
#include "uci/type/AchievabilityAssessmentRequestPET.h"
#include "uci/type/ActionActivityMT.h"
#include "uci/type/ActionActivityType.h"
#include "uci/type/ActionAllocationType.h"
#include "uci/type/ActionCancelCommandMDT.h"
#include "uci/type/ActionCancelCommandMT.h"
#include "uci/type/ActionCancelCommandStatusMDT.h"
#include "uci/type/ActionCancelCommandStatusMT.h"
#include "uci/type/ActionCapabilityCommandType.h"
#include "uci/type/ActionCapabilityMDT.h"
#include "uci/type/ActionCapabilityMT.h"
#include "uci/type/ActionCapabilityStatusMDT.h"
#include "uci/type/ActionCapabilityStatusMT.h"
#include "uci/type/ActionCapabilityType.h"
#include "uci/type/ActionCommandMT.h"
#include "uci/type/ActionCommandStatusMDT.h"
#include "uci/type/ActionCommandStatusMT.h"
#include "uci/type/ActionExecutionApprovalStatusMDT.h"
#include "uci/type/ActionExecutionApprovalStatusMT.h"
#include "uci/type/ActionID_Type.h"
#include "uci/type/ActionMT.h"
#include "uci/type/ActionPlanApprovalStatusMT.h"
#include "uci/type/ActionPlanCommandID_Type.h"
#include "uci/type/ActionPlanCommandMT.h"
#include "uci/type/ActionPlanCommandStatusMT.h"
#include "uci/type/ActionPlanExecutionStatusMT.h"
#include "uci/type/ActionPlanID_Type.h"
#include "uci/type/ActionPlanInputsType.h"
#include "uci/type/ActionPlanMT.h"
#include "uci/type/ActionPlanProcessDescriptionType.h"
#include "uci/type/ActionPlanStatusMT.h"
#include "uci/type/ActionPlanValidationCommandMDT.h"
#include "uci/type/ActionPlanValidationCommandMT.h"
#include "uci/type/ActionPlanValidationCommandStatusMDT.h"
#include "uci/type/ActionPlanValidationCommandStatusMT.h"
#include "uci/type/ActionPlanValidationID_Type.h"
#include "uci/type/ActionPlanValidationInputsType.h"
#include "uci/type/ActionPlanValidationMT.h"
#include "uci/type/ActionPlanningResultType.h"
#include "uci/type/ActionPlanningStatusMDT.h"
#include "uci/type/ActionPlanningStatusMT.h"
#include "uci/type/ActionStatusMDT.h"
#include "uci/type/ActionStatusMT.h"
#include "uci/type/ActivityBaseType.h"
#include "uci/type/ActivityCommandBaseType.h"
#include "uci/type/ActivityExecutionStatusType.h"
#include "uci/type/ActivityID_Type.h"
#include "uci/type/ActivityMetricsID_Type.h"
#include "uci/type/ActivityMetricsMT.h"
#include "uci/type/ActivityMetricsRequestMDT.h"
#include "uci/type/ActivityMetricsRequestMT.h"
#include "uci/type/ActivityMetricsRequestStatusMDT.h"
#include "uci/type/ActivityMetricsRequestStatusMT.h"
#include "uci/type/ActivityPlanApprovalStatusMT.h"
#include "uci/type/ActivityPlanCommandID_Type.h"
#include "uci/type/ActivityPlanCommandMT.h"
#include "uci/type/ActivityPlanCommandStatusMT.h"
#include "uci/type/ActivityPlanExecutionStatusMT.h"
#include "uci/type/ActivityPlanID_Type.h"
#include "uci/type/ActivityPlanInputsType.h"
#include "uci/type/ActivityPlanMT.h"
#include "uci/type/ActivityPlanPartsCommandType.h"
#include "uci/type/ActivityPlanPartsType.h"
#include "uci/type/ActivityPlanProcessDescriptionType.h"
#include "uci/type/ActivityPlanStatusMT.h"
#include "uci/type/ActivityPlanStatusType.h"
#include "uci/type/ActivityPlanValidationCommandMDT.h"
#include "uci/type/ActivityPlanValidationCommandMT.h"
#include "uci/type/ActivityPlanValidationCommandStatusMDT.h"
#include "uci/type/ActivityPlanValidationCommandStatusMT.h"
#include "uci/type/ActivityPlanValidationID_Type.h"
#include "uci/type/ActivityPlanValidationInputsType.h"
#include "uci/type/ActivityPlanValidationMT.h"
#include "uci/type/AirSampleActivityMT.h"
#include "uci/type/AirSampleActivityType.h"
#include "uci/type/AirSampleCapabilityCommandType.h"
#include "uci/type/AirSampleCapabilityMDT.h"
#include "uci/type/AirSampleCapabilityMT.h"
#include "uci/type/AirSampleCapabilityStatusMDT.h"
#include "uci/type/AirSampleCapabilityStatusMT.h"
#include "uci/type/AirSampleCapabilityType.h"
#include "uci/type/AirSampleCommandMT.h"
#include "uci/type/AirfieldGeneralStoreType.h"
#include "uci/type/AirfieldID_Type.h"
#include "uci/type/AirfieldReportID_Type.h"
#include "uci/type/AirfieldReportMT.h"
#include "uci/type/AirfieldStoreType.h"
#include "uci/type/AirfieldStoresPET.h"

/**  */
namespace asb_uci {

/**  */
namespace util {

boost::optional<std::string> DerivedTypesSerializer1::serialize(const uci::base::Accessor& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode) {
  switch (accessor.getAccessorType()) {
    case uci::type::accessorType::accessAssessmentID_Type:
      return asb_uci::type::AccessAssessmentID_Type::serialize(dynamic_cast<const uci::type::AccessAssessmentID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::accessAssessmentMT:
      return asb_uci::type::AccessAssessmentMT::serialize(dynamic_cast<const uci::type::AccessAssessmentMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::accessAssessmentRequestMDT:
      return asb_uci::type::AccessAssessmentRequestMDT::serialize(dynamic_cast<const uci::type::AccessAssessmentRequestMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::accessAssessmentRequestMT:
      return asb_uci::type::AccessAssessmentRequestMT::serialize(dynamic_cast<const uci::type::AccessAssessmentRequestMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::accessAssessmentRequestStatusMDT:
      return asb_uci::type::AccessAssessmentRequestStatusMDT::serialize(dynamic_cast<const uci::type::AccessAssessmentRequestStatusMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::accessAssessmentRequestStatusMT:
      return asb_uci::type::AccessAssessmentRequestStatusMT::serialize(dynamic_cast<const uci::type::AccessAssessmentRequestStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::achievabilityAssessmentPET:
      return asb_uci::type::AchievabilityAssessmentPET::serialize(dynamic_cast<const uci::type::AchievabilityAssessmentPET&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::achievabilityAssessmentRequestPET:
      return asb_uci::type::AchievabilityAssessmentRequestPET::serialize(dynamic_cast<const uci::type::AchievabilityAssessmentRequestPET&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::aCO_FileTraceabilityType:
      return asb_uci::type::ACO_FileTraceabilityType::serialize(dynamic_cast<const uci::type::ACO_FileTraceabilityType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::aCO_TraceabilityType:
      return asb_uci::type::ACO_TraceabilityType::serialize(dynamic_cast<const uci::type::ACO_TraceabilityType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::aCTDF_FileTraceabilityType:
      return asb_uci::type::ACTDF_FileTraceabilityType::serialize(dynamic_cast<const uci::type::ACTDF_FileTraceabilityType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::aCTDF_TaskID_Type:
      return asb_uci::type::ACTDF_TaskID_Type::serialize(dynamic_cast<const uci::type::ACTDF_TaskID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::aCTDF_TraceabilityType:
      return asb_uci::type::ACTDF_TraceabilityType::serialize(dynamic_cast<const uci::type::ACTDF_TraceabilityType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionActivityMT:
      return asb_uci::type::ActionActivityMT::serialize(dynamic_cast<const uci::type::ActionActivityMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionActivityType:
      return asb_uci::type::ActionActivityType::serialize(dynamic_cast<const uci::type::ActionActivityType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionAllocationType:
      return asb_uci::type::ActionAllocationType::serialize(dynamic_cast<const uci::type::ActionAllocationType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionCancelCommandMDT:
      return asb_uci::type::ActionCancelCommandMDT::serialize(dynamic_cast<const uci::type::ActionCancelCommandMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionCancelCommandMT:
      return asb_uci::type::ActionCancelCommandMT::serialize(dynamic_cast<const uci::type::ActionCancelCommandMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionCancelCommandStatusMDT:
      return asb_uci::type::ActionCancelCommandStatusMDT::serialize(dynamic_cast<const uci::type::ActionCancelCommandStatusMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionCancelCommandStatusMT:
      return asb_uci::type::ActionCancelCommandStatusMT::serialize(dynamic_cast<const uci::type::ActionCancelCommandStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionCapabilityCommandType:
      return asb_uci::type::ActionCapabilityCommandType::serialize(dynamic_cast<const uci::type::ActionCapabilityCommandType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionCapabilityMDT:
      return asb_uci::type::ActionCapabilityMDT::serialize(dynamic_cast<const uci::type::ActionCapabilityMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionCapabilityMT:
      return asb_uci::type::ActionCapabilityMT::serialize(dynamic_cast<const uci::type::ActionCapabilityMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionCapabilityStatusMDT:
      return asb_uci::type::ActionCapabilityStatusMDT::serialize(dynamic_cast<const uci::type::ActionCapabilityStatusMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionCapabilityStatusMT:
      return asb_uci::type::ActionCapabilityStatusMT::serialize(dynamic_cast<const uci::type::ActionCapabilityStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionCapabilityType:
      return asb_uci::type::ActionCapabilityType::serialize(dynamic_cast<const uci::type::ActionCapabilityType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionCommandMT:
      return asb_uci::type::ActionCommandMT::serialize(dynamic_cast<const uci::type::ActionCommandMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionCommandStatusMDT:
      return asb_uci::type::ActionCommandStatusMDT::serialize(dynamic_cast<const uci::type::ActionCommandStatusMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionCommandStatusMT:
      return asb_uci::type::ActionCommandStatusMT::serialize(dynamic_cast<const uci::type::ActionCommandStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionExecutionApprovalStatusMDT:
      return asb_uci::type::ActionExecutionApprovalStatusMDT::serialize(dynamic_cast<const uci::type::ActionExecutionApprovalStatusMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionExecutionApprovalStatusMT:
      return asb_uci::type::ActionExecutionApprovalStatusMT::serialize(dynamic_cast<const uci::type::ActionExecutionApprovalStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionID_Type:
      return asb_uci::type::ActionID_Type::serialize(dynamic_cast<const uci::type::ActionID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionMT:
      return asb_uci::type::ActionMT::serialize(dynamic_cast<const uci::type::ActionMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionPlanApprovalStatusMT:
      return asb_uci::type::ActionPlanApprovalStatusMT::serialize(dynamic_cast<const uci::type::ActionPlanApprovalStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionPlanCommandID_Type:
      return asb_uci::type::ActionPlanCommandID_Type::serialize(dynamic_cast<const uci::type::ActionPlanCommandID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionPlanCommandMT:
      return asb_uci::type::ActionPlanCommandMT::serialize(dynamic_cast<const uci::type::ActionPlanCommandMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionPlanCommandStatusMT:
      return asb_uci::type::ActionPlanCommandStatusMT::serialize(dynamic_cast<const uci::type::ActionPlanCommandStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionPlanExecutionStatusMT:
      return asb_uci::type::ActionPlanExecutionStatusMT::serialize(dynamic_cast<const uci::type::ActionPlanExecutionStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionPlanID_Type:
      return asb_uci::type::ActionPlanID_Type::serialize(dynamic_cast<const uci::type::ActionPlanID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionPlanInputsType:
      return asb_uci::type::ActionPlanInputsType::serialize(dynamic_cast<const uci::type::ActionPlanInputsType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionPlanMT:
      return asb_uci::type::ActionPlanMT::serialize(dynamic_cast<const uci::type::ActionPlanMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionPlanningResultType:
      return asb_uci::type::ActionPlanningResultType::serialize(dynamic_cast<const uci::type::ActionPlanningResultType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionPlanningStatusMDT:
      return asb_uci::type::ActionPlanningStatusMDT::serialize(dynamic_cast<const uci::type::ActionPlanningStatusMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionPlanningStatusMT:
      return asb_uci::type::ActionPlanningStatusMT::serialize(dynamic_cast<const uci::type::ActionPlanningStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionPlanProcessDescriptionType:
      return asb_uci::type::ActionPlanProcessDescriptionType::serialize(dynamic_cast<const uci::type::ActionPlanProcessDescriptionType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionPlanStatusMT:
      return asb_uci::type::ActionPlanStatusMT::serialize(dynamic_cast<const uci::type::ActionPlanStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionPlanValidationCommandMDT:
      return asb_uci::type::ActionPlanValidationCommandMDT::serialize(dynamic_cast<const uci::type::ActionPlanValidationCommandMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionPlanValidationCommandMT:
      return asb_uci::type::ActionPlanValidationCommandMT::serialize(dynamic_cast<const uci::type::ActionPlanValidationCommandMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionPlanValidationCommandStatusMDT:
      return asb_uci::type::ActionPlanValidationCommandStatusMDT::serialize(dynamic_cast<const uci::type::ActionPlanValidationCommandStatusMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionPlanValidationCommandStatusMT:
      return asb_uci::type::ActionPlanValidationCommandStatusMT::serialize(dynamic_cast<const uci::type::ActionPlanValidationCommandStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionPlanValidationID_Type:
      return asb_uci::type::ActionPlanValidationID_Type::serialize(dynamic_cast<const uci::type::ActionPlanValidationID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionPlanValidationInputsType:
      return asb_uci::type::ActionPlanValidationInputsType::serialize(dynamic_cast<const uci::type::ActionPlanValidationInputsType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionPlanValidationMT:
      return asb_uci::type::ActionPlanValidationMT::serialize(dynamic_cast<const uci::type::ActionPlanValidationMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionStatusMDT:
      return asb_uci::type::ActionStatusMDT::serialize(dynamic_cast<const uci::type::ActionStatusMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::actionStatusMT:
      return asb_uci::type::ActionStatusMT::serialize(dynamic_cast<const uci::type::ActionStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityBaseType:
      return asb_uci::type::ActivityBaseType::serialize(dynamic_cast<const uci::type::ActivityBaseType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityCommandBaseType:
      return asb_uci::type::ActivityCommandBaseType::serialize(dynamic_cast<const uci::type::ActivityCommandBaseType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityExecutionStatusType:
      return asb_uci::type::ActivityExecutionStatusType::serialize(dynamic_cast<const uci::type::ActivityExecutionStatusType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityID_Type:
      return asb_uci::type::ActivityID_Type::serialize(dynamic_cast<const uci::type::ActivityID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityMetricsID_Type:
      return asb_uci::type::ActivityMetricsID_Type::serialize(dynamic_cast<const uci::type::ActivityMetricsID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityMetricsMT:
      return asb_uci::type::ActivityMetricsMT::serialize(dynamic_cast<const uci::type::ActivityMetricsMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityMetricsRequestMDT:
      return asb_uci::type::ActivityMetricsRequestMDT::serialize(dynamic_cast<const uci::type::ActivityMetricsRequestMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityMetricsRequestMT:
      return asb_uci::type::ActivityMetricsRequestMT::serialize(dynamic_cast<const uci::type::ActivityMetricsRequestMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityMetricsRequestStatusMDT:
      return asb_uci::type::ActivityMetricsRequestStatusMDT::serialize(dynamic_cast<const uci::type::ActivityMetricsRequestStatusMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityMetricsRequestStatusMT:
      return asb_uci::type::ActivityMetricsRequestStatusMT::serialize(dynamic_cast<const uci::type::ActivityMetricsRequestStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityPlanApprovalStatusMT:
      return asb_uci::type::ActivityPlanApprovalStatusMT::serialize(dynamic_cast<const uci::type::ActivityPlanApprovalStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityPlanCommandID_Type:
      return asb_uci::type::ActivityPlanCommandID_Type::serialize(dynamic_cast<const uci::type::ActivityPlanCommandID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityPlanCommandMT:
      return asb_uci::type::ActivityPlanCommandMT::serialize(dynamic_cast<const uci::type::ActivityPlanCommandMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityPlanCommandStatusMT:
      return asb_uci::type::ActivityPlanCommandStatusMT::serialize(dynamic_cast<const uci::type::ActivityPlanCommandStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityPlanExecutionStatusMT:
      return asb_uci::type::ActivityPlanExecutionStatusMT::serialize(dynamic_cast<const uci::type::ActivityPlanExecutionStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityPlanID_Type:
      return asb_uci::type::ActivityPlanID_Type::serialize(dynamic_cast<const uci::type::ActivityPlanID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityPlanInputsType:
      return asb_uci::type::ActivityPlanInputsType::serialize(dynamic_cast<const uci::type::ActivityPlanInputsType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityPlanMT:
      return asb_uci::type::ActivityPlanMT::serialize(dynamic_cast<const uci::type::ActivityPlanMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityPlanPartsCommandType:
      return asb_uci::type::ActivityPlanPartsCommandType::serialize(dynamic_cast<const uci::type::ActivityPlanPartsCommandType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityPlanPartsType:
      return asb_uci::type::ActivityPlanPartsType::serialize(dynamic_cast<const uci::type::ActivityPlanPartsType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityPlanProcessDescriptionType:
      return asb_uci::type::ActivityPlanProcessDescriptionType::serialize(dynamic_cast<const uci::type::ActivityPlanProcessDescriptionType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityPlanStatusMT:
      return asb_uci::type::ActivityPlanStatusMT::serialize(dynamic_cast<const uci::type::ActivityPlanStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityPlanStatusType:
      return asb_uci::type::ActivityPlanStatusType::serialize(dynamic_cast<const uci::type::ActivityPlanStatusType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityPlanValidationCommandMDT:
      return asb_uci::type::ActivityPlanValidationCommandMDT::serialize(dynamic_cast<const uci::type::ActivityPlanValidationCommandMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityPlanValidationCommandMT:
      return asb_uci::type::ActivityPlanValidationCommandMT::serialize(dynamic_cast<const uci::type::ActivityPlanValidationCommandMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityPlanValidationCommandStatusMDT:
      return asb_uci::type::ActivityPlanValidationCommandStatusMDT::serialize(dynamic_cast<const uci::type::ActivityPlanValidationCommandStatusMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityPlanValidationCommandStatusMT:
      return asb_uci::type::ActivityPlanValidationCommandStatusMT::serialize(dynamic_cast<const uci::type::ActivityPlanValidationCommandStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityPlanValidationID_Type:
      return asb_uci::type::ActivityPlanValidationID_Type::serialize(dynamic_cast<const uci::type::ActivityPlanValidationID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityPlanValidationInputsType:
      return asb_uci::type::ActivityPlanValidationInputsType::serialize(dynamic_cast<const uci::type::ActivityPlanValidationInputsType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::activityPlanValidationMT:
      return asb_uci::type::ActivityPlanValidationMT::serialize(dynamic_cast<const uci::type::ActivityPlanValidationMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::airfieldGeneralStoreType:
      return asb_uci::type::AirfieldGeneralStoreType::serialize(dynamic_cast<const uci::type::AirfieldGeneralStoreType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::airfieldID_Type:
      return asb_uci::type::AirfieldID_Type::serialize(dynamic_cast<const uci::type::AirfieldID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::airfieldReportID_Type:
      return asb_uci::type::AirfieldReportID_Type::serialize(dynamic_cast<const uci::type::AirfieldReportID_Type&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::airfieldReportMT:
      return asb_uci::type::AirfieldReportMT::serialize(dynamic_cast<const uci::type::AirfieldReportMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::airfieldStoresPET:
      return asb_uci::type::AirfieldStoresPET::serialize(dynamic_cast<const uci::type::AirfieldStoresPET&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::airfieldStoreType:
      return asb_uci::type::AirfieldStoreType::serialize(dynamic_cast<const uci::type::AirfieldStoreType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::airSampleActivityMT:
      return asb_uci::type::AirSampleActivityMT::serialize(dynamic_cast<const uci::type::AirSampleActivityMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::airSampleActivityType:
      return asb_uci::type::AirSampleActivityType::serialize(dynamic_cast<const uci::type::AirSampleActivityType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::airSampleCapabilityCommandType:
      return asb_uci::type::AirSampleCapabilityCommandType::serialize(dynamic_cast<const uci::type::AirSampleCapabilityCommandType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::airSampleCapabilityMDT:
      return asb_uci::type::AirSampleCapabilityMDT::serialize(dynamic_cast<const uci::type::AirSampleCapabilityMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::airSampleCapabilityMT:
      return asb_uci::type::AirSampleCapabilityMT::serialize(dynamic_cast<const uci::type::AirSampleCapabilityMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::airSampleCapabilityStatusMDT:
      return asb_uci::type::AirSampleCapabilityStatusMDT::serialize(dynamic_cast<const uci::type::AirSampleCapabilityStatusMDT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::airSampleCapabilityStatusMT:
      return asb_uci::type::AirSampleCapabilityStatusMT::serialize(dynamic_cast<const uci::type::AirSampleCapabilityStatusMT&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::airSampleCapabilityType:
      return asb_uci::type::AirSampleCapabilityType::serialize(dynamic_cast<const uci::type::AirSampleCapabilityType&>(accessor), propTree, nodeName, createNode, true, false);
    case uci::type::accessorType::airSampleCommandMT:
      return asb_uci::type::AirSampleCommandMT::serialize(dynamic_cast<const uci::type::AirSampleCommandMT&>(accessor), propTree, nodeName, createNode, true, false);
    default:
      return boost::none;
  }
}

} // namespace util

} // namespace asb_uci

