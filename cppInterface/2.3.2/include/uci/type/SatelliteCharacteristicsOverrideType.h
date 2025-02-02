/** @file SatelliteCharacteristicsOverrideType.h
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

#ifndef UCI_TYPE_SATELLITECHARACTERISTICSOVERRIDETYPE_H
#define UCI_TYPE_SATELLITECHARACTERISTICSOVERRIDETYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "SatelliteCharacteristicsID_Type.h"
#include "SatelliteCharacteristicsType.h"

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
class SatelliteCharacteristicsOverrideType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new SatelliteCharacteristicsOverrideType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SatelliteCharacteristicsOverrideType.
    */
  static UCI_EXPORT SatelliteCharacteristicsOverrideType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new SatelliteCharacteristicsOverrideType initializing the data accessed by the new
    * SatelliteCharacteristicsOverrideType using the data accessed by the specified SatelliteCharacteristicsOverrideType
    * (cloning).
    *
    * @param accessor The SatelliteCharacteristicsOverrideType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created SatelliteCharacteristicsOverrideType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SatelliteCharacteristicsOverrideType.
    */
  static UCI_EXPORT SatelliteCharacteristicsOverrideType& create(const SatelliteCharacteristicsOverrideType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified SatelliteCharacteristicsOverrideType. Use of the specified accessor after it has
    * been destroyed will result in undefined behavior.
    *
    * @param accessor The SatelliteCharacteristicsOverrideType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(SatelliteCharacteristicsOverrideType& accessor);

  /** Returns this accessor's type constant, i.e. satelliteCharacteristicsOverrideType.
    *
    * @return This accessor's type constant, i.e. satelliteCharacteristicsOverrideType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::satelliteCharacteristicsOverrideType;
  }

  /** Returns the version that was initialized from the uci:version attribute of SatelliteCharacteristicsOverrideType.
    *
    * @return The version that was initialized from the uci:version attribute of SatelliteCharacteristicsOverrideType.
    */
  static std::string getUCITypeVersion() {
    return "003.001.001.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const SatelliteCharacteristicsOverrideType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * SatelliteCharacteristicsID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      SatelliteCharacteristicsID.
    */
  virtual const uci::type::SatelliteCharacteristicsID_Type& getSatelliteCharacteristicsID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * SatelliteCharacteristicsID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      SatelliteCharacteristicsID.
    */
  virtual uci::type::SatelliteCharacteristicsID_Type& getSatelliteCharacteristicsID() = 0;

  /** Sets the complex content identified by SatelliteCharacteristicsID to the contents of the complex content accessed by
    * the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SatelliteCharacteristicsID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SatelliteCharacteristicsOverrideType& setSatelliteCharacteristicsID(const uci::type::SatelliteCharacteristicsID_Type& value) = 0;

  /** Returns whether the Element identified by SatelliteCharacteristicsID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by SatelliteCharacteristicsID is enabled or not.
    */
  virtual bool hasSatelliteCharacteristicsID() const = 0;

  /** Enables the Element identified by SatelliteCharacteristicsID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by
    *      SatelliteCharacteristicsID.
    */
  virtual uci::type::SatelliteCharacteristicsID_Type& enableSatelliteCharacteristicsID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by SatelliteCharacteristicsID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SatelliteCharacteristicsOverrideType& clearSatelliteCharacteristicsID() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * OverrideCharacteristics.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      OverrideCharacteristics.
    */
  virtual const uci::type::SatelliteCharacteristicsType& getOverrideCharacteristics() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * OverrideCharacteristics.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      OverrideCharacteristics.
    */
  virtual uci::type::SatelliteCharacteristicsType& getOverrideCharacteristics() = 0;

  /** Sets the complex content identified by OverrideCharacteristics to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by OverrideCharacteristics.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SatelliteCharacteristicsOverrideType& setOverrideCharacteristics(const uci::type::SatelliteCharacteristicsType& value) = 0;

  /** Returns whether the Element identified by OverrideCharacteristics exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by OverrideCharacteristics is enabled or not.
    */
  virtual bool hasOverrideCharacteristics() const = 0;

  /** Enables the Element identified by OverrideCharacteristics.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by
    *      OverrideCharacteristics.
    */
  virtual uci::type::SatelliteCharacteristicsType& enableOverrideCharacteristics(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by OverrideCharacteristics.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SatelliteCharacteristicsOverrideType& clearOverrideCharacteristics() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  SatelliteCharacteristicsOverrideType() {
  }

  /** The destructor [only available to derived classes]. */
  ~SatelliteCharacteristicsOverrideType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The SatelliteCharacteristicsOverrideType to copy from.
    */
  SatelliteCharacteristicsOverrideType(const SatelliteCharacteristicsOverrideType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this SatelliteCharacteristicsOverrideType to the contents of the
    * SatelliteCharacteristicsOverrideType on the right hand side (rhs) of the assignment operator [only available to
    * derived classes].
    *
    * @param rhs The SatelliteCharacteristicsOverrideType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this SatelliteCharacteristicsOverrideType.
    * @return A reference to this SatelliteCharacteristicsOverrideType.
    */
  SatelliteCharacteristicsOverrideType& operator=(const SatelliteCharacteristicsOverrideType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_SATELLITECHARACTERISTICSOVERRIDETYPE_H

