/** @file PlanCommandStatusType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:23 PM
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

#include "extjson_uci/type/PlanCommandStatusType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/CannotComplyType.h"
#include "extjson_uci/type/CommandProcessingStateEnum.h"
#include "extjson_uci/type/CompletionStatusType.h"
#include "extjson_uci/type/IncompleteProcessingType.h"
#include "extjson_uci/type/ProcessingStatusEnum.h"
#include "extjson_uci/util/DerivedTypesDeserializer.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/PlanCommandStatusType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace PlanCommandStatusType_Names {

constexpr const char* Extern_Type_Name{"PlanCommandStatusType"};
constexpr const char* CommandProcessingState_Name{"CommandProcessingState"};
constexpr const char* CommandProcessingStateReason_Name{"CommandProcessingStateReason"};
constexpr const char* CommandStatus_Name{"CommandStatus"};
constexpr const char* CompletionStatus_Name{"CompletionStatus"};
constexpr const char* IncompleteItem_Name{"IncompleteItem"};

} // namespace PlanCommandStatusType_Names

bool PlanCommandStatusType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PlanCommandStatusType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PlanCommandStatusType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + PlanCommandStatusType_Names::CommandProcessingState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getCommandProcessingState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + PlanCommandStatusType_Names::CommandProcessingStateReason_Name) {
      extjson_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableCommandProcessingStateReason(extjson_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PlanCommandStatusType_Names::CommandStatus_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getCommandStatus().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + PlanCommandStatusType_Names::CompletionStatus_Name) {
      CompletionStatusType::deserialize(valueType.second, accessor.enableCompletionStatus(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PlanCommandStatusType_Names::IncompleteItem_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PlanCommandStatusType::IncompleteItem& boundedList = accessor.getIncompleteItem();
        const uci::type::PlanCommandStatusType::IncompleteItem::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        IncompleteProcessingType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  return true;
}

std::string PlanCommandStatusType::serialize(const uci::type::PlanCommandStatusType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? PlanCommandStatusType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, PlanCommandStatusType_Names::Extern_Type_Name);
  }
  CommandProcessingStateEnum::serialize(accessor.getCommandProcessingState(), node, PlanCommandStatusType_Names::CommandProcessingState_Name, false);
  if (accessor.hasCommandProcessingStateReason()) {
    CannotComplyType::serialize(accessor.getCommandProcessingStateReason(), node, PlanCommandStatusType_Names::CommandProcessingStateReason_Name);
  }
  ProcessingStatusEnum::serialize(accessor.getCommandStatus(), node, PlanCommandStatusType_Names::CommandStatus_Name, false);
  if (accessor.hasCompletionStatus()) {
    CompletionStatusType::serialize(accessor.getCompletionStatus(), node, PlanCommandStatusType_Names::CompletionStatus_Name);
  }
  {
    const uci::type::PlanCommandStatusType::IncompleteItem& boundedList = accessor.getIncompleteItem();
    for (uci::type::PlanCommandStatusType::IncompleteItem::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      IncompleteProcessingType::serialize(boundedList.at(i), node, PlanCommandStatusType_Names::IncompleteItem_Name);
    }
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

