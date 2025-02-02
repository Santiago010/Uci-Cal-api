/** @file RequirementAllocationCommandType.h
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

#ifndef UCI_TYPE_REQUIREMENTALLOCATIONCOMMANDTYPE_H
#define UCI_TYPE_REQUIREMENTALLOCATIONCOMMANDTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "ActionAllocationType.h"
#include "EffectAllocationType.h"
#include "ResponseAllocationType.h"
#include "TaskAllocationType.h"

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
class RequirementAllocationCommandType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new RequirementAllocationCommandType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed RequirementAllocationCommandType.
    */
  static UCI_EXPORT RequirementAllocationCommandType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new RequirementAllocationCommandType initializing the data accessed by the new
    * RequirementAllocationCommandType using the data accessed by the specified RequirementAllocationCommandType (cloning).
    *
    * @param accessor The RequirementAllocationCommandType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created RequirementAllocationCommandType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed RequirementAllocationCommandType.
    */
  static UCI_EXPORT RequirementAllocationCommandType& create(const RequirementAllocationCommandType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified RequirementAllocationCommandType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The RequirementAllocationCommandType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(RequirementAllocationCommandType& accessor);

  /** Returns this accessor's type constant, i.e. requirementAllocationCommandType.
    *
    * @return This accessor's type constant, i.e. requirementAllocationCommandType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::requirementAllocationCommandType;
  }

  /** Returns the version that was initialized from the uci:version attribute of RequirementAllocationCommandType.
    *
    * @return The version that was initialized from the uci:version attribute of RequirementAllocationCommandType.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const RequirementAllocationCommandType& accessor) = 0;

  /** Indicates a proposed Effect. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::EffectAllocationType, uci::type::accessorType::effectAllocationType> ProposedEffect;

  /** Indicates a proposed Action. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::ActionAllocationType, uci::type::accessorType::actionAllocationType> ProposedAction;

  /** Indicates a proposed Task. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::TaskAllocationType, uci::type::accessorType::taskAllocationType> ProposedTask;

  /** Indicates a proposed Response. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::ResponseAllocationType, uci::type::accessorType::responseAllocationType> ProposedResponse;

  /** Returns a const reference to the bounded list identified by ProposedEffect.
    *
    * @return A const reference to the bounded list identified by ProposedEffect.
    */
  virtual const uci::type::RequirementAllocationCommandType::ProposedEffect& getProposedEffect() const = 0;

  /** Returns a reference to the bounded list identified by ProposedEffect.
    *
    * @return A reference to the bounded list identified by ProposedEffect.
    */
  virtual uci::type::RequirementAllocationCommandType::ProposedEffect& getProposedEffect() = 0;

  /** Sets the bounded list identified by ProposedEffect.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementAllocationCommandType& setProposedEffect(const uci::type::RequirementAllocationCommandType::ProposedEffect& value) = 0;

  /** Returns a const reference to the bounded list identified by ProposedAction.
    *
    * @return A const reference to the bounded list identified by ProposedAction.
    */
  virtual const uci::type::RequirementAllocationCommandType::ProposedAction& getProposedAction() const = 0;

  /** Returns a reference to the bounded list identified by ProposedAction.
    *
    * @return A reference to the bounded list identified by ProposedAction.
    */
  virtual uci::type::RequirementAllocationCommandType::ProposedAction& getProposedAction() = 0;

  /** Sets the bounded list identified by ProposedAction.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementAllocationCommandType& setProposedAction(const uci::type::RequirementAllocationCommandType::ProposedAction& value) = 0;

  /** Returns a const reference to the bounded list identified by ProposedTask.
    *
    * @return A const reference to the bounded list identified by ProposedTask.
    */
  virtual const uci::type::RequirementAllocationCommandType::ProposedTask& getProposedTask() const = 0;

  /** Returns a reference to the bounded list identified by ProposedTask.
    *
    * @return A reference to the bounded list identified by ProposedTask.
    */
  virtual uci::type::RequirementAllocationCommandType::ProposedTask& getProposedTask() = 0;

  /** Sets the bounded list identified by ProposedTask.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementAllocationCommandType& setProposedTask(const uci::type::RequirementAllocationCommandType::ProposedTask& value) = 0;

  /** Returns a const reference to the bounded list identified by ProposedResponse.
    *
    * @return A const reference to the bounded list identified by ProposedResponse.
    */
  virtual const uci::type::RequirementAllocationCommandType::ProposedResponse& getProposedResponse() const = 0;

  /** Returns a reference to the bounded list identified by ProposedResponse.
    *
    * @return A reference to the bounded list identified by ProposedResponse.
    */
  virtual uci::type::RequirementAllocationCommandType::ProposedResponse& getProposedResponse() = 0;

  /** Sets the bounded list identified by ProposedResponse.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RequirementAllocationCommandType& setProposedResponse(const uci::type::RequirementAllocationCommandType::ProposedResponse& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  RequirementAllocationCommandType() {
  }

  /** The destructor [only available to derived classes]. */
  ~RequirementAllocationCommandType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The RequirementAllocationCommandType to copy from.
    */
  RequirementAllocationCommandType(const RequirementAllocationCommandType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this RequirementAllocationCommandType to the contents of the
    * RequirementAllocationCommandType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The RequirementAllocationCommandType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this RequirementAllocationCommandType.
    * @return A reference to this RequirementAllocationCommandType.
    */
  RequirementAllocationCommandType& operator=(const RequirementAllocationCommandType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_REQUIREMENTALLOCATIONCOMMANDTYPE_H

