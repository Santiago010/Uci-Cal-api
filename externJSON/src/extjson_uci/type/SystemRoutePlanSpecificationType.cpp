/** @file SystemRoutePlanSpecificationType.cpp
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

#include "extjson_uci/type/SystemRoutePlanSpecificationType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/RoutePlanReferencesType.h"
#include "extjson_uci/type/SystemCapabilitySpecificationType.h"
#include "extjson_uci/type/SystemID_Type.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/SystemRoutePlanSpecificationType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace SystemRoutePlanSpecificationType_Names {

constexpr const char* Extern_Type_Name{"SystemRoutePlanSpecificationType"};
constexpr const char* SystemID_Name{"SystemID"};
constexpr const char* RoutePlan_Name{"RoutePlan"};
constexpr const char* CapabilityConstraints_Name{"CapabilityConstraints"};

} // namespace SystemRoutePlanSpecificationType_Names

bool SystemRoutePlanSpecificationType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SystemRoutePlanSpecificationType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SystemRoutePlanSpecificationType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + SystemRoutePlanSpecificationType_Names::SystemID_Name) {
      SystemID_Type::deserialize(valueType.second, accessor.getSystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SystemRoutePlanSpecificationType_Names::RoutePlan_Name) {
      RoutePlanReferencesType::deserialize(valueType.second, accessor.getRoutePlan(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SystemRoutePlanSpecificationType_Names::CapabilityConstraints_Name) {
      SystemCapabilitySpecificationType::deserialize(valueType.second, accessor.enableCapabilityConstraints(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string SystemRoutePlanSpecificationType::serialize(const uci::type::SystemRoutePlanSpecificationType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? SystemRoutePlanSpecificationType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, SystemRoutePlanSpecificationType_Names::Extern_Type_Name);
  }
  SystemID_Type::serialize(accessor.getSystemID(), node, SystemRoutePlanSpecificationType_Names::SystemID_Name);
  RoutePlanReferencesType::serialize(accessor.getRoutePlan(), node, SystemRoutePlanSpecificationType_Names::RoutePlan_Name);
  if (accessor.hasCapabilityConstraints()) {
    SystemCapabilitySpecificationType::serialize(accessor.getCapabilityConstraints(), node, SystemRoutePlanSpecificationType_Names::CapabilityConstraints_Name);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

