/** @file RDMA_InitializeSetupMDT.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:14 PM
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

#include "../../../include/asb_uci/type/RDMA_InitializeSetupMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/NetworkEndpointType.h"
#include "../../../include/asb_uci/type/RDMA_InitializeID_Type.h"
#include "../../../include/asb_uci/type/RDMA_InitializeSetupID_Type.h"
#include "../../../include/asb_uci/type/RDMA_ProviderEnum.h"
#include "../../../include/asb_uci/type/ServiceID_Type.h"
#include "../../../include/asb_uci/type/SubsystemID_Type.h"
#include "../../../include/asb_uci/type/SystemID_Type.h"
#include "../../../include/asb_uci/type/VisibleString1024Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/NetworkEndpointType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RDMA_InitializeID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RDMA_InitializeSetupID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RDMA_InitializeSetupMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RDMA_ProviderEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ServiceID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString1024Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

RDMA_InitializeSetupMDT::RDMA_InitializeSetupMDT()
  : rDMA_InitializeSetupID_Accessor{boost::make_unique<RDMA_InitializeSetupID_Type>()},
    endpoint_Accessor{boost::make_unique<Endpoint>(0, SIZE_MAX)},
    rDMA_Provider_Accessor{boost::make_unique<RDMA_ProviderEnum>()} {
}

RDMA_InitializeSetupMDT::~RDMA_InitializeSetupMDT() = default;

void RDMA_InitializeSetupMDT::copy(const uci::type::RDMA_InitializeSetupMDT& accessor) {
  copyImpl(accessor, false);
}

void RDMA_InitializeSetupMDT::copyImpl(const uci::type::RDMA_InitializeSetupMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const RDMA_InitializeSetupMDT&>(accessor);
    setRDMA_InitializeSetupID(*(accessorImpl.rDMA_InitializeSetupID_Accessor));
    if (accessorImpl.rDMA_InitializeID_Accessor) {
      setRDMA_InitializeID(*(accessorImpl.rDMA_InitializeID_Accessor));
    } else {
      rDMA_InitializeID_Accessor.reset();
    }
    if (accessorImpl.systemID_Accessor) {
      setSystemID(*(accessorImpl.systemID_Accessor));
    } else {
      systemID_Accessor.reset();
    }
    if (accessorImpl.subsystemID_Accessor) {
      setSubsystemID(*(accessorImpl.subsystemID_Accessor));
    } else {
      subsystemID_Accessor.reset();
    }
    if (accessorImpl.serviceID_Accessor) {
      setServiceID(*(accessorImpl.serviceID_Accessor));
    } else {
      serviceID_Accessor.reset();
    }
    setEndpoint(*(accessorImpl.endpoint_Accessor));
    setRDMA_Provider(*(accessorImpl.rDMA_Provider_Accessor));
    if (accessorImpl.host_Accessor) {
      setHost(*(accessorImpl.host_Accessor));
    } else {
      host_Accessor.reset();
    }
    if (accessorImpl.endpointName_Accessor) {
      setEndpointName(*(accessorImpl.endpointName_Accessor));
    } else {
      endpointName_Accessor.reset();
    }
  }
}

void RDMA_InitializeSetupMDT::reset() noexcept {
  rDMA_InitializeSetupID_Accessor->reset();
  rDMA_InitializeID_Accessor.reset();
  systemID_Accessor.reset();
  subsystemID_Accessor.reset();
  serviceID_Accessor.reset();
  endpoint_Accessor->reset();
  rDMA_Provider_Accessor->reset();
  host_Accessor.reset();
  endpointName_Accessor.reset();
}

const uci::type::RDMA_InitializeSetupID_Type& RDMA_InitializeSetupMDT::getRDMA_InitializeSetupID() const {
  return *rDMA_InitializeSetupID_Accessor;
}

uci::type::RDMA_InitializeSetupID_Type& RDMA_InitializeSetupMDT::getRDMA_InitializeSetupID() {
  return *rDMA_InitializeSetupID_Accessor;
}

uci::type::RDMA_InitializeSetupMDT& RDMA_InitializeSetupMDT::setRDMA_InitializeSetupID(const uci::type::RDMA_InitializeSetupID_Type& accessor) {
  if (&accessor != rDMA_InitializeSetupID_Accessor.get()) {
    rDMA_InitializeSetupID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::RDMA_InitializeID_Type& RDMA_InitializeSetupMDT::getRDMA_InitializeID_() const {
  if (rDMA_InitializeID_Accessor) {
    return *rDMA_InitializeID_Accessor;
  }
  throw uci::base::UCIException("Error in getRDMA_InitializeID(): An attempt was made to get an optional field that was not enabled, call hasRDMA_InitializeID() to determine if it is safe to call getRDMA_InitializeID()");
}

const uci::type::RDMA_InitializeID_Type& RDMA_InitializeSetupMDT::getRDMA_InitializeID() const {
  return getRDMA_InitializeID_();
}

uci::type::RDMA_InitializeID_Type& RDMA_InitializeSetupMDT::getRDMA_InitializeID() {
  return getRDMA_InitializeID_();
}

uci::type::RDMA_InitializeSetupMDT& RDMA_InitializeSetupMDT::setRDMA_InitializeID(const uci::type::RDMA_InitializeID_Type& accessor) {
  enableRDMA_InitializeID();
  if (&accessor != rDMA_InitializeID_Accessor.get()) {
    rDMA_InitializeID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RDMA_InitializeSetupMDT::hasRDMA_InitializeID() const noexcept {
  return static_cast<bool>(rDMA_InitializeID_Accessor);
}

uci::type::RDMA_InitializeID_Type& RDMA_InitializeSetupMDT::enableRDMA_InitializeID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::rDMA_InitializeID_Type : type};
  if ((!rDMA_InitializeID_Accessor) || (rDMA_InitializeID_Accessor->getAccessorType() != requestedType)) {
    rDMA_InitializeID_Accessor = RDMA_InitializeID_Type::create(requestedType);
    if (!rDMA_InitializeID_Accessor) {
      throw uci::base::UCIException("Error in enableRDMA_InitializeID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *rDMA_InitializeID_Accessor;
}

uci::type::RDMA_InitializeSetupMDT& RDMA_InitializeSetupMDT::clearRDMA_InitializeID() noexcept {
  rDMA_InitializeID_Accessor.reset();
  return *this;
}

uci::type::SystemID_Type& RDMA_InitializeSetupMDT::getSystemID_() const {
  if (systemID_Accessor) {
    return *systemID_Accessor;
  }
  throw uci::base::UCIException("Error in getSystemID(): An attempt was made to get an optional field that was not enabled, call hasSystemID() to determine if it is safe to call getSystemID()");
}

const uci::type::SystemID_Type& RDMA_InitializeSetupMDT::getSystemID() const {
  return getSystemID_();
}

uci::type::SystemID_Type& RDMA_InitializeSetupMDT::getSystemID() {
  return getSystemID_();
}

uci::type::RDMA_InitializeSetupMDT& RDMA_InitializeSetupMDT::setSystemID(const uci::type::SystemID_Type& accessor) {
  enableSystemID();
  if (&accessor != systemID_Accessor.get()) {
    systemID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RDMA_InitializeSetupMDT::hasSystemID() const noexcept {
  return static_cast<bool>(systemID_Accessor);
}

uci::type::SystemID_Type& RDMA_InitializeSetupMDT::enableSystemID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::systemID_Type : type};
  if ((!systemID_Accessor) || (systemID_Accessor->getAccessorType() != requestedType)) {
    systemID_Accessor = SystemID_Type::create(requestedType);
    if (!systemID_Accessor) {
      throw uci::base::UCIException("Error in enableSystemID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *systemID_Accessor;
}

uci::type::RDMA_InitializeSetupMDT& RDMA_InitializeSetupMDT::clearSystemID() noexcept {
  systemID_Accessor.reset();
  return *this;
}

uci::type::SubsystemID_Type& RDMA_InitializeSetupMDT::getSubsystemID_() const {
  if (subsystemID_Accessor) {
    return *subsystemID_Accessor;
  }
  throw uci::base::UCIException("Error in getSubsystemID(): An attempt was made to get an optional field that was not enabled, call hasSubsystemID() to determine if it is safe to call getSubsystemID()");
}

const uci::type::SubsystemID_Type& RDMA_InitializeSetupMDT::getSubsystemID() const {
  return getSubsystemID_();
}

uci::type::SubsystemID_Type& RDMA_InitializeSetupMDT::getSubsystemID() {
  return getSubsystemID_();
}

uci::type::RDMA_InitializeSetupMDT& RDMA_InitializeSetupMDT::setSubsystemID(const uci::type::SubsystemID_Type& accessor) {
  enableSubsystemID();
  if (&accessor != subsystemID_Accessor.get()) {
    subsystemID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RDMA_InitializeSetupMDT::hasSubsystemID() const noexcept {
  return static_cast<bool>(subsystemID_Accessor);
}

uci::type::SubsystemID_Type& RDMA_InitializeSetupMDT::enableSubsystemID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::subsystemID_Type : type};
  if ((!subsystemID_Accessor) || (subsystemID_Accessor->getAccessorType() != requestedType)) {
    subsystemID_Accessor = SubsystemID_Type::create(requestedType);
    if (!subsystemID_Accessor) {
      throw uci::base::UCIException("Error in enableSubsystemID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *subsystemID_Accessor;
}

uci::type::RDMA_InitializeSetupMDT& RDMA_InitializeSetupMDT::clearSubsystemID() noexcept {
  subsystemID_Accessor.reset();
  return *this;
}

uci::type::ServiceID_Type& RDMA_InitializeSetupMDT::getServiceID_() const {
  if (serviceID_Accessor) {
    return *serviceID_Accessor;
  }
  throw uci::base::UCIException("Error in getServiceID(): An attempt was made to get an optional field that was not enabled, call hasServiceID() to determine if it is safe to call getServiceID()");
}

const uci::type::ServiceID_Type& RDMA_InitializeSetupMDT::getServiceID() const {
  return getServiceID_();
}

uci::type::ServiceID_Type& RDMA_InitializeSetupMDT::getServiceID() {
  return getServiceID_();
}

uci::type::RDMA_InitializeSetupMDT& RDMA_InitializeSetupMDT::setServiceID(const uci::type::ServiceID_Type& accessor) {
  enableServiceID();
  if (&accessor != serviceID_Accessor.get()) {
    serviceID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RDMA_InitializeSetupMDT::hasServiceID() const noexcept {
  return static_cast<bool>(serviceID_Accessor);
}

uci::type::ServiceID_Type& RDMA_InitializeSetupMDT::enableServiceID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::serviceID_Type : type};
  if ((!serviceID_Accessor) || (serviceID_Accessor->getAccessorType() != requestedType)) {
    serviceID_Accessor = ServiceID_Type::create(requestedType);
    if (!serviceID_Accessor) {
      throw uci::base::UCIException("Error in enableServiceID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *serviceID_Accessor;
}

uci::type::RDMA_InitializeSetupMDT& RDMA_InitializeSetupMDT::clearServiceID() noexcept {
  serviceID_Accessor.reset();
  return *this;
}

const uci::type::RDMA_InitializeSetupMDT::Endpoint& RDMA_InitializeSetupMDT::getEndpoint() const {
  return *endpoint_Accessor;
}

uci::type::RDMA_InitializeSetupMDT::Endpoint& RDMA_InitializeSetupMDT::getEndpoint() {
  return *endpoint_Accessor;
}

uci::type::RDMA_InitializeSetupMDT& RDMA_InitializeSetupMDT::setEndpoint(const uci::type::RDMA_InitializeSetupMDT::Endpoint& accessor) {
  if (&accessor != endpoint_Accessor.get()) {
    endpoint_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::RDMA_ProviderEnum& RDMA_InitializeSetupMDT::getRDMA_Provider() const {
  return *rDMA_Provider_Accessor;
}

uci::type::RDMA_ProviderEnum& RDMA_InitializeSetupMDT::getRDMA_Provider() {
  return *rDMA_Provider_Accessor;
}

uci::type::RDMA_InitializeSetupMDT& RDMA_InitializeSetupMDT::setRDMA_Provider(const uci::type::RDMA_ProviderEnum& accessor) {
  if (&accessor != rDMA_Provider_Accessor.get()) {
    rDMA_Provider_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::RDMA_InitializeSetupMDT& RDMA_InitializeSetupMDT::setRDMA_Provider(uci::type::RDMA_ProviderEnum::EnumerationItem value) {
  rDMA_Provider_Accessor->setValue(value);
  return *this;
}


uci::type::NetworkEndpointType& RDMA_InitializeSetupMDT::getHost_() const {
  if (host_Accessor) {
    return *host_Accessor;
  }
  throw uci::base::UCIException("Error in getHost(): An attempt was made to get an optional field that was not enabled, call hasHost() to determine if it is safe to call getHost()");
}

const uci::type::NetworkEndpointType& RDMA_InitializeSetupMDT::getHost() const {
  return getHost_();
}

uci::type::NetworkEndpointType& RDMA_InitializeSetupMDT::getHost() {
  return getHost_();
}

uci::type::RDMA_InitializeSetupMDT& RDMA_InitializeSetupMDT::setHost(const uci::type::NetworkEndpointType& accessor) {
  enableHost();
  if (&accessor != host_Accessor.get()) {
    host_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RDMA_InitializeSetupMDT::hasHost() const noexcept {
  return static_cast<bool>(host_Accessor);
}

uci::type::NetworkEndpointType& RDMA_InitializeSetupMDT::enableHost(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::networkEndpointType : type};
  if ((!host_Accessor) || (host_Accessor->getAccessorType() != requestedType)) {
    host_Accessor = NetworkEndpointType::create(requestedType);
    if (!host_Accessor) {
      throw uci::base::UCIException("Error in enableHost(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *host_Accessor;
}

uci::type::RDMA_InitializeSetupMDT& RDMA_InitializeSetupMDT::clearHost() noexcept {
  host_Accessor.reset();
  return *this;
}

uci::type::VisibleString1024Type& RDMA_InitializeSetupMDT::getEndpointName_() const {
  if (endpointName_Accessor) {
    return *endpointName_Accessor;
  }
  throw uci::base::UCIException("Error in getEndpointName(): An attempt was made to get an optional field that was not enabled, call hasEndpointName() to determine if it is safe to call getEndpointName()");
}

const uci::type::VisibleString1024Type& RDMA_InitializeSetupMDT::getEndpointName() const {
  return getEndpointName_();
}

uci::type::VisibleString1024Type& RDMA_InitializeSetupMDT::getEndpointName() {
  return getEndpointName_();
}

uci::type::RDMA_InitializeSetupMDT& RDMA_InitializeSetupMDT::setEndpointName(const uci::type::VisibleString1024Type& value) {
  return setEndpointName(value.c_str());
}

uci::type::RDMA_InitializeSetupMDT& RDMA_InitializeSetupMDT::setEndpointName(const std::string& value) {
  return setEndpointName(value.c_str());
}

uci::type::RDMA_InitializeSetupMDT& RDMA_InitializeSetupMDT::setEndpointName(const char* value) {
  enableEndpointName().setStringValue(value);
  return *this;
}

bool RDMA_InitializeSetupMDT::hasEndpointName() const noexcept {
  return static_cast<bool>(endpointName_Accessor);
}

uci::type::VisibleString1024Type& RDMA_InitializeSetupMDT::enableEndpointName(uci::base::accessorType::AccessorType type) {
  if (!endpointName_Accessor) {
    endpointName_Accessor = VisibleString1024Type::create(type);
  }
  return *endpointName_Accessor;
}

uci::type::RDMA_InitializeSetupMDT& RDMA_InitializeSetupMDT::clearEndpointName() noexcept {
  endpointName_Accessor.reset();
  return *this;
}

std::unique_ptr<RDMA_InitializeSetupMDT> RDMA_InitializeSetupMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::rDMA_InitializeSetupMDT : type};
  return (requestedType == uci::type::accessorType::rDMA_InitializeSetupMDT) ? boost::make_unique<RDMA_InitializeSetupMDT>() : nullptr;
}

/**  */
namespace RDMA_InitializeSetupMDT_Names {

constexpr const char* Extern_Type_Name{"RDMA_InitializeSetupMDT"};
constexpr const char* RDMA_InitializeSetupID_Name{"RDMA_InitializeSetupID"};
constexpr const char* RDMA_InitializeID_Name{"RDMA_InitializeID"};
constexpr const char* SystemID_Name{"SystemID"};
constexpr const char* SubsystemID_Name{"SubsystemID"};
constexpr const char* ServiceID_Name{"ServiceID"};
constexpr const char* Endpoint_Name{"Endpoint"};
constexpr const char* RDMA_Provider_Name{"RDMA_Provider"};
constexpr const char* Host_Name{"Host"};
constexpr const char* EndpointName_Name{"EndpointName"};

} // namespace RDMA_InitializeSetupMDT_Names

