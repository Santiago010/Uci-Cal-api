/** @file TxBeamType.h
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

#ifndef UCI_TYPE_TXBEAMTYPE_H
#define UCI_TYPE_TXBEAMTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "AnglePositiveType.h"
#include "BeamID_Type.h"
#include "BeamPointingReferenceType.h"
#include "DateTimeRangeBeginType.h"
#include "EA_EmissionType.h"
#include "EA_PointingEnum.h"
#include "MilliwattPowerRatioType.h"
#include "PercentType.h"
#include "Point3D_Type.h"

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
class TxBeamType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new TxBeamType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed TxBeamType.
    */
  static UCI_EXPORT TxBeamType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new TxBeamType initializing the data accessed by the new TxBeamType using the data accessed
    * by the specified TxBeamType (cloning).
    *
    * @param accessor The TxBeamType that provides access to the data that is to be used to initialize the data accessed by
    *      the new created TxBeamType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed TxBeamType.
    */
  static UCI_EXPORT TxBeamType& create(const TxBeamType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified TxBeamType. Use of the specified accessor after it has been destroyed will result
    * in undefined behavior.
    *
    * @param accessor The TxBeamType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(TxBeamType& accessor);

  /** Returns this accessor's type constant, i.e. txBeamType.
    *
    * @return This accessor's type constant, i.e. txBeamType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::txBeamType;
  }

  /** Returns the version that was initialized from the uci:version attribute of TxBeamType.
    *
    * @return The version that was initialized from the uci:version attribute of TxBeamType.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const TxBeamType& accessor) = 0;

  /** Indicates a jamming emission of the Beam. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::EA_EmissionType, uci::type::accessorType::eA_EmissionType> Emission;

  /** Returns a const reference to the accessor that provides access to the complex content identified by BeamID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by BeamID.
    */
  virtual const uci::type::BeamID_Type& getBeamID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by BeamID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by BeamID.
    */
  virtual uci::type::BeamID_Type& getBeamID() = 0;

  /** Sets the complex content identified by BeamID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by BeamID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TxBeamType& setBeamID(const uci::type::BeamID_Type& value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by DutyCycle.
    *
    * @return The value of the simple primitive data type identified by DutyCycle.
    */
  virtual uci::type::PercentTypeValue getDutyCycle() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by DutyCycle.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TxBeamType& setDutyCycle(uci::type::PercentTypeValue value) = 0;

  /** Returns whether the Element identified by DutyCycle exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by DutyCycle is enabled or not.
    */
  virtual bool hasDutyCycle() const = 0;

  /** Clears (disabled) the Element identified by DutyCycle.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TxBeamType& clearDutyCycle() = 0;

  /** Returns the value of the SimplePrimitive data type identified by EffectiveRadiatedPower.
    *
    * @return The value of the simple primitive data type identified by EffectiveRadiatedPower.
    */
  virtual uci::type::MilliwattPowerRatioTypeValue getEffectiveRadiatedPower() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by EffectiveRadiatedPower.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TxBeamType& setEffectiveRadiatedPower(uci::type::MilliwattPowerRatioTypeValue value) = 0;

  /** Returns whether the Element identified by EffectiveRadiatedPower exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by EffectiveRadiatedPower is enabled or not.
    */
  virtual bool hasEffectiveRadiatedPower() const = 0;

  /** Clears (disabled) the Element identified by EffectiveRadiatedPower.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TxBeamType& clearEffectiveRadiatedPower() = 0;

  /** Returns the value of the SimplePrimitive data type identified by AzimuthWidth.
    *
    * @return The value of the simple primitive data type identified by AzimuthWidth.
    */
  virtual uci::type::AnglePositiveTypeValue getAzimuthWidth() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by AzimuthWidth.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TxBeamType& setAzimuthWidth(uci::type::AnglePositiveTypeValue value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by ElevationWidth.
    *
    * @return The value of the simple primitive data type identified by ElevationWidth.
    */
  virtual uci::type::AnglePositiveTypeValue getElevationWidth() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by ElevationWidth.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TxBeamType& setElevationWidth(uci::type::AnglePositiveTypeValue value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by StartPosition.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by StartPosition.
    */
  virtual const uci::type::Point3D_Type& getStartPosition() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by StartPosition.
    *
    * @return A reference to the accessor that provides access to the complex content identified by StartPosition.
    */
  virtual uci::type::Point3D_Type& getStartPosition() = 0;

  /** Sets the complex content identified by StartPosition to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by StartPosition.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TxBeamType& setStartPosition(const uci::type::Point3D_Type& value) = 0;

  /** Returns whether the Element identified by StartPosition exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by StartPosition is enabled or not.
    */
  virtual bool hasStartPosition() const = 0;

  /** Enables the Element identified by StartPosition.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by StartPosition.
    */
  virtual uci::type::Point3D_Type& enableStartPosition(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by StartPosition.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TxBeamType& clearStartPosition() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Time.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Time.
    */
  virtual const uci::type::DateTimeRangeBeginType& getTime() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Time.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Time.
    */
  virtual uci::type::DateTimeRangeBeginType& getTime() = 0;

  /** Sets the complex content identified by Time to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Time.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TxBeamType& setTime(const uci::type::DateTimeRangeBeginType& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by TrackingMode.
    *
    * @return A const reference to the value of the enumeration identified by TrackingMode.
    */
  virtual const uci::type::EA_PointingEnum& getTrackingMode() const = 0;

  /** Returns a reference to the value of the enumeration identified by TrackingMode.
    *
    * @return A reference to the value of the enumeration identified by TrackingMode.
    */
  virtual uci::type::EA_PointingEnum& getTrackingMode() = 0;

  /** Sets the value of the enumeration identified by TrackingMode.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TxBeamType& setTrackingMode(const uci::type::EA_PointingEnum& value) = 0;

  /** Sets the value of the enumeration identified by TrackingMode.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TxBeamType& setTrackingMode(uci::type::EA_PointingEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the bounded list identified by Emission.
    *
    * @return A const reference to the bounded list identified by Emission.
    */
  virtual const uci::type::TxBeamType::Emission& getEmission() const = 0;

  /** Returns a reference to the bounded list identified by Emission.
    *
    * @return A reference to the bounded list identified by Emission.
    */
  virtual uci::type::TxBeamType::Emission& getEmission() = 0;

  /** Sets the bounded list identified by Emission.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TxBeamType& setEmission(const uci::type::TxBeamType::Emission& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * BeamPointingReference.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      BeamPointingReference.
    */
  virtual const uci::type::BeamPointingReferenceType& getBeamPointingReference() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by BeamPointingReference.
    *
    * @return A reference to the accessor that provides access to the complex content identified by BeamPointingReference.
    */
  virtual uci::type::BeamPointingReferenceType& getBeamPointingReference() = 0;

  /** Sets the complex content identified by BeamPointingReference to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by BeamPointingReference.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TxBeamType& setBeamPointingReference(const uci::type::BeamPointingReferenceType& value) = 0;

  /** Returns whether the Element identified by BeamPointingReference exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by BeamPointingReference is enabled or not.
    */
  virtual bool hasBeamPointingReference() const = 0;

  /** Enables the Element identified by BeamPointingReference.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by BeamPointingReference.
    */
  virtual uci::type::BeamPointingReferenceType& enableBeamPointingReference(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by BeamPointingReference.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TxBeamType& clearBeamPointingReference() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  TxBeamType() {
  }

  /** The destructor [only available to derived classes]. */
  ~TxBeamType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The TxBeamType to copy from.
    */
  TxBeamType(const TxBeamType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this TxBeamType to the contents of the TxBeamType on the right hand
    * side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The TxBeamType on the right hand side (rhs) of the assignment operator whose contents are used to set the
    *      contents of this TxBeamType.
    * @return A reference to this TxBeamType.
    */
  TxBeamType& operator=(const TxBeamType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_TXBEAMTYPE_H

