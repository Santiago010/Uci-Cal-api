/** @file TaskMDT.cpp
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

#include "extjson_uci/type/TaskMDT.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/RequirementConstraintsType.h"
#include "extjson_uci/type/RequirementGuidanceType.h"
#include "extjson_uci/type/RequirementMetadataType.h"
#include "extjson_uci/type/TaskID_Type.h"
#include "extjson_uci/type/TaskType.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/TaskMDT.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace TaskMDT_Names {

constexpr const char* Extern_Type_Name{"TaskMDT"};
constexpr const char* TaskID_Name{"TaskID"};
constexpr const char* TaskType_Name{"TaskType"};
constexpr const char* TaskConstraints_Name{"TaskConstraints"};
constexpr const char* TaskGuidance_Name{"TaskGuidance"};
constexpr const char* Metadata_Name{"Metadata"};

} // namespace TaskMDT_Names

bool TaskMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::TaskMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = TaskMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + TaskMDT_Names::TaskID_Name) {
      TaskID_Type::deserialize(valueType.second, accessor.getTaskID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + TaskMDT_Names::TaskType_Name) {
      TaskType::deserialize(valueType.second, accessor.getTaskType(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + TaskMDT_Names::TaskConstraints_Name) {
      RequirementConstraintsType::deserialize(valueType.second, accessor.enableTaskConstraints(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + TaskMDT_Names::TaskGuidance_Name) {
      RequirementGuidanceType::deserialize(valueType.second, accessor.enableTaskGuidance(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + TaskMDT_Names::Metadata_Name) {
      RequirementMetadataType::deserialize(valueType.second, accessor.enableMetadata(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string TaskMDT::serialize(const uci::type::TaskMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? TaskMDT_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, TaskMDT_Names::Extern_Type_Name);
  }
  TaskID_Type::serialize(accessor.getTaskID(), node, TaskMDT_Names::TaskID_Name);
  TaskType::serialize(accessor.getTaskType(), node, TaskMDT_Names::TaskType_Name);
  if (accessor.hasTaskConstraints()) {
    RequirementConstraintsType::serialize(accessor.getTaskConstraints(), node, TaskMDT_Names::TaskConstraints_Name);
  }
  if (accessor.hasTaskGuidance()) {
    RequirementGuidanceType::serialize(accessor.getTaskGuidance(), node, TaskMDT_Names::TaskGuidance_Name);
  }
  if (accessor.hasMetadata()) {
    RequirementMetadataType::serialize(accessor.getMetadata(), node, TaskMDT_Names::Metadata_Name);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

