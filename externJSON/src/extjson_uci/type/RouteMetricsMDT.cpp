/** @file RouteMetricsMDT.cpp
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

#include "extjson_uci/type/RouteMetricsMDT.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/ActivityMetricsType.h"
#include "extjson_uci/type/ActivityPlanPartsEnum.h"
#include "extjson_uci/type/MetricsType.h"
#include "extjson_uci/type/PathMetricsType.h"
#include "extjson_uci/type/PathTypeEnum.h"
#include "extjson_uci/type/RouteActivityPlanID_Type.h"
#include "extjson_uci/type/RouteMetricsID_Type.h"
#include "extjson_uci/type/RoutePlanID_Type.h"
#include "extjson_uci/type/SegmentMetricsType.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/RouteMetricsMDT.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace RouteMetricsMDT_Names {

constexpr const char* Extern_Type_Name{"RouteMetricsMDT"};
constexpr const char* RouteMetricsID_Name{"RouteMetricsID"};
constexpr const char* RoutePlanID_Name{"RoutePlanID"};
constexpr const char* RouteParts_Name{"RouteParts"};
constexpr const char* RouteActivityPlanID_Name{"RouteActivityPlanID"};
constexpr const char* ActivityPlanParts_Name{"ActivityPlanParts"};
constexpr const char* RouteMetrics_Name{"RouteMetrics"};
constexpr const char* PathMetrics_Name{"PathMetrics"};
constexpr const char* SegmentMetrics_Name{"SegmentMetrics"};
constexpr const char* ActivityMetrics_Name{"ActivityMetrics"};

} // namespace RouteMetricsMDT_Names

bool RouteMetricsMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::RouteMetricsMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RouteMetricsMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + RouteMetricsMDT_Names::RouteMetricsID_Name) {
      RouteMetricsID_Type::deserialize(valueType.second, accessor.getRouteMetricsID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RouteMetricsMDT_Names::RoutePlanID_Name) {
      RoutePlanID_Type::deserialize(valueType.second, accessor.getRoutePlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RouteMetricsMDT_Names::RouteParts_Name) {
      PathTypeEnum::deserializeList(valueType.second, accessor.getRouteParts());
    } else if (valueType.first == nsPrefix + RouteMetricsMDT_Names::RouteActivityPlanID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::RouteMetricsMDT::RouteActivityPlanID& boundedList = accessor.getRouteActivityPlanID();
        const uci::type::RouteMetricsMDT::RouteActivityPlanID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        RouteActivityPlanID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + RouteMetricsMDT_Names::ActivityPlanParts_Name) {
      ActivityPlanPartsEnum::deserializeList(valueType.second, accessor.getActivityPlanParts());
    } else if (valueType.first == nsPrefix + RouteMetricsMDT_Names::RouteMetrics_Name) {
      MetricsType::deserialize(valueType.second, accessor.enableRouteMetrics(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RouteMetricsMDT_Names::PathMetrics_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::RouteMetricsMDT::PathMetrics& boundedList = accessor.getPathMetrics();
        const uci::type::RouteMetricsMDT::PathMetrics::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        PathMetricsType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + RouteMetricsMDT_Names::SegmentMetrics_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::RouteMetricsMDT::SegmentMetrics& boundedList = accessor.getSegmentMetrics();
        const uci::type::RouteMetricsMDT::SegmentMetrics::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        SegmentMetricsType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + RouteMetricsMDT_Names::ActivityMetrics_Name) {
      ActivityMetricsType::deserialize(valueType.second, accessor.enableActivityMetrics(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string RouteMetricsMDT::serialize(const uci::type::RouteMetricsMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? RouteMetricsMDT_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, RouteMetricsMDT_Names::Extern_Type_Name);
  }
  RouteMetricsID_Type::serialize(accessor.getRouteMetricsID(), node, RouteMetricsMDT_Names::RouteMetricsID_Name);
  RoutePlanID_Type::serialize(accessor.getRoutePlanID(), node, RouteMetricsMDT_Names::RoutePlanID_Name);
  {
    PathTypeEnum::serializeList(accessor.getRouteParts(), node, RouteMetricsMDT_Names::RouteParts_Name);
  }
  {
    const uci::type::RouteMetricsMDT::RouteActivityPlanID& boundedList = accessor.getRouteActivityPlanID();
    for (uci::type::RouteMetricsMDT::RouteActivityPlanID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      RouteActivityPlanID_Type::serialize(boundedList.at(i), node, RouteMetricsMDT_Names::RouteActivityPlanID_Name);
    }
  }
  {
    ActivityPlanPartsEnum::serializeList(accessor.getActivityPlanParts(), node, RouteMetricsMDT_Names::ActivityPlanParts_Name);
  }
  if (accessor.hasRouteMetrics()) {
    MetricsType::serialize(accessor.getRouteMetrics(), node, RouteMetricsMDT_Names::RouteMetrics_Name);
  }
  {
    const uci::type::RouteMetricsMDT::PathMetrics& boundedList = accessor.getPathMetrics();
    for (uci::type::RouteMetricsMDT::PathMetrics::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      PathMetricsType::serialize(boundedList.at(i), node, RouteMetricsMDT_Names::PathMetrics_Name);
    }
  }
  {
    const uci::type::RouteMetricsMDT::SegmentMetrics& boundedList = accessor.getSegmentMetrics();
    for (uci::type::RouteMetricsMDT::SegmentMetrics::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      SegmentMetricsType::serialize(boundedList.at(i), node, RouteMetricsMDT_Names::SegmentMetrics_Name);
    }
  }
  if (accessor.hasActivityMetrics()) {
    ActivityMetricsType::serialize(accessor.getActivityMetrics(), node, RouteMetricsMDT_Names::ActivityMetrics_Name);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

