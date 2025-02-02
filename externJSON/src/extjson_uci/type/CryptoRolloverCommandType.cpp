/** @file CryptoRolloverCommandType.cpp
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

#include "extjson_uci/type/CryptoRolloverCommandType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/CryptoLocationType.h"
#include "extjson_uci/type/CryptoRolloverActionEnum.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/CryptoRolloverCommandType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace CryptoRolloverCommandType_Names {

constexpr const char* Extern_Type_Name{"CryptoRolloverCommandType"};
constexpr const char* CryptoRolloverTarget_Name{"CryptoRolloverTarget"};
constexpr const char* CryptoRolloverAction_Name{"CryptoRolloverAction"};
constexpr const char* RolloverScheduleTime_Name{"RolloverScheduleTime"};
constexpr const char* ZeroizePreviousSlot_Name{"ZeroizePreviousSlot"};

} // namespace CryptoRolloverCommandType_Names

bool CryptoRolloverCommandType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CryptoRolloverCommandType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CryptoRolloverCommandType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + CryptoRolloverCommandType_Names::CryptoRolloverTarget_Name) {
      CryptoLocationType::deserialize(valueType.second, accessor.getCryptoRolloverTarget(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CryptoRolloverCommandType_Names::CryptoRolloverAction_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getCryptoRolloverAction().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + CryptoRolloverCommandType_Names::RolloverScheduleTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRolloverScheduleTime(extjson_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + CryptoRolloverCommandType_Names::ZeroizePreviousSlot_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setZeroizePreviousSlot(extjson_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    }
  }
  return true;
}

std::string CryptoRolloverCommandType::serialize(const uci::type::CryptoRolloverCommandType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? CryptoRolloverCommandType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, CryptoRolloverCommandType_Names::Extern_Type_Name);
  }
  CryptoLocationType::serialize(accessor.getCryptoRolloverTarget(), node, CryptoRolloverCommandType_Names::CryptoRolloverTarget_Name);
  CryptoRolloverActionEnum::serialize(accessor.getCryptoRolloverAction(), node, CryptoRolloverCommandType_Names::CryptoRolloverAction_Name, false);
  if (accessor.hasRolloverScheduleTime()) {
    extjson_uci::util::SerializationHelpers::serializeDateTime(accessor.getRolloverScheduleTime(), node, CryptoRolloverCommandType_Names::RolloverScheduleTime_Name);
  }
  if (accessor.hasZeroizePreviousSlot()) {
    extjson_uci::util::SerializationHelpers::serializeBoolean(accessor.getZeroizePreviousSlot(), node, CryptoRolloverCommandType_Names::ZeroizePreviousSlot_Name);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

