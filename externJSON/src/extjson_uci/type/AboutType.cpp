/** @file AboutType.cpp
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

#include "extjson_uci/type/AboutType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/AboutType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace AboutType_Names {

constexpr const char* Extern_Type_Name{"AboutType"};
constexpr const char* Model_Name{"Model"};
constexpr const char* SerialNumber_Name{"SerialNumber"};
constexpr const char* SoftwareVersion_Name{"SoftwareVersion"};
constexpr const char* BootloaderSoftwareVersion_Name{"BootloaderSoftwareVersion"};
constexpr const char* HardwareVersion_Name{"HardwareVersion"};

} // namespace AboutType_Names

bool AboutType::deserialize(const boost::property_tree::ptree& propTree, uci::type::AboutType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = AboutType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + AboutType_Names::Model_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setModel(*value);
      }
    } else if (valueType.first == nsPrefix + AboutType_Names::SerialNumber_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSerialNumber(*value);
      }
    } else if (valueType.first == nsPrefix + AboutType_Names::SoftwareVersion_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSoftwareVersion(*value);
      }
    } else if (valueType.first == nsPrefix + AboutType_Names::BootloaderSoftwareVersion_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setBootloaderSoftwareVersion(*value);
      }
    } else if (valueType.first == nsPrefix + AboutType_Names::HardwareVersion_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setHardwareVersion(*value);
      }
    }
  }
  return true;
}

std::string AboutType::serialize(const uci::type::AboutType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? AboutType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, AboutType_Names::Extern_Type_Name);
  }
  extjson_uci::util::SerializationHelpers::serializeString(accessor.getModel(), node, AboutType_Names::Model_Name);
  if (accessor.hasSerialNumber()) {
    extjson_uci::util::SerializationHelpers::serializeString(accessor.getSerialNumber(), node, AboutType_Names::SerialNumber_Name);
  }
  if (accessor.hasSoftwareVersion()) {
    extjson_uci::util::SerializationHelpers::serializeString(accessor.getSoftwareVersion(), node, AboutType_Names::SoftwareVersion_Name);
  }
  if (accessor.hasBootloaderSoftwareVersion()) {
    extjson_uci::util::SerializationHelpers::serializeString(accessor.getBootloaderSoftwareVersion(), node, AboutType_Names::BootloaderSoftwareVersion_Name);
  }
  if (accessor.hasHardwareVersion()) {
    extjson_uci::util::SerializationHelpers::serializeString(accessor.getHardwareVersion(), node, AboutType_Names::HardwareVersion_Name);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

