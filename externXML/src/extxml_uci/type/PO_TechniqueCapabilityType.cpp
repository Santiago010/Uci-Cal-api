/** @file PO_TechniqueCapabilityType.cpp
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

#include "extxml_uci/type/PO_TechniqueCapabilityType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/FloatMinMaxType.h"
#include "extxml_uci/type/PO_TechniqueEnum.h"
#include "extxml_uci/util/DerivedTypesDeserializer.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/PO_TechniqueCapabilityType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace PO_TechniqueCapabilityType_Names {

constexpr const char* Extern_Type_Name{"PO_TechniqueCapabilityType"};
constexpr const char* Technique_Name{"Technique"};
constexpr const char* Intensity_Name{"Intensity"};
constexpr const char* Constellation_Name{"Constellation"};
constexpr const char* Stride_Name{"Stride"};
constexpr const char* PointIntensity_Name{"PointIntensity"};
constexpr const char* EdgeIntensity_Name{"EdgeIntensity"};
constexpr const char* FalseAlarmLevelUpperLimit_Name{"FalseAlarmLevelUpperLimit"};

} // namespace PO_TechniqueCapabilityType_Names

bool PO_TechniqueCapabilityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_TechniqueCapabilityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PO_TechniqueCapabilityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PO_TechniqueCapabilityType_Names::Technique_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getTechnique().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + PO_TechniqueCapabilityType_Names::Intensity_Name) {
      extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableIntensity(extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_TechniqueCapabilityType_Names::Constellation_Name) {
      extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableConstellation(extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_TechniqueCapabilityType_Names::Stride_Name) {
      extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableStride(extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_TechniqueCapabilityType_Names::PointIntensity_Name) {
      extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enablePointIntensity(extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_TechniqueCapabilityType_Names::EdgeIntensity_Name) {
      extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableEdgeIntensity(extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_TechniqueCapabilityType_Names::FalseAlarmLevelUpperLimit_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setFalseAlarmLevelUpperLimit(extxml_uci::util::SerializationHelpers::deserializeUnsignedByte(*value));
      }
    }
  }
  return true;
}

std::string PO_TechniqueCapabilityType::serialize(const uci::type::PO_TechniqueCapabilityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? PO_TechniqueCapabilityType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, PO_TechniqueCapabilityType_Names::Extern_Type_Name);
  }
  PO_TechniqueEnum::serialize(accessor.getTechnique(), node, PO_TechniqueCapabilityType_Names::Technique_Name, false);
  if (accessor.hasIntensity()) {
    FloatMinMaxType::serialize(accessor.getIntensity(), node, PO_TechniqueCapabilityType_Names::Intensity_Name);
  }
  if (accessor.hasConstellation()) {
    FloatMinMaxType::serialize(accessor.getConstellation(), node, PO_TechniqueCapabilityType_Names::Constellation_Name);
  }
  if (accessor.hasStride()) {
    FloatMinMaxType::serialize(accessor.getStride(), node, PO_TechniqueCapabilityType_Names::Stride_Name);
  }
  if (accessor.hasPointIntensity()) {
    FloatMinMaxType::serialize(accessor.getPointIntensity(), node, PO_TechniqueCapabilityType_Names::PointIntensity_Name);
  }
  if (accessor.hasEdgeIntensity()) {
    FloatMinMaxType::serialize(accessor.getEdgeIntensity(), node, PO_TechniqueCapabilityType_Names::EdgeIntensity_Name);
  }
  if (accessor.hasFalseAlarmLevelUpperLimit()) {
    extxml_uci::util::SerializationHelpers::serializeUnsignedByte(accessor.getFalseAlarmLevelUpperLimit(), node, PO_TechniqueCapabilityType_Names::FalseAlarmLevelUpperLimit_Name);
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

