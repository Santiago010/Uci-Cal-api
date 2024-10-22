/** @file OrbitActivityPlanStatusType.h
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

#ifndef UCI_TYPE_ORBITACTIVITYPLANSTATUSTYPE_H
#define UCI_TYPE_ORBITACTIVITYPLANSTATUSTYPE_H

#include "../base/BoundedList.h"
#include "../base/export.h"
#include "ActivityPlanPartsEnum.h"
#include "PlanStatusType.h"

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
class OrbitActivityPlanStatusType : public virtual PlanStatusType {
public:

  /** This method constructs a new OrbitActivityPlanStatusType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OrbitActivityPlanStatusType.
    */
  static UCI_EXPORT OrbitActivityPlanStatusType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new OrbitActivityPlanStatusType initializing the data accessed by the new
    * OrbitActivityPlanStatusType using the data accessed by the specified OrbitActivityPlanStatusType (cloning).
    *
    * @param accessor The OrbitActivityPlanStatusType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created OrbitActivityPlanStatusType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OrbitActivityPlanStatusType.
    */
  static UCI_EXPORT OrbitActivityPlanStatusType& create(const OrbitActivityPlanStatusType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified OrbitActivityPlanStatusType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The OrbitActivityPlanStatusType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(OrbitActivityPlanStatusType& accessor);

  /** Returns this accessor's type constant, i.e. orbitActivityPlanStatusType.
    *
    * @return This accessor's type constant, i.e. orbitActivityPlanStatusType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::orbitActivityPlanStatusType;
  }

  /** Returns the version that was initialized from the uci:version attribute of OrbitActivityPlanStatusType.
    *
    * @return The version that was initialized from the uci:version attribute of OrbitActivityPlanStatusType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.001.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const OrbitActivityPlanStatusType& accessor) = 0;

  /** Indicates which part or parts are being statused. List size for this element is based on "Select All That Apply"
    * condition. [Occurrences: Minimum: 1; Maximum: 9]
    */
  typedef uci::base::BoundedList<uci::type::ActivityPlanPartsEnum, uci::type::accessorType::activityPlanPartsEnum> PlanPart;

  /** Returns a const reference to the bounded list identified by PlanPart.
    *
    * @return A const reference to the bounded list identified by PlanPart.
    */
  virtual const uci::type::OrbitActivityPlanStatusType::PlanPart& getPlanPart() const = 0;

  /** Returns a reference to the bounded list identified by PlanPart.
    *
    * @return A reference to the bounded list identified by PlanPart.
    */
  virtual uci::type::OrbitActivityPlanStatusType::PlanPart& getPlanPart() = 0;

  /** Sets the bounded list identified by PlanPart.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitActivityPlanStatusType& setPlanPart(const uci::type::OrbitActivityPlanStatusType::PlanPart& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  OrbitActivityPlanStatusType() {
  }

  /** The destructor [only available to derived classes]. */
  ~OrbitActivityPlanStatusType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The OrbitActivityPlanStatusType to copy from.
    */
  OrbitActivityPlanStatusType(const OrbitActivityPlanStatusType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this OrbitActivityPlanStatusType to the contents of the
    * OrbitActivityPlanStatusType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The OrbitActivityPlanStatusType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this OrbitActivityPlanStatusType.
    * @return A reference to this OrbitActivityPlanStatusType.
    */
  OrbitActivityPlanStatusType& operator=(const OrbitActivityPlanStatusType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ORBITACTIVITYPLANSTATUSTYPE_H

