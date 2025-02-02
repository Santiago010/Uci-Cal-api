/** @file GatewayActivityType.h
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

#ifndef UCI_TYPE_GATEWAYACTIVITYTYPE_H
#define UCI_TYPE_GATEWAYACTIVITYTYPE_H

#include "../base/BoundedList.h"
#include "../base/export.h"
#include "ActivityBaseType.h"
#include "CommConnectionStateEnum.h"
#include "CommProfileID_Type.h"
#include "DataDeliveryType.h"
#include "GatewayConfigurationType.h"
#include "GatewayControlType.h"
#include "GatewayLinkStatisticsType.h"
#include "VerboseStatusType.h"

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
class GatewayActivityType : public virtual ActivityBaseType {
public:

  /** This method constructs a new GatewayActivityType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed GatewayActivityType.
    */
  static UCI_EXPORT GatewayActivityType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new GatewayActivityType initializing the data accessed by the new GatewayActivityType using
    * the data accessed by the specified GatewayActivityType (cloning).
    *
    * @param accessor The GatewayActivityType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created GatewayActivityType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed GatewayActivityType.
    */
  static UCI_EXPORT GatewayActivityType& create(const GatewayActivityType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified GatewayActivityType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The GatewayActivityType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(GatewayActivityType& accessor);

  /** Returns this accessor's type constant, i.e. gatewayActivityType.
    *
    * @return This accessor's type constant, i.e. gatewayActivityType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::gatewayActivityType;
  }

  /** Returns the version that was initialized from the uci:version attribute of GatewayActivityType.
    *
    * @return The version that was initialized from the uci:version attribute of GatewayActivityType.
    */
  static std::string getUCITypeVersion() {
    return "003.001.003.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const GatewayActivityType& accessor) = 0;

  /** Provides a mechanism for a gateway to status its Gateway configuration. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::GatewayConfigurationType, uci::type::accessorType::gatewayConfigurationType> GatewayConfiguration;

  /** Provides a mechanism for a gateway to provide assurance that it has transmitted tactical and or message data within
    * the time-span this activity message covers. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::DataDeliveryType, uci::type::accessorType::dataDeliveryType> AssuredTransmission;

  /** Provides a mechanism for a gateway to provide assurance that it has delivered tactical and or message data within the
    * time-span this activity message covers. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::DataDeliveryType, uci::type::accessorType::dataDeliveryType> AssuredDelivery;

  /** For the periodicity of this message this is a report of the statistics provided by this capability and its links. If
    * a NetworkLinkID is specified then the granularity is that specific link. If not, It is assumed to be for the gateway
    * as a whole. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::GatewayLinkStatisticsType, uci::type::accessorType::gatewayLinkStatisticsType> LinkStatistics;

  /** Returns a const reference to the value of the enumeration identified by ConnectionStatus.
    *
    * @return A const reference to the value of the enumeration identified by ConnectionStatus.
    */
  virtual const uci::type::CommConnectionStateEnum& getConnectionStatus() const = 0;

  /** Returns a reference to the value of the enumeration identified by ConnectionStatus.
    *
    * @return A reference to the value of the enumeration identified by ConnectionStatus.
    */
  virtual uci::type::CommConnectionStateEnum& getConnectionStatus() = 0;

  /** Sets the value of the enumeration identified by ConnectionStatus.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayActivityType& setConnectionStatus(const uci::type::CommConnectionStateEnum& value) = 0;

  /** Sets the value of the enumeration identified by ConnectionStatus.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayActivityType& setConnectionStatus(uci::type::CommConnectionStateEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by ConnectionStatus exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ConnectionStatus is enabled or not.
    */
  virtual bool hasConnectionStatus() const = 0;

  /** Enables the Element identified by ConnectionStatus.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by ConnectionStatus.
    */
  virtual uci::type::CommConnectionStateEnum& enableConnectionStatus(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ConnectionStatus.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayActivityType& clearConnectionStatus() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * CommonSettingsStatus.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      CommonSettingsStatus.
    */
  virtual const uci::type::GatewayControlType& getCommonSettingsStatus() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by CommonSettingsStatus.
    *
    * @return A reference to the accessor that provides access to the complex content identified by CommonSettingsStatus.
    */
  virtual uci::type::GatewayControlType& getCommonSettingsStatus() = 0;

  /** Sets the complex content identified by CommonSettingsStatus to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by CommonSettingsStatus.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayActivityType& setCommonSettingsStatus(const uci::type::GatewayControlType& value) = 0;

  /** Returns whether the Element identified by CommonSettingsStatus exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by CommonSettingsStatus is enabled or not.
    */
  virtual bool hasCommonSettingsStatus() const = 0;

  /** Enables the Element identified by CommonSettingsStatus.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by CommonSettingsStatus.
    */
  virtual uci::type::GatewayControlType& enableCommonSettingsStatus(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by CommonSettingsStatus.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayActivityType& clearCommonSettingsStatus() = 0;

  /** Returns a const reference to the bounded list identified by GatewayConfiguration.
    *
    * @return A const reference to the bounded list identified by GatewayConfiguration.
    */
  virtual const uci::type::GatewayActivityType::GatewayConfiguration& getGatewayConfiguration() const = 0;

  /** Returns a reference to the bounded list identified by GatewayConfiguration.
    *
    * @return A reference to the bounded list identified by GatewayConfiguration.
    */
  virtual uci::type::GatewayActivityType::GatewayConfiguration& getGatewayConfiguration() = 0;

  /** Sets the bounded list identified by GatewayConfiguration.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayActivityType& setGatewayConfiguration(const uci::type::GatewayActivityType::GatewayConfiguration& value) = 0;

  /** Returns a const reference to the bounded list identified by AssuredTransmission.
    *
    * @return A const reference to the bounded list identified by AssuredTransmission.
    */
  virtual const uci::type::GatewayActivityType::AssuredTransmission& getAssuredTransmission() const = 0;

  /** Returns a reference to the bounded list identified by AssuredTransmission.
    *
    * @return A reference to the bounded list identified by AssuredTransmission.
    */
  virtual uci::type::GatewayActivityType::AssuredTransmission& getAssuredTransmission() = 0;

  /** Sets the bounded list identified by AssuredTransmission.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayActivityType& setAssuredTransmission(const uci::type::GatewayActivityType::AssuredTransmission& value) = 0;

  /** Returns a const reference to the bounded list identified by AssuredDelivery.
    *
    * @return A const reference to the bounded list identified by AssuredDelivery.
    */
  virtual const uci::type::GatewayActivityType::AssuredDelivery& getAssuredDelivery() const = 0;

  /** Returns a reference to the bounded list identified by AssuredDelivery.
    *
    * @return A reference to the bounded list identified by AssuredDelivery.
    */
  virtual uci::type::GatewayActivityType::AssuredDelivery& getAssuredDelivery() = 0;

  /** Sets the bounded list identified by AssuredDelivery.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayActivityType& setAssuredDelivery(const uci::type::GatewayActivityType::AssuredDelivery& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by CurrentProfileID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by CurrentProfileID.
    */
  virtual const uci::type::CommProfileID_Type& getCurrentProfileID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by CurrentProfileID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by CurrentProfileID.
    */
  virtual uci::type::CommProfileID_Type& getCurrentProfileID() = 0;

  /** Sets the complex content identified by CurrentProfileID to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by CurrentProfileID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayActivityType& setCurrentProfileID(const uci::type::CommProfileID_Type& value) = 0;

  /** Returns whether the Element identified by CurrentProfileID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by CurrentProfileID is enabled or not.
    */
  virtual bool hasCurrentProfileID() const = 0;

  /** Enables the Element identified by CurrentProfileID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by CurrentProfileID.
    */
  virtual uci::type::CommProfileID_Type& enableCurrentProfileID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by CurrentProfileID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayActivityType& clearCurrentProfileID() = 0;

  /** Returns a const reference to the bounded list identified by LinkStatistics.
    *
    * @return A const reference to the bounded list identified by LinkStatistics.
    */
  virtual const uci::type::GatewayActivityType::LinkStatistics& getLinkStatistics() const = 0;

  /** Returns a reference to the bounded list identified by LinkStatistics.
    *
    * @return A reference to the bounded list identified by LinkStatistics.
    */
  virtual uci::type::GatewayActivityType::LinkStatistics& getLinkStatistics() = 0;

  /** Sets the bounded list identified by LinkStatistics.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayActivityType& setLinkStatistics(const uci::type::GatewayActivityType::LinkStatistics& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by VerboseStatus.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by VerboseStatus.
    */
  virtual const uci::type::VerboseStatusType& getVerboseStatus() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by VerboseStatus.
    *
    * @return A reference to the accessor that provides access to the complex content identified by VerboseStatus.
    */
  virtual uci::type::VerboseStatusType& getVerboseStatus() = 0;

  /** Sets the complex content identified by VerboseStatus to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by VerboseStatus.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayActivityType& setVerboseStatus(const uci::type::VerboseStatusType& value) = 0;

  /** Returns whether the Element identified by VerboseStatus exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by VerboseStatus is enabled or not.
    */
  virtual bool hasVerboseStatus() const = 0;

  /** Enables the Element identified by VerboseStatus.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by VerboseStatus.
    */
  virtual uci::type::VerboseStatusType& enableVerboseStatus(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by VerboseStatus.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayActivityType& clearVerboseStatus() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  GatewayActivityType() {
  }

  /** The destructor [only available to derived classes]. */
  ~GatewayActivityType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The GatewayActivityType to copy from.
    */
  GatewayActivityType(const GatewayActivityType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this GatewayActivityType to the contents of the GatewayActivityType on
    * the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The GatewayActivityType on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this GatewayActivityType.
    * @return A reference to this GatewayActivityType.
    */
  GatewayActivityType& operator=(const GatewayActivityType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_GATEWAYACTIVITYTYPE_H

