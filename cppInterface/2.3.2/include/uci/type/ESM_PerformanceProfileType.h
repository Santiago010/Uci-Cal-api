/** @file ESM_PerformanceProfileType.h
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

#ifndef UCI_TYPE_ESM_PERFORMANCEPROFILETYPE_H
#define UCI_TYPE_ESM_PERFORMANCEPROFILETYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/UnsignedIntAccessor.h"
#include "../base/export.h"
#include "DurationType.h"
#include "FieldOfRegardType.h"
#include "FrequencyRangeType.h"

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
class ESM_PerformanceProfileType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new ESM_PerformanceProfileType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ESM_PerformanceProfileType.
    */
  static UCI_EXPORT ESM_PerformanceProfileType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ESM_PerformanceProfileType initializing the data accessed by the new
    * ESM_PerformanceProfileType using the data accessed by the specified ESM_PerformanceProfileType (cloning).
    *
    * @param accessor The ESM_PerformanceProfileType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created ESM_PerformanceProfileType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ESM_PerformanceProfileType.
    */
  static UCI_EXPORT ESM_PerformanceProfileType& create(const ESM_PerformanceProfileType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ESM_PerformanceProfileType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The ESM_PerformanceProfileType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ESM_PerformanceProfileType& accessor);

  /** Returns this accessor's type constant, i.e. eSM_PerformanceProfileType.
    *
    * @return This accessor's type constant, i.e. eSM_PerformanceProfileType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::eSM_PerformanceProfileType;
  }

  /** Returns the version that was initialized from the uci:version attribute of ESM_PerformanceProfileType.
    *
    * @return The version that was initialized from the uci:version attribute of ESM_PerformanceProfileType.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ESM_PerformanceProfileType& accessor) = 0;

  /** Field of Regard of the Capability relative to Body Coordinates. This element can be multiple if multiple instances of
    * the same antenna are installed with different Fields Of Regard. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::FieldOfRegardType, uci::type::accessorType::fieldOfRegardType> FieldOfRegard;

  /** Indicates the bandwidth of the Capability. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::FrequencyRangeType, uci::type::accessorType::frequencyRangeType> Band;

  /** Returns a const reference to the bounded list identified by FieldOfRegard.
    *
    * @return A const reference to the bounded list identified by FieldOfRegard.
    */
  virtual const uci::type::ESM_PerformanceProfileType::FieldOfRegard& getFieldOfRegard() const = 0;

  /** Returns a reference to the bounded list identified by FieldOfRegard.
    *
    * @return A reference to the bounded list identified by FieldOfRegard.
    */
  virtual uci::type::ESM_PerformanceProfileType::FieldOfRegard& getFieldOfRegard() = 0;

  /** Sets the bounded list identified by FieldOfRegard.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ESM_PerformanceProfileType& setFieldOfRegard(const uci::type::ESM_PerformanceProfileType::FieldOfRegard& value) = 0;

  /** Returns a const reference to the bounded list identified by Band.
    *
    * @return A const reference to the bounded list identified by Band.
    */
  virtual const uci::type::ESM_PerformanceProfileType::Band& getBand() const = 0;

  /** Returns a reference to the bounded list identified by Band.
    *
    * @return A reference to the bounded list identified by Band.
    */
  virtual uci::type::ESM_PerformanceProfileType::Band& getBand() = 0;

  /** Sets the bounded list identified by Band.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ESM_PerformanceProfileType& setBand(const uci::type::ESM_PerformanceProfileType::Band& value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by BeamLimit.
    *
    * @return The value of the simple primitive data type identified by BeamLimit.
    */
  virtual xs::UnsignedInt getBeamLimit() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by BeamLimit.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ESM_PerformanceProfileType& setBeamLimit(xs::UnsignedInt value) = 0;

  /** Returns whether the Element identified by BeamLimit exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by BeamLimit is enabled or not.
    */
  virtual bool hasBeamLimit() const = 0;

  /** Clears (disabled) the Element identified by BeamLimit.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ESM_PerformanceProfileType& clearBeamLimit() = 0;

  /** Returns the value of the SimplePrimitive data type identified by FrequencyChangeTime.
    *
    * @return The value of the simple primitive data type identified by FrequencyChangeTime.
    */
  virtual uci::type::DurationTypeValue getFrequencyChangeTime() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by FrequencyChangeTime.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ESM_PerformanceProfileType& setFrequencyChangeTime(uci::type::DurationTypeValue value) = 0;

  /** Returns whether the Element identified by FrequencyChangeTime exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by FrequencyChangeTime is enabled or not.
    */
  virtual bool hasFrequencyChangeTime() const = 0;

  /** Clears (disabled) the Element identified by FrequencyChangeTime.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ESM_PerformanceProfileType& clearFrequencyChangeTime() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ESM_PerformanceProfileType() {
  }

  /** The destructor [only available to derived classes]. */
  ~ESM_PerformanceProfileType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ESM_PerformanceProfileType to copy from.
    */
  ESM_PerformanceProfileType(const ESM_PerformanceProfileType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ESM_PerformanceProfileType to the contents of the
    * ESM_PerformanceProfileType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The ESM_PerformanceProfileType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this ESM_PerformanceProfileType.
    * @return A reference to this ESM_PerformanceProfileType.
    */
  ESM_PerformanceProfileType& operator=(const ESM_PerformanceProfileType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ESM_PERFORMANCEPROFILETYPE_H

