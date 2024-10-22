/** @file SubsystemConfigurationType.h
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

#ifndef UCI_TYPE_SUBSYSTEMCONFIGURATIONTYPE_H
#define UCI_TYPE_SUBSYSTEMCONFIGURATIONTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "AboutType.h"
#include "CapabilityID_Type.h"
#include "InstallationDetailsType.h"
#include "MassType.h"
#include "ServiceID_Type.h"
#include "SubsystemSupportedSettingType.h"
#include "SupportCapabilityID_Type.h"

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
class SubsystemConfigurationType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new SubsystemConfigurationType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SubsystemConfigurationType.
    */
  static UCI_EXPORT SubsystemConfigurationType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new SubsystemConfigurationType initializing the data accessed by the new
    * SubsystemConfigurationType using the data accessed by the specified SubsystemConfigurationType (cloning).
    *
    * @param accessor The SubsystemConfigurationType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created SubsystemConfigurationType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SubsystemConfigurationType.
    */
  static UCI_EXPORT SubsystemConfigurationType& create(const SubsystemConfigurationType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified SubsystemConfigurationType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The SubsystemConfigurationType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(SubsystemConfigurationType& accessor);

  /** Returns this accessor's type constant, i.e. subsystemConfigurationType.
    *
    * @return This accessor's type constant, i.e. subsystemConfigurationType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::subsystemConfigurationType;
  }

  /** Returns the version that was initialized from the uci:version attribute of SubsystemConfigurationType.
    *
    * @return The version that was initialized from the uci:version attribute of SubsystemConfigurationType.
    */
  static std::string getUCITypeVersion() {
    return "002.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const SubsystemConfigurationType& accessor) = 0;

  /** If multiple instances are given, each should be of a different setting type as indicated by the child element.
    * [Occurrences: Minimum: 0; Maximum: 8]
    */
  typedef uci::base::BoundedList<uci::type::SubsystemSupportedSettingType, uci::type::accessorType::subsystemSupportedSettingType> SupportedSetting;

  /** Indicates a Capability that is controlled and/or implemented by the Subsystem. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::CapabilityID_Type, uci::type::accessorType::capabilityID_Type> CapabilityID;

  /** Indicates a SupportCapability that is controlled and/or implemented by the Subsystem. [Occurrences: Minimum: 0;
    * Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::SupportCapabilityID_Type, uci::type::accessorType::supportCapabilityID_Type> SupportCapabilityID;

  /** Indicates a Service that is implemented by the Subsystem. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::ServiceID_Type, uci::type::accessorType::serviceID_Type> ServiceID;

  /** Returns a const reference to the accessor that provides access to the complex content identified by About.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by About.
    */
  virtual const uci::type::AboutType& getAbout() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by About.
    *
    * @return A reference to the accessor that provides access to the complex content identified by About.
    */
  virtual uci::type::AboutType& getAbout() = 0;

  /** Sets the complex content identified by About to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by About.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SubsystemConfigurationType& setAbout(const uci::type::AboutType& value) = 0;

  /** Returns a const reference to the bounded list identified by SupportedSetting.
    *
    * @return A const reference to the bounded list identified by SupportedSetting.
    */
  virtual const uci::type::SubsystemConfigurationType::SupportedSetting& getSupportedSetting() const = 0;

  /** Returns a reference to the bounded list identified by SupportedSetting.
    *
    * @return A reference to the bounded list identified by SupportedSetting.
    */
  virtual uci::type::SubsystemConfigurationType::SupportedSetting& getSupportedSetting() = 0;

  /** Sets the bounded list identified by SupportedSetting.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SubsystemConfigurationType& setSupportedSetting(const uci::type::SubsystemConfigurationType::SupportedSetting& value) = 0;

  /** Returns a const reference to the bounded list identified by CapabilityID.
    *
    * @return A const reference to the bounded list identified by CapabilityID.
    */
  virtual const uci::type::SubsystemConfigurationType::CapabilityID& getCapabilityID() const = 0;

  /** Returns a reference to the bounded list identified by CapabilityID.
    *
    * @return A reference to the bounded list identified by CapabilityID.
    */
  virtual uci::type::SubsystemConfigurationType::CapabilityID& getCapabilityID() = 0;

  /** Sets the bounded list identified by CapabilityID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SubsystemConfigurationType& setCapabilityID(const uci::type::SubsystemConfigurationType::CapabilityID& value) = 0;

  /** Returns a const reference to the bounded list identified by SupportCapabilityID.
    *
    * @return A const reference to the bounded list identified by SupportCapabilityID.
    */
  virtual const uci::type::SubsystemConfigurationType::SupportCapabilityID& getSupportCapabilityID() const = 0;

  /** Returns a reference to the bounded list identified by SupportCapabilityID.
    *
    * @return A reference to the bounded list identified by SupportCapabilityID.
    */
  virtual uci::type::SubsystemConfigurationType::SupportCapabilityID& getSupportCapabilityID() = 0;

  /** Sets the bounded list identified by SupportCapabilityID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SubsystemConfigurationType& setSupportCapabilityID(const uci::type::SubsystemConfigurationType::SupportCapabilityID& value) = 0;

  /** Returns a const reference to the bounded list identified by ServiceID.
    *
    * @return A const reference to the bounded list identified by ServiceID.
    */
  virtual const uci::type::SubsystemConfigurationType::ServiceID& getServiceID() const = 0;

  /** Returns a reference to the bounded list identified by ServiceID.
    *
    * @return A reference to the bounded list identified by ServiceID.
    */
  virtual uci::type::SubsystemConfigurationType::ServiceID& getServiceID() = 0;

  /** Sets the bounded list identified by ServiceID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SubsystemConfigurationType& setServiceID(const uci::type::SubsystemConfigurationType::ServiceID& value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Mass.
    *
    * @return The value of the simple primitive data type identified by Mass.
    */
  virtual uci::type::MassTypeValue getMass() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Mass.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SubsystemConfigurationType& setMass(uci::type::MassTypeValue value) = 0;

  /** Returns whether the Element identified by Mass exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Mass is enabled or not.
    */
  virtual bool hasMass() const = 0;

  /** Clears (disabled) the Element identified by Mass.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SubsystemConfigurationType& clearMass() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * InstallationDetails.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      InstallationDetails.
    */
  virtual const uci::type::InstallationDetailsType& getInstallationDetails() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by InstallationDetails.
    *
    * @return A reference to the accessor that provides access to the complex content identified by InstallationDetails.
    */
  virtual uci::type::InstallationDetailsType& getInstallationDetails() = 0;

  /** Sets the complex content identified by InstallationDetails to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by InstallationDetails.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SubsystemConfigurationType& setInstallationDetails(const uci::type::InstallationDetailsType& value) = 0;

  /** Returns whether the Element identified by InstallationDetails exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by InstallationDetails is enabled or not.
    */
  virtual bool hasInstallationDetails() const = 0;

  /** Enables the Element identified by InstallationDetails.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by InstallationDetails.
    */
  virtual uci::type::InstallationDetailsType& enableInstallationDetails(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by InstallationDetails.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SubsystemConfigurationType& clearInstallationDetails() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  SubsystemConfigurationType() {
  }

  /** The destructor [only available to derived classes]. */
  ~SubsystemConfigurationType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The SubsystemConfigurationType to copy from.
    */
  SubsystemConfigurationType(const SubsystemConfigurationType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this SubsystemConfigurationType to the contents of the
    * SubsystemConfigurationType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The SubsystemConfigurationType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this SubsystemConfigurationType.
    * @return A reference to this SubsystemConfigurationType.
    */
  SubsystemConfigurationType& operator=(const SubsystemConfigurationType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_SUBSYSTEMCONFIGURATIONTYPE_H

