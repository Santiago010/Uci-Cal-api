/** @file CommAllocationStatusType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:06 PM
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

#ifndef UCI_TYPE_COMMALLOCATIONSTATUSTYPE_H
#define UCI_TYPE_COMMALLOCATIONSTATUSTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "CannotComplyType.h"
#include "CommScheduleAllocationID_Type.h"
#include "RequestProcessingStateEnum.h"

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
class CommAllocationStatusType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new CommAllocationStatusType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CommAllocationStatusType.
    */
  static UCI_EXPORT CommAllocationStatusType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new CommAllocationStatusType initializing the data accessed by the new
    * CommAllocationStatusType using the data accessed by the specified CommAllocationStatusType (cloning).
    *
    * @param accessor The CommAllocationStatusType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created CommAllocationStatusType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CommAllocationStatusType.
    */
  static UCI_EXPORT CommAllocationStatusType& create(const CommAllocationStatusType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified CommAllocationStatusType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The CommAllocationStatusType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(CommAllocationStatusType& accessor);

  /** Returns this accessor's type constant, i.e. commAllocationStatusType.
    *
    * @return This accessor's type constant, i.e. commAllocationStatusType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::commAllocationStatusType;
  }

  /** Returns the version that was initialized from the uci:version attribute of CommAllocationStatusType.
    *
    * @return The version that was initialized from the uci:version attribute of CommAllocationStatusType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const CommAllocationStatusType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by AllocationID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by AllocationID.
    */
  virtual const uci::type::CommScheduleAllocationID_Type& getAllocationID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by AllocationID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by AllocationID.
    */
  virtual uci::type::CommScheduleAllocationID_Type& getAllocationID() = 0;

  /** Sets the complex content identified by AllocationID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by AllocationID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommAllocationStatusType& setAllocationID(const uci::type::CommScheduleAllocationID_Type& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by AllocationUpdateStatus.
    *
    * @return A const reference to the value of the enumeration identified by AllocationUpdateStatus.
    */
  virtual const uci::type::RequestProcessingStateEnum& getAllocationUpdateStatus() const = 0;

  /** Returns a reference to the value of the enumeration identified by AllocationUpdateStatus.
    *
    * @return A reference to the value of the enumeration identified by AllocationUpdateStatus.
    */
  virtual uci::type::RequestProcessingStateEnum& getAllocationUpdateStatus() = 0;

  /** Sets the value of the enumeration identified by AllocationUpdateStatus.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommAllocationStatusType& setAllocationUpdateStatus(const uci::type::RequestProcessingStateEnum& value) = 0;

  /** Sets the value of the enumeration identified by AllocationUpdateStatus.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommAllocationStatusType& setAllocationUpdateStatus(uci::type::RequestProcessingStateEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * AllocationStateReason.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      AllocationStateReason.
    */
  virtual const uci::type::CannotComplyType& getAllocationStateReason() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by AllocationStateReason.
    *
    * @return A reference to the accessor that provides access to the complex content identified by AllocationStateReason.
    */
  virtual uci::type::CannotComplyType& getAllocationStateReason() = 0;

  /** Sets the complex content identified by AllocationStateReason to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by AllocationStateReason.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommAllocationStatusType& setAllocationStateReason(const uci::type::CannotComplyType& value) = 0;

  /** Returns whether the Element identified by AllocationStateReason exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by AllocationStateReason is enabled or not.
    */
  virtual bool hasAllocationStateReason() const = 0;

  /** Enables the Element identified by AllocationStateReason.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by AllocationStateReason.
    */
  virtual uci::type::CannotComplyType& enableAllocationStateReason(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by AllocationStateReason.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommAllocationStatusType& clearAllocationStateReason() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  CommAllocationStatusType() {
  }

  /** The destructor [only available to derived classes]. */
  ~CommAllocationStatusType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The CommAllocationStatusType to copy from.
    */
  CommAllocationStatusType(const CommAllocationStatusType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this CommAllocationStatusType to the contents of the
    * CommAllocationStatusType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The CommAllocationStatusType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this CommAllocationStatusType.
    * @return A reference to this CommAllocationStatusType.
    */
  CommAllocationStatusType& operator=(const CommAllocationStatusType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_COMMALLOCATIONSTATUSTYPE_H

