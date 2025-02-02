/** @file LAR_DetailsType.h
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

#ifndef UCI_TYPE_LAR_DETAILSTYPE_H
#define UCI_TYPE_LAR_DETAILSTYPE_H

#include "../base/Accessor.h"
#include "../base/BooleanAccessor.h"
#include "../base/export.h"
#include "PlannedReleaseConditionsType.h"
#include "RoutePlanReferenceType.h"
#include "WeaponTargetPairingChoiceType.h"

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
class LAR_DetailsType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new LAR_DetailsType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed LAR_DetailsType.
    */
  static UCI_EXPORT LAR_DetailsType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new LAR_DetailsType initializing the data accessed by the new LAR_DetailsType using the data
    * accessed by the specified LAR_DetailsType (cloning).
    *
    * @param accessor The LAR_DetailsType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created LAR_DetailsType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed LAR_DetailsType.
    */
  static UCI_EXPORT LAR_DetailsType& create(const LAR_DetailsType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified LAR_DetailsType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The LAR_DetailsType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(LAR_DetailsType& accessor);

  /** Returns this accessor's type constant, i.e. lAR_DetailsType.
    *
    * @return This accessor's type constant, i.e. lAR_DetailsType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::lAR_DetailsType;
  }

  /** Returns the version that was initialized from the uci:version attribute of LAR_DetailsType.
    *
    * @return The version that was initialized from the uci:version attribute of LAR_DetailsType.
    */
  static std::string getUCITypeVersion() {
    return "002.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const LAR_DetailsType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Composite.
    *
    * @return The value of the simple primitive data type identified by Composite.
    */
  virtual xs::Boolean getComposite() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Composite.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LAR_DetailsType& setComposite(xs::Boolean value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * WeaponTargetPairing.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      WeaponTargetPairing.
    */
  virtual const uci::type::WeaponTargetPairingChoiceType& getWeaponTargetPairing() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by WeaponTargetPairing.
    *
    * @return A reference to the accessor that provides access to the complex content identified by WeaponTargetPairing.
    */
  virtual uci::type::WeaponTargetPairingChoiceType& getWeaponTargetPairing() = 0;

  /** Sets the complex content identified by WeaponTargetPairing to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by WeaponTargetPairing.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LAR_DetailsType& setWeaponTargetPairing(const uci::type::WeaponTargetPairingChoiceType& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * PlannedReleaseConditions.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      PlannedReleaseConditions.
    */
  virtual const uci::type::PlannedReleaseConditionsType& getPlannedReleaseConditions() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * PlannedReleaseConditions.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      PlannedReleaseConditions.
    */
  virtual uci::type::PlannedReleaseConditionsType& getPlannedReleaseConditions() = 0;

  /** Sets the complex content identified by PlannedReleaseConditions to the contents of the complex content accessed by
    * the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by PlannedReleaseConditions.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LAR_DetailsType& setPlannedReleaseConditions(const uci::type::PlannedReleaseConditionsType& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by WeaponRoute.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by WeaponRoute.
    */
  virtual const uci::type::RoutePlanReferenceType& getWeaponRoute() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by WeaponRoute.
    *
    * @return A reference to the accessor that provides access to the complex content identified by WeaponRoute.
    */
  virtual uci::type::RoutePlanReferenceType& getWeaponRoute() = 0;

  /** Sets the complex content identified by WeaponRoute to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by WeaponRoute.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LAR_DetailsType& setWeaponRoute(const uci::type::RoutePlanReferenceType& value) = 0;

  /** Returns whether the Element identified by WeaponRoute exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by WeaponRoute is enabled or not.
    */
  virtual bool hasWeaponRoute() const = 0;

  /** Enables the Element identified by WeaponRoute.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by WeaponRoute.
    */
  virtual uci::type::RoutePlanReferenceType& enableWeaponRoute(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by WeaponRoute.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LAR_DetailsType& clearWeaponRoute() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  LAR_DetailsType() {
  }

  /** The destructor [only available to derived classes]. */
  ~LAR_DetailsType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The LAR_DetailsType to copy from.
    */
  LAR_DetailsType(const LAR_DetailsType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this LAR_DetailsType to the contents of the LAR_DetailsType on the
    * right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The LAR_DetailsType on the right hand side (rhs) of the assignment operator whose contents are used to set
    *      the contents of this LAR_DetailsType.
    * @return A reference to this LAR_DetailsType.
    */
  LAR_DetailsType& operator=(const LAR_DetailsType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_LAR_DETAILSTYPE_H

