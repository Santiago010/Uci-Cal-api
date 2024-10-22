/** @file SystemManagementRequestType.h
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

#ifndef UCI_TYPE_SYSTEMMANAGEMENTREQUESTTYPE_H
#define UCI_TYPE_SYSTEMMANAGEMENTREQUESTTYPE_H

#include "../base/Accessor.h"
#include "../base/BooleanAccessor.h"
#include "../base/export.h"
#include "Link16MetadataType.h"
#include "MessageModeEnum.h"
#include "SystemIdentityType.h"
#include "VehicleCommandDataType.h"
#include "VoiceControlType.h"

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
class SystemManagementRequestType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new SystemManagementRequestType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SystemManagementRequestType.
    */
  static UCI_EXPORT SystemManagementRequestType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new SystemManagementRequestType initializing the data accessed by the new
    * SystemManagementRequestType using the data accessed by the specified SystemManagementRequestType (cloning).
    *
    * @param accessor The SystemManagementRequestType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created SystemManagementRequestType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SystemManagementRequestType.
    */
  static UCI_EXPORT SystemManagementRequestType& create(const SystemManagementRequestType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified SystemManagementRequestType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The SystemManagementRequestType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(SystemManagementRequestType& accessor);

  /** Returns this accessor's type constant, i.e. systemManagementRequestType.
    *
    * @return This accessor's type constant, i.e. systemManagementRequestType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::systemManagementRequestType;
  }

  /** Returns the version that was initialized from the uci:version attribute of SystemManagementRequestType.
    *
    * @return The version that was initialized from the uci:version attribute of SystemManagementRequestType.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const SystemManagementRequestType& accessor) = 0;

  /** The following enumeration is used to identify which element of this Choice has been chosen. */
  enum SystemManagementRequestTypeChoice {
    SYSTEMMANAGEMENTREQUESTTYPE_CHOICE_NONE,
    SYSTEMMANAGEMENTREQUESTTYPE_CHOICE_SETMODE,
    SYSTEMMANAGEMENTREQUESTTYPE_CHOICE_SETIDENTITY,
    SYSTEMMANAGEMENTREQUESTTYPE_CHOICE_SETLINK16METADATA,
    SYSTEMMANAGEMENTREQUESTTYPE_CHOICE_SETVOICECONTROL,
    SYSTEMMANAGEMENTREQUESTTYPE_CHOICE_SETSENSORENTITYREPORTING,
    SYSTEMMANAGEMENTREQUESTTYPE_CHOICE_VEHICLESETTINGS
  };

  /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active.
    *
    * @return The selected item's enumerated value.
    */
  virtual SystemManagementRequestTypeChoice getSystemManagementRequestTypeChoiceOrdinal() const = 0;

  /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
    * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
    * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
    * getSystemManagementRequestTypeChoiceOrdinal() will be the ordinal specified when this method was invoked. In
    * addition, the access methods associated with the chosen element will be enabled and will provide access to the chosen
    * element.
    *
    * @param chosenElementOrdinal The ordinal to set this choice's selected ordinal to.
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SystemManagementRequestType& setSystemManagementRequestTypeChoiceOrdinal(SystemManagementRequestTypeChoice chosenElementOrdinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the value of the enumeration identified by SetMode.
    *
    * @return A const reference to the value of the enumeration identified by SetMode.
    */
  virtual const uci::type::MessageModeEnum& getSetMode() const = 0;

  /** Returns a reference to the value of the enumeration identified by SetMode.
    *
    * @return A reference to the value of the enumeration identified by SetMode.
    */
  virtual uci::type::MessageModeEnum& getSetMode() = 0;

  /** Sets the value of the enumeration identified by SetMode.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SystemManagementRequestType& setSetMode(const uci::type::MessageModeEnum& value) = 0;

  /** Sets the value of the enumeration identified by SetMode.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SystemManagementRequestType& setSetMode(uci::type::MessageModeEnum::EnumerationItem value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by SetMode.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by SetMode, false otherwise.
    */
  virtual bool isSetMode() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by SetMode.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by SetMode.
    */
  virtual uci::type::MessageModeEnum& chooseSetMode(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by SetIdentity.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by SetIdentity.
    */
  virtual const uci::type::SystemIdentityType& getSetIdentity() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by SetIdentity.
    *
    * @return A reference to the accessor that provides access to the complex content identified by SetIdentity.
    */
  virtual uci::type::SystemIdentityType& getSetIdentity() = 0;

  /** Sets the complex content identified by SetIdentity to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SetIdentity.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SystemManagementRequestType& setSetIdentity(const uci::type::SystemIdentityType& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by SetIdentity.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by SetIdentity, false otherwise.
    */
  virtual bool isSetIdentity() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by SetIdentity.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by SetIdentity.
    */
  virtual uci::type::SystemIdentityType& chooseSetIdentity(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * SetLink16Metadata.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      SetLink16Metadata.
    */
  virtual const uci::type::Link16MetadataType& getSetLink16Metadata() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by SetLink16Metadata.
    *
    * @return A reference to the accessor that provides access to the complex content identified by SetLink16Metadata.
    */
  virtual uci::type::Link16MetadataType& getSetLink16Metadata() = 0;

  /** Sets the complex content identified by SetLink16Metadata to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SetLink16Metadata.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SystemManagementRequestType& setSetLink16Metadata(const uci::type::Link16MetadataType& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by SetLink16Metadata.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by SetLink16Metadata, false
    *      otherwise.
    */
  virtual bool isSetLink16Metadata() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by SetLink16Metadata.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by SetLink16Metadata.
    */
  virtual uci::type::Link16MetadataType& chooseSetLink16Metadata(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by SetVoiceControl.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by SetVoiceControl.
    */
  virtual const uci::type::VoiceControlType& getSetVoiceControl() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by SetVoiceControl.
    *
    * @return A reference to the accessor that provides access to the complex content identified by SetVoiceControl.
    */
  virtual uci::type::VoiceControlType& getSetVoiceControl() = 0;

  /** Sets the complex content identified by SetVoiceControl to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SetVoiceControl.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SystemManagementRequestType& setSetVoiceControl(const uci::type::VoiceControlType& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by SetVoiceControl.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by SetVoiceControl, false
    *      otherwise.
    */
  virtual bool isSetVoiceControl() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by SetVoiceControl.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by SetVoiceControl.
    */
  virtual uci::type::VoiceControlType& chooseSetVoiceControl(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns the value of the SimplePrimitive data type identified by SetSensorEntityReporting.
    *
    * @return The value of the simple primitive data type identified by SetSensorEntityReporting.
    */
  virtual xs::Boolean getSetSensorEntityReporting() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by SetSensorEntityReporting.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SystemManagementRequestType& setSetSensorEntityReporting(xs::Boolean value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by SetSensorEntityReporting.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by SetSensorEntityReporting, false
    *      otherwise.
    */
  virtual bool isSetSensorEntityReporting() const = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by VehicleSettings.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by VehicleSettings.
    */
  virtual const uci::type::VehicleCommandDataType& getVehicleSettings() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by VehicleSettings.
    *
    * @return A reference to the accessor that provides access to the complex content identified by VehicleSettings.
    */
  virtual uci::type::VehicleCommandDataType& getVehicleSettings() = 0;

  /** Sets the complex content identified by VehicleSettings to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by VehicleSettings.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SystemManagementRequestType& setVehicleSettings(const uci::type::VehicleCommandDataType& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by VehicleSettings.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by VehicleSettings, false
    *      otherwise.
    */
  virtual bool isVehicleSettings() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by VehicleSettings.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by VehicleSettings.
    */
  virtual uci::type::VehicleCommandDataType& chooseVehicleSettings(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  SystemManagementRequestType() {
  }

  /** The destructor [only available to derived classes]. */
  ~SystemManagementRequestType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The SystemManagementRequestType to copy from.
    */
  SystemManagementRequestType(const SystemManagementRequestType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this SystemManagementRequestType to the contents of the
    * SystemManagementRequestType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The SystemManagementRequestType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this SystemManagementRequestType.
    * @return A reference to this SystemManagementRequestType.
    */
  SystemManagementRequestType& operator=(const SystemManagementRequestType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_SYSTEMMANAGEMENTREQUESTTYPE_H

