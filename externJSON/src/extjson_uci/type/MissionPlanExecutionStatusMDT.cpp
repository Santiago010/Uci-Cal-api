/** @file MissionPlanExecutionStatusMDT.cpp
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

#include "extjson_uci/type/MissionPlanExecutionStatusMDT.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/MissionPlanExecutionStateType.h"
#include "extjson_uci/type/SystemID_Type.h"
#include "extjson_uci/type/SystemSourceEnum.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/MissionPlanExecutionStatusMDT.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace MissionPlanExecutionStatusMDT_Names {

constexpr const char* Extern_Type_Name{"MissionPlanExecutionStatusMDT"};
constexpr const char* SystemID_Name{"SystemID"};
constexpr const char* Source_Name{"Source"};
constexpr const char* PlanExecutionStatus_Name{"PlanExecutionStatus"};

} // namespace MissionPlanExecutionStatusMDT_Names

bool MissionPlanExecutionStatusMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::MissionPlanExecutionStatusMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = MissionPlanExecutionStatusMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + MissionPlanExecutionStatusMDT_Names::SystemID_Name) {
      SystemID_Type::deserialize(valueType.second, accessor.getSystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MissionPlanExecutionStatusMDT_Names::Source_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getSource().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + MissionPlanExecutionStatusMDT_Names::PlanExecutionStatus_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::MissionPlanExecutionStatusMDT::PlanExecutionStatus& boundedList = accessor.getPlanExecutionStatus();
        const uci::type::MissionPlanExecutionStatusMDT::PlanExecutionStatus::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        MissionPlanExecutionStateType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  return true;
}

std::string MissionPlanExecutionStatusMDT::serialize(const uci::type::MissionPlanExecutionStatusMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? MissionPlanExecutionStatusMDT_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, MissionPlanExecutionStatusMDT_Names::Extern_Type_Name);
  }
  SystemID_Type::serialize(accessor.getSystemID(), node, MissionPlanExecutionStatusMDT_Names::SystemID_Name);
  SystemSourceEnum::serialize(accessor.getSource(), node, MissionPlanExecutionStatusMDT_Names::Source_Name, false);
  {
    const uci::type::MissionPlanExecutionStatusMDT::PlanExecutionStatus& boundedList = accessor.getPlanExecutionStatus();
    for (uci::type::MissionPlanExecutionStatusMDT::PlanExecutionStatus::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      MissionPlanExecutionStateType::serialize(boundedList.at(i), node, MissionPlanExecutionStatusMDT_Names::PlanExecutionStatus_Name);
    }
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

