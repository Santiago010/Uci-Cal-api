/** @file Point2D_Type.h
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

#ifndef UCI_TYPE_POINT2D_TYPE_H
#define UCI_TYPE_POINT2D_TYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "AltitudeRangeType.h"
#include "AltitudeReferenceEnum.h"
#include "AltitudeType.h"
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

/** This type represents positional data. The latitude and longitude, relative to the WGS-84 ellipsoid, are mandatory
  * entries. If AltitudeReference is not specified, altitude is the WGS-84 height above the ellipsoid.
  */
class Point2D_Type : public virtual uci::base::Accessor {
public:

  /** This method constructs a new Point2D_Type.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed Point2D_Type.
    */
  static UCI_EXPORT Point2D_Type& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new Point2D_Type initializing the data accessed by the new Point2D_Type using the data
    * accessed by the specified Point2D_Type (cloning).
    *
    * @param accessor The Point2D_Type that provides access to the data that is to be used to initialize the data accessed
    *      by the new created Point2D_Type.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed Point2D_Type.
    */
  static UCI_EXPORT Point2D_Type& create(const Point2D_Type& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified Point2D_Type. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The Point2D_Type that is to be destroyed.
    */
  static UCI_EXPORT void destroy(Point2D_Type& accessor);

  /** Returns this accessor's type constant, i.e. point2D_Type.
    *
    * @return This accessor's type constant, i.e. point2D_Type.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::point2D_Type;
  }

  /** Returns the version that was initialized from the uci:version attribute of Point2D_Type.
    *
    * @return The version that was initialized from the uci:version attribute of Point2D_Type.
    */
  static std::string getUCITypeVersion() {
    return "001.000.002.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const Point2D_Type& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Latitude.
    *
    * @return The value of the simple primitive data type identified by Latitude.
    */
  virtual uci::type::AngleHalfTypeValue getLatitude() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Latitude.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::Point2D_Type& setLatitude(uci::type::AngleHalfTypeValue value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Longitude.
    *
    * @return The value of the simple primitive data type identified by Longitude.
    */
  virtual uci::type::AngleTypeValue getLongitude() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Longitude.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::Point2D_Type& setLongitude(uci::type::AngleTypeValue value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Altitude.
    *
    * @return The value of the simple primitive data type identified by Altitude.
    */
  virtual uci::type::AltitudeTypeValue getAltitude() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Altitude.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::Point2D_Type& setAltitude(uci::type::AltitudeTypeValue value) = 0;

  /** Returns whether the Element identified by Altitude exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Altitude is enabled or not.
    */
  virtual bool hasAltitude() const = 0;

  /** Clears (disabled) the Element identified by Altitude.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::Point2D_Type& clearAltitude() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by AltitudeRange.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by AltitudeRange.
    */
  virtual const uci::type::AltitudeRangeType& getAltitudeRange() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by AltitudeRange.
    *
    * @return A reference to the accessor that provides access to the complex content identified by AltitudeRange.
    */
  virtual uci::type::AltitudeRangeType& getAltitudeRange() = 0;

  /** Sets the complex content identified by AltitudeRange to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by AltitudeRange.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::Point2D_Type& setAltitudeRange(const uci::type::AltitudeRangeType& value) = 0;

  /** Returns whether the Element identified by AltitudeRange exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by AltitudeRange is enabled or not.
    */
  virtual bool hasAltitudeRange() const = 0;

  /** Enables the Element identified by AltitudeRange.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by AltitudeRange.
    */
  virtual uci::type::AltitudeRangeType& enableAltitudeRange(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by AltitudeRange.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::Point2D_Type& clearAltitudeRange() = 0;

  /** Returns a const reference to the value of the enumeration identified by AltitudeReference.
    *
    * @return A const reference to the value of the enumeration identified by AltitudeReference.
    */
  virtual const uci::type::AltitudeReferenceEnum& getAltitudeReference() const = 0;

  /** Returns a reference to the value of the enumeration identified by AltitudeReference.
    *
    * @return A reference to the value of the enumeration identified by AltitudeReference.
    */
  virtual uci::type::AltitudeReferenceEnum& getAltitudeReference() = 0;

  /** Sets the value of the enumeration identified by AltitudeReference.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::Point2D_Type& setAltitudeReference(const uci::type::AltitudeReferenceEnum& value) = 0;

  /** Sets the value of the enumeration identified by AltitudeReference.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::Point2D_Type& setAltitudeReference(uci::type::AltitudeReferenceEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by AltitudeReference exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by AltitudeReference is enabled or not.
    */
  virtual bool hasAltitudeReference() const = 0;

  /** Enables the Element identified by AltitudeReference.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by AltitudeReference.
    */
  virtual uci::type::AltitudeReferenceEnum& enableAltitudeReference(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by AltitudeReference.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::Point2D_Type& clearAltitudeReference() = 0;

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
  virtual uci::type::Point2D_Type& setTimestamp(uci::type::DateTimeTypeValue value) = 0;

  /** Returns whether the Element identified by Timestamp exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Timestamp is enabled or not.
    */
  virtual bool hasTimestamp() const = 0;

  /** Clears (disabled) the Element identified by Timestamp.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::Point2D_Type& clearTimestamp() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  Point2D_Type() {
  }

  /** The destructor [only available to derived classes]. */
  ~Point2D_Type() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The Point2D_Type to copy from.
    */
  Point2D_Type(const Point2D_Type& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this Point2D_Type to the contents of the Point2D_Type on the right hand
    * side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The Point2D_Type on the right hand side (rhs) of the assignment operator whose contents are used to set
    *      the contents of this Point2D_Type.
    * @return A reference to this Point2D_Type.
    */
  Point2D_Type& operator=(const Point2D_Type& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_POINT2D_TYPE_H

