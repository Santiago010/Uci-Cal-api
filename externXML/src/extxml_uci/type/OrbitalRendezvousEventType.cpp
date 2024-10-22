/** @file OrbitalRendezvousEventType.cpp
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

#include "extxml_uci/type/OrbitalRendezvousEventType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/OrbitalDeltaVelocity_A_Type.h"
#include "extxml_uci/type/OrbitalObjectComparisonDeltaType.h"
#include "extxml_uci/type/OrbitalToleranceValuesType.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/OrbitalRendezvousEventType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace OrbitalRendezvousEventType_Names {

constexpr const char* Extern_Type_Name{"OrbitalRendezvousEventType"};
constexpr const char* ActorStateEpoch_Name{"ActorStateEpoch"};
constexpr const char* TargetStateEpoch_Name{"TargetStateEpoch"};
constexpr const char* AnalysisEpoch_Name{"AnalysisEpoch"};
constexpr const char* AnalysisDuration_Name{"AnalysisDuration"};
constexpr const char* EventIntervalCoverage_Name{"EventIntervalCoverage"};
constexpr const char* NumberSubIntervals_Name{"NumberSubIntervals"};
constexpr const char* MinimumRange_Name{"MinimumRange"};
constexpr const char* MinimumRangeEpoch_Name{"MinimumRangeEpoch"};
constexpr const char* MinimumRangeAnalysisDuration_Name{"MinimumRangeAnalysisDuration"};
constexpr const char* MinimumInPlaneSeparationAngle_Name{"MinimumInPlaneSeparationAngle"};
constexpr const char* MinimumInPlaneSeparationEpoch_Name{"MinimumInPlaneSeparationEpoch"};
constexpr const char* ObjectComparisonAtEventStart_Name{"ObjectComparisonAtEventStart"};
constexpr const char* ObjectComparisonAtEventEnd_Name{"ObjectComparisonAtEventEnd"};
constexpr const char* ObjectComparisonMeans_Name{"ObjectComparisonMeans"};
constexpr const char* DeltaV_Name{"DeltaV"};
constexpr const char* ToleranceValues_Name{"ToleranceValues"};

} // namespace OrbitalRendezvousEventType_Names

bool OrbitalRendezvousEventType::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitalRendezvousEventType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitalRendezvousEventType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitalRendezvousEventType_Names::ActorStateEpoch_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setActorStateEpoch(extxml_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitalRendezvousEventType_Names::TargetStateEpoch_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTargetStateEpoch(extxml_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitalRendezvousEventType_Names::AnalysisEpoch_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAnalysisEpoch(extxml_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitalRendezvousEventType_Names::AnalysisDuration_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAnalysisDuration(extxml_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitalRendezvousEventType_Names::EventIntervalCoverage_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEventIntervalCoverage(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitalRendezvousEventType_Names::NumberSubIntervals_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setNumberSubIntervals(extxml_uci::util::SerializationHelpers::deserializeInt(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitalRendezvousEventType_Names::MinimumRange_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMinimumRange(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitalRendezvousEventType_Names::MinimumRangeEpoch_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMinimumRangeEpoch(extxml_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitalRendezvousEventType_Names::MinimumRangeAnalysisDuration_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMinimumRangeAnalysisDuration(extxml_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitalRendezvousEventType_Names::MinimumInPlaneSeparationAngle_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMinimumInPlaneSeparationAngle(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitalRendezvousEventType_Names::MinimumInPlaneSeparationEpoch_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMinimumInPlaneSeparationEpoch(extxml_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitalRendezvousEventType_Names::ObjectComparisonAtEventStart_Name) {
      OrbitalObjectComparisonDeltaType::deserialize(valueType.second, accessor.enableObjectComparisonAtEventStart(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitalRendezvousEventType_Names::ObjectComparisonAtEventEnd_Name) {
      OrbitalObjectComparisonDeltaType::deserialize(valueType.second, accessor.enableObjectComparisonAtEventEnd(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitalRendezvousEventType_Names::ObjectComparisonMeans_Name) {
      OrbitalObjectComparisonDeltaType::deserialize(valueType.second, accessor.enableObjectComparisonMeans(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitalRendezvousEventType_Names::DeltaV_Name) {
      OrbitalDeltaVelocity_A_Type::deserialize(valueType.second, accessor.getDeltaV(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitalRendezvousEventType_Names::ToleranceValues_Name) {
      OrbitalToleranceValuesType::deserialize(valueType.second, accessor.getToleranceValues(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string OrbitalRendezvousEventType::serialize(const uci::type::OrbitalRendezvousEventType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? OrbitalRendezvousEventType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitalRendezvousEventType_Names::Extern_Type_Name);
  }
  extxml_uci::util::SerializationHelpers::serializeDateTime(accessor.getActorStateEpoch(), node, OrbitalRendezvousEventType_Names::ActorStateEpoch_Name);
  extxml_uci::util::SerializationHelpers::serializeDateTime(accessor.getTargetStateEpoch(), node, OrbitalRendezvousEventType_Names::TargetStateEpoch_Name);
  if (accessor.hasAnalysisEpoch()) {
    extxml_uci::util::SerializationHelpers::serializeDateTime(accessor.getAnalysisEpoch(), node, OrbitalRendezvousEventType_Names::AnalysisEpoch_Name);
  }
  if (accessor.hasAnalysisDuration()) {
    extxml_uci::util::SerializationHelpers::serializeDuration(accessor.getAnalysisDuration(), node, OrbitalRendezvousEventType_Names::AnalysisDuration_Name);
  }
  extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getEventIntervalCoverage(), node, OrbitalRendezvousEventType_Names::EventIntervalCoverage_Name);
  extxml_uci::util::SerializationHelpers::serializeInt(accessor.getNumberSubIntervals(), node, OrbitalRendezvousEventType_Names::NumberSubIntervals_Name);
  if (accessor.hasMinimumRange()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getMinimumRange(), node, OrbitalRendezvousEventType_Names::MinimumRange_Name);
  }
  if (accessor.hasMinimumRangeEpoch()) {
    extxml_uci::util::SerializationHelpers::serializeDateTime(accessor.getMinimumRangeEpoch(), node, OrbitalRendezvousEventType_Names::MinimumRangeEpoch_Name);
  }
  extxml_uci::util::SerializationHelpers::serializeDuration(accessor.getMinimumRangeAnalysisDuration(), node, OrbitalRendezvousEventType_Names::MinimumRangeAnalysisDuration_Name);
  if (accessor.hasMinimumInPlaneSeparationAngle()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getMinimumInPlaneSeparationAngle(), node, OrbitalRendezvousEventType_Names::MinimumInPlaneSeparationAngle_Name);
  }
  if (accessor.hasMinimumInPlaneSeparationEpoch()) {
    extxml_uci::util::SerializationHelpers::serializeDateTime(accessor.getMinimumInPlaneSeparationEpoch(), node, OrbitalRendezvousEventType_Names::MinimumInPlaneSeparationEpoch_Name);
  }
  if (accessor.hasObjectComparisonAtEventStart()) {
    OrbitalObjectComparisonDeltaType::serialize(accessor.getObjectComparisonAtEventStart(), node, OrbitalRendezvousEventType_Names::ObjectComparisonAtEventStart_Name);
  }
  if (accessor.hasObjectComparisonAtEventEnd()) {
    OrbitalObjectComparisonDeltaType::serialize(accessor.getObjectComparisonAtEventEnd(), node, OrbitalRendezvousEventType_Names::ObjectComparisonAtEventEnd_Name);
  }
  if (accessor.hasObjectComparisonMeans()) {
    OrbitalObjectComparisonDeltaType::serialize(accessor.getObjectComparisonMeans(), node, OrbitalRendezvousEventType_Names::ObjectComparisonMeans_Name);
  }
  OrbitalDeltaVelocity_A_Type::serialize(accessor.getDeltaV(), node, OrbitalRendezvousEventType_Names::DeltaV_Name);
  OrbitalToleranceValuesType::serialize(accessor.getToleranceValues(), node, OrbitalRendezvousEventType_Names::ToleranceValues_Name);
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

