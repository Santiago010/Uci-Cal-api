/** @file SourceFiltersType.cpp
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

#include "../../../include/asb_uci/type/SourceFiltersType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CapabilityID_Type.h"
#include "../../../include/asb_uci/type/ServiceID_Type.h"
#include "../../../include/asb_uci/type/SubsystemID_Type.h"
#include "../../../include/asb_uci/type/SystemID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ServiceID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SourceFiltersType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SourceFiltersType::SourceFiltersType()
  : systemID_Accessor{boost::make_unique<SystemID>(0, SIZE_MAX)},
    subsystemID_Accessor{boost::make_unique<SubsystemID>(0, SIZE_MAX)},
    serviceID_Accessor{boost::make_unique<ServiceID>(0, SIZE_MAX)},
    capabilityID_Accessor{boost::make_unique<CapabilityID>(0, SIZE_MAX)} {
}

SourceFiltersType::~SourceFiltersType() = default;

void SourceFiltersType::copy(const uci::type::SourceFiltersType& accessor) {
  copyImpl(accessor, false);
}

void SourceFiltersType::copyImpl(const uci::type::SourceFiltersType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const SourceFiltersType&>(accessor);
    setSystemID(*(accessorImpl.systemID_Accessor));
    setSubsystemID(*(accessorImpl.subsystemID_Accessor));
    setServiceID(*(accessorImpl.serviceID_Accessor));
    setCapabilityID(*(accessorImpl.capabilityID_Accessor));
  }
}

void SourceFiltersType::reset() noexcept {
  systemID_Accessor->reset();
  subsystemID_Accessor->reset();
  serviceID_Accessor->reset();
  capabilityID_Accessor->reset();
}

const uci::type::SourceFiltersType::SystemID& SourceFiltersType::getSystemID() const {
  return *systemID_Accessor;
}

uci::type::SourceFiltersType::SystemID& SourceFiltersType::getSystemID() {
  return *systemID_Accessor;
}

uci::type::SourceFiltersType& SourceFiltersType::setSystemID(const uci::type::SourceFiltersType::SystemID& accessor) {
  if (&accessor != systemID_Accessor.get()) {
    systemID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SourceFiltersType::SubsystemID& SourceFiltersType::getSubsystemID() const {
  return *subsystemID_Accessor;
}

uci::type::SourceFiltersType::SubsystemID& SourceFiltersType::getSubsystemID() {
  return *subsystemID_Accessor;
}

uci::type::SourceFiltersType& SourceFiltersType::setSubsystemID(const uci::type::SourceFiltersType::SubsystemID& accessor) {
  if (&accessor != subsystemID_Accessor.get()) {
    subsystemID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SourceFiltersType::ServiceID& SourceFiltersType::getServiceID() const {
  return *serviceID_Accessor;
}

uci::type::SourceFiltersType::ServiceID& SourceFiltersType::getServiceID() {
  return *serviceID_Accessor;
}

uci::type::SourceFiltersType& SourceFiltersType::setServiceID(const uci::type::SourceFiltersType::ServiceID& accessor) {
  if (&accessor != serviceID_Accessor.get()) {
    serviceID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SourceFiltersType::CapabilityID& SourceFiltersType::getCapabilityID() const {
  return *capabilityID_Accessor;
}

uci::type::SourceFiltersType::CapabilityID& SourceFiltersType::getCapabilityID() {
  return *capabilityID_Accessor;
}

uci::type::SourceFiltersType& SourceFiltersType::setCapabilityID(const uci::type::SourceFiltersType::CapabilityID& accessor) {
  if (&accessor != capabilityID_Accessor.get()) {
    capabilityID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<SourceFiltersType> SourceFiltersType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::sourceFiltersType : type};
  return (requestedType == uci::type::accessorType::sourceFiltersType) ? boost::make_unique<SourceFiltersType>() : nullptr;
}

/**  */
namespace SourceFiltersType_Names {

constexpr const char* Extern_Type_Name{"SourceFiltersType"};
constexpr const char* SystemID_Name{"SystemID"};
constexpr const char* SubsystemID_Name{"SubsystemID"};
constexpr const char* ServiceID_Name{"ServiceID"};
constexpr const char* CapabilityID_Name{"CapabilityID"};

} // namespace SourceFiltersType_Names

void SourceFiltersType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SourceFiltersType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SourceFiltersType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SourceFiltersType_Names::SystemID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SourceFiltersType::SystemID& boundedList = accessor.getSystemID();
        const uci::type::SourceFiltersType::SystemID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::SystemID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + SourceFiltersType_Names::SubsystemID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SourceFiltersType::SubsystemID& boundedList = accessor.getSubsystemID();
        const uci::type::SourceFiltersType::SubsystemID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::SubsystemID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + SourceFiltersType_Names::ServiceID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SourceFiltersType::ServiceID& boundedList = accessor.getServiceID();
        const uci::type::SourceFiltersType::ServiceID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::ServiceID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + SourceFiltersType_Names::CapabilityID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SourceFiltersType::CapabilityID& boundedList = accessor.getCapabilityID();
        const uci::type::SourceFiltersType::CapabilityID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::CapabilityID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string SourceFiltersType::serialize(const uci::type::SourceFiltersType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SourceFiltersType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SourceFiltersType_Names::Extern_Type_Name);
  }
  {
    const uci::type::SourceFiltersType::SystemID& boundedList = accessor.getSystemID();
    for (uci::type::SourceFiltersType::SystemID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::SystemID_Type::serialize(boundedList.at(i), node, SourceFiltersType_Names::SystemID_Name);
    }
  }
  {
    const uci::type::SourceFiltersType::SubsystemID& boundedList = accessor.getSubsystemID();
    for (uci::type::SourceFiltersType::SubsystemID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::SubsystemID_Type::serialize(boundedList.at(i), node, SourceFiltersType_Names::SubsystemID_Name);
    }
  }
  {
    const uci::type::SourceFiltersType::ServiceID& boundedList = accessor.getServiceID();
    for (uci::type::SourceFiltersType::ServiceID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ServiceID_Type::serialize(boundedList.at(i), node, SourceFiltersType_Names::ServiceID_Name);
    }
  }
  {
    const uci::type::SourceFiltersType::CapabilityID& boundedList = accessor.getCapabilityID();
    for (uci::type::SourceFiltersType::CapabilityID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::CapabilityID_Type::serialize(boundedList.at(i), node, SourceFiltersType_Names::CapabilityID_Name);
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

uci::type::SourceFiltersType& SourceFiltersType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SourceFiltersType>().release());
}

uci::type::SourceFiltersType& SourceFiltersType::create(const uci::type::SourceFiltersType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SourceFiltersType> newAccessor{boost::make_unique<asb_uci::type::SourceFiltersType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SourceFiltersType::destroy(uci::type::SourceFiltersType& accessor) {
  delete dynamic_cast<asb_uci::type::SourceFiltersType*>(&accessor);
}

} // namespace type

} // namespace uci

