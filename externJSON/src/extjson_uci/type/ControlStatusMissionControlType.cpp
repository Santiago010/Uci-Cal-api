/** @file ControlStatusMissionControlType.cpp
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

#include "extjson_uci/type/ControlStatusMissionControlType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/DirectControlInterfacesType.h"
#include "extjson_uci/type/PlannedControlInterfacesType.h"
#include "extjson_uci/type/SystemID_Type.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/ControlStatusMissionControlType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace ControlStatusMissionControlType_Names {

constexpr const char* Extern_Type_Name{"ControlStatusMissionControlType"};
constexpr const char* ControllerSystemID_Name{"ControllerSystemID"};
constexpr const char* InMission_Name{"InMission"};
constexpr const char* PlannedControlInterface_Name{"PlannedControlInterface"};
constexpr const char* DirectControlInterface_Name{"DirectControlInterface"};
constexpr const char* VoiceCallSign_Name{"VoiceCallSign"};

} // namespace ControlStatusMissionControlType_Names

bool ControlStatusMissionControlType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ControlStatusMissionControlType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ControlStatusMissionControlType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + ControlStatusMissionControlType_Names::ControllerSystemID_Name) {
      SystemID_Type::deserialize(valueType.second, accessor.getControllerSystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ControlStatusMissionControlType_Names::InMission_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setInMission(extjson_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + ControlStatusMissionControlType_Names::PlannedControlInterface_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ControlStatusMissionControlType::PlannedControlInterface& boundedList = accessor.getPlannedControlInterface();
        const uci::type::ControlStatusMissionControlType::PlannedControlInterface::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        PlannedControlInterfacesType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ControlStatusMissionControlType_Names::DirectControlInterface_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ControlStatusMissionControlType::DirectControlInterface& boundedList = accessor.getDirectControlInterface();
        const uci::type::ControlStatusMissionControlType::DirectControlInterface::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        DirectControlInterfacesType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ControlStatusMissionControlType_Names::VoiceCallSign_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setVoiceCallSign(*value);
      }
    }
  }
  return true;
}

std::string ControlStatusMissionControlType::serialize(const uci::type::ControlStatusMissionControlType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? ControlStatusMissionControlType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, ControlStatusMissionControlType_Names::Extern_Type_Name);
  }
  SystemID_Type::serialize(accessor.getControllerSystemID(), node, ControlStatusMissionControlType_Names::ControllerSystemID_Name);
  extjson_uci::util::SerializationHelpers::serializeBoolean(accessor.getInMission(), node, ControlStatusMissionControlType_Names::InMission_Name);
  {
    const uci::type::ControlStatusMissionControlType::PlannedControlInterface& boundedList = accessor.getPlannedControlInterface();
    for (uci::type::ControlStatusMissionControlType::PlannedControlInterface::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      PlannedControlInterfacesType::serialize(boundedList.at(i), node, ControlStatusMissionControlType_Names::PlannedControlInterface_Name);
    }
  }
  {
    const uci::type::ControlStatusMissionControlType::DirectControlInterface& boundedList = accessor.getDirectControlInterface();
    for (uci::type::ControlStatusMissionControlType::DirectControlInterface::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      DirectControlInterfacesType::serialize(boundedList.at(i), node, ControlStatusMissionControlType_Names::DirectControlInterface_Name);
    }
  }
  if (accessor.hasVoiceCallSign()) {
    extjson_uci::util::SerializationHelpers::serializeString(accessor.getVoiceCallSign(), node, ControlStatusMissionControlType_Names::VoiceCallSign_Name);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

