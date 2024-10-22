/** @file ValidationCommandBaseType.h
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

#ifndef UCI_TYPE_VALIDATIONCOMMANDBASETYPE_H
#define UCI_TYPE_VALIDATIONCOMMANDBASETYPE_H

#include "../base/BooleanAccessor.h"
#include "CommandBaseType.h"
#include "DurationType.h"
#include "RepeatEnum.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** The base type for all *ValidationCommand messages. */
class ValidationCommandBaseType : public virtual CommandBaseType {
public:

  /** Returns this accessor's type constant, i.e. validationCommandBaseType.
    *
    * @return This accessor's type constant, i.e. validationCommandBaseType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::validationCommandBaseType;
  }

  /** Returns the version that was initialized from the uci:version attribute of ValidationCommandBaseType.
    *
    * @return The version that was initialized from the uci:version attribute of ValidationCommandBaseType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ValidationCommandBaseType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by ForPlanningUseOnly.
    *
    * @return The value of the simple primitive data type identified by ForPlanningUseOnly.
    */
  virtual xs::Boolean getForPlanningUseOnly() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by ForPlanningUseOnly.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ValidationCommandBaseType& setForPlanningUseOnly(xs::Boolean value) = 0;

  /** Returns a const reference to the value of the enumeration identified by RequestFrequencyType.
    *
    * @return A const reference to the value of the enumeration identified by RequestFrequencyType.
    */
  virtual const uci::type::RepeatEnum& getRequestFrequencyType() const = 0;

  /** Returns a reference to the value of the enumeration identified by RequestFrequencyType.
    *
    * @return A reference to the value of the enumeration identified by RequestFrequencyType.
    */
  virtual uci::type::RepeatEnum& getRequestFrequencyType() = 0;

  /** Sets the value of the enumeration identified by RequestFrequencyType.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ValidationCommandBaseType& setRequestFrequencyType(const uci::type::RepeatEnum& value) = 0;

  /** Sets the value of the enumeration identified by RequestFrequencyType.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ValidationCommandBaseType& setRequestFrequencyType(uci::type::RepeatEnum::EnumerationItem value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by RequestFrequencyPeriod.
    *
    * @return The value of the simple primitive data type identified by RequestFrequencyPeriod.
    */
  virtual uci::type::DurationTypeValue getRequestFrequencyPeriod() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by RequestFrequencyPeriod.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ValidationCommandBaseType& setRequestFrequencyPeriod(uci::type::DurationTypeValue value) = 0;

  /** Returns whether the Element identified by RequestFrequencyPeriod exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by RequestFrequencyPeriod is enabled or not.
    */
  virtual bool hasRequestFrequencyPeriod() const = 0;

  /** Clears (disabled) the Element identified by RequestFrequencyPeriod.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ValidationCommandBaseType& clearRequestFrequencyPeriod() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ValidationCommandBaseType() {
  }

  /** The destructor [only available to derived classes]. */
  ~ValidationCommandBaseType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ValidationCommandBaseType to copy from.
    */
  ValidationCommandBaseType(const ValidationCommandBaseType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ValidationCommandBaseType to the contents of the
    * ValidationCommandBaseType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The ValidationCommandBaseType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this ValidationCommandBaseType.
    * @return A reference to this ValidationCommandBaseType.
    */
  ValidationCommandBaseType& operator=(const ValidationCommandBaseType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_VALIDATIONCOMMANDBASETYPE_H

