/** @file CryptoSlotType.cpp
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

#include "extxml_uci/type/CryptoSlotType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/CryptoKeyStatusEnum.h"
#include "extxml_uci/type/CryptoRolloverStatusType.h"
#include "extxml_uci/type/ForeignKeyType.h"
#include "extxml_uci/util/DerivedTypesDeserializer.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/CryptoSlotType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace CryptoSlotType_Names {

constexpr const char* Extern_Type_Name{"CryptoSlotType"};
constexpr const char* SlotIdentifier_Name{"SlotIdentifier"};
constexpr const char* SlotState_Name{"SlotState"};
constexpr const char* RolloverStatus_Name{"RolloverStatus"};
constexpr const char* Key_Name{"Key"};
constexpr const char* NextSlotIdentifier_Name{"NextSlotIdentifier"};

} // namespace CryptoSlotType_Names

bool CryptoSlotType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CryptoSlotType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CryptoSlotType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CryptoSlotType_Names::SlotIdentifier_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSlotIdentifier(*value);
      }
    } else if (valueType.first == nsPrefix + CryptoSlotType_Names::SlotState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getSlotState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + CryptoSlotType_Names::RolloverStatus_Name) {
      CryptoRolloverStatusType::deserialize(valueType.second, accessor.enableRolloverStatus(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CryptoSlotType_Names::Key_Name) {
      extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableKey(extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CryptoSlotType_Names::NextSlotIdentifier_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setNextSlotIdentifier(*value);
      }
    }
  }
  return true;
}

std::string CryptoSlotType::serialize(const uci::type::CryptoSlotType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? CryptoSlotType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, CryptoSlotType_Names::Extern_Type_Name);
  }
  extxml_uci::util::SerializationHelpers::serializeString(accessor.getSlotIdentifier(), node, CryptoSlotType_Names::SlotIdentifier_Name);
  CryptoKeyStatusEnum::serialize(accessor.getSlotState(), node, CryptoSlotType_Names::SlotState_Name, false);
  if (accessor.hasRolloverStatus()) {
    CryptoRolloverStatusType::serialize(accessor.getRolloverStatus(), node, CryptoSlotType_Names::RolloverStatus_Name);
  }
  if (accessor.hasKey()) {
    ForeignKeyType::serialize(accessor.getKey(), node, CryptoSlotType_Names::Key_Name);
  }
  if (accessor.hasNextSlotIdentifier()) {
    extxml_uci::util::SerializationHelpers::serializeString(accessor.getNextSlotIdentifier(), node, CryptoSlotType_Names::NextSlotIdentifier_Name);
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

