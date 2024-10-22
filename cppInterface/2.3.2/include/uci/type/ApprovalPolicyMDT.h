/** @file ApprovalPolicyMDT.h
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

#ifndef UCI_TYPE_APPROVALPOLICYMDT_H
#define UCI_TYPE_APPROVALPOLICYMDT_H

#include "../base/BoundedList.h"
#include "../base/export.h"
#include "ApprovalPolicyID_Type.h"
#include "DataRecordBaseType.h"
#include "DateTimeType.h"
#include "MissionTraceabilityType.h"
#include "PlanActivationPolicyType.h"
#include "PlanPolicyType.h"
#include "RequirementExecutionPolicyType.h"
#include "TimedZoneType.h"

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
class ApprovalPolicyMDT : public virtual DataRecordBaseType {
public:

  /** This method constructs a new ApprovalPolicyMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ApprovalPolicyMDT.
    */
  static UCI_EXPORT ApprovalPolicyMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ApprovalPolicyMDT initializing the data accessed by the new ApprovalPolicyMDT using the
    * data accessed by the specified ApprovalPolicyMDT (cloning).
    *
    * @param accessor The ApprovalPolicyMDT that provides access to the data that is to be used to initialize the data
    *      accessed by the new created ApprovalPolicyMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ApprovalPolicyMDT.
    */
  static UCI_EXPORT ApprovalPolicyMDT& create(const ApprovalPolicyMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ApprovalPolicyMDT. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The ApprovalPolicyMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ApprovalPolicyMDT& accessor);

  /** Returns this accessor's type constant, i.e. approvalPolicyMDT.
    *
    * @return This accessor's type constant, i.e. approvalPolicyMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::approvalPolicyMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of ApprovalPolicyMDT.
    *
    * @return The version that was initialized from the uci:version attribute of ApprovalPolicyMDT.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ApprovalPolicyMDT& accessor) = 0;

  /** Indicates a set of approval policies for the results of planning activities. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::PlanPolicyType, uci::type::accessorType::planPolicyType> Plans;

  /** Indicates approval policies which govern Plan Activation commands. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::PlanActivationPolicyType, uci::type::accessorType::planActivationPolicyType> PlanActivation;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ApprovalPolicyID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ApprovalPolicyID.
    */
  virtual const uci::type::ApprovalPolicyID_Type& getApprovalPolicyID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ApprovalPolicyID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ApprovalPolicyID.
    */
  virtual uci::type::ApprovalPolicyID_Type& getApprovalPolicyID() = 0;

  /** Sets the complex content identified by ApprovalPolicyID to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ApprovalPolicyID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ApprovalPolicyMDT& setApprovalPolicyID(const uci::type::ApprovalPolicyID_Type& value) = 0;

  /** Returns a const reference to the bounded list identified by Plans.
    *
    * @return A const reference to the bounded list identified by Plans.
    */
  virtual const uci::type::ApprovalPolicyMDT::Plans& getPlans() const = 0;

  /** Returns a reference to the bounded list identified by Plans.
    *
    * @return A reference to the bounded list identified by Plans.
    */
  virtual uci::type::ApprovalPolicyMDT::Plans& getPlans() = 0;

  /** Sets the bounded list identified by Plans.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ApprovalPolicyMDT& setPlans(const uci::type::ApprovalPolicyMDT::Plans& value) = 0;

  /** Returns a const reference to the bounded list identified by PlanActivation.
    *
    * @return A const reference to the bounded list identified by PlanActivation.
    */
  virtual const uci::type::ApprovalPolicyMDT::PlanActivation& getPlanActivation() const = 0;

  /** Returns a reference to the bounded list identified by PlanActivation.
    *
    * @return A reference to the bounded list identified by PlanActivation.
    */
  virtual uci::type::ApprovalPolicyMDT::PlanActivation& getPlanActivation() = 0;

  /** Sets the bounded list identified by PlanActivation.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ApprovalPolicyMDT& setPlanActivation(const uci::type::ApprovalPolicyMDT::PlanActivation& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * RequirementExecution.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      RequirementExecution.
    */
  virtual const uci::type::RequirementExecutionPolicyType& getRequirementExecution() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by RequirementExecution.
    *
    * @return A reference to the accessor that provides access to the complex content identified by RequirementExecution.
    */
  virtual uci::type::RequirementExecutionPolicyType& getRequirementExecution() = 0;

  /** Sets the complex content identified by RequirementExecution to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by RequirementExecution.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ApprovalPolicyMDT& setRequirementExecution(const uci::type::RequirementExecutionPolicyType& value) = 0;

  /** Returns whether the Element identified by RequirementExecution exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by RequirementExecution is enabled or not.
    */
  virtual bool hasRequirementExecution() const = 0;

  /** Enables the Element identified by RequirementExecution.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by RequirementExecution.
    */
  virtual uci::type::RequirementExecutionPolicyType& enableRequirementExecution(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by RequirementExecution.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ApprovalPolicyMDT& clearRequirementExecution() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by TimedZone.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by TimedZone.
    */
  virtual const uci::type::TimedZoneType& getTimedZone() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by TimedZone.
    *
    * @return A reference to the accessor that provides access to the complex content identified by TimedZone.
    */
  virtual uci::type::TimedZoneType& getTimedZone() = 0;

  /** Sets the complex content identified by TimedZone to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by TimedZone.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ApprovalPolicyMDT& setTimedZone(const uci::type::TimedZoneType& value) = 0;

  /** Returns whether the Element identified by TimedZone exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by TimedZone is enabled or not.
    */
  virtual bool hasTimedZone() const = 0;

  /** Enables the Element identified by TimedZone.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by TimedZone.
    */
  virtual uci::type::TimedZoneType& enableTimedZone(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by TimedZone.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ApprovalPolicyMDT& clearTimedZone() = 0;

  /** Returns the value of the SimplePrimitive data type identified by Expires.
    *
    * @return The value of the simple primitive data type identified by Expires.
    */
  virtual uci::type::DateTimeTypeValue getExpires() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Expires.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ApprovalPolicyMDT& setExpires(uci::type::DateTimeTypeValue value) = 0;

  /** Returns whether the Element identified by Expires exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Expires is enabled or not.
    */
  virtual bool hasExpires() const = 0;

  /** Clears (disabled) the Element identified by Expires.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ApprovalPolicyMDT& clearExpires() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * MissionTraceability.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      MissionTraceability.
    */
  virtual const uci::type::MissionTraceabilityType& getMissionTraceability() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by MissionTraceability.
    *
    * @return A reference to the accessor that provides access to the complex content identified by MissionTraceability.
    */
  virtual uci::type::MissionTraceabilityType& getMissionTraceability() = 0;

  /** Sets the complex content identified by MissionTraceability to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by MissionTraceability.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ApprovalPolicyMDT& setMissionTraceability(const uci::type::MissionTraceabilityType& value) = 0;

  /** Returns whether the Element identified by MissionTraceability exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by MissionTraceability is enabled or not.
    */
  virtual bool hasMissionTraceability() const = 0;

  /** Enables the Element identified by MissionTraceability.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by MissionTraceability.
    */
  virtual uci::type::MissionTraceabilityType& enableMissionTraceability(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by MissionTraceability.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ApprovalPolicyMDT& clearMissionTraceability() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ApprovalPolicyMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~ApprovalPolicyMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ApprovalPolicyMDT to copy from.
    */
  ApprovalPolicyMDT(const ApprovalPolicyMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ApprovalPolicyMDT to the contents of the ApprovalPolicyMDT on the
    * right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The ApprovalPolicyMDT on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this ApprovalPolicyMDT.
    * @return A reference to this ApprovalPolicyMDT.
    */
  ApprovalPolicyMDT& operator=(const ApprovalPolicyMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_APPROVALPOLICYMDT_H

