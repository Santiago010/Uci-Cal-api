/** @file SubsystemFaultType.cpp
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

#include "extjson_uci/type/SubsystemFaultType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/CapabilityID_Type.h"
#include "extjson_uci/type/ComponentID_Type.h"
#include "extjson_uci/type/FaultDataType.h"
#include "extjson_uci/type/FaultID_Type.h"
#include "extjson_uci/type/FaultSeverityEnum.h"
#include "extjson_uci/type/FaultStateEnum.h"
#include "extjson_uci/type/ServiceID_Type.h"
#include "extjson_uci/type/SubsystemFaultAmbiguityGroupType.h"
#include "extjson_uci/type/SubsystemID_Type.h"
#include "extjson_uci/type/SupportCapabilityID_Type.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/SubsystemFaultType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace SubsystemFaultType_Names {

constexpr const char* Extern_Type_Name{"SubsystemFaultType"};
constexpr const char* FaultID_Name{"FaultID"};
constexpr const char* Severity_Name{"Severity"};
constexpr const char* FaultState_Name{"FaultState"};
constexpr const char* FaultData_Name{"FaultData"};
constexpr const char* DetectionTime_Name{"DetectionTime"};
constexpr const char* FaultCode_Name{"FaultCode"};
constexpr const char* FaultCodeCount_Name{"FaultCodeCount"};
constexpr const char* FaultDescription_Name{"FaultDescription"};
constexpr const char* SubsystemID_Name{"SubsystemID"};
constexpr const char* ServiceID_Name{"ServiceID"};
constexpr const char* CapabilityID_Name{"CapabilityID"};
constexpr const char* SupportCapabilityID_Name{"SupportCapabilityID"};
constexpr const char* ComponentID_Name{"ComponentID"};
constexpr const char* AmbiguityGroup_Name{"AmbiguityGroup"};

} // namespace SubsystemFaultType_Names

bool SubsystemFaultType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SubsystemFaultType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SubsystemFaultType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + SubsystemFaultType_Names::FaultID_Name) {
      FaultID_Type::deserialize(valueType.second, accessor.getFaultID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SubsystemFaultType_Names::Severity_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableSeverity().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + SubsystemFaultType_Names::FaultState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableFaultState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + SubsystemFaultType_Names::FaultData_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SubsystemFaultType::FaultData& boundedList = accessor.getFaultData();
        const uci::type::SubsystemFaultType::FaultData::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        FaultDataType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + SubsystemFaultType_Names::DetectionTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setDetectionTime(extjson_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + SubsystemFaultType_Names::FaultCode_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setFaultCode(*value);
      }
    } else if (valueType.first == nsPrefix + SubsystemFaultType_Names::FaultCodeCount_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setFaultCodeCount(extjson_uci::util::SerializationHelpers::deserializeInt(*value));
      }
    } else if (valueType.first == nsPrefix + SubsystemFaultType_Names::FaultDescription_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setFaultDescription(*value);
      }
    } else if (valueType.first == nsPrefix + SubsystemFaultType_Names::SubsystemID_Name) {
      SubsystemID_Type::deserialize(valueType.second, accessor.enableSubsystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SubsystemFaultType_Names::ServiceID_Name) {
      ServiceID_Type::deserialize(valueType.second, accessor.enableServiceID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SubsystemFaultType_Names::CapabilityID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SubsystemFaultType::CapabilityID& boundedList = accessor.getCapabilityID();
        const uci::type::SubsystemFaultType::CapabilityID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        CapabilityID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + SubsystemFaultType_Names::SupportCapabilityID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SubsystemFaultType::SupportCapabilityID& boundedList = accessor.getSupportCapabilityID();
        const uci::type::SubsystemFaultType::SupportCapabilityID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        SupportCapabilityID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + SubsystemFaultType_Names::ComponentID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SubsystemFaultType::ComponentID& boundedList = accessor.getComponentID();
        const uci::type::SubsystemFaultType::ComponentID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        ComponentID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + SubsystemFaultType_Names::AmbiguityGroup_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SubsystemFaultType::AmbiguityGroup& boundedList = accessor.getAmbiguityGroup();
        const uci::type::SubsystemFaultType::AmbiguityGroup::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        SubsystemFaultAmbiguityGroupType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  return true;
}

std::string SubsystemFaultType::serialize(const uci::type::SubsystemFaultType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? SubsystemFaultType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, SubsystemFaultType_Names::Extern_Type_Name);
  }
  FaultID_Type::serialize(accessor.getFaultID(), node, SubsystemFaultType_Names::FaultID_Name);
  if (accessor.hasSeverity()) {
    FaultSeverityEnum::serialize(accessor.getSeverity(), node, SubsystemFaultType_Names::Severity_Name, false);
  }
  if (accessor.hasFaultState()) {
    FaultStateEnum::serialize(accessor.getFaultState(), node, SubsystemFaultType_Names::FaultState_Name, false);
  }
  {
    const uci::type::SubsystemFaultType::FaultData& boundedList = accessor.getFaultData();
    for (uci::type::SubsystemFaultType::FaultData::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      FaultDataType::serialize(boundedList.at(i), node, SubsystemFaultType_Names::FaultData_Name);
    }
  }
  if (accessor.hasDetectionTime()) {
    extjson_uci::util::SerializationHelpers::serializeDateTime(accessor.getDetectionTime(), node, SubsystemFaultType_Names::DetectionTime_Name);
  }
  extjson_uci::util::SerializationHelpers::serializeString(accessor.getFaultCode(), node, SubsystemFaultType_Names::FaultCode_Name);
  if (accessor.hasFaultCodeCount()) {
    extjson_uci::util::SerializationHelpers::serializeInt(accessor.getFaultCodeCount(), node, SubsystemFaultType_Names::FaultCodeCount_Name);
  }
  if (accessor.hasFaultDescription()) {
    extjson_uci::util::SerializationHelpers::serializeString(accessor.getFaultDescription(), node, SubsystemFaultType_Names::FaultDescription_Name);
  }
  if (accessor.hasSubsystemID()) {
    SubsystemID_Type::serialize(accessor.getSubsystemID(), node, SubsystemFaultType_Names::SubsystemID_Name);
  }
  if (accessor.hasServiceID()) {
    ServiceID_Type::serialize(accessor.getServiceID(), node, SubsystemFaultType_Names::ServiceID_Name);
  }
  {
    const uci::type::SubsystemFaultType::CapabilityID& boundedList = accessor.getCapabilityID();
    for (uci::type::SubsystemFaultType::CapabilityID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      CapabilityID_Type::serialize(boundedList.at(i), node, SubsystemFaultType_Names::CapabilityID_Name);
    }
  }
  {
    const uci::type::SubsystemFaultType::SupportCapabilityID& boundedList = accessor.getSupportCapabilityID();
    for (uci::type::SubsystemFaultType::SupportCapabilityID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      SupportCapabilityID_Type::serialize(boundedList.at(i), node, SubsystemFaultType_Names::SupportCapabilityID_Name);
    }
  }
  {
    const uci::type::SubsystemFaultType::ComponentID& boundedList = accessor.getComponentID();
    for (uci::type::SubsystemFaultType::ComponentID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      ComponentID_Type::serialize(boundedList.at(i), node, SubsystemFaultType_Names::ComponentID_Name);
    }
  }
  {
    const uci::type::SubsystemFaultType::AmbiguityGroup& boundedList = accessor.getAmbiguityGroup();
    for (uci::type::SubsystemFaultType::AmbiguityGroup::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      SubsystemFaultAmbiguityGroupType::serialize(boundedList.at(i), node, SubsystemFaultType_Names::AmbiguityGroup_Name);
    }
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

