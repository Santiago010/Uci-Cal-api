/** @file IO_PortStatusType.cpp
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

#include "extxml_uci/type/IO_PortStatusType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/IO_PortType.h"
#include "extxml_uci/type/SubsystemID_Type.h"
#include "extxml_uci/type/SupportCapabilityStatusBaseType.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/IO_PortStatusType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace IO_PortStatusType_Names {

constexpr const char* Extern_Type_Name{"IO_PortStatusType"};
constexpr const char* SubsystemID_Name{"SubsystemID"};
constexpr const char* IO_Port_Name{"IO_Port"};

} // namespace IO_PortStatusType_Names

bool IO_PortStatusType::deserialize(const boost::property_tree::ptree& propTree, uci::type::IO_PortStatusType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = IO_PortStatusType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + IO_PortStatusType_Names::SubsystemID_Name) {
      SubsystemID_Type::deserialize(valueType.second, accessor.getSubsystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + IO_PortStatusType_Names::IO_Port_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::IO_PortStatusType::IO_Port& boundedList = accessor.getIO_Port();
        const uci::type::IO_PortStatusType::IO_Port::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        IO_PortType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  SupportCapabilityStatusBaseType::deserialize(node, accessor, nodeName, nsPrefix);
  return true;
}

std::string IO_PortStatusType::serialize(const uci::type::IO_PortStatusType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? IO_PortStatusType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, IO_PortStatusType_Names::Extern_Type_Name);
  }
  SupportCapabilityStatusBaseType::serialize(accessor, node, "", false, false, false);
  SubsystemID_Type::serialize(accessor.getSubsystemID(), node, IO_PortStatusType_Names::SubsystemID_Name);
  {
    const uci::type::IO_PortStatusType::IO_Port& boundedList = accessor.getIO_Port();
    for (uci::type::IO_PortStatusType::IO_Port::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      IO_PortType::serialize(boundedList.at(i), node, IO_PortStatusType_Names::IO_Port_Name);
    }
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

