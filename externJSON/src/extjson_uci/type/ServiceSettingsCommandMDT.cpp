/** @file ServiceSettingsCommandMDT.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:23 PM
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

#include "extjson_uci/type/ServiceSettingsCommandMDT.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/CapabilityCommandStateEnum.h"
#include "extjson_uci/type/CommandBaseType.h"
#include "extjson_uci/type/EventSeverityEnum.h"
#include "extjson_uci/type/ServiceID_Type.h"
#include "extjson_uci/type/ServiceSettingEnum.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/ServiceSettingsCommandMDT.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace ServiceSettingsCommandMDT_Names {

constexpr const char* Extern_Type_Name{"ServiceSettingsCommandMDT"};
constexpr const char* ServiceID_Name{"ServiceID"};
constexpr const char* ServiceSetting_Name{"ServiceSetting"};
constexpr const char* CommandedState_Name{"CommandedState"};
constexpr const char* EventSeverityClass_Name{"EventSeverityClass"};
constexpr const char* ParameterNumber_Name{"ParameterNumber"};

} // namespace ServiceSettingsCommandMDT_Names

bool ServiceSettingsCommandMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ServiceSettingsCommandMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ServiceSettingsCommandMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + ServiceSettingsCommandMDT_Names::ServiceID_Name) {
      ServiceID_Type::deserialize(valueType.second, accessor.getServiceID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ServiceSettingsCommandMDT_Names::ServiceSetting_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getServiceSetting().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ServiceSettingsCommandMDT_Names::CommandedState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getCommandedState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ServiceSettingsCommandMDT_Names::EventSeverityClass_Name) {
      EventSeverityEnum::deserializeList(valueType.second, accessor.getEventSeverityClass());
    } else if (valueType.first == nsPrefix + ServiceSettingsCommandMDT_Names::ParameterNumber_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setParameterNumber(extjson_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    }
  }
  CommandBaseType::deserialize(node, accessor, nodeName, nsPrefix);
  return true;
}

std::string ServiceSettingsCommandMDT::serialize(const uci::type::ServiceSettingsCommandMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? ServiceSettingsCommandMDT_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, ServiceSettingsCommandMDT_Names::Extern_Type_Name);
  }
  CommandBaseType::serialize(accessor, node, "", false, false, false);
  ServiceID_Type::serialize(accessor.getServiceID(), node, ServiceSettingsCommandMDT_Names::ServiceID_Name);
  ServiceSettingEnum::serialize(accessor.getServiceSetting(), node, ServiceSettingsCommandMDT_Names::ServiceSetting_Name, false);
  CapabilityCommandStateEnum::serialize(accessor.getCommandedState(), node, ServiceSettingsCommandMDT_Names::CommandedState_Name, false);
  {
    EventSeverityEnum::serializeList(accessor.getEventSeverityClass(), node, ServiceSettingsCommandMDT_Names::EventSeverityClass_Name);
  }
  if (accessor.hasParameterNumber()) {
    extjson_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getParameterNumber(), node, ServiceSettingsCommandMDT_Names::ParameterNumber_Name);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

