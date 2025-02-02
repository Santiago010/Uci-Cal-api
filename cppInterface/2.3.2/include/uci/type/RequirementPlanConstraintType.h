/** @file RequirementPlanConstraintType.h
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

#ifndef UCI_TYPE_REQUIREMENTPLANCONSTRAINTTYPE_H
#define UCI_TYPE_REQUIREMENTPLANCONSTRAINTTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "ActionPlanConstraintType.h"
#include "EffectPlanConstraintType.h"
#include "ResponsePlanConstraintType.h"
#include "TaskPlanConstraintType.h"

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
class RequirementPlanConstraintType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new RequirementPlanConstraintType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed RequirementPlanConstraintType.
    */
  static UCI_EXPORT RequirementPlanConstraintType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new RequirementPlanConstraintType initializing the data accessed by the new
    * RequirementPlanConstraintType using the data accessed by the specified RequirementPlanConstraintType (cloning).
    *
    * @param accessor The RequirementPlanConstraintType that provides access to the data that is to be used to initialize
    *      the data accessed by the new created RequirementPlanConstraintType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed RequirementPlanConstraintType.
    */
  static UCI_EXPORT RequirementPlanConstraintType& create(const RequirementPlanConstraintType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified RequirementPlanConstraintType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The RequirementPlanConstraintType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(RequirementPlanConstraintType& accessor);

  /** Returns this accessor's type constant, i.e. requirementPlanConstraintType.
    *
    * @return This accessor's type constant, i.e. requirementPlanConstraintType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::requirementPlanConstraintType;
  }

  /** Returns the version that was initialized from the uci:version attribute of RequirementPlanConstraintType.
    *
    * @return The version that was initialized from the uci:version attribute of RequirementPlanConstraintType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const RequirementPlanConstraintType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ProposedEffectPlan.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ProposedEffectPlan.
    */
  virtual const uci::type::EffectPlanConstraintType& getProposedEffectPlan() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ProposedEffectPlan.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ProposedEffectPlan.
    */
  virtual uci::type::EffectPlanConstraintType& getProposedEffectPlan() = 0;

  /** Sets the complex content identified by ProposedEffectPlan to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ProposedEffectPlan.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementPlanConstraintType& setProposedEffectPlan(const uci::type::EffectPlanConstraintType& value) = 0;

  /** Returns whether the Element identified by ProposedEffectPlan exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ProposedEffectPlan is enabled or not.
    */
  virtual bool hasProposedEffectPlan() const = 0;

  /** Enables the Element identified by ProposedEffectPlan.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ProposedEffectPlan.
    */
  virtual uci::type::EffectPlanConstraintType& enableProposedEffectPlan(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ProposedEffectPlan.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementPlanConstraintType& clearProposedEffectPlan() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ProposedActionPlan.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ProposedActionPlan.
    */
  virtual const uci::type::ActionPlanConstraintType& getProposedActionPlan() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ProposedActionPlan.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ProposedActionPlan.
    */
  virtual uci::type::ActionPlanConstraintType& getProposedActionPlan() = 0;

  /** Sets the complex content identified by ProposedActionPlan to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ProposedActionPlan.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementPlanConstraintType& setProposedActionPlan(const uci::type::ActionPlanConstraintType& value) = 0;

  /** Returns whether the Element identified by ProposedActionPlan exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ProposedActionPlan is enabled or not.
    */
  virtual bool hasProposedActionPlan() const = 0;

  /** Enables the Element identified by ProposedActionPlan.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ProposedActionPlan.
    */
  virtual uci::type::ActionPlanConstraintType& enableProposedActionPlan(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ProposedActionPlan.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementPlanConstraintType& clearProposedActionPlan() = 0;

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
  virtual uci::type::RequirementPlanConstraintType& setProposedTaskPlan(const uci::type::TaskPlanConstraintType& value) = 0;

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
  virtual uci::type::RequirementPlanConstraintType& clearProposedTaskPlan() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ProposedResponsePlan.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ProposedResponsePlan.
    */
  virtual const uci::type::ResponsePlanConstraintType& getProposedResponsePlan() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ProposedResponsePlan.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ProposedResponsePlan.
    */
  virtual uci::type::ResponsePlanConstraintType& getProposedResponsePlan() = 0;

  /** Sets the complex content identified by ProposedResponsePlan to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ProposedResponsePlan.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementPlanConstraintType& setProposedResponsePlan(const uci::type::ResponsePlanConstraintType& value) = 0;

  /** Returns whether the Element identified by ProposedResponsePlan exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ProposedResponsePlan is enabled or not.
    */
  virtual bool hasProposedResponsePlan() const = 0;

  /** Enables the Element identified by ProposedResponsePlan.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ProposedResponsePlan.
    */
  virtual uci::type::ResponsePlanConstraintType& enableProposedResponsePlan(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ProposedResponsePlan.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementPlanConstraintType& clearProposedResponsePlan() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  RequirementPlanConstraintType() {
  }

  /** The destructor [only available to derived classes]. */
  ~RequirementPlanConstraintType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The RequirementPlanConstraintType to copy from.
    */
  RequirementPlanConstraintType(const RequirementPlanConstraintType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this RequirementPlanConstraintType to the contents of the
    * RequirementPlanConstraintType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The RequirementPlanConstraintType on the right hand side (rhs) of the assignment operator whose contents
    *      are used to set the contents of this RequirementPlanConstraintType.
    * @return A reference to this RequirementPlanConstraintType.
    */
  RequirementPlanConstraintType& operator=(const RequirementPlanConstraintType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_REQUIREMENTPLANCONSTRAINTTYPE_H

