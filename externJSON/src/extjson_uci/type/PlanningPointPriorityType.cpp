/** @file PlanningPointPriorityType.cpp
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

#include "extjson_uci/type/PlanningPointPriorityType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/PlanningPointType.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/PlanningPointPriorityType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace PlanningPointPriorityType_Names {

constexpr const char* Extern_Type_Name{"PlanningPointPriorityType"};
constexpr const char* Point_Name{"Point"};
constexpr const char* Priority_Name{"Priority"};

} // namespace PlanningPointPriorityType_Names

bool PlanningPointPriorityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PlanningPointPriorityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PlanningPointPriorityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + PlanningPointPriorityType_Names::Point_Name) {
      PlanningPointType::deserialize(valueType.second, accessor.getPoint(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PlanningPointPriorityType_Names::Priority_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPriority(extjson_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    }
  }
  return true;
}

std::string PlanningPointPriorityType::serialize(const uci::type::PlanningPointPriorityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? PlanningPointPriorityType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, PlanningPointPriorityType_Names::Extern_Type_Name);
  }
  PlanningPointType::serialize(accessor.getPoint(), node, PlanningPointPriorityType_Names::Point_Name);
  if (accessor.hasPriority()) {
    extjson_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getPriority(), node, PlanningPointPriorityType_Names::Priority_Name);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

