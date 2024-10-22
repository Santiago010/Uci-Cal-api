/** @file ReadinessItemStatusType.cpp
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

#include "extxml_uci/type/ReadinessItemStatusType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/CapabilityBaseType.h"
#include "extxml_uci/type/CapabilityStatusBaseType.h"
#include "extxml_uci/type/ControlStatusMDT.h"
#include "extxml_uci/type/OperationalStatusEnum.h"
#include "extxml_uci/type/PackageStatusMDT.h"
#include "extxml_uci/type/PlanningFunctionMDT.h"
#include "extxml_uci/type/PlanningFunctionStatusMDT.h"
#include "extxml_uci/type/StoreManagementStatusMDT.h"
#include "extxml_uci/type/SubsystemConfigurationMDT.h"
#include "extxml_uci/type/SubsystemStatusMDT.h"
#include "extxml_uci/type/SystemStatusMDT.h"
#include "extxml_uci/util/DerivedTypesDeserializer.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/ReadinessItemStatusType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace ReadinessItemStatusType_Names {

constexpr const char* Extern_Type_Name{"ReadinessItemStatusType"};
constexpr const char* OperationalStatus_Name{"OperationalStatus"};
constexpr const char* Reason_Name{"Reason"};
constexpr const char* SystemStatus_Name{"SystemStatus"};
constexpr const char* SubsystemStatus_Name{"SubsystemStatus"};
constexpr const char* SubsystemConfiguration_Name{"SubsystemConfiguration"};
constexpr const char* Capability_Name{"Capability"};
constexpr const char* CapabilityStatus_Name{"CapabilityStatus"};
constexpr const char* StoreManagementStatus_Name{"StoreManagementStatus"};
constexpr const char* ControlStatus_Name{"ControlStatus"};
constexpr const char* PlanningFunction_Name{"PlanningFunction"};
constexpr const char* PlanningFunctionStatus_Name{"PlanningFunctionStatus"};
constexpr const char* PackageStatus_Name{"PackageStatus"};

} // namespace ReadinessItemStatusType_Names

bool ReadinessItemStatusType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ReadinessItemStatusType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ReadinessItemStatusType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ReadinessItemStatusType_Names::OperationalStatus_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getOperationalStatus().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ReadinessItemStatusType_Names::Reason_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setReason(*value);
      }
    } else if (valueType.first == nsPrefix + ReadinessItemStatusType_Names::SystemStatus_Name) {
      SystemStatusMDT::deserialize(valueType.second, accessor.enableSystemStatus(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ReadinessItemStatusType_Names::SubsystemStatus_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ReadinessItemStatusType::SubsystemStatus& boundedList = accessor.getSubsystemStatus();
        const uci::type::ReadinessItemStatusType::SubsystemStatus::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        SubsystemStatusMDT::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ReadinessItemStatusType_Names::SubsystemConfiguration_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ReadinessItemStatusType::SubsystemConfiguration& boundedList = accessor.getSubsystemConfiguration();
        const uci::type::ReadinessItemStatusType::SubsystemConfiguration::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        SubsystemConfigurationMDT::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ReadinessItemStatusType_Names::Capability_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ReadinessItemStatusType::Capability& boundedList = accessor.getCapability();
        const uci::type::ReadinessItemStatusType::Capability::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1, extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix));
        extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ReadinessItemStatusType_Names::CapabilityStatus_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ReadinessItemStatusType::CapabilityStatus& boundedList = accessor.getCapabilityStatus();
        const uci::type::ReadinessItemStatusType::CapabilityStatus::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1, extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix));
        extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ReadinessItemStatusType_Names::StoreManagementStatus_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ReadinessItemStatusType::StoreManagementStatus& boundedList = accessor.getStoreManagementStatus();
        const uci::type::ReadinessItemStatusType::StoreManagementStatus::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        StoreManagementStatusMDT::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ReadinessItemStatusType_Names::ControlStatus_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ReadinessItemStatusType::ControlStatus& boundedList = accessor.getControlStatus();
        const uci::type::ReadinessItemStatusType::ControlStatus::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        ControlStatusMDT::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ReadinessItemStatusType_Names::PlanningFunction_Name) {
      PlanningFunctionMDT::deserialize(valueType.second, accessor.enablePlanningFunction(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ReadinessItemStatusType_Names::PlanningFunctionStatus_Name) {
      PlanningFunctionStatusMDT::deserialize(valueType.second, accessor.enablePlanningFunctionStatus(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ReadinessItemStatusType_Names::PackageStatus_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ReadinessItemStatusType::PackageStatus& boundedList = accessor.getPackageStatus();
        const uci::type::ReadinessItemStatusType::PackageStatus::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        PackageStatusMDT::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  return true;
}

std::string ReadinessItemStatusType::serialize(const uci::type::ReadinessItemStatusType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? ReadinessItemStatusType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, ReadinessItemStatusType_Names::Extern_Type_Name);
  }
  OperationalStatusEnum::serialize(accessor.getOperationalStatus(), node, ReadinessItemStatusType_Names::OperationalStatus_Name, false);
  if (accessor.hasReason()) {
    extxml_uci::util::SerializationHelpers::serializeString(accessor.getReason(), node, ReadinessItemStatusType_Names::Reason_Name);
  }
  if (accessor.hasSystemStatus()) {
    SystemStatusMDT::serialize(accessor.getSystemStatus(), node, ReadinessItemStatusType_Names::SystemStatus_Name);
  }
  {
    const uci::type::ReadinessItemStatusType::SubsystemStatus& boundedList = accessor.getSubsystemStatus();
    for (uci::type::ReadinessItemStatusType::SubsystemStatus::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      SubsystemStatusMDT::serialize(boundedList.at(i), node, ReadinessItemStatusType_Names::SubsystemStatus_Name);
    }
  }
  {
    const uci::type::ReadinessItemStatusType::SubsystemConfiguration& boundedList = accessor.getSubsystemConfiguration();
    for (uci::type::ReadinessItemStatusType::SubsystemConfiguration::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      SubsystemConfigurationMDT::serialize(boundedList.at(i), node, ReadinessItemStatusType_Names::SubsystemConfiguration_Name);
    }
  }
  {
    const uci::type::ReadinessItemStatusType::Capability& boundedList = accessor.getCapability();
    for (uci::type::ReadinessItemStatusType::Capability::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      CapabilityBaseType::serialize(boundedList.at(i), node, ReadinessItemStatusType_Names::Capability_Name);
    }
  }
  {
    const uci::type::ReadinessItemStatusType::CapabilityStatus& boundedList = accessor.getCapabilityStatus();
    for (uci::type::ReadinessItemStatusType::CapabilityStatus::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      CapabilityStatusBaseType::serialize(boundedList.at(i), node, ReadinessItemStatusType_Names::CapabilityStatus_Name);
    }
  }
  {
    const uci::type::ReadinessItemStatusType::StoreManagementStatus& boundedList = accessor.getStoreManagementStatus();
    for (uci::type::ReadinessItemStatusType::StoreManagementStatus::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      StoreManagementStatusMDT::serialize(boundedList.at(i), node, ReadinessItemStatusType_Names::StoreManagementStatus_Name);
    }
  }
  {
    const uci::type::ReadinessItemStatusType::ControlStatus& boundedList = accessor.getControlStatus();
    for (uci::type::ReadinessItemStatusType::ControlStatus::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      ControlStatusMDT::serialize(boundedList.at(i), node, ReadinessItemStatusType_Names::ControlStatus_Name);
    }
  }
  if (accessor.hasPlanningFunction()) {
    PlanningFunctionMDT::serialize(accessor.getPlanningFunction(), node, ReadinessItemStatusType_Names::PlanningFunction_Name);
  }
  if (accessor.hasPlanningFunctionStatus()) {
    PlanningFunctionStatusMDT::serialize(accessor.getPlanningFunctionStatus(), node, ReadinessItemStatusType_Names::PlanningFunctionStatus_Name);
  }
  {
    const uci::type::ReadinessItemStatusType::PackageStatus& boundedList = accessor.getPackageStatus();
    for (uci::type::ReadinessItemStatusType::PackageStatus::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      PackageStatusMDT::serialize(boundedList.at(i), node, ReadinessItemStatusType_Names::PackageStatus_Name);
    }
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

