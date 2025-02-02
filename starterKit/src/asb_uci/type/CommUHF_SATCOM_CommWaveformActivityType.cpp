/** @file CommUHF_SATCOM_CommWaveformActivityType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:12 PM
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

#include "../../../include/asb_uci/type/CommUHF_SATCOM_CommWaveformActivityType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CommRangeModeTypeEnum.h"
#include "../../../include/asb_uci/type/CommSATCOM_ServiceTypeEnum.h"
#include "../../../include/asb_uci/type/CommWaveformActivityPET.h"
#include "../../../include/asb_uci/type/ForeignKeyType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommRangeModeTypeEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommSATCOM_ServiceTypeEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommUHF_SATCOM_CommWaveformActivityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DurationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ForeignKeyType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

CommUHF_SATCOM_CommWaveformActivityType::CommUHF_SATCOM_CommWaveformActivityType()
  : guardSlotKey_Accessor{boost::make_unique<GuardSlotKey>(0, SIZE_MAX)} {
}

CommUHF_SATCOM_CommWaveformActivityType::~CommUHF_SATCOM_CommWaveformActivityType() = default;

void CommUHF_SATCOM_CommWaveformActivityType::copy(const uci::type::CommUHF_SATCOM_CommWaveformActivityType& accessor) {
  copyImpl(accessor, false);
}

void CommUHF_SATCOM_CommWaveformActivityType::copyImpl(const uci::type::CommUHF_SATCOM_CommWaveformActivityType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    CommWaveformActivityPET::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const CommUHF_SATCOM_CommWaveformActivityType&>(accessor);
    setRangeDelay(accessorImpl.rangeDelay_Accessor);
    if (accessorImpl.rangeMode_Accessor) {
      setRangeMode(*(accessorImpl.rangeMode_Accessor));
    } else {
      rangeMode_Accessor.reset();
    }
    if (accessorImpl.serviceType_Accessor) {
      setServiceType(*(accessorImpl.serviceType_Accessor));
    } else {
      serviceType_Accessor.reset();
    }
    if (accessorImpl.configurationCode_Accessor) {
      setConfigurationCode(*(accessorImpl.configurationCode_Accessor));
    } else {
      configurationCode_Accessor.reset();
    }
    if (accessorImpl.hasOrderwireEncryption()) {
      setOrderwireEncryption(accessorImpl.getOrderwireEncryption());
    } else {
      clearOrderwireEncryption();
    }
    if (accessorImpl.satelliteKey_Accessor) {
      setSatelliteKey(*(accessorImpl.satelliteKey_Accessor));
    } else {
      satelliteKey_Accessor.reset();
    }
    setGuardSlotKey(*(accessorImpl.guardSlotKey_Accessor));
  }
}

void CommUHF_SATCOM_CommWaveformActivityType::reset() noexcept {
  CommWaveformActivityPET::reset();
  rangeDelay_Accessor = 0;
  rangeMode_Accessor.reset();
  serviceType_Accessor.reset();
  configurationCode_Accessor.reset();
  clearOrderwireEncryption();
  satelliteKey_Accessor.reset();
  guardSlotKey_Accessor->reset();
}

uci::type::DurationTypeValue CommUHF_SATCOM_CommWaveformActivityType::getRangeDelay() const {
  return rangeDelay_Accessor;
}

uci::type::CommUHF_SATCOM_CommWaveformActivityType& CommUHF_SATCOM_CommWaveformActivityType::setRangeDelay(uci::type::DurationTypeValue value) {
  rangeDelay_Accessor = value;
  return *this;
}


uci::type::CommRangeModeTypeEnum& CommUHF_SATCOM_CommWaveformActivityType::getRangeMode_() const {
  if (rangeMode_Accessor) {
    return *rangeMode_Accessor;
  }
  throw uci::base::UCIException("Error in getRangeMode(): An attempt was made to get an optional field that was not enabled, call hasRangeMode() to determine if it is safe to call getRangeMode()");
}

const uci::type::CommRangeModeTypeEnum& CommUHF_SATCOM_CommWaveformActivityType::getRangeMode() const {
  return getRangeMode_();
}

uci::type::CommRangeModeTypeEnum& CommUHF_SATCOM_CommWaveformActivityType::getRangeMode() {
  return getRangeMode_();
}

uci::type::CommUHF_SATCOM_CommWaveformActivityType& CommUHF_SATCOM_CommWaveformActivityType::setRangeMode(const uci::type::CommRangeModeTypeEnum& accessor) {
  enableRangeMode();
  if (&accessor != rangeMode_Accessor.get()) {
    rangeMode_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::CommUHF_SATCOM_CommWaveformActivityType& CommUHF_SATCOM_CommWaveformActivityType::setRangeMode(const uci::type::CommRangeModeTypeEnum::EnumerationItem value) {
  enableRangeMode().setValue(value);
  return *this;
}

bool CommUHF_SATCOM_CommWaveformActivityType::hasRangeMode() const noexcept {
  return static_cast<bool>(rangeMode_Accessor);
}

uci::type::CommRangeModeTypeEnum& CommUHF_SATCOM_CommWaveformActivityType::enableRangeMode(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commRangeModeTypeEnum : type};
  if ((!rangeMode_Accessor) || (rangeMode_Accessor->getAccessorType() != requestedType)) {
    rangeMode_Accessor = CommRangeModeTypeEnum::create(requestedType);
    if (!rangeMode_Accessor) {
      throw uci::base::UCIException("Error in enableRangeMode(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *rangeMode_Accessor;
}

uci::type::CommUHF_SATCOM_CommWaveformActivityType& CommUHF_SATCOM_CommWaveformActivityType::clearRangeMode() noexcept {
  rangeMode_Accessor.reset();
  return *this;
}

uci::type::CommSATCOM_ServiceTypeEnum& CommUHF_SATCOM_CommWaveformActivityType::getServiceType_() const {
  if (serviceType_Accessor) {
    return *serviceType_Accessor;
  }
  throw uci::base::UCIException("Error in getServiceType(): An attempt was made to get an optional field that was not enabled, call hasServiceType() to determine if it is safe to call getServiceType()");
}

const uci::type::CommSATCOM_ServiceTypeEnum& CommUHF_SATCOM_CommWaveformActivityType::getServiceType() const {
  return getServiceType_();
}

uci::type::CommSATCOM_ServiceTypeEnum& CommUHF_SATCOM_CommWaveformActivityType::getServiceType() {
  return getServiceType_();
}

uci::type::CommUHF_SATCOM_CommWaveformActivityType& CommUHF_SATCOM_CommWaveformActivityType::setServiceType(const uci::type::CommSATCOM_ServiceTypeEnum& accessor) {
  enableServiceType();
  if (&accessor != serviceType_Accessor.get()) {
    serviceType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::CommUHF_SATCOM_CommWaveformActivityType& CommUHF_SATCOM_CommWaveformActivityType::setServiceType(const uci::type::CommSATCOM_ServiceTypeEnum::EnumerationItem value) {
  enableServiceType().setValue(value);
  return *this;
}

bool CommUHF_SATCOM_CommWaveformActivityType::hasServiceType() const noexcept {
  return static_cast<bool>(serviceType_Accessor);
}

uci::type::CommSATCOM_ServiceTypeEnum& CommUHF_SATCOM_CommWaveformActivityType::enableServiceType(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commSATCOM_ServiceTypeEnum : type};
  if ((!serviceType_Accessor) || (serviceType_Accessor->getAccessorType() != requestedType)) {
    serviceType_Accessor = CommSATCOM_ServiceTypeEnum::create(requestedType);
    if (!serviceType_Accessor) {
      throw uci::base::UCIException("Error in enableServiceType(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *serviceType_Accessor;
}

uci::type::CommUHF_SATCOM_CommWaveformActivityType& CommUHF_SATCOM_CommWaveformActivityType::clearServiceType() noexcept {
  serviceType_Accessor.reset();
  return *this;
}

uci::type::ForeignKeyType& CommUHF_SATCOM_CommWaveformActivityType::getConfigurationCode_() const {
  if (configurationCode_Accessor) {
    return *configurationCode_Accessor;
  }
  throw uci::base::UCIException("Error in getConfigurationCode(): An attempt was made to get an optional field that was not enabled, call hasConfigurationCode() to determine if it is safe to call getConfigurationCode()");
}

const uci::type::ForeignKeyType& CommUHF_SATCOM_CommWaveformActivityType::getConfigurationCode() const {
  return getConfigurationCode_();
}

uci::type::ForeignKeyType& CommUHF_SATCOM_CommWaveformActivityType::getConfigurationCode() {
  return getConfigurationCode_();
}

uci::type::CommUHF_SATCOM_CommWaveformActivityType& CommUHF_SATCOM_CommWaveformActivityType::setConfigurationCode(const uci::type::ForeignKeyType& accessor) {
  enableConfigurationCode(accessor.getAccessorType());
  if (&accessor != configurationCode_Accessor.get()) {
    configurationCode_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool CommUHF_SATCOM_CommWaveformActivityType::hasConfigurationCode() const noexcept {
  return static_cast<bool>(configurationCode_Accessor);
}

uci::type::ForeignKeyType& CommUHF_SATCOM_CommWaveformActivityType::enableConfigurationCode(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::foreignKeyType : type};
  if ((!configurationCode_Accessor) || (configurationCode_Accessor->getAccessorType() != requestedType)) {
    configurationCode_Accessor = ForeignKeyType::create(requestedType);
    if (!configurationCode_Accessor) {
      throw uci::base::UCIException("Error in enableConfigurationCode(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *configurationCode_Accessor;
}

uci::type::CommUHF_SATCOM_CommWaveformActivityType& CommUHF_SATCOM_CommWaveformActivityType::clearConfigurationCode() noexcept {
  configurationCode_Accessor.reset();
  return *this;
}

xs::Boolean CommUHF_SATCOM_CommWaveformActivityType::getOrderwireEncryption() const {
  if (orderwireEncryption_Accessor) {
    return *orderwireEncryption_Accessor;
  }
  throw uci::base::UCIException("Error in getOrderwireEncryption(): An attempt was made to get an optional field that was not enabled, call hasOrderwireEncryption() to determine if it is safe to call getOrderwireEncryption()");
}

uci::type::CommUHF_SATCOM_CommWaveformActivityType& CommUHF_SATCOM_CommWaveformActivityType::setOrderwireEncryption(xs::Boolean value) {
  orderwireEncryption_Accessor = value;
  return *this;
}

bool CommUHF_SATCOM_CommWaveformActivityType::hasOrderwireEncryption() const noexcept {
  return orderwireEncryption_Accessor.has_value();
}

uci::type::CommUHF_SATCOM_CommWaveformActivityType& CommUHF_SATCOM_CommWaveformActivityType::clearOrderwireEncryption() noexcept {
  orderwireEncryption_Accessor.reset();
  return *this;
}

uci::type::ForeignKeyType& CommUHF_SATCOM_CommWaveformActivityType::getSatelliteKey_() const {
  if (satelliteKey_Accessor) {
    return *satelliteKey_Accessor;
  }
  throw uci::base::UCIException("Error in getSatelliteKey(): An attempt was made to get an optional field that was not enabled, call hasSatelliteKey() to determine if it is safe to call getSatelliteKey()");
}

const uci::type::ForeignKeyType& CommUHF_SATCOM_CommWaveformActivityType::getSatelliteKey() const {
  return getSatelliteKey_();
}

uci::type::ForeignKeyType& CommUHF_SATCOM_CommWaveformActivityType::getSatelliteKey() {
  return getSatelliteKey_();
}

uci::type::CommUHF_SATCOM_CommWaveformActivityType& CommUHF_SATCOM_CommWaveformActivityType::setSatelliteKey(const uci::type::ForeignKeyType& accessor) {
  enableSatelliteKey(accessor.getAccessorType());
  if (&accessor != satelliteKey_Accessor.get()) {
    satelliteKey_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool CommUHF_SATCOM_CommWaveformActivityType::hasSatelliteKey() const noexcept {
  return static_cast<bool>(satelliteKey_Accessor);
}

uci::type::ForeignKeyType& CommUHF_SATCOM_CommWaveformActivityType::enableSatelliteKey(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::foreignKeyType : type};
  if ((!satelliteKey_Accessor) || (satelliteKey_Accessor->getAccessorType() != requestedType)) {
    satelliteKey_Accessor = ForeignKeyType::create(requestedType);
    if (!satelliteKey_Accessor) {
      throw uci::base::UCIException("Error in enableSatelliteKey(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *satelliteKey_Accessor;
}

uci::type::CommUHF_SATCOM_CommWaveformActivityType& CommUHF_SATCOM_CommWaveformActivityType::clearSatelliteKey() noexcept {
  satelliteKey_Accessor.reset();
  return *this;
}

const uci::type::CommUHF_SATCOM_CommWaveformActivityType::GuardSlotKey& CommUHF_SATCOM_CommWaveformActivityType::getGuardSlotKey() const {
  return *guardSlotKey_Accessor;
}

uci::type::CommUHF_SATCOM_CommWaveformActivityType::GuardSlotKey& CommUHF_SATCOM_CommWaveformActivityType::getGuardSlotKey() {
  return *guardSlotKey_Accessor;
}

uci::type::CommUHF_SATCOM_CommWaveformActivityType& CommUHF_SATCOM_CommWaveformActivityType::setGuardSlotKey(const uci::type::CommUHF_SATCOM_CommWaveformActivityType::GuardSlotKey& accessor) {
  if (&accessor != guardSlotKey_Accessor.get()) {
    guardSlotKey_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<CommUHF_SATCOM_CommWaveformActivityType> CommUHF_SATCOM_CommWaveformActivityType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commUHF_SATCOM_CommWaveformActivityType : type};
  return (requestedType == uci::type::accessorType::commUHF_SATCOM_CommWaveformActivityType) ? boost::make_unique<CommUHF_SATCOM_CommWaveformActivityType>() : nullptr;
}

/**  */
namespace CommUHF_SATCOM_CommWaveformActivityType_Names {

constexpr const char* Extern_Type_Name{"CommUHF_SATCOM_CommWaveformActivityType"};
constexpr const char* RangeDelay_Name{"RangeDelay"};
constexpr const char* RangeMode_Name{"RangeMode"};
constexpr const char* ServiceType_Name{"ServiceType"};
constexpr const char* ConfigurationCode_Name{"ConfigurationCode"};
constexpr const char* OrderwireEncryption_Name{"OrderwireEncryption"};
constexpr const char* SatelliteKey_Name{"SatelliteKey"};
constexpr const char* GuardSlotKey_Name{"GuardSlotKey"};

} // namespace CommUHF_SATCOM_CommWaveformActivityType_Names

