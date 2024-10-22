/** @file MeasurementType.cpp
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

#include "../../../include/asb_uci/type/MeasurementType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/EntityID_Type.h"
#include "../../../include/asb_uci/type/ForeignKeyType.h"
#include "../../../include/asb_uci/type/IdentityConfidenceType.h"
#include "../../../include/asb_uci/type/MeasurementCharacteristicsType.h"
#include "../../../include/asb_uci/type/MeasurementGroupID_Type.h"
#include "../../../include/asb_uci/type/MeasurementID_Type.h"
#include "../../../include/asb_uci/type/MeasurementKinematicsChoiceType.h"
#include "../../../include/asb_uci/type/ObjectKinematicsChoiceType.h"
#include "../../../include/asb_uci/type/PulseDataID_Type.h"
#include "../../../include/asb_uci/type/SensorKinematicsChoiceType.h"
#include "../../../include/asb_uci/type/SignalID_Type.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EntityID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ForeignKeyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IdentityConfidenceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MeasurementCharacteristicsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MeasurementGroupID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MeasurementID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MeasurementKinematicsChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MeasurementType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ObjectKinematicsChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PulseDataID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SensorKinematicsChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SignalID_Type.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

MeasurementType::MeasurementType()
  : measurementID_Accessor{boost::make_unique<MeasurementID_Type>()},
    measurementGroupID_Accessor{boost::make_unique<MeasurementGroupID>(0, SIZE_MAX)},
    pulseDataID_Accessor{boost::make_unique<PulseDataID>(0, SIZE_MAX)},
    signalID_Accessor{boost::make_unique<SignalID>(0, SIZE_MAX)} {
}

MeasurementType::~MeasurementType() = default;

void MeasurementType::copy(const uci::type::MeasurementType& accessor) {
  copyImpl(accessor, false);
}

void MeasurementType::copyImpl(const uci::type::MeasurementType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const MeasurementType&>(accessor);
    setMeasurementID(*(accessorImpl.measurementID_Accessor));
    setIndependentMeasurement(accessorImpl.independentMeasurement_Accessor);
    if (accessorImpl.hasUncorrelatedMeasurement()) {
      setUncorrelatedMeasurement(accessorImpl.getUncorrelatedMeasurement());
    } else {
      clearUncorrelatedMeasurement();
    }
    setTimestamp(accessorImpl.timestamp_Accessor);
    setMeasurementGroupID(*(accessorImpl.measurementGroupID_Accessor));
    if (accessorImpl.localTrackIdentifier_Accessor) {
      setLocalTrackIdentifier(*(accessorImpl.localTrackIdentifier_Accessor));
    } else {
      localTrackIdentifier_Accessor.reset();
    }
    if (accessorImpl.entityID_Accessor) {
      setEntityID(*(accessorImpl.entityID_Accessor));
    } else {
      entityID_Accessor.reset();
    }
    setPulseDataID(*(accessorImpl.pulseDataID_Accessor));
    setSignalID(*(accessorImpl.signalID_Accessor));
    if (accessorImpl.objectIdentity_Accessor) {
      setObjectIdentity(*(accessorImpl.objectIdentity_Accessor));
    } else {
      objectIdentity_Accessor.reset();
    }
    if (accessorImpl.predictedObjectKinematics_Accessor) {
      setPredictedObjectKinematics(*(accessorImpl.predictedObjectKinematics_Accessor));
    } else {
      predictedObjectKinematics_Accessor.reset();
    }
    if (accessorImpl.measurementCharacteristics_Accessor) {
      setMeasurementCharacteristics(*(accessorImpl.measurementCharacteristics_Accessor));
    } else {
      measurementCharacteristics_Accessor.reset();
    }
    if (accessorImpl.measurementKinematics_Accessor) {
      setMeasurementKinematics(*(accessorImpl.measurementKinematics_Accessor));
    } else {
      measurementKinematics_Accessor.reset();
    }
    if (accessorImpl.referenceKinematics_Accessor) {
      setReferenceKinematics(*(accessorImpl.referenceKinematics_Accessor));
    } else {
      referenceKinematics_Accessor.reset();
    }
  }
}

void MeasurementType::reset() noexcept {
  measurementID_Accessor->reset();
  independentMeasurement_Accessor = false;
  clearUncorrelatedMeasurement();
  timestamp_Accessor = 0;
  measurementGroupID_Accessor->reset();
  localTrackIdentifier_Accessor.reset();
  entityID_Accessor.reset();
  pulseDataID_Accessor->reset();
  signalID_Accessor->reset();
  objectIdentity_Accessor.reset();
  predictedObjectKinematics_Accessor.reset();
  measurementCharacteristics_Accessor.reset();
  measurementKinematics_Accessor.reset();
  referenceKinematics_Accessor.reset();
}

const uci::type::MeasurementID_Type& MeasurementType::getMeasurementID() const {
  return *measurementID_Accessor;
}

uci::type::MeasurementID_Type& MeasurementType::getMeasurementID() {
  return *measurementID_Accessor;
}

uci::type::MeasurementType& MeasurementType::setMeasurementID(const uci::type::MeasurementID_Type& accessor) {
  if (&accessor != measurementID_Accessor.get()) {
    measurementID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

xs::Boolean MeasurementType::getIndependentMeasurement() const {
  return independentMeasurement_Accessor;
}

uci::type::MeasurementType& MeasurementType::setIndependentMeasurement(xs::Boolean value) {
  independentMeasurement_Accessor = value;
  return *this;
}


xs::Boolean MeasurementType::getUncorrelatedMeasurement() const {
  if (uncorrelatedMeasurement_Accessor) {
    return *uncorrelatedMeasurement_Accessor;
  }
  throw uci::base::UCIException("Error in getUncorrelatedMeasurement(): An attempt was made to get an optional field that was not enabled, call hasUncorrelatedMeasurement() to determine if it is safe to call getUncorrelatedMeasurement()");
}

uci::type::MeasurementType& MeasurementType::setUncorrelatedMeasurement(xs::Boolean value) {
  uncorrelatedMeasurement_Accessor = value;
  return *this;
}

bool MeasurementType::hasUncorrelatedMeasurement() const noexcept {
  return uncorrelatedMeasurement_Accessor.has_value();
}

uci::type::MeasurementType& MeasurementType::clearUncorrelatedMeasurement() noexcept {
  uncorrelatedMeasurement_Accessor.reset();
  return *this;
}

uci::type::DateTimeTypeValue MeasurementType::getTimestamp() const {
  return timestamp_Accessor;
}

uci::type::MeasurementType& MeasurementType::setTimestamp(uci::type::DateTimeTypeValue value) {
  timestamp_Accessor = value;
  return *this;
}


const uci::type::MeasurementType::MeasurementGroupID& MeasurementType::getMeasurementGroupID() const {
  return *measurementGroupID_Accessor;
}

uci::type::MeasurementType::MeasurementGroupID& MeasurementType::getMeasurementGroupID() {
  return *measurementGroupID_Accessor;
}

uci::type::MeasurementType& MeasurementType::setMeasurementGroupID(const uci::type::MeasurementType::MeasurementGroupID& accessor) {
  if (&accessor != measurementGroupID_Accessor.get()) {
    measurementGroupID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ForeignKeyType& MeasurementType::getLocalTrackIdentifier_() const {
  if (localTrackIdentifier_Accessor) {
    return *localTrackIdentifier_Accessor;
  }
  throw uci::base::UCIException("Error in getLocalTrackIdentifier(): An attempt was made to get an optional field that was not enabled, call hasLocalTrackIdentifier() to determine if it is safe to call getLocalTrackIdentifier()");
}

const uci::type::ForeignKeyType& MeasurementType::getLocalTrackIdentifier() const {
  return getLocalTrackIdentifier_();
}

uci::type::ForeignKeyType& MeasurementType::getLocalTrackIdentifier() {
  return getLocalTrackIdentifier_();
}

uci::type::MeasurementType& MeasurementType::setLocalTrackIdentifier(const uci::type::ForeignKeyType& accessor) {
  enableLocalTrackIdentifier(accessor.getAccessorType());
  if (&accessor != localTrackIdentifier_Accessor.get()) {
    localTrackIdentifier_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool MeasurementType::hasLocalTrackIdentifier() const noexcept {
  return static_cast<bool>(localTrackIdentifier_Accessor);
}

uci::type::ForeignKeyType& MeasurementType::enableLocalTrackIdentifier(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::foreignKeyType : type};
  if ((!localTrackIdentifier_Accessor) || (localTrackIdentifier_Accessor->getAccessorType() != requestedType)) {
    localTrackIdentifier_Accessor = ForeignKeyType::create(requestedType);
    if (!localTrackIdentifier_Accessor) {
      throw uci::base::UCIException("Error in enableLocalTrackIdentifier(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *localTrackIdentifier_Accessor;
}

uci::type::MeasurementType& MeasurementType::clearLocalTrackIdentifier() noexcept {
  localTrackIdentifier_Accessor.reset();
  return *this;
}

uci::type::EntityID_Type& MeasurementType::getEntityID_() const {
  if (entityID_Accessor) {
    return *entityID_Accessor;
  }
  throw uci::base::UCIException("Error in getEntityID(): An attempt was made to get an optional field that was not enabled, call hasEntityID() to determine if it is safe to call getEntityID()");
}

const uci::type::EntityID_Type& MeasurementType::getEntityID() const {
  return getEntityID_();
}

uci::type::EntityID_Type& MeasurementType::getEntityID() {
  return getEntityID_();
}

uci::type::MeasurementType& MeasurementType::setEntityID(const uci::type::EntityID_Type& accessor) {
  enableEntityID(accessor.getAccessorType());
  if (&accessor != entityID_Accessor.get()) {
    entityID_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool MeasurementType::hasEntityID() const noexcept {
  return static_cast<bool>(entityID_Accessor);
}

uci::type::EntityID_Type& MeasurementType::enableEntityID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::entityID_Type : type};
  if ((!entityID_Accessor) || (entityID_Accessor->getAccessorType() != requestedType)) {
    entityID_Accessor = EntityID_Type::create(requestedType);
    if (!entityID_Accessor) {
      throw uci::base::UCIException("Error in enableEntityID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *entityID_Accessor;
}

uci::type::MeasurementType& MeasurementType::clearEntityID() noexcept {
  entityID_Accessor.reset();
  return *this;
}

const uci::type::MeasurementType::PulseDataID& MeasurementType::getPulseDataID() const {
  return *pulseDataID_Accessor;
}

uci::type::MeasurementType::PulseDataID& MeasurementType::getPulseDataID() {
  return *pulseDataID_Accessor;
}

uci::type::MeasurementType& MeasurementType::setPulseDataID(const uci::type::MeasurementType::PulseDataID& accessor) {
  if (&accessor != pulseDataID_Accessor.get()) {
    pulseDataID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::MeasurementType::SignalID& MeasurementType::getSignalID() const {
  return *signalID_Accessor;
}

uci::type::MeasurementType::SignalID& MeasurementType::getSignalID() {
  return *signalID_Accessor;
}

uci::type::MeasurementType& MeasurementType::setSignalID(const uci::type::MeasurementType::SignalID& accessor) {
  if (&accessor != signalID_Accessor.get()) {
    signalID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::IdentityConfidenceType& MeasurementType::getObjectIdentity_() const {
  if (objectIdentity_Accessor) {
    return *objectIdentity_Accessor;
  }
  throw uci::base::UCIException("Error in getObjectIdentity(): An attempt was made to get an optional field that was not enabled, call hasObjectIdentity() to determine if it is safe to call getObjectIdentity()");
}

const uci::type::IdentityConfidenceType& MeasurementType::getObjectIdentity() const {
  return getObjectIdentity_();
}

uci::type::IdentityConfidenceType& MeasurementType::getObjectIdentity() {
  return getObjectIdentity_();
}

uci::type::MeasurementType& MeasurementType::setObjectIdentity(const uci::type::IdentityConfidenceType& accessor) {
  enableObjectIdentity(accessor.getAccessorType());
  if (&accessor != objectIdentity_Accessor.get()) {
    objectIdentity_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool MeasurementType::hasObjectIdentity() const noexcept {
  return static_cast<bool>(objectIdentity_Accessor);
}

uci::type::IdentityConfidenceType& MeasurementType::enableObjectIdentity(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::identityConfidenceType : type};
  if ((!objectIdentity_Accessor) || (objectIdentity_Accessor->getAccessorType() != requestedType)) {
    objectIdentity_Accessor = IdentityConfidenceType::create(requestedType);
    if (!objectIdentity_Accessor) {
      throw uci::base::UCIException("Error in enableObjectIdentity(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *objectIdentity_Accessor;
}

uci::type::MeasurementType& MeasurementType::clearObjectIdentity() noexcept {
  objectIdentity_Accessor.reset();
  return *this;
}

uci::type::ObjectKinematicsChoiceType& MeasurementType::getPredictedObjectKinematics_() const {
  if (predictedObjectKinematics_Accessor) {
    return *predictedObjectKinematics_Accessor;
  }
  throw uci::base::UCIException("Error in getPredictedObjectKinematics(): An attempt was made to get an optional field that was not enabled, call hasPredictedObjectKinematics() to determine if it is safe to call getPredictedObjectKinematics()");
}

const uci::type::ObjectKinematicsChoiceType& MeasurementType::getPredictedObjectKinematics() const {
  return getPredictedObjectKinematics_();
}

uci::type::ObjectKinematicsChoiceType& MeasurementType::getPredictedObjectKinematics() {
  return getPredictedObjectKinematics_();
}

uci::type::MeasurementType& MeasurementType::setPredictedObjectKinematics(const uci::type::ObjectKinematicsChoiceType& accessor) {
  enablePredictedObjectKinematics();
  if (&accessor != predictedObjectKinematics_Accessor.get()) {
    predictedObjectKinematics_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool MeasurementType::hasPredictedObjectKinematics() const noexcept {
  return static_cast<bool>(predictedObjectKinematics_Accessor);
}

uci::type::ObjectKinematicsChoiceType& MeasurementType::enablePredictedObjectKinematics(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::objectKinematicsChoiceType : type};
  if ((!predictedObjectKinematics_Accessor) || (predictedObjectKinematics_Accessor->getAccessorType() != requestedType)) {
    predictedObjectKinematics_Accessor = ObjectKinematicsChoiceType::create(requestedType);
    if (!predictedObjectKinematics_Accessor) {
      throw uci::base::UCIException("Error in enablePredictedObjectKinematics(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *predictedObjectKinematics_Accessor;
}

uci::type::MeasurementType& MeasurementType::clearPredictedObjectKinematics() noexcept {
  predictedObjectKinematics_Accessor.reset();
  return *this;
}

uci::type::MeasurementCharacteristicsType& MeasurementType::getMeasurementCharacteristics_() const {
  if (measurementCharacteristics_Accessor) {
    return *measurementCharacteristics_Accessor;
  }
  throw uci::base::UCIException("Error in getMeasurementCharacteristics(): An attempt was made to get an optional field that was not enabled, call hasMeasurementCharacteristics() to determine if it is safe to call getMeasurementCharacteristics()");
}

const uci::type::MeasurementCharacteristicsType& MeasurementType::getMeasurementCharacteristics() const {
  return getMeasurementCharacteristics_();
}

uci::type::MeasurementCharacteristicsType& MeasurementType::getMeasurementCharacteristics() {
  return getMeasurementCharacteristics_();
}

uci::type::MeasurementType& MeasurementType::setMeasurementCharacteristics(const uci::type::MeasurementCharacteristicsType& accessor) {
  enableMeasurementCharacteristics();
  if (&accessor != measurementCharacteristics_Accessor.get()) {
    measurementCharacteristics_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool MeasurementType::hasMeasurementCharacteristics() const noexcept {
  return static_cast<bool>(measurementCharacteristics_Accessor);
}

uci::type::MeasurementCharacteristicsType& MeasurementType::enableMeasurementCharacteristics(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::measurementCharacteristicsType : type};
  if ((!measurementCharacteristics_Accessor) || (measurementCharacteristics_Accessor->getAccessorType() != requestedType)) {
    measurementCharacteristics_Accessor = MeasurementCharacteristicsType::create(requestedType);
    if (!measurementCharacteristics_Accessor) {
      throw uci::base::UCIException("Error in enableMeasurementCharacteristics(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *measurementCharacteristics_Accessor;
}

uci::type::MeasurementType& MeasurementType::clearMeasurementCharacteristics() noexcept {
  measurementCharacteristics_Accessor.reset();
  return *this;
}

uci::type::MeasurementKinematicsChoiceType& MeasurementType::getMeasurementKinematics_() const {
  if (measurementKinematics_Accessor) {
    return *measurementKinematics_Accessor;
  }
  throw uci::base::UCIException("Error in getMeasurementKinematics(): An attempt was made to get an optional field that was not enabled, call hasMeasurementKinematics() to determine if it is safe to call getMeasurementKinematics()");
}

const uci::type::MeasurementKinematicsChoiceType& MeasurementType::getMeasurementKinematics() const {
  return getMeasurementKinematics_();
}

uci::type::MeasurementKinematicsChoiceType& MeasurementType::getMeasurementKinematics() {
  return getMeasurementKinematics_();
}

uci::type::MeasurementType& MeasurementType::setMeasurementKinematics(const uci::type::MeasurementKinematicsChoiceType& accessor) {
  enableMeasurementKinematics();
  if (&accessor != measurementKinematics_Accessor.get()) {
    measurementKinematics_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool MeasurementType::hasMeasurementKinematics() const noexcept {
  return static_cast<bool>(measurementKinematics_Accessor);
}

uci::type::MeasurementKinematicsChoiceType& MeasurementType::enableMeasurementKinematics(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::measurementKinematicsChoiceType : type};
  if ((!measurementKinematics_Accessor) || (measurementKinematics_Accessor->getAccessorType() != requestedType)) {
    measurementKinematics_Accessor = MeasurementKinematicsChoiceType::create(requestedType);
    if (!measurementKinematics_Accessor) {
      throw uci::base::UCIException("Error in enableMeasurementKinematics(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *measurementKinematics_Accessor;
}

uci::type::MeasurementType& MeasurementType::clearMeasurementKinematics() noexcept {
  measurementKinematics_Accessor.reset();
  return *this;
}

uci::type::SensorKinematicsChoiceType& MeasurementType::getReferenceKinematics_() const {
  if (referenceKinematics_Accessor) {
    return *referenceKinematics_Accessor;
  }
  throw uci::base::UCIException("Error in getReferenceKinematics(): An attempt was made to get an optional field that was not enabled, call hasReferenceKinematics() to determine if it is safe to call getReferenceKinematics()");
}

const uci::type::SensorKinematicsChoiceType& MeasurementType::getReferenceKinematics() const {
  return getReferenceKinematics_();
}

uci::type::SensorKinematicsChoiceType& MeasurementType::getReferenceKinematics() {
  return getReferenceKinematics_();
}

uci::type::MeasurementType& MeasurementType::setReferenceKinematics(const uci::type::SensorKinematicsChoiceType& accessor) {
  enableReferenceKinematics();
  if (&accessor != referenceKinematics_Accessor.get()) {
    referenceKinematics_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool MeasurementType::hasReferenceKinematics() const noexcept {
  return static_cast<bool>(referenceKinematics_Accessor);
}

uci::type::SensorKinematicsChoiceType& MeasurementType::enableReferenceKinematics(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::sensorKinematicsChoiceType : type};
  if ((!referenceKinematics_Accessor) || (referenceKinematics_Accessor->getAccessorType() != requestedType)) {
    referenceKinematics_Accessor = SensorKinematicsChoiceType::create(requestedType);
    if (!referenceKinematics_Accessor) {
      throw uci::base::UCIException("Error in enableReferenceKinematics(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *referenceKinematics_Accessor;
}

uci::type::MeasurementType& MeasurementType::clearReferenceKinematics() noexcept {
  referenceKinematics_Accessor.reset();
  return *this;
}

std::unique_ptr<MeasurementType> MeasurementType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::measurementType : type};
  return (requestedType == uci::type::accessorType::measurementType) ? boost::make_unique<MeasurementType>() : nullptr;
}

/**  */
namespace MeasurementType_Names {

constexpr const char* Extern_Type_Name{"MeasurementType"};
constexpr const char* MeasurementID_Name{"MeasurementID"};
constexpr const char* IndependentMeasurement_Name{"IndependentMeasurement"};
constexpr const char* UncorrelatedMeasurement_Name{"UncorrelatedMeasurement"};
constexpr const char* Timestamp_Name{"Timestamp"};
constexpr const char* MeasurementGroupID_Name{"MeasurementGroupID"};
constexpr const char* LocalTrackIdentifier_Name{"LocalTrackIdentifier"};
constexpr const char* EntityID_Name{"EntityID"};
constexpr const char* PulseDataID_Name{"PulseDataID"};
constexpr const char* SignalID_Name{"SignalID"};
constexpr const char* ObjectIdentity_Name{"ObjectIdentity"};
constexpr const char* PredictedObjectKinematics_Name{"PredictedObjectKinematics"};
constexpr const char* MeasurementCharacteristics_Name{"MeasurementCharacteristics"};
constexpr const char* MeasurementKinematics_Name{"MeasurementKinematics"};
constexpr const char* ReferenceKinematics_Name{"ReferenceKinematics"};

} // namespace MeasurementType_Names

