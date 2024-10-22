/** @file CelestialBodyType.h
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

#ifndef UCI_TYPE_CELESTIALBODYTYPE_H
#define UCI_TYPE_CELESTIALBODYTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "CelestialBodyEphemerisSourceEnum.h"
#include "CelestialBodyNameEnum.h"
#include "DoubleNonNegativeType.h"

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

/** Describes a celestial body to be used as a third-body perturbation during propagation. */
class CelestialBodyType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new CelestialBodyType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CelestialBodyType.
    */
  static UCI_EXPORT CelestialBodyType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new CelestialBodyType initializing the data accessed by the new CelestialBodyType using the
    * data accessed by the specified CelestialBodyType (cloning).
    *
    * @param accessor The CelestialBodyType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created CelestialBodyType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CelestialBodyType.
    */
  static UCI_EXPORT CelestialBodyType& create(const CelestialBodyType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified CelestialBodyType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The CelestialBodyType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(CelestialBodyType& accessor);

  /** Returns this accessor's type constant, i.e. celestialBodyType.
    *
    * @return This accessor's type constant, i.e. celestialBodyType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::celestialBodyType;
  }

  /** Returns the version that was initialized from the uci:version attribute of CelestialBodyType.
    *
    * @return The version that was initialized from the uci:version attribute of CelestialBodyType.
    */
  static std::string getUCITypeVersion() {
    return "000.001.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const CelestialBodyType& accessor) = 0;

  /** Returns a const reference to the value of the enumeration identified by EphemerisSource.
    *
    * @return A const reference to the value of the enumeration identified by EphemerisSource.
    */
  virtual const uci::type::CelestialBodyEphemerisSourceEnum& getEphemerisSource() const = 0;

  /** Returns a reference to the value of the enumeration identified by EphemerisSource.
    *
    * @return A reference to the value of the enumeration identified by EphemerisSource.
    */
  virtual uci::type::CelestialBodyEphemerisSourceEnum& getEphemerisSource() = 0;

  /** Sets the value of the enumeration identified by EphemerisSource.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CelestialBodyType& setEphemerisSource(const uci::type::CelestialBodyEphemerisSourceEnum& value) = 0;

  /** Sets the value of the enumeration identified by EphemerisSource.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CelestialBodyType& setEphemerisSource(uci::type::CelestialBodyEphemerisSourceEnum::EnumerationItem value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by GravitationalParameter.
    *
    * @return The value of the simple primitive data type identified by GravitationalParameter.
    */
  virtual uci::type::DoubleNonNegativeTypeValue getGravitationalParameter() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by GravitationalParameter.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CelestialBodyType& setGravitationalParameter(uci::type::DoubleNonNegativeTypeValue value) = 0;

  /** Returns a const reference to the value of the enumeration identified by Name.
    *
    * @return A const reference to the value of the enumeration identified by Name.
    */
  virtual const uci::type::CelestialBodyNameEnum& getName() const = 0;

  /** Returns a reference to the value of the enumeration identified by Name.
    *
    * @return A reference to the value of the enumeration identified by Name.
    */
  virtual uci::type::CelestialBodyNameEnum& getName() = 0;

  /** Sets the value of the enumeration identified by Name.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CelestialBodyType& setName(const uci::type::CelestialBodyNameEnum& value) = 0;

  /** Sets the value of the enumeration identified by Name.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CelestialBodyType& setName(uci::type::CelestialBodyNameEnum::EnumerationItem value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  CelestialBodyType() {
  }

  /** The destructor [only available to derived classes]. */
  ~CelestialBodyType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The CelestialBodyType to copy from.
    */
  CelestialBodyType(const CelestialBodyType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this CelestialBodyType to the contents of the CelestialBodyType on the
    * right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The CelestialBodyType on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this CelestialBodyType.
    * @return A reference to this CelestialBodyType.
    */
  CelestialBodyType& operator=(const CelestialBodyType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_CELESTIALBODYTYPE_H

