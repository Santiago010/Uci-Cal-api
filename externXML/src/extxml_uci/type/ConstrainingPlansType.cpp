/** @file ConstrainingPlansType.cpp
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

#include "extxml_uci/type/ConstrainingPlansType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/ActionPlanConstraintType.h"
#include "extxml_uci/type/ActivityPlanConstraintType.h"
#include "extxml_uci/type/CommAllocationConstraintType.h"
#include "extxml_uci/type/EffectPlanConstraintType.h"
#include "extxml_uci/type/MissionPlanID_Type.h"
#include "extxml_uci/type/OrbitActivityPlanConstraintType.h"
#include "extxml_uci/type/OrbitPlanConstraintType.h"
#include "extxml_uci/type/PlanTypeEnum.h"
#include "extxml_uci/type/ResponsePlanConstraintType.h"
#include "extxml_uci/type/RouteActivityPlanConstraintType.h"
#include "extxml_uci/type/RoutePlanConstraintType.h"
#include "extxml_uci/type/TaskPlanConstraintType.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/ConstrainingPlansType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace ConstrainingPlansType_Names {

constexpr const char* Extern_Type_Name{"ConstrainingPlansType"};
constexpr const char* ConstrainingPlanType_Name{"ConstrainingPlanType"};
constexpr const char* MissionPlanID_Name{"MissionPlanID"};
constexpr const char* TaskPlan_Name{"TaskPlan"};
constexpr const char* RoutePlan_Name{"RoutePlan"};
constexpr const char* RouteActivityPlan_Name{"RouteActivityPlan"};
constexpr const char* OrbitPlan_Name{"OrbitPlan"};
constexpr const char* OrbitActivityPlan_Name{"OrbitActivityPlan"};
constexpr const char* ActivityPlan_Name{"ActivityPlan"};
constexpr const char* CommAllocation_Name{"CommAllocation"};
constexpr const char* EffectPlan_Name{"EffectPlan"};
constexpr const char* ActionPlan_Name{"ActionPlan"};
constexpr const char* ResponsePlan_Name{"ResponsePlan"};

} // namespace ConstrainingPlansType_Names

bool ConstrainingPlansType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ConstrainingPlansType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ConstrainingPlansType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ConstrainingPlansType_Names::ConstrainingPlanType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ConstrainingPlansType::ConstrainingPlanType& boundedList = accessor.getConstrainingPlanType();
        const uci::type::ConstrainingPlansType::ConstrainingPlanType::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ConstrainingPlansType_Names::MissionPlanID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ConstrainingPlansType::MissionPlanID& boundedList = accessor.getMissionPlanID();
        const uci::type::ConstrainingPlansType::MissionPlanID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        MissionPlanID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ConstrainingPlansType_Names::TaskPlan_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ConstrainingPlansType::TaskPlan& boundedList = accessor.getTaskPlan();
        const uci::type::ConstrainingPlansType::TaskPlan::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        TaskPlanConstraintType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ConstrainingPlansType_Names::RoutePlan_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ConstrainingPlansType::RoutePlan& boundedList = accessor.getRoutePlan();
        const uci::type::ConstrainingPlansType::RoutePlan::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        RoutePlanConstraintType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ConstrainingPlansType_Names::RouteActivityPlan_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ConstrainingPlansType::RouteActivityPlan& boundedList = accessor.getRouteActivityPlan();
        const uci::type::ConstrainingPlansType::RouteActivityPlan::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        RouteActivityPlanConstraintType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ConstrainingPlansType_Names::OrbitPlan_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ConstrainingPlansType::OrbitPlan& boundedList = accessor.getOrbitPlan();
        const uci::type::ConstrainingPlansType::OrbitPlan::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        OrbitPlanConstraintType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ConstrainingPlansType_Names::OrbitActivityPlan_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ConstrainingPlansType::OrbitActivityPlan& boundedList = accessor.getOrbitActivityPlan();
        const uci::type::ConstrainingPlansType::OrbitActivityPlan::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        OrbitActivityPlanConstraintType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ConstrainingPlansType_Names::ActivityPlan_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ConstrainingPlansType::ActivityPlan& boundedList = accessor.getActivityPlan();
        const uci::type::ConstrainingPlansType::ActivityPlan::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        ActivityPlanConstraintType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ConstrainingPlansType_Names::CommAllocation_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ConstrainingPlansType::CommAllocation& boundedList = accessor.getCommAllocation();
        const uci::type::ConstrainingPlansType::CommAllocation::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        CommAllocationConstraintType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ConstrainingPlansType_Names::EffectPlan_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ConstrainingPlansType::EffectPlan& boundedList = accessor.getEffectPlan();
        const uci::type::ConstrainingPlansType::EffectPlan::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        EffectPlanConstraintType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ConstrainingPlansType_Names::ActionPlan_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ConstrainingPlansType::ActionPlan& boundedList = accessor.getActionPlan();
        const uci::type::ConstrainingPlansType::ActionPlan::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        ActionPlanConstraintType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ConstrainingPlansType_Names::ResponsePlan_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ConstrainingPlansType::ResponsePlan& boundedList = accessor.getResponsePlan();
        const uci::type::ConstrainingPlansType::ResponsePlan::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        ResponsePlanConstraintType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  return true;
}

std::string ConstrainingPlansType::serialize(const uci::type::ConstrainingPlansType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? ConstrainingPlansType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, ConstrainingPlansType_Names::Extern_Type_Name);
  }
  {
    const uci::type::ConstrainingPlansType::ConstrainingPlanType& boundedList = accessor.getConstrainingPlanType();
    for (uci::type::ConstrainingPlansType::ConstrainingPlanType::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      PlanTypeEnum::serialize(boundedList.at(i), node, ConstrainingPlansType_Names::ConstrainingPlanType_Name, false);
    }
  }
  {
    const uci::type::ConstrainingPlansType::MissionPlanID& boundedList = accessor.getMissionPlanID();
    for (uci::type::ConstrainingPlansType::MissionPlanID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      MissionPlanID_Type::serialize(boundedList.at(i), node, ConstrainingPlansType_Names::MissionPlanID_Name);
    }
  }
  {
    const uci::type::ConstrainingPlansType::TaskPlan& boundedList = accessor.getTaskPlan();
    for (uci::type::ConstrainingPlansType::TaskPlan::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      TaskPlanConstraintType::serialize(boundedList.at(i), node, ConstrainingPlansType_Names::TaskPlan_Name);
    }
  }
  {
    const uci::type::ConstrainingPlansType::RoutePlan& boundedList = accessor.getRoutePlan();
    for (uci::type::ConstrainingPlansType::RoutePlan::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      RoutePlanConstraintType::serialize(boundedList.at(i), node, ConstrainingPlansType_Names::RoutePlan_Name);
    }
  }
  {
    const uci::type::ConstrainingPlansType::RouteActivityPlan& boundedList = accessor.getRouteActivityPlan();
    for (uci::type::ConstrainingPlansType::RouteActivityPlan::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      RouteActivityPlanConstraintType::serialize(boundedList.at(i), node, ConstrainingPlansType_Names::RouteActivityPlan_Name);
    }
  }
  {
    const uci::type::ConstrainingPlansType::OrbitPlan& boundedList = accessor.getOrbitPlan();
    for (uci::type::ConstrainingPlansType::OrbitPlan::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      OrbitPlanConstraintType::serialize(boundedList.at(i), node, ConstrainingPlansType_Names::OrbitPlan_Name);
    }
  }
  {
    const uci::type::ConstrainingPlansType::OrbitActivityPlan& boundedList = accessor.getOrbitActivityPlan();
    for (uci::type::ConstrainingPlansType::OrbitActivityPlan::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      OrbitActivityPlanConstraintType::serialize(boundedList.at(i), node, ConstrainingPlansType_Names::OrbitActivityPlan_Name);
    }
  }
  {
    const uci::type::ConstrainingPlansType::ActivityPlan& boundedList = accessor.getActivityPlan();
    for (uci::type::ConstrainingPlansType::ActivityPlan::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      ActivityPlanConstraintType::serialize(boundedList.at(i), node, ConstrainingPlansType_Names::ActivityPlan_Name);
    }
  }
  {
    const uci::type::ConstrainingPlansType::CommAllocation& boundedList = accessor.getCommAllocation();
    for (uci::type::ConstrainingPlansType::CommAllocation::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      CommAllocationConstraintType::serialize(boundedList.at(i), node, ConstrainingPlansType_Names::CommAllocation_Name);
    }
  }
  {
    const uci::type::ConstrainingPlansType::EffectPlan& boundedList = accessor.getEffectPlan();
    for (uci::type::ConstrainingPlansType::EffectPlan::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      EffectPlanConstraintType::serialize(boundedList.at(i), node, ConstrainingPlansType_Names::EffectPlan_Name);
    }
  }
  {
    const uci::type::ConstrainingPlansType::ActionPlan& boundedList = accessor.getActionPlan();
    for (uci::type::ConstrainingPlansType::ActionPlan::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      ActionPlanConstraintType::serialize(boundedList.at(i), node, ConstrainingPlansType_Names::ActionPlan_Name);
    }
  }
  {
    const uci::type::ConstrainingPlansType::ResponsePlan& boundedList = accessor.getResponsePlan();
    for (uci::type::ConstrainingPlansType::ResponsePlan::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      ResponsePlanConstraintType::serialize(boundedList.at(i), node, ConstrainingPlansType_Names::ResponsePlan_Name);
    }
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

