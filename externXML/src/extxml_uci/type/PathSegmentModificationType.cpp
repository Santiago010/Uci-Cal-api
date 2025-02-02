/** @file PathSegmentModificationType.cpp
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

#include "extxml_uci/type/PathSegmentModificationType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/PathID_Type.h"
#include "extxml_uci/type/PathSegmentType.h"
#include "extxml_uci/type/SegmentID_Type.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/PathSegmentModificationType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace PathSegmentModificationType_Names {

constexpr const char* Extern_Type_Name{"PathSegmentModificationType"};
constexpr const char* PathID_Name{"PathID"};
constexpr const char* Add_Name{"Add"};
constexpr const char* RemoveID_Name{"RemoveID"};
constexpr const char* Update_Name{"Update"};

} // namespace PathSegmentModificationType_Names

bool PathSegmentModificationType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PathSegmentModificationType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PathSegmentModificationType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PathSegmentModificationType_Names::PathID_Name) {
      PathID_Type::deserialize(valueType.second, accessor.getPathID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PathSegmentModificationType_Names::Add_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PathSegmentModificationType::Add& boundedList = accessor.getAdd();
        const uci::type::PathSegmentModificationType::Add::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        PathSegmentType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + PathSegmentModificationType_Names::RemoveID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PathSegmentModificationType::RemoveID& boundedList = accessor.getRemoveID();
        const uci::type::PathSegmentModificationType::RemoveID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        SegmentID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + PathSegmentModificationType_Names::Update_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PathSegmentModificationType::Update& boundedList = accessor.getUpdate();
        const uci::type::PathSegmentModificationType::Update::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        PathSegmentType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  return true;
}

std::string PathSegmentModificationType::serialize(const uci::type::PathSegmentModificationType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? PathSegmentModificationType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, PathSegmentModificationType_Names::Extern_Type_Name);
  }
  PathID_Type::serialize(accessor.getPathID(), node, PathSegmentModificationType_Names::PathID_Name);
  {
    const uci::type::PathSegmentModificationType::Add& boundedList = accessor.getAdd();
    for (uci::type::PathSegmentModificationType::Add::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      PathSegmentType::serialize(boundedList.at(i), node, PathSegmentModificationType_Names::Add_Name);
    }
  }
  {
    const uci::type::PathSegmentModificationType::RemoveID& boundedList = accessor.getRemoveID();
    for (uci::type::PathSegmentModificationType::RemoveID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      SegmentID_Type::serialize(boundedList.at(i), node, PathSegmentModificationType_Names::RemoveID_Name);
    }
  }
  {
    const uci::type::PathSegmentModificationType::Update& boundedList = accessor.getUpdate();
    for (uci::type::PathSegmentModificationType::Update::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      PathSegmentType::serialize(boundedList.at(i), node, PathSegmentModificationType_Names::Update_Name);
    }
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

