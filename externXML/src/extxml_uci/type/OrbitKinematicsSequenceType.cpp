/** @file OrbitKinematicsSequenceType.cpp
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

#include "extxml_uci/type/OrbitKinematicsSequenceType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/DateTimeRangeType.h"
#include "extxml_uci/type/OrbitKinematicsSequenceID_Type.h"
#include "extxml_uci/type/OrbitKinematicsType.h"
#include "extxml_uci/type/OrbitManeuverType.h"
#include "extxml_uci/util/DerivedTypesDeserializer.h"
#include "extxml_uci/util/DerivedTypesSerializer.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/base/accessorType.h"
#include "uci/type/OrbitKinematicsSequenceType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace OrbitKinematicsSequenceType_Names {

constexpr const char* Extern_Type_Name{"OrbitKinematicsSequenceType"};
constexpr const char* SequenceID_Name{"SequenceID"};
constexpr const char* Window_Name{"Window"};
constexpr const char* Locked_Name{"Locked"};
constexpr const char* OrbitKinematics_Name{"OrbitKinematics"};
constexpr const char* ManeuverKinematics_Name{"ManeuverKinematics"};
constexpr const char* NextSequenceID_Name{"NextSequenceID"};

} // namespace OrbitKinematicsSequenceType_Names

bool OrbitKinematicsSequenceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitKinematicsSequenceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitKinematicsSequenceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitKinematicsSequenceType_Names::SequenceID_Name) {
      OrbitKinematicsSequenceID_Type::deserialize(valueType.second, accessor.getSequenceID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitKinematicsSequenceType_Names::Window_Name) {
      DateTimeRangeType::deserialize(valueType.second, accessor.getWindow(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitKinematicsSequenceType_Names::Locked_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setLocked(extxml_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitKinematicsSequenceType_Names::OrbitKinematics_Name) {
      extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableOrbitKinematics(extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitKinematicsSequenceType_Names::ManeuverKinematics_Name) {
      OrbitManeuverType::deserialize(valueType.second, accessor.enableManeuverKinematics(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitKinematicsSequenceType_Names::NextSequenceID_Name) {
      OrbitKinematicsSequenceID_Type::deserialize(valueType.second, accessor.enableNextSequenceID(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string OrbitKinematicsSequenceType::serialize(const uci::type::OrbitKinematicsSequenceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? OrbitKinematicsSequenceType_Names::Extern_Type_Name : nodeName};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::orbitKinematicsSequenceType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      extxml_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitKinematicsSequenceType_Names::Extern_Type_Name);
    }
    OrbitKinematicsSequenceID_Type::serialize(accessor.getSequenceID(), node, OrbitKinematicsSequenceType_Names::SequenceID_Name);
    DateTimeRangeType::serialize(accessor.getWindow(), node, OrbitKinematicsSequenceType_Names::Window_Name);
    extxml_uci::util::SerializationHelpers::serializeBoolean(accessor.getLocked(), node, OrbitKinematicsSequenceType_Names::Locked_Name);
    if (accessor.hasOrbitKinematics()) {
      OrbitKinematicsType::serialize(accessor.getOrbitKinematics(), node, OrbitKinematicsSequenceType_Names::OrbitKinematics_Name);
    }
    if (accessor.hasManeuverKinematics()) {
      OrbitManeuverType::serialize(accessor.getManeuverKinematics(), node, OrbitKinematicsSequenceType_Names::ManeuverKinematics_Name);
    }
    if (accessor.hasNextSequenceID()) {
      OrbitKinematicsSequenceID_Type::serialize(accessor.getNextSequenceID(), node, OrbitKinematicsSequenceType_Names::NextSequenceID_Name);
    }
    if (createNode) {
      propTree.add_child(generatedNodeName, node);
    }
  } else {
    extxml_uci::util::DerivedTypesSerializer::serialize(accessor, propTree, nodeName, createNode);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

