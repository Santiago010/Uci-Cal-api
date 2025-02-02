/** @file ThreatAssessmentRequestType.cpp
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

#include "extxml_uci/type/ThreatAssessmentRequestType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/AssessmentSuppressionEnum.h"
#include "extxml_uci/type/EntityID_Type.h"
#include "extxml_uci/type/SystemRoutePlanSpecificationType.h"
#include "extxml_uci/type/ThreatCapabilityEnum.h"
#include "extxml_uci/util/DerivedTypesDeserializer.h"
#include "extxml_uci/util/DerivedTypesSerializer.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/base/accessorType.h"
#include "uci/type/ThreatAssessmentRequestType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace ThreatAssessmentRequestType_Names {

constexpr const char* Extern_Type_Name{"ThreatAssessmentRequestType"};
constexpr const char* ThreatCapability_Name{"ThreatCapability"};
constexpr const char* ThreatSuppression_Name{"ThreatSuppression"};
constexpr const char* ThreatEntityID_Name{"ThreatEntityID"};
constexpr const char* AssessmentInterval_Name{"AssessmentInterval"};
constexpr const char* SystemToAssess_Name{"SystemToAssess"};
constexpr const char* SupportingSystem_Name{"SupportingSystem"};

} // namespace ThreatAssessmentRequestType_Names

bool ThreatAssessmentRequestType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ThreatAssessmentRequestType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ThreatAssessmentRequestType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ThreatAssessmentRequestType_Names::ThreatCapability_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getThreatCapability().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ThreatAssessmentRequestType_Names::ThreatSuppression_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getThreatSuppression().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ThreatAssessmentRequestType_Names::ThreatEntityID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ThreatAssessmentRequestType::ThreatEntityID& boundedList = accessor.getThreatEntityID();
        const uci::type::ThreatAssessmentRequestType::ThreatEntityID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1, extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix));
        extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ThreatAssessmentRequestType_Names::AssessmentInterval_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAssessmentInterval(extxml_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    } else if (valueType.first == nsPrefix + ThreatAssessmentRequestType_Names::SystemToAssess_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ThreatAssessmentRequestType::SystemToAssess& boundedList = accessor.getSystemToAssess();
        const uci::type::ThreatAssessmentRequestType::SystemToAssess::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        SystemRoutePlanSpecificationType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ThreatAssessmentRequestType_Names::SupportingSystem_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ThreatAssessmentRequestType::SupportingSystem& boundedList = accessor.getSupportingSystem();
        const uci::type::ThreatAssessmentRequestType::SupportingSystem::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        SystemRoutePlanSpecificationType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  return true;
}

std::string ThreatAssessmentRequestType::serialize(const uci::type::ThreatAssessmentRequestType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? ThreatAssessmentRequestType_Names::Extern_Type_Name : nodeName};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::threatAssessmentRequestType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      extxml_uci::util::SerializationHelpers::addTypeAttribute(node, ThreatAssessmentRequestType_Names::Extern_Type_Name);
    }
    ThreatCapabilityEnum::serialize(accessor.getThreatCapability(), node, ThreatAssessmentRequestType_Names::ThreatCapability_Name, false);
    AssessmentSuppressionEnum::serialize(accessor.getThreatSuppression(), node, ThreatAssessmentRequestType_Names::ThreatSuppression_Name, false);
    {
      const uci::type::ThreatAssessmentRequestType::ThreatEntityID& boundedList = accessor.getThreatEntityID();
      for (uci::type::ThreatAssessmentRequestType::ThreatEntityID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        EntityID_Type::serialize(boundedList.at(i), node, ThreatAssessmentRequestType_Names::ThreatEntityID_Name);
      }
    }
    if (accessor.hasAssessmentInterval()) {
      extxml_uci::util::SerializationHelpers::serializeDuration(accessor.getAssessmentInterval(), node, ThreatAssessmentRequestType_Names::AssessmentInterval_Name);
    }
    {
      const uci::type::ThreatAssessmentRequestType::SystemToAssess& boundedList = accessor.getSystemToAssess();
      for (uci::type::ThreatAssessmentRequestType::SystemToAssess::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        SystemRoutePlanSpecificationType::serialize(boundedList.at(i), node, ThreatAssessmentRequestType_Names::SystemToAssess_Name);
      }
    }
    {
      const uci::type::ThreatAssessmentRequestType::SupportingSystem& boundedList = accessor.getSupportingSystem();
      for (uci::type::ThreatAssessmentRequestType::SupportingSystem::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        SystemRoutePlanSpecificationType::serialize(boundedList.at(i), node, ThreatAssessmentRequestType_Names::SupportingSystem_Name);
      }
    }
    if (createNode) {
      propTree.add_child(generatedNodeName, node);
    }
  } else {
    extxml_uci::util::DerivedTypesSerializer::serialize(accessor, propTree, nodeName, createNode);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

