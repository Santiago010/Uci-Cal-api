/** @file CommScheduleAllocationMDT.h
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

#ifndef UCI_TYPE_COMMSCHEDULEALLOCATIONMDT_H
#define UCI_TYPE_COMMSCHEDULEALLOCATIONMDT_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "CommScheduleAllocationType.h"

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
class CommScheduleAllocationMDT : public virtual uci::base::Accessor {
public:

  /** This method constructs a new CommScheduleAllocationMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CommScheduleAllocationMDT.
    */
  static UCI_EXPORT CommScheduleAllocationMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new CommScheduleAllocationMDT initializing the data accessed by the new
    * CommScheduleAllocationMDT using the data accessed by the specified CommScheduleAllocationMDT (cloning).
    *
    * @param accessor The CommScheduleAllocationMDT that provides access to the data that is to be used to initialize the
    *      data accessed by the new created CommScheduleAllocationMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CommScheduleAllocationMDT.
    */
  static UCI_EXPORT CommScheduleAllocationMDT& create(const CommScheduleAllocationMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified CommScheduleAllocationMDT. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The CommScheduleAllocationMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(CommScheduleAllocationMDT& accessor);

  /** Returns this accessor's type constant, i.e. commScheduleAllocationMDT.
    *
    * @return This accessor's type constant, i.e. commScheduleAllocationMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::commScheduleAllocationMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of CommScheduleAllocationMDT.
    *
    * @return The version that was initialized from the uci:version attribute of CommScheduleAllocationMDT.
    */
  static std::string getUCITypeVersion() {
    return "003.001.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const CommScheduleAllocationMDT& accessor) = 0;

  /** The actual communication resource that is allocated to a UCI system for use. [Occurrences: Minimum: 1; Maximum:
    * MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::CommScheduleAllocationType, uci::type::accessorType::commScheduleAllocationType> CommScheduleAllocation;

  /** Returns a const reference to the bounded list identified by CommScheduleAllocation.
    *
    * @return A const reference to the bounded list identified by CommScheduleAllocation.
    */
  virtual const uci::type::CommScheduleAllocationMDT::CommScheduleAllocation& getCommScheduleAllocation() const = 0;

  /** Returns a reference to the bounded list identified by CommScheduleAllocation.
    *
    * @return A reference to the bounded list identified by CommScheduleAllocation.
    */
  virtual uci::type::CommScheduleAllocationMDT::CommScheduleAllocation& getCommScheduleAllocation() = 0;

  /** Sets the bounded list identified by CommScheduleAllocation.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommScheduleAllocationMDT& setCommScheduleAllocation(const uci::type::CommScheduleAllocationMDT::CommScheduleAllocation& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  CommScheduleAllocationMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~CommScheduleAllocationMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The CommScheduleAllocationMDT to copy from.
    */
  CommScheduleAllocationMDT(const CommScheduleAllocationMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this CommScheduleAllocationMDT to the contents of the
    * CommScheduleAllocationMDT on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The CommScheduleAllocationMDT on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this CommScheduleAllocationMDT.
    * @return A reference to this CommScheduleAllocationMDT.
    */
  CommScheduleAllocationMDT& operator=(const CommScheduleAllocationMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_COMMSCHEDULEALLOCATIONMDT_H

