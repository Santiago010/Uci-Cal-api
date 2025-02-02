/** @file CenterOfGravityAeroType.h
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

#ifndef UCI_TYPE_CENTEROFGRAVITYAEROTYPE_H
#define UCI_TYPE_CENTEROFGRAVITYAEROTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "DistanceOffsetType.h"
#include "PercentType.h"

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

/** Indicates the center of gravity of an aeronautical vehicle. */
class CenterOfGravityAeroType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new CenterOfGravityAeroType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CenterOfGravityAeroType.
    */
  static UCI_EXPORT CenterOfGravityAeroType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new CenterOfGravityAeroType initializing the data accessed by the new
    * CenterOfGravityAeroType using the data accessed by the specified CenterOfGravityAeroType (cloning).
    *
    * @param accessor The CenterOfGravityAeroType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created CenterOfGravityAeroType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CenterOfGravityAeroType.
    */
  static UCI_EXPORT CenterOfGravityAeroType& create(const CenterOfGravityAeroType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified CenterOfGravityAeroType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The CenterOfGravityAeroType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(CenterOfGravityAeroType& accessor);

  /** Returns this accessor's type constant, i.e. centerOfGravityAeroType.
    *
    * @return This accessor's type constant, i.e. centerOfGravityAeroType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::centerOfGravityAeroType;
  }

  /** Returns the version that was initialized from the uci:version attribute of CenterOfGravityAeroType.
    *
    * @return The version that was initialized from the uci:version attribute of CenterOfGravityAeroType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const CenterOfGravityAeroType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by LateralCenterOfGravity.
    *
    * @return The value of the simple primitive data type identified by LateralCenterOfGravity.
    */
  virtual uci::type::DistanceOffsetTypeValue getLateralCenterOfGravity() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by LateralCenterOfGravity.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CenterOfGravityAeroType& setLateralCenterOfGravity(uci::type::DistanceOffsetTypeValue value) = 0;

  /** Returns whether the Element identified by LateralCenterOfGravity exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by LateralCenterOfGravity is enabled or not.
    */
  virtual bool hasLateralCenterOfGravity() const = 0;

  /** Clears (disabled) the Element identified by LateralCenterOfGravity.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CenterOfGravityAeroType& clearLateralCenterOfGravity() = 0;

  /** Returns the value of the SimplePrimitive data type identified by LongitudinalCenterOfGravity.
    *
    * @return The value of the simple primitive data type identified by LongitudinalCenterOfGravity.
    */
  virtual uci::type::PercentTypeValue getLongitudinalCenterOfGravity() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by LongitudinalCenterOfGravity.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CenterOfGravityAeroType& setLongitudinalCenterOfGravity(uci::type::PercentTypeValue value) = 0;

  /** Returns whether the Element identified by LongitudinalCenterOfGravity exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by LongitudinalCenterOfGravity is enabled or not.
    */
  virtual bool hasLongitudinalCenterOfGravity() const = 0;

  /** Clears (disabled) the Element identified by LongitudinalCenterOfGravity.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CenterOfGravityAeroType& clearLongitudinalCenterOfGravity() = 0;

  /** Returns the value of the SimplePrimitive data type identified by VerticalCenterOfGravity.
    *
    * @return The value of the simple primitive data type identified by VerticalCenterOfGravity.
    */
  virtual uci::type::DistanceOffsetTypeValue getVerticalCenterOfGravity() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by VerticalCenterOfGravity.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CenterOfGravityAeroType& setVerticalCenterOfGravity(uci::type::DistanceOffsetTypeValue value) = 0;

  /** Returns whether the Element identified by VerticalCenterOfGravity exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by VerticalCenterOfGravity is enabled or not.
    */
  virtual bool hasVerticalCenterOfGravity() const = 0;

  /** Clears (disabled) the Element identified by VerticalCenterOfGravity.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CenterOfGravityAeroType& clearVerticalCenterOfGravity() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  CenterOfGravityAeroType() {
  }

  /** The destructor [only available to derived classes]. */
  ~CenterOfGravityAeroType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The CenterOfGravityAeroType to copy from.
    */
  CenterOfGravityAeroType(const CenterOfGravityAeroType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this CenterOfGravityAeroType to the contents of the
    * CenterOfGravityAeroType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The CenterOfGravityAeroType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this CenterOfGravityAeroType.
    * @return A reference to this CenterOfGravityAeroType.
    */
  CenterOfGravityAeroType& operator=(const CenterOfGravityAeroType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_CENTEROFGRAVITYAEROTYPE_H

