/** @file ActionPlanValidationMDT.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:18 PM
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

#include "extxml_uci/type/ActionPlanValidationMDT.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/ActionAllocationInvalidType.h"
#include "extxml_uci/type/ActionPlanID_Type.h"
#include "extxml_uci/type/ActionPlanValidationID_Type.h"
#include "extxml_uci/type/ActionPlanningResultType.h"
#include "extxml_uci/type/CompletionStatusType.h"
#include "extxml_uci/type/IncompleteProcessingType.h"
#include "extxml_uci/type/PlanValidationStateEnum.h"
#include "extxml_uci/type/ValidatorType.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/ActionPlanValidationMDT.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace ActionPlanValidationMDT_Names {

constexpr const char* Extern_Type_Name{"ActionPlanValidationMDT"};
constexpr const char* ActionPlanValidationID_Name{"ActionPlanValidationID"};
constexpr const char* PlanID_Name{"PlanID"};
constexpr const char* Validator_Name{"Validator"};
constexpr const char* ValidationState_Name{"ValidationState"};
constexpr const char* CompletionStatus_Name{"CompletionStatus"};
constexpr const char* IncompleteItem_Name{"IncompleteItem"};
constexpr const char* InvalidAllocation_Name{"InvalidAllocation"};
constexpr const char* AllocationResult_Name{"AllocationResult"};
constexpr const char* ModifiedPlanID_Name{"ModifiedPlanID"};

} // namespace ActionPlanValidationMDT_Names

bool ActionPlanValidationMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ActionPlanValidationMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ActionPlanValidationMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ActionPlanValidationMDT_Names::ActionPlanValidationID_Name) {
      ActionPlanValidationID_Type::deserialize(valueType.second, accessor.getActionPlanValidationID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ActionPlanValidationMDT_Names::PlanID_Name) {
      ActionPlanID_Type::deserialize(valueType.second, accessor.getPlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ActionPlanValidationMDT_Names::Validator_Name) {
      ValidatorType::deserialize(valueType.second, accessor.getValidator(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ActionPlanValidationMDT_Names::ValidationState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getValidationState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ActionPlanValidationMDT_Names::CompletionStatus_Name) {
      CompletionStatusType::deserialize(valueType.second, accessor.enableCompletionStatus(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ActionPlanValidationMDT_Names::IncompleteItem_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ActionPlanValidationMDT::IncompleteItem& boundedList = accessor.getIncompleteItem();
        const uci::type::ActionPlanValidationMDT::IncompleteItem::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        IncompleteProcessingType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ActionPlanValidationMDT_Names::InvalidAllocation_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ActionPlanValidationMDT::InvalidAllocation& boundedList = accessor.getInvalidAllocation();
        const uci::type::ActionPlanValidationMDT::InvalidAllocation::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        ActionAllocationInvalidType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ActionPlanValidationMDT_Names::AllocationResult_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ActionPlanValidationMDT::AllocationResult& boundedList = accessor.getAllocationResult();
        const uci::type::ActionPlanValidationMDT::AllocationResult::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        ActionPlanningResultType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ActionPlanValidationMDT_Names::ModifiedPlanID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ActionPlanValidationMDT::ModifiedPlanID& boundedList = accessor.getModifiedPlanID();
        const uci::type::ActionPlanValidationMDT::ModifiedPlanID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        ActionPlanID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  return true;
}

std::string ActionPlanValidationMDT::serialize(const uci::type::ActionPlanValidationMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? ActionPlanValidationMDT_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, ActionPlanValidationMDT_Names::Extern_Type_Name);
  }
  ActionPlanValidationID_Type::serialize(accessor.getActionPlanValidationID(), node, ActionPlanValidationMDT_Names::ActionPlanValidationID_Name);
  ActionPlanID_Type::serialize(accessor.getPlanID(), node, ActionPlanValidationMDT_Names::PlanID_Name);
  ValidatorType::serialize(accessor.getValidator(), node, ActionPlanValidationMDT_Names::Validator_Name);
  PlanValidationStateEnum::serialize(accessor.getValidationState(), node, ActionPlanValidationMDT_Names::ValidationState_Name, false);
  if (accessor.hasCompletionStatus()) {
    CompletionStatusType::serialize(accessor.getCompletionStatus(), node, ActionPlanValidationMDT_Names::CompletionStatus_Name);
  }
  {
    const uci::type::ActionPlanValidationMDT::IncompleteItem& boundedList = accessor.getIncompleteItem();
    for (uci::type::ActionPlanValidationMDT::IncompleteItem::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      IncompleteProcessingType::serialize(boundedList.at(i), node, ActionPlanValidationMDT_Names::IncompleteItem_Name);
    }
  }
  {
    const uci::type::ActionPlanValidationMDT::InvalidAllocation& boundedList = accessor.getInvalidAllocation();
    for (uci::type::ActionPlanValidationMDT::InvalidAllocation::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      ActionAllocationInvalidType::serialize(boundedList.at(i), node, ActionPlanValidationMDT_Names::InvalidAllocation_Name);
    }
  }
  {
    const uci::type::ActionPlanValidationMDT::AllocationResult& boundedList = accessor.getAllocationResult();
    for (uci::type::ActionPlanValidationMDT::AllocationResult::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      ActionPlanningResultType::serialize(boundedList.at(i), node, ActionPlanValidationMDT_Names::AllocationResult_Name);
    }
  }
  {
    const uci::type::ActionPlanValidationMDT::ModifiedPlanID& boundedList = accessor.getModifiedPlanID();
    for (uci::type::ActionPlanValidationMDT::ModifiedPlanID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      ActionPlanID_Type::serialize(boundedList.at(i), node, ActionPlanValidationMDT_Names::ModifiedPlanID_Name);
    }
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

