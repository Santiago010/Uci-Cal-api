/** @file AccessAssessmentFilterType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:11 PM
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

#include "../../../include/asb_uci/type/AccessAssessmentFilterType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/AccessEventFilterType.h"
#include "../../../include/asb_uci/type/AssetFilterType.h"
#include "../../../include/asb_uci/type/CapabilityTaxonomyUniversalType.h"
#include "../../../include/asb_uci/type/VisibleString32Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AccessAssessmentFilterType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AccessEventFilterType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AssetFilterType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityTaxonomyUniversalType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString32Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

AccessAssessmentFilterType::AccessAssessmentFilterType()
  : assessmentName_Accessor{boost::make_unique<AssessmentName>(0, SIZE_MAX)},
    accessEvent_Accessor{boost::make_unique<AccessEvent>(0, SIZE_MAX)} {
}

AccessAssessmentFilterType::~AccessAssessmentFilterType() = default;

void AccessAssessmentFilterType::copy(const uci::type::AccessAssessmentFilterType& accessor) {
  copyImpl(accessor, false);
}

void AccessAssessmentFilterType::copyImpl(const uci::type::AccessAssessmentFilterType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const AccessAssessmentFilterType&>(accessor);
    setAssessmentName(*(accessorImpl.assessmentName_Accessor));
    if (accessorImpl.assessedCapabilities_Accessor) {
      setAssessedCapabilities(*(accessorImpl.assessedCapabilities_Accessor));
    } else {
      assessedCapabilities_Accessor.reset();
    }
    if (accessorImpl.subject_Accessor) {
      setSubject(*(accessorImpl.subject_Accessor));
    } else {
      subject_Accessor.reset();
    }
    if (accessorImpl.assessedObject_Accessor) {
      setAssessedObject(*(accessorImpl.assessedObject_Accessor));
    } else {
      assessedObject_Accessor.reset();
    }
    setAccessEvent(*(accessorImpl.accessEvent_Accessor));
  }
}

void AccessAssessmentFilterType::reset() noexcept {
  assessmentName_Accessor->reset();
  assessedCapabilities_Accessor.reset();
  subject_Accessor.reset();
  assessedObject_Accessor.reset();
  accessEvent_Accessor->reset();
}

const uci::type::AccessAssessmentFilterType::AssessmentName& AccessAssessmentFilterType::getAssessmentName() const {
  return *assessmentName_Accessor;
}

uci::type::AccessAssessmentFilterType::AssessmentName& AccessAssessmentFilterType::getAssessmentName() {
  return *assessmentName_Accessor;
}

uci::type::AccessAssessmentFilterType& AccessAssessmentFilterType::setAssessmentName(const uci::type::AccessAssessmentFilterType::AssessmentName& accessor) {
  if (&accessor != assessmentName_Accessor.get()) {
    assessmentName_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::CapabilityTaxonomyUniversalType& AccessAssessmentFilterType::getAssessedCapabilities_() const {
  if (assessedCapabilities_Accessor) {
    return *assessedCapabilities_Accessor;
  }
  throw uci::base::UCIException("Error in getAssessedCapabilities(): An attempt was made to get an optional field that was not enabled, call hasAssessedCapabilities() to determine if it is safe to call getAssessedCapabilities()");
}

const uci::type::CapabilityTaxonomyUniversalType& AccessAssessmentFilterType::getAssessedCapabilities() const {
  return getAssessedCapabilities_();
}

uci::type::CapabilityTaxonomyUniversalType& AccessAssessmentFilterType::getAssessedCapabilities() {
  return getAssessedCapabilities_();
}

uci::type::AccessAssessmentFilterType& AccessAssessmentFilterType::setAssessedCapabilities(const uci::type::CapabilityTaxonomyUniversalType& accessor) {
  enableAssessedCapabilities();
  if (&accessor != assessedCapabilities_Accessor.get()) {
    assessedCapabilities_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool AccessAssessmentFilterType::hasAssessedCapabilities() const noexcept {
  return static_cast<bool>(assessedCapabilities_Accessor);
}

uci::type::CapabilityTaxonomyUniversalType& AccessAssessmentFilterType::enableAssessedCapabilities(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::capabilityTaxonomyUniversalType : type};
  if ((!assessedCapabilities_Accessor) || (assessedCapabilities_Accessor->getAccessorType() != requestedType)) {
    assessedCapabilities_Accessor = CapabilityTaxonomyUniversalType::create(requestedType);
    if (!assessedCapabilities_Accessor) {
      throw uci::base::UCIException("Error in enableAssessedCapabilities(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *assessedCapabilities_Accessor;
}

uci::type::AccessAssessmentFilterType& AccessAssessmentFilterType::clearAssessedCapabilities() noexcept {
  assessedCapabilities_Accessor.reset();
  return *this;
}

uci::type::AssetFilterType& AccessAssessmentFilterType::getSubject_() const {
  if (subject_Accessor) {
    return *subject_Accessor;
  }
  throw uci::base::UCIException("Error in getSubject(): An attempt was made to get an optional field that was not enabled, call hasSubject() to determine if it is safe to call getSubject()");
}

const uci::type::AssetFilterType& AccessAssessmentFilterType::getSubject() const {
  return getSubject_();
}

uci::type::AssetFilterType& AccessAssessmentFilterType::getSubject() {
  return getSubject_();
}

uci::type::AccessAssessmentFilterType& AccessAssessmentFilterType::setSubject(const uci::type::AssetFilterType& accessor) {
  enableSubject();
  if (&accessor != subject_Accessor.get()) {
    subject_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool AccessAssessmentFilterType::hasSubject() const noexcept {
  return static_cast<bool>(subject_Accessor);
}

uci::type::AssetFilterType& AccessAssessmentFilterType::enableSubject(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::assetFilterType : type};
  if ((!subject_Accessor) || (subject_Accessor->getAccessorType() != requestedType)) {
    subject_Accessor = AssetFilterType::create(requestedType);
    if (!subject_Accessor) {
      throw uci::base::UCIException("Error in enableSubject(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *subject_Accessor;
}

uci::type::AccessAssessmentFilterType& AccessAssessmentFilterType::clearSubject() noexcept {
  subject_Accessor.reset();
  return *this;
}

uci::type::AssetFilterType& AccessAssessmentFilterType::getAssessedObject_() const {
  if (assessedObject_Accessor) {
    return *assessedObject_Accessor;
  }
  throw uci::base::UCIException("Error in getAssessedObject(): An attempt was made to get an optional field that was not enabled, call hasAssessedObject() to determine if it is safe to call getAssessedObject()");
}

const uci::type::AssetFilterType& AccessAssessmentFilterType::getAssessedObject() const {
  return getAssessedObject_();
}

uci::type::AssetFilterType& AccessAssessmentFilterType::getAssessedObject() {
  return getAssessedObject_();
}

uci::type::AccessAssessmentFilterType& AccessAssessmentFilterType::setAssessedObject(const uci::type::AssetFilterType& accessor) {
  enableAssessedObject();
  if (&accessor != assessedObject_Accessor.get()) {
    assessedObject_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool AccessAssessmentFilterType::hasAssessedObject() const noexcept {
  return static_cast<bool>(assessedObject_Accessor);
}

uci::type::AssetFilterType& AccessAssessmentFilterType::enableAssessedObject(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::assetFilterType : type};
  if ((!assessedObject_Accessor) || (assessedObject_Accessor->getAccessorType() != requestedType)) {
    assessedObject_Accessor = AssetFilterType::create(requestedType);
    if (!assessedObject_Accessor) {
      throw uci::base::UCIException("Error in enableAssessedObject(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *assessedObject_Accessor;
}

uci::type::AccessAssessmentFilterType& AccessAssessmentFilterType::clearAssessedObject() noexcept {
  assessedObject_Accessor.reset();
  return *this;
}

const uci::type::AccessAssessmentFilterType::AccessEvent& AccessAssessmentFilterType::getAccessEvent() const {
  return *accessEvent_Accessor;
}

uci::type::AccessAssessmentFilterType::AccessEvent& AccessAssessmentFilterType::getAccessEvent() {
  return *accessEvent_Accessor;
}

uci::type::AccessAssessmentFilterType& AccessAssessmentFilterType::setAccessEvent(const uci::type::AccessAssessmentFilterType::AccessEvent& accessor) {
  if (&accessor != accessEvent_Accessor.get()) {
    accessEvent_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<AccessAssessmentFilterType> AccessAssessmentFilterType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::accessAssessmentFilterType : type};
  return (requestedType == uci::type::accessorType::accessAssessmentFilterType) ? boost::make_unique<AccessAssessmentFilterType>() : nullptr;
}

/**  */
namespace AccessAssessmentFilterType_Names {

constexpr const char* Extern_Type_Name{"AccessAssessmentFilterType"};
constexpr const char* AssessmentName_Name{"AssessmentName"};
constexpr const char* AssessedCapabilities_Name{"AssessedCapabilities"};
constexpr const char* Subject_Name{"Subject"};
constexpr const char* AssessedObject_Name{"AssessedObject"};
constexpr const char* AccessEvent_Name{"AccessEvent"};

} // namespace AccessAssessmentFilterType_Names

