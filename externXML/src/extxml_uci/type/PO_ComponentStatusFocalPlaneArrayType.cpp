/** @file PO_ComponentStatusFocalPlaneArrayType.cpp
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

#include "extxml_uci/type/PO_ComponentStatusFocalPlaneArrayType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/ComponentControlsStatusType.h"
#include "extxml_uci/type/PO_ComponentStatusFocalPlaneArrayChannelType.h"
#include "extxml_uci/type/PO_ComponentWindowType.h"
#include "extxml_uci/type/PO_FPA_ID_Type.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/PO_ComponentStatusFocalPlaneArrayType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace PO_ComponentStatusFocalPlaneArrayType_Names {

constexpr const char* Extern_Type_Name{"PO_ComponentStatusFocalPlaneArrayType"};
constexpr const char* FocalPlaneArrayID_Name{"FocalPlaneArrayID"};
constexpr const char* FPA_ControlsStatus_Name{"FPA_ControlsStatus"};
constexpr const char* Channel_Name{"Channel"};
constexpr const char* Window_Name{"Window"};

} // namespace PO_ComponentStatusFocalPlaneArrayType_Names

bool PO_ComponentStatusFocalPlaneArrayType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_ComponentStatusFocalPlaneArrayType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PO_ComponentStatusFocalPlaneArrayType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PO_ComponentStatusFocalPlaneArrayType_Names::FocalPlaneArrayID_Name) {
      PO_FPA_ID_Type::deserialize(valueType.second, accessor.getFocalPlaneArrayID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_ComponentStatusFocalPlaneArrayType_Names::FPA_ControlsStatus_Name) {
      ComponentControlsStatusType::deserialize(valueType.second, accessor.getFPA_ControlsStatus(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_ComponentStatusFocalPlaneArrayType_Names::Channel_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PO_ComponentStatusFocalPlaneArrayType::Channel& boundedList = accessor.getChannel();
        const uci::type::PO_ComponentStatusFocalPlaneArrayType::Channel::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        PO_ComponentStatusFocalPlaneArrayChannelType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + PO_ComponentStatusFocalPlaneArrayType_Names::Window_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PO_ComponentStatusFocalPlaneArrayType::Window& boundedList = accessor.getWindow();
        const uci::type::PO_ComponentStatusFocalPlaneArrayType::Window::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        PO_ComponentWindowType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  return true;
}

std::string PO_ComponentStatusFocalPlaneArrayType::serialize(const uci::type::PO_ComponentStatusFocalPlaneArrayType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? PO_ComponentStatusFocalPlaneArrayType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, PO_ComponentStatusFocalPlaneArrayType_Names::Extern_Type_Name);
  }
  PO_FPA_ID_Type::serialize(accessor.getFocalPlaneArrayID(), node, PO_ComponentStatusFocalPlaneArrayType_Names::FocalPlaneArrayID_Name);
  ComponentControlsStatusType::serialize(accessor.getFPA_ControlsStatus(), node, PO_ComponentStatusFocalPlaneArrayType_Names::FPA_ControlsStatus_Name);
  {
    const uci::type::PO_ComponentStatusFocalPlaneArrayType::Channel& boundedList = accessor.getChannel();
    for (uci::type::PO_ComponentStatusFocalPlaneArrayType::Channel::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      PO_ComponentStatusFocalPlaneArrayChannelType::serialize(boundedList.at(i), node, PO_ComponentStatusFocalPlaneArrayType_Names::Channel_Name);
    }
  }
  {
    const uci::type::PO_ComponentStatusFocalPlaneArrayType::Window& boundedList = accessor.getWindow();
    for (uci::type::PO_ComponentStatusFocalPlaneArrayType::Window::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      PO_ComponentWindowType::serialize(boundedList.at(i), node, PO_ComponentStatusFocalPlaneArrayType_Names::Window_Name);
    }
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

