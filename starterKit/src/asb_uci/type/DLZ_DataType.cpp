/** @file DLZ_DataType.cpp
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

#include "../../../include/asb_uci/type/DLZ_DataType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/SteeringUnitVectorType.h"
#include "../../../include/asb_uci/type/Velocity2D_Type.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AnglePositiveType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AngleType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DLZ_DataType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DistanceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SteeringUnitVectorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TimeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Velocity2D_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

DLZ_DataType::DLZ_DataType()
  : targetClosureRate_Accessor{boost::make_unique<Velocity2D_Type>()} {
}

DLZ_DataType::~DLZ_DataType() = default;

void DLZ_DataType::copy(const uci::type::DLZ_DataType& accessor) {
  copyImpl(accessor, false);
}

void DLZ_DataType::copyImpl(const uci::type::DLZ_DataType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const DLZ_DataType&>(accessor);
    if (accessorImpl.hasRangeTurnAndClose()) {
      setRangeTurnAndClose(accessorImpl.getRangeTurnAndClose());
    } else {
      clearRangeTurnAndClose();
    }
    setRangeMinimum(accessorImpl.rangeMinimum_Accessor);
    setRangeTurnAndRun(accessorImpl.rangeTurnAndRun_Accessor);
    setRangeProbabilityOfIntercept(accessorImpl.rangeProbabilityOfIntercept_Accessor);
    setRangeMaxGuidance(accessorImpl.rangeMaxGuidance_Accessor);
    setRangeOptimal(accessorImpl.rangeOptimal_Accessor);
    setRangeMaxAero(accessorImpl.rangeMaxAero_Accessor);
    setTargetClosureRate(*(accessorImpl.targetClosureRate_Accessor));
    setTargetRange(accessorImpl.targetRange_Accessor);
    if (accessorImpl.hasWeaponToTargetSeekerActivationRange()) {
      setWeaponToTargetSeekerActivationRange(accessorImpl.getWeaponToTargetSeekerActivationRange());
    } else {
      clearWeaponToTargetSeekerActivationRange();
    }
    if (accessorImpl.hasWeaponToTargetAutonomousRange()) {
      setWeaponToTargetAutonomousRange(accessorImpl.getWeaponToTargetAutonomousRange());
    } else {
      clearWeaponToTargetAutonomousRange();
    }
    if (accessorImpl.hasWeaponToTargetMPRFRange()) {
      setWeaponToTargetMPRFRange(accessorImpl.getWeaponToTargetMPRFRange());
    } else {
      clearWeaponToTargetMPRFRange();
    }
    if (accessorImpl.hasA_Pole()) {
      setA_Pole(accessorImpl.getA_Pole());
    } else {
      clearA_Pole();
    }
    if (accessorImpl.hasF_Pole()) {
      setF_Pole(accessorImpl.getF_Pole());
    } else {
      clearF_Pole();
    }
    if (accessorImpl.hasM_Pole()) {
      setM_Pole(accessorImpl.getM_Pole());
    } else {
      clearM_Pole();
    }
    if (accessorImpl.hasAllowableSteeringError()) {
      setAllowableSteeringError(accessorImpl.getAllowableSteeringError());
    } else {
      clearAllowableSteeringError();
    }
    if (accessorImpl.steeringUnitVector_Accessor) {
      setSteeringUnitVector(*(accessorImpl.steeringUnitVector_Accessor));
    } else {
      steeringUnitVector_Accessor.reset();
    }
    if (accessorImpl.hasLoftAngle()) {
      setLoftAngle(accessorImpl.getLoftAngle());
    } else {
      clearLoftAngle();
    }
    if (accessorImpl.hasDigitalManuveringCueAngle()) {
      setDigitalManuveringCueAngle(accessorImpl.getDigitalManuveringCueAngle());
    } else {
      clearDigitalManuveringCueAngle();
    }
    setTimeOfIntercept(accessorImpl.timeOfIntercept_Accessor);
    setTimeToRelease(accessorImpl.timeToRelease_Accessor);
    if (accessorImpl.hasTimeOfActivation()) {
      setTimeOfActivation(accessorImpl.getTimeOfActivation());
    } else {
      clearTimeOfActivation();
    }
    if (accessorImpl.hasTimeOfMPRF()) {
      setTimeOfMPRF(accessorImpl.getTimeOfMPRF());
    } else {
      clearTimeOfMPRF();
    }
    if (accessorImpl.hasTimeOfAutonomous()) {
      setTimeOfAutonomous(accessorImpl.getTimeOfAutonomous());
    } else {
      clearTimeOfAutonomous();
    }
  }
}

void DLZ_DataType::reset() noexcept {
  clearRangeTurnAndClose();
  rangeMinimum_Accessor = 0.0;
  rangeTurnAndRun_Accessor = 0.0;
  rangeProbabilityOfIntercept_Accessor = 0.0;
  rangeMaxGuidance_Accessor = 0.0;
  rangeOptimal_Accessor = 0.0;
  rangeMaxAero_Accessor = 0.0;
  if (targetClosureRate_Accessor->getAccessorType() != uci::type::accessorType::velocity2D_Type) {
    targetClosureRate_Accessor = boost::make_unique<Velocity2D_Type>();
  } else {
    targetClosureRate_Accessor->reset();
  }
  targetRange_Accessor = 0.0;
  clearWeaponToTargetSeekerActivationRange();
  clearWeaponToTargetAutonomousRange();
  clearWeaponToTargetMPRFRange();
  clearA_Pole();
  clearF_Pole();
  clearM_Pole();
  clearAllowableSteeringError();
  steeringUnitVector_Accessor.reset();
  clearLoftAngle();
  clearDigitalManuveringCueAngle();
  timeOfIntercept_Accessor = 0;
  timeToRelease_Accessor = 0;
  clearTimeOfActivation();
  clearTimeOfMPRF();
  clearTimeOfAutonomous();
}

uci::type::DistanceTypeValue DLZ_DataType::getRangeTurnAndClose() const {
  if (rangeTurnAndClose_Accessor) {
    return *rangeTurnAndClose_Accessor;
  }
  throw uci::base::UCIException("Error in getRangeTurnAndClose(): An attempt was made to get an optional field that was not enabled, call hasRangeTurnAndClose() to determine if it is safe to call getRangeTurnAndClose()");
}

uci::type::DLZ_DataType& DLZ_DataType::setRangeTurnAndClose(uci::type::DistanceTypeValue value) {
  rangeTurnAndClose_Accessor = value;
  return *this;
}

bool DLZ_DataType::hasRangeTurnAndClose() const noexcept {
  return rangeTurnAndClose_Accessor.has_value();
}

uci::type::DLZ_DataType& DLZ_DataType::clearRangeTurnAndClose() noexcept {
  rangeTurnAndClose_Accessor.reset();
  return *this;
}

uci::type::DistanceTypeValue DLZ_DataType::getRangeMinimum() const {
  return rangeMinimum_Accessor;
}

uci::type::DLZ_DataType& DLZ_DataType::setRangeMinimum(uci::type::DistanceTypeValue value) {
  rangeMinimum_Accessor = value;
  return *this;
}


uci::type::DistanceTypeValue DLZ_DataType::getRangeTurnAndRun() const {
  return rangeTurnAndRun_Accessor;
}

uci::type::DLZ_DataType& DLZ_DataType::setRangeTurnAndRun(uci::type::DistanceTypeValue value) {
  rangeTurnAndRun_Accessor = value;
  return *this;
}


uci::type::DistanceTypeValue DLZ_DataType::getRangeProbabilityOfIntercept() const {
  return rangeProbabilityOfIntercept_Accessor;
}

uci::type::DLZ_DataType& DLZ_DataType::setRangeProbabilityOfIntercept(uci::type::DistanceTypeValue value) {
  rangeProbabilityOfIntercept_Accessor = value;
  return *this;
}


uci::type::DistanceTypeValue DLZ_DataType::getRangeMaxGuidance() const {
  return rangeMaxGuidance_Accessor;
}

uci::type::DLZ_DataType& DLZ_DataType::setRangeMaxGuidance(uci::type::DistanceTypeValue value) {
  rangeMaxGuidance_Accessor = value;
  return *this;
}


uci::type::DistanceTypeValue DLZ_DataType::getRangeOptimal() const {
  return rangeOptimal_Accessor;
}

uci::type::DLZ_DataType& DLZ_DataType::setRangeOptimal(uci::type::DistanceTypeValue value) {
  rangeOptimal_Accessor = value;
  return *this;
}


uci::type::DistanceTypeValue DLZ_DataType::getRangeMaxAero() const {
  return rangeMaxAero_Accessor;
}

uci::type::DLZ_DataType& DLZ_DataType::setRangeMaxAero(uci::type::DistanceTypeValue value) {
  rangeMaxAero_Accessor = value;
  return *this;
}


const uci::type::Velocity2D_Type& DLZ_DataType::getTargetClosureRate() const {
  return *targetClosureRate_Accessor;
}

uci::type::Velocity2D_Type& DLZ_DataType::getTargetClosureRate() {
  return *targetClosureRate_Accessor;
}

uci::type::DLZ_DataType& DLZ_DataType::setTargetClosureRate(const uci::type::Velocity2D_Type& accessor) {
  enableTargetClosureRate(accessor.getAccessorType());
  if (&accessor != targetClosureRate_Accessor.get()) {
    targetClosureRate_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

uci::type::Velocity2D_Type& DLZ_DataType::enableTargetClosureRate(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::velocity2D_Type : type};
  if ((!targetClosureRate_Accessor) || (targetClosureRate_Accessor->getAccessorType() != requestedType)) {
    targetClosureRate_Accessor = Velocity2D_Type::create(requestedType);
    if (!targetClosureRate_Accessor) {
      throw uci::base::UCIException("Error in enableTargetClosureRate(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *targetClosureRate_Accessor;
}

uci::type::DistanceTypeValue DLZ_DataType::getTargetRange() const {
  return targetRange_Accessor;
}

uci::type::DLZ_DataType& DLZ_DataType::setTargetRange(uci::type::DistanceTypeValue value) {
  targetRange_Accessor = value;
  return *this;
}


uci::type::DistanceTypeValue DLZ_DataType::getWeaponToTargetSeekerActivationRange() const {
  if (weaponToTargetSeekerActivationRange_Accessor) {
    return *weaponToTargetSeekerActivationRange_Accessor;
  }
  throw uci::base::UCIException("Error in getWeaponToTargetSeekerActivationRange(): An attempt was made to get an optional field that was not enabled, call hasWeaponToTargetSeekerActivationRange() to determine if it is safe to call getWeaponToTargetSeekerActivationRange()");
}

uci::type::DLZ_DataType& DLZ_DataType::setWeaponToTargetSeekerActivationRange(uci::type::DistanceTypeValue value) {
  weaponToTargetSeekerActivationRange_Accessor = value;
  return *this;
}

bool DLZ_DataType::hasWeaponToTargetSeekerActivationRange() const noexcept {
  return weaponToTargetSeekerActivationRange_Accessor.has_value();
}

uci::type::DLZ_DataType& DLZ_DataType::clearWeaponToTargetSeekerActivationRange() noexcept {
  weaponToTargetSeekerActivationRange_Accessor.reset();
  return *this;
}

uci::type::DistanceTypeValue DLZ_DataType::getWeaponToTargetAutonomousRange() const {
  if (weaponToTargetAutonomousRange_Accessor) {
    return *weaponToTargetAutonomousRange_Accessor;
  }
  throw uci::base::UCIException("Error in getWeaponToTargetAutonomousRange(): An attempt was made to get an optional field that was not enabled, call hasWeaponToTargetAutonomousRange() to determine if it is safe to call getWeaponToTargetAutonomousRange()");
}

uci::type::DLZ_DataType& DLZ_DataType::setWeaponToTargetAutonomousRange(uci::type::DistanceTypeValue value) {
  weaponToTargetAutonomousRange_Accessor = value;
  return *this;
}

bool DLZ_DataType::hasWeaponToTargetAutonomousRange() const noexcept {
  return weaponToTargetAutonomousRange_Accessor.has_value();
}

uci::type::DLZ_DataType& DLZ_DataType::clearWeaponToTargetAutonomousRange() noexcept {
  weaponToTargetAutonomousRange_Accessor.reset();
  return *this;
}

uci::type::DistanceTypeValue DLZ_DataType::getWeaponToTargetMPRFRange() const {
  if (weaponToTargetMPRFRange_Accessor) {
    return *weaponToTargetMPRFRange_Accessor;
  }
  throw uci::base::UCIException("Error in getWeaponToTargetMPRFRange(): An attempt was made to get an optional field that was not enabled, call hasWeaponToTargetMPRFRange() to determine if it is safe to call getWeaponToTargetMPRFRange()");
}

uci::type::DLZ_DataType& DLZ_DataType::setWeaponToTargetMPRFRange(uci::type::DistanceTypeValue value) {
  weaponToTargetMPRFRange_Accessor = value;
  return *this;
}

bool DLZ_DataType::hasWeaponToTargetMPRFRange() const noexcept {
  return weaponToTargetMPRFRange_Accessor.has_value();
}

uci::type::DLZ_DataType& DLZ_DataType::clearWeaponToTargetMPRFRange() noexcept {
  weaponToTargetMPRFRange_Accessor.reset();
  return *this;
}

uci::type::DistanceTypeValue DLZ_DataType::getA_Pole() const {
  if (a_Pole_Accessor) {
    return *a_Pole_Accessor;
  }
  throw uci::base::UCIException("Error in getA_Pole(): An attempt was made to get an optional field that was not enabled, call hasA_Pole() to determine if it is safe to call getA_Pole()");
}

uci::type::DLZ_DataType& DLZ_DataType::setA_Pole(uci::type::DistanceTypeValue value) {
  a_Pole_Accessor = value;
  return *this;
}

bool DLZ_DataType::hasA_Pole() const noexcept {
  return a_Pole_Accessor.has_value();
}

uci::type::DLZ_DataType& DLZ_DataType::clearA_Pole() noexcept {
  a_Pole_Accessor.reset();
  return *this;
}

uci::type::DistanceTypeValue DLZ_DataType::getF_Pole() const {
  if (f_Pole_Accessor) {
    return *f_Pole_Accessor;
  }
  throw uci::base::UCIException("Error in getF_Pole(): An attempt was made to get an optional field that was not enabled, call hasF_Pole() to determine if it is safe to call getF_Pole()");
}

uci::type::DLZ_DataType& DLZ_DataType::setF_Pole(uci::type::DistanceTypeValue value) {
  f_Pole_Accessor = value;
  return *this;
}

bool DLZ_DataType::hasF_Pole() const noexcept {
  return f_Pole_Accessor.has_value();
}

uci::type::DLZ_DataType& DLZ_DataType::clearF_Pole() noexcept {
  f_Pole_Accessor.reset();
  return *this;
}

uci::type::DistanceTypeValue DLZ_DataType::getM_Pole() const {
  if (m_Pole_Accessor) {
    return *m_Pole_Accessor;
  }
  throw uci::base::UCIException("Error in getM_Pole(): An attempt was made to get an optional field that was not enabled, call hasM_Pole() to determine if it is safe to call getM_Pole()");
}

uci::type::DLZ_DataType& DLZ_DataType::setM_Pole(uci::type::DistanceTypeValue value) {
  m_Pole_Accessor = value;
  return *this;
}

bool DLZ_DataType::hasM_Pole() const noexcept {
  return m_Pole_Accessor.has_value();
}

uci::type::DLZ_DataType& DLZ_DataType::clearM_Pole() noexcept {
  m_Pole_Accessor.reset();
  return *this;
}

uci::type::AnglePositiveTypeValue DLZ_DataType::getAllowableSteeringError() const {
  if (allowableSteeringError_Accessor) {
    return *allowableSteeringError_Accessor;
  }
  throw uci::base::UCIException("Error in getAllowableSteeringError(): An attempt was made to get an optional field that was not enabled, call hasAllowableSteeringError() to determine if it is safe to call getAllowableSteeringError()");
}

uci::type::DLZ_DataType& DLZ_DataType::setAllowableSteeringError(uci::type::AnglePositiveTypeValue value) {
  allowableSteeringError_Accessor = value;
  return *this;
}

bool DLZ_DataType::hasAllowableSteeringError() const noexcept {
  return allowableSteeringError_Accessor.has_value();
}

uci::type::DLZ_DataType& DLZ_DataType::clearAllowableSteeringError() noexcept {
  allowableSteeringError_Accessor.reset();
  return *this;
}

uci::type::SteeringUnitVectorType& DLZ_DataType::getSteeringUnitVector_() const {
  if (steeringUnitVector_Accessor) {
    return *steeringUnitVector_Accessor;
  }
  throw uci::base::UCIException("Error in getSteeringUnitVector(): An attempt was made to get an optional field that was not enabled, call hasSteeringUnitVector() to determine if it is safe to call getSteeringUnitVector()");
}

const uci::type::SteeringUnitVectorType& DLZ_DataType::getSteeringUnitVector() const {
  return getSteeringUnitVector_();
}

uci::type::SteeringUnitVectorType& DLZ_DataType::getSteeringUnitVector() {
  return getSteeringUnitVector_();
}

uci::type::DLZ_DataType& DLZ_DataType::setSteeringUnitVector(const uci::type::SteeringUnitVectorType& accessor) {
  enableSteeringUnitVector();
  if (&accessor != steeringUnitVector_Accessor.get()) {
    steeringUnitVector_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool DLZ_DataType::hasSteeringUnitVector() const noexcept {
  return static_cast<bool>(steeringUnitVector_Accessor);
}

uci::type::SteeringUnitVectorType& DLZ_DataType::enableSteeringUnitVector(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::steeringUnitVectorType : type};
  if ((!steeringUnitVector_Accessor) || (steeringUnitVector_Accessor->getAccessorType() != requestedType)) {
    steeringUnitVector_Accessor = SteeringUnitVectorType::create(requestedType);
    if (!steeringUnitVector_Accessor) {
      throw uci::base::UCIException("Error in enableSteeringUnitVector(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *steeringUnitVector_Accessor;
}

uci::type::DLZ_DataType& DLZ_DataType::clearSteeringUnitVector() noexcept {
  steeringUnitVector_Accessor.reset();
  return *this;
}

uci::type::AngleTypeValue DLZ_DataType::getLoftAngle() const {
  if (loftAngle_Accessor) {
    return *loftAngle_Accessor;
  }
  throw uci::base::UCIException("Error in getLoftAngle(): An attempt was made to get an optional field that was not enabled, call hasLoftAngle() to determine if it is safe to call getLoftAngle()");
}

uci::type::DLZ_DataType& DLZ_DataType::setLoftAngle(uci::type::AngleTypeValue value) {
  loftAngle_Accessor = value;
  return *this;
}

bool DLZ_DataType::hasLoftAngle() const noexcept {
  return loftAngle_Accessor.has_value();
}

uci::type::DLZ_DataType& DLZ_DataType::clearLoftAngle() noexcept {
  loftAngle_Accessor.reset();
  return *this;
}

uci::type::AnglePositiveTypeValue DLZ_DataType::getDigitalManuveringCueAngle() const {
  if (digitalManuveringCueAngle_Accessor) {
    return *digitalManuveringCueAngle_Accessor;
  }
  throw uci::base::UCIException("Error in getDigitalManuveringCueAngle(): An attempt was made to get an optional field that was not enabled, call hasDigitalManuveringCueAngle() to determine if it is safe to call getDigitalManuveringCueAngle()");
}

uci::type::DLZ_DataType& DLZ_DataType::setDigitalManuveringCueAngle(uci::type::AnglePositiveTypeValue value) {
  digitalManuveringCueAngle_Accessor = value;
  return *this;
}

bool DLZ_DataType::hasDigitalManuveringCueAngle() const noexcept {
  return digitalManuveringCueAngle_Accessor.has_value();
}

uci::type::DLZ_DataType& DLZ_DataType::clearDigitalManuveringCueAngle() noexcept {
  digitalManuveringCueAngle_Accessor.reset();
  return *this;
}

uci::type::TimeTypeValue DLZ_DataType::getTimeOfIntercept() const {
  return timeOfIntercept_Accessor;
}

uci::type::DLZ_DataType& DLZ_DataType::setTimeOfIntercept(uci::type::TimeTypeValue value) {
  timeOfIntercept_Accessor = value;
  return *this;
}


uci::type::TimeTypeValue DLZ_DataType::getTimeToRelease() const {
  return timeToRelease_Accessor;
}

uci::type::DLZ_DataType& DLZ_DataType::setTimeToRelease(uci::type::TimeTypeValue value) {
  timeToRelease_Accessor = value;
  return *this;
}


uci::type::TimeTypeValue DLZ_DataType::getTimeOfActivation() const {
  if (timeOfActivation_Accessor) {
    return *timeOfActivation_Accessor;
  }
  throw uci::base::UCIException("Error in getTimeOfActivation(): An attempt was made to get an optional field that was not enabled, call hasTimeOfActivation() to determine if it is safe to call getTimeOfActivation()");
}

uci::type::DLZ_DataType& DLZ_DataType::setTimeOfActivation(uci::type::TimeTypeValue value) {
  timeOfActivation_Accessor = value;
  return *this;
}

bool DLZ_DataType::hasTimeOfActivation() const noexcept {
  return timeOfActivation_Accessor.has_value();
}

uci::type::DLZ_DataType& DLZ_DataType::clearTimeOfActivation() noexcept {
  timeOfActivation_Accessor.reset();
  return *this;
}

uci::type::TimeTypeValue DLZ_DataType::getTimeOfMPRF() const {
  if (timeOfMPRF_Accessor) {
    return *timeOfMPRF_Accessor;
  }
  throw uci::base::UCIException("Error in getTimeOfMPRF(): An attempt was made to get an optional field that was not enabled, call hasTimeOfMPRF() to determine if it is safe to call getTimeOfMPRF()");
}

uci::type::DLZ_DataType& DLZ_DataType::setTimeOfMPRF(uci::type::TimeTypeValue value) {
  timeOfMPRF_Accessor = value;
  return *this;
}

bool DLZ_DataType::hasTimeOfMPRF() const noexcept {
  return timeOfMPRF_Accessor.has_value();
}

uci::type::DLZ_DataType& DLZ_DataType::clearTimeOfMPRF() noexcept {
  timeOfMPRF_Accessor.reset();
  return *this;
}

uci::type::TimeTypeValue DLZ_DataType::getTimeOfAutonomous() const {
  if (timeOfAutonomous_Accessor) {
    return *timeOfAutonomous_Accessor;
  }
  throw uci::base::UCIException("Error in getTimeOfAutonomous(): An attempt was made to get an optional field that was not enabled, call hasTimeOfAutonomous() to determine if it is safe to call getTimeOfAutonomous()");
}

uci::type::DLZ_DataType& DLZ_DataType::setTimeOfAutonomous(uci::type::TimeTypeValue value) {
  timeOfAutonomous_Accessor = value;
  return *this;
}

bool DLZ_DataType::hasTimeOfAutonomous() const noexcept {
  return timeOfAutonomous_Accessor.has_value();
}

uci::type::DLZ_DataType& DLZ_DataType::clearTimeOfAutonomous() noexcept {
  timeOfAutonomous_Accessor.reset();
  return *this;
}

std::unique_ptr<DLZ_DataType> DLZ_DataType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::dLZ_DataType : type};
  return (requestedType == uci::type::accessorType::dLZ_DataType) ? boost::make_unique<DLZ_DataType>() : nullptr;
}

/**  */
namespace DLZ_DataType_Names {

constexpr const char* Extern_Type_Name{"DLZ_DataType"};
constexpr const char* RangeTurnAndClose_Name{"RangeTurnAndClose"};
constexpr const char* RangeMinimum_Name{"RangeMinimum"};
constexpr const char* RangeTurnAndRun_Name{"RangeTurnAndRun"};
constexpr const char* RangeProbabilityOfIntercept_Name{"RangeProbabilityOfIntercept"};
constexpr const char* RangeMaxGuidance_Name{"RangeMaxGuidance"};
constexpr const char* RangeOptimal_Name{"RangeOptimal"};
constexpr const char* RangeMaxAero_Name{"RangeMaxAero"};
constexpr const char* TargetClosureRate_Name{"TargetClosureRate"};
constexpr const char* TargetRange_Name{"TargetRange"};
constexpr const char* WeaponToTargetSeekerActivationRange_Name{"WeaponToTargetSeekerActivationRange"};
constexpr const char* WeaponToTargetAutonomousRange_Name{"WeaponToTargetAutonomousRange"};
constexpr const char* WeaponToTargetMPRFRange_Name{"WeaponToTargetMPRFRange"};
constexpr const char* A_Pole_Name{"A_Pole"};
constexpr const char* F_Pole_Name{"F_Pole"};
constexpr const char* M_Pole_Name{"M_Pole"};
constexpr const char* AllowableSteeringError_Name{"AllowableSteeringError"};
constexpr const char* SteeringUnitVector_Name{"SteeringUnitVector"};
constexpr const char* LoftAngle_Name{"LoftAngle"};
constexpr const char* DigitalManuveringCueAngle_Name{"DigitalManuveringCueAngle"};
constexpr const char* TimeOfIntercept_Name{"TimeOfIntercept"};
constexpr const char* TimeToRelease_Name{"TimeToRelease"};
constexpr const char* TimeOfActivation_Name{"TimeOfActivation"};
constexpr const char* TimeOfMPRF_Name{"TimeOfMPRF"};
constexpr const char* TimeOfAutonomous_Name{"TimeOfAutonomous"};

} // namespace DLZ_DataType_Names

