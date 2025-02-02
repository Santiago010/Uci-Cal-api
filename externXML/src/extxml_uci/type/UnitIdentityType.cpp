/** @file UnitIdentityType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:19 PM
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

#include "extxml_uci/type/UnitIdentityType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/OrderOfBattleEnum.h"
#include "extxml_uci/type/UnitID_Type.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/UnitIdentityType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace UnitIdentityType_Names {

constexpr const char* Extern_Type_Name{"UnitIdentityType"};
constexpr const char* UnitUUID_Name{"UnitUUID"};
constexpr const char* Identifier_Name{"Identifier"};
constexpr const char* Name_Name{"Name"};
constexpr const char* SurrogateKey_Name{"SurrogateKey"};
constexpr const char* OB_Type_Name{"OB_Type"};
constexpr const char* SymbolCode_Name{"SymbolCode"};

} // namespace UnitIdentityType_Names

bool UnitIdentityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::UnitIdentityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = UnitIdentityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + UnitIdentityType_Names::UnitUUID_Name) {
      UnitID_Type::deserialize(valueType.second, accessor.getUnitUUID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + UnitIdentityType_Names::Identifier_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setIdentifier(*value);
      }
    } else if (valueType.first == nsPrefix + UnitIdentityType_Names::Name_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setName(*value);
      }
    } else if (valueType.first == nsPrefix + UnitIdentityType_Names::SurrogateKey_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSurrogateKey(*value);
      }
    } else if (valueType.first == nsPrefix + UnitIdentityType_Names::OB_Type_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::UnitIdentityType::OB_Type& boundedList = accessor.getOB_Type();
        const uci::type::UnitIdentityType::OB_Type::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + UnitIdentityType_Names::SymbolCode_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSymbolCode(*value);
      }
    }
  }
  return true;
}

std::string UnitIdentityType::serialize(const uci::type::UnitIdentityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? UnitIdentityType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, UnitIdentityType_Names::Extern_Type_Name);
  }
  UnitID_Type::serialize(accessor.getUnitUUID(), node, UnitIdentityType_Names::UnitUUID_Name);
  extxml_uci::util::SerializationHelpers::serializeString(accessor.getIdentifier(), node, UnitIdentityType_Names::Identifier_Name);
  extxml_uci::util::SerializationHelpers::serializeString(accessor.getName(), node, UnitIdentityType_Names::Name_Name);
  extxml_uci::util::SerializationHelpers::serializeString(accessor.getSurrogateKey(), node, UnitIdentityType_Names::SurrogateKey_Name);
  {
    const uci::type::UnitIdentityType::OB_Type& boundedList = accessor.getOB_Type();
    for (uci::type::UnitIdentityType::OB_Type::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      OrderOfBattleEnum::serialize(boundedList.at(i), node, UnitIdentityType_Names::OB_Type_Name, false);
    }
  }
  if (accessor.hasSymbolCode()) {
    extxml_uci::util::SerializationHelpers::serializeString(accessor.getSymbolCode(), node, UnitIdentityType_Names::SymbolCode_Name);
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

