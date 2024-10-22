/** @file OrientationType.h
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

#ifndef UCI_TYPE_ORIENTATIONTYPE_H
#define UCI_TYPE_ORIENTATIONTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "AngleHalfType.h"
#include "AngleType.h"
#include "DateTimeType.h"

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

/** Euler Angle Sequence describing the orientation of the vehicle in the order yaw, pitch, roll. The angles are given in
  * a locally level, North-East-Down coordinate system centered on the vehicle.
  */
class OrientationType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new OrientationType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OrientationType.
    */
  static UCI_EXPORT OrientationType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new OrientationType initializing the data accessed by the new OrientationType using the data
    * accessed by the specified OrientationType (cloning).
    *
    * @param accessor The OrientationType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created OrientationType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OrientationType.
    */
  static UCI_EXPORT OrientationType& create(const OrientationType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified OrientationType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The OrientationType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(OrientationType& accessor);

  /** Returns this accessor's type constant, i.e. orientationType.
    *
    * @return This accessor's type constant, i.e. orientationType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::orientationType;
  }

  /** Returns the version that was initialized from the uci:version attribute of OrientationType.
    *
    * @return The version that was initialized from the uci:version attribute of OrientationType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const OrientationType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Yaw.
    *
    * @return The value of the simple primitive data type identified by Yaw.
    */
  virtual uci::type::AngleTypeValue getYaw() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Yaw.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrientationType& setYaw(uci::type::AngleTypeValue value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Pitch.
    *
    * @return The value of the simple primitive data type identified by Pitch.
    */
  virtual uci::type::AngleHalfTypeValue getPitch() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Pitch.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrientationType& setPitch(uci::type::AngleHalfTypeValue value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Roll.
    *
    * @return The value of the simple primitive data type identified by Roll.
    */
  virtual uci::type::AngleTypeValue getRoll() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Roll.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrientationType& setRoll(uci::type::AngleTypeValue value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Timestamp.
    *
    * @return The value of the simple primitive data type identified by Timestamp.
    */
  virtual uci::type::DateTimeTypeValue getTimestamp() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Timestamp.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrientationType& setTimestamp(uci::type::DateTimeTypeValue value) = 0;

  /** Returns whether the Element identified by Timestamp exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Timestamp is enabled or not.
    */
  virtual bool hasTimestamp() const = 0;

  /** Clears (disabled) the Element identified by Timestamp.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrientationType& clearTimestamp() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  OrientationType() {
  }

  /** The destructor [only available to derived classes]. */
  ~OrientationType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The OrientationType to copy from.
    */
  OrientationType(const OrientationType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this OrientationType to the contents of the OrientationType on the
    * right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The OrientationType on the right hand side (rhs) of the assignment operator whose contents are used to set
    *      the contents of this OrientationType.
    * @return A reference to this OrientationType.
    */
  OrientationType& operator=(const OrientationType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ORIENTATIONTYPE_H

