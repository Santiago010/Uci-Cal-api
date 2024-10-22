/** @file StoreStatusDetailsType.h
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

#ifndef UCI_TYPE_STORESTATUSDETAILSTYPE_H
#define UCI_TYPE_STORESTATUSDETAILSTYPE_H

#include "../base/Accessor.h"
#include "../base/BooleanAccessor.h"
#include "../base/export.h"

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

/** Possible store settings that could be used to give more detail information about the state or extra data related to
  * the attached Mission store.
  */
class StoreStatusDetailsType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new StoreStatusDetailsType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed StoreStatusDetailsType.
    */
  static UCI_EXPORT StoreStatusDetailsType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new StoreStatusDetailsType initializing the data accessed by the new StoreStatusDetailsType
    * using the data accessed by the specified StoreStatusDetailsType (cloning).
    *
    * @param accessor The StoreStatusDetailsType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created StoreStatusDetailsType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed StoreStatusDetailsType.
    */
  static UCI_EXPORT StoreStatusDetailsType& create(const StoreStatusDetailsType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified StoreStatusDetailsType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The StoreStatusDetailsType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(StoreStatusDetailsType& accessor);

  /** Returns this accessor's type constant, i.e. storeStatusDetailsType.
    *
    * @return This accessor's type constant, i.e. storeStatusDetailsType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::storeStatusDetailsType;
  }

  /** Returns the version that was initialized from the uci:version attribute of StoreStatusDetailsType.
    *
    * @return The version that was initialized from the uci:version attribute of StoreStatusDetailsType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const StoreStatusDetailsType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by INS_ENABLE.
    *
    * @return The value of the simple primitive data type identified by INS_ENABLE.
    */
  virtual xs::Boolean getINS_ENABLE() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by INS_ENABLE.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::StoreStatusDetailsType& setINS_ENABLE(xs::Boolean value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by GPS_ENABLE.
    *
    * @return The value of the simple primitive data type identified by GPS_ENABLE.
    */
  virtual xs::Boolean getGPS_ENABLE() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by GPS_ENABLE.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::StoreStatusDetailsType& setGPS_ENABLE(xs::Boolean value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by TARGETED.
    *
    * @return The value of the simple primitive data type identified by TARGETED.
    */
  virtual xs::Boolean getTARGETED() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by TARGETED.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::StoreStatusDetailsType& setTARGETED(xs::Boolean value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by SELECTED_JETTISON.
    *
    * @return The value of the simple primitive data type identified by SELECTED_JETTISON.
    */
  virtual xs::Boolean getSELECTED_JETTISON() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by SELECTED_JETTISON.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::StoreStatusDetailsType& setSELECTED_JETTISON(xs::Boolean value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  StoreStatusDetailsType() {
  }

  /** The destructor [only available to derived classes]. */
  ~StoreStatusDetailsType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The StoreStatusDetailsType to copy from.
    */
  StoreStatusDetailsType(const StoreStatusDetailsType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this StoreStatusDetailsType to the contents of the
    * StoreStatusDetailsType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The StoreStatusDetailsType on the right hand side (rhs) of the assignment operator whose contents are used
    *      to set the contents of this StoreStatusDetailsType.
    * @return A reference to this StoreStatusDetailsType.
    */
  StoreStatusDetailsType& operator=(const StoreStatusDetailsType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_STORESTATUSDETAILSTYPE_H

