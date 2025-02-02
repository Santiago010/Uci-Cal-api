/** @file EffectPlanExecutionStateType.h
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

#ifndef UCI_TYPE_EFFECTPLANEXECUTIONSTATETYPE_H
#define UCI_TYPE_EFFECTPLANEXECUTIONSTATETYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "EffectPlanID_Type.h"
#include "PlanExecutionStateEnum.h"

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
class EffectPlanExecutionStateType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new EffectPlanExecutionStateType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EffectPlanExecutionStateType.
    */
  static UCI_EXPORT EffectPlanExecutionStateType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new EffectPlanExecutionStateType initializing the data accessed by the new
    * EffectPlanExecutionStateType using the data accessed by the specified EffectPlanExecutionStateType (cloning).
    *
    * @param accessor The EffectPlanExecutionStateType that provides access to the data that is to be used to initialize
    *      the data accessed by the new created EffectPlanExecutionStateType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EffectPlanExecutionStateType.
    */
  static UCI_EXPORT EffectPlanExecutionStateType& create(const EffectPlanExecutionStateType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified EffectPlanExecutionStateType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The EffectPlanExecutionStateType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(EffectPlanExecutionStateType& accessor);

  /** Returns this accessor's type constant, i.e. effectPlanExecutionStateType.
    *
    * @return This accessor's type constant, i.e. effectPlanExecutionStateType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::effectPlanExecutionStateType;
  }

  /** Returns the version that was initialized from the uci:version attribute of EffectPlanExecutionStateType.
    *
    * @return The version that was initialized from the uci:version attribute of EffectPlanExecutionStateType.
    */
  static std::string getUCITypeVersion() {
    return "002.000.001.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const EffectPlanExecutionStateType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by PlanID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by PlanID.
    */
  virtual const uci::type::EffectPlanID_Type& getPlanID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by PlanID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by PlanID.
    */
  virtual uci::type::EffectPlanID_Type& getPlanID() = 0;

  /** Sets the complex content identified by PlanID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by PlanID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EffectPlanExecutionStateType& setPlanID(const uci::type::EffectPlanID_Type& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by PlanExecutionState.
    *
    * @return A const reference to the value of the enumeration identified by PlanExecutionState.
    */
  virtual const uci::type::PlanExecutionStateEnum& getPlanExecutionState() const = 0;

  /** Returns a reference to the value of the enumeration identified by PlanExecutionState.
    *
    * @return A reference to the value of the enumeration identified by PlanExecutionState.
    */
  virtual uci::type::PlanExecutionStateEnum& getPlanExecutionState() = 0;

  /** Sets the value of the enumeration identified by PlanExecutionState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EffectPlanExecutionStateType& setPlanExecutionState(const uci::type::PlanExecutionStateEnum& value) = 0;

  /** Sets the value of the enumeration identified by PlanExecutionState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EffectPlanExecutionStateType& setPlanExecutionState(uci::type::PlanExecutionStateEnum::EnumerationItem value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  EffectPlanExecutionStateType() {
  }

  /** The destructor [only available to derived classes]. */
  ~EffectPlanExecutionStateType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The EffectPlanExecutionStateType to copy from.
    */
  EffectPlanExecutionStateType(const EffectPlanExecutionStateType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this EffectPlanExecutionStateType to the contents of the
    * EffectPlanExecutionStateType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The EffectPlanExecutionStateType on the right hand side (rhs) of the assignment operator whose contents
    *      are used to set the contents of this EffectPlanExecutionStateType.
    * @return A reference to this EffectPlanExecutionStateType.
    */
  EffectPlanExecutionStateType& operator=(const EffectPlanExecutionStateType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_EFFECTPLANEXECUTIONSTATETYPE_H

