/** @file OpConstraintScoreType.cpp
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

#include "extjson_uci/type/OpConstraintScoreType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/FileLocationID_Type.h"
#include "extjson_uci/type/OpConstraintEnum.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/OpConstraintScoreType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace OpConstraintScoreType_Names {

constexpr const char* Extern_Type_Name{"OpConstraintScoreType"};
constexpr const char* Constraint_Name{"Constraint"};
constexpr const char* Score_Name{"Score"};
constexpr const char* Fidelity_Name{"Fidelity"};
constexpr const char* Confidence_Name{"Confidence"};
constexpr const char* FileLocationID_Name{"FileLocationID"};

} // namespace OpConstraintScoreType_Names

bool OpConstraintScoreType::deserialize(const boost::property_tree::ptree& propTree, uci::type::OpConstraintScoreType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OpConstraintScoreType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + OpConstraintScoreType_Names::Constraint_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getConstraint().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + OpConstraintScoreType_Names::Score_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setScore(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + OpConstraintScoreType_Names::Fidelity_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setFidelity(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + OpConstraintScoreType_Names::Confidence_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setConfidence(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + OpConstraintScoreType_Names::FileLocationID_Name) {
      FileLocationID_Type::deserialize(valueType.second, accessor.enableFileLocationID(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string OpConstraintScoreType::serialize(const uci::type::OpConstraintScoreType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? OpConstraintScoreType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, OpConstraintScoreType_Names::Extern_Type_Name);
  }
  OpConstraintEnum::serialize(accessor.getConstraint(), node, OpConstraintScoreType_Names::Constraint_Name, false);
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getScore(), node, OpConstraintScoreType_Names::Score_Name);
  if (accessor.hasFidelity()) {
    extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getFidelity(), node, OpConstraintScoreType_Names::Fidelity_Name);
  }
  if (accessor.hasConfidence()) {
    extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getConfidence(), node, OpConstraintScoreType_Names::Confidence_Name);
  }
  if (accessor.hasFileLocationID()) {
    FileLocationID_Type::serialize(accessor.getFileLocationID(), node, OpConstraintScoreType_Names::FileLocationID_Name);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

