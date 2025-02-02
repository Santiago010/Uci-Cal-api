/** @file AO_ActivityCommandType.cpp
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

#include "extxml_uci/type/AO_ActivityCommandType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/AO_ComponentSettingsType.h"
#include "extxml_uci/type/ActivityCommandBaseType.h"
#include "extxml_uci/type/TargetType.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/AO_ActivityCommandType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace AO_ActivityCommandType_Names {

constexpr const char* Extern_Type_Name{"AO_ActivityCommandType"};
constexpr const char* ChangeComponentSettings_Name{"ChangeComponentSettings"};
constexpr const char* ChangeTarget_Name{"ChangeTarget"};

} // namespace AO_ActivityCommandType_Names

bool AO_ActivityCommandType::deserialize(const boost::property_tree::ptree& propTree, uci::type::AO_ActivityCommandType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = AO_ActivityCommandType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + AO_ActivityCommandType_Names::ChangeComponentSettings_Name) {
      AO_ComponentSettingsType::deserialize(valueType.second, accessor.enableChangeComponentSettings(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + AO_ActivityCommandType_Names::ChangeTarget_Name) {
      TargetType::deserialize(valueType.second, accessor.enableChangeTarget(), nodeName, nsPrefix);
    }
  }
  ActivityCommandBaseType::deserialize(node, accessor, nodeName, nsPrefix);
  return true;
}

std::string AO_ActivityCommandType::serialize(const uci::type::AO_ActivityCommandType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? AO_ActivityCommandType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, AO_ActivityCommandType_Names::Extern_Type_Name);
  }
  ActivityCommandBaseType::serialize(accessor, node, "", false, false, false);
  if (accessor.hasChangeComponentSettings()) {
    AO_ComponentSettingsType::serialize(accessor.getChangeComponentSettings(), node, AO_ActivityCommandType_Names::ChangeComponentSettings_Name);
  }
  if (accessor.hasChangeTarget()) {
    TargetType::serialize(accessor.getChangeTarget(), node, AO_ActivityCommandType_Names::ChangeTarget_Name);
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

