/** @file PlatformIdentityType.cpp
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

#include "extxml_uci/type/PlatformIdentityType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/EnvironmentEnum.h"
#include "extxml_uci/type/LaunchCapabilityEnum.h"
#include "extxml_uci/type/SubmarineConfidenceLevelEnum.h"
#include "extxml_uci/type/ThreatEnum.h"
#include "extxml_uci/type/UnitTypeEnum.h"
#include "extxml_uci/util/DerivedTypesDeserializer.h"
#include "extxml_uci/util/DerivedTypesSerializer.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/base/accessorType.h"
#include "uci/type/PlatformIdentityType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace PlatformIdentityType_Names {

constexpr const char* Extern_Type_Name{"PlatformIdentityType"};
constexpr const char* PlatformType_Name{"PlatformType"};
constexpr const char* PlatformTypeCategory_Name{"PlatformTypeCategory"};
constexpr const char* ThreatType_Name{"ThreatType"};
constexpr const char* UnitType_Name{"UnitType"};
constexpr const char* LaunchCapability_Name{"LaunchCapability"};
constexpr const char* SubmarineConfidenceLevel_Name{"SubmarineConfidenceLevel"};

} // namespace PlatformIdentityType_Names

bool PlatformIdentityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PlatformIdentityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PlatformIdentityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PlatformIdentityType_Names::PlatformType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPlatformType(extxml_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    } else if (valueType.first == nsPrefix + PlatformIdentityType_Names::PlatformTypeCategory_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getPlatformTypeCategory().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + PlatformIdentityType_Names::ThreatType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableThreatType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + PlatformIdentityType_Names::UnitType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableUnitType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + PlatformIdentityType_Names::LaunchCapability_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableLaunchCapability().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + PlatformIdentityType_Names::SubmarineConfidenceLevel_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableSubmarineConfidenceLevel().setValueFromName(*value);
      }
    }
  }
  return true;
}

std::string PlatformIdentityType::serialize(const uci::type::PlatformIdentityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? PlatformIdentityType_Names::Extern_Type_Name : nodeName};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::platformIdentityType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      extxml_uci::util::SerializationHelpers::addTypeAttribute(node, PlatformIdentityType_Names::Extern_Type_Name);
    }
    extxml_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getPlatformType(), node, PlatformIdentityType_Names::PlatformType_Name);
    EnvironmentEnum::serialize(accessor.getPlatformTypeCategory(), node, PlatformIdentityType_Names::PlatformTypeCategory_Name, false);
    if (accessor.hasThreatType()) {
      ThreatEnum::serialize(accessor.getThreatType(), node, PlatformIdentityType_Names::ThreatType_Name, false);
    }
    if (accessor.hasUnitType()) {
      UnitTypeEnum::serialize(accessor.getUnitType(), node, PlatformIdentityType_Names::UnitType_Name, false);
    }
    if (accessor.hasLaunchCapability()) {
      LaunchCapabilityEnum::serialize(accessor.getLaunchCapability(), node, PlatformIdentityType_Names::LaunchCapability_Name, false);
    }
    if (accessor.hasSubmarineConfidenceLevel()) {
      SubmarineConfidenceLevelEnum::serialize(accessor.getSubmarineConfidenceLevel(), node, PlatformIdentityType_Names::SubmarineConfidenceLevel_Name, false);
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

