/** @file RefuelActivityDrogueCommandType.cpp
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

#include "extxml_uci/type/RefuelActivityDrogueCommandType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/FuelFlowModeEnum.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/RefuelActivityDrogueCommandType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace RefuelActivityDrogueCommandType_Names {

constexpr const char* Extern_Type_Name{"RefuelActivityDrogueCommandType"};
constexpr const char* ScheduledFuelToBeDelivered_Name{"ScheduledFuelToBeDelivered"};
constexpr const char* FuelTransferToReceiver_Name{"FuelTransferToReceiver"};

} // namespace RefuelActivityDrogueCommandType_Names

bool RefuelActivityDrogueCommandType::deserialize(const boost::property_tree::ptree& propTree, uci::type::RefuelActivityDrogueCommandType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RefuelActivityDrogueCommandType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RefuelActivityDrogueCommandType_Names::ScheduledFuelToBeDelivered_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setScheduledFuelToBeDelivered(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + RefuelActivityDrogueCommandType_Names::FuelTransferToReceiver_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableFuelTransferToReceiver().setValueFromName(*value);
      }
    }
  }
  return true;
}

std::string RefuelActivityDrogueCommandType::serialize(const uci::type::RefuelActivityDrogueCommandType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? RefuelActivityDrogueCommandType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, RefuelActivityDrogueCommandType_Names::Extern_Type_Name);
  }
  if (accessor.hasScheduledFuelToBeDelivered()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getScheduledFuelToBeDelivered(), node, RefuelActivityDrogueCommandType_Names::ScheduledFuelToBeDelivered_Name);
  }
  if (accessor.hasFuelTransferToReceiver()) {
    FuelFlowModeEnum::serialize(accessor.getFuelTransferToReceiver(), node, RefuelActivityDrogueCommandType_Names::FuelTransferToReceiver_Name, false);
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

