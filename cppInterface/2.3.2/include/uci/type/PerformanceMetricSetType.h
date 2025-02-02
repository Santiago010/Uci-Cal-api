/** @file PerformanceMetricSetType.h
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

#ifndef UCI_TYPE_PERFORMANCEMETRICSETTYPE_H
#define UCI_TYPE_PERFORMANCEMETRICSETTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/IntAccessor.h"
#include "../base/UnsignedIntAccessor.h"
#include "../base/export.h"
#include "MetricValueType.h"
#include "NegotiableOptionsEnum.h"

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
class PerformanceMetricSetType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new PerformanceMetricSetType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PerformanceMetricSetType.
    */
  static UCI_EXPORT PerformanceMetricSetType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new PerformanceMetricSetType initializing the data accessed by the new
    * PerformanceMetricSetType using the data accessed by the specified PerformanceMetricSetType (cloning).
    *
    * @param accessor The PerformanceMetricSetType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created PerformanceMetricSetType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PerformanceMetricSetType.
    */
  static UCI_EXPORT PerformanceMetricSetType& create(const PerformanceMetricSetType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified PerformanceMetricSetType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The PerformanceMetricSetType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(PerformanceMetricSetType& accessor);

  /** Returns this accessor's type constant, i.e. performanceMetricSetType.
    *
    * @return This accessor's type constant, i.e. performanceMetricSetType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::performanceMetricSetType;
  }

  /** Returns the version that was initialized from the uci:version attribute of PerformanceMetricSetType.
    *
    * @return The version that was initialized from the uci:version attribute of PerformanceMetricSetType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const PerformanceMetricSetType& accessor) = 0;

  /** Indicates a set of performance metrics for valid IDs. ID and valid value ranges can be found in the service contract.
    * [Occurrences: Minimum: 1; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::MetricValueType, uci::type::accessorType::metricValueType> PerformanceMetricSet;

  /** Returns the value of the SimplePrimitive data type identified by PerformanceConstraintIndex.
    *
    * @return The value of the simple primitive data type identified by PerformanceConstraintIndex.
    */
  virtual xs::UnsignedInt getPerformanceConstraintIndex() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by PerformanceConstraintIndex.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PerformanceMetricSetType& setPerformanceConstraintIndex(xs::UnsignedInt value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Merit.
    *
    * @return The value of the simple primitive data type identified by Merit.
    */
  virtual xs::Int getMerit() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Merit.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PerformanceMetricSetType& setMerit(xs::Int value) = 0;

  /** Returns a const reference to the value of the enumeration identified by NegotiableOptions.
    *
    * @return A const reference to the value of the enumeration identified by NegotiableOptions.
    */
  virtual const uci::type::NegotiableOptionsEnum& getNegotiableOptions() const = 0;

  /** Returns a reference to the value of the enumeration identified by NegotiableOptions.
    *
    * @return A reference to the value of the enumeration identified by NegotiableOptions.
    */
  virtual uci::type::NegotiableOptionsEnum& getNegotiableOptions() = 0;

  /** Sets the value of the enumeration identified by NegotiableOptions.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PerformanceMetricSetType& setNegotiableOptions(const uci::type::NegotiableOptionsEnum& value) = 0;

  /** Sets the value of the enumeration identified by NegotiableOptions.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PerformanceMetricSetType& setNegotiableOptions(uci::type::NegotiableOptionsEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by NegotiableOptions exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by NegotiableOptions is enabled or not.
    */
  virtual bool hasNegotiableOptions() const = 0;

  /** Enables the Element identified by NegotiableOptions.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by NegotiableOptions.
    */
  virtual uci::type::NegotiableOptionsEnum& enableNegotiableOptions(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by NegotiableOptions.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PerformanceMetricSetType& clearNegotiableOptions() = 0;

  /** Returns a const reference to the bounded list identified by PerformanceMetricSet.
    *
    * @return A const reference to the bounded list identified by PerformanceMetricSet.
    */
  virtual const uci::type::PerformanceMetricSetType::PerformanceMetricSet& getPerformanceMetricSet() const = 0;

  /** Returns a reference to the bounded list identified by PerformanceMetricSet.
    *
    * @return A reference to the bounded list identified by PerformanceMetricSet.
    */
  virtual uci::type::PerformanceMetricSetType::PerformanceMetricSet& getPerformanceMetricSet() = 0;

  /** Sets the bounded list identified by PerformanceMetricSet.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PerformanceMetricSetType& setPerformanceMetricSet(const uci::type::PerformanceMetricSetType::PerformanceMetricSet& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  PerformanceMetricSetType() {
  }

  /** The destructor [only available to derived classes]. */
  ~PerformanceMetricSetType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The PerformanceMetricSetType to copy from.
    */
  PerformanceMetricSetType(const PerformanceMetricSetType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this PerformanceMetricSetType to the contents of the
    * PerformanceMetricSetType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The PerformanceMetricSetType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this PerformanceMetricSetType.
    * @return A reference to this PerformanceMetricSetType.
    */
  PerformanceMetricSetType& operator=(const PerformanceMetricSetType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PERFORMANCEMETRICSETTYPE_H

