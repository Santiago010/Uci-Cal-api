/** @file CryptoLoadCommandType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:18 PM
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

#include "extxml_uci/type/CryptoLoadCommandType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/CryptoKeySourceType.h"
#include "extxml_uci/type/CryptoLocationType.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/CryptoLoadCommandType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace CryptoLoadCommandType_Names {

constexpr const char* Extern_Type_Name{"CryptoLoadCommandType"};
constexpr const char* KeyDestination_Name{"KeyDestination"};
constexpr const char* KeySource_Name{"KeySource"};
constexpr const char* LoadScheduleTime_Name{"LoadScheduleTime"};

} // namespace CryptoLoadCommandType_Names

bool CryptoLoadCommandType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CryptoLoadCommandType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CryptoLoadCommandType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CryptoLoadCommandType_Names::KeyDestination_Name) {
      CryptoLocationType::deserialize(valueType.second, accessor.getKeyDestination(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CryptoLoadCommandType_Names::KeySource_Name) {
      CryptoKeySourceType::deserialize(valueType.second, accessor.getKeySource(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CryptoLoadCommandType_Names::LoadScheduleTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setLoadScheduleTime(extxml_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    }
  }
  return true;
}

std::string CryptoLoadCommandType::serialize(const uci::type::CryptoLoadCommandType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? CryptoLoadCommandType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, CryptoLoadCommandType_Names::Extern_Type_Name);
  }
  CryptoLocationType::serialize(accessor.getKeyDestination(), node, CryptoLoadCommandType_Names::KeyDestination_Name);
  CryptoKeySourceType::serialize(accessor.getKeySource(), node, CryptoLoadCommandType_Names::KeySource_Name);
  if (accessor.hasLoadScheduleTime()) {
    extxml_uci::util::SerializationHelpers::serializeDateTime(accessor.getLoadScheduleTime(), node, CryptoLoadCommandType_Names::LoadScheduleTime_Name);
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

