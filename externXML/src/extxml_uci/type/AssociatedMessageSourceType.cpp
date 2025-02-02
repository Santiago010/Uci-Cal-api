/** @file AssociatedMessageSourceType.cpp
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

#include "extxml_uci/type/AssociatedMessageSourceType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/CommandID_Type.h"
#include "extxml_uci/type/ResourceRequestID_AndOptionType.h"
#include "extxml_uci/type/SharedSourceEmitterPriorityBinDetailType.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/AssociatedMessageSourceType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace AssociatedMessageSourceType_Names {

constexpr const char* Extern_Type_Name{"AssociatedMessageSourceType"};
constexpr const char* SettingsCommandID_Name{"SettingsCommandID"};
constexpr const char* RF_ResouceRequestIDandOption_Name{"RF_ResouceRequestIDandOption"};
constexpr const char* ActiveScanScheduleProfileIndex_Name{"ActiveScanScheduleProfileIndex"};
constexpr const char* EmitterPriorityBinDetail_Name{"EmitterPriorityBinDetail"};

} // namespace AssociatedMessageSourceType_Names

bool AssociatedMessageSourceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::AssociatedMessageSourceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = AssociatedMessageSourceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + AssociatedMessageSourceType_Names::SettingsCommandID_Name) {
      CommandID_Type::deserialize(valueType.second, accessor.chooseSettingsCommandID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + AssociatedMessageSourceType_Names::RF_ResouceRequestIDandOption_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::AssociatedMessageSourceType::RF_ResouceRequestIDandOption& boundedList = accessor.chooseRF_ResouceRequestIDandOption();
        const uci::type::AssociatedMessageSourceType::RF_ResouceRequestIDandOption::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        ResourceRequestID_AndOptionType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + AssociatedMessageSourceType_Names::ActiveScanScheduleProfileIndex_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setActiveScanScheduleProfileIndex(extxml_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    } else if (valueType.first == nsPrefix + AssociatedMessageSourceType_Names::EmitterPriorityBinDetail_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::AssociatedMessageSourceType::EmitterPriorityBinDetail& boundedList = accessor.chooseEmitterPriorityBinDetail();
        const uci::type::AssociatedMessageSourceType::EmitterPriorityBinDetail::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        SharedSourceEmitterPriorityBinDetailType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  return true;
}

std::string AssociatedMessageSourceType::serialize(const uci::type::AssociatedMessageSourceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? AssociatedMessageSourceType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, AssociatedMessageSourceType_Names::Extern_Type_Name);
  }
  if (accessor.isSettingsCommandID()) {
    CommandID_Type::serialize(accessor.getSettingsCommandID(), node, AssociatedMessageSourceType_Names::SettingsCommandID_Name);
  } else if (accessor.isRF_ResouceRequestIDandOption()) {
    {
      const uci::type::AssociatedMessageSourceType::RF_ResouceRequestIDandOption& boundedList = accessor.getRF_ResouceRequestIDandOption();
      for (uci::type::AssociatedMessageSourceType::RF_ResouceRequestIDandOption::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        ResourceRequestID_AndOptionType::serialize(boundedList.at(i), node, AssociatedMessageSourceType_Names::RF_ResouceRequestIDandOption_Name);
      }
    }
  } else if (accessor.isActiveScanScheduleProfileIndex()) {
    extxml_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getActiveScanScheduleProfileIndex(), node, AssociatedMessageSourceType_Names::ActiveScanScheduleProfileIndex_Name);
  } else if (accessor.isEmitterPriorityBinDetail()) {
    {
      const uci::type::AssociatedMessageSourceType::EmitterPriorityBinDetail& boundedList = accessor.getEmitterPriorityBinDetail();
      for (uci::type::AssociatedMessageSourceType::EmitterPriorityBinDetail::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        SharedSourceEmitterPriorityBinDetailType::serialize(boundedList.at(i), node, AssociatedMessageSourceType_Names::EmitterPriorityBinDetail_Name);
      }
    }
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

