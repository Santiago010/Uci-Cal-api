/** @file StoreCarriageStatusType.h
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

#ifndef UCI_TYPE_STORECARRIAGESTATUSTYPE_H
#define UCI_TYPE_STORECARRIAGESTATUSTYPE_H

#include "../base/BooleanAccessor.h"
#include "../base/DoubleAccessor.h"
#include "../base/export.h"
#include "StoreStatusType.h"

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

/** Possible store settings that could be used to id the state or extra data related to the attached Mission or Carriage
  * Store.
  */
class StoreCarriageStatusType : public virtual StoreStatusType {
public:

  /** This method constructs a new StoreCarriageStatusType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed StoreCarriageStatusType.
    */
  static UCI_EXPORT StoreCarriageStatusType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new StoreCarriageStatusType initializing the data accessed by the new
    * StoreCarriageStatusType using the data accessed by the specified StoreCarriageStatusType (cloning).
    *
    * @param accessor The StoreCarriageStatusType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created StoreCarriageStatusType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed StoreCarriageStatusType.
    */
  static UCI_EXPORT StoreCarriageStatusType& create(const StoreCarriageStatusType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified StoreCarriageStatusType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The StoreCarriageStatusType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(StoreCarriageStatusType& accessor);

  /** Returns this accessor's type constant, i.e. storeCarriageStatusType.
    *
    * @return This accessor's type constant, i.e. storeCarriageStatusType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::storeCarriageStatusType;
  }

  /** Returns the version that was initialized from the uci:version attribute of StoreCarriageStatusType.
    *
    * @return The version that was initialized from the uci:version attribute of StoreCarriageStatusType.
    */
  static std::string getUCITypeVersion() {
    return "001.001.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const StoreCarriageStatusType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Configuration.
    *
    * @return The value of the simple primitive data type identified by Configuration.
    */
  virtual xs::Double getConfiguration() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Configuration.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::StoreCarriageStatusType& setConfiguration(xs::Double value) = 0;

  /** Returns whether the Element identified by Configuration exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Configuration is enabled or not.
    */
  virtual bool hasConfiguration() const = 0;

  /** Clears (disabled) the Element identified by Configuration.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::StoreCarriageStatusType& clearConfiguration() = 0;

  /** Returns the value of the SimplePrimitive data type identified by InMotion.
    *
    * @return The value of the simple primitive data type identified by InMotion.
    */
  virtual xs::Boolean getInMotion() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by InMotion.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::StoreCarriageStatusType& setInMotion(xs::Boolean value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  StoreCarriageStatusType() {
  }

  /** The destructor [only available to derived classes]. */
  ~StoreCarriageStatusType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The StoreCarriageStatusType to copy from.
    */
  StoreCarriageStatusType(const StoreCarriageStatusType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this StoreCarriageStatusType to the contents of the
    * StoreCarriageStatusType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The StoreCarriageStatusType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this StoreCarriageStatusType.
    * @return A reference to this StoreCarriageStatusType.
    */
  StoreCarriageStatusType& operator=(const StoreCarriageStatusType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_STORECARRIAGESTATUSTYPE_H

