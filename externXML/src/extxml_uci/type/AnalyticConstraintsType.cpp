/** @file AnalyticConstraintsType.cpp
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

#include "extxml_uci/type/AnalyticConstraintsType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/AccessAssessmentFilterType.h"
#include "extxml_uci/type/OpConstraintWeightingType.h"
#include "extxml_uci/type/RF_TaskPerformanceType.h"
#include "extxml_uci/type/SurvivabilityRiskSettingType.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/AnalyticConstraintsType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace AnalyticConstraintsType_Names {

constexpr const char* Extern_Type_Name{"AnalyticConstraintsType"};
constexpr const char* OpConstraint_Name{"OpConstraint"};
constexpr const char* RiskSetting_Name{"RiskSetting"};
constexpr const char* AccessAssessmentThreshold_Name{"AccessAssessmentThreshold"};
constexpr const char* RF_TaskPerformance_Name{"RF_TaskPerformance"};

} // namespace AnalyticConstraintsType_Names

bool AnalyticConstraintsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::AnalyticConstraintsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = AnalyticConstraintsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + AnalyticConstraintsType_Names::OpConstraint_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::AnalyticConstraintsType::OpConstraint& boundedList = accessor.getOpConstraint();
        const uci::type::AnalyticConstraintsType::OpConstraint::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        OpConstraintWeightingType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + AnalyticConstraintsType_Names::RiskSetting_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::AnalyticConstraintsType::RiskSetting& boundedList = accessor.getRiskSetting();
        const uci::type::AnalyticConstraintsType::RiskSetting::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        SurvivabilityRiskSettingType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + AnalyticConstraintsType_Names::AccessAssessmentThreshold_Name) {
      AccessAssessmentFilterType::deserialize(valueType.second, accessor.enableAccessAssessmentThreshold(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + AnalyticConstraintsType_Names::RF_TaskPerformance_Name) {
      RF_TaskPerformanceType::deserialize(valueType.second, accessor.enableRF_TaskPerformance(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string AnalyticConstraintsType::serialize(const uci::type::AnalyticConstraintsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? AnalyticConstraintsType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, AnalyticConstraintsType_Names::Extern_Type_Name);
  }
  {
    const uci::type::AnalyticConstraintsType::OpConstraint& boundedList = accessor.getOpConstraint();
    for (uci::type::AnalyticConstraintsType::OpConstraint::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      OpConstraintWeightingType::serialize(boundedList.at(i), node, AnalyticConstraintsType_Names::OpConstraint_Name);
    }
  }
  {
    const uci::type::AnalyticConstraintsType::RiskSetting& boundedList = accessor.getRiskSetting();
    for (uci::type::AnalyticConstraintsType::RiskSetting::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      SurvivabilityRiskSettingType::serialize(boundedList.at(i), node, AnalyticConstraintsType_Names::RiskSetting_Name);
    }
  }
  if (accessor.hasAccessAssessmentThreshold()) {
    AccessAssessmentFilterType::serialize(accessor.getAccessAssessmentThreshold(), node, AnalyticConstraintsType_Names::AccessAssessmentThreshold_Name);
  }
  if (accessor.hasRF_TaskPerformance()) {
    RF_TaskPerformanceType::serialize(accessor.getRF_TaskPerformance(), node, AnalyticConstraintsType_Names::RF_TaskPerformance_Name);
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

