/** @file SystemCapabilitySpecificationType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:15 PM
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

#include "../../../include/asb_uci/type/SystemCapabilitySpecificationType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CapabilitySpecificationType.h"
#include "../../../include/asb_uci/type/CapabilityTypeEnum.h"
#include "../../../include/asb_uci/type/SubsystemSpecificationType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilitySpecificationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityTypeEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemSpecificationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemCapabilitySpecificationType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SystemCapabilitySpecificationType::SystemCapabilitySpecificationType()
  : subsystemReference_Accessor{boost::make_unique<SubsystemReference>(0, SIZE_MAX)},
    capabilityReference_Accessor{boost::make_unique<CapabilityReference>(0, SIZE_MAX)},
    capabilityType_Accessor{boost::make_unique<CapabilityType>(0, 25)} {
}

SystemCapabilitySpecificationType::~SystemCapabilitySpecificationType() = default;

void SystemCapabilitySpecificationType::copy(const uci::type::SystemCapabilitySpecificationType& accessor) {
  copyImpl(accessor, false);
}

void SystemCapabilitySpecificationType::copyImpl(const uci::type::SystemCapabilitySpecificationType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const SystemCapabilitySpecificationType&>(accessor);
    setSubsystemReference(*(accessorImpl.subsystemReference_Accessor));
    setCapabilityReference(*(accessorImpl.capabilityReference_Accessor));
    setCapabilityType(*(accessorImpl.capabilityType_Accessor));
  }
}

void SystemCapabilitySpecificationType::reset() noexcept {
  subsystemReference_Accessor->reset();
  capabilityReference_Accessor->reset();
  capabilityType_Accessor->reset();
}

const uci::type::SystemCapabilitySpecificationType::SubsystemReference& SystemCapabilitySpecificationType::getSubsystemReference() const {
  return *subsystemReference_Accessor;
}

uci::type::SystemCapabilitySpecificationType::SubsystemReference& SystemCapabilitySpecificationType::getSubsystemReference() {
  return *subsystemReference_Accessor;
}

uci::type::SystemCapabilitySpecificationType& SystemCapabilitySpecificationType::setSubsystemReference(const uci::type::SystemCapabilitySpecificationType::SubsystemReference& accessor) {
  if (&accessor != subsystemReference_Accessor.get()) {
    subsystemReference_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SystemCapabilitySpecificationType::CapabilityReference& SystemCapabilitySpecificationType::getCapabilityReference() const {
  return *capabilityReference_Accessor;
}

uci::type::SystemCapabilitySpecificationType::CapabilityReference& SystemCapabilitySpecificationType::getCapabilityReference() {
  return *capabilityReference_Accessor;
}

uci::type::SystemCapabilitySpecificationType& SystemCapabilitySpecificationType::setCapabilityReference(const uci::type::SystemCapabilitySpecificationType::CapabilityReference& accessor) {
  if (&accessor != capabilityReference_Accessor.get()) {
    capabilityReference_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SystemCapabilitySpecificationType::CapabilityType& SystemCapabilitySpecificationType::getCapabilityType() const {
  return *capabilityType_Accessor;
}

uci::type::SystemCapabilitySpecificationType::CapabilityType& SystemCapabilitySpecificationType::getCapabilityType() {
  return *capabilityType_Accessor;
}

uci::type::SystemCapabilitySpecificationType& SystemCapabilitySpecificationType::setCapabilityType(const uci::type::SystemCapabilitySpecificationType::CapabilityType& accessor) {
  if (&accessor != capabilityType_Accessor.get()) {
    capabilityType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<SystemCapabilitySpecificationType> SystemCapabilitySpecificationType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::systemCapabilitySpecificationType : type};
  return (requestedType == uci::type::accessorType::systemCapabilitySpecificationType) ? boost::make_unique<SystemCapabilitySpecificationType>() : nullptr;
}

/**  */
namespace SystemCapabilitySpecificationType_Names {

constexpr const char* Extern_Type_Name{"SystemCapabilitySpecificationType"};
constexpr const char* SubsystemReference_Name{"SubsystemReference"};
constexpr const char* CapabilityReference_Name{"CapabilityReference"};
constexpr const char* CapabilityType_Name{"CapabilityType"};

} // namespace SystemCapabilitySpecificationType_Names

void SystemCapabilitySpecificationType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SystemCapabilitySpecificationType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SystemCapabilitySpecificationType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SystemCapabilitySpecificationType_Names::SubsystemReference_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SystemCapabilitySpecificationType::SubsystemReference& boundedList = accessor.getSubsystemReference();
        const uci::type::SystemCapabilitySpecificationType::SubsystemReference::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::SubsystemSpecificationType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + SystemCapabilitySpecificationType_Names::CapabilityReference_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SystemCapabilitySpecificationType::CapabilityReference& boundedList = accessor.getCapabilityReference();
        const uci::type::SystemCapabilitySpecificationType::CapabilityReference::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::CapabilitySpecificationType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + SystemCapabilitySpecificationType_Names::CapabilityType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SystemCapabilitySpecificationType::CapabilityType& boundedList = accessor.getCapabilityType();
        const uci::type::SystemCapabilitySpecificationType::CapabilityType::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    }
  }
}

std::string SystemCapabilitySpecificationType::serialize(const uci::type::SystemCapabilitySpecificationType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SystemCapabilitySpecificationType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SystemCapabilitySpecificationType_Names::Extern_Type_Name);
  }
  {
    const uci::type::SystemCapabilitySpecificationType::SubsystemReference& boundedList = accessor.getSubsystemReference();
    for (uci::type::SystemCapabilitySpecificationType::SubsystemReference::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::SubsystemSpecificationType::serialize(boundedList.at(i), node, SystemCapabilitySpecificationType_Names::SubsystemReference_Name);
    }
  }
  {
    const uci::type::SystemCapabilitySpecificationType::CapabilityReference& boundedList = accessor.getCapabilityReference();
    for (uci::type::SystemCapabilitySpecificationType::CapabilityReference::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::CapabilitySpecificationType::serialize(boundedList.at(i), node, SystemCapabilitySpecificationType_Names::CapabilityReference_Name);
    }
  }
  {
    const uci::type::SystemCapabilitySpecificationType::CapabilityType& boundedList = accessor.getCapabilityType();
    for (uci::type::SystemCapabilitySpecificationType::CapabilityType::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      CapabilityTypeEnum::serialize(boundedList.at(i), node, SystemCapabilitySpecificationType_Names::CapabilityType_Name, false);
    }
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace asb_uci

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

uci::type::SystemCapabilitySpecificationType& SystemCapabilitySpecificationType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SystemCapabilitySpecificationType>().release());
}

uci::type::SystemCapabilitySpecificationType& SystemCapabilitySpecificationType::create(const uci::type::SystemCapabilitySpecificationType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SystemCapabilitySpecificationType> newAccessor{boost::make_unique<asb_uci::type::SystemCapabilitySpecificationType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SystemCapabilitySpecificationType::destroy(uci::type::SystemCapabilitySpecificationType& accessor) {
  delete dynamic_cast<asb_uci::type::SystemCapabilitySpecificationType*>(&accessor);
}

} // namespace type

} // namespace uci

