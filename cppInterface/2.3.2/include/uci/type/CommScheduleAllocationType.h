/** @file CommScheduleAllocationType.h
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

#ifndef UCI_TYPE_COMMSCHEDULEALLOCATIONTYPE_H
#define UCI_TYPE_COMMSCHEDULEALLOCATIONTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "CommCoverageUserDataType.h"
#include "CommScheduleAllocationID_Type.h"
#include "CommSchedulingRequirementID_Type.h"
#include "RequestID_Type.h"
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
class CommScheduleAllocationType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new CommScheduleAllocationType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CommScheduleAllocationType.
    */
  static UCI_EXPORT CommScheduleAllocationType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new CommScheduleAllocationType initializing the data accessed by the new
    * CommScheduleAllocationType using the data accessed by the specified CommScheduleAllocationType (cloning).
    *
    * @param accessor The CommScheduleAllocationType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created CommScheduleAllocationType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CommScheduleAllocationType.
    */
  static UCI_EXPORT CommScheduleAllocationType& create(const CommScheduleAllocationType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified CommScheduleAllocationType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The CommScheduleAllocationType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(CommScheduleAllocationType& accessor);

  /** Returns this accessor's type constant, i.e. commScheduleAllocationType.
    *
    * @return This accessor's type constant, i.e. commScheduleAllocationType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::commScheduleAllocationType;
  }

  /** Returns the version that was initialized from the uci:version attribute of CommScheduleAllocationType.
    *
    * @return The version that was initialized from the uci:version attribute of CommScheduleAllocationType.
    */
  static std::string getUCITypeVersion() {
    return "003.001.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const CommScheduleAllocationType& accessor) = 0;

  /** The list of CommSchedulingRequirements that the allocation is intended to fulfill. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::CommSchedulingRequirementID_Type, uci::type::accessorType::commSchedulingRequirementID_Type> CommSchedulingRequirementID;

  /** Represents a list of communication allocation times that are being allocated from approved CommSchedulingRequests.
    * [Occurrences: Minimum: 1; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::CommCoverageUserDataType, uci::type::accessorType::commCoverageUserDataType> AllocatedComm;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * CommScheduleAllocationID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      CommScheduleAllocationID.
    */
  virtual const uci::type::CommScheduleAllocationID_Type& getCommScheduleAllocationID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * CommScheduleAllocationID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      CommScheduleAllocationID.
    */
  virtual uci::type::CommScheduleAllocationID_Type& getCommScheduleAllocationID() = 0;

  /** Sets the complex content identified by CommScheduleAllocationID to the contents of the complex content accessed by
    * the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by CommScheduleAllocationID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommScheduleAllocationType& setCommScheduleAllocationID(const uci::type::CommScheduleAllocationID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ControllingSystemID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ControllingSystemID.
    */
  virtual const uci::type::SystemID_Type& getControllingSystemID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ControllingSystemID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ControllingSystemID.
    */
  virtual uci::type::SystemID_Type& getControllingSystemID() = 0;

  /** Sets the complex content identified by ControllingSystemID to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ControllingSystemID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommScheduleAllocationType& setControllingSystemID(const uci::type::SystemID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by SystemID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by SystemID.
    */
  virtual const uci::type::SystemID_Type& getSystemID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by SystemID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by SystemID.
    */
  virtual uci::type::SystemID_Type& getSystemID() = 0;

  /** Sets the complex content identified by SystemID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SystemID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommScheduleAllocationType& setSystemID(const uci::type::SystemID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * DesignatedSystemID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      DesignatedSystemID.
    */
  virtual const uci::type::SystemID_Type& getDesignatedSystemID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by DesignatedSystemID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by DesignatedSystemID.
    */
  virtual uci::type::SystemID_Type& getDesignatedSystemID() = 0;

  /** Sets the complex content identified by DesignatedSystemID to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by DesignatedSystemID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommScheduleAllocationType& setDesignatedSystemID(const uci::type::SystemID_Type& value) = 0;

  /** Returns whether the Element identified by DesignatedSystemID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by DesignatedSystemID is enabled or not.
    */
  virtual bool hasDesignatedSystemID() const = 0;

  /** Enables the Element identified by DesignatedSystemID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by DesignatedSystemID.
    */
  virtual uci::type::SystemID_Type& enableDesignatedSystemID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by DesignatedSystemID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommScheduleAllocationType& clearDesignatedSystemID() = 0;

  /** Returns a const reference to the bounded list identified by CommSchedulingRequirementID.
    *
    * @return A const reference to the bounded list identified by CommSchedulingRequirementID.
    */
  virtual const uci::type::CommScheduleAllocationType::CommSchedulingRequirementID& getCommSchedulingRequirementID() const = 0;

  /** Returns a reference to the bounded list identified by CommSchedulingRequirementID.
    *
    * @return A reference to the bounded list identified by CommSchedulingRequirementID.
    */
  virtual uci::type::CommScheduleAllocationType::CommSchedulingRequirementID& getCommSchedulingRequirementID() = 0;

  /** Sets the bounded list identified by CommSchedulingRequirementID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommScheduleAllocationType& setCommSchedulingRequirementID(const uci::type::CommScheduleAllocationType::CommSchedulingRequirementID& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * CommSchedulingRequestID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      CommSchedulingRequestID.
    */
  virtual const uci::type::RequestID_Type& getCommSchedulingRequestID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * CommSchedulingRequestID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      CommSchedulingRequestID.
    */
  virtual uci::type::RequestID_Type& getCommSchedulingRequestID() = 0;

  /** Sets the complex content identified by CommSchedulingRequestID to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by CommSchedulingRequestID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommScheduleAllocationType& setCommSchedulingRequestID(const uci::type::RequestID_Type& value) = 0;

  /** Returns whether the Element identified by CommSchedulingRequestID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by CommSchedulingRequestID is enabled or not.
    */
  virtual bool hasCommSchedulingRequestID() const = 0;

  /** Enables the Element identified by CommSchedulingRequestID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by
    *      CommSchedulingRequestID.
    */
  virtual uci::type::RequestID_Type& enableCommSchedulingRequestID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by CommSchedulingRequestID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommScheduleAllocationType& clearCommSchedulingRequestID() = 0;

  /** Returns a const reference to the bounded list identified by AllocatedComm.
    *
    * @return A const reference to the bounded list identified by AllocatedComm.
    */
  virtual const uci::type::CommScheduleAllocationType::AllocatedComm& getAllocatedComm() const = 0;

  /** Returns a reference to the bounded list identified by AllocatedComm.
    *
    * @return A reference to the bounded list identified by AllocatedComm.
    */
  virtual uci::type::CommScheduleAllocationType::AllocatedComm& getAllocatedComm() = 0;

  /** Sets the bounded list identified by AllocatedComm.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommScheduleAllocationType& setAllocatedComm(const uci::type::CommScheduleAllocationType::AllocatedComm& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  CommScheduleAllocationType() {
  }

  /** The destructor [only available to derived classes]. */
  ~CommScheduleAllocationType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The CommScheduleAllocationType to copy from.
    */
  CommScheduleAllocationType(const CommScheduleAllocationType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this CommScheduleAllocationType to the contents of the
    * CommScheduleAllocationType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The CommScheduleAllocationType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this CommScheduleAllocationType.
    * @return A reference to this CommScheduleAllocationType.
    */
  CommScheduleAllocationType& operator=(const CommScheduleAllocationType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_COMMSCHEDULEALLOCATIONTYPE_H

