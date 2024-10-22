/** @file ECEF_VelocityOrientationCovarianceType.cpp
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

#include "extjson_uci/type/ECEF_VelocityOrientationCovarianceType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/ECEF_VelocityOrientationCovarianceType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace ECEF_VelocityOrientationCovarianceType_Names {

constexpr const char* Extern_Type_Name{"ECEF_VelocityOrientationCovarianceType"};
constexpr const char* VxRr_Name{"VxRr"};
constexpr const char* VxRp_Name{"VxRp"};
constexpr const char* VxRy_Name{"VxRy"};
constexpr const char* VyRr_Name{"VyRr"};
constexpr const char* VyRp_Name{"VyRp"};
constexpr const char* VyRy_Name{"VyRy"};
constexpr const char* VzRr_Name{"VzRr"};
constexpr const char* VzRp_Name{"VzRp"};
constexpr const char* VzRy_Name{"VzRy"};

} // namespace ECEF_VelocityOrientationCovarianceType_Names

bool ECEF_VelocityOrientationCovarianceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ECEF_VelocityOrientationCovarianceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ECEF_VelocityOrientationCovarianceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + ECEF_VelocityOrientationCovarianceType_Names::VxRr_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setVxRr(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_VelocityOrientationCovarianceType_Names::VxRp_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setVxRp(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_VelocityOrientationCovarianceType_Names::VxRy_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setVxRy(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_VelocityOrientationCovarianceType_Names::VyRr_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setVyRr(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_VelocityOrientationCovarianceType_Names::VyRp_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setVyRp(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_VelocityOrientationCovarianceType_Names::VyRy_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setVyRy(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_VelocityOrientationCovarianceType_Names::VzRr_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setVzRr(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_VelocityOrientationCovarianceType_Names::VzRp_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setVzRp(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_VelocityOrientationCovarianceType_Names::VzRy_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setVzRy(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    }
  }
  return true;
}

std::string ECEF_VelocityOrientationCovarianceType::serialize(const uci::type::ECEF_VelocityOrientationCovarianceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? ECEF_VelocityOrientationCovarianceType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, ECEF_VelocityOrientationCovarianceType_Names::Extern_Type_Name);
  }
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getVxRr(), node, ECEF_VelocityOrientationCovarianceType_Names::VxRr_Name);
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getVxRp(), node, ECEF_VelocityOrientationCovarianceType_Names::VxRp_Name);
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getVxRy(), node, ECEF_VelocityOrientationCovarianceType_Names::VxRy_Name);
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getVyRr(), node, ECEF_VelocityOrientationCovarianceType_Names::VyRr_Name);
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getVyRp(), node, ECEF_VelocityOrientationCovarianceType_Names::VyRp_Name);
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getVyRy(), node, ECEF_VelocityOrientationCovarianceType_Names::VyRy_Name);
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getVzRr(), node, ECEF_VelocityOrientationCovarianceType_Names::VzRr_Name);
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getVzRp(), node, ECEF_VelocityOrientationCovarianceType_Names::VzRp_Name);
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getVzRy(), node, ECEF_VelocityOrientationCovarianceType_Names::VzRy_Name);
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

