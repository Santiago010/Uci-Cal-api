/** @file PulseDataMDT.cpp
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

#include "extxml_uci/type/PulseDataMDT.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/PulseDataID_Type.h"
#include "extxml_uci/type/PulseDataSourceType.h"
#include "extxml_uci/type/PulseType.h"
#include "extxml_uci/type/SignalNavDataType.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/PulseDataMDT.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace PulseDataMDT_Names {

constexpr const char* Extern_Type_Name{"PulseDataMDT"};
constexpr const char* PulseDataID_Name{"PulseDataID"};
constexpr const char* Source_Name{"Source"};
constexpr const char* NavData_Name{"NavData"};
constexpr const char* PhaseAndAmplitudeCalibrated_Name{"PhaseAndAmplitudeCalibrated"};
constexpr const char* Pulse_Name{"Pulse"};

} // namespace PulseDataMDT_Names

bool PulseDataMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::PulseDataMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PulseDataMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PulseDataMDT_Names::PulseDataID_Name) {
      PulseDataID_Type::deserialize(valueType.second, accessor.getPulseDataID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PulseDataMDT_Names::Source_Name) {
      PulseDataSourceType::deserialize(valueType.second, accessor.enableSource(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PulseDataMDT_Names::NavData_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PulseDataMDT::NavData& boundedList = accessor.getNavData();
        const uci::type::PulseDataMDT::NavData::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        SignalNavDataType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + PulseDataMDT_Names::PhaseAndAmplitudeCalibrated_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPhaseAndAmplitudeCalibrated(extxml_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + PulseDataMDT_Names::Pulse_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PulseDataMDT::Pulse& boundedList = accessor.getPulse();
        const uci::type::PulseDataMDT::Pulse::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        PulseType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  return true;
}

std::string PulseDataMDT::serialize(const uci::type::PulseDataMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? PulseDataMDT_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, PulseDataMDT_Names::Extern_Type_Name);
  }
  PulseDataID_Type::serialize(accessor.getPulseDataID(), node, PulseDataMDT_Names::PulseDataID_Name);
  if (accessor.hasSource()) {
    PulseDataSourceType::serialize(accessor.getSource(), node, PulseDataMDT_Names::Source_Name);
  }
  {
    const uci::type::PulseDataMDT::NavData& boundedList = accessor.getNavData();
    for (uci::type::PulseDataMDT::NavData::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      SignalNavDataType::serialize(boundedList.at(i), node, PulseDataMDT_Names::NavData_Name);
    }
  }
  if (accessor.hasPhaseAndAmplitudeCalibrated()) {
    extxml_uci::util::SerializationHelpers::serializeBoolean(accessor.getPhaseAndAmplitudeCalibrated(), node, PulseDataMDT_Names::PhaseAndAmplitudeCalibrated_Name);
  }
  {
    const uci::type::PulseDataMDT::Pulse& boundedList = accessor.getPulse();
    for (uci::type::PulseDataMDT::Pulse::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      PulseType::serialize(boundedList.at(i), node, PulseDataMDT_Names::Pulse_Name);
    }
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

