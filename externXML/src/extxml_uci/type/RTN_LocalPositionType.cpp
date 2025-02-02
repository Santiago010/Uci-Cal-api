/** @file RTN_LocalPositionType.cpp
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

#include "extxml_uci/type/RTN_LocalPositionType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/KinematicsOptionsType.h"
#include "extxml_uci/type/QuaternionType.h"
#include "extxml_uci/type/RTN_PositionType.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/RTN_LocalPositionType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace RTN_LocalPositionType_Names {

constexpr const char* Extern_Type_Name{"RTN_LocalPositionType"};
constexpr const char* Position_Name{"Position"};
constexpr const char* Attitude_Name{"Attitude"};
constexpr const char* RelativeKinematics_Name{"RelativeKinematics"};

} // namespace RTN_LocalPositionType_Names

bool RTN_LocalPositionType::deserialize(const boost::property_tree::ptree& propTree, uci::type::RTN_LocalPositionType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RTN_LocalPositionType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RTN_LocalPositionType_Names::Position_Name) {
      RTN_PositionType::deserialize(valueType.second, accessor.getPosition(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RTN_LocalPositionType_Names::Attitude_Name) {
      QuaternionType::deserialize(valueType.second, accessor.getAttitude(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RTN_LocalPositionType_Names::RelativeKinematics_Name) {
      KinematicsOptionsType::deserialize(valueType.second, accessor.getRelativeKinematics(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string RTN_LocalPositionType::serialize(const uci::type::RTN_LocalPositionType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? RTN_LocalPositionType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, RTN_LocalPositionType_Names::Extern_Type_Name);
  }
  RTN_PositionType::serialize(accessor.getPosition(), node, RTN_LocalPositionType_Names::Position_Name);
  QuaternionType::serialize(accessor.getAttitude(), node, RTN_LocalPositionType_Names::Attitude_Name);
  KinematicsOptionsType::serialize(accessor.getRelativeKinematics(), node, RTN_LocalPositionType_Names::RelativeKinematics_Name);
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

