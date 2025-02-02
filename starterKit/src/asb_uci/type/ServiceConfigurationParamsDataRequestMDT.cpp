/** @file ServiceConfigurationParamsDataRequestMDT.cpp
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

#include "../../../include/asb_uci/type/ServiceConfigurationParamsDataRequestMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/RequestBaseType.h"
#include "../../../include/asb_uci/type/ServiceID_Type.h"
#include "../../../include/asb_uci/type/SystemID_Type.h"
#include "../../../include/asb_uci/type/VisibleString32Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ServiceConfigurationParamsDataRequestMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ServiceID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString32Type.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ServiceConfigurationParamsDataRequestMDT::ServiceConfigurationParamsDataRequestMDT() = default;

ServiceConfigurationParamsDataRequestMDT::~ServiceConfigurationParamsDataRequestMDT() = default;

void ServiceConfigurationParamsDataRequestMDT::copy(const uci::type::ServiceConfigurationParamsDataRequestMDT& accessor) {
  copyImpl(accessor, false);
}

void ServiceConfigurationParamsDataRequestMDT::copyImpl(const uci::type::ServiceConfigurationParamsDataRequestMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    RequestBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const ServiceConfigurationParamsDataRequestMDT&>(accessor);
    setResultsInNativeMessage(accessorImpl.resultsInNativeMessage_Accessor);
    if (accessorImpl.systemID_Accessor) {
      setSystemID(*(accessorImpl.systemID_Accessor));
    } else {
      systemID_Accessor.reset();
    }
    if (accessorImpl.serviceID_Accessor) {
      setServiceID(*(accessorImpl.serviceID_Accessor));
    } else {
      serviceID_Accessor.reset();
    }
    if (accessorImpl.category_Accessor) {
      setCategory(*(accessorImpl.category_Accessor));
    } else {
      category_Accessor.reset();
    }
  }
}

void ServiceConfigurationParamsDataRequestMDT::reset() noexcept {
  RequestBaseType::reset();
  resultsInNativeMessage_Accessor = false;
  systemID_Accessor.reset();
  serviceID_Accessor.reset();
  category_Accessor.reset();
}

xs::Boolean ServiceConfigurationParamsDataRequestMDT::getResultsInNativeMessage() const {
  return resultsInNativeMessage_Accessor;
}

uci::type::ServiceConfigurationParamsDataRequestMDT& ServiceConfigurationParamsDataRequestMDT::setResultsInNativeMessage(xs::Boolean value) {
  resultsInNativeMessage_Accessor = value;
  return *this;
}


uci::type::SystemID_Type& ServiceConfigurationParamsDataRequestMDT::getSystemID_() const {
  if (systemID_Accessor) {
    return *systemID_Accessor;
  }
  throw uci::base::UCIException("Error in getSystemID(): An attempt was made to get an optional field that was not enabled, call hasSystemID() to determine if it is safe to call getSystemID()");
}

const uci::type::SystemID_Type& ServiceConfigurationParamsDataRequestMDT::getSystemID() const {
  return getSystemID_();
}

uci::type::SystemID_Type& ServiceConfigurationParamsDataRequestMDT::getSystemID() {
  return getSystemID_();
}

uci::type::ServiceConfigurationParamsDataRequestMDT& ServiceConfigurationParamsDataRequestMDT::setSystemID(const uci::type::SystemID_Type& accessor) {
  enableSystemID();
  if (&accessor != systemID_Accessor.get()) {
    systemID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool ServiceConfigurationParamsDataRequestMDT::hasSystemID() const noexcept {
  return static_cast<bool>(systemID_Accessor);
}

uci::type::SystemID_Type& ServiceConfigurationParamsDataRequestMDT::enableSystemID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::systemID_Type : type};
  if ((!systemID_Accessor) || (systemID_Accessor->getAccessorType() != requestedType)) {
    systemID_Accessor = SystemID_Type::create(requestedType);
    if (!systemID_Accessor) {
      throw uci::base::UCIException("Error in enableSystemID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *systemID_Accessor;
}

uci::type::ServiceConfigurationParamsDataRequestMDT& ServiceConfigurationParamsDataRequestMDT::clearSystemID() noexcept {
  systemID_Accessor.reset();
  return *this;
}

uci::type::ServiceID_Type& ServiceConfigurationParamsDataRequestMDT::getServiceID_() const {
  if (serviceID_Accessor) {
    return *serviceID_Accessor;
  }
  throw uci::base::UCIException("Error in getServiceID(): An attempt was made to get an optional field that was not enabled, call hasServiceID() to determine if it is safe to call getServiceID()");
}

const uci::type::ServiceID_Type& ServiceConfigurationParamsDataRequestMDT::getServiceID() const {
  return getServiceID_();
}

uci::type::ServiceID_Type& ServiceConfigurationParamsDataRequestMDT::getServiceID() {
  return getServiceID_();
}

uci::type::ServiceConfigurationParamsDataRequestMDT& ServiceConfigurationParamsDataRequestMDT::setServiceID(const uci::type::ServiceID_Type& accessor) {
  enableServiceID();
  if (&accessor != serviceID_Accessor.get()) {
    serviceID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool ServiceConfigurationParamsDataRequestMDT::hasServiceID() const noexcept {
  return static_cast<bool>(serviceID_Accessor);
}

uci::type::ServiceID_Type& ServiceConfigurationParamsDataRequestMDT::enableServiceID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::serviceID_Type : type};
  if ((!serviceID_Accessor) || (serviceID_Accessor->getAccessorType() != requestedType)) {
    serviceID_Accessor = ServiceID_Type::create(requestedType);
    if (!serviceID_Accessor) {
      throw uci::base::UCIException("Error in enableServiceID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *serviceID_Accessor;
}

uci::type::ServiceConfigurationParamsDataRequestMDT& ServiceConfigurationParamsDataRequestMDT::clearServiceID() noexcept {
  serviceID_Accessor.reset();
  return *this;
}

uci::type::VisibleString32Type& ServiceConfigurationParamsDataRequestMDT::getCategory_() const {
  if (category_Accessor) {
    return *category_Accessor;
  }
  throw uci::base::UCIException("Error in getCategory(): An attempt was made to get an optional field that was not enabled, call hasCategory() to determine if it is safe to call getCategory()");
}

const uci::type::VisibleString32Type& ServiceConfigurationParamsDataRequestMDT::getCategory() const {
  return getCategory_();
}

uci::type::VisibleString32Type& ServiceConfigurationParamsDataRequestMDT::getCategory() {
  return getCategory_();
}

uci::type::ServiceConfigurationParamsDataRequestMDT& ServiceConfigurationParamsDataRequestMDT::setCategory(const uci::type::VisibleString32Type& value) {
  return setCategory(value.c_str());
}

uci::type::ServiceConfigurationParamsDataRequestMDT& ServiceConfigurationParamsDataRequestMDT::setCategory(const std::string& value) {
  return setCategory(value.c_str());
}

uci::type::ServiceConfigurationParamsDataRequestMDT& ServiceConfigurationParamsDataRequestMDT::setCategory(const char* value) {
  enableCategory().setStringValue(value);
  return *this;
}

bool ServiceConfigurationParamsDataRequestMDT::hasCategory() const noexcept {
  return static_cast<bool>(category_Accessor);
}

uci::type::VisibleString32Type& ServiceConfigurationParamsDataRequestMDT::enableCategory(uci::base::accessorType::AccessorType type) {
  if (!category_Accessor) {
    category_Accessor = VisibleString32Type::create(type);
  }
  return *category_Accessor;
}

uci::type::ServiceConfigurationParamsDataRequestMDT& ServiceConfigurationParamsDataRequestMDT::clearCategory() noexcept {
  category_Accessor.reset();
  return *this;
}

std::unique_ptr<ServiceConfigurationParamsDataRequestMDT> ServiceConfigurationParamsDataRequestMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::serviceConfigurationParamsDataRequestMDT : type};
  return (requestedType == uci::type::accessorType::serviceConfigurationParamsDataRequestMDT) ? boost::make_unique<ServiceConfigurationParamsDataRequestMDT>() : nullptr;
}

/**  */
namespace ServiceConfigurationParamsDataRequestMDT_Names {

constexpr const char* Extern_Type_Name{"ServiceConfigurationParamsDataRequestMDT"};
constexpr const char* ResultsInNativeMessage_Name{"ResultsInNativeMessage"};
constexpr const char* SystemID_Name{"SystemID"};
constexpr const char* ServiceID_Name{"ServiceID"};
constexpr const char* Category_Name{"Category"};

} // namespace ServiceConfigurationParamsDataRequestMDT_Names

void ServiceConfigurationParamsDataRequestMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ServiceConfigurationParamsDataRequestMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ServiceConfigurationParamsDataRequestMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ServiceConfigurationParamsDataRequestMDT_Names::ResultsInNativeMessage_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setResultsInNativeMessage(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + ServiceConfigurationParamsDataRequestMDT_Names::SystemID_Name) {
      SystemID_Type::deserialize(valueType.second, accessor.enableSystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ServiceConfigurationParamsDataRequestMDT_Names::ServiceID_Name) {
      ServiceID_Type::deserialize(valueType.second, accessor.enableServiceID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ServiceConfigurationParamsDataRequestMDT_Names::Category_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setCategory(*value);
      }
    }
  }
  RequestBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string ServiceConfigurationParamsDataRequestMDT::serialize(const uci::type::ServiceConfigurationParamsDataRequestMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ServiceConfigurationParamsDataRequestMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ServiceConfigurationParamsDataRequestMDT_Names::Extern_Type_Name);
  }
  RequestBaseType::serialize(accessor, node, "", false, false, false);
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getResultsInNativeMessage(), node, ServiceConfigurationParamsDataRequestMDT_Names::ResultsInNativeMessage_Name);
  if (accessor.hasSystemID()) {
    SystemID_Type::serialize(accessor.getSystemID(), node, ServiceConfigurationParamsDataRequestMDT_Names::SystemID_Name);
  }
  if (accessor.hasServiceID()) {
    ServiceID_Type::serialize(accessor.getServiceID(), node, ServiceConfigurationParamsDataRequestMDT_Names::ServiceID_Name);
  }
  if (accessor.hasCategory()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getCategory(), node, ServiceConfigurationParamsDataRequestMDT_Names::Category_Name);
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

uci::type::ServiceConfigurationParamsDataRequestMDT& ServiceConfigurationParamsDataRequestMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ServiceConfigurationParamsDataRequestMDT>().release());
}

uci::type::ServiceConfigurationParamsDataRequestMDT& ServiceConfigurationParamsDataRequestMDT::create(const uci::type::ServiceConfigurationParamsDataRequestMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ServiceConfigurationParamsDataRequestMDT> newAccessor{boost::make_unique<asb_uci::type::ServiceConfigurationParamsDataRequestMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ServiceConfigurationParamsDataRequestMDT::destroy(uci::type::ServiceConfigurationParamsDataRequestMDT& accessor) {
  delete dynamic_cast<asb_uci::type::ServiceConfigurationParamsDataRequestMDT*>(&accessor);
}

} // namespace type

} // namespace uci

