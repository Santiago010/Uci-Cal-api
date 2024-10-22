/** @file TaskCapabilityCommandType.h
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

#ifndef UCI_TYPE_TASKCAPABILITYCOMMANDTYPE_H
#define UCI_TYPE_TASKCAPABILITYCOMMANDTYPE_H

#include "../base/export.h"
#include "CapabilityCommandBaseType.h"
#include "PlanReferenceType.h"
#include "RequirementAllocationDetailsType.h"
#include "RequirementConstraintsType.h"
#include "TaskID_Type.h"

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
class TaskCapabilityCommandType : public virtual CapabilityCommandBaseType {
public:

  /** This method constructs a new TaskCapabilityCommandType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed TaskCapabilityCommandType.
    */
  static UCI_EXPORT TaskCapabilityCommandType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new TaskCapabilityCommandType initializing the data accessed by the new
    * TaskCapabilityCommandType using the data accessed by the specified TaskCapabilityCommandType (cloning).
    *
    * @param accessor The TaskCapabilityCommandType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created TaskCapabilityCommandType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed TaskCapabilityCommandType.
    */
  static UCI_EXPORT TaskCapabilityCommandType& create(const TaskCapabilityCommandType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified TaskCapabilityCommandType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The TaskCapabilityCommandType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(TaskCapabilityCommandType& accessor);

  /** Returns this accessor's type constant, i.e. taskCapabilityCommandType.
    *
    * @return This accessor's type constant, i.e. taskCapabilityCommandType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::taskCapabilityCommandType;
  }

  /** Returns the version that was initialized from the uci:version attribute of TaskCapabilityCommandType.
    *
    * @return The version that was initialized from the uci:version attribute of TaskCapabilityCommandType.
    */
  static std::string getUCITypeVersion() {
    return "003.000.002.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const TaskCapabilityCommandType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by TaskID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by TaskID.
    */
  virtual const uci::type::TaskID_Type& getTaskID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by TaskID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by TaskID.
    */
  virtual uci::type::TaskID_Type& getTaskID() = 0;

  /** Sets the complex content identified by TaskID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by TaskID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TaskCapabilityCommandType& setTaskID(const uci::type::TaskID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by AssociatedPlan.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by AssociatedPlan.
    */
  virtual const uci::type::PlanReferenceType& getAssociatedPlan() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by AssociatedPlan.
    *
    * @return A reference to the accessor that provides access to the complex content identified by AssociatedPlan.
    */
  virtual uci::type::PlanReferenceType& getAssociatedPlan() = 0;

  /** Sets the complex content identified by AssociatedPlan to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by AssociatedPlan.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TaskCapabilityCommandType& setAssociatedPlan(const uci::type::PlanReferenceType& value) = 0;

  /** Returns whether the Element identified by AssociatedPlan exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by AssociatedPlan is enabled or not.
    */
  virtual bool hasAssociatedPlan() const = 0;

  /** Enables the Element identified by AssociatedPlan.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by AssociatedPlan.
    */
  virtual uci::type::PlanReferenceType& enableAssociatedPlan(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by AssociatedPlan.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TaskCapabilityCommandType& clearAssociatedPlan() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ConstraintOverride.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ConstraintOverride.
    */
  virtual const uci::type::RequirementConstraintsType& getConstraintOverride() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ConstraintOverride.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ConstraintOverride.
    */
  virtual uci::type::RequirementConstraintsType& getConstraintOverride() = 0;

  /** Sets the complex content identified by ConstraintOverride to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ConstraintOverride.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TaskCapabilityCommandType& setConstraintOverride(const uci::type::RequirementConstraintsType& value) = 0;

  /** Returns whether the Element identified by ConstraintOverride exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ConstraintOverride is enabled or not.
    */
  virtual bool hasConstraintOverride() const = 0;

  /** Enables the Element identified by ConstraintOverride.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ConstraintOverride.
    */
  virtual uci::type::RequirementConstraintsType& enableConstraintOverride(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ConstraintOverride.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TaskCapabilityCommandType& clearConstraintOverride() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by OtherOverride.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by OtherOverride.
    */
  virtual const uci::type::RequirementAllocationDetailsType& getOtherOverride() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by OtherOverride.
    *
    * @return A reference to the accessor that provides access to the complex content identified by OtherOverride.
    */
  virtual uci::type::RequirementAllocationDetailsType& getOtherOverride() = 0;

  /** Sets the complex content identified by OtherOverride to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by OtherOverride.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TaskCapabilityCommandType& setOtherOverride(const uci::type::RequirementAllocationDetailsType& value) = 0;

  /** Returns whether the Element identified by OtherOverride exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by OtherOverride is enabled or not.
    */
  virtual bool hasOtherOverride() const = 0;

  /** Enables the Element identified by OtherOverride.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by OtherOverride.
    */
  virtual uci::type::RequirementAllocationDetailsType& enableOtherOverride(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by OtherOverride.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TaskCapabilityCommandType& clearOtherOverride() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  TaskCapabilityCommandType() {
  }

  /** The destructor [only available to derived classes]. */
  ~TaskCapabilityCommandType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The TaskCapabilityCommandType to copy from.
    */
  TaskCapabilityCommandType(const TaskCapabilityCommandType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this TaskCapabilityCommandType to the contents of the
    * TaskCapabilityCommandType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The TaskCapabilityCommandType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this TaskCapabilityCommandType.
    * @return A reference to this TaskCapabilityCommandType.
    */
  TaskCapabilityCommandType& operator=(const TaskCapabilityCommandType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_TASKCAPABILITYCOMMANDTYPE_H