void CommUHF_SATCOM_CommWaveformActivityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CommUHF_SATCOM_CommWaveformActivityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CommUHF_SATCOM_CommWaveformActivityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CommUHF_SATCOM_CommWaveformActivityType_Names::RangeDelay_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRangeDelay(asb_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    } else if (valueType.first == nsPrefix + CommUHF_SATCOM_CommWaveformActivityType_Names::RangeMode_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableRangeMode().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + CommUHF_SATCOM_CommWaveformActivityType_Names::ServiceType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableServiceType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + CommUHF_SATCOM_CommWaveformActivityType_Names::ConfigurationCode_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableConfigurationCode(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CommUHF_SATCOM_CommWaveformActivityType_Names::OrderwireEncryption_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setOrderwireEncryption(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + CommUHF_SATCOM_CommWaveformActivityType_Names::SatelliteKey_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableSatelliteKey(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CommUHF_SATCOM_CommWaveformActivityType_Names::GuardSlotKey_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::CommUHF_SATCOM_CommWaveformActivityType::GuardSlotKey& boundedList = accessor.getGuardSlotKey();
        const uci::type::CommUHF_SATCOM_CommWaveformActivityType::GuardSlotKey::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1, asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix));
        asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  CommWaveformActivityPET::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string CommUHF_SATCOM_CommWaveformActivityType::serialize(const uci::type::CommUHF_SATCOM_CommWaveformActivityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? CommUHF_SATCOM_CommWaveformActivityType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, CommUHF_SATCOM_CommWaveformActivityType_Names::Extern_Type_Name);
  }
  CommWaveformActivityPET::serialize(accessor, node, "", false, false, false);
  asb_uci::util::SerializationHelpers::serializeDuration(accessor.getRangeDelay(), node, CommUHF_SATCOM_CommWaveformActivityType_Names::RangeDelay_Name);
  if (accessor.hasRangeMode()) {
    CommRangeModeTypeEnum::serialize(accessor.getRangeMode(), node, CommUHF_SATCOM_CommWaveformActivityType_Names::RangeMode_Name, false);
  }
  if (accessor.hasServiceType()) {
    CommSATCOM_ServiceTypeEnum::serialize(accessor.getServiceType(), node, CommUHF_SATCOM_CommWaveformActivityType_Names::ServiceType_Name, false);
  }
  if (accessor.hasConfigurationCode()) {
    ForeignKeyType::serialize(accessor.getConfigurationCode(), node, CommUHF_SATCOM_CommWaveformActivityType_Names::ConfigurationCode_Name);
  }
  if (accessor.hasOrderwireEncryption()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getOrderwireEncryption(), node, CommUHF_SATCOM_CommWaveformActivityType_Names::OrderwireEncryption_Name);
  }
  if (accessor.hasSatelliteKey()) {
    ForeignKeyType::serialize(accessor.getSatelliteKey(), node, CommUHF_SATCOM_CommWaveformActivityType_Names::SatelliteKey_Name);
  }
  {
    const uci::type::CommUHF_SATCOM_CommWaveformActivityType::GuardSlotKey& boundedList = accessor.getGuardSlotKey();
    for (uci::type::CommUHF_SATCOM_CommWaveformActivityType::GuardSlotKey::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ForeignKeyType::serialize(boundedList.at(i), node, CommUHF_SATCOM_CommWaveformActivityType_Names::GuardSlotKey_Name);
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

uci::type::CommUHF_SATCOM_CommWaveformActivityType& CommUHF_SATCOM_CommWaveformActivityType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::CommUHF_SATCOM_CommWaveformActivityType>().release());
}

uci::type::CommUHF_SATCOM_CommWaveformActivityType& CommUHF_SATCOM_CommWaveformActivityType::create(const uci::type::CommUHF_SATCOM_CommWaveformActivityType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::CommUHF_SATCOM_CommWaveformActivityType> newAccessor{boost::make_unique<asb_uci::type::CommUHF_SATCOM_CommWaveformActivityType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void CommUHF_SATCOM_CommWaveformActivityType::destroy(uci::type::CommUHF_SATCOM_CommWaveformActivityType& accessor) {
  delete dynamic_cast<asb_uci::type::CommUHF_SATCOM_CommWaveformActivityType*>(&accessor);
}

} // namespace type

} // namespace uci

