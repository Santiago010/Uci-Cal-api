/** @file ActionPlanConstraintType.h
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

#ifndef UCI_TYPE_ACTIONPLANCONSTRAINTTYPE_H
#define UCI_TYPE_ACTIONPLANCONSTRAINTTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "ActionPlanID_Type.h"
#include "ActionTypeEnum.h"
#include "PlanChangeableConstraintsEnum.h"

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
class ActionPlanConstraintType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new ActionPlanConstraintType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ActionPlanConstraintType.
    */
  static UCI_EXPORT ActionPlanConstraintType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ActionPlanConstraintType initializing the data accessed by the new
    * ActionPlanConstraintType using the data accessed by the specified ActionPlanConstraintType (cloning).
    *
    * @param accessor The ActionPlanConstraintType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created ActionPlanConstraintType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ActionPlanConstraintType.
    */
  static UCI_EXPORT ActionPlanConstraintType& create(const ActionPlanConstraintType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ActionPlanConstraintType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The ActionPlanConstraintType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ActionPlanConstraintType& accessor);

  /** Returns this accessor's type constant, i.e. actionPlanConstraintType.
    *
    * @return This accessor's type constant, i.e. actionPlanConstraintType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::actionPlanConstraintType;
  }

  /** Returns the version that was initialized from the uci:version attribute of ActionPlanConstraintType.
    *
    * @return The version that was initialized from the uci:version attribute of ActionPlanConstraintType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.001.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ActionPlanConstraintType& accessor) = 0;

  /** Indicates a type of Action in the ActionPlan referenced by the sibling ActionPlanID element that constrains the new
    * *Plan. If any are given, only Actions of the specified type or types are constraints. If omitted, all Action types
    * are constraints. List size for this element is based on "Select All That Apply" condition. [Occurrences: Minimum: 0;
    * Maximum: 84]
    */
  typedef uci::base::BoundedList<uci::type::ActionTypeEnum, uci::type::accessorType::actionTypeEnum> ActionType;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ActionPlanID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ActionPlanID.
    */
  virtual const uci::type::ActionPlanID_Type& getActionPlanID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ActionPlanID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ActionPlanID.
    */
  virtual uci::type::ActionPlanID_Type& getActionPlanID() = 0;

  /** Sets the complex content identified by ActionPlanID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ActionPlanID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ActionPlanConstraintType& setActionPlanID(const uci::type::ActionPlanID_Type& value) = 0;

  /** Returns whether the Element identified by ActionPlanID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ActionPlanID is enabled or not.
    */
  virtual bool hasActionPlanID() const = 0;

  /** Enables the Element identified by ActionPlanID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ActionPlanID.
    */
  virtual uci::type::ActionPlanID_Type& enableActionPlanID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ActionPlanID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ActionPlanConstraintType& clearActionPlanID() = 0;

  /** Returns a const reference to the value of the enumeration identified by ChangeableAllocations.
    *
    * @return A const reference to the value of the enumeration identified by ChangeableAllocations.
    */
  virtual const uci::type::PlanChangeableConstraintsEnum& getChangeableAllocations() const = 0;

  /** Returns a reference to the value of the enumeration identified by ChangeableAllocations.
    *
    * @return A reference to the value of the enumeration identified by ChangeableAllocations.
    */
  virtual uci::type::PlanChangeableConstraintsEnum& getChangeableAllocations() = 0;

  /** Sets the value of the enumeration identified by ChangeableAllocations.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ActionPlanConstraintType& setChangeableAllocations(const uci::type::PlanChangeableConstraintsEnum& value) = 0;

  /** Sets the value of the enumeration identified by ChangeableAllocations.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ActionPlanConstraintType& setChangeableAllocations(uci::type::PlanChangeableConstraintsEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the bounded list identified by ActionType.
    *
    * @return A const reference to the bounded list identified by ActionType.
    */
  virtual const uci::type::ActionPlanConstraintType::ActionType& getActionType() const = 0;

  /** Returns a reference to the bounded list identified by ActionType.
    *
    * @return A reference to the bounded list identified by ActionType.
    */
  virtual uci::type::ActionPlanConstraintType::ActionType& getActionType() = 0;

  /** Sets the bounded list identified by ActionType.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ActionPlanConstraintType& setActionType(const uci::type::ActionPlanConstraintType::ActionType& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ActionPlanConstraintType() {
  }

  /** The destructor [only available to derived classes]. */
  ~ActionPlanConstraintType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ActionPlanConstraintType to copy from.
    */
  ActionPlanConstraintType(const ActionPlanConstraintType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ActionPlanConstraintType to the contents of the
    * ActionPlanConstraintType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The ActionPlanConstraintType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this ActionPlanConstraintType.
    * @return A reference to this ActionPlanConstraintType.
    */
  ActionPlanConstraintType& operator=(const ActionPlanConstraintType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ACTIONPLANCONSTRAINTTYPE_H

