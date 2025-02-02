/** @file ApplicabilityType.cpp
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

#include "extxml_uci/type/ApplicabilityType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/ConstrainingPlanPartsType.h"
#include "extxml_uci/type/IdentityType.h"
#include "extxml_uci/type/RequirementTaxonomyType.h"
#include "extxml_uci/util/DerivedTypesDeserializer.h"
#include "extxml_uci/util/DerivedTypesSerializer.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/base/accessorType.h"
#include "uci/type/ApplicabilityType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace ApplicabilityType_Names {

constexpr const char* Extern_Type_Name{"ApplicabilityType"};
constexpr const char* System_Name{"System"};
constexpr const char* RequirementTypes_Name{"RequirementTypes"};
constexpr const char* ConstrainingPlan_Name{"ConstrainingPlan"};

} // namespace ApplicabilityType_Names

bool ApplicabilityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ApplicabilityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ApplicabilityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ApplicabilityType_Names::System_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ApplicabilityType::System& boundedList = accessor.getSystem();
        const uci::type::ApplicabilityType::System::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1, extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix));
        extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ApplicabilityType_Names::RequirementTypes_Name) {
      extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableRequirementTypes(extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ApplicabilityType_Names::ConstrainingPlan_Name) {
      ConstrainingPlanPartsType::deserialize(valueType.second, accessor.enableConstrainingPlan(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string ApplicabilityType::serialize(const uci::type::ApplicabilityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? ApplicabilityType_Names::Extern_Type_Name : nodeName};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::applicabilityType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      extxml_uci::util::SerializationHelpers::addTypeAttribute(node, ApplicabilityType_Names::Extern_Type_Name);
    }
    {
      const uci::type::ApplicabilityType::System& boundedList = accessor.getSystem();
      for (uci::type::ApplicabilityType::System::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        IdentityType::serialize(boundedList.at(i), node, ApplicabilityType_Names::System_Name);
      }
    }
    if (accessor.hasRequirementTypes()) {
      RequirementTaxonomyType::serialize(accessor.getRequirementTypes(), node, ApplicabilityType_Names::RequirementTypes_Name);
    }
    if (accessor.hasConstrainingPlan()) {
      ConstrainingPlanPartsType::serialize(accessor.getConstrainingPlan(), node, ApplicabilityType_Names::ConstrainingPlan_Name);
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

