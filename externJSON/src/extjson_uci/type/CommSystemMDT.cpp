/** @file CommSystemMDT.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:22 PM
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

#include "extjson_uci/type/CommSystemMDT.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/CommAssetID_Type.h"
#include "extjson_uci/type/CommSchedulingScopeEnum.h"
#include "extjson_uci/type/CommSystemID_Type.h"
#include "extjson_uci/type/CommType.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/CommSystemMDT.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace CommSystemMDT_Names {

constexpr const char* Extern_Type_Name{"CommSystemMDT"};
constexpr const char* CommSystemID_Name{"CommSystemID"};
constexpr const char* CommType_Name{"CommType"};
constexpr const char* SchedulingScope_Name{"SchedulingScope"};
constexpr const char* CommAssetID_Name{"CommAssetID"};

} // namespace CommSystemMDT_Names

bool CommSystemMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::CommSystemMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CommSystemMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + CommSystemMDT_Names::CommSystemID_Name) {
      CommSystemID_Type::deserialize(valueType.second, accessor.getCommSystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CommSystemMDT_Names::CommType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::CommSystemMDT::CommType& boundedList = accessor.getCommType();
        const uci::type::CommSystemMDT::CommType::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        CommType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + CommSystemMDT_Names::SchedulingScope_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getSchedulingScope().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + CommSystemMDT_Names::CommAssetID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::CommSystemMDT::CommAssetID& boundedList = accessor.getCommAssetID();
        const uci::type::CommSystemMDT::CommAssetID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        CommAssetID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  return true;
}

std::string CommSystemMDT::serialize(const uci::type::CommSystemMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? CommSystemMDT_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, CommSystemMDT_Names::Extern_Type_Name);
  }
  CommSystemID_Type::serialize(accessor.getCommSystemID(), node, CommSystemMDT_Names::CommSystemID_Name);
  {
    const uci::type::CommSystemMDT::CommType& boundedList = accessor.getCommType();
    for (uci::type::CommSystemMDT::CommType::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      CommType::serialize(boundedList.at(i), node, CommSystemMDT_Names::CommType_Name);
    }
  }
  CommSchedulingScopeEnum::serialize(accessor.getSchedulingScope(), node, CommSystemMDT_Names::SchedulingScope_Name, false);
  {
    const uci::type::CommSystemMDT::CommAssetID& boundedList = accessor.getCommAssetID();
    for (uci::type::CommSystemMDT::CommAssetID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      CommAssetID_Type::serialize(boundedList.at(i), node, CommSystemMDT_Names::CommAssetID_Name);
    }
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

