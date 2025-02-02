/** @file RoutePlanCommandMDT.cpp
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

#include "extxml_uci/type/RoutePlanCommandMDT.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/CommandStateEnum.h"
#include "extxml_uci/type/MissionPlanCommandID_Type.h"
#include "extxml_uci/type/RoutePlanCommandID_Type.h"
#include "extxml_uci/type/RoutePlanInputsType.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/RoutePlanCommandMDT.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace RoutePlanCommandMDT_Names {

constexpr const char* Extern_Type_Name{"RoutePlanCommandMDT"};
constexpr const char* CommandID_Name{"CommandID"};
constexpr const char* ParentMissionPlanCommandID_Name{"ParentMissionPlanCommandID"};
constexpr const char* CommandState_Name{"CommandState"};
constexpr const char* Inputs_Name{"Inputs"};
constexpr const char* ForPlanningUseOnly_Name{"ForPlanningUseOnly"};

} // namespace RoutePlanCommandMDT_Names

bool RoutePlanCommandMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::RoutePlanCommandMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RoutePlanCommandMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RoutePlanCommandMDT_Names::CommandID_Name) {
      RoutePlanCommandID_Type::deserialize(valueType.second, accessor.getCommandID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RoutePlanCommandMDT_Names::ParentMissionPlanCommandID_Name) {
      MissionPlanCommandID_Type::deserialize(valueType.second, accessor.enableParentMissionPlanCommandID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RoutePlanCommandMDT_Names::CommandState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getCommandState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + RoutePlanCommandMDT_Names::Inputs_Name) {
      RoutePlanInputsType::deserialize(valueType.second, accessor.getInputs(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RoutePlanCommandMDT_Names::ForPlanningUseOnly_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setForPlanningUseOnly(extxml_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    }
  }
  return true;
}

std::string RoutePlanCommandMDT::serialize(const uci::type::RoutePlanCommandMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? RoutePlanCommandMDT_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, RoutePlanCommandMDT_Names::Extern_Type_Name);
  }
  RoutePlanCommandID_Type::serialize(accessor.getCommandID(), node, RoutePlanCommandMDT_Names::CommandID_Name);
  if (accessor.hasParentMissionPlanCommandID()) {
    MissionPlanCommandID_Type::serialize(accessor.getParentMissionPlanCommandID(), node, RoutePlanCommandMDT_Names::ParentMissionPlanCommandID_Name);
  }
  CommandStateEnum::serialize(accessor.getCommandState(), node, RoutePlanCommandMDT_Names::CommandState_Name, false);
  RoutePlanInputsType::serialize(accessor.getInputs(), node, RoutePlanCommandMDT_Names::Inputs_Name);
  extxml_uci::util::SerializationHelpers::serializeBoolean(accessor.getForPlanningUseOnly(), node, RoutePlanCommandMDT_Names::ForPlanningUseOnly_Name);
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

