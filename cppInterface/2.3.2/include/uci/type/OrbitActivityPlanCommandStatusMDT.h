/** @file OrbitActivityPlanCommandStatusMDT.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:07 PM
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

#ifndef UCI_TYPE_ORBITACTIVITYPLANCOMMANDSTATUSMDT_H
#define UCI_TYPE_ORBITACTIVITYPLANCOMMANDSTATUSMDT_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "OrbitActivityPlanCommandID_Type.h"
#include "OrbitActivityPlanID_Type.h"
#include "PlanCommandStatusType.h"
#include "RequirementPlanningResultType.h"

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
class OrbitActivityPlanCommandStatusMDT : public virtual uci::base::Accessor {
public:

  /** This method constructs a new OrbitActivityPlanCommandStatusMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OrbitActivityPlanCommandStatusMDT.
    */
  static UCI_EXPORT OrbitActivityPlanCommandStatusMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new OrbitActivityPlanCommandStatusMDT initializing the data accessed by the new
    * OrbitActivityPlanCommandStatusMDT using the data accessed by the specified OrbitActivityPlanCommandStatusMDT
    * (cloning).
    *
    * @param accessor The OrbitActivityPlanCommandStatusMDT that provides access to the data that is to be used to
    *      initialize the data accessed by the new created OrbitActivityPlanCommandStatusMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OrbitActivityPlanCommandStatusMDT.
    */
  static UCI_EXPORT OrbitActivityPlanCommandStatusMDT& create(const OrbitActivityPlanCommandStatusMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified OrbitActivityPlanCommandStatusMDT. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The OrbitActivityPlanCommandStatusMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(OrbitActivityPlanCommandStatusMDT& accessor);

  /** Returns this accessor's type constant, i.e. orbitActivityPlanCommandStatusMDT.
    *
    * @return This accessor's type constant, i.e. orbitActivityPlanCommandStatusMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::orbitActivityPlanCommandStatusMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of OrbitActivityPlanCommandStatusMDT.
    *
    * @return The version that was initialized from the uci:version attribute of OrbitActivityPlanCommandStatusMDT.
    */
  static std::string getUCITypeVersion() {
    return "002.000.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const OrbitActivityPlanCommandStatusMDT& accessor) = 0;

  /** Indicates planning results per Requirement. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::RequirementPlanningResultType, uci::type::accessorType::requirementPlanningResultType> ActivityPlanningResult;

  /** This element indicates the unique ID or IDs of any OrbitActivityPlans that were generated. [Occurrences: Minimum: 0;
    * Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::OrbitActivityPlanID_Type, uci::type::accessorType::orbitActivityPlanID_Type> ResultingPlanID;

  /** Returns a const reference to the accessor that provides access to the complex content identified by CommandID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by CommandID.
    */
  virtual const uci::type::OrbitActivityPlanCommandID_Type& getCommandID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by CommandID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by CommandID.
    */
  virtual uci::type::OrbitActivityPlanCommandID_Type& getCommandID() = 0;

  /** Sets the complex content identified by CommandID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by CommandID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitActivityPlanCommandStatusMDT& setCommandID(const uci::type::OrbitActivityPlanCommandID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by PlanningStatus.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by PlanningStatus.
    */
  virtual const uci::type::PlanCommandStatusType& getPlanningStatus() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by PlanningStatus.
    *
    * @return A reference to the accessor that provides access to the complex content identified by PlanningStatus.
    */
  virtual uci::type::PlanCommandStatusType& getPlanningStatus() = 0;

  /** Sets the complex content identified by PlanningStatus to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by PlanningStatus.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitActivityPlanCommandStatusMDT& setPlanningStatus(const uci::type::PlanCommandStatusType& value) = 0;

  /** Returns a const reference to the bounded list identified by ActivityPlanningResult.
    *
    * @return A const reference to the bounded list identified by ActivityPlanningResult.
    */
  virtual const uci::type::OrbitActivityPlanCommandStatusMDT::ActivityPlanningResult& getActivityPlanningResult() const = 0;

  /** Returns a reference to the bounded list identified by ActivityPlanningResult.
    *
    * @return A reference to the bounded list identified by ActivityPlanningResult.
    */
  virtual uci::type::OrbitActivityPlanCommandStatusMDT::ActivityPlanningResult& getActivityPlanningResult() = 0;

  /** Sets the bounded list identified by ActivityPlanningResult.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitActivityPlanCommandStatusMDT& setActivityPlanningResult(const uci::type::OrbitActivityPlanCommandStatusMDT::ActivityPlanningResult& value) = 0;

  /** Returns a const reference to the bounded list identified by ResultingPlanID.
    *
    * @return A const reference to the bounded list identified by ResultingPlanID.
    */
  virtual const uci::type::OrbitActivityPlanCommandStatusMDT::ResultingPlanID& getResultingPlanID() const = 0;

  /** Returns a reference to the bounded list identified by ResultingPlanID.
    *
    * @return A reference to the bounded list identified by ResultingPlanID.
    */
  virtual uci::type::OrbitActivityPlanCommandStatusMDT::ResultingPlanID& getResultingPlanID() = 0;

  /** Sets the bounded list identified by ResultingPlanID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitActivityPlanCommandStatusMDT& setResultingPlanID(const uci::type::OrbitActivityPlanCommandStatusMDT::ResultingPlanID& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  OrbitActivityPlanCommandStatusMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~OrbitActivityPlanCommandStatusMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The OrbitActivityPlanCommandStatusMDT to copy from.
    */
  OrbitActivityPlanCommandStatusMDT(const OrbitActivityPlanCommandStatusMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this OrbitActivityPlanCommandStatusMDT to the contents of the
    * OrbitActivityPlanCommandStatusMDT on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The OrbitActivityPlanCommandStatusMDT on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this OrbitActivityPlanCommandStatusMDT.
    * @return A reference to this OrbitActivityPlanCommandStatusMDT.
    */
  OrbitActivityPlanCommandStatusMDT& operator=(const OrbitActivityPlanCommandStatusMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ORBITACTIVITYPLANCOMMANDSTATUSMDT_H

