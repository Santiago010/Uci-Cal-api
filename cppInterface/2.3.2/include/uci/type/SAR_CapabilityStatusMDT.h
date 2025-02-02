/** @file SAR_CapabilityStatusMDT.h
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

#ifndef UCI_TYPE_SAR_CAPABILITYSTATUSMDT_H
#define UCI_TYPE_SAR_CAPABILITYSTATUSMDT_H

#include "../base/BoundedList.h"
#include "../base/export.h"
#include "CapabilityStatusBaseType.h"
#include "ElectronicProtectionOptionsEnabledType.h"
#include "EmissionBalanceEnum.h"
#include "JPEG_SettingsType.h"
#include "NITF_PackingPlanPET.h"
#include "RF_ProfileType.h"
#include "SAR_CapabilityStatusType.h"
#include "SAR_MessageOutputsEnum.h"

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
class SAR_CapabilityStatusMDT : public virtual CapabilityStatusBaseType {
public:

  /** This method constructs a new SAR_CapabilityStatusMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SAR_CapabilityStatusMDT.
    */
  static UCI_EXPORT SAR_CapabilityStatusMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new SAR_CapabilityStatusMDT initializing the data accessed by the new
    * SAR_CapabilityStatusMDT using the data accessed by the specified SAR_CapabilityStatusMDT (cloning).
    *
    * @param accessor The SAR_CapabilityStatusMDT that provides access to the data that is to be used to initialize the
    *      data accessed by the new created SAR_CapabilityStatusMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SAR_CapabilityStatusMDT.
    */
  static UCI_EXPORT SAR_CapabilityStatusMDT& create(const SAR_CapabilityStatusMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified SAR_CapabilityStatusMDT. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The SAR_CapabilityStatusMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(SAR_CapabilityStatusMDT& accessor);

  /** Returns this accessor's type constant, i.e. sAR_CapabilityStatusMDT.
    *
    * @return This accessor's type constant, i.e. sAR_CapabilityStatusMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::sAR_CapabilityStatusMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of SAR_CapabilityStatusMDT.
    *
    * @return The version that was initialized from the uci:version attribute of SAR_CapabilityStatusMDT.
    */
  static std::string getUCITypeVersion() {
    return "002.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const SAR_CapabilityStatusMDT& accessor) = 0;

  /** Indicates the high level availability/state of a Capability instance. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::SAR_CapabilityStatusType, uci::type::accessorType::sAR_CapabilityStatusType> CapabilityStatus;

  /** Indicates a RF Emission Profile currently applied to the Capability. If omitted, there are no current profiles and
    * the Capability is operating per its defaults and other constraints. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::RF_ProfileType, uci::type::accessorType::rF_ProfileType> RF_Profile;

  /** Indicates messages that are currently an output of the Capability. See enumerated type annotations for details. List
    * size for this element is based on "Select All That Apply" condition. [Occurrences: Minimum: 0; Maximum: 4]
    */
  typedef uci::base::BoundedList<uci::type::SAR_MessageOutputsEnum, uci::type::accessorType::sAR_MessageOutputsEnum> CurrentMessageOutput;

  /** Indicates which electronic protection options are currently enabled and will be used by this Capability.
    * [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::ElectronicProtectionOptionsEnabledType, uci::type::accessorType::electronicProtectionOptionsEnabledType> ElectronicProtectionOptionsEnabled;

  /** Returns a const reference to the bounded list identified by CapabilityStatus.
    *
    * @return A const reference to the bounded list identified by CapabilityStatus.
    */
  virtual const uci::type::SAR_CapabilityStatusMDT::CapabilityStatus& getCapabilityStatus() const = 0;

  /** Returns a reference to the bounded list identified by CapabilityStatus.
    *
    * @return A reference to the bounded list identified by CapabilityStatus.
    */
  virtual uci::type::SAR_CapabilityStatusMDT::CapabilityStatus& getCapabilityStatus() = 0;

  /** Sets the bounded list identified by CapabilityStatus.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SAR_CapabilityStatusMDT& setCapabilityStatus(const uci::type::SAR_CapabilityStatusMDT::CapabilityStatus& value) = 0;

  /** Returns a const reference to the bounded list identified by RF_Profile.
    *
    * @return A const reference to the bounded list identified by RF_Profile.
    */
  virtual const uci::type::SAR_CapabilityStatusMDT::RF_Profile& getRF_Profile() const = 0;

  /** Returns a reference to the bounded list identified by RF_Profile.
    *
    * @return A reference to the bounded list identified by RF_Profile.
    */
  virtual uci::type::SAR_CapabilityStatusMDT::RF_Profile& getRF_Profile() = 0;

  /** Sets the bounded list identified by RF_Profile.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SAR_CapabilityStatusMDT& setRF_Profile(const uci::type::SAR_CapabilityStatusMDT::RF_Profile& value) = 0;

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
  virtual uci::type::SAR_CapabilityStatusMDT& setEmissionBalanceState(const uci::type::EmissionBalanceEnum& value) = 0;

  /** Sets the value of the enumeration identified by EmissionBalanceState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SAR_CapabilityStatusMDT& setEmissionBalanceState(uci::type::EmissionBalanceEnum::EnumerationItem value) = 0;

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
  virtual uci::type::SAR_CapabilityStatusMDT& clearEmissionBalanceState() = 0;

  /** Returns a const reference to the bounded list identified by CurrentMessageOutput.
    *
    * @return A const reference to the bounded list identified by CurrentMessageOutput.
    */
  virtual const uci::type::SAR_CapabilityStatusMDT::CurrentMessageOutput& getCurrentMessageOutput() const = 0;

  /** Returns a reference to the bounded list identified by CurrentMessageOutput.
    *
    * @return A reference to the bounded list identified by CurrentMessageOutput.
    */
  virtual uci::type::SAR_CapabilityStatusMDT::CurrentMessageOutput& getCurrentMessageOutput() = 0;

  /** Sets the bounded list identified by CurrentMessageOutput.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SAR_CapabilityStatusMDT& setCurrentMessageOutput(const uci::type::SAR_CapabilityStatusMDT::CurrentMessageOutput& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * DefaultPackingPlan.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      DefaultPackingPlan.
    */
  virtual const uci::type::NITF_PackingPlanPET& getDefaultPackingPlan() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by DefaultPackingPlan.
    *
    * @return A reference to the accessor that provides access to the complex content identified by DefaultPackingPlan.
    */
  virtual uci::type::NITF_PackingPlanPET& getDefaultPackingPlan() = 0;

  /** Sets the complex content identified by DefaultPackingPlan to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by DefaultPackingPlan.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SAR_CapabilityStatusMDT& setDefaultPackingPlan(const uci::type::NITF_PackingPlanPET& value) = 0;

  /** Returns whether the Element identified by DefaultPackingPlan exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by DefaultPackingPlan is enabled or not.
    */
  virtual bool hasDefaultPackingPlan() const = 0;

  /** Enables the Element identified by DefaultPackingPlan.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by DefaultPackingPlan.
    */
  virtual uci::type::NITF_PackingPlanPET& enableDefaultPackingPlan(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by DefaultPackingPlan.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SAR_CapabilityStatusMDT& clearDefaultPackingPlan() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * DefaultJPEG_Settings.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      DefaultJPEG_Settings.
    */
  virtual const uci::type::JPEG_SettingsType& getDefaultJPEG_Settings() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by DefaultJPEG_Settings.
    *
    * @return A reference to the accessor that provides access to the complex content identified by DefaultJPEG_Settings.
    */
  virtual uci::type::JPEG_SettingsType& getDefaultJPEG_Settings() = 0;

  /** Sets the complex content identified by DefaultJPEG_Settings to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by DefaultJPEG_Settings.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SAR_CapabilityStatusMDT& setDefaultJPEG_Settings(const uci::type::JPEG_SettingsType& value) = 0;

  /** Returns whether the Element identified by DefaultJPEG_Settings exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by DefaultJPEG_Settings is enabled or not.
    */
  virtual bool hasDefaultJPEG_Settings() const = 0;

  /** Enables the Element identified by DefaultJPEG_Settings.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by DefaultJPEG_Settings.
    */
  virtual uci::type::JPEG_SettingsType& enableDefaultJPEG_Settings(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by DefaultJPEG_Settings.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SAR_CapabilityStatusMDT& clearDefaultJPEG_Settings() = 0;

  /** Returns a const reference to the bounded list identified by ElectronicProtectionOptionsEnabled.
    *
    * @return A const reference to the bounded list identified by ElectronicProtectionOptionsEnabled.
    */
  virtual const uci::type::SAR_CapabilityStatusMDT::ElectronicProtectionOptionsEnabled& getElectronicProtectionOptionsEnabled() const = 0;

  /** Returns a reference to the bounded list identified by ElectronicProtectionOptionsEnabled.
    *
    * @return A reference to the bounded list identified by ElectronicProtectionOptionsEnabled.
    */
  virtual uci::type::SAR_CapabilityStatusMDT::ElectronicProtectionOptionsEnabled& getElectronicProtectionOptionsEnabled() = 0;

  /** Sets the bounded list identified by ElectronicProtectionOptionsEnabled.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SAR_CapabilityStatusMDT& setElectronicProtectionOptionsEnabled(const uci::type::SAR_CapabilityStatusMDT::ElectronicProtectionOptionsEnabled& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  SAR_CapabilityStatusMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~SAR_CapabilityStatusMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The SAR_CapabilityStatusMDT to copy from.
    */
  SAR_CapabilityStatusMDT(const SAR_CapabilityStatusMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this SAR_CapabilityStatusMDT to the contents of the
    * SAR_CapabilityStatusMDT on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The SAR_CapabilityStatusMDT on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this SAR_CapabilityStatusMDT.
    * @return A reference to this SAR_CapabilityStatusMDT.
    */
  SAR_CapabilityStatusMDT& operator=(const SAR_CapabilityStatusMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_SAR_CAPABILITYSTATUSMDT_H

