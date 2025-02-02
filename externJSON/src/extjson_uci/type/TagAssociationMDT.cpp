/** @file TagAssociationMDT.cpp
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

#include "extjson_uci/type/TagAssociationMDT.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/DataRecordBaseType.h"
#include "extjson_uci/type/SecureStringType.h"
#include "extjson_uci/type/TagAssociationID_Type.h"
#include "extjson_uci/type/TagAssociationTargetType.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/TagAssociationMDT.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace TagAssociationMDT_Names {

constexpr const char* Extern_Type_Name{"TagAssociationMDT"};
constexpr const char* TagAssociationID_Name{"TagAssociationID"};
constexpr const char* Tag_Name{"Tag"};
constexpr const char* Target_Name{"Target"};

} // namespace TagAssociationMDT_Names

bool TagAssociationMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::TagAssociationMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = TagAssociationMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + TagAssociationMDT_Names::TagAssociationID_Name) {
      TagAssociationID_Type::deserialize(valueType.second, accessor.getTagAssociationID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + TagAssociationMDT_Names::Tag_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::TagAssociationMDT::Tag& boundedList = accessor.getTag();
        const uci::type::TagAssociationMDT::Tag::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        SecureStringType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + TagAssociationMDT_Names::Target_Name) {
      uci::type::TagAssociationMDT::Target& boundedList = accessor.getTarget();
      const uci::type::TagAssociationMDT::Target::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      TagAssociationTargetType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    }
  }
  DataRecordBaseType::deserialize(node, accessor, nodeName, nsPrefix);
  return true;
}

std::string TagAssociationMDT::serialize(const uci::type::TagAssociationMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? TagAssociationMDT_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, TagAssociationMDT_Names::Extern_Type_Name);
  }
  DataRecordBaseType::serialize(accessor, node, "", false, false, false);
  TagAssociationID_Type::serialize(accessor.getTagAssociationID(), node, TagAssociationMDT_Names::TagAssociationID_Name);
  {
    const uci::type::TagAssociationMDT::Tag& boundedList = accessor.getTag();
    for (uci::type::TagAssociationMDT::Tag::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      SecureStringType::serialize(boundedList.at(i), node, TagAssociationMDT_Names::Tag_Name);
    }
  }
  {
    const uci::type::TagAssociationMDT::Target& boundedList = accessor.getTarget();
    for (uci::type::TagAssociationMDT::Target::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      TagAssociationTargetType::serialize(boundedList.at(i), node, TagAssociationMDT_Names::Target_Name);
    }
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

