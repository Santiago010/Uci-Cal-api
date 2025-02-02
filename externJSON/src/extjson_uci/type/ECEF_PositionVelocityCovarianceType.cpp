/** @file ECEF_PositionVelocityCovarianceType.cpp
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

#include "extjson_uci/type/ECEF_PositionVelocityCovarianceType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/ECEF_PositionVelocityCovarianceType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace ECEF_PositionVelocityCovarianceType_Names {

constexpr const char* Extern_Type_Name{"ECEF_PositionVelocityCovarianceType"};
constexpr const char* PxVx_Name{"PxVx"};
constexpr const char* PxVy_Name{"PxVy"};
constexpr const char* PxVz_Name{"PxVz"};
constexpr const char* PyVx_Name{"PyVx"};
constexpr const char* PyVy_Name{"PyVy"};
constexpr const char* PyVz_Name{"PyVz"};
constexpr const char* PzVx_Name{"PzVx"};
constexpr const char* PzVy_Name{"PzVy"};
constexpr const char* PzVz_Name{"PzVz"};

} // namespace ECEF_PositionVelocityCovarianceType_Names

bool ECEF_PositionVelocityCovarianceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ECEF_PositionVelocityCovarianceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ECEF_PositionVelocityCovarianceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + ECEF_PositionVelocityCovarianceType_Names::PxVx_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPxVx(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_PositionVelocityCovarianceType_Names::PxVy_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPxVy(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_PositionVelocityCovarianceType_Names::PxVz_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPxVz(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_PositionVelocityCovarianceType_Names::PyVx_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPyVx(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_PositionVelocityCovarianceType_Names::PyVy_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPyVy(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_PositionVelocityCovarianceType_Names::PyVz_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPyVz(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_PositionVelocityCovarianceType_Names::PzVx_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPzVx(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_PositionVelocityCovarianceType_Names::PzVy_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPzVy(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_PositionVelocityCovarianceType_Names::PzVz_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPzVz(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    }
  }
  return true;
}

std::string ECEF_PositionVelocityCovarianceType::serialize(const uci::type::ECEF_PositionVelocityCovarianceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? ECEF_PositionVelocityCovarianceType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, ECEF_PositionVelocityCovarianceType_Names::Extern_Type_Name);
  }
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getPxVx(), node, ECEF_PositionVelocityCovarianceType_Names::PxVx_Name);
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getPxVy(), node, ECEF_PositionVelocityCovarianceType_Names::PxVy_Name);
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getPxVz(), node, ECEF_PositionVelocityCovarianceType_Names::PxVz_Name);
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getPyVx(), node, ECEF_PositionVelocityCovarianceType_Names::PyVx_Name);
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getPyVy(), node, ECEF_PositionVelocityCovarianceType_Names::PyVy_Name);
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getPyVz(), node, ECEF_PositionVelocityCovarianceType_Names::PyVz_Name);
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getPzVx(), node, ECEF_PositionVelocityCovarianceType_Names::PzVx_Name);
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getPzVy(), node, ECEF_PositionVelocityCovarianceType_Names::PzVy_Name);
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getPzVz(), node, ECEF_PositionVelocityCovarianceType_Names::PzVz_Name);
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

