/** @file EntityComparativeType.cpp
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

#include "extjson_uci/type/EntityComparativeType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/EntityCharacteristicType.h"
#include "extjson_uci/type/EqualityExpressionEnum.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/EntityComparativeType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace EntityComparativeType_Names {

constexpr const char* Extern_Type_Name{"EntityComparativeType"};
constexpr const char* Characteristic_Name{"Characteristic"};
constexpr const char* Comparator_Name{"Comparator"};

} // namespace EntityComparativeType_Names

bool EntityComparativeType::deserialize(const boost::property_tree::ptree& propTree, uci::type::EntityComparativeType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EntityComparativeType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + EntityComparativeType_Names::Characteristic_Name) {
      EntityCharacteristicType::deserialize(valueType.second, accessor.getCharacteristic(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityComparativeType_Names::Comparator_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getComparator().setValueFromName(*value);
      }
    }
  }
  return true;
}

std::string EntityComparativeType::serialize(const uci::type::EntityComparativeType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? EntityComparativeType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, EntityComparativeType_Names::Extern_Type_Name);
  }
  EntityCharacteristicType::serialize(accessor.getCharacteristic(), node, EntityComparativeType_Names::Characteristic_Name);
  EqualityExpressionEnum::serialize(accessor.getComparator(), node, EntityComparativeType_Names::Comparator_Name, false);
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

