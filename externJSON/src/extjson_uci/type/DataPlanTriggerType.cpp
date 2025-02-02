/** @file DataPlanTriggerType.cpp
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

#include "extjson_uci/type/DataPlanTriggerType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/CommTerminalPlanID_Type.h"
#include "extjson_uci/type/DateTimeRangeType.h"
#include "extjson_uci/type/MissionID_Type.h"
#include "extjson_uci/type/OpVolumeID_Type.h"
#include "extjson_uci/type/OpZoneID_Type.h"
#include "extjson_uci/type/PlansReferenceType.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/DataPlanTriggerType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace DataPlanTriggerType_Names {

constexpr const char* Extern_Type_Name{"DataPlanTriggerType"};
constexpr const char* MissionID_Name{"MissionID"};
constexpr const char* PlanIdentifier_Name{"PlanIdentifier"};
constexpr const char* CommTerminalPlanID_Name{"CommTerminalPlanID"};
constexpr const char* EffectiveTimeSpans_Name{"EffectiveTimeSpans"};
constexpr const char* OpZoneID_Name{"OpZoneID"};
constexpr const char* OpVolumeID_Name{"OpVolumeID"};

} // namespace DataPlanTriggerType_Names

bool DataPlanTriggerType::deserialize(const boost::property_tree::ptree& propTree, uci::type::DataPlanTriggerType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = DataPlanTriggerType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + DataPlanTriggerType_Names::MissionID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::DataPlanTriggerType::MissionID& boundedList = accessor.getMissionID();
        const uci::type::DataPlanTriggerType::MissionID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        MissionID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + DataPlanTriggerType_Names::PlanIdentifier_Name) {
      PlansReferenceType::deserialize(valueType.second, accessor.enablePlanIdentifier(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DataPlanTriggerType_Names::CommTerminalPlanID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::DataPlanTriggerType::CommTerminalPlanID& boundedList = accessor.getCommTerminalPlanID();
        const uci::type::DataPlanTriggerType::CommTerminalPlanID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        CommTerminalPlanID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + DataPlanTriggerType_Names::EffectiveTimeSpans_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::DataPlanTriggerType::EffectiveTimeSpans& boundedList = accessor.getEffectiveTimeSpans();
        const uci::type::DataPlanTriggerType::EffectiveTimeSpans::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        DateTimeRangeType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + DataPlanTriggerType_Names::OpZoneID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::DataPlanTriggerType::OpZoneID& boundedList = accessor.getOpZoneID();
        const uci::type::DataPlanTriggerType::OpZoneID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        OpZoneID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + DataPlanTriggerType_Names::OpVolumeID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::DataPlanTriggerType::OpVolumeID& boundedList = accessor.getOpVolumeID();
        const uci::type::DataPlanTriggerType::OpVolumeID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        OpVolumeID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  return true;
}

std::string DataPlanTriggerType::serialize(const uci::type::DataPlanTriggerType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? DataPlanTriggerType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, DataPlanTriggerType_Names::Extern_Type_Name);
  }
  {
    const uci::type::DataPlanTriggerType::MissionID& boundedList = accessor.getMissionID();
    for (uci::type::DataPlanTriggerType::MissionID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      MissionID_Type::serialize(boundedList.at(i), node, DataPlanTriggerType_Names::MissionID_Name);
    }
  }
  if (accessor.hasPlanIdentifier()) {
    PlansReferenceType::serialize(accessor.getPlanIdentifier(), node, DataPlanTriggerType_Names::PlanIdentifier_Name);
  }
  {
    const uci::type::DataPlanTriggerType::CommTerminalPlanID& boundedList = accessor.getCommTerminalPlanID();
    for (uci::type::DataPlanTriggerType::CommTerminalPlanID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      CommTerminalPlanID_Type::serialize(boundedList.at(i), node, DataPlanTriggerType_Names::CommTerminalPlanID_Name);
    }
  }
  {
    const uci::type::DataPlanTriggerType::EffectiveTimeSpans& boundedList = accessor.getEffectiveTimeSpans();
    for (uci::type::DataPlanTriggerType::EffectiveTimeSpans::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      DateTimeRangeType::serialize(boundedList.at(i), node, DataPlanTriggerType_Names::EffectiveTimeSpans_Name);
    }
  }
  {
    const uci::type::DataPlanTriggerType::OpZoneID& boundedList = accessor.getOpZoneID();
    for (uci::type::DataPlanTriggerType::OpZoneID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      OpZoneID_Type::serialize(boundedList.at(i), node, DataPlanTriggerType_Names::OpZoneID_Name);
    }
  }
  {
    const uci::type::DataPlanTriggerType::OpVolumeID& boundedList = accessor.getOpVolumeID();
    for (uci::type::DataPlanTriggerType::OpVolumeID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      OpVolumeID_Type::serialize(boundedList.at(i), node, DataPlanTriggerType_Names::OpVolumeID_Name);
    }
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

