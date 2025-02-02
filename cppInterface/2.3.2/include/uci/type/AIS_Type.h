/** @file AIS_Type.h
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

#ifndef UCI_TYPE_AIS_TYPE_H
#define UCI_TYPE_AIS_TYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "AlphanumericDashSpaceUnderscoreString20OnlyType.h"
#include "AlphanumericDashSpaceUnderscoreString20Type.h"
#include "IMO_NumberType.h"
#include "MMSI_NumberStringType.h"

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
class AIS_Type : public virtual uci::base::Accessor {
public:

  /** This method constructs a new AIS_Type.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed AIS_Type.
    */
  static UCI_EXPORT AIS_Type& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new AIS_Type initializing the data accessed by the new AIS_Type using the data accessed by
    * the specified AIS_Type (cloning).
    *
    * @param accessor The AIS_Type that provides access to the data that is to be used to initialize the data accessed by
    *      the new created AIS_Type.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed AIS_Type.
    */
  static UCI_EXPORT AIS_Type& create(const AIS_Type& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified AIS_Type. Use of the specified accessor after it has been destroyed will result in
    * undefined behavior.
    *
    * @param accessor The AIS_Type that is to be destroyed.
    */
  static UCI_EXPORT void destroy(AIS_Type& accessor);

  /** Returns this accessor's type constant, i.e. aIS_Type.
    *
    * @return This accessor's type constant, i.e. aIS_Type.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::aIS_Type;
  }

  /** Returns the version that was initialized from the uci:version attribute of AIS_Type.
    *
    * @return The version that was initialized from the uci:version attribute of AIS_Type.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const AIS_Type& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by MMSI_Number.
    *
    * @return A const reference to the accessor that provides access to the string identified by MMSI_Number.
    */
  virtual const uci::type::MMSI_NumberStringType& getMMSI_Number() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by MMSI_Number.
    *
    * @return A reference to the accessor that provides access to the string identified by MMSI_Number.
    */
  virtual uci::type::MMSI_NumberStringType& getMMSI_Number() = 0;

  /** Sets the string identified by MMSI_Number to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by MMSI_Number.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AIS_Type& setMMSI_Number(const uci::type::MMSI_NumberStringType& value) = 0;

  /** Sets the string identified by MMSI_Number to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AIS_Type& setMMSI_Number(const std::string& value) = 0;

  /** Sets the string identified by MMSI_Number to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AIS_Type& setMMSI_Number(const char* value) = 0;

  /** Returns whether the Element identified by MMSI_Number exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by MMSI_Number is enabled or not.
    */
  virtual bool hasMMSI_Number() const = 0;

  /** Enables the Element identified by MMSI_Number.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the string identified by MMSI_Number.
    */
  virtual uci::type::MMSI_NumberStringType& enableMMSI_Number(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by MMSI_Number.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AIS_Type& clearMMSI_Number() = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by IMO_Number.
    *
    * @return A const reference to the accessor that provides access to the string identified by IMO_Number.
    */
  virtual const uci::type::IMO_NumberType& getIMO_Number() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by IMO_Number.
    *
    * @return A reference to the accessor that provides access to the string identified by IMO_Number.
    */
  virtual uci::type::IMO_NumberType& getIMO_Number() = 0;

  /** Sets the string identified by IMO_Number to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by IMO_Number.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AIS_Type& setIMO_Number(const uci::type::IMO_NumberType& value) = 0;

  /** Sets the string identified by IMO_Number to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AIS_Type& setIMO_Number(const std::string& value) = 0;

  /** Sets the string identified by IMO_Number to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AIS_Type& setIMO_Number(const char* value) = 0;

  /** Returns whether the Element identified by IMO_Number exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by IMO_Number is enabled or not.
    */
  virtual bool hasIMO_Number() const = 0;

  /** Enables the Element identified by IMO_Number.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the string identified by IMO_Number.
    */
  virtual uci::type::IMO_NumberType& enableIMO_Number(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by IMO_Number.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AIS_Type& clearIMO_Number() = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by VesselName.
    *
    * @return A const reference to the accessor that provides access to the string identified by VesselName.
    */
  virtual const uci::type::AlphanumericDashSpaceUnderscoreString20OnlyType& getVesselName() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by VesselName.
    *
    * @return A reference to the accessor that provides access to the string identified by VesselName.
    */
  virtual uci::type::AlphanumericDashSpaceUnderscoreString20OnlyType& getVesselName() = 0;

  /** Sets the string identified by VesselName to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by VesselName.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AIS_Type& setVesselName(const uci::type::AlphanumericDashSpaceUnderscoreString20OnlyType& value) = 0;

  /** Sets the string identified by VesselName to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AIS_Type& setVesselName(const std::string& value) = 0;

  /** Sets the string identified by VesselName to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AIS_Type& setVesselName(const char* value) = 0;

  /** Returns whether the Element identified by VesselName exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by VesselName is enabled or not.
    */
  virtual bool hasVesselName() const = 0;

  /** Enables the Element identified by VesselName.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the string identified by VesselName.
    */
  virtual uci::type::AlphanumericDashSpaceUnderscoreString20OnlyType& enableVesselName(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by VesselName.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AIS_Type& clearVesselName() = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by CallSign.
    *
    * @return A const reference to the accessor that provides access to the string identified by CallSign.
    */
  virtual const uci::type::AlphanumericDashSpaceUnderscoreString20Type& getCallSign() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by CallSign.
    *
    * @return A reference to the accessor that provides access to the string identified by CallSign.
    */
  virtual uci::type::AlphanumericDashSpaceUnderscoreString20Type& getCallSign() = 0;

  /** Sets the string identified by CallSign to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by CallSign.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AIS_Type& setCallSign(const uci::type::AlphanumericDashSpaceUnderscoreString20Type& value) = 0;

  /** Sets the string identified by CallSign to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AIS_Type& setCallSign(const std::string& value) = 0;

  /** Sets the string identified by CallSign to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AIS_Type& setCallSign(const char* value) = 0;

  /** Returns whether the Element identified by CallSign exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by CallSign is enabled or not.
    */
  virtual bool hasCallSign() const = 0;

  /** Enables the Element identified by CallSign.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the string identified by CallSign.
    */
  virtual uci::type::AlphanumericDashSpaceUnderscoreString20Type& enableCallSign(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by CallSign.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AIS_Type& clearCallSign() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  AIS_Type() {
  }

  /** The destructor [only available to derived classes]. */
  ~AIS_Type() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The AIS_Type to copy from.
    */
  AIS_Type(const AIS_Type& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this AIS_Type to the contents of the AIS_Type on the right hand side
    * (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The AIS_Type on the right hand side (rhs) of the assignment operator whose contents are used to set the
    *      contents of this AIS_Type.
    * @return A reference to this AIS_Type.
    */
  AIS_Type& operator=(const AIS_Type& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_AIS_TYPE_H