void AccessAssessmentFilterType::deserialize(const boost::property_tree::ptree& propTree, uci::type::AccessAssessmentFilterType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = AccessAssessmentFilterType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + AccessAssessmentFilterType_Names::AssessmentName_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::AccessAssessmentFilterType::AssessmentName& boundedList = accessor.getAssessmentName();
        const uci::type::AccessAssessmentFilterType::AssessmentName::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setStringValue(*value);
      }
    } else if (valueType.first == nsPrefix + AccessAssessmentFilterType_Names::AssessedCapabilities_Name) {
      CapabilityTaxonomyUniversalType::deserialize(valueType.second, accessor.enableAssessedCapabilities(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + AccessAssessmentFilterType_Names::Subject_Name) {
      AssetFilterType::deserialize(valueType.second, accessor.enableSubject(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + AccessAssessmentFilterType_Names::AssessedObject_Name) {
      AssetFilterType::deserialize(valueType.second, accessor.enableAssessedObject(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + AccessAssessmentFilterType_Names::AccessEvent_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::AccessAssessmentFilterType::AccessEvent& boundedList = accessor.getAccessEvent();
        const uci::type::AccessAssessmentFilterType::AccessEvent::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::AccessEventFilterType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string AccessAssessmentFilterType::serialize(const uci::type::AccessAssessmentFilterType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? AccessAssessmentFilterType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, AccessAssessmentFilterType_Names::Extern_Type_Name);
  }
  {
    const uci::type::AccessAssessmentFilterType::AssessmentName& boundedList = accessor.getAssessmentName();
    for (uci::type::AccessAssessmentFilterType::AssessmentName::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::util::SerializationHelpers::serializeString(boundedList.at(i), node, AccessAssessmentFilterType_Names::AssessmentName_Name);
    }
  }
  if (accessor.hasAssessedCapabilities()) {
    CapabilityTaxonomyUniversalType::serialize(accessor.getAssessedCapabilities(), node, AccessAssessmentFilterType_Names::AssessedCapabilities_Name);
  }
  if (accessor.hasSubject()) {
    AssetFilterType::serialize(accessor.getSubject(), node, AccessAssessmentFilterType_Names::Subject_Name);
  }
  if (accessor.hasAssessedObject()) {
    AssetFilterType::serialize(accessor.getAssessedObject(), node, AccessAssessmentFilterType_Names::AssessedObject_Name);
  }
  {
    const uci::type::AccessAssessmentFilterType::AccessEvent& boundedList = accessor.getAccessEvent();
    for (uci::type::AccessAssessmentFilterType::AccessEvent::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::AccessEventFilterType::serialize(boundedList.at(i), node, AccessAssessmentFilterType_Names::AccessEvent_Name);
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

uci::type::AccessAssessmentFilterType& AccessAssessmentFilterType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::AccessAssessmentFilterType>().release());
}

uci::type::AccessAssessmentFilterType& AccessAssessmentFilterType::create(const uci::type::AccessAssessmentFilterType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::AccessAssessmentFilterType> newAccessor{boost::make_unique<asb_uci::type::AccessAssessmentFilterType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void AccessAssessmentFilterType::destroy(uci::type::AccessAssessmentFilterType& accessor) {
  delete dynamic_cast<asb_uci::type::AccessAssessmentFilterType*>(&accessor);
}

} // namespace type

} // namespace uci