void MeasurementType::deserialize(const boost::property_tree::ptree& propTree, uci::type::MeasurementType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = MeasurementType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + MeasurementType_Names::MeasurementID_Name) {
      MeasurementID_Type::deserialize(valueType.second, accessor.getMeasurementID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MeasurementType_Names::IndependentMeasurement_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setIndependentMeasurement(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + MeasurementType_Names::UncorrelatedMeasurement_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setUncorrelatedMeasurement(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + MeasurementType_Names::Timestamp_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTimestamp(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + MeasurementType_Names::MeasurementGroupID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::MeasurementType::MeasurementGroupID& boundedList = accessor.getMeasurementGroupID();
        const uci::type::MeasurementType::MeasurementGroupID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::MeasurementGroupID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + MeasurementType_Names::LocalTrackIdentifier_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableLocalTrackIdentifier(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MeasurementType_Names::EntityID_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableEntityID(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MeasurementType_Names::PulseDataID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::MeasurementType::PulseDataID& boundedList = accessor.getPulseDataID();
        const uci::type::MeasurementType::PulseDataID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::PulseDataID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + MeasurementType_Names::SignalID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::MeasurementType::SignalID& boundedList = accessor.getSignalID();
        const uci::type::MeasurementType::SignalID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::SignalID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + MeasurementType_Names::ObjectIdentity_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableObjectIdentity(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MeasurementType_Names::PredictedObjectKinematics_Name) {
      ObjectKinematicsChoiceType::deserialize(valueType.second, accessor.enablePredictedObjectKinematics(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MeasurementType_Names::MeasurementCharacteristics_Name) {
      MeasurementCharacteristicsType::deserialize(valueType.second, accessor.enableMeasurementCharacteristics(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MeasurementType_Names::MeasurementKinematics_Name) {
      MeasurementKinematicsChoiceType::deserialize(valueType.second, accessor.enableMeasurementKinematics(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MeasurementType_Names::ReferenceKinematics_Name) {
      SensorKinematicsChoiceType::deserialize(valueType.second, accessor.enableReferenceKinematics(), nodeName, nsPrefix);
    }
  }
}

std::string MeasurementType::serialize(const uci::type::MeasurementType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? MeasurementType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, MeasurementType_Names::Extern_Type_Name);
  }
  MeasurementID_Type::serialize(accessor.getMeasurementID(), node, MeasurementType_Names::MeasurementID_Name);
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getIndependentMeasurement(), node, MeasurementType_Names::IndependentMeasurement_Name);
  if (accessor.hasUncorrelatedMeasurement()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getUncorrelatedMeasurement(), node, MeasurementType_Names::UncorrelatedMeasurement_Name);
  }
  asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getTimestamp(), node, MeasurementType_Names::Timestamp_Name);
  {
    const uci::type::MeasurementType::MeasurementGroupID& boundedList = accessor.getMeasurementGroupID();
    for (uci::type::MeasurementType::MeasurementGroupID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::MeasurementGroupID_Type::serialize(boundedList.at(i), node, MeasurementType_Names::MeasurementGroupID_Name);
    }
  }
  if (accessor.hasLocalTrackIdentifier()) {
    ForeignKeyType::serialize(accessor.getLocalTrackIdentifier(), node, MeasurementType_Names::LocalTrackIdentifier_Name);
  }
  if (accessor.hasEntityID()) {
    EntityID_Type::serialize(accessor.getEntityID(), node, MeasurementType_Names::EntityID_Name);
  }
  {
    const uci::type::MeasurementType::PulseDataID& boundedList = accessor.getPulseDataID();
    for (uci::type::MeasurementType::PulseDataID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::PulseDataID_Type::serialize(boundedList.at(i), node, MeasurementType_Names::PulseDataID_Name);
    }
  }
  {
    const uci::type::MeasurementType::SignalID& boundedList = accessor.getSignalID();
    for (uci::type::MeasurementType::SignalID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::SignalID_Type::serialize(boundedList.at(i), node, MeasurementType_Names::SignalID_Name);
    }
  }
  if (accessor.hasObjectIdentity()) {
    IdentityConfidenceType::serialize(accessor.getObjectIdentity(), node, MeasurementType_Names::ObjectIdentity_Name);
  }
  if (accessor.hasPredictedObjectKinematics()) {
    ObjectKinematicsChoiceType::serialize(accessor.getPredictedObjectKinematics(), node, MeasurementType_Names::PredictedObjectKinematics_Name);
  }
  if (accessor.hasMeasurementCharacteristics()) {
    MeasurementCharacteristicsType::serialize(accessor.getMeasurementCharacteristics(), node, MeasurementType_Names::MeasurementCharacteristics_Name);
  }
  if (accessor.hasMeasurementKinematics()) {
    MeasurementKinematicsChoiceType::serialize(accessor.getMeasurementKinematics(), node, MeasurementType_Names::MeasurementKinematics_Name);
  }
  if (accessor.hasReferenceKinematics()) {
    SensorKinematicsChoiceType::serialize(accessor.getReferenceKinematics(), node, MeasurementType_Names::ReferenceKinematics_Name);
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

uci::type::MeasurementType& MeasurementType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::MeasurementType>().release());
}

uci::type::MeasurementType& MeasurementType::create(const uci::type::MeasurementType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::MeasurementType> newAccessor{boost::make_unique<asb_uci::type::MeasurementType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void MeasurementType::destroy(uci::type::MeasurementType& accessor) {
  delete dynamic_cast<asb_uci::type::MeasurementType*>(&accessor);
}

} // namespace type

} // namespace uci

