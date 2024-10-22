/** @file SAR_PredictedActivityDetailType.cpp
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

#include "extxml_uci/type/SAR_PredictedActivityDetailType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/ActivityStateEnum.h"
#include "extxml_uci/type/CannotComplyType.h"
#include "extxml_uci/util/DerivedTypesDeserializer.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/SAR_PredictedActivityDetailType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace SAR_PredictedActivityDetailType_Names {

constexpr const char* Extern_Type_Name{"SAR_PredictedActivityDetailType"};
constexpr const char* ActivityState_Name{"ActivityState"};
constexpr const char* ActivityReason_Name{"ActivityReason"};
constexpr const char* EstimatedStartTime_Name{"EstimatedStartTime"};
constexpr const char* EstimatedStopTime_Name{"EstimatedStopTime"};
constexpr const char* EstimatedERP_Name{"EstimatedERP"};
constexpr const char* EstimatedMinimumCNR_Name{"EstimatedMinimumCNR"};
constexpr const char* EstimatedAchievableEllipticity_Name{"EstimatedAchievableEllipticity"};
constexpr const char* EstimatedAchievableResolution_Name{"EstimatedAchievableResolution"};
constexpr const char* EstimatedPercentageInFOR_Name{"EstimatedPercentageInFOR"};
constexpr const char* EstimatedPercentageOccluded_Name{"EstimatedPercentageOccluded"};
constexpr const char* ConcurrentExecutionAssumed_Name{"ConcurrentExecutionAssumed"};

} // namespace SAR_PredictedActivityDetailType_Names

bool SAR_PredictedActivityDetailType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SAR_PredictedActivityDetailType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SAR_PredictedActivityDetailType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SAR_PredictedActivityDetailType_Names::ActivityState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableActivityState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + SAR_PredictedActivityDetailType_Names::ActivityReason_Name) {
      extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableActivityReason(extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SAR_PredictedActivityDetailType_Names::EstimatedStartTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEstimatedStartTime(extxml_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + SAR_PredictedActivityDetailType_Names::EstimatedStopTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEstimatedStopTime(extxml_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + SAR_PredictedActivityDetailType_Names::EstimatedERP_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEstimatedERP(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + SAR_PredictedActivityDetailType_Names::EstimatedMinimumCNR_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEstimatedMinimumCNR(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + SAR_PredictedActivityDetailType_Names::EstimatedAchievableEllipticity_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEstimatedAchievableEllipticity(extxml_uci::util::SerializationHelpers::deserializeFloat(*value));
      }
    } else if (valueType.first == nsPrefix + SAR_PredictedActivityDetailType_Names::EstimatedAchievableResolution_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEstimatedAchievableResolution(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + SAR_PredictedActivityDetailType_Names::EstimatedPercentageInFOR_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEstimatedPercentageInFOR(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + SAR_PredictedActivityDetailType_Names::EstimatedPercentageOccluded_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEstimatedPercentageOccluded(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + SAR_PredictedActivityDetailType_Names::ConcurrentExecutionAssumed_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setConcurrentExecutionAssumed(extxml_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    }
  }
  return true;
}

std::string SAR_PredictedActivityDetailType::serialize(const uci::type::SAR_PredictedActivityDetailType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? SAR_PredictedActivityDetailType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, SAR_PredictedActivityDetailType_Names::Extern_Type_Name);
  }
  if (accessor.hasActivityState()) {
    ActivityStateEnum::serialize(accessor.getActivityState(), node, SAR_PredictedActivityDetailType_Names::ActivityState_Name, false);
  }
  if (accessor.hasActivityReason()) {
    CannotComplyType::serialize(accessor.getActivityReason(), node, SAR_PredictedActivityDetailType_Names::ActivityReason_Name);
  }
  if (accessor.hasEstimatedStartTime()) {
    extxml_uci::util::SerializationHelpers::serializeDateTime(accessor.getEstimatedStartTime(), node, SAR_PredictedActivityDetailType_Names::EstimatedStartTime_Name);
  }
  if (accessor.hasEstimatedStopTime()) {
    extxml_uci::util::SerializationHelpers::serializeDateTime(accessor.getEstimatedStopTime(), node, SAR_PredictedActivityDetailType_Names::EstimatedStopTime_Name);
  }
  if (accessor.hasEstimatedERP()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getEstimatedERP(), node, SAR_PredictedActivityDetailType_Names::EstimatedERP_Name);
  }
  if (accessor.hasEstimatedMinimumCNR()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getEstimatedMinimumCNR(), node, SAR_PredictedActivityDetailType_Names::EstimatedMinimumCNR_Name);
  }
  if (accessor.hasEstimatedAchievableEllipticity()) {
    extxml_uci::util::SerializationHelpers::serializeFloat(accessor.getEstimatedAchievableEllipticity(), node, SAR_PredictedActivityDetailType_Names::EstimatedAchievableEllipticity_Name);
  }
  if (accessor.hasEstimatedAchievableResolution()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getEstimatedAchievableResolution(), node, SAR_PredictedActivityDetailType_Names::EstimatedAchievableResolution_Name);
  }
  if (accessor.hasEstimatedPercentageInFOR()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getEstimatedPercentageInFOR(), node, SAR_PredictedActivityDetailType_Names::EstimatedPercentageInFOR_Name);
  }
  if (accessor.hasEstimatedPercentageOccluded()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getEstimatedPercentageOccluded(), node, SAR_PredictedActivityDetailType_Names::EstimatedPercentageOccluded_Name);
  }
  extxml_uci::util::SerializationHelpers::serializeBoolean(accessor.getConcurrentExecutionAssumed(), node, SAR_PredictedActivityDetailType_Names::ConcurrentExecutionAssumed_Name);
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

