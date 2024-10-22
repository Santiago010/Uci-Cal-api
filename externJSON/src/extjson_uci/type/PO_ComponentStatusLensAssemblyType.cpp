/** @file PO_ComponentStatusLensAssemblyType.cpp
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

#include "extjson_uci/type/PO_ComponentStatusLensAssemblyType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/ComponentControlsStatusType.h"
#include "extjson_uci/type/PO_ComponentStatusFocusSweepSettingsType.h"
#include "extjson_uci/type/PO_ComponentStatusLensAssemblyFieldOfViewType.h"
#include "extjson_uci/type/PO_ComponentStatusLensAssemblyFocusType.h"
#include "extjson_uci/type/PO_LensID_Type.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/PO_ComponentStatusLensAssemblyType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace PO_ComponentStatusLensAssemblyType_Names {

constexpr const char* Extern_Type_Name{"PO_ComponentStatusLensAssemblyType"};
constexpr const char* LensID_Name{"LensID"};
constexpr const char* LensControlsStatus_Name{"LensControlsStatus"};
constexpr const char* FOV_Name{"FOV"};
constexpr const char* Focus_Name{"Focus"};
constexpr const char* FocusSweepSettings_Name{"FocusSweepSettings"};

} // namespace PO_ComponentStatusLensAssemblyType_Names

bool PO_ComponentStatusLensAssemblyType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_ComponentStatusLensAssemblyType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PO_ComponentStatusLensAssemblyType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + PO_ComponentStatusLensAssemblyType_Names::LensID_Name) {
      PO_LensID_Type::deserialize(valueType.second, accessor.getLensID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_ComponentStatusLensAssemblyType_Names::LensControlsStatus_Name) {
      ComponentControlsStatusType::deserialize(valueType.second, accessor.getLensControlsStatus(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_ComponentStatusLensAssemblyType_Names::FOV_Name) {
      PO_ComponentStatusLensAssemblyFieldOfViewType::deserialize(valueType.second, accessor.enableFOV(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_ComponentStatusLensAssemblyType_Names::Focus_Name) {
      PO_ComponentStatusLensAssemblyFocusType::deserialize(valueType.second, accessor.enableFocus(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_ComponentStatusLensAssemblyType_Names::FocusSweepSettings_Name) {
      PO_ComponentStatusFocusSweepSettingsType::deserialize(valueType.second, accessor.enableFocusSweepSettings(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string PO_ComponentStatusLensAssemblyType::serialize(const uci::type::PO_ComponentStatusLensAssemblyType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? PO_ComponentStatusLensAssemblyType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, PO_ComponentStatusLensAssemblyType_Names::Extern_Type_Name);
  }
  PO_LensID_Type::serialize(accessor.getLensID(), node, PO_ComponentStatusLensAssemblyType_Names::LensID_Name);
  ComponentControlsStatusType::serialize(accessor.getLensControlsStatus(), node, PO_ComponentStatusLensAssemblyType_Names::LensControlsStatus_Name);
  if (accessor.hasFOV()) {
    PO_ComponentStatusLensAssemblyFieldOfViewType::serialize(accessor.getFOV(), node, PO_ComponentStatusLensAssemblyType_Names::FOV_Name);
  }
  if (accessor.hasFocus()) {
    PO_ComponentStatusLensAssemblyFocusType::serialize(accessor.getFocus(), node, PO_ComponentStatusLensAssemblyType_Names::Focus_Name);
  }
  if (accessor.hasFocusSweepSettings()) {
    PO_ComponentStatusFocusSweepSettingsType::serialize(accessor.getFocusSweepSettings(), node, PO_ComponentStatusLensAssemblyType_Names::FocusSweepSettings_Name);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

