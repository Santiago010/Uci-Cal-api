/** @file KinematicsMultiStandardType.cpp
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

#include "extxml_uci/type/KinematicsMultiStandardType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/AngleHalfPairType.h"
#include "extxml_uci/type/KinematicsType.h"
#include "extxml_uci/type/OrbitalKinematicsChoiceType.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/KinematicsMultiStandardType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace KinematicsMultiStandardType_Names {

constexpr const char* Extern_Type_Name{"KinematicsMultiStandardType"};
constexpr const char* Orbital_Name{"Orbital"};
constexpr const char* WGS_Name{"WGS"};
constexpr const char* DeltaOrbitalPlaneTolerance_Name{"DeltaOrbitalPlaneTolerance"};

} // namespace KinematicsMultiStandardType_Names

bool KinematicsMultiStandardType::deserialize(const boost::property_tree::ptree& propTree, uci::type::KinematicsMultiStandardType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = KinematicsMultiStandardType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + KinematicsMultiStandardType_Names::Orbital_Name) {
      OrbitalKinematicsChoiceType::deserialize(valueType.second, accessor.chooseOrbital(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + KinematicsMultiStandardType_Names::WGS_Name) {
      KinematicsType::deserialize(valueType.second, accessor.chooseWGS(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + KinematicsMultiStandardType_Names::DeltaOrbitalPlaneTolerance_Name) {
      AngleHalfPairType::deserialize(valueType.second, accessor.chooseDeltaOrbitalPlaneTolerance(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string KinematicsMultiStandardType::serialize(const uci::type::KinematicsMultiStandardType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? KinematicsMultiStandardType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, KinematicsMultiStandardType_Names::Extern_Type_Name);
  }
  if (accessor.isOrbital()) {
    OrbitalKinematicsChoiceType::serialize(accessor.getOrbital(), node, KinematicsMultiStandardType_Names::Orbital_Name);
  } else if (accessor.isWGS()) {
    KinematicsType::serialize(accessor.getWGS(), node, KinematicsMultiStandardType_Names::WGS_Name);
  } else if (accessor.isDeltaOrbitalPlaneTolerance()) {
    AngleHalfPairType::serialize(accessor.getDeltaOrbitalPlaneTolerance(), node, KinematicsMultiStandardType_Names::DeltaOrbitalPlaneTolerance_Name);
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

