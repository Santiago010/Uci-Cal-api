/** @file EffectCapabilityType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:22 PM
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

#include "extjson_uci/type/EffectCapabilityType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/ActionTypeEnum.h"
#include "extjson_uci/type/CapabilityTypeEnum.h"
#include "extjson_uci/type/CommandableCapabilityDeclarationType.h"
#include "extjson_uci/type/EffectCapabilityOptionsType.h"
#include "extjson_uci/type/EffectMessageOutputsEnum.h"
#include "extjson_uci/type/EffectTypeEnum.h"
#include "extjson_uci/type/TaskTypeEnum.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/EffectCapabilityType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace EffectCapabilityType_Names {

constexpr const char* Extern_Type_Name{"EffectCapabilityType"};
constexpr const char* CapabilityType_Name{"CapabilityType"};
constexpr const char* AssociatedAction_Name{"AssociatedAction"};
constexpr const char* AssociatedTaskType_Name{"AssociatedTaskType"};
constexpr const char* AssociatedCapabilityType_Name{"AssociatedCapabilityType"};
constexpr const char* CapabilityOptions_Name{"CapabilityOptions"};
constexpr const char* MessageOutput_Name{"MessageOutput"};

} // namespace EffectCapabilityType_Names

bool EffectCapabilityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::EffectCapabilityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EffectCapabilityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + EffectCapabilityType_Names::CapabilityType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getCapabilityType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + EffectCapabilityType_Names::AssociatedAction_Name) {
      ActionTypeEnum::deserializeList(valueType.second, accessor.getAssociatedAction());
    } else if (valueType.first == nsPrefix + EffectCapabilityType_Names::AssociatedTaskType_Name) {
      TaskTypeEnum::deserializeList(valueType.second, accessor.getAssociatedTaskType());
    } else if (valueType.first == nsPrefix + EffectCapabilityType_Names::AssociatedCapabilityType_Name) {
      CapabilityTypeEnum::deserializeList(valueType.second, accessor.getAssociatedCapabilityType());
    } else if (valueType.first == nsPrefix + EffectCapabilityType_Names::CapabilityOptions_Name) {
      EffectCapabilityOptionsType::deserialize(valueType.second, accessor.getCapabilityOptions(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EffectCapabilityType_Names::MessageOutput_Name) {
      EffectMessageOutputsEnum::deserializeList(valueType.second, accessor.getMessageOutput());
    }
  }
  CommandableCapabilityDeclarationType::deserialize(node, accessor, nodeName, nsPrefix);
  return true;
}

std::string EffectCapabilityType::serialize(const uci::type::EffectCapabilityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? EffectCapabilityType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, EffectCapabilityType_Names::Extern_Type_Name);
  }
  CommandableCapabilityDeclarationType::serialize(accessor, node, "", false, false, false);
  EffectTypeEnum::serialize(accessor.getCapabilityType(), node, EffectCapabilityType_Names::CapabilityType_Name, false);
  {
    ActionTypeEnum::serializeList(accessor.getAssociatedAction(), node, EffectCapabilityType_Names::AssociatedAction_Name);
  }
  {
    TaskTypeEnum::serializeList(accessor.getAssociatedTaskType(), node, EffectCapabilityType_Names::AssociatedTaskType_Name);
  }
  {
    CapabilityTypeEnum::serializeList(accessor.getAssociatedCapabilityType(), node, EffectCapabilityType_Names::AssociatedCapabilityType_Name);
  }
  EffectCapabilityOptionsType::serialize(accessor.getCapabilityOptions(), node, EffectCapabilityType_Names::CapabilityOptions_Name);
  {
    EffectMessageOutputsEnum::serializeList(accessor.getMessageOutput(), node, EffectCapabilityType_Names::MessageOutput_Name);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

