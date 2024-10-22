/** @file PathSegmentConditionType.cpp
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

#include "extjson_uci/type/PathSegmentConditionType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/AltitudeRangeType.h"
#include "extjson_uci/type/DateTimeRangeType.h"
#include "extjson_uci/type/EnduranceRemainingType.h"
#include "extjson_uci/type/SegmentCaptureType.h"
#include "extjson_uci/type/SystemContingencyLevelEnum.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/PathSegmentConditionType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace PathSegmentConditionType_Names {

constexpr const char* Extern_Type_Name{"PathSegmentConditionType"};
constexpr const char* AltitudeRange_Name{"AltitudeRange"};
constexpr const char* TimeWindow_Name{"TimeWindow"};
constexpr const char* SegmentCapture_Name{"SegmentCapture"};
constexpr const char* OperatorInput_Name{"OperatorInput"};
constexpr const char* Endurance_Name{"Endurance"};
constexpr const char* ContingencyLevel_Name{"ContingencyLevel"};

} // namespace PathSegmentConditionType_Names

bool PathSegmentConditionType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PathSegmentConditionType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PathSegmentConditionType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + PathSegmentConditionType_Names::AltitudeRange_Name) {
      AltitudeRangeType::deserialize(valueType.second, accessor.enableAltitudeRange(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PathSegmentConditionType_Names::TimeWindow_Name) {
      DateTimeRangeType::deserialize(valueType.second, accessor.enableTimeWindow(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PathSegmentConditionType_Names::SegmentCapture_Name) {
      SegmentCaptureType::deserialize(valueType.second, accessor.enableSegmentCapture(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PathSegmentConditionType_Names::OperatorInput_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setOperatorInput(extjson_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + PathSegmentConditionType_Names::Endurance_Name) {
      EnduranceRemainingType::deserialize(valueType.second, accessor.enableEndurance(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PathSegmentConditionType_Names::ContingencyLevel_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableContingencyLevel().setValueFromName(*value);
      }
    }
  }
  return true;
}

std::string PathSegmentConditionType::serialize(const uci::type::PathSegmentConditionType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? PathSegmentConditionType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, PathSegmentConditionType_Names::Extern_Type_Name);
  }
  if (accessor.hasAltitudeRange()) {
    AltitudeRangeType::serialize(accessor.getAltitudeRange(), node, PathSegmentConditionType_Names::AltitudeRange_Name);
  }
  if (accessor.hasTimeWindow()) {
    DateTimeRangeType::serialize(accessor.getTimeWindow(), node, PathSegmentConditionType_Names::TimeWindow_Name);
  }
  if (accessor.hasSegmentCapture()) {
    SegmentCaptureType::serialize(accessor.getSegmentCapture(), node, PathSegmentConditionType_Names::SegmentCapture_Name);
  }
  if (accessor.hasOperatorInput()) {
    extjson_uci::util::SerializationHelpers::serializeBoolean(accessor.getOperatorInput(), node, PathSegmentConditionType_Names::OperatorInput_Name);
  }
  if (accessor.hasEndurance()) {
    EnduranceRemainingType::serialize(accessor.getEndurance(), node, PathSegmentConditionType_Names::Endurance_Name);
  }
  if (accessor.hasContingencyLevel()) {
    SystemContingencyLevelEnum::serialize(accessor.getContingencyLevel(), node, PathSegmentConditionType_Names::ContingencyLevel_Name, false);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

