/** @file CS_CapabilitiesType.cpp
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

#include "../../../include/asb_uci/type/CS_CapabilitiesType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CS_ObscuraDataType.h"
#include "../../../include/asb_uci/type/CS_SensorDataType.h"
#include "../../../include/asb_uci/type/ForeignKeyType.h"
#include "../../../include/asb_uci/type/FrequencyRangeType.h"
#include "../../../include/asb_uci/type/ModulationEnum.h"
#include "../../../include/asb_uci/type/Point3D_Type.h"
#include "../../../include/asb_uci/type/PolarizationEnum.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AngleHalfType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AngleRateType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CS_CapabilitiesType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CS_ObscuraDataType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CS_SensorDataType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ForeignKeyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/FrequencyRangeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/FrequencyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ModulationEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Point3D_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PolarizationEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PowerType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

CS_CapabilitiesType::CS_CapabilitiesType()
  : subCapabilityName_Accessor{boost::make_unique<ForeignKeyType>()},
    modulation_Accessor{boost::make_unique<Modulation>(0, 62)},
    polarization_Accessor{boost::make_unique<Polarization>(0, 12)} {
}

CS_CapabilitiesType::~CS_CapabilitiesType() = default;

void CS_CapabilitiesType::copy(const uci::type::CS_CapabilitiesType& accessor) {
  copyImpl(accessor, false);
}

void CS_CapabilitiesType::copyImpl(const uci::type::CS_CapabilitiesType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const CS_CapabilitiesType&>(accessor);
    setSubCapabilityName(*(accessorImpl.subCapabilityName_Accessor));
    if (accessorImpl.hasDependency()) {
      setDependency(accessorImpl.getDependency());
    } else {
      clearDependency();
    }
    if (accessorImpl.txFrequency_Accessor) {
      setTxFrequency(*(accessorImpl.txFrequency_Accessor));
    } else {
      txFrequency_Accessor.reset();
    }
    if (accessorImpl.hasTxBandwidth()) {
      setTxBandwidth(accessorImpl.getTxBandwidth());
    } else {
      clearTxBandwidth();
    }
    if (accessorImpl.hasPower()) {
      setPower(accessorImpl.getPower());
    } else {
      clearPower();
    }
    if (accessorImpl.rxFrequency_Accessor) {
      setRxFrequency(*(accessorImpl.rxFrequency_Accessor));
    } else {
      rxFrequency_Accessor.reset();
    }
    if (accessorImpl.hasRxBandwidth()) {
      setRxBandwidth(accessorImpl.getRxBandwidth());
    } else {
      clearRxBandwidth();
    }
    if (accessorImpl.hasAzSlewRate()) {
      setAzSlewRate(accessorImpl.getAzSlewRate());
    } else {
      clearAzSlewRate();
    }
    if (accessorImpl.hasElSlewRate()) {
      setElSlewRate(accessorImpl.getElSlewRate());
    } else {
      clearElSlewRate();
    }
    if (accessorImpl.hasMinElevation()) {
      setMinElevation(accessorImpl.getMinElevation());
    } else {
      clearMinElevation();
    }
    if (accessorImpl.hasMaxElevation()) {
      setMaxElevation(accessorImpl.getMaxElevation());
    } else {
      clearMaxElevation();
    }
    if (accessorImpl.hasCapacity()) {
      setCapacity(accessorImpl.getCapacity());
    } else {
      clearCapacity();
    }
    if (accessorImpl.location_Accessor) {
      setLocation(*(accessorImpl.location_Accessor));
    } else {
      location_Accessor.reset();
    }
    setModulation(*(accessorImpl.modulation_Accessor));
    setPolarization(*(accessorImpl.polarization_Accessor));
    if (accessorImpl.obscuraData_Accessor) {
      setObscuraData(*(accessorImpl.obscuraData_Accessor));
    } else {
      obscuraData_Accessor.reset();
    }
    if (accessorImpl.sensorData_Accessor) {
      setSensorData(*(accessorImpl.sensorData_Accessor));
    } else {
      sensorData_Accessor.reset();
    }
  }
}

void CS_CapabilitiesType::reset() noexcept {
  if (subCapabilityName_Accessor->getAccessorType() != uci::type::accessorType::foreignKeyType) {
    subCapabilityName_Accessor = boost::make_unique<ForeignKeyType>();
  } else {
    subCapabilityName_Accessor->reset();
  }
  clearDependency();
  txFrequency_Accessor.reset();
  clearTxBandwidth();
  clearPower();
  rxFrequency_Accessor.reset();
  clearRxBandwidth();
  clearAzSlewRate();
  clearElSlewRate();
  clearMinElevation();
  clearMaxElevation();
  clearCapacity();
  location_Accessor.reset();
  modulation_Accessor->reset();
  polarization_Accessor->reset();
  obscuraData_Accessor.reset();
  sensorData_Accessor.reset();
}

const uci::type::ForeignKeyType& CS_CapabilitiesType::getSubCapabilityName() const {
  return *subCapabilityName_Accessor;
}

uci::type::ForeignKeyType& CS_CapabilitiesType::getSubCapabilityName() {
  return *subCapabilityName_Accessor;
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::setSubCapabilityName(const uci::type::ForeignKeyType& accessor) {
  enableSubCapabilityName(accessor.getAccessorType());
  if (&accessor != subCapabilityName_Accessor.get()) {
    subCapabilityName_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

uci::type::ForeignKeyType& CS_CapabilitiesType::enableSubCapabilityName(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::foreignKeyType : type};
  if ((!subCapabilityName_Accessor) || (subCapabilityName_Accessor->getAccessorType() != requestedType)) {
    subCapabilityName_Accessor = ForeignKeyType::create(requestedType);
    if (!subCapabilityName_Accessor) {
      throw uci::base::UCIException("Error in enableSubCapabilityName(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *subCapabilityName_Accessor;
}

xs::Int CS_CapabilitiesType::getDependency() const {
  if (dependency_Accessor) {
    return *dependency_Accessor;
  }
  throw uci::base::UCIException("Error in getDependency(): An attempt was made to get an optional field that was not enabled, call hasDependency() to determine if it is safe to call getDependency()");
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::setDependency(xs::Int value) {
  dependency_Accessor = value;
  return *this;
}

bool CS_CapabilitiesType::hasDependency() const noexcept {
  return dependency_Accessor.has_value();
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::clearDependency() noexcept {
  dependency_Accessor.reset();
  return *this;
}

uci::type::FrequencyRangeType& CS_CapabilitiesType::getTxFrequency_() const {
  if (txFrequency_Accessor) {
    return *txFrequency_Accessor;
  }
  throw uci::base::UCIException("Error in getTxFrequency(): An attempt was made to get an optional field that was not enabled, call hasTxFrequency() to determine if it is safe to call getTxFrequency()");
}

const uci::type::FrequencyRangeType& CS_CapabilitiesType::getTxFrequency() const {
  return getTxFrequency_();
}

uci::type::FrequencyRangeType& CS_CapabilitiesType::getTxFrequency() {
  return getTxFrequency_();
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::setTxFrequency(const uci::type::FrequencyRangeType& accessor) {
  enableTxFrequency();
  if (&accessor != txFrequency_Accessor.get()) {
    txFrequency_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool CS_CapabilitiesType::hasTxFrequency() const noexcept {
  return static_cast<bool>(txFrequency_Accessor);
}

uci::type::FrequencyRangeType& CS_CapabilitiesType::enableTxFrequency(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::frequencyRangeType : type};
  if ((!txFrequency_Accessor) || (txFrequency_Accessor->getAccessorType() != requestedType)) {
    txFrequency_Accessor = FrequencyRangeType::create(requestedType);
    if (!txFrequency_Accessor) {
      throw uci::base::UCIException("Error in enableTxFrequency(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *txFrequency_Accessor;
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::clearTxFrequency() noexcept {
  txFrequency_Accessor.reset();
  return *this;
}

uci::type::FrequencyTypeValue CS_CapabilitiesType::getTxBandwidth() const {
  if (txBandwidth_Accessor) {
    return *txBandwidth_Accessor;
  }
  throw uci::base::UCIException("Error in getTxBandwidth(): An attempt was made to get an optional field that was not enabled, call hasTxBandwidth() to determine if it is safe to call getTxBandwidth()");
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::setTxBandwidth(uci::type::FrequencyTypeValue value) {
  txBandwidth_Accessor = value;
  return *this;
}

bool CS_CapabilitiesType::hasTxBandwidth() const noexcept {
  return txBandwidth_Accessor.has_value();
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::clearTxBandwidth() noexcept {
  txBandwidth_Accessor.reset();
  return *this;
}

uci::type::PowerTypeValue CS_CapabilitiesType::getPower() const {
  if (power_Accessor) {
    return *power_Accessor;
  }
  throw uci::base::UCIException("Error in getPower(): An attempt was made to get an optional field that was not enabled, call hasPower() to determine if it is safe to call getPower()");
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::setPower(uci::type::PowerTypeValue value) {
  power_Accessor = value;
  return *this;
}

bool CS_CapabilitiesType::hasPower() const noexcept {
  return power_Accessor.has_value();
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::clearPower() noexcept {
  power_Accessor.reset();
  return *this;
}

uci::type::FrequencyRangeType& CS_CapabilitiesType::getRxFrequency_() const {
  if (rxFrequency_Accessor) {
    return *rxFrequency_Accessor;
  }
  throw uci::base::UCIException("Error in getRxFrequency(): An attempt was made to get an optional field that was not enabled, call hasRxFrequency() to determine if it is safe to call getRxFrequency()");
}

const uci::type::FrequencyRangeType& CS_CapabilitiesType::getRxFrequency() const {
  return getRxFrequency_();
}

uci::type::FrequencyRangeType& CS_CapabilitiesType::getRxFrequency() {
  return getRxFrequency_();
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::setRxFrequency(const uci::type::FrequencyRangeType& accessor) {
  enableRxFrequency();
  if (&accessor != rxFrequency_Accessor.get()) {
    rxFrequency_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool CS_CapabilitiesType::hasRxFrequency() const noexcept {
  return static_cast<bool>(rxFrequency_Accessor);
}

uci::type::FrequencyRangeType& CS_CapabilitiesType::enableRxFrequency(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::frequencyRangeType : type};
  if ((!rxFrequency_Accessor) || (rxFrequency_Accessor->getAccessorType() != requestedType)) {
    rxFrequency_Accessor = FrequencyRangeType::create(requestedType);
    if (!rxFrequency_Accessor) {
      throw uci::base::UCIException("Error in enableRxFrequency(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *rxFrequency_Accessor;
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::clearRxFrequency() noexcept {
  rxFrequency_Accessor.reset();
  return *this;
}

uci::type::FrequencyTypeValue CS_CapabilitiesType::getRxBandwidth() const {
  if (rxBandwidth_Accessor) {
    return *rxBandwidth_Accessor;
  }
  throw uci::base::UCIException("Error in getRxBandwidth(): An attempt was made to get an optional field that was not enabled, call hasRxBandwidth() to determine if it is safe to call getRxBandwidth()");
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::setRxBandwidth(uci::type::FrequencyTypeValue value) {
  rxBandwidth_Accessor = value;
  return *this;
}

bool CS_CapabilitiesType::hasRxBandwidth() const noexcept {
  return rxBandwidth_Accessor.has_value();
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::clearRxBandwidth() noexcept {
  rxBandwidth_Accessor.reset();
  return *this;
}

uci::type::AngleRateTypeValue CS_CapabilitiesType::getAzSlewRate() const {
  if (azSlewRate_Accessor) {
    return *azSlewRate_Accessor;
  }
  throw uci::base::UCIException("Error in getAzSlewRate(): An attempt was made to get an optional field that was not enabled, call hasAzSlewRate() to determine if it is safe to call getAzSlewRate()");
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::setAzSlewRate(uci::type::AngleRateTypeValue value) {
  azSlewRate_Accessor = value;
  return *this;
}

bool CS_CapabilitiesType::hasAzSlewRate() const noexcept {
  return azSlewRate_Accessor.has_value();
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::clearAzSlewRate() noexcept {
  azSlewRate_Accessor.reset();
  return *this;
}

uci::type::AngleRateTypeValue CS_CapabilitiesType::getElSlewRate() const {
  if (elSlewRate_Accessor) {
    return *elSlewRate_Accessor;
  }
  throw uci::base::UCIException("Error in getElSlewRate(): An attempt was made to get an optional field that was not enabled, call hasElSlewRate() to determine if it is safe to call getElSlewRate()");
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::setElSlewRate(uci::type::AngleRateTypeValue value) {
  elSlewRate_Accessor = value;
  return *this;
}

bool CS_CapabilitiesType::hasElSlewRate() const noexcept {
  return elSlewRate_Accessor.has_value();
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::clearElSlewRate() noexcept {
  elSlewRate_Accessor.reset();
  return *this;
}

uci::type::AngleHalfTypeValue CS_CapabilitiesType::getMinElevation() const {
  if (minElevation_Accessor) {
    return *minElevation_Accessor;
  }
  throw uci::base::UCIException("Error in getMinElevation(): An attempt was made to get an optional field that was not enabled, call hasMinElevation() to determine if it is safe to call getMinElevation()");
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::setMinElevation(uci::type::AngleHalfTypeValue value) {
  minElevation_Accessor = value;
  return *this;
}

bool CS_CapabilitiesType::hasMinElevation() const noexcept {
  return minElevation_Accessor.has_value();
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::clearMinElevation() noexcept {
  minElevation_Accessor.reset();
  return *this;
}

uci::type::AngleHalfTypeValue CS_CapabilitiesType::getMaxElevation() const {
  if (maxElevation_Accessor) {
    return *maxElevation_Accessor;
  }
  throw uci::base::UCIException("Error in getMaxElevation(): An attempt was made to get an optional field that was not enabled, call hasMaxElevation() to determine if it is safe to call getMaxElevation()");
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::setMaxElevation(uci::type::AngleHalfTypeValue value) {
  maxElevation_Accessor = value;
  return *this;
}

bool CS_CapabilitiesType::hasMaxElevation() const noexcept {
  return maxElevation_Accessor.has_value();
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::clearMaxElevation() noexcept {
  maxElevation_Accessor.reset();
  return *this;
}

xs::UnsignedInt CS_CapabilitiesType::getCapacity() const {
  if (capacity_Accessor) {
    return *capacity_Accessor;
  }
  throw uci::base::UCIException("Error in getCapacity(): An attempt was made to get an optional field that was not enabled, call hasCapacity() to determine if it is safe to call getCapacity()");
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::setCapacity(xs::UnsignedInt value) {
  capacity_Accessor = value;
  return *this;
}

bool CS_CapabilitiesType::hasCapacity() const noexcept {
  return capacity_Accessor.has_value();
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::clearCapacity() noexcept {
  capacity_Accessor.reset();
  return *this;
}

uci::type::Point3D_Type& CS_CapabilitiesType::getLocation_() const {
  if (location_Accessor) {
    return *location_Accessor;
  }
  throw uci::base::UCIException("Error in getLocation(): An attempt was made to get an optional field that was not enabled, call hasLocation() to determine if it is safe to call getLocation()");
}

const uci::type::Point3D_Type& CS_CapabilitiesType::getLocation() const {
  return getLocation_();
}

uci::type::Point3D_Type& CS_CapabilitiesType::getLocation() {
  return getLocation_();
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::setLocation(const uci::type::Point3D_Type& accessor) {
  enableLocation(accessor.getAccessorType());
  if (&accessor != location_Accessor.get()) {
    location_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool CS_CapabilitiesType::hasLocation() const noexcept {
  return static_cast<bool>(location_Accessor);
}

uci::type::Point3D_Type& CS_CapabilitiesType::enableLocation(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::point3D_Type : type};
  if ((!location_Accessor) || (location_Accessor->getAccessorType() != requestedType)) {
    location_Accessor = Point3D_Type::create(requestedType);
    if (!location_Accessor) {
      throw uci::base::UCIException("Error in enableLocation(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *location_Accessor;
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::clearLocation() noexcept {
  location_Accessor.reset();
  return *this;
}

const uci::type::CS_CapabilitiesType::Modulation& CS_CapabilitiesType::getModulation() const {
  return *modulation_Accessor;
}

uci::type::CS_CapabilitiesType::Modulation& CS_CapabilitiesType::getModulation() {
  return *modulation_Accessor;
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::setModulation(const uci::type::CS_CapabilitiesType::Modulation& accessor) {
  if (&accessor != modulation_Accessor.get()) {
    modulation_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::CS_CapabilitiesType::Polarization& CS_CapabilitiesType::getPolarization() const {
  return *polarization_Accessor;
}

uci::type::CS_CapabilitiesType::Polarization& CS_CapabilitiesType::getPolarization() {
  return *polarization_Accessor;
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::setPolarization(const uci::type::CS_CapabilitiesType::Polarization& accessor) {
  if (&accessor != polarization_Accessor.get()) {
    polarization_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::CS_ObscuraDataType& CS_CapabilitiesType::getObscuraData_() const {
  if (obscuraData_Accessor) {
    return *obscuraData_Accessor;
  }
  throw uci::base::UCIException("Error in getObscuraData(): An attempt was made to get an optional field that was not enabled, call hasObscuraData() to determine if it is safe to call getObscuraData()");
}

const uci::type::CS_ObscuraDataType& CS_CapabilitiesType::getObscuraData() const {
  return getObscuraData_();
}

uci::type::CS_ObscuraDataType& CS_CapabilitiesType::getObscuraData() {
  return getObscuraData_();
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::setObscuraData(const uci::type::CS_ObscuraDataType& accessor) {
  enableObscuraData();
  if (&accessor != obscuraData_Accessor.get()) {
    obscuraData_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool CS_CapabilitiesType::hasObscuraData() const noexcept {
  return static_cast<bool>(obscuraData_Accessor);
}

uci::type::CS_ObscuraDataType& CS_CapabilitiesType::enableObscuraData(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::cS_ObscuraDataType : type};
  if ((!obscuraData_Accessor) || (obscuraData_Accessor->getAccessorType() != requestedType)) {
    obscuraData_Accessor = CS_ObscuraDataType::create(requestedType);
    if (!obscuraData_Accessor) {
      throw uci::base::UCIException("Error in enableObscuraData(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *obscuraData_Accessor;
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::clearObscuraData() noexcept {
  obscuraData_Accessor.reset();
  return *this;
}

uci::type::CS_SensorDataType& CS_CapabilitiesType::getSensorData_() const {
  if (sensorData_Accessor) {
    return *sensorData_Accessor;
  }
  throw uci::base::UCIException("Error in getSensorData(): An attempt was made to get an optional field that was not enabled, call hasSensorData() to determine if it is safe to call getSensorData()");
}

const uci::type::CS_SensorDataType& CS_CapabilitiesType::getSensorData() const {
  return getSensorData_();
}

uci::type::CS_SensorDataType& CS_CapabilitiesType::getSensorData() {
  return getSensorData_();
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::setSensorData(const uci::type::CS_SensorDataType& accessor) {
  enableSensorData();
  if (&accessor != sensorData_Accessor.get()) {
    sensorData_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool CS_CapabilitiesType::hasSensorData() const noexcept {
  return static_cast<bool>(sensorData_Accessor);
}

uci::type::CS_SensorDataType& CS_CapabilitiesType::enableSensorData(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::cS_SensorDataType : type};
  if ((!sensorData_Accessor) || (sensorData_Accessor->getAccessorType() != requestedType)) {
    sensorData_Accessor = CS_SensorDataType::create(requestedType);
    if (!sensorData_Accessor) {
      throw uci::base::UCIException("Error in enableSensorData(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *sensorData_Accessor;
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::clearSensorData() noexcept {
  sensorData_Accessor.reset();
  return *this;
}

std::unique_ptr<CS_CapabilitiesType> CS_CapabilitiesType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::cS_CapabilitiesType : type};
  return (requestedType == uci::type::accessorType::cS_CapabilitiesType) ? boost::make_unique<CS_CapabilitiesType>() : nullptr;
}

/**  */
namespace CS_CapabilitiesType_Names {

constexpr const char* Extern_Type_Name{"CS_CapabilitiesType"};
constexpr const char* SubCapabilityName_Name{"SubCapabilityName"};
constexpr const char* Dependency_Name{"Dependency"};
constexpr const char* TxFrequency_Name{"TxFrequency"};
constexpr const char* TxBandwidth_Name{"TxBandwidth"};
constexpr const char* Power_Name{"Power"};
constexpr const char* RxFrequency_Name{"RxFrequency"};
constexpr const char* RxBandwidth_Name{"RxBandwidth"};
constexpr const char* AzSlewRate_Name{"AzSlewRate"};
constexpr const char* ElSlewRate_Name{"ElSlewRate"};
constexpr const char* MinElevation_Name{"MinElevation"};
constexpr const char* MaxElevation_Name{"MaxElevation"};
constexpr const char* Capacity_Name{"Capacity"};
constexpr const char* Location_Name{"Location"};
constexpr const char* Modulation_Name{"Modulation"};
constexpr const char* Polarization_Name{"Polarization"};
constexpr const char* ObscuraData_Name{"ObscuraData"};
constexpr const char* SensorData_Name{"SensorData"};

} // namespace CS_CapabilitiesType_Names

