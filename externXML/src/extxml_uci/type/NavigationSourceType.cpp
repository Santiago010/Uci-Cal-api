/** @file NavigationSourceType.cpp
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

#include "extxml_uci/type/NavigationSourceType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/AutopilotModeEnum.h"
#include "extxml_uci/type/MissionPlanNavigationType.h"
#include "extxml_uci/type/Point3D_Type.h"
#include "extxml_uci/type/RelativeNavigationType.h"
#include "extxml_uci/type/SlavedNavigationType.h"
#include "extxml_uci/util/DerivedTypesDeserializer.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/NavigationSourceType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace NavigationSourceType_Names {

constexpr const char* Extern_Type_Name{"NavigationSourceType"};
constexpr const char* MissionPlanNavigation_Name{"MissionPlanNavigation"};
constexpr const char* FixedNavigation_Name{"FixedNavigation"};
constexpr const char* ManualNavigation_Name{"ManualNavigation"};
constexpr const char* AutoPilotNavigation_Name{"AutoPilotNavigation"};
constexpr const char* RelativeNavigation_Name{"RelativeNavigation"};
constexpr const char* SlavedNavigation_Name{"SlavedNavigation"};

} // namespace NavigationSourceType_Names

bool NavigationSourceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::NavigationSourceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = NavigationSourceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + NavigationSourceType_Names::MissionPlanNavigation_Name) {
      MissionPlanNavigationType::deserialize(valueType.second, accessor.chooseMissionPlanNavigation(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + NavigationSourceType_Names::FixedNavigation_Name) {
      extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.chooseFixedNavigation(extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + NavigationSourceType_Names::ManualNavigation_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.chooseManualNavigation().setStringValue(*value);
      }
    } else if (valueType.first == nsPrefix + NavigationSourceType_Names::AutoPilotNavigation_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.chooseAutoPilotNavigation().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + NavigationSourceType_Names::RelativeNavigation_Name) {
      RelativeNavigationType::deserialize(valueType.second, accessor.chooseRelativeNavigation(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + NavigationSourceType_Names::SlavedNavigation_Name) {
      SlavedNavigationType::deserialize(valueType.second, accessor.chooseSlavedNavigation(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string NavigationSourceType::serialize(const uci::type::NavigationSourceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? NavigationSourceType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, NavigationSourceType_Names::Extern_Type_Name);
  }
  if (accessor.isMissionPlanNavigation()) {
    MissionPlanNavigationType::serialize(accessor.getMissionPlanNavigation(), node, NavigationSourceType_Names::MissionPlanNavigation_Name);
  } else if (accessor.isFixedNavigation()) {
    Point3D_Type::serialize(accessor.getFixedNavigation(), node, NavigationSourceType_Names::FixedNavigation_Name);
  } else if (accessor.isManualNavigation()) {
    extxml_uci::util::SerializationHelpers::serializeString(accessor.getManualNavigation(), node, NavigationSourceType_Names::ManualNavigation_Name);
  } else if (accessor.isAutoPilotNavigation()) {
    AutopilotModeEnum::serialize(accessor.getAutoPilotNavigation(), node, NavigationSourceType_Names::AutoPilotNavigation_Name, false);
  } else if (accessor.isRelativeNavigation()) {
    RelativeNavigationType::serialize(accessor.getRelativeNavigation(), node, NavigationSourceType_Names::RelativeNavigation_Name);
  } else if (accessor.isSlavedNavigation()) {
    SlavedNavigationType::serialize(accessor.getSlavedNavigation(), node, NavigationSourceType_Names::SlavedNavigation_Name);
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

