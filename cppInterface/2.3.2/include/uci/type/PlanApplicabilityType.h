/** @file PlanApplicabilityType.h
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

#ifndef UCI_TYPE_PLANAPPLICABILITYTYPE_H
#define UCI_TYPE_PLANAPPLICABILITYTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "SystemID_Type.h"

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

/** Indicates the System or Systems which have a direct relationship with the developed plan. Complex, dispersed, and/or
  * hierarchical C2 systems require planning and plans at multiple levels with varying purpose and detail. Therefore,
  * plan messages must give an indication of their level, purpose and detail. For instance, planning services at the
  * operational level of warfare may have different details and control authorities compared to planning services at the
  * tactical level of warfare. The PlanApplicabilityType helps clarify which systems have which roles and
  * responsibilities with respect to the plan. See child elements for further details.
  */
class PlanApplicabilityType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new PlanApplicabilityType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PlanApplicabilityType.
    */
  static UCI_EXPORT PlanApplicabilityType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new PlanApplicabilityType initializing the data accessed by the new PlanApplicabilityType
    * using the data accessed by the specified PlanApplicabilityType (cloning).
    *
    * @param accessor The PlanApplicabilityType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created PlanApplicabilityType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PlanApplicabilityType.
    */
  static UCI_EXPORT PlanApplicabilityType& create(const PlanApplicabilityType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified PlanApplicabilityType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The PlanApplicabilityType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(PlanApplicabilityType& accessor);

  /** Returns this accessor's type constant, i.e. planApplicabilityType.
    *
    * @return This accessor's type constant, i.e. planApplicabilityType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::planApplicabilityType;
  }

  /** Returns the version that was initialized from the uci:version attribute of PlanApplicabilityType.
    *
    * @return The version that was initialized from the uci:version attribute of PlanApplicabilityType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const PlanApplicabilityType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by PlannedForID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by PlannedForID.
    */
  virtual const uci::type::SystemID_Type& getPlannedForID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by PlannedForID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by PlannedForID.
    */
  virtual uci::type::SystemID_Type& getPlannedForID() = 0;

  /** Sets the complex content identified by PlannedForID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by PlannedForID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlanApplicabilityType& setPlannedForID(const uci::type::SystemID_Type& value) = 0;

  /** Returns whether the Element identified by PlannedForID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PlannedForID is enabled or not.
    */
  virtual bool hasPlannedForID() const = 0;

  /** Enables the Element identified by PlannedForID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by PlannedForID.
    */
  virtual uci::type::SystemID_Type& enablePlannedForID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by PlannedForID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlanApplicabilityType& clearPlannedForID() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ApplicableToID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ApplicableToID.
    */
  virtual const uci::type::SystemID_Type& getApplicableToID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ApplicableToID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ApplicableToID.
    */
  virtual uci::type::SystemID_Type& getApplicableToID() = 0;

  /** Sets the complex content identified by ApplicableToID to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ApplicableToID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlanApplicabilityType& setApplicableToID(const uci::type::SystemID_Type& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  PlanApplicabilityType() {
  }

  /** The destructor [only available to derived classes]. */
  ~PlanApplicabilityType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The PlanApplicabilityType to copy from.
    */
  PlanApplicabilityType(const PlanApplicabilityType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this PlanApplicabilityType to the contents of the PlanApplicabilityType
    * on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The PlanApplicabilityType on the right hand side (rhs) of the assignment operator whose contents are used
    *      to set the contents of this PlanApplicabilityType.
    * @return A reference to this PlanApplicabilityType.
    */
  PlanApplicabilityType& operator=(const PlanApplicabilityType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PLANAPPLICABILITYTYPE_H

