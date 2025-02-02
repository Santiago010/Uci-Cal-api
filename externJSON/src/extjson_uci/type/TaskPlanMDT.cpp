/** @file TaskPlanMDT.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:23 PM
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

#include "extjson_uci/type/TaskPlanMDT.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/TaskPlanCommandID_ChoiceType.h"
#include "extjson_uci/type/TaskPlanID_Type.h"
#include "extjson_uci/type/TaskPlanInputsType.h"
#include "extjson_uci/type/TaskPlanType.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/TaskPlanMDT.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace TaskPlanMDT_Names {

constexpr const char* Extern_Type_Name{"TaskPlanMDT"};
constexpr const char* TaskPlanID_Name{"TaskPlanID"};
constexpr const char* PlanCommandID_Name{"PlanCommandID"};
constexpr const char* Plan_Name{"Plan"};
constexpr const char* ForPlanningUseOnly_Name{"ForPlanningUseOnly"};
constexpr const char* PlanInputs_Name{"PlanInputs"};

} // namespace TaskPlanMDT_Names

bool TaskPlanMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::TaskPlanMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = TaskPlanMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + TaskPlanMDT_Names::TaskPlanID_Name) {
      TaskPlanID_Type::deserialize(valueType.second, accessor.getTaskPlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + TaskPlanMDT_Names::PlanCommandID_Name) {
      TaskPlanCommandID_ChoiceType::deserialize(valueType.second, accessor.enablePlanCommandID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + TaskPlanMDT_Names::Plan_Name) {
      TaskPlanType::deserialize(valueType.second, accessor.getPlan(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + TaskPlanMDT_Names::ForPlanningUseOnly_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setForPlanningUseOnly(extjson_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + TaskPlanMDT_Names::PlanInputs_Name) {
      TaskPlanInputsType::deserialize(valueType.second, accessor.enablePlanInputs(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string TaskPlanMDT::serialize(const uci::type::TaskPlanMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? TaskPlanMDT_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, TaskPlanMDT_Names::Extern_Type_Name);
  }
  TaskPlanID_Type::serialize(accessor.getTaskPlanID(), node, TaskPlanMDT_Names::TaskPlanID_Name);
  if (accessor.hasPlanCommandID()) {
    TaskPlanCommandID_ChoiceType::serialize(accessor.getPlanCommandID(), node, TaskPlanMDT_Names::PlanCommandID_Name);
  }
  TaskPlanType::serialize(accessor.getPlan(), node, TaskPlanMDT_Names::Plan_Name);
  extjson_uci::util::SerializationHelpers::serializeBoolean(accessor.getForPlanningUseOnly(), node, TaskPlanMDT_Names::ForPlanningUseOnly_Name);
  if (accessor.hasPlanInputs()) {
    TaskPlanInputsType::serialize(accessor.getPlanInputs(), node, TaskPlanMDT_Names::PlanInputs_Name);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

