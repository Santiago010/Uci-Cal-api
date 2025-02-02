/** @file WeatherReportDataType.cpp
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

#include "extjson_uci/type/WeatherReportDataType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/DateTimeRangeType.h"
#include "extjson_uci/type/WeatherReportType.h"
#include "extjson_uci/type/WeatherReportTypeEnum.h"
#include "extjson_uci/type/ZoneType.h"
#include "extjson_uci/util/DerivedTypesDeserializer.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/WeatherReportDataType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace WeatherReportDataType_Names {

constexpr const char* Extern_Type_Name{"WeatherReportDataType"};
constexpr const char* WeatherReportType_Name{"WeatherReportType"};
constexpr const char* Created_Name{"Created"};
constexpr const char* Schedule_Name{"Schedule"};
constexpr const char* WeatherArea_Name{"WeatherArea"};
constexpr const char* QNH_Name{"QNH"};
constexpr const char* WeatherData_Name{"WeatherData"};

} // namespace WeatherReportDataType_Names

bool WeatherReportDataType::deserialize(const boost::property_tree::ptree& propTree, uci::type::WeatherReportDataType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = WeatherReportDataType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + WeatherReportDataType_Names::WeatherReportType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getWeatherReportType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + WeatherReportDataType_Names::Created_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setCreated(extjson_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + WeatherReportDataType_Names::Schedule_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::WeatherReportDataType::Schedule& boundedList = accessor.getSchedule();
        const uci::type::WeatherReportDataType::Schedule::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        DateTimeRangeType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + WeatherReportDataType_Names::WeatherArea_Name) {
      extjson_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableWeatherArea(extjson_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + WeatherReportDataType_Names::QNH_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setQNH(extjson_uci::util::SerializationHelpers::deserializeFloat(*value));
      }
    } else if (valueType.first == nsPrefix + WeatherReportDataType_Names::WeatherData_Name) {
      WeatherReportType::deserialize(valueType.second, accessor.getWeatherData(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string WeatherReportDataType::serialize(const uci::type::WeatherReportDataType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? WeatherReportDataType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, WeatherReportDataType_Names::Extern_Type_Name);
  }
  WeatherReportTypeEnum::serialize(accessor.getWeatherReportType(), node, WeatherReportDataType_Names::WeatherReportType_Name, false);
  extjson_uci::util::SerializationHelpers::serializeDateTime(accessor.getCreated(), node, WeatherReportDataType_Names::Created_Name);
  {
    const uci::type::WeatherReportDataType::Schedule& boundedList = accessor.getSchedule();
    for (uci::type::WeatherReportDataType::Schedule::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      DateTimeRangeType::serialize(boundedList.at(i), node, WeatherReportDataType_Names::Schedule_Name);
    }
  }
  ZoneType::serialize(accessor.getWeatherArea(), node, WeatherReportDataType_Names::WeatherArea_Name);
  if (accessor.hasQNH()) {
    extjson_uci::util::SerializationHelpers::serializeFloat(accessor.getQNH(), node, WeatherReportDataType_Names::QNH_Name);
  }
  WeatherReportType::serialize(accessor.getWeatherData(), node, WeatherReportDataType_Names::WeatherData_Name);
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

