/** @file DeploymentDetectionType.cpp
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

#include "extjson_uci/type/DeploymentDetectionType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/DateTimeRangeType.h"
#include "extjson_uci/type/MultiObjectType.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/DeploymentDetectionType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace DeploymentDetectionType_Names {

constexpr const char* Extern_Type_Name{"DeploymentDetectionType"};
constexpr const char* ExpectedDeploymentWindow_Name{"ExpectedDeploymentWindow"};
constexpr const char* MaxSeparationVelocity_Name{"MaxSeparationVelocity"};

} // namespace DeploymentDetectionType_Names

bool DeploymentDetectionType::deserialize(const boost::property_tree::ptree& propTree, uci::type::DeploymentDetectionType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = DeploymentDetectionType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + DeploymentDetectionType_Names::ExpectedDeploymentWindow_Name) {
      DateTimeRangeType::deserialize(valueType.second, accessor.getExpectedDeploymentWindow(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DeploymentDetectionType_Names::MaxSeparationVelocity_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMaxSeparationVelocity(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    }
  }
  MultiObjectType::deserialize(node, accessor, nodeName, nsPrefix);
  return true;
}

std::string DeploymentDetectionType::serialize(const uci::type::DeploymentDetectionType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? DeploymentDetectionType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, DeploymentDetectionType_Names::Extern_Type_Name);
  }
  MultiObjectType::serialize(accessor, node, "", false, false, false);
  DateTimeRangeType::serialize(accessor.getExpectedDeploymentWindow(), node, DeploymentDetectionType_Names::ExpectedDeploymentWindow_Name);
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getMaxSeparationVelocity(), node, DeploymentDetectionType_Names::MaxSeparationVelocity_Name);
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

