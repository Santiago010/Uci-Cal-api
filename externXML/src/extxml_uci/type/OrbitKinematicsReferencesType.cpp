/** @file OrbitKinematicsReferencesType.cpp
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

#include "extxml_uci/type/OrbitKinematicsReferencesType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/EntityOrbitalElementSetID_Type.h"
#include "extxml_uci/type/EntityOrbitalEphemerisID_Type.h"
#include "extxml_uci/type/OrbitKinematicsSequenceID_Type.h"
#include "extxml_uci/type/OrbitManeuverSegmentID_Type.h"
#include "extxml_uci/type/OrbitPlanID_Type.h"
#include "extxml_uci/type/SystemOrbitalElementSetID_Type.h"
#include "extxml_uci/type/SystemOrbitalEphemerisID_Type.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/OrbitKinematicsReferencesType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace OrbitKinematicsReferencesType_Names {

constexpr const char* Extern_Type_Name{"OrbitKinematicsReferencesType"};
constexpr const char* OrbitPlanID_Name{"OrbitPlanID"};
constexpr const char* OrbitPlanSequenceID_Name{"OrbitPlanSequenceID"};
constexpr const char* OrbitPlanManeuverSegmentID_Name{"OrbitPlanManeuverSegmentID"};
constexpr const char* SystemElementSetID_Name{"SystemElementSetID"};
constexpr const char* EntityElementSetID_Name{"EntityElementSetID"};
constexpr const char* SystemEphemerisID_Name{"SystemEphemerisID"};
constexpr const char* EntityEphemerisID_Name{"EntityEphemerisID"};

} // namespace OrbitKinematicsReferencesType_Names

bool OrbitKinematicsReferencesType::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitKinematicsReferencesType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitKinematicsReferencesType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitKinematicsReferencesType_Names::OrbitPlanID_Name) {
      OrbitPlanID_Type::deserialize(valueType.second, accessor.enableOrbitPlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitKinematicsReferencesType_Names::OrbitPlanSequenceID_Name) {
      OrbitKinematicsSequenceID_Type::deserialize(valueType.second, accessor.enableOrbitPlanSequenceID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitKinematicsReferencesType_Names::OrbitPlanManeuverSegmentID_Name) {
      OrbitManeuverSegmentID_Type::deserialize(valueType.second, accessor.enableOrbitPlanManeuverSegmentID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitKinematicsReferencesType_Names::SystemElementSetID_Name) {
      SystemOrbitalElementSetID_Type::deserialize(valueType.second, accessor.enableSystemElementSetID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitKinematicsReferencesType_Names::EntityElementSetID_Name) {
      EntityOrbitalElementSetID_Type::deserialize(valueType.second, accessor.enableEntityElementSetID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitKinematicsReferencesType_Names::SystemEphemerisID_Name) {
      SystemOrbitalEphemerisID_Type::deserialize(valueType.second, accessor.enableSystemEphemerisID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitKinematicsReferencesType_Names::EntityEphemerisID_Name) {
      EntityOrbitalEphemerisID_Type::deserialize(valueType.second, accessor.enableEntityEphemerisID(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string OrbitKinematicsReferencesType::serialize(const uci::type::OrbitKinematicsReferencesType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? OrbitKinematicsReferencesType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitKinematicsReferencesType_Names::Extern_Type_Name);
  }
  if (accessor.hasOrbitPlanID()) {
    OrbitPlanID_Type::serialize(accessor.getOrbitPlanID(), node, OrbitKinematicsReferencesType_Names::OrbitPlanID_Name);
  }
  if (accessor.hasOrbitPlanSequenceID()) {
    OrbitKinematicsSequenceID_Type::serialize(accessor.getOrbitPlanSequenceID(), node, OrbitKinematicsReferencesType_Names::OrbitPlanSequenceID_Name);
  }
  if (accessor.hasOrbitPlanManeuverSegmentID()) {
    OrbitManeuverSegmentID_Type::serialize(accessor.getOrbitPlanManeuverSegmentID(), node, OrbitKinematicsReferencesType_Names::OrbitPlanManeuverSegmentID_Name);
  }
  if (accessor.hasSystemElementSetID()) {
    SystemOrbitalElementSetID_Type::serialize(accessor.getSystemElementSetID(), node, OrbitKinematicsReferencesType_Names::SystemElementSetID_Name);
  }
  if (accessor.hasEntityElementSetID()) {
    EntityOrbitalElementSetID_Type::serialize(accessor.getEntityElementSetID(), node, OrbitKinematicsReferencesType_Names::EntityElementSetID_Name);
  }
  if (accessor.hasSystemEphemerisID()) {
    SystemOrbitalEphemerisID_Type::serialize(accessor.getSystemEphemerisID(), node, OrbitKinematicsReferencesType_Names::SystemEphemerisID_Name);
  }
  if (accessor.hasEntityEphemerisID()) {
    EntityOrbitalEphemerisID_Type::serialize(accessor.getEntityEphemerisID(), node, OrbitKinematicsReferencesType_Names::EntityEphemerisID_Name);
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

