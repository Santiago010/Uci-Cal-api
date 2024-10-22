/** @file ActionCapabilityType.cpp
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

#include "extxml_uci/type/ActionCapabilityType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/ActionCapabilityOptionsType.h"
#include "extxml_uci/type/ActionMessageOutputsEnum.h"
#include "extxml_uci/type/ActionTypeEnum.h"
#include "extxml_uci/type/CapabilityTypeEnum.h"
#include "extxml_uci/type/CommandableCapabilityDeclarationType.h"
#include "extxml_uci/type/TaskTypeEnum.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/ActionCapabilityType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace ActionCapabilityType_Names {

constexpr const char* Extern_Type_Name{"ActionCapabilityType"};
constexpr const char* CapabilityType_Name{"CapabilityType"};
constexpr const char* AssociatedTaskType_Name{"AssociatedTaskType"};
constexpr const char* AssociatedCapabilityType_Name{"AssociatedCapabilityType"};
constexpr const char* CapabilityOptions_Name{"CapabilityOptions"};
constexpr const char* MessageOutput_Name{"MessageOutput"};

} // namespace ActionCapabilityType_Names

bool ActionCapabilityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ActionCapabilityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ActionCapabilityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ActionCapabilityType_Names::CapabilityType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getCapabilityType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ActionCapabilityType_Names::AssociatedTaskType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ActionCapabilityType::AssociatedTaskType& boundedList = accessor.getAssociatedTaskType();
        const uci::type::ActionCapabilityType::AssociatedTaskType::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ActionCapabilityType_Names::AssociatedCapabilityType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ActionCapabilityType::AssociatedCapabilityType& boundedList = accessor.getAssociatedCapabilityType();
        const uci::type::ActionCapabilityType::AssociatedCapabilityType::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ActionCapabilityType_Names::CapabilityOptions_Name) {
      ActionCapabilityOptionsType::deserialize(valueType.second, accessor.getCapabilityOptions(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ActionCapabilityType_Names::MessageOutput_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ActionCapabilityType::MessageOutput& boundedList = accessor.getMessageOutput();
        const uci::type::ActionCapabilityType::MessageOutput::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    }
  }
  CommandableCapabilityDeclarationType::deserialize(node, accessor, nodeName, nsPrefix);
  return true;
}

std::string ActionCapabilityType::serialize(const uci::type::ActionCapabilityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? ActionCapabilityType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, ActionCapabilityType_Names::Extern_Type_Name);
  }
  CommandableCapabilityDeclarationType::serialize(accessor, node, "", false, false, false);
  ActionTypeEnum::serialize(accessor.getCapabilityType(), node, ActionCapabilityType_Names::CapabilityType_Name, false);
  {
    const uci::type::ActionCapabilityType::AssociatedTaskType& boundedList = accessor.getAssociatedTaskType();
    for (uci::type::ActionCapabilityType::AssociatedTaskType::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      TaskTypeEnum::serialize(boundedList.at(i), node, ActionCapabilityType_Names::AssociatedTaskType_Name, false);
    }
  }
  {
    const uci::type::ActionCapabilityType::AssociatedCapabilityType& boundedList = accessor.getAssociatedCapabilityType();
    for (uci::type::ActionCapabilityType::AssociatedCapabilityType::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      CapabilityTypeEnum::serialize(boundedList.at(i), node, ActionCapabilityType_Names::AssociatedCapabilityType_Name, false);
    }
  }
  ActionCapabilityOptionsType::serialize(accessor.getCapabilityOptions(), node, ActionCapabilityType_Names::CapabilityOptions_Name);
  {
    const uci::type::ActionCapabilityType::MessageOutput& boundedList = accessor.getMessageOutput();
    for (uci::type::ActionCapabilityType::MessageOutput::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      ActionMessageOutputsEnum::serialize(boundedList.at(i), node, ActionCapabilityType_Names::MessageOutput_Name, false);
    }
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

