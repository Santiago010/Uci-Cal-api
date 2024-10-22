/** @file PO_TrackStatusType.cpp
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

#include "../../../include/asb_uci/type/PO_TrackStatusType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/IdentityBasicType.h"
#include "../../../include/asb_uci/type/IncreaseDecreaseEnum.h"
#include "../../../include/asb_uci/type/LOS_VariableB_Type.h"
#include "../../../include/asb_uci/type/PO_AirTargetVolumeType.h"
#include "../../../include/asb_uci/type/PO_CoastSettingValueType.h"
#include "../../../include/asb_uci/type/PO_LockPersistenceEnum.h"
#include "../../../include/asb_uci/type/PO_TrackCommandEnum.h"
#include "../../../include/asb_uci/type/TrackOptionsID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DistanceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DurationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IdentityBasicType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IncreaseDecreaseEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LOS_VariableB_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_AirTargetVolumeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_CoastSettingValueType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_LockPersistenceEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_TrackCommandEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_TrackStatusType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TrackOptionsID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PO_TrackStatusType::PO_TrackStatusType()
  : trackOptionID_Accessor{boost::make_unique<TrackOptionsID_Type>()},
    coastSetting_Accessor{boost::make_unique<CoastSetting>(0, 6)} {
}

PO_TrackStatusType::~PO_TrackStatusType() = default;

void PO_TrackStatusType::copy(const uci::type::PO_TrackStatusType& accessor) {
  copyImpl(accessor, false);
}

void PO_TrackStatusType::copyImpl(const uci::type::PO_TrackStatusType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PO_TrackStatusType&>(accessor);
    setTrackOptionID(*(accessorImpl.trackOptionID_Accessor));
    if (accessorImpl.mode_Accessor) {
      setMode(*(accessorImpl.mode_Accessor));
    } else {
      mode_Accessor.reset();
    }
    if (accessorImpl.trackArea_Accessor) {
      setTrackArea(*(accessorImpl.trackArea_Accessor));
    } else {
      trackArea_Accessor.reset();
    }
    if (accessorImpl.lockPersistence_Accessor) {
      setLockPersistence(*(accessorImpl.lockPersistence_Accessor));
    } else {
      lockPersistence_Accessor.reset();
    }
    if (accessorImpl.aTR_FilterStatus_Accessor) {
      setATR_FilterStatus(*(accessorImpl.aTR_FilterStatus_Accessor));
    } else {
      aTR_FilterStatus_Accessor.reset();
    }
    if (accessorImpl.offsetTrackSetting_Accessor) {
      setOffsetTrackSetting(*(accessorImpl.offsetTrackSetting_Accessor));
    } else {
      offsetTrackSetting_Accessor.reset();
    }
    if (accessorImpl.hasObservedEntityThreshold()) {
      setObservedEntityThreshold(accessorImpl.getObservedEntityThreshold());
    } else {
      clearObservedEntityThreshold();
    }
    if (accessorImpl.hasTrackingRange()) {
      setTrackingRange(accessorImpl.getTrackingRange());
    } else {
      clearTrackingRange();
    }
    setCoastSetting(*(accessorImpl.coastSetting_Accessor));
    if (accessorImpl.blankingVolumeStatus_Accessor) {
      setBlankingVolumeStatus(*(accessorImpl.blankingVolumeStatus_Accessor));
    } else {
      blankingVolumeStatus_Accessor.reset();
    }
  }
}

void PO_TrackStatusType::reset() noexcept {
  trackOptionID_Accessor->reset();
  mode_Accessor.reset();
  trackArea_Accessor.reset();
  lockPersistence_Accessor.reset();
  aTR_FilterStatus_Accessor.reset();
  offsetTrackSetting_Accessor.reset();
  clearObservedEntityThreshold();
  clearTrackingRange();
  coastSetting_Accessor->reset();
  blankingVolumeStatus_Accessor.reset();
}

const uci::type::TrackOptionsID_Type& PO_TrackStatusType::getTrackOptionID() const {
  return *trackOptionID_Accessor;
}

uci::type::TrackOptionsID_Type& PO_TrackStatusType::getTrackOptionID() {
  return *trackOptionID_Accessor;
}

uci::type::PO_TrackStatusType& PO_TrackStatusType::setTrackOptionID(const uci::type::TrackOptionsID_Type& accessor) {
  if (&accessor != trackOptionID_Accessor.get()) {
    trackOptionID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::PO_TrackCommandEnum& PO_TrackStatusType::getMode_() const {
  if (mode_Accessor) {
    return *mode_Accessor;
  }
  throw uci::base::UCIException("Error in getMode(): An attempt was made to get an optional field that was not enabled, call hasMode() to determine if it is safe to call getMode()");
}

const uci::type::PO_TrackCommandEnum& PO_TrackStatusType::getMode() const {
  return getMode_();
}

uci::type::PO_TrackCommandEnum& PO_TrackStatusType::getMode() {
  return getMode_();
}

uci::type::PO_TrackStatusType& PO_TrackStatusType::setMode(const uci::type::PO_TrackCommandEnum& accessor) {
  enableMode();
  if (&accessor != mode_Accessor.get()) {
    mode_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::PO_TrackStatusType& PO_TrackStatusType::setMode(const uci::type::PO_TrackCommandEnum::EnumerationItem value) {
  enableMode().setValue(value);
  return *this;
}

bool PO_TrackStatusType::hasMode() const noexcept {
  return static_cast<bool>(mode_Accessor);
}

uci::type::PO_TrackCommandEnum& PO_TrackStatusType::enableMode(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pO_TrackCommandEnum : type};
  if ((!mode_Accessor) || (mode_Accessor->getAccessorType() != requestedType)) {
    mode_Accessor = PO_TrackCommandEnum::create(requestedType);
    if (!mode_Accessor) {
      throw uci::base::UCIException("Error in enableMode(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *mode_Accessor;
}

uci::type::PO_TrackStatusType& PO_TrackStatusType::clearMode() noexcept {
  mode_Accessor.reset();
  return *this;
}

uci::type::IncreaseDecreaseEnum& PO_TrackStatusType::getTrackArea_() const {
  if (trackArea_Accessor) {
    return *trackArea_Accessor;
  }
  throw uci::base::UCIException("Error in getTrackArea(): An attempt was made to get an optional field that was not enabled, call hasTrackArea() to determine if it is safe to call getTrackArea()");
}

const uci::type::IncreaseDecreaseEnum& PO_TrackStatusType::getTrackArea() const {
  return getTrackArea_();
}

uci::type::IncreaseDecreaseEnum& PO_TrackStatusType::getTrackArea() {
  return getTrackArea_();
}

uci::type::PO_TrackStatusType& PO_TrackStatusType::setTrackArea(const uci::type::IncreaseDecreaseEnum& accessor) {
  enableTrackArea();
  if (&accessor != trackArea_Accessor.get()) {
    trackArea_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::PO_TrackStatusType& PO_TrackStatusType::setTrackArea(const uci::type::IncreaseDecreaseEnum::EnumerationItem value) {
  enableTrackArea().setValue(value);
  return *this;
}

bool PO_TrackStatusType::hasTrackArea() const noexcept {
  return static_cast<bool>(trackArea_Accessor);
}

uci::type::IncreaseDecreaseEnum& PO_TrackStatusType::enableTrackArea(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::increaseDecreaseEnum : type};
  if ((!trackArea_Accessor) || (trackArea_Accessor->getAccessorType() != requestedType)) {
    trackArea_Accessor = IncreaseDecreaseEnum::create(requestedType);
    if (!trackArea_Accessor) {
      throw uci::base::UCIException("Error in enableTrackArea(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *trackArea_Accessor;
}

uci::type::PO_TrackStatusType& PO_TrackStatusType::clearTrackArea() noexcept {
  trackArea_Accessor.reset();
  return *this;
}

uci::type::PO_LockPersistenceEnum& PO_TrackStatusType::getLockPersistence_() const {
  if (lockPersistence_Accessor) {
    return *lockPersistence_Accessor;
  }
  throw uci::base::UCIException("Error in getLockPersistence(): An attempt was made to get an optional field that was not enabled, call hasLockPersistence() to determine if it is safe to call getLockPersistence()");
}

const uci::type::PO_LockPersistenceEnum& PO_TrackStatusType::getLockPersistence() const {
  return getLockPersistence_();
}

uci::type::PO_LockPersistenceEnum& PO_TrackStatusType::getLockPersistence() {
  return getLockPersistence_();
}

uci::type::PO_TrackStatusType& PO_TrackStatusType::setLockPersistence(const uci::type::PO_LockPersistenceEnum& accessor) {
  enableLockPersistence();
  if (&accessor != lockPersistence_Accessor.get()) {
    lockPersistence_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::PO_TrackStatusType& PO_TrackStatusType::setLockPersistence(const uci::type::PO_LockPersistenceEnum::EnumerationItem value) {
  enableLockPersistence().setValue(value);
  return *this;
}

bool PO_TrackStatusType::hasLockPersistence() const noexcept {
  return static_cast<bool>(lockPersistence_Accessor);
}

uci::type::PO_LockPersistenceEnum& PO_TrackStatusType::enableLockPersistence(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pO_LockPersistenceEnum : type};
  if ((!lockPersistence_Accessor) || (lockPersistence_Accessor->getAccessorType() != requestedType)) {
    lockPersistence_Accessor = PO_LockPersistenceEnum::create(requestedType);
    if (!lockPersistence_Accessor) {
      throw uci::base::UCIException("Error in enableLockPersistence(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *lockPersistence_Accessor;
}

uci::type::PO_TrackStatusType& PO_TrackStatusType::clearLockPersistence() noexcept {
  lockPersistence_Accessor.reset();
  return *this;
}

uci::type::IdentityBasicType& PO_TrackStatusType::getATR_FilterStatus_() const {
  if (aTR_FilterStatus_Accessor) {
    return *aTR_FilterStatus_Accessor;
  }
  throw uci::base::UCIException("Error in getATR_FilterStatus(): An attempt was made to get an optional field that was not enabled, call hasATR_FilterStatus() to determine if it is safe to call getATR_FilterStatus()");
}

const uci::type::IdentityBasicType& PO_TrackStatusType::getATR_FilterStatus() const {
  return getATR_FilterStatus_();
}

uci::type::IdentityBasicType& PO_TrackStatusType::getATR_FilterStatus() {
  return getATR_FilterStatus_();
}

uci::type::PO_TrackStatusType& PO_TrackStatusType::setATR_FilterStatus(const uci::type::IdentityBasicType& accessor) {
  enableATR_FilterStatus();
  if (&accessor != aTR_FilterStatus_Accessor.get()) {
    aTR_FilterStatus_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PO_TrackStatusType::hasATR_FilterStatus() const noexcept {
  return static_cast<bool>(aTR_FilterStatus_Accessor);
}

uci::type::IdentityBasicType& PO_TrackStatusType::enableATR_FilterStatus(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::identityBasicType : type};
  if ((!aTR_FilterStatus_Accessor) || (aTR_FilterStatus_Accessor->getAccessorType() != requestedType)) {
    aTR_FilterStatus_Accessor = IdentityBasicType::create(requestedType);
    if (!aTR_FilterStatus_Accessor) {
      throw uci::base::UCIException("Error in enableATR_FilterStatus(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *aTR_FilterStatus_Accessor;
}

uci::type::PO_TrackStatusType& PO_TrackStatusType::clearATR_FilterStatus() noexcept {
  aTR_FilterStatus_Accessor.reset();
  return *this;
}

uci::type::LOS_VariableB_Type& PO_TrackStatusType::getOffsetTrackSetting_() const {
  if (offsetTrackSetting_Accessor) {
    return *offsetTrackSetting_Accessor;
  }
  throw uci::base::UCIException("Error in getOffsetTrackSetting(): An attempt was made to get an optional field that was not enabled, call hasOffsetTrackSetting() to determine if it is safe to call getOffsetTrackSetting()");
}

const uci::type::LOS_VariableB_Type& PO_TrackStatusType::getOffsetTrackSetting() const {
  return getOffsetTrackSetting_();
}

uci::type::LOS_VariableB_Type& PO_TrackStatusType::getOffsetTrackSetting() {
  return getOffsetTrackSetting_();
}

uci::type::PO_TrackStatusType& PO_TrackStatusType::setOffsetTrackSetting(const uci::type::LOS_VariableB_Type& accessor) {
  enableOffsetTrackSetting();
  if (&accessor != offsetTrackSetting_Accessor.get()) {
    offsetTrackSetting_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PO_TrackStatusType::hasOffsetTrackSetting() const noexcept {
  return static_cast<bool>(offsetTrackSetting_Accessor);
}

uci::type::LOS_VariableB_Type& PO_TrackStatusType::enableOffsetTrackSetting(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::lOS_VariableB_Type : type};
  if ((!offsetTrackSetting_Accessor) || (offsetTrackSetting_Accessor->getAccessorType() != requestedType)) {
    offsetTrackSetting_Accessor = LOS_VariableB_Type::create(requestedType);
    if (!offsetTrackSetting_Accessor) {
      throw uci::base::UCIException("Error in enableOffsetTrackSetting(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *offsetTrackSetting_Accessor;
}

uci::type::PO_TrackStatusType& PO_TrackStatusType::clearOffsetTrackSetting() noexcept {
  offsetTrackSetting_Accessor.reset();
  return *this;
}

uci::type::DurationTypeValue PO_TrackStatusType::getObservedEntityThreshold() const {
  if (observedEntityThreshold_Accessor) {
    return *observedEntityThreshold_Accessor;
  }
  throw uci::base::UCIException("Error in getObservedEntityThreshold(): An attempt was made to get an optional field that was not enabled, call hasObservedEntityThreshold() to determine if it is safe to call getObservedEntityThreshold()");
}

uci::type::PO_TrackStatusType& PO_TrackStatusType::setObservedEntityThreshold(uci::type::DurationTypeValue value) {
  observedEntityThreshold_Accessor = value;
  return *this;
}

bool PO_TrackStatusType::hasObservedEntityThreshold() const noexcept {
  return observedEntityThreshold_Accessor.has_value();
}

uci::type::PO_TrackStatusType& PO_TrackStatusType::clearObservedEntityThreshold() noexcept {
  observedEntityThreshold_Accessor.reset();
  return *this;
}

uci::type::DistanceTypeValue PO_TrackStatusType::getTrackingRange() const {
  if (trackingRange_Accessor) {
    return *trackingRange_Accessor;
  }
  throw uci::base::UCIException("Error in getTrackingRange(): An attempt was made to get an optional field that was not enabled, call hasTrackingRange() to determine if it is safe to call getTrackingRange()");
}

uci::type::PO_TrackStatusType& PO_TrackStatusType::setTrackingRange(uci::type::DistanceTypeValue value) {
  trackingRange_Accessor = value;
  return *this;
}

bool PO_TrackStatusType::hasTrackingRange() const noexcept {
  return trackingRange_Accessor.has_value();
}

uci::type::PO_TrackStatusType& PO_TrackStatusType::clearTrackingRange() noexcept {
  trackingRange_Accessor.reset();
  return *this;
}

const uci::type::PO_TrackStatusType::CoastSetting& PO_TrackStatusType::getCoastSetting() const {
  return *coastSetting_Accessor;
}

uci::type::PO_TrackStatusType::CoastSetting& PO_TrackStatusType::getCoastSetting() {
  return *coastSetting_Accessor;
}

uci::type::PO_TrackStatusType& PO_TrackStatusType::setCoastSetting(const uci::type::PO_TrackStatusType::CoastSetting& accessor) {
  if (&accessor != coastSetting_Accessor.get()) {
    coastSetting_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::PO_AirTargetVolumeType& PO_TrackStatusType::getBlankingVolumeStatus_() const {
  if (blankingVolumeStatus_Accessor) {
    return *blankingVolumeStatus_Accessor;
  }
  throw uci::base::UCIException("Error in getBlankingVolumeStatus(): An attempt was made to get an optional field that was not enabled, call hasBlankingVolumeStatus() to determine if it is safe to call getBlankingVolumeStatus()");
}

const uci::type::PO_AirTargetVolumeType& PO_TrackStatusType::getBlankingVolumeStatus() const {
  return getBlankingVolumeStatus_();
}

uci::type::PO_AirTargetVolumeType& PO_TrackStatusType::getBlankingVolumeStatus() {
  return getBlankingVolumeStatus_();
}

uci::type::PO_TrackStatusType& PO_TrackStatusType::setBlankingVolumeStatus(const uci::type::PO_AirTargetVolumeType& accessor) {
  enableBlankingVolumeStatus();
  if (&accessor != blankingVolumeStatus_Accessor.get()) {
    blankingVolumeStatus_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PO_TrackStatusType::hasBlankingVolumeStatus() const noexcept {
  return static_cast<bool>(blankingVolumeStatus_Accessor);
}

uci::type::PO_AirTargetVolumeType& PO_TrackStatusType::enableBlankingVolumeStatus(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pO_AirTargetVolumeType : type};
  if ((!blankingVolumeStatus_Accessor) || (blankingVolumeStatus_Accessor->getAccessorType() != requestedType)) {
    blankingVolumeStatus_Accessor = PO_AirTargetVolumeType::create(requestedType);
    if (!blankingVolumeStatus_Accessor) {
      throw uci::base::UCIException("Error in enableBlankingVolumeStatus(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *blankingVolumeStatus_Accessor;
}

uci::type::PO_TrackStatusType& PO_TrackStatusType::clearBlankingVolumeStatus() noexcept {
  blankingVolumeStatus_Accessor.reset();
  return *this;
}

std::unique_ptr<PO_TrackStatusType> PO_TrackStatusType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pO_TrackStatusType : type};
  return (requestedType == uci::type::accessorType::pO_TrackStatusType) ? boost::make_unique<PO_TrackStatusType>() : nullptr;
}

/**  */
namespace PO_TrackStatusType_Names {

constexpr const char* Extern_Type_Name{"PO_TrackStatusType"};
constexpr const char* TrackOptionID_Name{"TrackOptionID"};
constexpr const char* Mode_Name{"Mode"};
constexpr const char* TrackArea_Name{"TrackArea"};
constexpr const char* LockPersistence_Name{"LockPersistence"};
constexpr const char* ATR_FilterStatus_Name{"ATR_FilterStatus"};
constexpr const char* OffsetTrackSetting_Name{"OffsetTrackSetting"};
constexpr const char* ObservedEntityThreshold_Name{"ObservedEntityThreshold"};
constexpr const char* TrackingRange_Name{"TrackingRange"};
constexpr const char* CoastSetting_Name{"CoastSetting"};
constexpr const char* BlankingVolumeStatus_Name{"BlankingVolumeStatus"};

} // namespace PO_TrackStatusType_Names

