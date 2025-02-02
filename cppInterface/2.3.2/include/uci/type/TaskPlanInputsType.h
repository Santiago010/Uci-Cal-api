/** @file TaskPlanInputsType.h
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

#ifndef UCI_TYPE_TASKPLANINPUTSTYPE_H
#define UCI_TYPE_TASKPLANINPUTSTYPE_H

#include "../base/BoundedList.h"
#include "../base/export.h"
#include "PlanInputsCoreType.h"
#include "RequirementAssociationConstraintType.h"
#include "RequirementPlanningCandidateType.h"
#include "TaskAllocationType.h"
#include "TaskPlanConstraintType.h"
#include "TaskPlanPartsType.h"

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
class TaskPlanInputsType : public virtual PlanInputsCoreType {
public:

  /** This method constructs a new TaskPlanInputsType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed TaskPlanInputsType.
    */
  static UCI_EXPORT TaskPlanInputsType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new TaskPlanInputsType initializing the data accessed by the new TaskPlanInputsType using
    * the data accessed by the specified TaskPlanInputsType (cloning).
    *
    * @param accessor The TaskPlanInputsType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created TaskPlanInputsType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed TaskPlanInputsType.
    */
  static UCI_EXPORT TaskPlanInputsType& create(const TaskPlanInputsType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified TaskPlanInputsType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The TaskPlanInputsType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(TaskPlanInputsType& accessor);

  /** Returns this accessor's type constant, i.e. taskPlanInputsType.
    *
    * @return This accessor's type constant, i.e. taskPlanInputsType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::taskPlanInputsType;
  }

  /** Returns the version that was initialized from the uci:version attribute of TaskPlanInputsType.
    *
    * @return The version that was initialized from the uci:version attribute of TaskPlanInputsType.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const TaskPlanInputsType& accessor) = 0;

  /** Indicates specific Systems to consider and plan for along with System-specific planning constraints. If omitted, all
    * Tiers and all Systems at and below those that the planning process is applicable to shall be planned. A System is a
    * planning "candidate" because its plan may or may not change as a result of the command; zero to one Plans per *Plan
    * type will potentially be created for each candidate. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::RequirementPlanningCandidateType, uci::type::accessorType::requirementPlanningCandidateType> PlanningCandidate;

  /** Indicates a proposed Task for the planning process. A Task given here is added to any Tasks provided in the sibling
    * ProposedTaskPlan to create the full set of Tasks to be considered by the planning process. A Task given here
    * overrides the same Task in the sibling ProposedTaskPlan. An empty list here, combined with no sibling
    * ProposedTaskPlan is considered a command to deallocate previously allocated Tasks. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::TaskAllocationType, uci::type::accessorType::taskAllocationType> ProposedTask;

  /** Indicates an association between Requirements that is a constraint on how they are allocated and planned.
    * [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::RequirementAssociationConstraintType, uci::type::accessorType::requirementAssociationConstraintType> AssociationConstraint;

  /** Returns a const reference to the bounded list identified by PlanningCandidate.
    *
    * @return A const reference to the bounded list identified by PlanningCandidate.
    */
  virtual const uci::type::TaskPlanInputsType::PlanningCandidate& getPlanningCandidate() const = 0;

  /** Returns a reference to the bounded list identified by PlanningCandidate.
    *
    * @return A reference to the bounded list identified by PlanningCandidate.
    */
  virtual uci::type::TaskPlanInputsType::PlanningCandidate& getPlanningCandidate() = 0;

  /** Sets the bounded list identified by PlanningCandidate.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TaskPlanInputsType& setPlanningCandidate(const uci::type::TaskPlanInputsType::PlanningCandidate& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ProposedTaskPlan.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ProposedTaskPlan.
    */
  virtual const uci::type::TaskPlanConstraintType& getProposedTaskPlan() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ProposedTaskPlan.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ProposedTaskPlan.
    */
  virtual uci::type::TaskPlanConstraintType& getProposedTaskPlan() = 0;

  /** Sets the complex content identified by ProposedTaskPlan to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ProposedTaskPlan.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TaskPlanInputsType& setProposedTaskPlan(const uci::type::TaskPlanConstraintType& value) = 0;

  /** Returns whether the Element identified by ProposedTaskPlan exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ProposedTaskPlan is enabled or not.
    */
  virtual bool hasProposedTaskPlan() const = 0;

  /** Enables the Element identified by ProposedTaskPlan.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ProposedTaskPlan.
    */
  virtual uci::type::TaskPlanConstraintType& enableProposedTaskPlan(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ProposedTaskPlan.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TaskPlanInputsType& clearProposedTaskPlan() = 0;

  /** Returns a const reference to the bounded list identified by ProposedTask.
    *
    * @return A const reference to the bounded list identified by ProposedTask.
    */
  virtual const uci::type::TaskPlanInputsType::ProposedTask& getProposedTask() const = 0;

  /** Returns a reference to the bounded list identified by ProposedTask.
    *
    * @return A reference to the bounded list identified by ProposedTask.
    */
  virtual uci::type::TaskPlanInputsType::ProposedTask& getProposedTask() = 0;

  /** Sets the bounded list identified by ProposedTask.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TaskPlanInputsType& setProposedTask(const uci::type::TaskPlanInputsType::ProposedTask& value) = 0;

  /** Returns a const reference to the bounded list identified by AssociationConstraint.
    *
    * @return A const reference to the bounded list identified by AssociationConstraint.
    */
  virtual const uci::type::TaskPlanInputsType::AssociationConstraint& getAssociationConstraint() const = 0;

  /** Returns a reference to the bounded list identified by AssociationConstraint.
    *
    * @return A reference to the bounded list identified by AssociationConstraint.
    */
  virtual uci::type::TaskPlanInputsType::AssociationConstraint& getAssociationConstraint() = 0;

  /** Sets the bounded list identified by AssociationConstraint.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TaskPlanInputsType& setAssociationConstraint(const uci::type::TaskPlanInputsType::AssociationConstraint& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by OutputPlanParts.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by OutputPlanParts.
    */
  virtual const uci::type::TaskPlanPartsType& getOutputPlanParts() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by OutputPlanParts.
    *
    * @return A reference to the accessor that provides access to the complex content identified by OutputPlanParts.
    */
  virtual uci::type::TaskPlanPartsType& getOutputPlanParts() = 0;

  /** Sets the complex content identified by OutputPlanParts to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by OutputPlanParts.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TaskPlanInputsType& setOutputPlanParts(const uci::type::TaskPlanPartsType& value) = 0;

  /** Returns whether the Element identified by OutputPlanParts exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by OutputPlanParts is enabled or not.
    */
  virtual bool hasOutputPlanParts() const = 0;

  /** Enables the Element identified by OutputPlanParts.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by OutputPlanParts.
    */
  virtual uci::type::TaskPlanPartsType& enableOutputPlanParts(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by OutputPlanParts.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TaskPlanInputsType& clearOutputPlanParts() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  TaskPlanInputsType() {
  }

  /** The destructor [only available to derived classes]. */
  ~TaskPlanInputsType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The TaskPlanInputsType to copy from.
    */
  TaskPlanInputsType(const TaskPlanInputsType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this TaskPlanInputsType to the contents of the TaskPlanInputsType on
    * the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The TaskPlanInputsType on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this TaskPlanInputsType.
    * @return A reference to this TaskPlanInputsType.
    */
  TaskPlanInputsType& operator=(const TaskPlanInputsType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_TASKPLANINPUTSTYPE_H

