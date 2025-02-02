/** @file RequirementConstraintsType.cpp
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

#include "extxml_uci/type/RequirementConstraintsType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/AnalyticConstraintsType.h"
#include "extxml_uci/type/ComparableRankingType.h"
#include "extxml_uci/type/DataProductClassificationLevelType.h"
#include "extxml_uci/type/EnvironmentPairingEnum.h"
#include "extxml_uci/type/RequirementAllocationParametersType.h"
#include "extxml_uci/type/RequirementDependencyType.h"
#include "extxml_uci/type/RequirementKinematicConstraintsType.h"
#include "extxml_uci/type/RequirementTaxonomyType.h"
#include "extxml_uci/type/RequirementTimingType.h"
#include "extxml_uci/type/SecurityInformationType.h"
#include "extxml_uci/util/DerivedTypesDeserializer.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/RequirementConstraintsType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace RequirementConstraintsType_Names {

constexpr const char* Extern_Type_Name{"RequirementConstraintsType"};
constexpr const char* Rank_Name{"Rank"};
constexpr const char* InterruptLowerRank_Name{"InterruptLowerRank"};
constexpr const char* Allocation_Name{"Allocation"};
constexpr const char* Timing_Name{"Timing"};
constexpr const char* Kinematic_Name{"Kinematic"};
constexpr const char* Dependency_Name{"Dependency"};
constexpr const char* MaxProductDisseminationClassificationLevel_Name{"MaxProductDisseminationClassificationLevel"};
constexpr const char* Analytic_Name{"Analytic"};
constexpr const char* AcceptableClassificationLevel_Name{"AcceptableClassificationLevel"};
constexpr const char* CommsRequired_Name{"CommsRequired"};
constexpr const char* AllowedRequirementTypes_Name{"AllowedRequirementTypes"};
constexpr const char* ExcludedRequirementTypes_Name{"ExcludedRequirementTypes"};
constexpr const char* ConstraintsNarrative_Name{"ConstraintsNarrative"};
constexpr const char* AllowedDomainPairing_Name{"AllowedDomainPairing"};
constexpr const char* ExcludedDomainPairing_Name{"ExcludedDomainPairing"};

} // namespace RequirementConstraintsType_Names

bool RequirementConstraintsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::RequirementConstraintsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RequirementConstraintsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RequirementConstraintsType_Names::Rank_Name) {
      ComparableRankingType::deserialize(valueType.second, accessor.enableRank(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RequirementConstraintsType_Names::InterruptLowerRank_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setInterruptLowerRank(extxml_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + RequirementConstraintsType_Names::Allocation_Name) {
      RequirementAllocationParametersType::deserialize(valueType.second, accessor.enableAllocation(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RequirementConstraintsType_Names::Timing_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::RequirementConstraintsType::Timing& boundedList = accessor.getTiming();
        const uci::type::RequirementConstraintsType::Timing::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        RequirementTimingType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + RequirementConstraintsType_Names::Kinematic_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::RequirementConstraintsType::Kinematic& boundedList = accessor.getKinematic();
        const uci::type::RequirementConstraintsType::Kinematic::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        RequirementKinematicConstraintsType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + RequirementConstraintsType_Names::Dependency_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::RequirementConstraintsType::Dependency& boundedList = accessor.getDependency();
        const uci::type::RequirementConstraintsType::Dependency::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        RequirementDependencyType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + RequirementConstraintsType_Names::MaxProductDisseminationClassificationLevel_Name) {
      DataProductClassificationLevelType::deserialize(valueType.second, accessor.enableMaxProductDisseminationClassificationLevel(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RequirementConstraintsType_Names::Analytic_Name) {
      AnalyticConstraintsType::deserialize(valueType.second, accessor.enableAnalytic(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RequirementConstraintsType_Names::AcceptableClassificationLevel_Name) {
      SecurityInformationType::deserialize(valueType.second, accessor.enableAcceptableClassificationLevel(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RequirementConstraintsType_Names::CommsRequired_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setCommsRequired(extxml_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + RequirementConstraintsType_Names::AllowedRequirementTypes_Name) {
      extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableAllowedRequirementTypes(extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RequirementConstraintsType_Names::ExcludedRequirementTypes_Name) {
      extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableExcludedRequirementTypes(extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RequirementConstraintsType_Names::ConstraintsNarrative_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setConstraintsNarrative(*value);
      }
    } else if (valueType.first == nsPrefix + RequirementConstraintsType_Names::AllowedDomainPairing_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::RequirementConstraintsType::AllowedDomainPairing& boundedList = accessor.getAllowedDomainPairing();
        const uci::type::RequirementConstraintsType::AllowedDomainPairing::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + RequirementConstraintsType_Names::ExcludedDomainPairing_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::RequirementConstraintsType::ExcludedDomainPairing& boundedList = accessor.getExcludedDomainPairing();
        const uci::type::RequirementConstraintsType::ExcludedDomainPairing::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    }
  }
  return true;
}

std::string RequirementConstraintsType::serialize(const uci::type::RequirementConstraintsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? RequirementConstraintsType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, RequirementConstraintsType_Names::Extern_Type_Name);
  }
  if (accessor.hasRank()) {
    ComparableRankingType::serialize(accessor.getRank(), node, RequirementConstraintsType_Names::Rank_Name);
  }
  if (accessor.hasInterruptLowerRank()) {
    extxml_uci::util::SerializationHelpers::serializeBoolean(accessor.getInterruptLowerRank(), node, RequirementConstraintsType_Names::InterruptLowerRank_Name);
  }
  if (accessor.hasAllocation()) {
    RequirementAllocationParametersType::serialize(accessor.getAllocation(), node, RequirementConstraintsType_Names::Allocation_Name);
  }
  {
    const uci::type::RequirementConstraintsType::Timing& boundedList = accessor.getTiming();
    for (uci::type::RequirementConstraintsType::Timing::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      RequirementTimingType::serialize(boundedList.at(i), node, RequirementConstraintsType_Names::Timing_Name);
    }
  }
  {
    const uci::type::RequirementConstraintsType::Kinematic& boundedList = accessor.getKinematic();
    for (uci::type::RequirementConstraintsType::Kinematic::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      RequirementKinematicConstraintsType::serialize(boundedList.at(i), node, RequirementConstraintsType_Names::Kinematic_Name);
    }
  }
  {
    const uci::type::RequirementConstraintsType::Dependency& boundedList = accessor.getDependency();
    for (uci::type::RequirementConstraintsType::Dependency::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      RequirementDependencyType::serialize(boundedList.at(i), node, RequirementConstraintsType_Names::Dependency_Name);
    }
  }
  if (accessor.hasMaxProductDisseminationClassificationLevel()) {
    DataProductClassificationLevelType::serialize(accessor.getMaxProductDisseminationClassificationLevel(), node, RequirementConstraintsType_Names::MaxProductDisseminationClassificationLevel_Name);
  }
  if (accessor.hasAnalytic()) {
    AnalyticConstraintsType::serialize(accessor.getAnalytic(), node, RequirementConstraintsType_Names::Analytic_Name);
  }
  if (accessor.hasAcceptableClassificationLevel()) {
    SecurityInformationType::serialize(accessor.getAcceptableClassificationLevel(), node, RequirementConstraintsType_Names::AcceptableClassificationLevel_Name);
  }
  if (accessor.hasCommsRequired()) {
    extxml_uci::util::SerializationHelpers::serializeBoolean(accessor.getCommsRequired(), node, RequirementConstraintsType_Names::CommsRequired_Name);
  }
  if (accessor.hasAllowedRequirementTypes()) {
    RequirementTaxonomyType::serialize(accessor.getAllowedRequirementTypes(), node, RequirementConstraintsType_Names::AllowedRequirementTypes_Name);
  }
  if (accessor.hasExcludedRequirementTypes()) {
    RequirementTaxonomyType::serialize(accessor.getExcludedRequirementTypes(), node, RequirementConstraintsType_Names::ExcludedRequirementTypes_Name);
  }
  if (accessor.hasConstraintsNarrative()) {
    extxml_uci::util::SerializationHelpers::serializeString(accessor.getConstraintsNarrative(), node, RequirementConstraintsType_Names::ConstraintsNarrative_Name);
  }
  {
    const uci::type::RequirementConstraintsType::AllowedDomainPairing& boundedList = accessor.getAllowedDomainPairing();
    for (uci::type::RequirementConstraintsType::AllowedDomainPairing::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      EnvironmentPairingEnum::serialize(boundedList.at(i), node, RequirementConstraintsType_Names::AllowedDomainPairing_Name, false);
    }
  }
  {
    const uci::type::RequirementConstraintsType::ExcludedDomainPairing& boundedList = accessor.getExcludedDomainPairing();
    for (uci::type::RequirementConstraintsType::ExcludedDomainPairing::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      EnvironmentPairingEnum::serialize(boundedList.at(i), node, RequirementConstraintsType_Names::ExcludedDomainPairing_Name, false);
    }
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

