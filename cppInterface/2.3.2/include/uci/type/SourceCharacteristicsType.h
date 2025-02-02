/** @file SourceCharacteristicsType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:08 PM
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

#ifndef UCI_TYPE_SOURCECHARACTERISTICSTYPE_H
#define UCI_TYPE_SOURCECHARACTERISTICSTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "DistanceType.h"
#include "DoubleNonNegativeType.h"
#include "IrradianceType.h"
#include "MilliwattPowerRatioType.h"
#include "PercentType.h"

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

/** Indicates characteristic values that describe the source at which a measurement comes from. */
class SourceCharacteristicsType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new SourceCharacteristicsType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SourceCharacteristicsType.
    */
  static UCI_EXPORT SourceCharacteristicsType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new SourceCharacteristicsType initializing the data accessed by the new
    * SourceCharacteristicsType using the data accessed by the specified SourceCharacteristicsType (cloning).
    *
    * @param accessor The SourceCharacteristicsType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created SourceCharacteristicsType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SourceCharacteristicsType.
    */
  static UCI_EXPORT SourceCharacteristicsType& create(const SourceCharacteristicsType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified SourceCharacteristicsType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The SourceCharacteristicsType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(SourceCharacteristicsType& accessor);

  /** Returns this accessor's type constant, i.e. sourceCharacteristicsType.
    *
    * @return This accessor's type constant, i.e. sourceCharacteristicsType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::sourceCharacteristicsType;
  }

  /** Returns the version that was initialized from the uci:version attribute of SourceCharacteristicsType.
    *
    * @return The version that was initialized from the uci:version attribute of SourceCharacteristicsType.
    */
  static std::string getUCITypeVersion() {
    return "001.001.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const SourceCharacteristicsType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by TargetRCS.
    *
    * @return The value of the simple primitive data type identified by TargetRCS.
    */
  virtual uci::type::DoubleNonNegativeTypeValue getTargetRCS() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by TargetRCS.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SourceCharacteristicsType& setTargetRCS(uci::type::DoubleNonNegativeTypeValue value) = 0;

  /** Returns whether the Element identified by TargetRCS exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by TargetRCS is enabled or not.
    */
  virtual bool hasTargetRCS() const = 0;

  /** Clears (disabled) the Element identified by TargetRCS.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SourceCharacteristicsType& clearTargetRCS() = 0;

  /** Returns the value of the SimplePrimitive data type identified by TargetIrradiance.
    *
    * @return The value of the simple primitive data type identified by TargetIrradiance.
    */
  virtual uci::type::IrradianceTypeValue getTargetIrradiance() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by TargetIrradiance.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SourceCharacteristicsType& setTargetIrradiance(uci::type::IrradianceTypeValue value) = 0;

  /** Returns whether the Element identified by TargetIrradiance exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by TargetIrradiance is enabled or not.
    */
  virtual bool hasTargetIrradiance() const = 0;

  /** Clears (disabled) the Element identified by TargetIrradiance.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SourceCharacteristicsType& clearTargetIrradiance() = 0;

  /** Returns the value of the SimplePrimitive data type identified by EmitterSensitivity.
    *
    * @return The value of the simple primitive data type identified by EmitterSensitivity.
    */
  virtual uci::type::MilliwattPowerRatioTypeValue getEmitterSensitivity() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by EmitterSensitivity.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SourceCharacteristicsType& setEmitterSensitivity(uci::type::MilliwattPowerRatioTypeValue value) = 0;

  /** Returns whether the Element identified by EmitterSensitivity exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by EmitterSensitivity is enabled or not.
    */
  virtual bool hasEmitterSensitivity() const = 0;

  /** Clears (disabled) the Element identified by EmitterSensitivity.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SourceCharacteristicsType& clearEmitterSensitivity() = 0;

  /** Returns the value of the SimplePrimitive data type identified by DetectionRange.
    *
    * @return The value of the simple primitive data type identified by DetectionRange.
    */
  virtual uci::type::DistanceTypeValue getDetectionRange() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by DetectionRange.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SourceCharacteristicsType& setDetectionRange(uci::type::DistanceTypeValue value) = 0;

  /** Returns whether the Element identified by DetectionRange exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by DetectionRange is enabled or not.
    */
  virtual bool hasDetectionRange() const = 0;

  /** Clears (disabled) the Element identified by DetectionRange.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SourceCharacteristicsType& clearDetectionRange() = 0;

  /** Returns the value of the SimplePrimitive data type identified by ProbabilityOfDetection.
    *
    * @return The value of the simple primitive data type identified by ProbabilityOfDetection.
    */
  virtual uci::type::PercentTypeValue getProbabilityOfDetection() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by ProbabilityOfDetection.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SourceCharacteristicsType& setProbabilityOfDetection(uci::type::PercentTypeValue value) = 0;

  /** Returns whether the Element identified by ProbabilityOfDetection exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ProbabilityOfDetection is enabled or not.
    */
  virtual bool hasProbabilityOfDetection() const = 0;

  /** Clears (disabled) the Element identified by ProbabilityOfDetection.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SourceCharacteristicsType& clearProbabilityOfDetection() = 0;

  /** Returns the value of the SimplePrimitive data type identified by ProbabilityOfFalseAlarm.
    *
    * @return The value of the simple primitive data type identified by ProbabilityOfFalseAlarm.
    */
  virtual uci::type::PercentTypeValue getProbabilityOfFalseAlarm() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by ProbabilityOfFalseAlarm.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SourceCharacteristicsType& setProbabilityOfFalseAlarm(uci::type::PercentTypeValue value) = 0;

  /** Returns whether the Element identified by ProbabilityOfFalseAlarm exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ProbabilityOfFalseAlarm is enabled or not.
    */
  virtual bool hasProbabilityOfFalseAlarm() const = 0;

  /** Clears (disabled) the Element identified by ProbabilityOfFalseAlarm.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SourceCharacteristicsType& clearProbabilityOfFalseAlarm() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  SourceCharacteristicsType() {
  }

  /** The destructor [only available to derived classes]. */
  ~SourceCharacteristicsType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The SourceCharacteristicsType to copy from.
    */
  SourceCharacteristicsType(const SourceCharacteristicsType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this SourceCharacteristicsType to the contents of the
    * SourceCharacteristicsType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The SourceCharacteristicsType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this SourceCharacteristicsType.
    * @return A reference to this SourceCharacteristicsType.
    */
  SourceCharacteristicsType& operator=(const SourceCharacteristicsType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_SOURCECHARACTERISTICSTYPE_H