void DLZ_DataType::deserialize(const boost::property_tree::ptree& propTree, uci::type::DLZ_DataType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = DLZ_DataType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::RangeTurnAndClose_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRangeTurnAndClose(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::RangeMinimum_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRangeMinimum(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::RangeTurnAndRun_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRangeTurnAndRun(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::RangeProbabilityOfIntercept_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRangeProbabilityOfIntercept(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::RangeMaxGuidance_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRangeMaxGuidance(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::RangeOptimal_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRangeOptimal(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::RangeMaxAero_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRangeMaxAero(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::TargetClosureRate_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableTargetClosureRate(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::TargetRange_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTargetRange(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::WeaponToTargetSeekerActivationRange_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setWeaponToTargetSeekerActivationRange(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::WeaponToTargetAutonomousRange_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setWeaponToTargetAutonomousRange(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::WeaponToTargetMPRFRange_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setWeaponToTargetMPRFRange(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::A_Pole_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setA_Pole(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::F_Pole_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setF_Pole(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::M_Pole_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setM_Pole(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::AllowableSteeringError_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAllowableSteeringError(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::SteeringUnitVector_Name) {
      SteeringUnitVectorType::deserialize(valueType.second, accessor.enableSteeringUnitVector(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::LoftAngle_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setLoftAngle(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::DigitalManuveringCueAngle_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setDigitalManuveringCueAngle(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::TimeOfIntercept_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTimeOfIntercept(asb_uci::util::SerializationHelpers::deserializeTime(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::TimeToRelease_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTimeToRelease(asb_uci::util::SerializationHelpers::deserializeTime(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::TimeOfActivation_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTimeOfActivation(asb_uci::util::SerializationHelpers::deserializeTime(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::TimeOfMPRF_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTimeOfMPRF(asb_uci::util::SerializationHelpers::deserializeTime(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::TimeOfAutonomous_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTimeOfAutonomous(asb_uci::util::SerializationHelpers::deserializeTime(*value));
      }
    }
  }
}

std::string DLZ_DataType::serialize(const uci::type::DLZ_DataType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? DLZ_DataType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, DLZ_DataType_Names::Extern_Type_Name);
  }
  if (accessor.hasRangeTurnAndClose()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getRangeTurnAndClose(), node, DLZ_DataType_Names::RangeTurnAndClose_Name);
  }
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getRangeMinimum(), node, DLZ_DataType_Names::RangeMinimum_Name);
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getRangeTurnAndRun(), node, DLZ_DataType_Names::RangeTurnAndRun_Name);
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getRangeProbabilityOfIntercept(), node, DLZ_DataType_Names::RangeProbabilityOfIntercept_Name);
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getRangeMaxGuidance(), node, DLZ_DataType_Names::RangeMaxGuidance_Name);
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getRangeOptimal(), node, DLZ_DataType_Names::RangeOptimal_Name);
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getRangeMaxAero(), node, DLZ_DataType_Names::RangeMaxAero_Name);
  Velocity2D_Type::serialize(accessor.getTargetClosureRate(), node, DLZ_DataType_Names::TargetClosureRate_Name);
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getTargetRange(), node, DLZ_DataType_Names::TargetRange_Name);
  if (accessor.hasWeaponToTargetSeekerActivationRange()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getWeaponToTargetSeekerActivationRange(), node, DLZ_DataType_Names::WeaponToTargetSeekerActivationRange_Name);
  }
  if (accessor.hasWeaponToTargetAutonomousRange()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getWeaponToTargetAutonomousRange(), node, DLZ_DataType_Names::WeaponToTargetAutonomousRange_Name);
  }
  if (accessor.hasWeaponToTargetMPRFRange()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getWeaponToTargetMPRFRange(), node, DLZ_DataType_Names::WeaponToTargetMPRFRange_Name);
  }
  if (accessor.hasA_Pole()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getA_Pole(), node, DLZ_DataType_Names::A_Pole_Name);
  }
  if (accessor.hasF_Pole()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getF_Pole(), node, DLZ_DataType_Names::F_Pole_Name);
  }
  if (accessor.hasM_Pole()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getM_Pole(), node, DLZ_DataType_Names::M_Pole_Name);
  }
  if (accessor.hasAllowableSteeringError()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getAllowableSteeringError(), node, DLZ_DataType_Names::AllowableSteeringError_Name);
  }
  if (accessor.hasSteeringUnitVector()) {
    SteeringUnitVectorType::serialize(accessor.getSteeringUnitVector(), node, DLZ_DataType_Names::SteeringUnitVector_Name);
  }
  if (accessor.hasLoftAngle()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getLoftAngle(), node, DLZ_DataType_Names::LoftAngle_Name);
  }
  if (accessor.hasDigitalManuveringCueAngle()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getDigitalManuveringCueAngle(), node, DLZ_DataType_Names::DigitalManuveringCueAngle_Name);
  }
  asb_uci::util::SerializationHelpers::serializeTime(accessor.getTimeOfIntercept(), node, DLZ_DataType_Names::TimeOfIntercept_Name);
  asb_uci::util::SerializationHelpers::serializeTime(accessor.getTimeToRelease(), node, DLZ_DataType_Names::TimeToRelease_Name);
  if (accessor.hasTimeOfActivation()) {
    asb_uci::util::SerializationHelpers::serializeTime(accessor.getTimeOfActivation(), node, DLZ_DataType_Names::TimeOfActivation_Name);
  }
  if (accessor.hasTimeOfMPRF()) {
    asb_uci::util::SerializationHelpers::serializeTime(accessor.getTimeOfMPRF(), node, DLZ_DataType_Names::TimeOfMPRF_Name);
  }
  if (accessor.hasTimeOfAutonomous()) {
    asb_uci::util::SerializationHelpers::serializeTime(accessor.getTimeOfAutonomous(), node, DLZ_DataType_Names::TimeOfAutonomous_Name);
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

uci::type::DLZ_DataType& DLZ_DataType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::DLZ_DataType>().release());
}

uci::type::DLZ_DataType& DLZ_DataType::create(const uci::type::DLZ_DataType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::DLZ_DataType> newAccessor{boost::make_unique<asb_uci::type::DLZ_DataType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void DLZ_DataType::destroy(uci::type::DLZ_DataType& accessor) {
  delete dynamic_cast<asb_uci::type::DLZ_DataType*>(&accessor);
}

} // namespace type

} // namespace uci

