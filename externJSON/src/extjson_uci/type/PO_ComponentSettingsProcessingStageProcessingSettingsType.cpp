/** @file PO_ComponentSettingsProcessingStageProcessingSettingsType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:23 PM
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

#include "extjson_uci/type/PO_ComponentSettingsProcessingStageProcessingSettingsType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/HSB_ColorControlType.h"
#include "extjson_uci/type/PO_ComponentSettingsProcessingStagePixelScalingType.h"
#include "extjson_uci/type/RGB_ColorControlType.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/PO_ComponentSettingsProcessingStageProcessingSettingsType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace PO_ComponentSettingsProcessingStageProcessingSettingsType_Names {

constexpr const char* Extern_Type_Name{"PO_ComponentSettingsProcessingStageProcessingSettingsType"};
constexpr const char* PixelScaling_Name{"PixelScaling"};
constexpr const char* HSB_ColorControl_Name{"HSB_ColorControl"};
constexpr const char* RGB_ColorControl_Name{"RGB_ColorControl"};
constexpr const char* GammaValue_Name{"GammaValue"};
constexpr const char* SharpnessValue_Name{"SharpnessValue"};
constexpr const char* EdgeEnhancement_Name{"EdgeEnhancement"};
constexpr const char* ElectronicZoom_Name{"ElectronicZoom"};

} // namespace PO_ComponentSettingsProcessingStageProcessingSettingsType_Names

bool PO_ComponentSettingsProcessingStageProcessingSettingsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_ComponentSettingsProcessingStageProcessingSettingsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PO_ComponentSettingsProcessingStageProcessingSettingsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + PO_ComponentSettingsProcessingStageProcessingSettingsType_Names::PixelScaling_Name) {
      PO_ComponentSettingsProcessingStagePixelScalingType::deserialize(valueType.second, accessor.enablePixelScaling(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_ComponentSettingsProcessingStageProcessingSettingsType_Names::HSB_ColorControl_Name) {
      HSB_ColorControlType::deserialize(valueType.second, accessor.enableHSB_ColorControl(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_ComponentSettingsProcessingStageProcessingSettingsType_Names::RGB_ColorControl_Name) {
      RGB_ColorControlType::deserialize(valueType.second, accessor.enableRGB_ColorControl(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_ComponentSettingsProcessingStageProcessingSettingsType_Names::GammaValue_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setGammaValue(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + PO_ComponentSettingsProcessingStageProcessingSettingsType_Names::SharpnessValue_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSharpnessValue(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + PO_ComponentSettingsProcessingStageProcessingSettingsType_Names::EdgeEnhancement_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEdgeEnhancement(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + PO_ComponentSettingsProcessingStageProcessingSettingsType_Names::ElectronicZoom_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setElectronicZoom(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    }
  }
  return true;
}

std::string PO_ComponentSettingsProcessingStageProcessingSettingsType::serialize(const uci::type::PO_ComponentSettingsProcessingStageProcessingSettingsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? PO_ComponentSettingsProcessingStageProcessingSettingsType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, PO_ComponentSettingsProcessingStageProcessingSettingsType_Names::Extern_Type_Name);
  }
  if (accessor.hasPixelScaling()) {
    PO_ComponentSettingsProcessingStagePixelScalingType::serialize(accessor.getPixelScaling(), node, PO_ComponentSettingsProcessingStageProcessingSettingsType_Names::PixelScaling_Name);
  }
  if (accessor.hasHSB_ColorControl()) {
    HSB_ColorControlType::serialize(accessor.getHSB_ColorControl(), node, PO_ComponentSettingsProcessingStageProcessingSettingsType_Names::HSB_ColorControl_Name);
  }
  if (accessor.hasRGB_ColorControl()) {
    RGB_ColorControlType::serialize(accessor.getRGB_ColorControl(), node, PO_ComponentSettingsProcessingStageProcessingSettingsType_Names::RGB_ColorControl_Name);
  }
  if (accessor.hasGammaValue()) {
    extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getGammaValue(), node, PO_ComponentSettingsProcessingStageProcessingSettingsType_Names::GammaValue_Name);
  }
  if (accessor.hasSharpnessValue()) {
    extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getSharpnessValue(), node, PO_ComponentSettingsProcessingStageProcessingSettingsType_Names::SharpnessValue_Name);
  }
  if (accessor.hasEdgeEnhancement()) {
    extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getEdgeEnhancement(), node, PO_ComponentSettingsProcessingStageProcessingSettingsType_Names::EdgeEnhancement_Name);
  }
  if (accessor.hasElectronicZoom()) {
    extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getElectronicZoom(), node, PO_ComponentSettingsProcessingStageProcessingSettingsType_Names::ElectronicZoom_Name);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

