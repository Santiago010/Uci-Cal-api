/** @file PO_AirVolumeSensorReferencedType.h
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

#ifndef UCI_TYPE_PO_AIRVOLUMESENSORREFERENCEDTYPE_H
#define UCI_TYPE_PO_AIRVOLUMESENSORREFERENCEDTYPE_H

#include "../base/Accessor.h"
#include "../base/BooleanAccessor.h"
#include "../base/export.h"
#include "AltitudeRangePairType.h"
#include "AngleHalfType.h"
#include "AnglePositiveType.h"
#include "AngleType.h"
#include "DistanceType.h"
#include "ElevationScanStabilizationEnum.h"
#include "LOS_ReferenceEnum.h"

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
class PO_AirVolumeSensorReferencedType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new PO_AirVolumeSensorReferencedType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PO_AirVolumeSensorReferencedType.
    */
  static UCI_EXPORT PO_AirVolumeSensorReferencedType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new PO_AirVolumeSensorReferencedType initializing the data accessed by the new
    * PO_AirVolumeSensorReferencedType using the data accessed by the specified PO_AirVolumeSensorReferencedType (cloning).
    *
    * @param accessor The PO_AirVolumeSensorReferencedType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created PO_AirVolumeSensorReferencedType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PO_AirVolumeSensorReferencedType.
    */
  static UCI_EXPORT PO_AirVolumeSensorReferencedType& create(const PO_AirVolumeSensorReferencedType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified PO_AirVolumeSensorReferencedType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The PO_AirVolumeSensorReferencedType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(PO_AirVolumeSensorReferencedType& accessor);

  /** Returns this accessor's type constant, i.e. pO_AirVolumeSensorReferencedType.
    *
    * @return This accessor's type constant, i.e. pO_AirVolumeSensorReferencedType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::pO_AirVolumeSensorReferencedType;
  }

  /** Returns the version that was initialized from the uci:version attribute of PO_AirVolumeSensorReferencedType.
    *
    * @return The version that was initialized from the uci:version attribute of PO_AirVolumeSensorReferencedType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const PO_AirVolumeSensorReferencedType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by AzimuthScanWidth.
    *
    * @return The value of the simple primitive data type identified by AzimuthScanWidth.
    */
  virtual uci::type::AnglePositiveTypeValue getAzimuthScanWidth() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by AzimuthScanWidth.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_AirVolumeSensorReferencedType& setAzimuthScanWidth(uci::type::AnglePositiveTypeValue value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by AzimuthScanCenter.
    *
    * @return The value of the simple primitive data type identified by AzimuthScanCenter.
    */
  virtual uci::type::AngleTypeValue getAzimuthScanCenter() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by AzimuthScanCenter.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_AirVolumeSensorReferencedType& setAzimuthScanCenter(uci::type::AngleTypeValue value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by ElevationScanWidth.
    *
    * @return The value of the simple primitive data type identified by ElevationScanWidth.
    */
  virtual uci::type::AngleHalfTypeValue getElevationScanWidth() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by ElevationScanWidth.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_AirVolumeSensorReferencedType& setElevationScanWidth(uci::type::AngleHalfTypeValue value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by ElevationScanCenter.
    *
    * @return The value of the simple primitive data type identified by ElevationScanCenter.
    */
  virtual uci::type::AngleHalfTypeValue getElevationScanCenter() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by ElevationScanCenter.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_AirVolumeSensorReferencedType& setElevationScanCenter(uci::type::AngleHalfTypeValue value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by MaxRangeOfInterest.
    *
    * @return The value of the simple primitive data type identified by MaxRangeOfInterest.
    */
  virtual uci::type::DistanceTypeValue getMaxRangeOfInterest() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by MaxRangeOfInterest.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_AirVolumeSensorReferencedType& setMaxRangeOfInterest(uci::type::DistanceTypeValue value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by MinRangeOfInterest.
    *
    * @return The value of the simple primitive data type identified by MinRangeOfInterest.
    */
  virtual uci::type::DistanceTypeValue getMinRangeOfInterest() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by MinRangeOfInterest.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_AirVolumeSensorReferencedType& setMinRangeOfInterest(uci::type::DistanceTypeValue value) = 0;

  /** Returns a const reference to the value of the enumeration identified by AzimuthScanStabilization.
    *
    * @return A const reference to the value of the enumeration identified by AzimuthScanStabilization.
    */
  virtual const uci::type::LOS_ReferenceEnum& getAzimuthScanStabilization() const = 0;

  /** Returns a reference to the value of the enumeration identified by AzimuthScanStabilization.
    *
    * @return A reference to the value of the enumeration identified by AzimuthScanStabilization.
    */
  virtual uci::type::LOS_ReferenceEnum& getAzimuthScanStabilization() = 0;

  /** Sets the value of the enumeration identified by AzimuthScanStabilization.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_AirVolumeSensorReferencedType& setAzimuthScanStabilization(const uci::type::LOS_ReferenceEnum& value) = 0;

  /** Sets the value of the enumeration identified by AzimuthScanStabilization.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_AirVolumeSensorReferencedType& setAzimuthScanStabilization(uci::type::LOS_ReferenceEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the value of the enumeration identified by ElevationScanStabilization.
    *
    * @return A const reference to the value of the enumeration identified by ElevationScanStabilization.
    */
  virtual const uci::type::ElevationScanStabilizationEnum& getElevationScanStabilization() const = 0;

  /** Returns a reference to the value of the enumeration identified by ElevationScanStabilization.
    *
    * @return A reference to the value of the enumeration identified by ElevationScanStabilization.
    */
  virtual uci::type::ElevationScanStabilizationEnum& getElevationScanStabilization() = 0;

  /** Sets the value of the enumeration identified by ElevationScanStabilization.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_AirVolumeSensorReferencedType& setElevationScanStabilization(const uci::type::ElevationScanStabilizationEnum& value) = 0;

  /** Sets the value of the enumeration identified by ElevationScanStabilization.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_AirVolumeSensorReferencedType& setElevationScanStabilization(uci::type::ElevationScanStabilizationEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ElevationScanCenterAltitudeRangePair.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ElevationScanCenterAltitudeRangePair.
    */
  virtual const uci::type::AltitudeRangePairType& getElevationScanCenterAltitudeRangePair() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * ElevationScanCenterAltitudeRangePair.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      ElevationScanCenterAltitudeRangePair.
    */
  virtual uci::type::AltitudeRangePairType& getElevationScanCenterAltitudeRangePair() = 0;

  /** Sets the complex content identified by ElevationScanCenterAltitudeRangePair to the contents of the complex content
    * accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ElevationScanCenterAltitudeRangePair.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_AirVolumeSensorReferencedType& setElevationScanCenterAltitudeRangePair(const uci::type::AltitudeRangePairType& value) = 0;

  /** Returns whether the Element identified by ElevationScanCenterAltitudeRangePair exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ElevationScanCenterAltitudeRangePair is enabled or
    *      not.
    */
  virtual bool hasElevationScanCenterAltitudeRangePair() const = 0;

  /** Enables the Element identified by ElevationScanCenterAltitudeRangePair.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by
    *      ElevationScanCenterAltitudeRangePair.
    */
  virtual uci::type::AltitudeRangePairType& enableElevationScanCenterAltitudeRangePair(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ElevationScanCenterAltitudeRangePair.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_AirVolumeSensorReferencedType& clearElevationScanCenterAltitudeRangePair() = 0;

  /** Returns the value of the SimplePrimitive data type identified by RollStabilized.
    *
    * @return The value of the simple primitive data type identified by RollStabilized.
    */
  virtual xs::Boolean getRollStabilized() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by RollStabilized.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_AirVolumeSensorReferencedType& setRollStabilized(xs::Boolean value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  PO_AirVolumeSensorReferencedType() {
  }

  /** The destructor [only available to derived classes]. */
  ~PO_AirVolumeSensorReferencedType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The PO_AirVolumeSensorReferencedType to copy from.
    */
  PO_AirVolumeSensorReferencedType(const PO_AirVolumeSensorReferencedType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this PO_AirVolumeSensorReferencedType to the contents of the
    * PO_AirVolumeSensorReferencedType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The PO_AirVolumeSensorReferencedType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this PO_AirVolumeSensorReferencedType.
    * @return A reference to this PO_AirVolumeSensorReferencedType.
    */
  PO_AirVolumeSensorReferencedType& operator=(const PO_AirVolumeSensorReferencedType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PO_AIRVOLUMESENSORREFERENCEDTYPE_H

