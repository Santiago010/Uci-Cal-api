/** @file OperatorNotificationMDT.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:13 PM
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

#include "../../../include/asb_uci/type/OperatorNotificationMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/AssociatedMessageType.h"
#include "../../../include/asb_uci/type/AuralAlertType.h"
#include "../../../include/asb_uci/type/ID_Type.h"
#include "../../../include/asb_uci/type/NotificationCategoryEnum.h"
#include "../../../include/asb_uci/type/NotificationSeverityEnum.h"
#include "../../../include/asb_uci/type/NotificationSourceType.h"
#include "../../../include/asb_uci/type/OperatorNotificationActionType.h"
#include "../../../include/asb_uci/type/OperatorNotificationID_Type.h"
#include "../../../include/asb_uci/type/OperatorRoleType.h"
#include "../../../include/asb_uci/type/Point2D_Type.h"
#include "../../../include/asb_uci/type/VisibleString1024Type.h"
#include "../../../include/asb_uci/type/VisibleString256Type.h"
#include "../../../include/asb_uci/type/VisibleString32Type.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AssociatedMessageType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AuralAlertType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/NotificationCategoryEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/NotificationSeverityEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/NotificationSourceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OperatorNotificationActionType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OperatorNotificationID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OperatorNotificationMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OperatorRoleType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Point2D_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString1024Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString256Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString32Type.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OperatorNotificationMDT::OperatorNotificationMDT()
  : operatorNotificationID_Accessor{boost::make_unique<OperatorNotificationID_Type>()},
    operatorNotificationTemplateParameters_Accessor{boost::make_unique<OperatorNotificationTemplateParameters>(0, SIZE_MAX)},
    title_Accessor{boost::make_unique<VisibleString256Type>()},
    category_Accessor{boost::make_unique<NotificationCategoryEnum>()},
    severity_Accessor{boost::make_unique<NotificationSeverityEnum>()},
    destinations_Accessor{boost::make_unique<Destinations>(0, SIZE_MAX)},
    associatedMessage_Accessor{boost::make_unique<AssociatedMessage>(0, SIZE_MAX)} {
}

OperatorNotificationMDT::~OperatorNotificationMDT() = default;

void OperatorNotificationMDT::copy(const uci::type::OperatorNotificationMDT& accessor) {
  copyImpl(accessor, false);
}

void OperatorNotificationMDT::copyImpl(const uci::type::OperatorNotificationMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const OperatorNotificationMDT&>(accessor);
    setOperatorNotificationID(*(accessorImpl.operatorNotificationID_Accessor));
    if (accessorImpl.operatorNotificationTemplateID_Accessor) {
      setOperatorNotificationTemplateID(*(accessorImpl.operatorNotificationTemplateID_Accessor));
    } else {
      operatorNotificationTemplateID_Accessor.reset();
    }
    setOperatorNotificationTemplateParameters(*(accessorImpl.operatorNotificationTemplateParameters_Accessor));
    setTitle(*(accessorImpl.title_Accessor));
    if (accessorImpl.details_Accessor) {
      setDetails(*(accessorImpl.details_Accessor));
    } else {
      details_Accessor.reset();
    }
    setCategory(*(accessorImpl.category_Accessor));
    setSeverity(*(accessorImpl.severity_Accessor));
    if (accessorImpl.location_Accessor) {
      setLocation(*(accessorImpl.location_Accessor));
    } else {
      location_Accessor.reset();
    }
    if (accessorImpl.source_Accessor) {
      setSource(*(accessorImpl.source_Accessor));
    } else {
      source_Accessor.reset();
    }
    if (accessorImpl.actions_Accessor) {
      setActions(*(accessorImpl.actions_Accessor));
    } else {
      actions_Accessor.reset();
    }
    if (accessorImpl.hasCount()) {
      setCount(accessorImpl.getCount());
    } else {
      clearCount();
    }
    if (accessorImpl.hasOccurrenceTimestamp()) {
      setOccurrenceTimestamp(accessorImpl.getOccurrenceTimestamp());
    } else {
      clearOccurrenceTimestamp();
    }
    if (accessorImpl.hasPriority()) {
      setPriority(accessorImpl.getPriority());
    } else {
      clearPriority();
    }
    if (accessorImpl.auralAlert_Accessor) {
      setAuralAlert(*(accessorImpl.auralAlert_Accessor));
    } else {
      auralAlert_Accessor.reset();
    }
    setDestinations(*(accessorImpl.destinations_Accessor));
    setAssociatedMessage(*(accessorImpl.associatedMessage_Accessor));
  }
}

void OperatorNotificationMDT::reset() noexcept {
  operatorNotificationID_Accessor->reset();
  operatorNotificationTemplateID_Accessor.reset();
  operatorNotificationTemplateParameters_Accessor->reset();
  title_Accessor->reset();
  details_Accessor.reset();
  category_Accessor->reset();
  severity_Accessor->reset();
  location_Accessor.reset();
  source_Accessor.reset();
  actions_Accessor.reset();
  clearCount();
  clearOccurrenceTimestamp();
  clearPriority();
  auralAlert_Accessor.reset();
  destinations_Accessor->reset();
  associatedMessage_Accessor->reset();
}

const uci::type::OperatorNotificationID_Type& OperatorNotificationMDT::getOperatorNotificationID() const {
  return *operatorNotificationID_Accessor;
}

uci::type::OperatorNotificationID_Type& OperatorNotificationMDT::getOperatorNotificationID() {
  return *operatorNotificationID_Accessor;
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::setOperatorNotificationID(const uci::type::OperatorNotificationID_Type& accessor) {
  if (&accessor != operatorNotificationID_Accessor.get()) {
    operatorNotificationID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ID_Type& OperatorNotificationMDT::getOperatorNotificationTemplateID_() const {
  if (operatorNotificationTemplateID_Accessor) {
    return *operatorNotificationTemplateID_Accessor;
  }
  throw uci::base::UCIException("Error in getOperatorNotificationTemplateID(): An attempt was made to get an optional field that was not enabled, call hasOperatorNotificationTemplateID() to determine if it is safe to call getOperatorNotificationTemplateID()");
}

const uci::type::ID_Type& OperatorNotificationMDT::getOperatorNotificationTemplateID() const {
  return getOperatorNotificationTemplateID_();
}

uci::type::ID_Type& OperatorNotificationMDT::getOperatorNotificationTemplateID() {
  return getOperatorNotificationTemplateID_();
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::setOperatorNotificationTemplateID(const uci::type::ID_Type& accessor) {
  enableOperatorNotificationTemplateID(accessor.getAccessorType());
  if (&accessor != operatorNotificationTemplateID_Accessor.get()) {
    operatorNotificationTemplateID_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool OperatorNotificationMDT::hasOperatorNotificationTemplateID() const noexcept {
  return static_cast<bool>(operatorNotificationTemplateID_Accessor);
}

uci::type::ID_Type& OperatorNotificationMDT::enableOperatorNotificationTemplateID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::iD_Type : type};
  if ((!operatorNotificationTemplateID_Accessor) || (operatorNotificationTemplateID_Accessor->getAccessorType() != requestedType)) {
    operatorNotificationTemplateID_Accessor = ID_Type::create(requestedType);
    if (!operatorNotificationTemplateID_Accessor) {
      throw uci::base::UCIException("Error in enableOperatorNotificationTemplateID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *operatorNotificationTemplateID_Accessor;
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::clearOperatorNotificationTemplateID() noexcept {
  operatorNotificationTemplateID_Accessor.reset();
  return *this;
}

const uci::type::OperatorNotificationMDT::OperatorNotificationTemplateParameters& OperatorNotificationMDT::getOperatorNotificationTemplateParameters() const {
  return *operatorNotificationTemplateParameters_Accessor;
}

uci::type::OperatorNotificationMDT::OperatorNotificationTemplateParameters& OperatorNotificationMDT::getOperatorNotificationTemplateParameters() {
  return *operatorNotificationTemplateParameters_Accessor;
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::setOperatorNotificationTemplateParameters(const uci::type::OperatorNotificationMDT::OperatorNotificationTemplateParameters& accessor) {
  if (&accessor != operatorNotificationTemplateParameters_Accessor.get()) {
    operatorNotificationTemplateParameters_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const asb_uci::type::VisibleString256Type& OperatorNotificationMDT::getTitle() const noexcept {
  return *title_Accessor;
}

asb_uci::type::VisibleString256Type& OperatorNotificationMDT::getTitle() noexcept {
  return *title_Accessor;
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::setTitle(const asb_uci::type::VisibleString256Type& value) {
  return setTitle(value.c_str());
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::setTitle(const std::string& value) {
  return setTitle(value.c_str());
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::setTitle(const char* value) {
  title_Accessor->setStringValue(value);
  return *this;
}

uci::type::VisibleString1024Type& OperatorNotificationMDT::getDetails_() const {
  if (details_Accessor) {
    return *details_Accessor;
  }
  throw uci::base::UCIException("Error in getDetails(): An attempt was made to get an optional field that was not enabled, call hasDetails() to determine if it is safe to call getDetails()");
}

const uci::type::VisibleString1024Type& OperatorNotificationMDT::getDetails() const {
  return getDetails_();
}

uci::type::VisibleString1024Type& OperatorNotificationMDT::getDetails() {
  return getDetails_();
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::setDetails(const uci::type::VisibleString1024Type& value) {
  return setDetails(value.c_str());
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::setDetails(const std::string& value) {
  return setDetails(value.c_str());
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::setDetails(const char* value) {
  enableDetails().setStringValue(value);
  return *this;
}

bool OperatorNotificationMDT::hasDetails() const noexcept {
  return static_cast<bool>(details_Accessor);
}

uci::type::VisibleString1024Type& OperatorNotificationMDT::enableDetails(uci::base::accessorType::AccessorType type) {
  if (!details_Accessor) {
    details_Accessor = VisibleString1024Type::create(type);
  }
  return *details_Accessor;
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::clearDetails() noexcept {
  details_Accessor.reset();
  return *this;
}

const uci::type::NotificationCategoryEnum& OperatorNotificationMDT::getCategory() const {
  return *category_Accessor;
}

uci::type::NotificationCategoryEnum& OperatorNotificationMDT::getCategory() {
  return *category_Accessor;
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::setCategory(const uci::type::NotificationCategoryEnum& accessor) {
  if (&accessor != category_Accessor.get()) {
    category_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::setCategory(uci::type::NotificationCategoryEnum::EnumerationItem value) {
  category_Accessor->setValue(value);
  return *this;
}


const uci::type::NotificationSeverityEnum& OperatorNotificationMDT::getSeverity() const {
  return *severity_Accessor;
}

uci::type::NotificationSeverityEnum& OperatorNotificationMDT::getSeverity() {
  return *severity_Accessor;
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::setSeverity(const uci::type::NotificationSeverityEnum& accessor) {
  if (&accessor != severity_Accessor.get()) {
    severity_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::setSeverity(uci::type::NotificationSeverityEnum::EnumerationItem value) {
  severity_Accessor->setValue(value);
  return *this;
}


uci::type::Point2D_Type& OperatorNotificationMDT::getLocation_() const {
  if (location_Accessor) {
    return *location_Accessor;
  }
  throw uci::base::UCIException("Error in getLocation(): An attempt was made to get an optional field that was not enabled, call hasLocation() to determine if it is safe to call getLocation()");
}

const uci::type::Point2D_Type& OperatorNotificationMDT::getLocation() const {
  return getLocation_();
}

uci::type::Point2D_Type& OperatorNotificationMDT::getLocation() {
  return getLocation_();
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::setLocation(const uci::type::Point2D_Type& accessor) {
  enableLocation(accessor.getAccessorType());
  if (&accessor != location_Accessor.get()) {
    location_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool OperatorNotificationMDT::hasLocation() const noexcept {
  return static_cast<bool>(location_Accessor);
}

uci::type::Point2D_Type& OperatorNotificationMDT::enableLocation(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::point2D_Type : type};
  if ((!location_Accessor) || (location_Accessor->getAccessorType() != requestedType)) {
    location_Accessor = Point2D_Type::create(requestedType);
    if (!location_Accessor) {
      throw uci::base::UCIException("Error in enableLocation(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *location_Accessor;
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::clearLocation() noexcept {
  location_Accessor.reset();
  return *this;
}

uci::type::NotificationSourceType& OperatorNotificationMDT::getSource_() const {
  if (source_Accessor) {
    return *source_Accessor;
  }
  throw uci::base::UCIException("Error in getSource(): An attempt was made to get an optional field that was not enabled, call hasSource() to determine if it is safe to call getSource()");
}

const uci::type::NotificationSourceType& OperatorNotificationMDT::getSource() const {
  return getSource_();
}

uci::type::NotificationSourceType& OperatorNotificationMDT::getSource() {
  return getSource_();
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::setSource(const uci::type::NotificationSourceType& accessor) {
  enableSource();
  if (&accessor != source_Accessor.get()) {
    source_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OperatorNotificationMDT::hasSource() const noexcept {
  return static_cast<bool>(source_Accessor);
}

uci::type::NotificationSourceType& OperatorNotificationMDT::enableSource(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::notificationSourceType : type};
  if ((!source_Accessor) || (source_Accessor->getAccessorType() != requestedType)) {
    source_Accessor = NotificationSourceType::create(requestedType);
    if (!source_Accessor) {
      throw uci::base::UCIException("Error in enableSource(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *source_Accessor;
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::clearSource() noexcept {
  source_Accessor.reset();
  return *this;
}

uci::type::OperatorNotificationActionType& OperatorNotificationMDT::getActions_() const {
  if (actions_Accessor) {
    return *actions_Accessor;
  }
  throw uci::base::UCIException("Error in getActions(): An attempt was made to get an optional field that was not enabled, call hasActions() to determine if it is safe to call getActions()");
}

const uci::type::OperatorNotificationActionType& OperatorNotificationMDT::getActions() const {
  return getActions_();
}

uci::type::OperatorNotificationActionType& OperatorNotificationMDT::getActions() {
  return getActions_();
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::setActions(const uci::type::OperatorNotificationActionType& accessor) {
  enableActions();
  if (&accessor != actions_Accessor.get()) {
    actions_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OperatorNotificationMDT::hasActions() const noexcept {
  return static_cast<bool>(actions_Accessor);
}

uci::type::OperatorNotificationActionType& OperatorNotificationMDT::enableActions(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::operatorNotificationActionType : type};
  if ((!actions_Accessor) || (actions_Accessor->getAccessorType() != requestedType)) {
    actions_Accessor = OperatorNotificationActionType::create(requestedType);
    if (!actions_Accessor) {
      throw uci::base::UCIException("Error in enableActions(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *actions_Accessor;
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::clearActions() noexcept {
  actions_Accessor.reset();
  return *this;
}

xs::UnsignedInt OperatorNotificationMDT::getCount() const {
  if (count_Accessor) {
    return *count_Accessor;
  }
  throw uci::base::UCIException("Error in getCount(): An attempt was made to get an optional field that was not enabled, call hasCount() to determine if it is safe to call getCount()");
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::setCount(xs::UnsignedInt value) {
  count_Accessor = value;
  return *this;
}

bool OperatorNotificationMDT::hasCount() const noexcept {
  return count_Accessor.has_value();
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::clearCount() noexcept {
  count_Accessor.reset();
  return *this;
}

uci::type::DateTimeTypeValue OperatorNotificationMDT::getOccurrenceTimestamp() const {
  if (occurrenceTimestamp_Accessor) {
    return *occurrenceTimestamp_Accessor;
  }
  throw uci::base::UCIException("Error in getOccurrenceTimestamp(): An attempt was made to get an optional field that was not enabled, call hasOccurrenceTimestamp() to determine if it is safe to call getOccurrenceTimestamp()");
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::setOccurrenceTimestamp(uci::type::DateTimeTypeValue value) {
  occurrenceTimestamp_Accessor = value;
  return *this;
}

bool OperatorNotificationMDT::hasOccurrenceTimestamp() const noexcept {
  return occurrenceTimestamp_Accessor.has_value();
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::clearOccurrenceTimestamp() noexcept {
  occurrenceTimestamp_Accessor.reset();
  return *this;
}

xs::UnsignedByte OperatorNotificationMDT::getPriority() const {
  if (priority_Accessor) {
    return *priority_Accessor;
  }
  throw uci::base::UCIException("Error in getPriority(): An attempt was made to get an optional field that was not enabled, call hasPriority() to determine if it is safe to call getPriority()");
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::setPriority(xs::UnsignedByte value) {
  priority_Accessor = value;
  return *this;
}

bool OperatorNotificationMDT::hasPriority() const noexcept {
  return priority_Accessor.has_value();
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::clearPriority() noexcept {
  priority_Accessor.reset();
  return *this;
}

uci::type::AuralAlertType& OperatorNotificationMDT::getAuralAlert_() const {
  if (auralAlert_Accessor) {
    return *auralAlert_Accessor;
  }
  throw uci::base::UCIException("Error in getAuralAlert(): An attempt was made to get an optional field that was not enabled, call hasAuralAlert() to determine if it is safe to call getAuralAlert()");
}

const uci::type::AuralAlertType& OperatorNotificationMDT::getAuralAlert() const {
  return getAuralAlert_();
}

uci::type::AuralAlertType& OperatorNotificationMDT::getAuralAlert() {
  return getAuralAlert_();
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::setAuralAlert(const uci::type::AuralAlertType& accessor) {
  enableAuralAlert();
  if (&accessor != auralAlert_Accessor.get()) {
    auralAlert_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OperatorNotificationMDT::hasAuralAlert() const noexcept {
  return static_cast<bool>(auralAlert_Accessor);
}

uci::type::AuralAlertType& OperatorNotificationMDT::enableAuralAlert(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::auralAlertType : type};
  if ((!auralAlert_Accessor) || (auralAlert_Accessor->getAccessorType() != requestedType)) {
    auralAlert_Accessor = AuralAlertType::create(requestedType);
    if (!auralAlert_Accessor) {
      throw uci::base::UCIException("Error in enableAuralAlert(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *auralAlert_Accessor;
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::clearAuralAlert() noexcept {
  auralAlert_Accessor.reset();
  return *this;
}

const uci::type::OperatorNotificationMDT::Destinations& OperatorNotificationMDT::getDestinations() const {
  return *destinations_Accessor;
}

uci::type::OperatorNotificationMDT::Destinations& OperatorNotificationMDT::getDestinations() {
  return *destinations_Accessor;
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::setDestinations(const uci::type::OperatorNotificationMDT::Destinations& accessor) {
  if (&accessor != destinations_Accessor.get()) {
    destinations_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::OperatorNotificationMDT::AssociatedMessage& OperatorNotificationMDT::getAssociatedMessage() const {
  return *associatedMessage_Accessor;
}

uci::type::OperatorNotificationMDT::AssociatedMessage& OperatorNotificationMDT::getAssociatedMessage() {
  return *associatedMessage_Accessor;
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::setAssociatedMessage(const uci::type::OperatorNotificationMDT::AssociatedMessage& accessor) {
  if (&accessor != associatedMessage_Accessor.get()) {
    associatedMessage_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<OperatorNotificationMDT> OperatorNotificationMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::operatorNotificationMDT : type};
  return (requestedType == uci::type::accessorType::operatorNotificationMDT) ? boost::make_unique<OperatorNotificationMDT>() : nullptr;
}

/**  */
namespace OperatorNotificationMDT_Names {

constexpr const char* Extern_Type_Name{"OperatorNotificationMDT"};
constexpr const char* OperatorNotificationID_Name{"OperatorNotificationID"};
constexpr const char* OperatorNotificationTemplateID_Name{"OperatorNotificationTemplateID"};
constexpr const char* OperatorNotificationTemplateParameters_Name{"OperatorNotificationTemplateParameters"};
constexpr const char* Title_Name{"Title"};
constexpr const char* Details_Name{"Details"};
constexpr const char* Category_Name{"Category"};
constexpr const char* Severity_Name{"Severity"};
constexpr const char* Location_Name{"Location"};
constexpr const char* Source_Name{"Source"};
constexpr const char* Actions_Name{"Actions"};
constexpr const char* Count_Name{"Count"};
constexpr const char* OccurrenceTimestamp_Name{"OccurrenceTimestamp"};
constexpr const char* Priority_Name{"Priority"};
constexpr const char* AuralAlert_Name{"AuralAlert"};
constexpr const char* Destinations_Name{"Destinations"};
constexpr const char* AssociatedMessage_Name{"AssociatedMessage"};

} // namespace OperatorNotificationMDT_Names

void OperatorNotificationMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::OperatorNotificationMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OperatorNotificationMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OperatorNotificationMDT_Names::OperatorNotificationID_Name) {
      OperatorNotificationID_Type::deserialize(valueType.second, accessor.getOperatorNotificationID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OperatorNotificationMDT_Names::OperatorNotificationTemplateID_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableOperatorNotificationTemplateID(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OperatorNotificationMDT_Names::OperatorNotificationTemplateParameters_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::OperatorNotificationMDT::OperatorNotificationTemplateParameters& boundedList = accessor.getOperatorNotificationTemplateParameters();
        const uci::type::OperatorNotificationMDT::OperatorNotificationTemplateParameters::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setStringValue(*value);
      }
    } else if (valueType.first == nsPrefix + OperatorNotificationMDT_Names::Title_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTitle(*value);
      }
    } else if (valueType.first == nsPrefix + OperatorNotificationMDT_Names::Details_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setDetails(*value);
      }
    } else if (valueType.first == nsPrefix + OperatorNotificationMDT_Names::Category_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getCategory().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + OperatorNotificationMDT_Names::Severity_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getSeverity().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + OperatorNotificationMDT_Names::Location_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableLocation(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OperatorNotificationMDT_Names::Source_Name) {
      NotificationSourceType::deserialize(valueType.second, accessor.enableSource(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OperatorNotificationMDT_Names::Actions_Name) {
      OperatorNotificationActionType::deserialize(valueType.second, accessor.enableActions(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OperatorNotificationMDT_Names::Count_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setCount(asb_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    } else if (valueType.first == nsPrefix + OperatorNotificationMDT_Names::OccurrenceTimestamp_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setOccurrenceTimestamp(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + OperatorNotificationMDT_Names::Priority_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPriority(asb_uci::util::SerializationHelpers::deserializeUnsignedByte(*value));
      }
    } else if (valueType.first == nsPrefix + OperatorNotificationMDT_Names::AuralAlert_Name) {
      AuralAlertType::deserialize(valueType.second, accessor.enableAuralAlert(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OperatorNotificationMDT_Names::Destinations_Name) {
      uci::type::OperatorNotificationMDT::Destinations& boundedList = accessor.getDestinations();
      const uci::type::OperatorNotificationMDT::Destinations::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::OperatorRoleType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OperatorNotificationMDT_Names::AssociatedMessage_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::OperatorNotificationMDT::AssociatedMessage& boundedList = accessor.getAssociatedMessage();
        const uci::type::OperatorNotificationMDT::AssociatedMessage::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::AssociatedMessageType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string OperatorNotificationMDT::serialize(const uci::type::OperatorNotificationMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? OperatorNotificationMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, OperatorNotificationMDT_Names::Extern_Type_Name);
  }
  OperatorNotificationID_Type::serialize(accessor.getOperatorNotificationID(), node, OperatorNotificationMDT_Names::OperatorNotificationID_Name);
  if (accessor.hasOperatorNotificationTemplateID()) {
    ID_Type::serialize(accessor.getOperatorNotificationTemplateID(), node, OperatorNotificationMDT_Names::OperatorNotificationTemplateID_Name);
  }
  {
    const uci::type::OperatorNotificationMDT::OperatorNotificationTemplateParameters& boundedList = accessor.getOperatorNotificationTemplateParameters();
    for (uci::type::OperatorNotificationMDT::OperatorNotificationTemplateParameters::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::util::SerializationHelpers::serializeString(boundedList.at(i), node, OperatorNotificationMDT_Names::OperatorNotificationTemplateParameters_Name);
    }
  }
  asb_uci::util::SerializationHelpers::serializeString(accessor.getTitle(), node, OperatorNotificationMDT_Names::Title_Name);
  if (accessor.hasDetails()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getDetails(), node, OperatorNotificationMDT_Names::Details_Name);
  }
  NotificationCategoryEnum::serialize(accessor.getCategory(), node, OperatorNotificationMDT_Names::Category_Name, false);
  NotificationSeverityEnum::serialize(accessor.getSeverity(), node, OperatorNotificationMDT_Names::Severity_Name, false);
  if (accessor.hasLocation()) {
    Point2D_Type::serialize(accessor.getLocation(), node, OperatorNotificationMDT_Names::Location_Name);
  }
  if (accessor.hasSource()) {
    NotificationSourceType::serialize(accessor.getSource(), node, OperatorNotificationMDT_Names::Source_Name);
  }
  if (accessor.hasActions()) {
    OperatorNotificationActionType::serialize(accessor.getActions(), node, OperatorNotificationMDT_Names::Actions_Name);
  }
  if (accessor.hasCount()) {
    asb_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getCount(), node, OperatorNotificationMDT_Names::Count_Name);
  }
  if (accessor.hasOccurrenceTimestamp()) {
    asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getOccurrenceTimestamp(), node, OperatorNotificationMDT_Names::OccurrenceTimestamp_Name);
  }
  if (accessor.hasPriority()) {
    asb_uci::util::SerializationHelpers::serializeUnsignedByte(accessor.getPriority(), node, OperatorNotificationMDT_Names::Priority_Name);
  }
  if (accessor.hasAuralAlert()) {
    AuralAlertType::serialize(accessor.getAuralAlert(), node, OperatorNotificationMDT_Names::AuralAlert_Name);
  }
  {
    const uci::type::OperatorNotificationMDT::Destinations& boundedList = accessor.getDestinations();
    for (uci::type::OperatorNotificationMDT::Destinations::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::OperatorRoleType::serialize(boundedList.at(i), node, OperatorNotificationMDT_Names::Destinations_Name);
    }
  }
  {
    const uci::type::OperatorNotificationMDT::AssociatedMessage& boundedList = accessor.getAssociatedMessage();
    for (uci::type::OperatorNotificationMDT::AssociatedMessage::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::AssociatedMessageType::serialize(boundedList.at(i), node, OperatorNotificationMDT_Names::AssociatedMessage_Name);
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

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OperatorNotificationMDT>().release());
}

uci::type::OperatorNotificationMDT& OperatorNotificationMDT::create(const uci::type::OperatorNotificationMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OperatorNotificationMDT> newAccessor{boost::make_unique<asb_uci::type::OperatorNotificationMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OperatorNotificationMDT::destroy(uci::type::OperatorNotificationMDT& accessor) {
  delete dynamic_cast<asb_uci::type::OperatorNotificationMDT*>(&accessor);
}

} // namespace type

} // namespace uci

