/** @file ReferenceFrameOriginKinematicsType.cpp
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

#include "extxml_uci/type/ReferenceFrameOriginKinematicsType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/DetailedKinematicsErrorType.h"
#include "extxml_uci/type/DetailedReferenceKinematicsType.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/ReferenceFrameOriginKinematicsType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace ReferenceFrameOriginKinematicsType_Names {

constexpr const char* Extern_Type_Name{"ReferenceFrameOriginKinematicsType"};
constexpr const char* Kinematics_Name{"Kinematics"};
constexpr const char* KinematicsError_Name{"KinematicsError"};

} // namespace ReferenceFrameOriginKinematicsType_Names

bool ReferenceFrameOriginKinematicsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ReferenceFrameOriginKinematicsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ReferenceFrameOriginKinematicsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ReferenceFrameOriginKinematicsType_Names::Kinematics_Name) {
      DetailedReferenceKinematicsType::deserialize(valueType.second, accessor.getKinematics(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ReferenceFrameOriginKinematicsType_Names::KinematicsError_Name) {
      DetailedKinematicsErrorType::deserialize(valueType.second, accessor.enableKinematicsError(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string ReferenceFrameOriginKinematicsType::serialize(const uci::type::ReferenceFrameOriginKinematicsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? ReferenceFrameOriginKinematicsType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, ReferenceFrameOriginKinematicsType_Names::Extern_Type_Name);
  }
  DetailedReferenceKinematicsType::serialize(accessor.getKinematics(), node, ReferenceFrameOriginKinematicsType_Names::Kinematics_Name);
  if (accessor.hasKinematicsError()) {
    DetailedKinematicsErrorType::serialize(accessor.getKinematicsError(), node, ReferenceFrameOriginKinematicsType_Names::KinematicsError_Name);
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

