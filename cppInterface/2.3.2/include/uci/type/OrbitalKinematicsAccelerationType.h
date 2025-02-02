/** @file OrbitalKinematicsAccelerationType.h
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

#ifndef UCI_TYPE_ORBITALKINEMATICSACCELERATIONTYPE_H
#define UCI_TYPE_ORBITALKINEMATICSACCELERATIONTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "AccelerationType.h"

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

/** Indicates an acceleration vector in the specified reference system. */
class OrbitalKinematicsAccelerationType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new OrbitalKinematicsAccelerationType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OrbitalKinematicsAccelerationType.
    */
  static UCI_EXPORT OrbitalKinematicsAccelerationType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new OrbitalKinematicsAccelerationType initializing the data accessed by the new
    * OrbitalKinematicsAccelerationType using the data accessed by the specified OrbitalKinematicsAccelerationType
    * (cloning).
    *
    * @param accessor The OrbitalKinematicsAccelerationType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created OrbitalKinematicsAccelerationType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OrbitalKinematicsAccelerationType.
    */
  static UCI_EXPORT OrbitalKinematicsAccelerationType& create(const OrbitalKinematicsAccelerationType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified OrbitalKinematicsAccelerationType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The OrbitalKinematicsAccelerationType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(OrbitalKinematicsAccelerationType& accessor);

  /** Returns this accessor's type constant, i.e. orbitalKinematicsAccelerationType.
    *
    * @return This accessor's type constant, i.e. orbitalKinematicsAccelerationType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::orbitalKinematicsAccelerationType;
  }

  /** Returns the version that was initialized from the uci:version attribute of OrbitalKinematicsAccelerationType.
    *
    * @return The version that was initialized from the uci:version attribute of OrbitalKinematicsAccelerationType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const OrbitalKinematicsAccelerationType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by X.
    *
    * @return The value of the simple primitive data type identified by X.
    */
  virtual uci::type::AccelerationTypeValue getX() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by X.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitalKinematicsAccelerationType& setX(uci::type::AccelerationTypeValue value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Y.
    *
    * @return The value of the simple primitive data type identified by Y.
    */
  virtual uci::type::AccelerationTypeValue getY() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Y.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitalKinematicsAccelerationType& setY(uci::type::AccelerationTypeValue value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Z.
    *
    * @return The value of the simple primitive data type identified by Z.
    */
  virtual uci::type::AccelerationTypeValue getZ() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Z.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitalKinematicsAccelerationType& setZ(uci::type::AccelerationTypeValue value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  OrbitalKinematicsAccelerationType() {
  }

  /** The destructor [only available to derived classes]. */
  ~OrbitalKinematicsAccelerationType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The OrbitalKinematicsAccelerationType to copy from.
    */
  OrbitalKinematicsAccelerationType(const OrbitalKinematicsAccelerationType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this OrbitalKinematicsAccelerationType to the contents of the
    * OrbitalKinematicsAccelerationType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The OrbitalKinematicsAccelerationType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this OrbitalKinematicsAccelerationType.
    * @return A reference to this OrbitalKinematicsAccelerationType.
    */
  OrbitalKinematicsAccelerationType& operator=(const OrbitalKinematicsAccelerationType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ORBITALKINEMATICSACCELERATIONTYPE_H

