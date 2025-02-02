/** @file HierarchyModificationType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:22 PM
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

#include "extjson_uci/type/HierarchyModificationType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/MissionPlanID_Type.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/HierarchyModificationType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace HierarchyModificationType_Names {

constexpr const char* Extern_Type_Name{"HierarchyModificationType"};
constexpr const char* ParentMissionPlanID_Name{"ParentMissionPlanID"};
constexpr const char* AdditionalSubordinateMissionPlanID_Name{"AdditionalSubordinateMissionPlanID"};
constexpr const char* RetractedSubordinateMissionPlanID_Name{"RetractedSubordinateMissionPlanID"};

} // namespace HierarchyModificationType_Names

bool HierarchyModificationType::deserialize(const boost::property_tree::ptree& propTree, uci::type::HierarchyModificationType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = HierarchyModificationType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + HierarchyModificationType_Names::ParentMissionPlanID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::HierarchyModificationType::ParentMissionPlanID& boundedList = accessor.getParentMissionPlanID();
        const uci::type::HierarchyModificationType::ParentMissionPlanID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        MissionPlanID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + HierarchyModificationType_Names::AdditionalSubordinateMissionPlanID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::HierarchyModificationType::AdditionalSubordinateMissionPlanID& boundedList = accessor.getAdditionalSubordinateMissionPlanID();
        const uci::type::HierarchyModificationType::AdditionalSubordinateMissionPlanID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        MissionPlanID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + HierarchyModificationType_Names::RetractedSubordinateMissionPlanID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::HierarchyModificationType::RetractedSubordinateMissionPlanID& boundedList = accessor.getRetractedSubordinateMissionPlanID();
        const uci::type::HierarchyModificationType::RetractedSubordinateMissionPlanID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        MissionPlanID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  return true;
}

std::string HierarchyModificationType::serialize(const uci::type::HierarchyModificationType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? HierarchyModificationType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, HierarchyModificationType_Names::Extern_Type_Name);
  }
  {
    const uci::type::HierarchyModificationType::ParentMissionPlanID& boundedList = accessor.getParentMissionPlanID();
    for (uci::type::HierarchyModificationType::ParentMissionPlanID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      MissionPlanID_Type::serialize(boundedList.at(i), node, HierarchyModificationType_Names::ParentMissionPlanID_Name);
    }
  }
  {
    const uci::type::HierarchyModificationType::AdditionalSubordinateMissionPlanID& boundedList = accessor.getAdditionalSubordinateMissionPlanID();
    for (uci::type::HierarchyModificationType::AdditionalSubordinateMissionPlanID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      MissionPlanID_Type::serialize(boundedList.at(i), node, HierarchyModificationType_Names::AdditionalSubordinateMissionPlanID_Name);
    }
  }
  {
    const uci::type::HierarchyModificationType::RetractedSubordinateMissionPlanID& boundedList = accessor.getRetractedSubordinateMissionPlanID();
    for (uci::type::HierarchyModificationType::RetractedSubordinateMissionPlanID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      MissionPlanID_Type::serialize(boundedList.at(i), node, HierarchyModificationType_Names::RetractedSubordinateMissionPlanID_Name);
    }
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

