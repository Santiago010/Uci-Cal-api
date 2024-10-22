/** @file ActivityExecutionStatusType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:11 PM
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

#ifndef ASB_UCI_TYPE_ACTIVITYEXECUTIONSTATUSTYPE_H
#define ASB_UCI_TYPE_ACTIVITYEXECUTIONSTATUSTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/ActivityExecutionStatusEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActivityExecutionStatusType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ActivityID_Type;
class PlannedActivityID_Type;
class TransitionStatusType;

/** See annotations in child elements and messages/elements that use this type for details. */
class ActivityExecutionStatusType : public virtual uci::type::ActivityExecutionStatusType {
public:
  /** Indicates an actual current/past transition of the Planned Activity. See *ActivityPlan for planned transitions.
    * [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using TransitionHistory = asb_uci::base::BoundedList<uci::type::TransitionStatusType, uci::type::accessorType::transitionStatusType, asb_uci::type::TransitionStatusType>;

  /** Indicates an actual [Capability]Activity associated with execution of the sibling PlannedActivityID. [Occurrences:
    * Minimum: 0; Maximum: MAX_LENGTH]
    */
  using ActualActivityID = asb_uci::base::BoundedList<uci::type::ActivityID_Type, uci::type::accessorType::activityID_Type, asb_uci::type::ActivityID_Type>;

  /** The constructor */
  ActivityExecutionStatusType();

  /** The copy constructor
    *
    * @param rhs The ActivityExecutionStatusType to copy from
    */
  ActivityExecutionStatusType(const ActivityExecutionStatusType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The ActivityExecutionStatusType to move from
    */
  ActivityExecutionStatusType(ActivityExecutionStatusType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The ActivityExecutionStatusType to copy from
    * @return The ActivityExecutionStatusType that was assigned
    */
  ActivityExecutionStatusType& operator=(const ActivityExecutionStatusType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The ActivityExecutionStatusType to move from
    * @return The ActivityExecutionStatusType that was assigned
    */
  ActivityExecutionStatusType& operator=(ActivityExecutionStatusType&& rhs) = delete;

  /** The destructor */
  virtual ~ActivityExecutionStatusType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ActivityExecutionStatusType whose contents are to be used to set this
    *      uci::type::ActivityExecutionStatusType's contents.
    */
  void copy(const uci::type::ActivityExecutionStatusType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ActivityExecutionStatusType whose contents are to be used to set this
    *      uci::type::ActivityExecutionStatusType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::ActivityExecutionStatusType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the PlannedActivityID field contained in this message fragment
    *
    * @return The const reference to the accessor to the PlannedActivityID field.
    */
  const uci::type::PlannedActivityID_Type& getPlannedActivityID() const override;

  /** Returns the accessor to the PlannedActivityID field contained in this message fragment
    *
    * @return The reference to the accessor to the PlannedActivityID field.
    */
  uci::type::PlannedActivityID_Type& getPlannedActivityID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityExecutionStatusType& setPlannedActivityID(const uci::type::PlannedActivityID_Type& accessor) override;

  /** Returns the contents of the message's ActivityExecutionStatus field
    *
    * @return The contents of the ActivityExecutionStatus field
    */
  const uci::type::ActivityExecutionStatusEnum& getActivityExecutionStatus() const override;

  /** Returns the contents of the message's ActivityExecutionStatus field
    *
    * @return The contents of the ActivityExecutionStatus field
    */
  uci::type::ActivityExecutionStatusEnum& getActivityExecutionStatus() override;

  /** Sets the contents of the message's ActivityExecutionStatus field
    *
    * @param accessor The accessor to use to set the ActivityExecutionStatus field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityExecutionStatusType& setActivityExecutionStatus(const uci::type::ActivityExecutionStatusEnum& accessor) override;

  /** Sets the contents of the message's ActivityExecutionStatus field
    *
    * @param value The new value to set the ActivityExecutionStatus field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityExecutionStatusType& setActivityExecutionStatus(uci::type::ActivityExecutionStatusEnum::EnumerationItem value) override;

  /** Returns the accessor to the TransitionHistory field contained in this message fragment
    *
    * @return The const reference to the accessor to the TransitionHistory field.
    */
  const uci::type::ActivityExecutionStatusType::TransitionHistory& getTransitionHistory() const override;

  /** Returns the accessor to the TransitionHistory field contained in this message fragment
    *
    * @return The reference to the accessor to the TransitionHistory field.
    */
  uci::type::ActivityExecutionStatusType::TransitionHistory& getTransitionHistory() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityExecutionStatusType& setTransitionHistory(const uci::type::ActivityExecutionStatusType::TransitionHistory& accessor) override;

  /** Returns the accessor to the ActualActivityID field contained in this message fragment
    *
    * @return The const reference to the accessor to the ActualActivityID field.
    */
  const uci::type::ActivityExecutionStatusType::ActualActivityID& getActualActivityID() const override;

  /** Returns the accessor to the ActualActivityID field contained in this message fragment
    *
    * @return The reference to the accessor to the ActualActivityID field.
    */
  uci::type::ActivityExecutionStatusType::ActualActivityID& getActualActivityID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActivityExecutionStatusType& setActualActivityID(const uci::type::ActivityExecutionStatusType::ActualActivityID& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<ActivityExecutionStatusType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::ActivityExecutionStatusType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

  /** 
    *
    * @param accessor .
    * @param propTree .
    * @param nodeName .
    * @param createNode .
    * @param addTypeAttribute .
    * @param checkIfDerivation .
    * @param topLevel .
    * @return .
    */
  static std::string serialize(const uci::type::ActivityExecutionStatusType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<PlannedActivityID_Type> plannedActivityID_Accessor;
  std::unique_ptr<ActivityExecutionStatusEnum> activityExecutionStatus_Accessor;
  std::unique_ptr<TransitionHistory> transitionHistory_Accessor;
  std::unique_ptr<ActualActivityID> actualActivityID_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_ACTIVITYEXECUTIONSTATUSTYPE_H