void CS_CapabilitiesType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CS_CapabilitiesType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CS_CapabilitiesType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CS_CapabilitiesType_Names::SubCapabilityName_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableSubCapabilityName(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CS_CapabilitiesType_Names::Dependency_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setDependency(asb_uci::util::SerializationHelpers::deserializeInt(*value));
      }
    } else if (valueType.first == nsPrefix + CS_CapabilitiesType_Names::TxFrequency_Name) {
      FrequencyRangeType::deserialize(valueType.second, accessor.enableTxFrequency(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CS_CapabilitiesType_Names::TxBandwidth_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTxBandwidth(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + CS_CapabilitiesType_Names::Power_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPower(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + CS_CapabilitiesType_Names::RxFrequency_Name) {
      FrequencyRangeType::deserialize(valueType.second, accessor.enableRxFrequency(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CS_CapabilitiesType_Names::RxBandwidth_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRxBandwidth(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + CS_CapabilitiesType_Names::AzSlewRate_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAzSlewRate(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + CS_CapabilitiesType_Names::ElSlewRate_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setElSlewRate(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + CS_CapabilitiesType_Names::MinElevation_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMinElevation(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + CS_CapabilitiesType_Names::MaxElevation_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMaxElevation(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + CS_CapabilitiesType_Names::Capacity_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setCapacity(asb_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    } else if (valueType.first == nsPrefix + CS_CapabilitiesType_Names::Location_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableLocation(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CS_CapabilitiesType_Names::Modulation_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::CS_CapabilitiesType::Modulation& boundedList = accessor.getModulation();
        const uci::type::CS_CapabilitiesType::Modulation::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + CS_CapabilitiesType_Names::Polarization_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::CS_CapabilitiesType::Polarization& boundedList = accessor.getPolarization();
        const uci::type::CS_CapabilitiesType::Polarization::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + CS_CapabilitiesType_Names::ObscuraData_Name) {
      CS_ObscuraDataType::deserialize(valueType.second, accessor.enableObscuraData(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CS_CapabilitiesType_Names::SensorData_Name) {
      CS_SensorDataType::deserialize(valueType.second, accessor.enableSensorData(), nodeName, nsPrefix);
    }
  }
}

std::string CS_CapabilitiesType::serialize(const uci::type::CS_CapabilitiesType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? CS_CapabilitiesType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, CS_CapabilitiesType_Names::Extern_Type_Name);
  }
  ForeignKeyType::serialize(accessor.getSubCapabilityName(), node, CS_CapabilitiesType_Names::SubCapabilityName_Name);
  if (accessor.hasDependency()) {
    asb_uci::util::SerializationHelpers::serializeInt(accessor.getDependency(), node, CS_CapabilitiesType_Names::Dependency_Name);
  }
  if (accessor.hasTxFrequency()) {
    FrequencyRangeType::serialize(accessor.getTxFrequency(), node, CS_CapabilitiesType_Names::TxFrequency_Name);
  }
  if (accessor.hasTxBandwidth()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getTxBandwidth(), node, CS_CapabilitiesType_Names::TxBandwidth_Name);
  }
  if (accessor.hasPower()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getPower(), node, CS_CapabilitiesType_Names::Power_Name);
  }
  if (accessor.hasRxFrequency()) {
    FrequencyRangeType::serialize(accessor.getRxFrequency(), node, CS_CapabilitiesType_Names::RxFrequency_Name);
  }
  if (accessor.hasRxBandwidth()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getRxBandwidth(), node, CS_CapabilitiesType_Names::RxBandwidth_Name);
  }
  if (accessor.hasAzSlewRate()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getAzSlewRate(), node, CS_CapabilitiesType_Names::AzSlewRate_Name);
  }
  if (accessor.hasElSlewRate()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getElSlewRate(), node, CS_CapabilitiesType_Names::ElSlewRate_Name);
  }
  if (accessor.hasMinElevation()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getMinElevation(), node, CS_CapabilitiesType_Names::MinElevation_Name);
  }
  if (accessor.hasMaxElevation()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getMaxElevation(), node, CS_CapabilitiesType_Names::MaxElevation_Name);
  }
  if (accessor.hasCapacity()) {
    asb_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getCapacity(), node, CS_CapabilitiesType_Names::Capacity_Name);
  }
  if (accessor.hasLocation()) {
    Point3D_Type::serialize(accessor.getLocation(), node, CS_CapabilitiesType_Names::Location_Name);
  }
  {
    const uci::type::CS_CapabilitiesType::Modulation& boundedList = accessor.getModulation();
    for (uci::type::CS_CapabilitiesType::Modulation::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      ModulationEnum::serialize(boundedList.at(i), node, CS_CapabilitiesType_Names::Modulation_Name, false);
    }
  }
  {
    const uci::type::CS_CapabilitiesType::Polarization& boundedList = accessor.getPolarization();
    for (uci::type::CS_CapabilitiesType::Polarization::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      PolarizationEnum::serialize(boundedList.at(i), node, CS_CapabilitiesType_Names::Polarization_Name, false);
    }
  }
  if (accessor.hasObscuraData()) {
    CS_ObscuraDataType::serialize(accessor.getObscuraData(), node, CS_CapabilitiesType_Names::ObscuraData_Name);
  }
  if (accessor.hasSensorData()) {
    CS_SensorDataType::serialize(accessor.getSensorData(), node, CS_CapabilitiesType_Names::SensorData_Name);
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

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::CS_CapabilitiesType>().release());
}

uci::type::CS_CapabilitiesType& CS_CapabilitiesType::create(const uci::type::CS_CapabilitiesType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::CS_CapabilitiesType> newAccessor{boost::make_unique<asb_uci::type::CS_CapabilitiesType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void CS_CapabilitiesType::destroy(uci::type::CS_CapabilitiesType& accessor) {
  delete dynamic_cast<asb_uci::type::CS_CapabilitiesType*>(&accessor);
}

} // namespace type

} // namespace uci