void RDMA_InitializeSetupMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::RDMA_InitializeSetupMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RDMA_InitializeSetupMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RDMA_InitializeSetupMDT_Names::RDMA_InitializeSetupID_Name) {
      RDMA_InitializeSetupID_Type::deserialize(valueType.second, accessor.getRDMA_InitializeSetupID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RDMA_InitializeSetupMDT_Names::RDMA_InitializeID_Name) {
      RDMA_InitializeID_Type::deserialize(valueType.second, accessor.enableRDMA_InitializeID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RDMA_InitializeSetupMDT_Names::SystemID_Name) {
      SystemID_Type::deserialize(valueType.second, accessor.enableSystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RDMA_InitializeSetupMDT_Names::SubsystemID_Name) {
      SubsystemID_Type::deserialize(valueType.second, accessor.enableSubsystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RDMA_InitializeSetupMDT_Names::ServiceID_Name) {
      ServiceID_Type::deserialize(valueType.second, accessor.enableServiceID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RDMA_InitializeSetupMDT_Names::Endpoint_Name) {
      uci::type::RDMA_InitializeSetupMDT::Endpoint& boundedList = accessor.getEndpoint();
      const uci::type::RDMA_InitializeSetupMDT::Endpoint::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::NetworkEndpointType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RDMA_InitializeSetupMDT_Names::RDMA_Provider_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getRDMA_Provider().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + RDMA_InitializeSetupMDT_Names::Host_Name) {
      NetworkEndpointType::deserialize(valueType.second, accessor.enableHost(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RDMA_InitializeSetupMDT_Names::EndpointName_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEndpointName(*value);
      }
    }
  }
}

std::string RDMA_InitializeSetupMDT::serialize(const uci::type::RDMA_InitializeSetupMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? RDMA_InitializeSetupMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, RDMA_InitializeSetupMDT_Names::Extern_Type_Name);
  }
  RDMA_InitializeSetupID_Type::serialize(accessor.getRDMA_InitializeSetupID(), node, RDMA_InitializeSetupMDT_Names::RDMA_InitializeSetupID_Name);
  if (accessor.hasRDMA_InitializeID()) {
    RDMA_InitializeID_Type::serialize(accessor.getRDMA_InitializeID(), node, RDMA_InitializeSetupMDT_Names::RDMA_InitializeID_Name);
  }
  if (accessor.hasSystemID()) {
    SystemID_Type::serialize(accessor.getSystemID(), node, RDMA_InitializeSetupMDT_Names::SystemID_Name);
  }
  if (accessor.hasSubsystemID()) {
    SubsystemID_Type::serialize(accessor.getSubsystemID(), node, RDMA_InitializeSetupMDT_Names::SubsystemID_Name);
  }
  if (accessor.hasServiceID()) {
    ServiceID_Type::serialize(accessor.getServiceID(), node, RDMA_InitializeSetupMDT_Names::ServiceID_Name);
  }
  {
    const uci::type::RDMA_InitializeSetupMDT::Endpoint& boundedList = accessor.getEndpoint();
    for (uci::type::RDMA_InitializeSetupMDT::Endpoint::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::NetworkEndpointType::serialize(boundedList.at(i), node, RDMA_InitializeSetupMDT_Names::Endpoint_Name);
    }
  }
  RDMA_ProviderEnum::serialize(accessor.getRDMA_Provider(), node, RDMA_InitializeSetupMDT_Names::RDMA_Provider_Name, false);
  if (accessor.hasHost()) {
    NetworkEndpointType::serialize(accessor.getHost(), node, RDMA_InitializeSetupMDT_Names::Host_Name);
  }
  if (accessor.hasEndpointName()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getEndpointName(), node, RDMA_InitializeSetupMDT_Names::EndpointName_Name);
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

uci::type::RDMA_InitializeSetupMDT& RDMA_InitializeSetupMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::RDMA_InitializeSetupMDT>().release());
}

uci::type::RDMA_InitializeSetupMDT& RDMA_InitializeSetupMDT::create(const uci::type::RDMA_InitializeSetupMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::RDMA_InitializeSetupMDT> newAccessor{boost::make_unique<asb_uci::type::RDMA_InitializeSetupMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void RDMA_InitializeSetupMDT::destroy(uci::type::RDMA_InitializeSetupMDT& accessor) {
  delete dynamic_cast<asb_uci::type::RDMA_InitializeSetupMDT*>(&accessor);
}

} // namespace type

} // namespace uci

