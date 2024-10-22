/** @file RequirementExecutionStatusDetailsType.h
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

#ifndef UCI_TYPE_REQUIREMENTEXECUTIONSTATUSDETAILSTYPE_H
#define UCI_TYPE_REQUIREMENTEXECUTIONSTATUSDETAILSTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "CannotComplyType.h"
#include "MetricsType.h"
#include "PercentType.h"
#include "RequirementExecutionStateEnum.h"
#include "RequirementStatusTraceabilityType.h"
#include "RequirementTimingType.h"
#include "SystemID_Type.h"

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
class RequirementExecutionStatusDetailsType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new RequirementExecutionStatusDetailsType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed RequirementExecutionStatusDetailsType.
    */
  static UCI_EXPORT RequirementExecutionStatusDetailsType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new RequirementExecutionStatusDetailsType initializing the data accessed by the new
    * RequirementExecutionStatusDetailsType using the data accessed by the specified RequirementExecutionStatusDetailsType
    * (cloning).
    *
    * @param accessor The RequirementExecutionStatusDetailsType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created RequirementExecutionStatusDetailsType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed RequirementExecutionStatusDetailsType.
    */
  static UCI_EXPORT RequirementExecutionStatusDetailsType& create(const RequirementExecutionStatusDetailsType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified RequirementExecutionStatusDetailsType. Use of the specified accessor after it has
    * been destroyed will result in undefined behavior.
    *
    * @param accessor The RequirementExecutionStatusDetailsType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(RequirementExecutionStatusDetailsType& accessor);

  /** Returns this accessor's type constant, i.e. requirementExecutionStatusDetailsType.
    *
    * @return This accessor's type constant, i.e. requirementExecutionStatusDetailsType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::requirementExecutionStatusDetailsType;
  }

  /** Returns the version that was initialized from the uci:version attribute of RequirementExecutionStatusDetailsType.
    *
    * @return The version that was initialized from the uci:version attribute of RequirementExecutionStatusDetailsType.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const RequirementExecutionStatusDetailsType& accessor) = 0;

  /** Indicates actual timing status for the Requirement. Allows for defining for each timing type (RequirementTimingEnum).
    * [Occurrences: Minimum: 0; Maximum: 4]
    */
  typedef uci::base::BoundedList<uci::type::RequirementTimingType, uci::type::accessorType::requirementTimingType> ActualTiming;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ExecutingSystemID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ExecutingSystemID.
    */
  virtual const uci::type::SystemID_Type& getExecutingSystemID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ExecutingSystemID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ExecutingSystemID.
    */
  virtual uci::type::SystemID_Type& getExecutingSystemID() = 0;

  /** Sets the complex content identified by ExecutingSystemID to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ExecutingSystemID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementExecutionStatusDetailsType& setExecutingSystemID(const uci::type::SystemID_Type& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by ExecutionState.
    *
    * @return A const reference to the value of the enumeration identified by ExecutionState.
    */
  virtual const uci::type::RequirementExecutionStateEnum& getExecutionState() const = 0;

  /** Returns a reference to the value of the enumeration identified by ExecutionState.
    *
    * @return A reference to the value of the enumeration identified by ExecutionState.
    */
  virtual uci::type::RequirementExecutionStateEnum& getExecutionState() = 0;

  /** Sets the value of the enumeration identified by ExecutionState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementExecutionStatusDetailsType& setExecutionState(const uci::type::RequirementExecutionStateEnum& value) = 0;

  /** Sets the value of the enumeration identified by ExecutionState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementExecutionStatusDetailsType& setExecutionState(uci::type::RequirementExecutionStateEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ExecutionStateReason.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ExecutionStateReason.
    */
  virtual const uci::type::CannotComplyType& getExecutionStateReason() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ExecutionStateReason.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ExecutionStateReason.
    */
  virtual uci::type::CannotComplyType& getExecutionStateReason() = 0;

  /** Sets the complex content identified by ExecutionStateReason to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ExecutionStateReason.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementExecutionStatusDetailsType& setExecutionStateReason(const uci::type::CannotComplyType& value) = 0;

  /** Returns whether the Element identified by ExecutionStateReason exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ExecutionStateReason is enabled or not.
    */
  virtual bool hasExecutionStateReason() const = 0;

  /** Enables the Element identified by ExecutionStateReason.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ExecutionStateReason.
    */
  virtual uci::type::CannotComplyType& enableExecutionStateReason(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ExecutionStateReason.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementExecutionStatusDetailsType& clearExecutionStateReason() = 0;

  /** Returns a const reference to the bounded list identified by ActualTiming.
    *
    * @return A const reference to the bounded list identified by ActualTiming.
    */
  virtual const uci::type::RequirementExecutionStatusDetailsType::ActualTiming& getActualTiming() const = 0;

  /** Returns a reference to the bounded list identified by ActualTiming.
    *
    * @return A reference to the bounded list identified by ActualTiming.
    */
  virtual uci::type::RequirementExecutionStatusDetailsType::ActualTiming& getActualTiming() = 0;

  /** Sets the bounded list identified by ActualTiming.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementExecutionStatusDetailsType& setActualTiming(const uci::type::RequirementExecutionStatusDetailsType::ActualTiming& value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by PercentCompleted.
    *
    * @return The value of the simple primitive data type identified by PercentCompleted.
    */
  virtual uci::type::PercentTypeValue getPercentCompleted() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by PercentCompleted.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementExecutionStatusDetailsType& setPercentCompleted(uci::type::PercentTypeValue value) = 0;

  /** Returns whether the Element identified by PercentCompleted exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PercentCompleted is enabled or not.
    */
  virtual bool hasPercentCompleted() const = 0;

  /** Clears (disabled) the Element identified by PercentCompleted.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementExecutionStatusDetailsType& clearPercentCompleted() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Traceability.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Traceability.
    */
  virtual const uci::type::RequirementStatusTraceabilityType& getTraceability() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Traceability.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Traceability.
    */
  virtual uci::type::RequirementStatusTraceabilityType& getTraceability() = 0;

  /** Sets the complex content identified by Traceability to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Traceability.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementExecutionStatusDetailsType& setTraceability(const uci::type::RequirementStatusTraceabilityType& value) = 0;

  /** Returns whether the Element identified by Traceability exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Traceability is enabled or not.
    */
  virtual bool hasTraceability() const = 0;

  /** Enables the Element identified by Traceability.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Traceability.
    */
  virtual uci::type::RequirementStatusTraceabilityType& enableTraceability(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Traceability.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementExecutionStatusDetailsType& clearTraceability() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Metrics.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Metrics.
    */
  virtual const uci::type::MetricsType& getMetrics() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Metrics.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Metrics.
    */
  virtual uci::type::MetricsType& getMetrics() = 0;

  /** Sets the complex content identified by Metrics to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Metrics.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementExecutionStatusDetailsType& setMetrics(const uci::type::MetricsType& value) = 0;

  /** Returns whether the Element identified by Metrics exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Metrics is enabled or not.
    */
  virtual bool hasMetrics() const = 0;

  /** Enables the Element identified by Metrics.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Metrics.
    */
  virtual uci::type::MetricsType& enableMetrics(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Metrics.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementExecutionStatusDetailsType& clearMetrics() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  RequirementExecutionStatusDetailsType() {
  }

  /** The destructor [only available to derived classes]. */
  ~RequirementExecutionStatusDetailsType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The RequirementExecutionStatusDetailsType to copy from.
    */
  RequirementExecutionStatusDetailsType(const RequirementExecutionStatusDetailsType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this RequirementExecutionStatusDetailsType to the contents of the
    * RequirementExecutionStatusDetailsType on the right hand side (rhs) of the assignment operator [only available to
    * derived classes].
    *
    * @param rhs The RequirementExecutionStatusDetailsType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this RequirementExecutionStatusDetailsType.
    * @return A reference to this RequirementExecutionStatusDetailsType.
    */
  RequirementExecutionStatusDetailsType& operator=(const RequirementExecutionStatusDetailsType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_REQUIREMENTEXECUTIONSTATUSDETAILSTYPE_H

