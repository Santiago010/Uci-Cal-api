/** @file SourceFilterType.cpp
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

#include "extjson_uci/type/SourceFilterType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/CapabilityID_Type.h"
#include "extjson_uci/type/ComponentID_Type.h"
#include "extjson_uci/type/SystemID_Type.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/SourceFilterType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace SourceFilterType_Names {

constexpr const char* Extern_Type_Name{"SourceFilterType"};
constexpr const char* SystemID_Name{"SystemID"};
constexpr const char* CapabilityID_Name{"CapabilityID"};
constexpr const char* ComponentID_Name{"ComponentID"};

} // namespace SourceFilterType_Names

bool SourceFilterType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SourceFilterType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SourceFilterType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + SourceFilterType_Names::SystemID_Name) {
      SystemID_Type::deserialize(valueType.second, accessor.getSystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SourceFilterType_Names::CapabilityID_Name) {
      CapabilityID_Type::deserialize(valueType.second, accessor.enableCapabilityID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SourceFilterType_Names::ComponentID_Name) {
      ComponentID_Type::deserialize(valueType.second, accessor.enableComponentID(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string SourceFilterType::serialize(const uci::type::SourceFilterType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? SourceFilterType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, SourceFilterType_Names::Extern_Type_Name);
  }
  SystemID_Type::serialize(accessor.getSystemID(), node, SourceFilterType_Names::SystemID_Name);
  if (accessor.hasCapabilityID()) {
    CapabilityID_Type::serialize(accessor.getCapabilityID(), node, SourceFilterType_Names::CapabilityID_Name);
  }
  if (accessor.hasComponentID()) {
    ComponentID_Type::serialize(accessor.getComponentID(), node, SourceFilterType_Names::ComponentID_Name);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

