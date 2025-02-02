/** @file GatewayLink16ConfigurationEnvironmentType.cpp
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

#include "extjson_uci/type/GatewayLink16ConfigurationEnvironmentType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/GatewayLink16ConfigurationEnvironmentType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace GatewayLink16ConfigurationEnvironmentType_Names {

constexpr const char* Extern_Type_Name{"GatewayLink16ConfigurationEnvironmentType"};
constexpr const char* Unknown_Name{"Unknown"};
constexpr const char* Space_Name{"Space"};
constexpr const char* Air_Name{"Air"};
constexpr const char* Surface_Name{"Surface"};
constexpr const char* Subsurface_Name{"Subsurface"};
constexpr const char* Land_Name{"Land"};

} // namespace GatewayLink16ConfigurationEnvironmentType_Names

bool GatewayLink16ConfigurationEnvironmentType::deserialize(const boost::property_tree::ptree& propTree, uci::type::GatewayLink16ConfigurationEnvironmentType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = GatewayLink16ConfigurationEnvironmentType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + GatewayLink16ConfigurationEnvironmentType_Names::Unknown_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setUnknown(extjson_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + GatewayLink16ConfigurationEnvironmentType_Names::Space_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSpace(extjson_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + GatewayLink16ConfigurationEnvironmentType_Names::Air_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAir(extjson_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + GatewayLink16ConfigurationEnvironmentType_Names::Surface_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSurface(extjson_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + GatewayLink16ConfigurationEnvironmentType_Names::Subsurface_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSubsurface(extjson_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + GatewayLink16ConfigurationEnvironmentType_Names::Land_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setLand(extjson_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    }
  }
  return true;
}

std::string GatewayLink16ConfigurationEnvironmentType::serialize(const uci::type::GatewayLink16ConfigurationEnvironmentType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? GatewayLink16ConfigurationEnvironmentType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, GatewayLink16ConfigurationEnvironmentType_Names::Extern_Type_Name);
  }
  extjson_uci::util::SerializationHelpers::serializeBoolean(accessor.getUnknown(), node, GatewayLink16ConfigurationEnvironmentType_Names::Unknown_Name);
  extjson_uci::util::SerializationHelpers::serializeBoolean(accessor.getSpace(), node, GatewayLink16ConfigurationEnvironmentType_Names::Space_Name);
  extjson_uci::util::SerializationHelpers::serializeBoolean(accessor.getAir(), node, GatewayLink16ConfigurationEnvironmentType_Names::Air_Name);
  extjson_uci::util::SerializationHelpers::serializeBoolean(accessor.getSurface(), node, GatewayLink16ConfigurationEnvironmentType_Names::Surface_Name);
  extjson_uci::util::SerializationHelpers::serializeBoolean(accessor.getSubsurface(), node, GatewayLink16ConfigurationEnvironmentType_Names::Subsurface_Name);
  extjson_uci::util::SerializationHelpers::serializeBoolean(accessor.getLand(), node, GatewayLink16ConfigurationEnvironmentType_Names::Land_Name);
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

