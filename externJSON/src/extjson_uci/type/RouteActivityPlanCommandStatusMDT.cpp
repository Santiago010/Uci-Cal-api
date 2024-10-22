/** @file RouteActivityPlanCommandStatusMDT.cpp
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

#include "extjson_uci/type/RouteActivityPlanCommandStatusMDT.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/PlanCommandStatusType.h"
#include "extjson_uci/type/RequirementPlanningResultType.h"
#include "extjson_uci/type/RouteActivityPlanCommandID_Type.h"
#include "extjson_uci/type/RouteActivityPlanID_Type.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/RouteActivityPlanCommandStatusMDT.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace RouteActivityPlanCommandStatusMDT_Names {

constexpr const char* Extern_Type_Name{"RouteActivityPlanCommandStatusMDT"};
constexpr const char* CommandID_Name{"CommandID"};
constexpr const char* PlanningStatus_Name{"PlanningStatus"};
constexpr const char* ActivityPlanningResult_Name{"ActivityPlanningResult"};
constexpr const char* ResultingPlanID_Name{"ResultingPlanID"};

} // namespace RouteActivityPlanCommandStatusMDT_Names

bool RouteActivityPlanCommandStatusMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::RouteActivityPlanCommandStatusMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RouteActivityPlanCommandStatusMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + RouteActivityPlanCommandStatusMDT_Names::CommandID_Name) {
      RouteActivityPlanCommandID_Type::deserialize(valueType.second, accessor.getCommandID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RouteActivityPlanCommandStatusMDT_Names::PlanningStatus_Name) {
      PlanCommandStatusType::deserialize(valueType.second, accessor.getPlanningStatus(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RouteActivityPlanCommandStatusMDT_Names::ActivityPlanningResult_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::RouteActivityPlanCommandStatusMDT::ActivityPlanningResult& boundedList = accessor.getActivityPlanningResult();
        const uci::type::RouteActivityPlanCommandStatusMDT::ActivityPlanningResult::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        RequirementPlanningResultType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + RouteActivityPlanCommandStatusMDT_Names::ResultingPlanID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::RouteActivityPlanCommandStatusMDT::ResultingPlanID& boundedList = accessor.getResultingPlanID();
        const uci::type::RouteActivityPlanCommandStatusMDT::ResultingPlanID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        RouteActivityPlanID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  return true;
}

std::string RouteActivityPlanCommandStatusMDT::serialize(const uci::type::RouteActivityPlanCommandStatusMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? RouteActivityPlanCommandStatusMDT_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, RouteActivityPlanCommandStatusMDT_Names::Extern_Type_Name);
  }
  RouteActivityPlanCommandID_Type::serialize(accessor.getCommandID(), node, RouteActivityPlanCommandStatusMDT_Names::CommandID_Name);
  PlanCommandStatusType::serialize(accessor.getPlanningStatus(), node, RouteActivityPlanCommandStatusMDT_Names::PlanningStatus_Name);
  {
    const uci::type::RouteActivityPlanCommandStatusMDT::ActivityPlanningResult& boundedList = accessor.getActivityPlanningResult();
    for (uci::type::RouteActivityPlanCommandStatusMDT::ActivityPlanningResult::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      RequirementPlanningResultType::serialize(boundedList.at(i), node, RouteActivityPlanCommandStatusMDT_Names::ActivityPlanningResult_Name);
    }
  }
  {
    const uci::type::RouteActivityPlanCommandStatusMDT::ResultingPlanID& boundedList = accessor.getResultingPlanID();
    for (uci::type::RouteActivityPlanCommandStatusMDT::ResultingPlanID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      RouteActivityPlanID_Type::serialize(boundedList.at(i), node, RouteActivityPlanCommandStatusMDT_Names::ResultingPlanID_Name);
    }
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

