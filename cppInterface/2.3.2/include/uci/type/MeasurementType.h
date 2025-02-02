/** @file MeasurementType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:07 PM
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

#ifndef UCI_TYPE_MEASUREMENTTYPE_H
#define UCI_TYPE_MEASUREMENTTYPE_H

#include "../base/Accessor.h"
#include "../base/BooleanAccessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "DateTimeType.h"
#include "EntityID_Type.h"
#include "ForeignKeyType.h"
#include "IdentityConfidenceType.h"
#include "MeasurementCharacteristicsType.h"
#include "MeasurementGroupID_Type.h"
#include "MeasurementID_Type.h"
#include "MeasurementKinematicsChoiceType.h"
#include "ObjectKinematicsChoiceType.h"
#include "PulseDataID_Type.h"
#include "SensorKinematicsChoiceType.h"
#include "SignalID_Type.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all base data types are declared */
namespace base {

class AbstractServiceBusConnection;

} // namespace base
} // namespace uci

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** See annotations in child elements and messages/elements that use this type for details. */
class MeasurementType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new MeasurementType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed MeasurementType.
    */
  static UCI_EXPORT MeasurementType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new MeasurementType initializing the data accessed by the new MeasurementType using the data
    * accessed by the specified MeasurementType (cloning).
    *
    * @param accessor The MeasurementType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created MeasurementType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed MeasurementType.
    */
  static UCI_EXPORT MeasurementType& create(const MeasurementType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified MeasurementType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The MeasurementType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(MeasurementType& accessor);

  /** Returns this accessor's type constant, i.e. measurementType.
    *
    * @return This accessor's type constant, i.e. measurementType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::measurementType;
  }

  /** Returns the version that was initialized from the uci:version attribute of MeasurementType.
    *
    * @return The version that was initialized from the uci:version attribute of MeasurementType.
    */
  static std::string getUCITypeVersion() {
    return "003.001.003.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const MeasurementType& accessor) = 0;

  /** Indicates which measurements correspond to same object(s) (multipath processing). [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::MeasurementGroupID_Type, uci::type::accessorType::measurementGroupID_Type> MeasurementGroupID;

  /** This element represents the unique identifier(s) of the PulseData message(s) associated with the sibling
    * MeasurementID. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::PulseDataID_Type, uci::type::accessorType::pulseDataID_Type> PulseDataID;

  /** This element represents the unique identifier(s) associated with the sibling MeasurementID. [Occurrences: Minimum: 0;
    * Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::SignalID_Type, uci::type::accessorType::signalID_Type> SignalID;

  /** Returns a const reference to the accessor that provides access to the complex content identified by MeasurementID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by MeasurementID.
    */
  virtual const uci::type::MeasurementID_Type& getMeasurementID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by MeasurementID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by MeasurementID.
    */
  virtual uci::type::MeasurementID_Type& getMeasurementID() = 0;

  /** Sets the complex content identified by MeasurementID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by MeasurementID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MeasurementType& setMeasurementID(const uci::type::MeasurementID_Type& value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by IndependentMeasurement.
    *
    * @return The value of the simple primitive data type identified by IndependentMeasurement.
    */
  virtual xs::Boolean getIndependentMeasurement() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by IndependentMeasurement.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MeasurementType& setIndependentMeasurement(xs::Boolean value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by UncorrelatedMeasurement.
    *
    * @return The value of the simple primitive data type identified by UncorrelatedMeasurement.
    */
  virtual xs::Boolean getUncorrelatedMeasurement() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by UncorrelatedMeasurement.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MeasurementType& setUncorrelatedMeasurement(xs::Boolean value) = 0;

  /** Returns whether the Element identified by UncorrelatedMeasurement exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by UncorrelatedMeasurement is enabled or not.
    */
  virtual bool hasUncorrelatedMeasurement() const = 0;

  /** Clears (disabled) the Element identified by UncorrelatedMeasurement.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MeasurementType& clearUncorrelatedMeasurement() = 0;

  /** Returns the value of the SimplePrimitive data type identified by Timestamp.
    *
    * @return The value of the simple primitive data type identified by Timestamp.
    */
  virtual uci::type::DateTimeTypeValue getTimestamp() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Timestamp.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MeasurementType& setTimestamp(uci::type::DateTimeTypeValue value) = 0;

  /** Returns a const reference to the bounded list identified by MeasurementGroupID.
    *
    * @return A const reference to the bounded list identified by MeasurementGroupID.
    */
  virtual const uci::type::MeasurementType::MeasurementGroupID& getMeasurementGroupID() const = 0;

  /** Returns a reference to the bounded list identified by MeasurementGroupID.
    *
    * @return A reference to the bounded list identified by MeasurementGroupID.
    */
  virtual uci::type::MeasurementType::MeasurementGroupID& getMeasurementGroupID() = 0;

  /** Sets the bounded list identified by MeasurementGroupID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MeasurementType& setMeasurementGroupID(const uci::type::MeasurementType::MeasurementGroupID& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * LocalTrackIdentifier.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      LocalTrackIdentifier.
    */
  virtual const uci::type::ForeignKeyType& getLocalTrackIdentifier() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by LocalTrackIdentifier.
    *
    * @return A reference to the accessor that provides access to the complex content identified by LocalTrackIdentifier.
    */
  virtual uci::type::ForeignKeyType& getLocalTrackIdentifier() = 0;

  /** Sets the complex content identified by LocalTrackIdentifier to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by LocalTrackIdentifier.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MeasurementType& setLocalTrackIdentifier(const uci::type::ForeignKeyType& value) = 0;

  /** Returns whether the Element identified by LocalTrackIdentifier exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by LocalTrackIdentifier is enabled or not.
    */
  virtual bool hasLocalTrackIdentifier() const = 0;

  /** Enables the Element identified by LocalTrackIdentifier.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by LocalTrackIdentifier.
    */
  virtual uci::type::ForeignKeyType& enableLocalTrackIdentifier(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by LocalTrackIdentifier.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MeasurementType& clearLocalTrackIdentifier() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by EntityID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by EntityID.
    */
  virtual const uci::type::EntityID_Type& getEntityID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by EntityID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by EntityID.
    */
  virtual uci::type::EntityID_Type& getEntityID() = 0;

  /** Sets the complex content identified by EntityID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by EntityID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MeasurementType& setEntityID(const uci::type::EntityID_Type& value) = 0;

  /** Returns whether the Element identified by EntityID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by EntityID is enabled or not.
    */
  virtual bool hasEntityID() const = 0;

  /** Enables the Element identified by EntityID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by EntityID.
    */
  virtual uci::type::EntityID_Type& enableEntityID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by EntityID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MeasurementType& clearEntityID() = 0;

  /** Returns a const reference to the bounded list identified by PulseDataID.
    *
    * @return A const reference to the bounded list identified by PulseDataID.
    */
  virtual const uci::type::MeasurementType::PulseDataID& getPulseDataID() const = 0;

  /** Returns a reference to the bounded list identified by PulseDataID.
    *
    * @return A reference to the bounded list identified by PulseDataID.
    */
  virtual uci::type::MeasurementType::PulseDataID& getPulseDataID() = 0;

  /** Sets the bounded list identified by PulseDataID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MeasurementType& setPulseDataID(const uci::type::MeasurementType::PulseDataID& value) = 0;

  /** Returns a const reference to the bounded list identified by SignalID.
    *
    * @return A const reference to the bounded list identified by SignalID.
    */
  virtual const uci::type::MeasurementType::SignalID& getSignalID() const = 0;

  /** Returns a reference to the bounded list identified by SignalID.
    *
    * @return A reference to the bounded list identified by SignalID.
    */
  virtual uci::type::MeasurementType::SignalID& getSignalID() = 0;

  /** Sets the bounded list identified by SignalID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MeasurementType& setSignalID(const uci::type::MeasurementType::SignalID& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ObjectIdentity.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ObjectIdentity.
    */
  virtual const uci::type::IdentityConfidenceType& getObjectIdentity() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ObjectIdentity.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ObjectIdentity.
    */
  virtual uci::type::IdentityConfidenceType& getObjectIdentity() = 0;

  /** Sets the complex content identified by ObjectIdentity to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ObjectIdentity.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MeasurementType& setObjectIdentity(const uci::type::IdentityConfidenceType& value) = 0;

  /** Returns whether the Element identified by ObjectIdentity exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ObjectIdentity is enabled or not.
    */
  virtual bool hasObjectIdentity() const = 0;

  /** Enables the Element identified by ObjectIdentity.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ObjectIdentity.
    */
  virtual uci::type::IdentityConfidenceType& enableObjectIdentity(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ObjectIdentity.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MeasurementType& clearObjectIdentity() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * PredictedObjectKinematics.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      PredictedObjectKinematics.
    */
  virtual const uci::type::ObjectKinematicsChoiceType& getPredictedObjectKinematics() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * PredictedObjectKinematics.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      PredictedObjectKinematics.
    */
  virtual uci::type::ObjectKinematicsChoiceType& getPredictedObjectKinematics() = 0;

  /** Sets the complex content identified by PredictedObjectKinematics to the contents of the complex content accessed by
    * the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by PredictedObjectKinematics.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MeasurementType& setPredictedObjectKinematics(const uci::type::ObjectKinematicsChoiceType& value) = 0;

  /** Returns whether the Element identified by PredictedObjectKinematics exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PredictedObjectKinematics is enabled or not.
    */
  virtual bool hasPredictedObjectKinematics() const = 0;

  /** Enables the Element identified by PredictedObjectKinematics.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by
    *      PredictedObjectKinematics.
    */
  virtual uci::type::ObjectKinematicsChoiceType& enablePredictedObjectKinematics(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by PredictedObjectKinematics.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MeasurementType& clearPredictedObjectKinematics() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * MeasurementCharacteristics.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      MeasurementCharacteristics.
    */
  virtual const uci::type::MeasurementCharacteristicsType& getMeasurementCharacteristics() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * MeasurementCharacteristics.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      MeasurementCharacteristics.
    */
  virtual uci::type::MeasurementCharacteristicsType& getMeasurementCharacteristics() = 0;

  /** Sets the complex content identified by MeasurementCharacteristics to the contents of the complex content accessed by
    * the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by MeasurementCharacteristics.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MeasurementType& setMeasurementCharacteristics(const uci::type::MeasurementCharacteristicsType& value) = 0;

  /** Returns whether the Element identified by MeasurementCharacteristics exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by MeasurementCharacteristics is enabled or not.
    */
  virtual bool hasMeasurementCharacteristics() const = 0;

  /** Enables the Element identified by MeasurementCharacteristics.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by
    *      MeasurementCharacteristics.
    */
  virtual uci::type::MeasurementCharacteristicsType& enableMeasurementCharacteristics(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by MeasurementCharacteristics.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MeasurementType& clearMeasurementCharacteristics() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * MeasurementKinematics.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      MeasurementKinematics.
    */
  virtual const uci::type::MeasurementKinematicsChoiceType& getMeasurementKinematics() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by MeasurementKinematics.
    *
    * @return A reference to the accessor that provides access to the complex content identified by MeasurementKinematics.
    */
  virtual uci::type::MeasurementKinematicsChoiceType& getMeasurementKinematics() = 0;

  /** Sets the complex content identified by MeasurementKinematics to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by MeasurementKinematics.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MeasurementType& setMeasurementKinematics(const uci::type::MeasurementKinematicsChoiceType& value) = 0;

  /** Returns whether the Element identified by MeasurementKinematics exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by MeasurementKinematics is enabled or not.
    */
  virtual bool hasMeasurementKinematics() const = 0;

  /** Enables the Element identified by MeasurementKinematics.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by MeasurementKinematics.
    */
  virtual uci::type::MeasurementKinematicsChoiceType& enableMeasurementKinematics(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by MeasurementKinematics.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MeasurementType& clearMeasurementKinematics() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ReferenceKinematics.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ReferenceKinematics.
    */
  virtual const uci::type::SensorKinematicsChoiceType& getReferenceKinematics() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ReferenceKinematics.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ReferenceKinematics.
    */
  virtual uci::type::SensorKinematicsChoiceType& getReferenceKinematics() = 0;

  /** Sets the complex content identified by ReferenceKinematics to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ReferenceKinematics.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MeasurementType& setReferenceKinematics(const uci::type::SensorKinematicsChoiceType& value) = 0;

  /** Returns whether the Element identified by ReferenceKinematics exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ReferenceKinematics is enabled or not.
    */
  virtual bool hasReferenceKinematics() const = 0;

  /** Enables the Element identified by ReferenceKinematics.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ReferenceKinematics.
    */
  virtual uci::type::SensorKinematicsChoiceType& enableReferenceKinematics(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ReferenceKinematics.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MeasurementType& clearReferenceKinematics() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  MeasurementType() {
  }

  /** The destructor [only available to derived classes]. */
  ~MeasurementType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The MeasurementType to copy from.
    */
  MeasurementType(const MeasurementType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this MeasurementType to the contents of the MeasurementType on the
    * right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The MeasurementType on the right hand side (rhs) of the assignment operator whose contents are used to set
    *      the contents of this MeasurementType.
    * @return A reference to this MeasurementType.
    */
  MeasurementType& operator=(const MeasurementType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_MEASUREMENTTYPE_H

