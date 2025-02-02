/** @file SystemManagementRequestMDT.cpp
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

#include "../../../include/asb_uci/type/SystemManagementRequestMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/EntityManagementRequestAuthorityEnum.h"
#include "../../../include/asb_uci/type/RequestBaseType.h"
#include "../../../include/asb_uci/type/RequestSourceEnum.h"
#include "../../../include/asb_uci/type/SystemID_Type.h"
#include "../../../include/asb_uci/type/SystemManagementRequestType.h"
#include "../../../include/asb_uci/type/SystemMessageIdentifierType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EntityManagementRequestAuthorityEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequestSourceEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemManagementRequestMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemManagementRequestType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemMessageIdentifierType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SystemManagementRequestMDT::SystemManagementRequestMDT()
  : referenceSystemID_Accessor{boost::make_unique<SystemID_Type>()},
    requestType_Accessor{boost::make_unique<RequestType>(1, SIZE_MAX)} {
}

SystemManagementRequestMDT::~SystemManagementRequestMDT() = default;

void SystemManagementRequestMDT::copy(const uci::type::SystemManagementRequestMDT& accessor) {
  copyImpl(accessor, false);
}

void SystemManagementRequestMDT::copyImpl(const uci::type::SystemManagementRequestMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    RequestBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const SystemManagementRequestMDT&>(accessor);
    if (accessorImpl.authorityType_Accessor) {
      setAuthorityType(*(accessorImpl.authorityType_Accessor));
    } else {
      authorityType_Accessor.reset();
    }
    if (accessorImpl.requestSource_Accessor) {
      setRequestSource(*(accessorImpl.requestSource_Accessor));
    } else {
      requestSource_Accessor.reset();
    }
    setReferenceSystemID(*(accessorImpl.referenceSystemID_Accessor));
    setRequestType(*(accessorImpl.requestType_Accessor));
    if (accessorImpl.hasUpdateFromControllingUnit()) {
      setUpdateFromControllingUnit(accessorImpl.getUpdateFromControllingUnit());
    } else {
      clearUpdateFromControllingUnit();
    }
    if (accessorImpl.source_Accessor) {
      setSource(*(accessorImpl.source_Accessor));
    } else {
      source_Accessor.reset();
    }
  }
}

void SystemManagementRequestMDT::reset() noexcept {
  RequestBaseType::reset();
  authorityType_Accessor.reset();
  requestSource_Accessor.reset();
  referenceSystemID_Accessor->reset();
  requestType_Accessor->reset();
  clearUpdateFromControllingUnit();
  source_Accessor.reset();
}

uci::type::EntityManagementRequestAuthorityEnum& SystemManagementRequestMDT::getAuthorityType_() const {
  if (authorityType_Accessor) {
    return *authorityType_Accessor;
  }
  throw uci::base::UCIException("Error in getAuthorityType(): An attempt was made to get an optional field that was not enabled, call hasAuthorityType() to determine if it is safe to call getAuthorityType()");
}

const uci::type::EntityManagementRequestAuthorityEnum& SystemManagementRequestMDT::getAuthorityType() const {
  return getAuthorityType_();
}

uci::type::EntityManagementRequestAuthorityEnum& SystemManagementRequestMDT::getAuthorityType() {
  return getAuthorityType_();
}

uci::type::SystemManagementRequestMDT& SystemManagementRequestMDT::setAuthorityType(const uci::type::EntityManagementRequestAuthorityEnum& accessor) {
  enableAuthorityType();
  if (&accessor != authorityType_Accessor.get()) {
    authorityType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::SystemManagementRequestMDT& SystemManagementRequestMDT::setAuthorityType(const uci::type::EntityManagementRequestAuthorityEnum::EnumerationItem value) {
  enableAuthorityType().setValue(value);
  return *this;
}

bool SystemManagementRequestMDT::hasAuthorityType() const noexcept {
  return static_cast<bool>(authorityType_Accessor);
}

uci::type::EntityManagementRequestAuthorityEnum& SystemManagementRequestMDT::enableAuthorityType(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::entityManagementRequestAuthorityEnum : type};
  if ((!authorityType_Accessor) || (authorityType_Accessor->getAccessorType() != requestedType)) {
    authorityType_Accessor = EntityManagementRequestAuthorityEnum::create(requestedType);
    if (!authorityType_Accessor) {
      throw uci::base::UCIException("Error in enableAuthorityType(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *authorityType_Accessor;
}

uci::type::SystemManagementRequestMDT& SystemManagementRequestMDT::clearAuthorityType() noexcept {
  authorityType_Accessor.reset();
  return *this;
}

uci::type::RequestSourceEnum& SystemManagementRequestMDT::getRequestSource_() const {
  if (requestSource_Accessor) {
    return *requestSource_Accessor;
  }
  throw uci::base::UCIException("Error in getRequestSource(): An attempt was made to get an optional field that was not enabled, call hasRequestSource() to determine if it is safe to call getRequestSource()");
}

const uci::type::RequestSourceEnum& SystemManagementRequestMDT::getRequestSource() const {
  return getRequestSource_();
}

uci::type::RequestSourceEnum& SystemManagementRequestMDT::getRequestSource() {
  return getRequestSource_();
}

uci::type::SystemManagementRequestMDT& SystemManagementRequestMDT::setRequestSource(const uci::type::RequestSourceEnum& accessor) {
  enableRequestSource();
  if (&accessor != requestSource_Accessor.get()) {
    requestSource_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::SystemManagementRequestMDT& SystemManagementRequestMDT::setRequestSource(const uci::type::RequestSourceEnum::EnumerationItem value) {
  enableRequestSource().setValue(value);
  return *this;
}

bool SystemManagementRequestMDT::hasRequestSource() const noexcept {
  return static_cast<bool>(requestSource_Accessor);
}

uci::type::RequestSourceEnum& SystemManagementRequestMDT::enableRequestSource(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::requestSourceEnum : type};
  if ((!requestSource_Accessor) || (requestSource_Accessor->getAccessorType() != requestedType)) {
    requestSource_Accessor = RequestSourceEnum::create(requestedType);
    if (!requestSource_Accessor) {
      throw uci::base::UCIException("Error in enableRequestSource(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *requestSource_Accessor;
}

uci::type::SystemManagementRequestMDT& SystemManagementRequestMDT::clearRequestSource() noexcept {
  requestSource_Accessor.reset();
  return *this;
}

const uci::type::SystemID_Type& SystemManagementRequestMDT::getReferenceSystemID() const {
  return *referenceSystemID_Accessor;
}

uci::type::SystemID_Type& SystemManagementRequestMDT::getReferenceSystemID() {
  return *referenceSystemID_Accessor;
}

uci::type::SystemManagementRequestMDT& SystemManagementRequestMDT::setReferenceSystemID(const uci::type::SystemID_Type& accessor) {
  if (&accessor != referenceSystemID_Accessor.get()) {
    referenceSystemID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SystemManagementRequestMDT::RequestType& SystemManagementRequestMDT::getRequestType() const {
  return *requestType_Accessor;
}

uci::type::SystemManagementRequestMDT::RequestType& SystemManagementRequestMDT::getRequestType() {
  return *requestType_Accessor;
}

uci::type::SystemManagementRequestMDT& SystemManagementRequestMDT::setRequestType(const uci::type::SystemManagementRequestMDT::RequestType& accessor) {
  if (&accessor != requestType_Accessor.get()) {
    requestType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

xs::Boolean SystemManagementRequestMDT::getUpdateFromControllingUnit() const {
  if (updateFromControllingUnit_Accessor) {
    return *updateFromControllingUnit_Accessor;
  }
  throw uci::base::UCIException("Error in getUpdateFromControllingUnit(): An attempt was made to get an optional field that was not enabled, call hasUpdateFromControllingUnit() to determine if it is safe to call getUpdateFromControllingUnit()");
}

uci::type::SystemManagementRequestMDT& SystemManagementRequestMDT::setUpdateFromControllingUnit(xs::Boolean value) {
  updateFromControllingUnit_Accessor = value;
  return *this;
}

bool SystemManagementRequestMDT::hasUpdateFromControllingUnit() const noexcept {
  return updateFromControllingUnit_Accessor.has_value();
}

uci::type::SystemManagementRequestMDT& SystemManagementRequestMDT::clearUpdateFromControllingUnit() noexcept {
  updateFromControllingUnit_Accessor.reset();
  return *this;
}

uci::type::SystemMessageIdentifierType& SystemManagementRequestMDT::getSource_() const {
  if (source_Accessor) {
    return *source_Accessor;
  }
  throw uci::base::UCIException("Error in getSource(): An attempt was made to get an optional field that was not enabled, call hasSource() to determine if it is safe to call getSource()");
}

const uci::type::SystemMessageIdentifierType& SystemManagementRequestMDT::getSource() const {
  return getSource_();
}

uci::type::SystemMessageIdentifierType& SystemManagementRequestMDT::getSource() {
  return getSource_();
}

uci::type::SystemManagementRequestMDT& SystemManagementRequestMDT::setSource(const uci::type::SystemMessageIdentifierType& accessor) {
  enableSource();
  if (&accessor != source_Accessor.get()) {
    source_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool SystemManagementRequestMDT::hasSource() const noexcept {
  return static_cast<bool>(source_Accessor);
}

uci::type::SystemMessageIdentifierType& SystemManagementRequestMDT::enableSource(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::systemMessageIdentifierType : type};
  if ((!source_Accessor) || (source_Accessor->getAccessorType() != requestedType)) {
    source_Accessor = SystemMessageIdentifierType::create(requestedType);
    if (!source_Accessor) {
      throw uci::base::UCIException("Error in enableSource(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *source_Accessor;
}

uci::type::SystemManagementRequestMDT& SystemManagementRequestMDT::clearSource() noexcept {
  source_Accessor.reset();
  return *this;
}

std::unique_ptr<SystemManagementRequestMDT> SystemManagementRequestMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::systemManagementRequestMDT : type};
  return (requestedType == uci::type::accessorType::systemManagementRequestMDT) ? boost::make_unique<SystemManagementRequestMDT>() : nullptr;
}

/**  */
namespace SystemManagementRequestMDT_Names {

constexpr const char* Extern_Type_Name{"SystemManagementRequestMDT"};
constexpr const char* AuthorityType_Name{"AuthorityType"};
constexpr const char* RequestSource_Name{"RequestSource"};
constexpr const char* ReferenceSystemID_Name{"ReferenceSystemID"};
constexpr const char* RequestType_Name{"RequestType"};
constexpr const char* UpdateFromControllingUnit_Name{"UpdateFromControllingUnit"};
constexpr const char* Source_Name{"Source"};

} // namespace SystemManagementRequestMDT_Names

void SystemManagementRequestMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::SystemManagementRequestMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SystemManagementRequestMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SystemManagementRequestMDT_Names::AuthorityType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableAuthorityType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + SystemManagementRequestMDT_Names::RequestSource_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableRequestSource().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + SystemManagementRequestMDT_Names::ReferenceSystemID_Name) {
      SystemID_Type::deserialize(valueType.second, accessor.getReferenceSystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SystemManagementRequestMDT_Names::RequestType_Name) {
      uci::type::SystemManagementRequestMDT::RequestType& boundedList = accessor.getRequestType();
      const uci::type::SystemManagementRequestMDT::RequestType::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::SystemManagementRequestType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SystemManagementRequestMDT_Names::UpdateFromControllingUnit_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setUpdateFromControllingUnit(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + SystemManagementRequestMDT_Names::Source_Name) {
      SystemMessageIdentifierType::deserialize(valueType.second, accessor.enableSource(), nodeName, nsPrefix);
    }
  }
  RequestBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string SystemManagementRequestMDT::serialize(const uci::type::SystemManagementRequestMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SystemManagementRequestMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SystemManagementRequestMDT_Names::Extern_Type_Name);
  }
  RequestBaseType::serialize(accessor, node, "", false, false, false);
  if (accessor.hasAuthorityType()) {
    EntityManagementRequestAuthorityEnum::serialize(accessor.getAuthorityType(), node, SystemManagementRequestMDT_Names::AuthorityType_Name, false);
  }
  if (accessor.hasRequestSource()) {
    RequestSourceEnum::serialize(accessor.getRequestSource(), node, SystemManagementRequestMDT_Names::RequestSource_Name, false);
  }
  SystemID_Type::serialize(accessor.getReferenceSystemID(), node, SystemManagementRequestMDT_Names::ReferenceSystemID_Name);
  {
    const uci::type::SystemManagementRequestMDT::RequestType& boundedList = accessor.getRequestType();
    for (uci::type::SystemManagementRequestMDT::RequestType::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::SystemManagementRequestType::serialize(boundedList.at(i), node, SystemManagementRequestMDT_Names::RequestType_Name);
    }
  }
  if (accessor.hasUpdateFromControllingUnit()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getUpdateFromControllingUnit(), node, SystemManagementRequestMDT_Names::UpdateFromControllingUnit_Name);
  }
  if (accessor.hasSource()) {
    SystemMessageIdentifierType::serialize(accessor.getSource(), node, SystemManagementRequestMDT_Names::Source_Name);
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

uci::type::SystemManagementRequestMDT& SystemManagementRequestMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SystemManagementRequestMDT>().release());
}

uci::type::SystemManagementRequestMDT& SystemManagementRequestMDT::create(const uci::type::SystemManagementRequestMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SystemManagementRequestMDT> newAccessor{boost::make_unique<asb_uci::type::SystemManagementRequestMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SystemManagementRequestMDT::destroy(uci::type::SystemManagementRequestMDT& accessor) {
  delete dynamic_cast<asb_uci::type::SystemManagementRequestMDT*>(&accessor);
}

} // namespace type

} // namespace uci

