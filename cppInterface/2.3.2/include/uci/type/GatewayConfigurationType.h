/** @file GatewayConfigurationType.h
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

#ifndef UCI_TYPE_GATEWAYCONFIGURATIONTYPE_H
#define UCI_TYPE_GATEWAYCONFIGURATIONTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "CommConfigurationID_Type.h"
#include "CommConfigurationStateEnum.h"
#include "GatewayConfigurationPET.h"
#include "GatewayLinkDestinationType.h"
#include "MessageConfigurationType.h"
#include "ProductDisseminationDestinationID_Type.h"
#include "SystemID_Type.h"

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

/** Ties the unique gateway - Link - Capability/Activity to Message and Product Ingress-Egress configuration details. */
class GatewayConfigurationType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new GatewayConfigurationType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed GatewayConfigurationType.
    */
  static UCI_EXPORT GatewayConfigurationType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new GatewayConfigurationType initializing the data accessed by the new
    * GatewayConfigurationType using the data accessed by the specified GatewayConfigurationType (cloning).
    *
    * @param accessor The GatewayConfigurationType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created GatewayConfigurationType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed GatewayConfigurationType.
    */
  static UCI_EXPORT GatewayConfigurationType& create(const GatewayConfigurationType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified GatewayConfigurationType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The GatewayConfigurationType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(GatewayConfigurationType& accessor);

  /** Returns this accessor's type constant, i.e. gatewayConfigurationType.
    *
    * @return This accessor's type constant, i.e. gatewayConfigurationType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::gatewayConfigurationType;
  }

  /** Returns the version that was initialized from the uci:version attribute of GatewayConfigurationType.
    *
    * @return The version that was initialized from the uci:version attribute of GatewayConfigurationType.
    */
  static std::string getUCITypeVersion() {
    return "003.001.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const GatewayConfigurationType& accessor) = 0;

  /** Defines the necessary IDs which facilitate gatewaying the data. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::GatewayLinkDestinationType, uci::type::accessorType::gatewayLinkDestinationType> GatewayLinkDestination;

  /** If specified, indicates the message topics, filters, and gateways. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::MessageConfigurationType, uci::type::accessorType::messageConfigurationType> MessageConfiguration;

  /** The remote System ID for which product data shall be ingressed. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::SystemID_Type, uci::type::accessorType::systemID_Type> ProductDisseminationIngressSystemID;

  /** The Product Dissemination Destinations which data should be sent to. This is the method to specify Product Egress
    * within the standard Product Dissemination Workflow. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::ProductDisseminationDestinationID_Type, uci::type::accessorType::productDisseminationDestinationID_Type> ProductDisseminationEgressDestinationID;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ConfigurationID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ConfigurationID.
    */
  virtual const uci::type::CommConfigurationID_Type& getConfigurationID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ConfigurationID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ConfigurationID.
    */
  virtual uci::type::CommConfigurationID_Type& getConfigurationID() = 0;

  /** Sets the complex content identified by ConfigurationID to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ConfigurationID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayConfigurationType& setConfigurationID(const uci::type::CommConfigurationID_Type& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by ConfigurationState.
    *
    * @return A const reference to the value of the enumeration identified by ConfigurationState.
    */
  virtual const uci::type::CommConfigurationStateEnum& getConfigurationState() const = 0;

  /** Returns a reference to the value of the enumeration identified by ConfigurationState.
    *
    * @return A reference to the value of the enumeration identified by ConfigurationState.
    */
  virtual uci::type::CommConfigurationStateEnum& getConfigurationState() = 0;

  /** Sets the value of the enumeration identified by ConfigurationState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayConfigurationType& setConfigurationState(const uci::type::CommConfigurationStateEnum& value) = 0;

  /** Sets the value of the enumeration identified by ConfigurationState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayConfigurationType& setConfigurationState(uci::type::CommConfigurationStateEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the bounded list identified by GatewayLinkDestination.
    *
    * @return A const reference to the bounded list identified by GatewayLinkDestination.
    */
  virtual const uci::type::GatewayConfigurationType::GatewayLinkDestination& getGatewayLinkDestination() const = 0;

  /** Returns a reference to the bounded list identified by GatewayLinkDestination.
    *
    * @return A reference to the bounded list identified by GatewayLinkDestination.
    */
  virtual uci::type::GatewayConfigurationType::GatewayLinkDestination& getGatewayLinkDestination() = 0;

  /** Sets the bounded list identified by GatewayLinkDestination.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayConfigurationType& setGatewayLinkDestination(const uci::type::GatewayConfigurationType::GatewayLinkDestination& value) = 0;

  /** Returns a const reference to the bounded list identified by MessageConfiguration.
    *
    * @return A const reference to the bounded list identified by MessageConfiguration.
    */
  virtual const uci::type::GatewayConfigurationType::MessageConfiguration& getMessageConfiguration() const = 0;

  /** Returns a reference to the bounded list identified by MessageConfiguration.
    *
    * @return A reference to the bounded list identified by MessageConfiguration.
    */
  virtual uci::type::GatewayConfigurationType::MessageConfiguration& getMessageConfiguration() = 0;

  /** Sets the bounded list identified by MessageConfiguration.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayConfigurationType& setMessageConfiguration(const uci::type::GatewayConfigurationType::MessageConfiguration& value) = 0;

  /** Returns a const reference to the bounded list identified by ProductDisseminationIngressSystemID.
    *
    * @return A const reference to the bounded list identified by ProductDisseminationIngressSystemID.
    */
  virtual const uci::type::GatewayConfigurationType::ProductDisseminationIngressSystemID& getProductDisseminationIngressSystemID() const = 0;

  /** Returns a reference to the bounded list identified by ProductDisseminationIngressSystemID.
    *
    * @return A reference to the bounded list identified by ProductDisseminationIngressSystemID.
    */
  virtual uci::type::GatewayConfigurationType::ProductDisseminationIngressSystemID& getProductDisseminationIngressSystemID() = 0;

  /** Sets the bounded list identified by ProductDisseminationIngressSystemID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayConfigurationType& setProductDisseminationIngressSystemID(const uci::type::GatewayConfigurationType::ProductDisseminationIngressSystemID& value) = 0;

  /** Returns a const reference to the bounded list identified by ProductDisseminationEgressDestinationID.
    *
    * @return A const reference to the bounded list identified by ProductDisseminationEgressDestinationID.
    */
  virtual const uci::type::GatewayConfigurationType::ProductDisseminationEgressDestinationID& getProductDisseminationEgressDestinationID() const = 0;

  /** Returns a reference to the bounded list identified by ProductDisseminationEgressDestinationID.
    *
    * @return A reference to the bounded list identified by ProductDisseminationEgressDestinationID.
    */
  virtual uci::type::GatewayConfigurationType::ProductDisseminationEgressDestinationID& getProductDisseminationEgressDestinationID() = 0;

  /** Sets the bounded list identified by ProductDisseminationEgressDestinationID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayConfigurationType& setProductDisseminationEgressDestinationID(const uci::type::GatewayConfigurationType::ProductDisseminationEgressDestinationID& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * GatewaySpecificSettings.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      GatewaySpecificSettings.
    */
  virtual const uci::type::GatewayConfigurationPET& getGatewaySpecificSettings() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * GatewaySpecificSettings.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      GatewaySpecificSettings.
    */
  virtual uci::type::GatewayConfigurationPET& getGatewaySpecificSettings() = 0;

  /** Sets the complex content identified by GatewaySpecificSettings to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by GatewaySpecificSettings.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayConfigurationType& setGatewaySpecificSettings(const uci::type::GatewayConfigurationPET& value) = 0;

  /** Returns whether the Element identified by GatewaySpecificSettings exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by GatewaySpecificSettings is enabled or not.
    */
  virtual bool hasGatewaySpecificSettings() const = 0;

  /** Enables the Element identified by GatewaySpecificSettings.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by
    *      GatewaySpecificSettings.
    */
  virtual uci::type::GatewayConfigurationPET& enableGatewaySpecificSettings(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by GatewaySpecificSettings.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayConfigurationType& clearGatewaySpecificSettings() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  GatewayConfigurationType() {
  }

  /** The destructor [only available to derived classes]. */
  ~GatewayConfigurationType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The GatewayConfigurationType to copy from.
    */
  GatewayConfigurationType(const GatewayConfigurationType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this GatewayConfigurationType to the contents of the
    * GatewayConfigurationType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The GatewayConfigurationType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this GatewayConfigurationType.
    * @return A reference to this GatewayConfigurationType.
    */
  GatewayConfigurationType& operator=(const GatewayConfigurationType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_GATEWAYCONFIGURATIONTYPE_H

