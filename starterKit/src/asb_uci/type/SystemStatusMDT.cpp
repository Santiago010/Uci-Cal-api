/** @file SystemStatusMDT.cpp
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

#include "../../../include/asb_uci/type/SystemStatusMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ActivityByType.h"
#include "../../../include/asb_uci/type/CapabilityID_Type.h"
#include "../../../include/asb_uci/type/EntityFusionEligibilityEnum.h"
#include "../../../include/asb_uci/type/OperatorID_Type.h"
#include "../../../include/asb_uci/type/PlatformStatusType.h"
#include "../../../include/asb_uci/type/ServiceID_Type.h"
#include "../../../include/asb_uci/type/StrengthType.h"
#include "../../../include/asb_uci/type/SubsystemID_Type.h"
#include "../../../include/asb_uci/type/SystemCommunicationsType.h"
#include "../../../include/asb_uci/type/SystemID_Type.h"
#include "../../../include/asb_uci/type/SystemIdentityType.h"
#include "../../../include/asb_uci/type/SystemSourceEnum.h"
#include "../../../include/asb_uci/type/SystemStateEnum.h"
#include "../../../include/asb_uci/type/VisibleString32Type.h"
#include "../../../include/asb_uci/type/VoiceControlType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActivityByType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EntityFusionEligibilityEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OperatorID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlatformStatusType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ServiceID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/StrengthType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemCommunicationsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemIdentityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemSourceEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemStateEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemStatusMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString32Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VoiceControlType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SystemStatusMDT::SystemStatusMDT()
  : systemID_Accessor{boost::make_unique<SystemID_Type>()},
    systemState_Accessor{boost::make_unique<SystemStateEnum>()},
    source_Accessor{boost::make_unique<SystemSourceEnum>()},
    communications_Accessor{boost::make_unique<SystemCommunicationsType>()},
    operatorID_Accessor{boost::make_unique<OperatorID>(0, SIZE_MAX)},
    subsystemID_Accessor{boost::make_unique<SubsystemID>(0, SIZE_MAX)},
    capabilityID_Accessor{boost::make_unique<CapabilityID>(0, SIZE_MAX)},
    serviceID_Accessor{boost::make_unique<ServiceID>(0, SIZE_MAX)},
    activityBy_Accessor{boost::make_unique<ActivityBy>(0, SIZE_MAX)} {
}

SystemStatusMDT::~SystemStatusMDT() = default;

void SystemStatusMDT::copy(const uci::type::SystemStatusMDT& accessor) {
  copyImpl(accessor, false);
}

void SystemStatusMDT::copyImpl(const uci::type::SystemStatusMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const SystemStatusMDT&>(accessor);
    setSystemID(*(accessorImpl.systemID_Accessor));
    setSystemState(*(accessorImpl.systemState_Accessor));
    setSource(*(accessorImpl.source_Accessor));
    if (accessorImpl.fusionEligibility_Accessor) {
      setFusionEligibility(*(accessorImpl.fusionEligibility_Accessor));
    } else {
      fusionEligibility_Accessor.reset();
    }
    if (accessorImpl.model_Accessor) {
      setModel(*(accessorImpl.model_Accessor));
    } else {
      model_Accessor.reset();
    }
    if (accessorImpl.identity_Accessor) {
      setIdentity(*(accessorImpl.identity_Accessor));
    } else {
      identity_Accessor.reset();
    }
    setCommunications(*(accessorImpl.communications_Accessor));
    setOperatorID(*(accessorImpl.operatorID_Accessor));
    setSubsystemID(*(accessorImpl.subsystemID_Accessor));
    setCapabilityID(*(accessorImpl.capabilityID_Accessor));
    setServiceID(*(accessorImpl.serviceID_Accessor));
    if (accessorImpl.platformStatus_Accessor) {
      setPlatformStatus(*(accessorImpl.platformStatus_Accessor));
    } else {
      platformStatus_Accessor.reset();
    }
    if (accessorImpl.voiceControl_Accessor) {
      setVoiceControl(*(accessorImpl.voiceControl_Accessor));
    } else {
      voiceControl_Accessor.reset();
    }
    setActivityBy(*(accessorImpl.activityBy_Accessor));
    if (accessorImpl.strength_Accessor) {
      setStrength(*(accessorImpl.strength_Accessor));
    } else {
      strength_Accessor.reset();
    }
  }
}

void SystemStatusMDT::reset() noexcept {
  systemID_Accessor->reset();
  systemState_Accessor->reset();
  source_Accessor->reset();
  fusionEligibility_Accessor.reset();
  model_Accessor.reset();
  identity_Accessor.reset();
  communications_Accessor->reset();
  operatorID_Accessor->reset();
  subsystemID_Accessor->reset();
  capabilityID_Accessor->reset();
  serviceID_Accessor->reset();
  platformStatus_Accessor.reset();
  voiceControl_Accessor.reset();
  activityBy_Accessor->reset();
  strength_Accessor.reset();
}

const uci::type::SystemID_Type& SystemStatusMDT::getSystemID() const {
  return *systemID_Accessor;
}

uci::type::SystemID_Type& SystemStatusMDT::getSystemID() {
  return *systemID_Accessor;
}

uci::type::SystemStatusMDT& SystemStatusMDT::setSystemID(const uci::type::SystemID_Type& accessor) {
  if (&accessor != systemID_Accessor.get()) {
    systemID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SystemStateEnum& SystemStatusMDT::getSystemState() const {
  return *systemState_Accessor;
}

uci::type::SystemStateEnum& SystemStatusMDT::getSystemState() {
  return *systemState_Accessor;
}

uci::type::SystemStatusMDT& SystemStatusMDT::setSystemState(const uci::type::SystemStateEnum& accessor) {
  if (&accessor != systemState_Accessor.get()) {
    systemState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::SystemStatusMDT& SystemStatusMDT::setSystemState(uci::type::SystemStateEnum::EnumerationItem value) {
  systemState_Accessor->setValue(value);
  return *this;
}


const uci::type::SystemSourceEnum& SystemStatusMDT::getSource() const {
  return *source_Accessor;
}

uci::type::SystemSourceEnum& SystemStatusMDT::getSource() {
  return *source_Accessor;
}

uci::type::SystemStatusMDT& SystemStatusMDT::setSource(const uci::type::SystemSourceEnum& accessor) {
  if (&accessor != source_Accessor.get()) {
    source_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::SystemStatusMDT& SystemStatusMDT::setSource(uci::type::SystemSourceEnum::EnumerationItem value) {
  source_Accessor->setValue(value);
  return *this;
}


uci::type::EntityFusionEligibilityEnum& SystemStatusMDT::getFusionEligibility_() const {
  if (fusionEligibility_Accessor) {
    return *fusionEligibility_Accessor;
  }
  throw uci::base::UCIException("Error in getFusionEligibility(): An attempt was made to get an optional field that was not enabled, call hasFusionEligibility() to determine if it is safe to call getFusionEligibility()");
}

const uci::type::EntityFusionEligibilityEnum& SystemStatusMDT::getFusionEligibility() const {
  return getFusionEligibility_();
}

uci::type::EntityFusionEligibilityEnum& SystemStatusMDT::getFusionEligibility() {
  return getFusionEligibility_();
}

uci::type::SystemStatusMDT& SystemStatusMDT::setFusionEligibility(const uci::type::EntityFusionEligibilityEnum& accessor) {
  enableFusionEligibility();
  if (&accessor != fusionEligibility_Accessor.get()) {
    fusionEligibility_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::SystemStatusMDT& SystemStatusMDT::setFusionEligibility(const uci::type::EntityFusionEligibilityEnum::EnumerationItem value) {
  enableFusionEligibility().setValue(value);
  return *this;
}

bool SystemStatusMDT::hasFusionEligibility() const noexcept {
  return static_cast<bool>(fusionEligibility_Accessor);
}

uci::type::EntityFusionEligibilityEnum& SystemStatusMDT::enableFusionEligibility(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::entityFusionEligibilityEnum : type};
  if ((!fusionEligibility_Accessor) || (fusionEligibility_Accessor->getAccessorType() != requestedType)) {
    fusionEligibility_Accessor = EntityFusionEligibilityEnum::create(requestedType);
    if (!fusionEligibility_Accessor) {
      throw uci::base::UCIException("Error in enableFusionEligibility(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *fusionEligibility_Accessor;
}

uci::type::SystemStatusMDT& SystemStatusMDT::clearFusionEligibility() noexcept {
  fusionEligibility_Accessor.reset();
  return *this;
}

uci::type::VisibleString32Type& SystemStatusMDT::getModel_() const {
  if (model_Accessor) {
    return *model_Accessor;
  }
  throw uci::base::UCIException("Error in getModel(): An attempt was made to get an optional field that was not enabled, call hasModel() to determine if it is safe to call getModel()");
}

const uci::type::VisibleString32Type& SystemStatusMDT::getModel() const {
  return getModel_();
}

uci::type::VisibleString32Type& SystemStatusMDT::getModel() {
  return getModel_();
}

uci::type::SystemStatusMDT& SystemStatusMDT::setModel(const uci::type::VisibleString32Type& value) {
  return setModel(value.c_str());
}

uci::type::SystemStatusMDT& SystemStatusMDT::setModel(const std::string& value) {
  return setModel(value.c_str());
}

uci::type::SystemStatusMDT& SystemStatusMDT::setModel(const char* value) {
  enableModel().setStringValue(value);
  return *this;
}

bool SystemStatusMDT::hasModel() const noexcept {
  return static_cast<bool>(model_Accessor);
}

uci::type::VisibleString32Type& SystemStatusMDT::enableModel(uci::base::accessorType::AccessorType type) {
  if (!model_Accessor) {
    model_Accessor = VisibleString32Type::create(type);
  }
  return *model_Accessor;
}

uci::type::SystemStatusMDT& SystemStatusMDT::clearModel() noexcept {
  model_Accessor.reset();
  return *this;
}

uci::type::SystemIdentityType& SystemStatusMDT::getIdentity_() const {
  if (identity_Accessor) {
    return *identity_Accessor;
  }
  throw uci::base::UCIException("Error in getIdentity(): An attempt was made to get an optional field that was not enabled, call hasIdentity() to determine if it is safe to call getIdentity()");
}

const uci::type::SystemIdentityType& SystemStatusMDT::getIdentity() const {
  return getIdentity_();
}

uci::type::SystemIdentityType& SystemStatusMDT::getIdentity() {
  return getIdentity_();
}

uci::type::SystemStatusMDT& SystemStatusMDT::setIdentity(const uci::type::SystemIdentityType& accessor) {
  enableIdentity();
  if (&accessor != identity_Accessor.get()) {
    identity_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool SystemStatusMDT::hasIdentity() const noexcept {
  return static_cast<bool>(identity_Accessor);
}

uci::type::SystemIdentityType& SystemStatusMDT::enableIdentity(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::systemIdentityType : type};
  if ((!identity_Accessor) || (identity_Accessor->getAccessorType() != requestedType)) {
    identity_Accessor = SystemIdentityType::create(requestedType);
    if (!identity_Accessor) {
      throw uci::base::UCIException("Error in enableIdentity(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *identity_Accessor;
}

uci::type::SystemStatusMDT& SystemStatusMDT::clearIdentity() noexcept {
  identity_Accessor.reset();
  return *this;
}

const uci::type::SystemCommunicationsType& SystemStatusMDT::getCommunications() const {
  return *communications_Accessor;
}

uci::type::SystemCommunicationsType& SystemStatusMDT::getCommunications() {
  return *communications_Accessor;
}

uci::type::SystemStatusMDT& SystemStatusMDT::setCommunications(const uci::type::SystemCommunicationsType& accessor) {
  if (&accessor != communications_Accessor.get()) {
    communications_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SystemStatusMDT::OperatorID& SystemStatusMDT::getOperatorID() const {
  return *operatorID_Accessor;
}

uci::type::SystemStatusMDT::OperatorID& SystemStatusMDT::getOperatorID() {
  return *operatorID_Accessor;
}

uci::type::SystemStatusMDT& SystemStatusMDT::setOperatorID(const uci::type::SystemStatusMDT::OperatorID& accessor) {
  if (&accessor != operatorID_Accessor.get()) {
    operatorID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SystemStatusMDT::SubsystemID& SystemStatusMDT::getSubsystemID() const {
  return *subsystemID_Accessor;
}

uci::type::SystemStatusMDT::SubsystemID& SystemStatusMDT::getSubsystemID() {
  return *subsystemID_Accessor;
}

uci::type::SystemStatusMDT& SystemStatusMDT::setSubsystemID(const uci::type::SystemStatusMDT::SubsystemID& accessor) {
  if (&accessor != subsystemID_Accessor.get()) {
    subsystemID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SystemStatusMDT::CapabilityID& SystemStatusMDT::getCapabilityID() const {
  return *capabilityID_Accessor;
}

uci::type::SystemStatusMDT::CapabilityID& SystemStatusMDT::getCapabilityID() {
  return *capabilityID_Accessor;
}

uci::type::SystemStatusMDT& SystemStatusMDT::setCapabilityID(const uci::type::SystemStatusMDT::CapabilityID& accessor) {
  if (&accessor != capabilityID_Accessor.get()) {
    capabilityID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SystemStatusMDT::ServiceID& SystemStatusMDT::getServiceID() const {
  return *serviceID_Accessor;
}

uci::type::SystemStatusMDT::ServiceID& SystemStatusMDT::getServiceID() {
  return *serviceID_Accessor;
}

uci::type::SystemStatusMDT& SystemStatusMDT::setServiceID(const uci::type::SystemStatusMDT::ServiceID& accessor) {
  if (&accessor != serviceID_Accessor.get()) {
    serviceID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::PlatformStatusType& SystemStatusMDT::getPlatformStatus_() const {
  if (platformStatus_Accessor) {
    return *platformStatus_Accessor;
  }
  throw uci::base::UCIException("Error in getPlatformStatus(): An attempt was made to get an optional field that was not enabled, call hasPlatformStatus() to determine if it is safe to call getPlatformStatus()");
}

const uci::type::PlatformStatusType& SystemStatusMDT::getPlatformStatus() const {
  return getPlatformStatus_();
}

uci::type::PlatformStatusType& SystemStatusMDT::getPlatformStatus() {
  return getPlatformStatus_();
}

uci::type::SystemStatusMDT& SystemStatusMDT::setPlatformStatus(const uci::type::PlatformStatusType& accessor) {
  enablePlatformStatus();
  if (&accessor != platformStatus_Accessor.get()) {
    platformStatus_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool SystemStatusMDT::hasPlatformStatus() const noexcept {
  return static_cast<bool>(platformStatus_Accessor);
}

uci::type::PlatformStatusType& SystemStatusMDT::enablePlatformStatus(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::platformStatusType : type};
  if ((!platformStatus_Accessor) || (platformStatus_Accessor->getAccessorType() != requestedType)) {
    platformStatus_Accessor = PlatformStatusType::create(requestedType);
    if (!platformStatus_Accessor) {
      throw uci::base::UCIException("Error in enablePlatformStatus(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *platformStatus_Accessor;
}

uci::type::SystemStatusMDT& SystemStatusMDT::clearPlatformStatus() noexcept {
  platformStatus_Accessor.reset();
  return *this;
}

uci::type::VoiceControlType& SystemStatusMDT::getVoiceControl_() const {
  if (voiceControl_Accessor) {
    return *voiceControl_Accessor;
  }
  throw uci::base::UCIException("Error in getVoiceControl(): An attempt was made to get an optional field that was not enabled, call hasVoiceControl() to determine if it is safe to call getVoiceControl()");
}

const uci::type::VoiceControlType& SystemStatusMDT::getVoiceControl() const {
  return getVoiceControl_();
}

uci::type::VoiceControlType& SystemStatusMDT::getVoiceControl() {
  return getVoiceControl_();
}

uci::type::SystemStatusMDT& SystemStatusMDT::setVoiceControl(const uci::type::VoiceControlType& accessor) {
  enableVoiceControl();
  if (&accessor != voiceControl_Accessor.get()) {
    voiceControl_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool SystemStatusMDT::hasVoiceControl() const noexcept {
  return static_cast<bool>(voiceControl_Accessor);
}

uci::type::VoiceControlType& SystemStatusMDT::enableVoiceControl(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::voiceControlType : type};
  if ((!voiceControl_Accessor) || (voiceControl_Accessor->getAccessorType() != requestedType)) {
    voiceControl_Accessor = VoiceControlType::create(requestedType);
    if (!voiceControl_Accessor) {
      throw uci::base::UCIException("Error in enableVoiceControl(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *voiceControl_Accessor;
}

uci::type::SystemStatusMDT& SystemStatusMDT::clearVoiceControl() noexcept {
  voiceControl_Accessor.reset();
  return *this;
}

const uci::type::SystemStatusMDT::ActivityBy& SystemStatusMDT::getActivityBy() const {
  return *activityBy_Accessor;
}

uci::type::SystemStatusMDT::ActivityBy& SystemStatusMDT::getActivityBy() {
  return *activityBy_Accessor;
}

uci::type::SystemStatusMDT& SystemStatusMDT::setActivityBy(const uci::type::SystemStatusMDT::ActivityBy& accessor) {
  if (&accessor != activityBy_Accessor.get()) {
    activityBy_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::StrengthType& SystemStatusMDT::getStrength_() const {
  if (strength_Accessor) {
    return *strength_Accessor;
  }
  throw uci::base::UCIException("Error in getStrength(): An attempt was made to get an optional field that was not enabled, call hasStrength() to determine if it is safe to call getStrength()");
}

const uci::type::StrengthType& SystemStatusMDT::getStrength() const {
  return getStrength_();
}

uci::type::StrengthType& SystemStatusMDT::getStrength() {
  return getStrength_();
}

uci::type::SystemStatusMDT& SystemStatusMDT::setStrength(const uci::type::StrengthType& accessor) {
  enableStrength();
  if (&accessor != strength_Accessor.get()) {
    strength_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool SystemStatusMDT::hasStrength() const noexcept {
  return static_cast<bool>(strength_Accessor);
}

uci::type::StrengthType& SystemStatusMDT::enableStrength(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::strengthType : type};
  if ((!strength_Accessor) || (strength_Accessor->getAccessorType() != requestedType)) {
    strength_Accessor = StrengthType::create(requestedType);
    if (!strength_Accessor) {
      throw uci::base::UCIException("Error in enableStrength(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *strength_Accessor;
}

uci::type::SystemStatusMDT& SystemStatusMDT::clearStrength() noexcept {
  strength_Accessor.reset();
  return *this;
}

std::unique_ptr<SystemStatusMDT> SystemStatusMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::systemStatusMDT : type};
  return (requestedType == uci::type::accessorType::systemStatusMDT) ? boost::make_unique<SystemStatusMDT>() : nullptr;
}

/**  */
namespace SystemStatusMDT_Names {

constexpr const char* Extern_Type_Name{"SystemStatusMDT"};
constexpr const char* SystemID_Name{"SystemID"};
constexpr const char* SystemState_Name{"SystemState"};
constexpr const char* Source_Name{"Source"};
constexpr const char* FusionEligibility_Name{"FusionEligibility"};
constexpr const char* Model_Name{"Model"};
constexpr const char* Identity_Name{"Identity"};
constexpr const char* Communications_Name{"Communications"};
constexpr const char* OperatorID_Name{"OperatorID"};
constexpr const char* SubsystemID_Name{"SubsystemID"};
constexpr const char* CapabilityID_Name{"CapabilityID"};
constexpr const char* ServiceID_Name{"ServiceID"};
constexpr const char* PlatformStatus_Name{"PlatformStatus"};
constexpr const char* VoiceControl_Name{"VoiceControl"};
constexpr const char* ActivityBy_Name{"ActivityBy"};
constexpr const char* Strength_Name{"Strength"};

} // namespace SystemStatusMDT_Names

void SystemStatusMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::SystemStatusMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SystemStatusMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SystemStatusMDT_Names::SystemID_Name) {
      SystemID_Type::deserialize(valueType.second, accessor.getSystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SystemStatusMDT_Names::SystemState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getSystemState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + SystemStatusMDT_Names::Source_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getSource().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + SystemStatusMDT_Names::FusionEligibility_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableFusionEligibility().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + SystemStatusMDT_Names::Model_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setModel(*value);
      }
    } else if (valueType.first == nsPrefix + SystemStatusMDT_Names::Identity_Name) {
      SystemIdentityType::deserialize(valueType.second, accessor.enableIdentity(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SystemStatusMDT_Names::Communications_Name) {
      SystemCommunicationsType::deserialize(valueType.second, accessor.getCommunications(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SystemStatusMDT_Names::OperatorID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SystemStatusMDT::OperatorID& boundedList = accessor.getOperatorID();
        const uci::type::SystemStatusMDT::OperatorID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::OperatorID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + SystemStatusMDT_Names::SubsystemID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SystemStatusMDT::SubsystemID& boundedList = accessor.getSubsystemID();
        const uci::type::SystemStatusMDT::SubsystemID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::SubsystemID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + SystemStatusMDT_Names::CapabilityID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SystemStatusMDT::CapabilityID& boundedList = accessor.getCapabilityID();
        const uci::type::SystemStatusMDT::CapabilityID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::CapabilityID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + SystemStatusMDT_Names::ServiceID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SystemStatusMDT::ServiceID& boundedList = accessor.getServiceID();
        const uci::type::SystemStatusMDT::ServiceID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::ServiceID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + SystemStatusMDT_Names::PlatformStatus_Name) {
      PlatformStatusType::deserialize(valueType.second, accessor.enablePlatformStatus(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SystemStatusMDT_Names::VoiceControl_Name) {
      VoiceControlType::deserialize(valueType.second, accessor.enableVoiceControl(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SystemStatusMDT_Names::ActivityBy_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SystemStatusMDT::ActivityBy& boundedList = accessor.getActivityBy();
        const uci::type::SystemStatusMDT::ActivityBy::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::ActivityByType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + SystemStatusMDT_Names::Strength_Name) {
      StrengthType::deserialize(valueType.second, accessor.enableStrength(), nodeName, nsPrefix);
    }
  }
}

std::string SystemStatusMDT::serialize(const uci::type::SystemStatusMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SystemStatusMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SystemStatusMDT_Names::Extern_Type_Name);
  }
  SystemID_Type::serialize(accessor.getSystemID(), node, SystemStatusMDT_Names::SystemID_Name);
  SystemStateEnum::serialize(accessor.getSystemState(), node, SystemStatusMDT_Names::SystemState_Name, false);
  SystemSourceEnum::serialize(accessor.getSource(), node, SystemStatusMDT_Names::Source_Name, false);
  if (accessor.hasFusionEligibility()) {
    EntityFusionEligibilityEnum::serialize(accessor.getFusionEligibility(), node, SystemStatusMDT_Names::FusionEligibility_Name, false);
  }
  if (accessor.hasModel()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getModel(), node, SystemStatusMDT_Names::Model_Name);
  }
  if (accessor.hasIdentity()) {
    SystemIdentityType::serialize(accessor.getIdentity(), node, SystemStatusMDT_Names::Identity_Name);
  }
  SystemCommunicationsType::serialize(accessor.getCommunications(), node, SystemStatusMDT_Names::Communications_Name);
  {
    const uci::type::SystemStatusMDT::OperatorID& boundedList = accessor.getOperatorID();
    for (uci::type::SystemStatusMDT::OperatorID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::OperatorID_Type::serialize(boundedList.at(i), node, SystemStatusMDT_Names::OperatorID_Name);
    }
  }
  {
    const uci::type::SystemStatusMDT::SubsystemID& boundedList = accessor.getSubsystemID();
    for (uci::type::SystemStatusMDT::SubsystemID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::SubsystemID_Type::serialize(boundedList.at(i), node, SystemStatusMDT_Names::SubsystemID_Name);
    }
  }
  {
    const uci::type::SystemStatusMDT::CapabilityID& boundedList = accessor.getCapabilityID();
    for (uci::type::SystemStatusMDT::CapabilityID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::CapabilityID_Type::serialize(boundedList.at(i), node, SystemStatusMDT_Names::CapabilityID_Name);
    }
  }
  {
    const uci::type::SystemStatusMDT::ServiceID& boundedList = accessor.getServiceID();
    for (uci::type::SystemStatusMDT::ServiceID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ServiceID_Type::serialize(boundedList.at(i), node, SystemStatusMDT_Names::ServiceID_Name);
    }
  }
  if (accessor.hasPlatformStatus()) {
    PlatformStatusType::serialize(accessor.getPlatformStatus(), node, SystemStatusMDT_Names::PlatformStatus_Name);
  }
  if (accessor.hasVoiceControl()) {
    VoiceControlType::serialize(accessor.getVoiceControl(), node, SystemStatusMDT_Names::VoiceControl_Name);
  }
  {
    const uci::type::SystemStatusMDT::ActivityBy& boundedList = accessor.getActivityBy();
    for (uci::type::SystemStatusMDT::ActivityBy::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ActivityByType::serialize(boundedList.at(i), node, SystemStatusMDT_Names::ActivityBy_Name);
    }
  }
  if (accessor.hasStrength()) {
    StrengthType::serialize(accessor.getStrength(), node, SystemStatusMDT_Names::Strength_Name);
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

uci::type::SystemStatusMDT& SystemStatusMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SystemStatusMDT>().release());
}

uci::type::SystemStatusMDT& SystemStatusMDT::create(const uci::type::SystemStatusMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SystemStatusMDT> newAccessor{boost::make_unique<asb_uci::type::SystemStatusMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SystemStatusMDT::destroy(uci::type::SystemStatusMDT& accessor) {
  delete dynamic_cast<asb_uci::type::SystemStatusMDT*>(&accessor);
}

} // namespace type

} // namespace uci