void PO_TrackStatusType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_TrackStatusType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PO_TrackStatusType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PO_TrackStatusType_Names::TrackOptionID_Name) {
      TrackOptionsID_Type::deserialize(valueType.second, accessor.getTrackOptionID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_TrackStatusType_Names::Mode_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableMode().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + PO_TrackStatusType_Names::TrackArea_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableTrackArea().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + PO_TrackStatusType_Names::LockPersistence_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableLockPersistence().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + PO_TrackStatusType_Names::ATR_FilterStatus_Name) {
      IdentityBasicType::deserialize(valueType.second, accessor.enableATR_FilterStatus(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_TrackStatusType_Names::OffsetTrackSetting_Name) {
      LOS_VariableB_Type::deserialize(valueType.second, accessor.enableOffsetTrackSetting(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_TrackStatusType_Names::ObservedEntityThreshold_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setObservedEntityThreshold(asb_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    } else if (valueType.first == nsPrefix + PO_TrackStatusType_Names::TrackingRange_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTrackingRange(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + PO_TrackStatusType_Names::CoastSetting_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PO_TrackStatusType::CoastSetting& boundedList = accessor.getCoastSetting();
        const uci::type::PO_TrackStatusType::CoastSetting::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::PO_CoastSettingValueType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + PO_TrackStatusType_Names::BlankingVolumeStatus_Name) {
      PO_AirTargetVolumeType::deserialize(valueType.second, accessor.enableBlankingVolumeStatus(), nodeName, nsPrefix);
    }
  }
}

std::string PO_TrackStatusType::serialize(const uci::type::PO_TrackStatusType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PO_TrackStatusType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PO_TrackStatusType_Names::Extern_Type_Name);
  }
  TrackOptionsID_Type::serialize(accessor.getTrackOptionID(), node, PO_TrackStatusType_Names::TrackOptionID_Name);
  if (accessor.hasMode()) {
    PO_TrackCommandEnum::serialize(accessor.getMode(), node, PO_TrackStatusType_Names::Mode_Name, false);
  }
  if (accessor.hasTrackArea()) {
    IncreaseDecreaseEnum::serialize(accessor.getTrackArea(), node, PO_TrackStatusType_Names::TrackArea_Name, false);
  }
  if (accessor.hasLockPersistence()) {
    PO_LockPersistenceEnum::serialize(accessor.getLockPersistence(), node, PO_TrackStatusType_Names::LockPersistence_Name, false);
  }
  if (accessor.hasATR_FilterStatus()) {
    IdentityBasicType::serialize(accessor.getATR_FilterStatus(), node, PO_TrackStatusType_Names::ATR_FilterStatus_Name);
  }
  if (accessor.hasOffsetTrackSetting()) {
    LOS_VariableB_Type::serialize(accessor.getOffsetTrackSetting(), node, PO_TrackStatusType_Names::OffsetTrackSetting_Name);
  }
  if (accessor.hasObservedEntityThreshold()) {
    asb_uci::util::SerializationHelpers::serializeDuration(accessor.getObservedEntityThreshold(), node, PO_TrackStatusType_Names::ObservedEntityThreshold_Name);
  }
  if (accessor.hasTrackingRange()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getTrackingRange(), node, PO_TrackStatusType_Names::TrackingRange_Name);
  }
  {
    const uci::type::PO_TrackStatusType::CoastSetting& boundedList = accessor.getCoastSetting();
    for (uci::type::PO_TrackStatusType::CoastSetting::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::PO_CoastSettingValueType::serialize(boundedList.at(i), node, PO_TrackStatusType_Names::CoastSetting_Name);
    }
  }
  if (accessor.hasBlankingVolumeStatus()) {
    PO_AirTargetVolumeType::serialize(accessor.getBlankingVolumeStatus(), node, PO_TrackStatusType_Names::BlankingVolumeStatus_Name);
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

uci::type::PO_TrackStatusType& PO_TrackStatusType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PO_TrackStatusType>().release());
}

uci::type::PO_TrackStatusType& PO_TrackStatusType::create(const uci::type::PO_TrackStatusType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PO_TrackStatusType> newAccessor{boost::make_unique<asb_uci::type::PO_TrackStatusType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PO_TrackStatusType::destroy(uci::type::PO_TrackStatusType& accessor) {
  delete dynamic_cast<asb_uci::type::PO_TrackStatusType*>(&accessor);
}

} // namespace type

} // namespace uci

