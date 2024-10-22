/** @file RF_ResourceAllocationType.h
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

#ifndef UCI_TYPE_RF_RESOURCEALLOCATIONTYPE_H
#define UCI_TYPE_RF_RESOURCEALLOCATIONTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/UnsignedIntAccessor.h"
#include "../base/export.h"
#include "DateTimeRangeType.h"
#include "RequestID_Type.h"
#include "RequestingFunctionID_ChoiceType.h"
#include "ResourceAllocationStateEnum.h"
#include "ResourceDefinitionChoiceType.h"

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
class RF_ResourceAllocationType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new RF_ResourceAllocationType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed RF_ResourceAllocationType.
    */
  static UCI_EXPORT RF_ResourceAllocationType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new RF_ResourceAllocationType initializing the data accessed by the new
    * RF_ResourceAllocationType using the data accessed by the specified RF_ResourceAllocationType (cloning).
    *
    * @param accessor The RF_ResourceAllocationType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created RF_ResourceAllocationType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed RF_ResourceAllocationType.
    */
  static UCI_EXPORT RF_ResourceAllocationType& create(const RF_ResourceAllocationType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified RF_ResourceAllocationType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The RF_ResourceAllocationType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(RF_ResourceAllocationType& accessor);

  /** Returns this accessor's type constant, i.e. rF_ResourceAllocationType.
    *
    * @return This accessor's type constant, i.e. rF_ResourceAllocationType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::rF_ResourceAllocationType;
  }

  /** Returns the version that was initialized from the uci:version attribute of RF_ResourceAllocationType.
    *
    * @return The version that was initialized from the uci:version attribute of RF_ResourceAllocationType.
    */
  static std::string getUCITypeVersion() {
    return "003.001.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const RF_ResourceAllocationType& accessor) = 0;

  /** Allocation may choose either digital or RF resources, bases on the RF_ResourceAllocationRequest. [Occurrences:
    * Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::ResourceDefinitionChoiceType, uci::type::accessorType::resourceDefinitionChoiceType> ResourceDefinitions;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ResourceRequestID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ResourceRequestID.
    */
  virtual const uci::type::RequestID_Type& getResourceRequestID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ResourceRequestID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ResourceRequestID.
    */
  virtual uci::type::RequestID_Type& getResourceRequestID() = 0;

  /** Sets the complex content identified by ResourceRequestID to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ResourceRequestID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_ResourceAllocationType& setResourceRequestID(const uci::type::RequestID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * RequestingFunction.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      RequestingFunction.
    */
  virtual const uci::type::RequestingFunctionID_ChoiceType& getRequestingFunction() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by RequestingFunction.
    *
    * @return A reference to the accessor that provides access to the complex content identified by RequestingFunction.
    */
  virtual uci::type::RequestingFunctionID_ChoiceType& getRequestingFunction() = 0;

  /** Sets the complex content identified by RequestingFunction to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by RequestingFunction.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_ResourceAllocationType& setRequestingFunction(const uci::type::RequestingFunctionID_ChoiceType& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by ResourceAllocationState.
    *
    * @return A const reference to the value of the enumeration identified by ResourceAllocationState.
    */
  virtual const uci::type::ResourceAllocationStateEnum& getResourceAllocationState() const = 0;

  /** Returns a reference to the value of the enumeration identified by ResourceAllocationState.
    *
    * @return A reference to the value of the enumeration identified by ResourceAllocationState.
    */
  virtual uci::type::ResourceAllocationStateEnum& getResourceAllocationState() = 0;

  /** Sets the value of the enumeration identified by ResourceAllocationState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_ResourceAllocationType& setResourceAllocationState(const uci::type::ResourceAllocationStateEnum& value) = 0;

  /** Sets the value of the enumeration identified by ResourceAllocationState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_ResourceAllocationType& setResourceAllocationState(uci::type::ResourceAllocationStateEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by DurationRange.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by DurationRange.
    */
  virtual const uci::type::DateTimeRangeType& getDurationRange() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by DurationRange.
    *
    * @return A reference to the accessor that provides access to the complex content identified by DurationRange.
    */
  virtual uci::type::DateTimeRangeType& getDurationRange() = 0;

  /** Sets the complex content identified by DurationRange to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by DurationRange.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_ResourceAllocationType& setDurationRange(const uci::type::DateTimeRangeType& value) = 0;

  /** Returns whether the Element identified by DurationRange exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by DurationRange is enabled or not.
    */
  virtual bool hasDurationRange() const = 0;

  /** Enables the Element identified by DurationRange.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by DurationRange.
    */
  virtual uci::type::DateTimeRangeType& enableDurationRange(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by DurationRange.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_ResourceAllocationType& clearDurationRange() = 0;

  /** Returns the value of the SimplePrimitive data type identified by ConfigureInteroperabilityReportIndex.
    *
    * @return The value of the simple primitive data type identified by ConfigureInteroperabilityReportIndex.
    */
  virtual xs::UnsignedInt getConfigureInteroperabilityReportIndex() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by ConfigureInteroperabilityReportIndex.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_ResourceAllocationType& setConfigureInteroperabilityReportIndex(xs::UnsignedInt value) = 0;

  /** Returns whether the Element identified by ConfigureInteroperabilityReportIndex exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ConfigureInteroperabilityReportIndex is enabled or
    *      not.
    */
  virtual bool hasConfigureInteroperabilityReportIndex() const = 0;

  /** Clears (disabled) the Element identified by ConfigureInteroperabilityReportIndex.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_ResourceAllocationType& clearConfigureInteroperabilityReportIndex() = 0;

  /** Returns a const reference to the bounded list identified by ResourceDefinitions.
    *
    * @return A const reference to the bounded list identified by ResourceDefinitions.
    */
  virtual const uci::type::RF_ResourceAllocationType::ResourceDefinitions& getResourceDefinitions() const = 0;

  /** Returns a reference to the bounded list identified by ResourceDefinitions.
    *
    * @return A reference to the bounded list identified by ResourceDefinitions.
    */
  virtual uci::type::RF_ResourceAllocationType::ResourceDefinitions& getResourceDefinitions() = 0;

  /** Sets the bounded list identified by ResourceDefinitions.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_ResourceAllocationType& setResourceDefinitions(const uci::type::RF_ResourceAllocationType::ResourceDefinitions& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  RF_ResourceAllocationType() {
  }

  /** The destructor [only available to derived classes]. */
  ~RF_ResourceAllocationType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The RF_ResourceAllocationType to copy from.
    */
  RF_ResourceAllocationType(const RF_ResourceAllocationType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this RF_ResourceAllocationType to the contents of the
    * RF_ResourceAllocationType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The RF_ResourceAllocationType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this RF_ResourceAllocationType.
    * @return A reference to this RF_ResourceAllocationType.
    */
  RF_ResourceAllocationType& operator=(const RF_ResourceAllocationType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_RF_RESOURCEALLOCATIONTYPE_H

