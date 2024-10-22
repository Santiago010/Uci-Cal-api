/** @file RTN_PositionDeltaType.h
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

#ifndef UCI_TYPE_RTN_POSITIONDELTATYPE_H
#define UCI_TYPE_RTN_POSITIONDELTATYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "DistanceOffsetType.h"

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

/** Indicates a delta position vector in the Radial-Transverse-Normal Reference System. */
class RTN_PositionDeltaType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new RTN_PositionDeltaType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed RTN_PositionDeltaType.
    */
  static UCI_EXPORT RTN_PositionDeltaType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new RTN_PositionDeltaType initializing the data accessed by the new RTN_PositionDeltaType
    * using the data accessed by the specified RTN_PositionDeltaType (cloning).
    *
    * @param accessor The RTN_PositionDeltaType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created RTN_PositionDeltaType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed RTN_PositionDeltaType.
    */
  static UCI_EXPORT RTN_PositionDeltaType& create(const RTN_PositionDeltaType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified RTN_PositionDeltaType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The RTN_PositionDeltaType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(RTN_PositionDeltaType& accessor);

  /** Returns this accessor's type constant, i.e. rTN_PositionDeltaType.
    *
    * @return This accessor's type constant, i.e. rTN_PositionDeltaType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::rTN_PositionDeltaType;
  }

  /** Returns the version that was initialized from the uci:version attribute of RTN_PositionDeltaType.
    *
    * @return The version that was initialized from the uci:version attribute of RTN_PositionDeltaType.
    */
  static std::string getUCITypeVersion() {
    return "000.002.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const RTN_PositionDeltaType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by RadialDelta.
    *
    * @return The value of the simple primitive data type identified by RadialDelta.
    */
  virtual uci::type::DistanceOffsetTypeValue getRadialDelta() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by RadialDelta.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RTN_PositionDeltaType& setRadialDelta(uci::type::DistanceOffsetTypeValue value) = 0;

  /** Returns whether the Element identified by RadialDelta exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by RadialDelta is enabled or not.
    */
  virtual bool hasRadialDelta() const = 0;

  /** Clears (disabled) the Element identified by RadialDelta.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RTN_PositionDeltaType& clearRadialDelta() = 0;

  /** Returns the value of the SimplePrimitive data type identified by TransverseDelta.
    *
    * @return The value of the simple primitive data type identified by TransverseDelta.
    */
  virtual uci::type::DistanceOffsetTypeValue getTransverseDelta() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by TransverseDelta.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RTN_PositionDeltaType& setTransverseDelta(uci::type::DistanceOffsetTypeValue value) = 0;

  /** Returns whether the Element identified by TransverseDelta exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by TransverseDelta is enabled or not.
    */
  virtual bool hasTransverseDelta() const = 0;

  /** Clears (disabled) the Element identified by TransverseDelta.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RTN_PositionDeltaType& clearTransverseDelta() = 0;

  /** Returns the value of the SimplePrimitive data type identified by NormalDelta.
    *
    * @return The value of the simple primitive data type identified by NormalDelta.
    */
  virtual uci::type::DistanceOffsetTypeValue getNormalDelta() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by NormalDelta.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RTN_PositionDeltaType& setNormalDelta(uci::type::DistanceOffsetTypeValue value) = 0;

  /** Returns whether the Element identified by NormalDelta exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by NormalDelta is enabled or not.
    */
  virtual bool hasNormalDelta() const = 0;

  /** Clears (disabled) the Element identified by NormalDelta.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RTN_PositionDeltaType& clearNormalDelta() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  RTN_PositionDeltaType() {
  }

  /** The destructor [only available to derived classes]. */
  ~RTN_PositionDeltaType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The RTN_PositionDeltaType to copy from.
    */
  RTN_PositionDeltaType(const RTN_PositionDeltaType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this RTN_PositionDeltaType to the contents of the RTN_PositionDeltaType
    * on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The RTN_PositionDeltaType on the right hand side (rhs) of the assignment operator whose contents are used
    *      to set the contents of this RTN_PositionDeltaType.
    * @return A reference to this RTN_PositionDeltaType.
    */
  RTN_PositionDeltaType& operator=(const RTN_PositionDeltaType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_RTN_POSITIONDELTATYPE_H

