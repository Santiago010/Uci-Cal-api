/** @file WeatherRadarSettingsCommandMDT.h
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

#ifndef UCI_TYPE_WEATHERRADARSETTINGSCOMMANDMDT_H
#define UCI_TYPE_WEATHERRADARSETTINGSCOMMANDMDT_H

#include "../base/BooleanAccessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "CapabilitySettingsCommandBaseType.h"
#include "ElectronicProtectionOptionsDefaultType.h"
#include "EmconSettingType.h"
#include "EmissionBalanceEnum.h"
#include "WeatherRadarMessageOutputsEnum.h"

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
class WeatherRadarSettingsCommandMDT : public virtual CapabilitySettingsCommandBaseType {
public:

  /** This method constructs a new WeatherRadarSettingsCommandMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed WeatherRadarSettingsCommandMDT.
    */
  static UCI_EXPORT WeatherRadarSettingsCommandMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new WeatherRadarSettingsCommandMDT initializing the data accessed by the new
    * WeatherRadarSettingsCommandMDT using the data accessed by the specified WeatherRadarSettingsCommandMDT (cloning).
    *
    * @param accessor The WeatherRadarSettingsCommandMDT that provides access to the data that is to be used to initialize
    *      the data accessed by the new created WeatherRadarSettingsCommandMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed WeatherRadarSettingsCommandMDT.
    */
  static UCI_EXPORT WeatherRadarSettingsCommandMDT& create(const WeatherRadarSettingsCommandMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified WeatherRadarSettingsCommandMDT. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The WeatherRadarSettingsCommandMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(WeatherRadarSettingsCommandMDT& accessor);

  /** Returns this accessor's type constant, i.e. weatherRadarSettingsCommandMDT.
    *
    * @return This accessor's type constant, i.e. weatherRadarSettingsCommandMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::weatherRadarSettingsCommandMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of WeatherRadarSettingsCommandMDT.
    *
    * @return The version that was initialized from the uci:version attribute of WeatherRadarSettingsCommandMDT.
    */
  static std::string getUCITypeVersion() {
    return "001.000.001.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const WeatherRadarSettingsCommandMDT& accessor) = 0;

  /** Indicates messages that are an output by the Capability as the result of capability commands. See enumerated type
    * annotations for details. List size for this element is based on "Select All That Apply" condition. [Occurrences:
    * Minimum: 0; Maximum: 3]
    */
  typedef uci::base::BoundedList<uci::type::WeatherRadarMessageOutputsEnum, uci::type::accessorType::weatherRadarMessageOutputsEnum> MessageOutput;

  /** Indicates which advertised EP options should be applied to all Activities associated with this Capability. This list
    * will completely replace any previously commanded list of EP options. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::ElectronicProtectionOptionsDefaultType, uci::type::accessorType::electronicProtectionOptionsDefaultType> ElectronicProtectionOptionsEnabled;

  /** Returns the value of the SimplePrimitive data type identified by ElectronicProtectionState.
    *
    * @return The value of the simple primitive data type identified by ElectronicProtectionState.
    */
  virtual xs::Boolean getElectronicProtectionState() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by ElectronicProtectionState.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::WeatherRadarSettingsCommandMDT& setElectronicProtectionState(xs::Boolean value) = 0;

  /** Returns whether the Element identified by ElectronicProtectionState exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ElectronicProtectionState is enabled or not.
    */
  virtual bool hasElectronicProtectionState() const = 0;

  /** Clears (disabled) the Element identified by ElectronicProtectionState.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::WeatherRadarSettingsCommandMDT& clearElectronicProtectionState() = 0;

  /** Returns a const reference to the value of the enumeration identified by EmissionBalanceState.
    *
    * @return A const reference to the value of the enumeration identified by EmissionBalanceState.
    */
  virtual const uci::type::EmissionBalanceEnum& getEmissionBalanceState() const = 0;

  /** Returns a reference to the value of the enumeration identified by EmissionBalanceState.
    *
    * @return A reference to the value of the enumeration identified by EmissionBalanceState.
    */
  virtual uci::type::EmissionBalanceEnum& getEmissionBalanceState() = 0;

  /** Sets the value of the enumeration identified by EmissionBalanceState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::WeatherRadarSettingsCommandMDT& setEmissionBalanceState(const uci::type::EmissionBalanceEnum& value) = 0;

  /** Sets the value of the enumeration identified by EmissionBalanceState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::WeatherRadarSettingsCommandMDT& setEmissionBalanceState(uci::type::EmissionBalanceEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by EmissionBalanceState exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by EmissionBalanceState is enabled or not.
    */
  virtual bool hasEmissionBalanceState() const = 0;

  /** Enables the Element identified by EmissionBalanceState.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by EmissionBalanceState.
    */
  virtual uci::type::EmissionBalanceEnum& enableEmissionBalanceState(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by EmissionBalanceState.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::WeatherRadarSettingsCommandMDT& clearEmissionBalanceState() = 0;

  /** Returns a const reference to the bounded list identified by MessageOutput.
    *
    * @return A const reference to the bounded list identified by MessageOutput.
    */
  virtual const uci::type::WeatherRadarSettingsCommandMDT::MessageOutput& getMessageOutput() const = 0;

  /** Returns a reference to the bounded list identified by MessageOutput.
    *
    * @return A reference to the bounded list identified by MessageOutput.
    */
  virtual uci::type::WeatherRadarSettingsCommandMDT::MessageOutput& getMessageOutput() = 0;

  /** Sets the bounded list identified by MessageOutput.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::WeatherRadarSettingsCommandMDT& setMessageOutput(const uci::type::WeatherRadarSettingsCommandMDT::MessageOutput& value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by UnassignAll.
    *
    * @return The value of the simple primitive data type identified by UnassignAll.
    */
  virtual xs::Boolean getUnassignAll() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by UnassignAll.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::WeatherRadarSettingsCommandMDT& setUnassignAll(xs::Boolean value) = 0;

  /** Returns whether the Element identified by UnassignAll exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by UnassignAll is enabled or not.
    */
  virtual bool hasUnassignAll() const = 0;

  /** Clears (disabled) the Element identified by UnassignAll.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::WeatherRadarSettingsCommandMDT& clearUnassignAll() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by DefaultEmcon.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by DefaultEmcon.
    */
  virtual const uci::type::EmconSettingType& getDefaultEmcon() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by DefaultEmcon.
    *
    * @return A reference to the accessor that provides access to the complex content identified by DefaultEmcon.
    */
  virtual uci::type::EmconSettingType& getDefaultEmcon() = 0;

  /** Sets the complex content identified by DefaultEmcon to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by DefaultEmcon.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::WeatherRadarSettingsCommandMDT& setDefaultEmcon(const uci::type::EmconSettingType& value) = 0;

  /** Returns whether the Element identified by DefaultEmcon exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by DefaultEmcon is enabled or not.
    */
  virtual bool hasDefaultEmcon() const = 0;

  /** Enables the Element identified by DefaultEmcon.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by DefaultEmcon.
    */
  virtual uci::type::EmconSettingType& enableDefaultEmcon(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by DefaultEmcon.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::WeatherRadarSettingsCommandMDT& clearDefaultEmcon() = 0;

  /** Returns a const reference to the bounded list identified by ElectronicProtectionOptionsEnabled.
    *
    * @return A const reference to the bounded list identified by ElectronicProtectionOptionsEnabled.
    */
  virtual const uci::type::WeatherRadarSettingsCommandMDT::ElectronicProtectionOptionsEnabled& getElectronicProtectionOptionsEnabled() const = 0;

  /** Returns a reference to the bounded list identified by ElectronicProtectionOptionsEnabled.
    *
    * @return A reference to the bounded list identified by ElectronicProtectionOptionsEnabled.
    */
  virtual uci::type::WeatherRadarSettingsCommandMDT::ElectronicProtectionOptionsEnabled& getElectronicProtectionOptionsEnabled() = 0;

  /** Sets the bounded list identified by ElectronicProtectionOptionsEnabled.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::WeatherRadarSettingsCommandMDT& setElectronicProtectionOptionsEnabled(const uci::type::WeatherRadarSettingsCommandMDT::ElectronicProtectionOptionsEnabled& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  WeatherRadarSettingsCommandMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~WeatherRadarSettingsCommandMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The WeatherRadarSettingsCommandMDT to copy from.
    */
  WeatherRadarSettingsCommandMDT(const WeatherRadarSettingsCommandMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this WeatherRadarSettingsCommandMDT to the contents of the
    * WeatherRadarSettingsCommandMDT on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The WeatherRadarSettingsCommandMDT on the right hand side (rhs) of the assignment operator whose contents
    *      are used to set the contents of this WeatherRadarSettingsCommandMDT.
    * @return A reference to this WeatherRadarSettingsCommandMDT.
    */
  WeatherRadarSettingsCommandMDT& operator=(const WeatherRadarSettingsCommandMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_WEATHERRADARSETTINGSCOMMANDMDT_H

