/** @file OrbitPlanConstraintType.cpp
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

#include "extxml_uci/type/OrbitPlanConstraintType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/OrbitPlanID_Type.h"
#include "extxml_uci/type/OrbitPlanPartsEnum.h"
#include "extxml_uci/type/PlanChangeableConstraintsEnum.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/OrbitPlanConstraintType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace OrbitPlanConstraintType_Names {

constexpr const char* Extern_Type_Name{"OrbitPlanConstraintType"};
constexpr const char* OrbitPlanID_Name{"OrbitPlanID"};
constexpr const char* ChangeableKinematics_Name{"ChangeableKinematics"};
constexpr const char* Parts_Name{"Parts"};

} // namespace OrbitPlanConstraintType_Names

bool OrbitPlanConstraintType::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitPlanConstraintType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitPlanConstraintType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitPlanConstraintType_Names::OrbitPlanID_Name) {
      OrbitPlanID_Type::deserialize(valueType.second, accessor.enableOrbitPlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitPlanConstraintType_Names::ChangeableKinematics_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getChangeableKinematics().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + OrbitPlanConstraintType_Names::Parts_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::OrbitPlanConstraintType::Parts& boundedList = accessor.getParts();
        const uci::type::OrbitPlanConstraintType::Parts::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    }
  }
  return true;
}

std::string OrbitPlanConstraintType::serialize(const uci::type::OrbitPlanConstraintType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? OrbitPlanConstraintType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitPlanConstraintType_Names::Extern_Type_Name);
  }
  if (accessor.hasOrbitPlanID()) {
    OrbitPlanID_Type::serialize(accessor.getOrbitPlanID(), node, OrbitPlanConstraintType_Names::OrbitPlanID_Name);
  }
  PlanChangeableConstraintsEnum::serialize(accessor.getChangeableKinematics(), node, OrbitPlanConstraintType_Names::ChangeableKinematics_Name, false);
  {
    const uci::type::OrbitPlanConstraintType::Parts& boundedList = accessor.getParts();
    for (uci::type::OrbitPlanConstraintType::Parts::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      OrbitPlanPartsEnum::serialize(boundedList.at(i), node, OrbitPlanConstraintType_Names::Parts_Name, false);
    }
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

