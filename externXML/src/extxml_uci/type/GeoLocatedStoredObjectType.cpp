/** @file GeoLocatedStoredObjectType.cpp
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

#include "extxml_uci/type/GeoLocatedStoredObjectType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/EmergencyReferenceOpPointType.h"
#include "extxml_uci/type/EntityDataType.h"
#include "extxml_uci/type/OpLineMDT.h"
#include "extxml_uci/type/OpVolumeMDT.h"
#include "extxml_uci/type/OpZoneMDT.h"
#include "extxml_uci/type/SystemDataType.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/GeoLocatedStoredObjectType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace GeoLocatedStoredObjectType_Names {

constexpr const char* Extern_Type_Name{"GeoLocatedStoredObjectType"};
constexpr const char* Entity_Name{"Entity"};
constexpr const char* System_Name{"System"};
constexpr const char* OpPoint_Name{"OpPoint"};
constexpr const char* OpLine_Name{"OpLine"};
constexpr const char* OpZone_Name{"OpZone"};
constexpr const char* OpVolume_Name{"OpVolume"};

} // namespace GeoLocatedStoredObjectType_Names

bool GeoLocatedStoredObjectType::deserialize(const boost::property_tree::ptree& propTree, uci::type::GeoLocatedStoredObjectType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = GeoLocatedStoredObjectType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + GeoLocatedStoredObjectType_Names::Entity_Name) {
      EntityDataType::deserialize(valueType.second, accessor.chooseEntity(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + GeoLocatedStoredObjectType_Names::System_Name) {
      SystemDataType::deserialize(valueType.second, accessor.chooseSystem(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + GeoLocatedStoredObjectType_Names::OpPoint_Name) {
      EmergencyReferenceOpPointType::deserialize(valueType.second, accessor.chooseOpPoint(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + GeoLocatedStoredObjectType_Names::OpLine_Name) {
      OpLineMDT::deserialize(valueType.second, accessor.chooseOpLine(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + GeoLocatedStoredObjectType_Names::OpZone_Name) {
      OpZoneMDT::deserialize(valueType.second, accessor.chooseOpZone(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + GeoLocatedStoredObjectType_Names::OpVolume_Name) {
      OpVolumeMDT::deserialize(valueType.second, accessor.chooseOpVolume(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string GeoLocatedStoredObjectType::serialize(const uci::type::GeoLocatedStoredObjectType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? GeoLocatedStoredObjectType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, GeoLocatedStoredObjectType_Names::Extern_Type_Name);
  }
  if (accessor.isEntity()) {
    EntityDataType::serialize(accessor.getEntity(), node, GeoLocatedStoredObjectType_Names::Entity_Name);
  } else if (accessor.isSystem()) {
    SystemDataType::serialize(accessor.getSystem(), node, GeoLocatedStoredObjectType_Names::System_Name);
  } else if (accessor.isOpPoint()) {
    EmergencyReferenceOpPointType::serialize(accessor.getOpPoint(), node, GeoLocatedStoredObjectType_Names::OpPoint_Name);
  } else if (accessor.isOpLine()) {
    OpLineMDT::serialize(accessor.getOpLine(), node, GeoLocatedStoredObjectType_Names::OpLine_Name);
  } else if (accessor.isOpZone()) {
    OpZoneMDT::serialize(accessor.getOpZone(), node, GeoLocatedStoredObjectType_Names::OpZone_Name);
  } else if (accessor.isOpVolume()) {
    OpVolumeMDT::serialize(accessor.getOpVolume(), node, GeoLocatedStoredObjectType_Names::OpVolume_Name);
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

