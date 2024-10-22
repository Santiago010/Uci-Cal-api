/** @file ResourceDefinitionDigitalType.h
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

#ifndef UCI_TYPE_RESOURCEDEFINITIONDIGITALTYPE_H
#define UCI_TYPE_RESOURCEDEFINITIONDIGITALTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/UnsignedIntAccessor.h"
#include "../base/export.h"
#include "AperturePointingOptionsType.h"
#include "BlankingLimitType.h"
#include "ResourceAllocationPeriodDigitalType.h"
#include "UnsignedIntegerMinMaxType.h"

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
class ResourceDefinitionDigitalType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new ResourceDefinitionDigitalType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ResourceDefinitionDigitalType.
    */
  static UCI_EXPORT ResourceDefinitionDigitalType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ResourceDefinitionDigitalType initializing the data accessed by the new
    * ResourceDefinitionDigitalType using the data accessed by the specified ResourceDefinitionDigitalType (cloning).
    *
    * @param accessor The ResourceDefinitionDigitalType that provides access to the data that is to be used to initialize
    *      the data accessed by the new created ResourceDefinitionDigitalType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ResourceDefinitionDigitalType.
    */
  static UCI_EXPORT ResourceDefinitionDigitalType& create(const ResourceDefinitionDigitalType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ResourceDefinitionDigitalType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The ResourceDefinitionDigitalType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ResourceDefinitionDigitalType& accessor);

  /** Returns this accessor's type constant, i.e. resourceDefinitionDigitalType.
    *
    * @return This accessor's type constant, i.e. resourceDefinitionDigitalType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::resourceDefinitionDigitalType;
  }

  /** Returns the version that was initialized from the uci:version attribute of ResourceDefinitionDigitalType.
    *
    * @return The version that was initialized from the uci:version attribute of ResourceDefinitionDigitalType.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ResourceDefinitionDigitalType& accessor) = 0;

  /** Reference to a specific usage of a DigitalThreadInstanceIndex, assigned by ResourceAllocator at allocation time.
    * Multiple streams may be required, such as for separate transmit and receive streams. [Occurrences: Minimum: 0;
    * Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::base::UnsignedIntAccessor, uci::base::accessorType::unsignedIntAccessor> StreamIndex;

  /** Only present for Transmit allocations. Identifies the allowed blanking of the access by other functions. The overall
    * blanking limit is allocated across Receive functions that can blank the Transmit, identified either by Subsystem
    * (such as an ESM Subsystem) or a DigitalPayload function in either MFP or MFA. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::BlankingLimitType, uci::type::accessorType::blankingLimitType> BlankingLimit;

  /** The allocated percent access limit is expected to not be exceeded by the payload. The Expected access alerts the
    * Digital Payload that the scheduled accesses have some likelihood of meeting or not meeting the desired duty cycle,
    * based on the other Activities with allocations at the time of the request. Actual access allocation is not known
    * until schedule time (and may be interrupted by low latency events). [Occurrences: Minimum: 1; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::ResourceAllocationPeriodDigitalType, uci::type::accessorType::resourceAllocationPeriodDigitalType> PeriodAccessAllocations;

  /** The effective pointing available (Field of Regard) of the aperture allocation. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::AperturePointingOptionsType, uci::type::accessorType::aperturePointingOptionsType> PointingVector;

  /** Returns the value of the SimplePrimitive data type identified by ResourceRequestOptionIndex.
    *
    * @return The value of the simple primitive data type identified by ResourceRequestOptionIndex.
    */
  virtual xs::UnsignedInt getResourceRequestOptionIndex() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by ResourceRequestOptionIndex.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ResourceDefinitionDigitalType& setResourceRequestOptionIndex(xs::UnsignedInt value) = 0;

  /** Returns a const reference to the bounded list identified by StreamIndex.
    *
    * @return A const reference to the bounded list identified by StreamIndex.
    */
  virtual const uci::type::ResourceDefinitionDigitalType::StreamIndex& getStreamIndex() const = 0;

  /** Returns a reference to the bounded list identified by StreamIndex.
    *
    * @return A reference to the bounded list identified by StreamIndex.
    */
  virtual uci::type::ResourceDefinitionDigitalType::StreamIndex& getStreamIndex() = 0;

  /** Sets the bounded list identified by StreamIndex.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ResourceDefinitionDigitalType& setStreamIndex(const uci::type::ResourceDefinitionDigitalType::StreamIndex& value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by VAS_Endpoint.
    *
    * @return The value of the simple primitive data type identified by VAS_Endpoint.
    */
  virtual xs::UnsignedInt getVAS_Endpoint() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by VAS_Endpoint.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ResourceDefinitionDigitalType& setVAS_Endpoint(xs::UnsignedInt value) = 0;

  /** Returns whether the Element identified by VAS_Endpoint exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by VAS_Endpoint is enabled or not.
    */
  virtual bool hasVAS_Endpoint() const = 0;

  /** Clears (disabled) the Element identified by VAS_Endpoint.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ResourceDefinitionDigitalType& clearVAS_Endpoint() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ResourceAccessPriority.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ResourceAccessPriority.
    */
  virtual const uci::type::UnsignedIntegerMinMaxType& getResourceAccessPriority() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ResourceAccessPriority.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ResourceAccessPriority.
    */
  virtual uci::type::UnsignedIntegerMinMaxType& getResourceAccessPriority() = 0;

  /** Sets the complex content identified by ResourceAccessPriority to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ResourceAccessPriority.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ResourceDefinitionDigitalType& setResourceAccessPriority(const uci::type::UnsignedIntegerMinMaxType& value) = 0;

  /** Enables the Element identified by ResourceAccessPriority.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available for the element. The use of
    *      this parameter provides support for inheritable types. This parameter defaults to uci::base::accessorType::null
    *      that is used to indicate that the access methods associated with the element shall provide access to data of the
    *      type that was specified for that element in the OMS schema, i.e. the element's base type. If specified, this
    *      field must either be a type ID associated with the element's base type or a type ID associated with a type that
    *      is derived from the element's base type.
    * @return A reference to the accessor that provides access to the complex content identified by ResourceAccessPriority.
    */
  virtual uci::type::UnsignedIntegerMinMaxType& enableResourceAccessPriority(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the bounded list identified by BlankingLimit.
    *
    * @return A const reference to the bounded list identified by BlankingLimit.
    */
  virtual const uci::type::ResourceDefinitionDigitalType::BlankingLimit& getBlankingLimit() const = 0;

  /** Returns a reference to the bounded list identified by BlankingLimit.
    *
    * @return A reference to the bounded list identified by BlankingLimit.
    */
  virtual uci::type::ResourceDefinitionDigitalType::BlankingLimit& getBlankingLimit() = 0;

  /** Sets the bounded list identified by BlankingLimit.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ResourceDefinitionDigitalType& setBlankingLimit(const uci::type::ResourceDefinitionDigitalType::BlankingLimit& value) = 0;

  /** Returns a const reference to the bounded list identified by PeriodAccessAllocations.
    *
    * @return A const reference to the bounded list identified by PeriodAccessAllocations.
    */
  virtual const uci::type::ResourceDefinitionDigitalType::PeriodAccessAllocations& getPeriodAccessAllocations() const = 0;

  /** Returns a reference to the bounded list identified by PeriodAccessAllocations.
    *
    * @return A reference to the bounded list identified by PeriodAccessAllocations.
    */
  virtual uci::type::ResourceDefinitionDigitalType::PeriodAccessAllocations& getPeriodAccessAllocations() = 0;

  /** Sets the bounded list identified by PeriodAccessAllocations.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ResourceDefinitionDigitalType& setPeriodAccessAllocations(const uci::type::ResourceDefinitionDigitalType::PeriodAccessAllocations& value) = 0;

  /** Returns a const reference to the bounded list identified by PointingVector.
    *
    * @return A const reference to the bounded list identified by PointingVector.
    */
  virtual const uci::type::ResourceDefinitionDigitalType::PointingVector& getPointingVector() const = 0;

  /** Returns a reference to the bounded list identified by PointingVector.
    *
    * @return A reference to the bounded list identified by PointingVector.
    */
  virtual uci::type::ResourceDefinitionDigitalType::PointingVector& getPointingVector() = 0;

  /** Sets the bounded list identified by PointingVector.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ResourceDefinitionDigitalType& setPointingVector(const uci::type::ResourceDefinitionDigitalType::PointingVector& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ResourceDefinitionDigitalType() {
  }

  /** The destructor [only available to derived classes]. */
  ~ResourceDefinitionDigitalType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ResourceDefinitionDigitalType to copy from.
    */
  ResourceDefinitionDigitalType(const ResourceDefinitionDigitalType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ResourceDefinitionDigitalType to the contents of the
    * ResourceDefinitionDigitalType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The ResourceDefinitionDigitalType on the right hand side (rhs) of the assignment operator whose contents
    *      are used to set the contents of this ResourceDefinitionDigitalType.
    * @return A reference to this ResourceDefinitionDigitalType.
    */
  ResourceDefinitionDigitalType& operator=(const ResourceDefinitionDigitalType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_RESOURCEDEFINITIONDIGITALTYPE_H

