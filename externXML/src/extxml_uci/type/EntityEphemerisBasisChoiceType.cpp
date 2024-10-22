/** @file EntityEphemerisBasisChoiceType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:18 PM
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

#include "extxml_uci/type/EntityEphemerisBasisChoiceType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/EntityOrbitalElementSetID_Type.h"
#include "extxml_uci/type/EntityOrbitalVCM_ID_Type.h"
#include "extxml_uci/type/OrbitalKinematicsStandardFrameChoiceType.h"
#include "extxml_uci/type/TLE_BaseType.h"
#include "extxml_uci/util/DerivedTypesDeserializer.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/EntityEphemerisBasisChoiceType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace EntityEphemerisBasisChoiceType_Names {

constexpr const char* Extern_Type_Name{"EntityEphemerisBasisChoiceType"};
constexpr const char* ElementSet_Name{"ElementSet"};
constexpr const char* EntityElementSetID_Name{"EntityElementSetID"};
constexpr const char* KinematicVector_Name{"KinematicVector"};
constexpr const char* EntityVCM_ID_Name{"EntityVCM_ID"};

} // namespace EntityEphemerisBasisChoiceType_Names

bool EntityEphemerisBasisChoiceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::EntityEphemerisBasisChoiceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EntityEphemerisBasisChoiceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + EntityEphemerisBasisChoiceType_Names::ElementSet_Name) {
      extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.chooseElementSet(extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityEphemerisBasisChoiceType_Names::EntityElementSetID_Name) {
      EntityOrbitalElementSetID_Type::deserialize(valueType.second, accessor.chooseEntityElementSetID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityEphemerisBasisChoiceType_Names::KinematicVector_Name) {
      OrbitalKinematicsStandardFrameChoiceType::deserialize(valueType.second, accessor.chooseKinematicVector(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityEphemerisBasisChoiceType_Names::EntityVCM_ID_Name) {
      EntityOrbitalVCM_ID_Type::deserialize(valueType.second, accessor.chooseEntityVCM_ID(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string EntityEphemerisBasisChoiceType::serialize(const uci::type::EntityEphemerisBasisChoiceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? EntityEphemerisBasisChoiceType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, EntityEphemerisBasisChoiceType_Names::Extern_Type_Name);
  }
  if (accessor.isElementSet()) {
    TLE_BaseType::serialize(accessor.getElementSet(), node, EntityEphemerisBasisChoiceType_Names::ElementSet_Name);
  } else if (accessor.isEntityElementSetID()) {
    EntityOrbitalElementSetID_Type::serialize(accessor.getEntityElementSetID(), node, EntityEphemerisBasisChoiceType_Names::EntityElementSetID_Name);
  } else if (accessor.isKinematicVector()) {
    OrbitalKinematicsStandardFrameChoiceType::serialize(accessor.getKinematicVector(), node, EntityEphemerisBasisChoiceType_Names::KinematicVector_Name);
  } else if (accessor.isEntityVCM_ID()) {
    EntityOrbitalVCM_ID_Type::serialize(accessor.getEntityVCM_ID(), node, EntityEphemerisBasisChoiceType_Names::EntityVCM_ID_Name);
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

