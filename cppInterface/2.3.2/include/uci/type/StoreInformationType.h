/** @file StoreInformationType.h
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

#ifndef UCI_TYPE_STOREINFORMATIONTYPE_H
#define UCI_TYPE_STOREINFORMATIONTYPE_H

#include "../base/BoundedList.h"
#include "../base/IntAccessor.h"
#include "../base/export.h"
#include "FuzeType.h"
#include "StoreInformationBaseType.h"

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

/** Mission store representation. */
class StoreInformationType : public virtual StoreInformationBaseType {
public:

  /** This method constructs a new StoreInformationType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed StoreInformationType.
    */
  static UCI_EXPORT StoreInformationType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new StoreInformationType initializing the data accessed by the new StoreInformationType
    * using the data accessed by the specified StoreInformationType (cloning).
    *
    * @param accessor The StoreInformationType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created StoreInformationType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed StoreInformationType.
    */
  static UCI_EXPORT StoreInformationType& create(const StoreInformationType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified StoreInformationType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The StoreInformationType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(StoreInformationType& accessor);

  /** Returns this accessor's type constant, i.e. storeInformationType.
    *
    * @return This accessor's type constant, i.e. storeInformationType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::storeInformationType;
  }

  /** Returns the version that was initialized from the uci:version attribute of StoreInformationType.
    *
    * @return The version that was initialized from the uci:version attribute of StoreInformationType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.001.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const StoreInformationType& accessor) = 0;

  /** Indicates the fuzes in the weapon. Typically a weapon with a fuze will have them located in the nose, tail or both.
    * [Occurrences: Minimum: 0; Maximum: 2]
    */
  typedef uci::base::BoundedList<uci::type::FuzeType, uci::type::accessorType::fuzeType> Fuzes;

  /** Returns the value of the SimplePrimitive data type identified by Ammo.
    *
    * @return The value of the simple primitive data type identified by Ammo.
    */
  virtual xs::Int getAmmo() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Ammo.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::StoreInformationType& setAmmo(xs::Int value) = 0;

  /** Returns a const reference to the bounded list identified by Fuzes.
    *
    * @return A const reference to the bounded list identified by Fuzes.
    */
  virtual const uci::type::StoreInformationType::Fuzes& getFuzes() const = 0;

  /** Returns a reference to the bounded list identified by Fuzes.
    *
    * @return A reference to the bounded list identified by Fuzes.
    */
  virtual uci::type::StoreInformationType::Fuzes& getFuzes() = 0;

  /** Sets the bounded list identified by Fuzes.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::StoreInformationType& setFuzes(const uci::type::StoreInformationType::Fuzes& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  StoreInformationType() {
  }

  /** The destructor [only available to derived classes]. */
  ~StoreInformationType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The StoreInformationType to copy from.
    */
  StoreInformationType(const StoreInformationType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this StoreInformationType to the contents of the StoreInformationType
    * on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The StoreInformationType on the right hand side (rhs) of the assignment operator whose contents are used
    *      to set the contents of this StoreInformationType.
    * @return A reference to this StoreInformationType.
    */
  StoreInformationType& operator=(const StoreInformationType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_STOREINFORMATIONTYPE_H

