/** @file OrbitalProximityOperationsEventType.cpp
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

#include "extxml_uci/type/OrbitalProximityOperationsEventType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/RTN_PositionType.h"
#include "extxml_uci/type/RTN_VelocityType.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/OrbitalProximityOperationsEventType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace OrbitalProximityOperationsEventType_Names {

constexpr const char* Extern_Type_Name{"OrbitalProximityOperationsEventType"};
constexpr const char* ActorStateEpoch_Name{"ActorStateEpoch"};
constexpr const char* TargetStateEpoch_Name{"TargetStateEpoch"};
constexpr const char* AnalysisEpoch_Name{"AnalysisEpoch"};
constexpr const char* AnalysisDuration_Name{"AnalysisDuration"};
constexpr const char* DurationThreshold_Name{"DurationThreshold"};
constexpr const char* RangeThreshold_Name{"RangeThreshold"};
constexpr const char* MinimumRangeEpoch_Name{"MinimumRangeEpoch"};
constexpr const char* MinimumRange_Name{"MinimumRange"};
constexpr const char* RelativeSpeed_Name{"RelativeSpeed"};
constexpr const char* RelativePosition_Name{"RelativePosition"};
constexpr const char* RelativeVelocity_Name{"RelativeVelocity"};

} // namespace OrbitalProximityOperationsEventType_Names

bool OrbitalProximityOperationsEventType::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitalProximityOperationsEventType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitalProximityOperationsEventType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitalProximityOperationsEventType_Names::ActorStateEpoch_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setActorStateEpoch(extxml_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitalProximityOperationsEventType_Names::TargetStateEpoch_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTargetStateEpoch(extxml_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitalProximityOperationsEventType_Names::AnalysisEpoch_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAnalysisEpoch(extxml_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitalProximityOperationsEventType_Names::AnalysisDuration_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAnalysisDuration(extxml_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitalProximityOperationsEventType_Names::DurationThreshold_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setDurationThreshold(extxml_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitalProximityOperationsEventType_Names::RangeThreshold_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRangeThreshold(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitalProximityOperationsEventType_Names::MinimumRangeEpoch_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMinimumRangeEpoch(extxml_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitalProximityOperationsEventType_Names::MinimumRange_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMinimumRange(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitalProximityOperationsEventType_Names::RelativeSpeed_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRelativeSpeed(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitalProximityOperationsEventType_Names::RelativePosition_Name) {
      RTN_PositionType::deserialize(valueType.second, accessor.enableRelativePosition(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitalProximityOperationsEventType_Names::RelativeVelocity_Name) {
      RTN_VelocityType::deserialize(valueType.second, accessor.enableRelativeVelocity(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string OrbitalProximityOperationsEventType::serialize(const uci::type::OrbitalProximityOperationsEventType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? OrbitalProximityOperationsEventType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitalProximityOperationsEventType_Names::Extern_Type_Name);
  }
  if (accessor.hasActorStateEpoch()) {
    extxml_uci::util::SerializationHelpers::serializeDateTime(accessor.getActorStateEpoch(), node, OrbitalProximityOperationsEventType_Names::ActorStateEpoch_Name);
  }
  if (accessor.hasTargetStateEpoch()) {
    extxml_uci::util::SerializationHelpers::serializeDateTime(accessor.getTargetStateEpoch(), node, OrbitalProximityOperationsEventType_Names::TargetStateEpoch_Name);
  }
  if (accessor.hasAnalysisEpoch()) {
    extxml_uci::util::SerializationHelpers::serializeDateTime(accessor.getAnalysisEpoch(), node, OrbitalProximityOperationsEventType_Names::AnalysisEpoch_Name);
  }
  if (accessor.hasAnalysisDuration()) {
    extxml_uci::util::SerializationHelpers::serializeDuration(accessor.getAnalysisDuration(), node, OrbitalProximityOperationsEventType_Names::AnalysisDuration_Name);
  }
  if (accessor.hasDurationThreshold()) {
    extxml_uci::util::SerializationHelpers::serializeDuration(accessor.getDurationThreshold(), node, OrbitalProximityOperationsEventType_Names::DurationThreshold_Name);
  }
  if (accessor.hasRangeThreshold()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getRangeThreshold(), node, OrbitalProximityOperationsEventType_Names::RangeThreshold_Name);
  }
  if (accessor.hasMinimumRangeEpoch()) {
    extxml_uci::util::SerializationHelpers::serializeDateTime(accessor.getMinimumRangeEpoch(), node, OrbitalProximityOperationsEventType_Names::MinimumRangeEpoch_Name);
  }
  if (accessor.hasMinimumRange()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getMinimumRange(), node, OrbitalProximityOperationsEventType_Names::MinimumRange_Name);
  }
  if (accessor.hasRelativeSpeed()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getRelativeSpeed(), node, OrbitalProximityOperationsEventType_Names::RelativeSpeed_Name);
  }
  if (accessor.hasRelativePosition()) {
    RTN_PositionType::serialize(accessor.getRelativePosition(), node, OrbitalProximityOperationsEventType_Names::RelativePosition_Name);
  }
  if (accessor.hasRelativeVelocity()) {
    RTN_VelocityType::serialize(accessor.getRelativeVelocity(), node, OrbitalProximityOperationsEventType_Names::RelativeVelocity_Name);
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

