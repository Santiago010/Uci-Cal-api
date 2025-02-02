/** @file EntityCharacteristicType.cpp
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

#include "extjson_uci/type/EntityCharacteristicType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/BehaviorType.h"
#include "extjson_uci/type/IdentityComparisonType.h"
#include "extjson_uci/type/PrioritizationListValueType.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/EntityCharacteristicType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace EntityCharacteristicType_Names {

constexpr const char* Extern_Type_Name{"EntityCharacteristicType"};
constexpr const char* Identity_Name{"Identity"};
constexpr const char* IdentityStaleness_Name{"IdentityStaleness"};
constexpr const char* PositionUncertainty_Name{"PositionUncertainty"};
constexpr const char* PositionStaleness_Name{"PositionStaleness"};
constexpr const char* PrioritizationList_Name{"PrioritizationList"};
constexpr const char* Behavior_Name{"Behavior"};

} // namespace EntityCharacteristicType_Names

bool EntityCharacteristicType::deserialize(const boost::property_tree::ptree& propTree, uci::type::EntityCharacteristicType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EntityCharacteristicType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + EntityCharacteristicType_Names::Identity_Name) {
      IdentityComparisonType::deserialize(valueType.second, accessor.chooseIdentity(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityCharacteristicType_Names::IdentityStaleness_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setIdentityStaleness(extjson_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    } else if (valueType.first == nsPrefix + EntityCharacteristicType_Names::PositionUncertainty_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPositionUncertainty(extjson_uci::util::SerializationHelpers::deserializeFloat(*value));
      }
    } else if (valueType.first == nsPrefix + EntityCharacteristicType_Names::PositionStaleness_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPositionStaleness(extjson_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    } else if (valueType.first == nsPrefix + EntityCharacteristicType_Names::PrioritizationList_Name) {
      PrioritizationListValueType::deserialize(valueType.second, accessor.choosePrioritizationList(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityCharacteristicType_Names::Behavior_Name) {
      BehaviorType::deserialize(valueType.second, accessor.chooseBehavior(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string EntityCharacteristicType::serialize(const uci::type::EntityCharacteristicType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? EntityCharacteristicType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, EntityCharacteristicType_Names::Extern_Type_Name);
  }
  if (accessor.isIdentity()) {
    IdentityComparisonType::serialize(accessor.getIdentity(), node, EntityCharacteristicType_Names::Identity_Name);
  } else if (accessor.isIdentityStaleness()) {
    extjson_uci::util::SerializationHelpers::serializeDuration(accessor.getIdentityStaleness(), node, EntityCharacteristicType_Names::IdentityStaleness_Name);
  } else if (accessor.isPositionUncertainty()) {
    extjson_uci::util::SerializationHelpers::serializeFloat(accessor.getPositionUncertainty(), node, EntityCharacteristicType_Names::PositionUncertainty_Name);
  } else if (accessor.isPositionStaleness()) {
    extjson_uci::util::SerializationHelpers::serializeDuration(accessor.getPositionStaleness(), node, EntityCharacteristicType_Names::PositionStaleness_Name);
  } else if (accessor.isPrioritizationList()) {
    PrioritizationListValueType::serialize(accessor.getPrioritizationList(), node, EntityCharacteristicType_Names::PrioritizationList_Name);
  } else if (accessor.isBehavior()) {
    BehaviorType::serialize(accessor.getBehavior(), node, EntityCharacteristicType_Names::Behavior_Name);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

