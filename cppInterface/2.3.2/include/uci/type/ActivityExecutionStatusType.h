/** @file ActivityExecutionStatusType.h
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

#ifndef UCI_TYPE_ACTIVITYEXECUTIONSTATUSTYPE_H
#define UCI_TYPE_ACTIVITYEXECUTIONSTATUSTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "ActivityExecutionStatusEnum.h"
#include "ActivityID_Type.h"
#include "PlannedActivityID_Type.h"
#include "TransitionStatusType.h"

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
class ActivityExecutionStatusType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new ActivityExecutionStatusType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ActivityExecutionStatusType.
    */
  static UCI_EXPORT ActivityExecutionStatusType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ActivityExecutionStatusType initializing the data accessed by the new
    * ActivityExecutionStatusType using the data accessed by the specified ActivityExecutionStatusType (cloning).
    *
    * @param accessor The ActivityExecutionStatusType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created ActivityExecutionStatusType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ActivityExecutionStatusType.
    */
  static UCI_EXPORT ActivityExecutionStatusType& create(const ActivityExecutionStatusType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ActivityExecutionStatusType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The ActivityExecutionStatusType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ActivityExecutionStatusType& accessor);

  /** Returns this accessor's type constant, i.e. activityExecutionStatusType.
    *
    * @return This accessor's type constant, i.e. activityExecutionStatusType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::activityExecutionStatusType;
  }

  /** Returns the version that was initialized from the uci:version attribute of ActivityExecutionStatusType.
    *
    * @return The version that was initialized from the uci:version attribute of ActivityExecutionStatusType.
    */
  static std::string getUCITypeVersion() {
    return "002.000.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ActivityExecutionStatusType& accessor) = 0;

  /** Indicates an actual current/past transition of the Planned Activity. See *ActivityPlan for planned transitions.
    * [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::TransitionStatusType, uci::type::accessorType::transitionStatusType> TransitionHistory;

  /** Indicates an actual [Capability]Activity associated with execution of the sibling PlannedActivityID. [Occurrences:
    * Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::ActivityID_Type, uci::type::accessorType::activityID_Type> ActualActivityID;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * PlannedActivityID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      PlannedActivityID.
    */
  virtual const uci::type::PlannedActivityID_Type& getPlannedActivityID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by PlannedActivityID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by PlannedActivityID.
    */
  virtual uci::type::PlannedActivityID_Type& getPlannedActivityID() = 0;

  /** Sets the complex content identified by PlannedActivityID to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by PlannedActivityID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ActivityExecutionStatusType& setPlannedActivityID(const uci::type::PlannedActivityID_Type& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by ActivityExecutionStatus.
    *
    * @return A const reference to the value of the enumeration identified by ActivityExecutionStatus.
    */
  virtual const uci::type::ActivityExecutionStatusEnum& getActivityExecutionStatus() const = 0;

  /** Returns a reference to the value of the enumeration identified by ActivityExecutionStatus.
    *
    * @return A reference to the value of the enumeration identified by ActivityExecutionStatus.
    */
  virtual uci::type::ActivityExecutionStatusEnum& getActivityExecutionStatus() = 0;

  /** Sets the value of the enumeration identified by ActivityExecutionStatus.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ActivityExecutionStatusType& setActivityExecutionStatus(const uci::type::ActivityExecutionStatusEnum& value) = 0;

  /** Sets the value of the enumeration identified by ActivityExecutionStatus.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ActivityExecutionStatusType& setActivityExecutionStatus(uci::type::ActivityExecutionStatusEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the bounded list identified by TransitionHistory.
    *
    * @return A const reference to the bounded list identified by TransitionHistory.
    */
  virtual const uci::type::ActivityExecutionStatusType::TransitionHistory& getTransitionHistory() const = 0;

  /** Returns a reference to the bounded list identified by TransitionHistory.
    *
    * @return A reference to the bounded list identified by TransitionHistory.
    */
  virtual uci::type::ActivityExecutionStatusType::TransitionHistory& getTransitionHistory() = 0;

  /** Sets the bounded list identified by TransitionHistory.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ActivityExecutionStatusType& setTransitionHistory(const uci::type::ActivityExecutionStatusType::TransitionHistory& value) = 0;

  /** Returns a const reference to the bounded list identified by ActualActivityID.
    *
    * @return A const reference to the bounded list identified by ActualActivityID.
    */
  virtual const uci::type::ActivityExecutionStatusType::ActualActivityID& getActualActivityID() const = 0;

  /** Returns a reference to the bounded list identified by ActualActivityID.
    *
    * @return A reference to the bounded list identified by ActualActivityID.
    */
  virtual uci::type::ActivityExecutionStatusType::ActualActivityID& getActualActivityID() = 0;

  /** Sets the bounded list identified by ActualActivityID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ActivityExecutionStatusType& setActualActivityID(const uci::type::ActivityExecutionStatusType::ActualActivityID& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ActivityExecutionStatusType() {
  }

  /** The destructor [only available to derived classes]. */
  ~ActivityExecutionStatusType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ActivityExecutionStatusType to copy from.
    */
  ActivityExecutionStatusType(const ActivityExecutionStatusType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ActivityExecutionStatusType to the contents of the
    * ActivityExecutionStatusType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The ActivityExecutionStatusType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this ActivityExecutionStatusType.
    * @return A reference to this ActivityExecutionStatusType.
    */
  ActivityExecutionStatusType& operator=(const ActivityExecutionStatusType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ACTIVITYEXECUTIONSTATUSTYPE_H

