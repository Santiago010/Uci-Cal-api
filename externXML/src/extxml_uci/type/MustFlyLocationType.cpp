/** @file MustFlyLocationType.cpp
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

#include "extxml_uci/type/MustFlyLocationType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/EntityID_Type.h"
#include "extxml_uci/type/LineTargetType.h"
#include "extxml_uci/type/OpLineID_Type.h"
#include "extxml_uci/type/OpPointID_Type.h"
#include "extxml_uci/type/OpVolumeID_Type.h"
#include "extxml_uci/type/OpVolumeType.h"
#include "extxml_uci/type/OpZoneID_Type.h"
#include "extxml_uci/type/Point3D_Type.h"
#include "extxml_uci/type/ZoneExternalType.h"
#include "extxml_uci/util/DerivedTypesDeserializer.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/MustFlyLocationType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace MustFlyLocationType_Names {

constexpr const char* Extern_Type_Name{"MustFlyLocationType"};
constexpr const char* EntityID_Name{"EntityID"};
constexpr const char* OpPointID_Name{"OpPointID"};
constexpr const char* OpLineID_Name{"OpLineID"};
constexpr const char* OpZoneID_Name{"OpZoneID"};
constexpr const char* OpVolumeID_Name{"OpVolumeID"};
constexpr const char* Point_Name{"Point"};
constexpr const char* ZoneTarget_Name{"ZoneTarget"};
constexpr const char* LineTarget_Name{"LineTarget"};
constexpr const char* VolumeTarget_Name{"VolumeTarget"};

} // namespace MustFlyLocationType_Names

bool MustFlyLocationType::deserialize(const boost::property_tree::ptree& propTree, uci::type::MustFlyLocationType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = MustFlyLocationType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + MustFlyLocationType_Names::EntityID_Name) {
      extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.chooseEntityID(extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MustFlyLocationType_Names::OpPointID_Name) {
      OpPointID_Type::deserialize(valueType.second, accessor.chooseOpPointID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MustFlyLocationType_Names::OpLineID_Name) {
      OpLineID_Type::deserialize(valueType.second, accessor.chooseOpLineID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MustFlyLocationType_Names::OpZoneID_Name) {
      OpZoneID_Type::deserialize(valueType.second, accessor.chooseOpZoneID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MustFlyLocationType_Names::OpVolumeID_Name) {
      OpVolumeID_Type::deserialize(valueType.second, accessor.chooseOpVolumeID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MustFlyLocationType_Names::Point_Name) {
      extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.choosePoint(extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MustFlyLocationType_Names::ZoneTarget_Name) {
      ZoneExternalType::deserialize(valueType.second, accessor.chooseZoneTarget(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MustFlyLocationType_Names::LineTarget_Name) {
      LineTargetType::deserialize(valueType.second, accessor.chooseLineTarget(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MustFlyLocationType_Names::VolumeTarget_Name) {
      OpVolumeType::deserialize(valueType.second, accessor.chooseVolumeTarget(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string MustFlyLocationType::serialize(const uci::type::MustFlyLocationType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? MustFlyLocationType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, MustFlyLocationType_Names::Extern_Type_Name);
  }
  if (accessor.isEntityID()) {
    EntityID_Type::serialize(accessor.getEntityID(), node, MustFlyLocationType_Names::EntityID_Name);
  } else if (accessor.isOpPointID()) {
    OpPointID_Type::serialize(accessor.getOpPointID(), node, MustFlyLocationType_Names::OpPointID_Name);
  } else if (accessor.isOpLineID()) {
    OpLineID_Type::serialize(accessor.getOpLineID(), node, MustFlyLocationType_Names::OpLineID_Name);
  } else if (accessor.isOpZoneID()) {
    OpZoneID_Type::serialize(accessor.getOpZoneID(), node, MustFlyLocationType_Names::OpZoneID_Name);
  } else if (accessor.isOpVolumeID()) {
    OpVolumeID_Type::serialize(accessor.getOpVolumeID(), node, MustFlyLocationType_Names::OpVolumeID_Name);
  } else if (accessor.isPoint()) {
    Point3D_Type::serialize(accessor.getPoint(), node, MustFlyLocationType_Names::Point_Name);
  } else if (accessor.isZoneTarget()) {
    ZoneExternalType::serialize(accessor.getZoneTarget(), node, MustFlyLocationType_Names::ZoneTarget_Name);
  } else if (accessor.isLineTarget()) {
    LineTargetType::serialize(accessor.getLineTarget(), node, MustFlyLocationType_Names::LineTarget_Name);
  } else if (accessor.isVolumeTarget()) {
    OpVolumeType::serialize(accessor.getVolumeTarget(), node, MustFlyLocationType_Names::VolumeTarget_Name);
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

