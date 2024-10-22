/** @file CommTerminalActivityCommandType.h
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

#ifndef UCI_TYPE_COMMTERMINALACTIVITYCOMMANDTYPE_H
#define UCI_TYPE_COMMTERMINALACTIVITYCOMMANDTYPE_H

#include "../base/BoundedList.h"
#include "../base/export.h"
#include "CapabilityCommandFrequencyType.h"
#include "CommConnectionCommandEnum.h"
#include "CommControlType.h"
#include "CommLinkPortMapType.h"
#include "CommProfileID_Type.h"
#include "CommWaveformActivityCommandPET.h"
#include "DependentActivityType.h"
#include "LinkConnectionRequestType.h"
#include "NetworkLinkID_Type.h"
#include "ResourceSelectionType.h"
#include "SharedRF_ApertureActivityCommandBaseType.h"
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
class CommTerminalActivityCommandType : public virtual SharedRF_ApertureActivityCommandBaseType {
public:

  /** This method constructs a new CommTerminalActivityCommandType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CommTerminalActivityCommandType.
    */
  static UCI_EXPORT CommTerminalActivityCommandType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new CommTerminalActivityCommandType initializing the data accessed by the new
    * CommTerminalActivityCommandType using the data accessed by the specified CommTerminalActivityCommandType (cloning).
    *
    * @param accessor The CommTerminalActivityCommandType that provides access to the data that is to be used to initialize
    *      the data accessed by the new created CommTerminalActivityCommandType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CommTerminalActivityCommandType.
    */
  static UCI_EXPORT CommTerminalActivityCommandType& create(const CommTerminalActivityCommandType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified CommTerminalActivityCommandType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The CommTerminalActivityCommandType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(CommTerminalActivityCommandType& accessor);

  /** Returns this accessor's type constant, i.e. commTerminalActivityCommandType.
    *
    * @return This accessor's type constant, i.e. commTerminalActivityCommandType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::commTerminalActivityCommandType;
  }

  /** Returns the version that was initialized from the uci:version attribute of CommTerminalActivityCommandType.
    *
    * @return The version that was initialized from the uci:version attribute of CommTerminalActivityCommandType.
    */
  static std::string getUCITypeVersion() {
    return "003.001.003.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const CommTerminalActivityCommandType& accessor) = 0;

  /** Indicates the unique ID of a Shared Antenna and/or AntennaResources to be used for the resulting Activity. This
    * allows Mission Processing to direct an specific antenna, antenna resource type, or antenna resource instance to be
    * used by the resulting Activity. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::ResourceSelectionType, uci::type::accessorType::resourceSelectionType> ResourceSelection;

  /** Indicates a command to change the connection status of the individual data links managed by the waveform. Generally,
    * a link's connection status must be CONNECTED for the waveform to transmit payload data over the communication medium
    * or for the waveform to receive transmissions from the communication medium. Note that this parameter is not available
    * until after a CommActivity is created and may not be available until the waveform has joined the network.
    * [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::LinkConnectionRequestType, uci::type::accessorType::linkConnectionRequestType> LinkConnectionRequest;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ActivateProfileID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ActivateProfileID.
    */
  virtual const uci::type::CommProfileID_Type& getActivateProfileID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ActivateProfileID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ActivateProfileID.
    */
  virtual uci::type::CommProfileID_Type& getActivateProfileID() = 0;

  /** Sets the complex content identified by ActivateProfileID to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ActivateProfileID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommTerminalActivityCommandType& setActivateProfileID(const uci::type::CommProfileID_Type& value) = 0;

  /** Returns whether the Element identified by ActivateProfileID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ActivateProfileID is enabled or not.
    */
  virtual bool hasActivateProfileID() const = 0;

  /** Enables the Element identified by ActivateProfileID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ActivateProfileID.
    */
  virtual uci::type::CommProfileID_Type& enableActivateProfileID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ActivateProfileID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommTerminalActivityCommandType& clearActivateProfileID() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ChangeDependentActivity.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ChangeDependentActivity.
    */
  virtual const uci::type::DependentActivityType& getChangeDependentActivity() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * ChangeDependentActivity.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      ChangeDependentActivity.
    */
  virtual uci::type::DependentActivityType& getChangeDependentActivity() = 0;

  /** Sets the complex content identified by ChangeDependentActivity to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ChangeDependentActivity.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommTerminalActivityCommandType& setChangeDependentActivity(const uci::type::DependentActivityType& value) = 0;

  /** Returns whether the Element identified by ChangeDependentActivity exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ChangeDependentActivity is enabled or not.
    */
  virtual bool hasChangeDependentActivity() const = 0;

  /** Enables the Element identified by ChangeDependentActivity.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by
    *      ChangeDependentActivity.
    */
  virtual uci::type::DependentActivityType& enableChangeDependentActivity(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ChangeDependentActivity.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommTerminalActivityCommandType& clearChangeDependentActivity() = 0;

  /** Returns a const reference to the bounded list identified by ResourceSelection.
    *
    * @return A const reference to the bounded list identified by ResourceSelection.
    */
  virtual const uci::type::CommTerminalActivityCommandType::ResourceSelection& getResourceSelection() const = 0;

  /** Returns a reference to the bounded list identified by ResourceSelection.
    *
    * @return A reference to the bounded list identified by ResourceSelection.
    */
  virtual uci::type::CommTerminalActivityCommandType::ResourceSelection& getResourceSelection() = 0;

  /** Sets the bounded list identified by ResourceSelection.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommTerminalActivityCommandType& setResourceSelection(const uci::type::CommTerminalActivityCommandType::ResourceSelection& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by ConnectionRequest.
    *
    * @return A const reference to the value of the enumeration identified by ConnectionRequest.
    */
  virtual const uci::type::CommConnectionCommandEnum& getConnectionRequest() const = 0;

  /** Returns a reference to the value of the enumeration identified by ConnectionRequest.
    *
    * @return A reference to the value of the enumeration identified by ConnectionRequest.
    */
  virtual uci::type::CommConnectionCommandEnum& getConnectionRequest() = 0;

  /** Sets the value of the enumeration identified by ConnectionRequest.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommTerminalActivityCommandType& setConnectionRequest(const uci::type::CommConnectionCommandEnum& value) = 0;

  /** Sets the value of the enumeration identified by ConnectionRequest.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommTerminalActivityCommandType& setConnectionRequest(uci::type::CommConnectionCommandEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by ConnectionRequest exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ConnectionRequest is enabled or not.
    */
  virtual bool hasConnectionRequest() const = 0;

  /** Enables the Element identified by ConnectionRequest.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by ConnectionRequest.
    */
  virtual uci::type::CommConnectionCommandEnum& enableConnectionRequest(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ConnectionRequest.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommTerminalActivityCommandType& clearConnectionRequest() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * CommonSettingsChange.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      CommonSettingsChange.
    */
  virtual const uci::type::CommControlType& getCommonSettingsChange() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by CommonSettingsChange.
    *
    * @return A reference to the accessor that provides access to the complex content identified by CommonSettingsChange.
    */
  virtual uci::type::CommControlType& getCommonSettingsChange() = 0;

  /** Sets the complex content identified by CommonSettingsChange to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by CommonSettingsChange.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommTerminalActivityCommandType& setCommonSettingsChange(const uci::type::CommControlType& value) = 0;

  /** Returns whether the Element identified by CommonSettingsChange exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by CommonSettingsChange is enabled or not.
    */
  virtual bool hasCommonSettingsChange() const = 0;

  /** Enables the Element identified by CommonSettingsChange.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by CommonSettingsChange.
    */
  virtual uci::type::CommControlType& enableCommonSettingsChange(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by CommonSettingsChange.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommTerminalActivityCommandType& clearCommonSettingsChange() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * LinkPortAssignments.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      LinkPortAssignments.
    */
  virtual const uci::type::CommLinkPortMapType& getLinkPortAssignments() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by LinkPortAssignments.
    *
    * @return A reference to the accessor that provides access to the complex content identified by LinkPortAssignments.
    */
  virtual uci::type::CommLinkPortMapType& getLinkPortAssignments() = 0;

  /** Sets the complex content identified by LinkPortAssignments to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by LinkPortAssignments.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommTerminalActivityCommandType& setLinkPortAssignments(const uci::type::CommLinkPortMapType& value) = 0;

  /** Returns whether the Element identified by LinkPortAssignments exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by LinkPortAssignments is enabled or not.
    */
  virtual bool hasLinkPortAssignments() const = 0;

  /** Enables the Element identified by LinkPortAssignments.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by LinkPortAssignments.
    */
  virtual uci::type::CommLinkPortMapType& enableLinkPortAssignments(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by LinkPortAssignments.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommTerminalActivityCommandType& clearLinkPortAssignments() = 0;

  /** Returns a const reference to the bounded list identified by LinkConnectionRequest.
    *
    * @return A const reference to the bounded list identified by LinkConnectionRequest.
    */
  virtual const uci::type::CommTerminalActivityCommandType::LinkConnectionRequest& getLinkConnectionRequest() const = 0;

  /** Returns a reference to the bounded list identified by LinkConnectionRequest.
    *
    * @return A reference to the bounded list identified by LinkConnectionRequest.
    */
  virtual uci::type::CommTerminalActivityCommandType::LinkConnectionRequest& getLinkConnectionRequest() = 0;

  /** Sets the bounded list identified by LinkConnectionRequest.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommTerminalActivityCommandType& setLinkConnectionRequest(const uci::type::CommTerminalActivityCommandType::LinkConnectionRequest& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by NetworkLinkID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by NetworkLinkID.
    */
  virtual const uci::type::NetworkLinkID_Type& getNetworkLinkID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by NetworkLinkID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by NetworkLinkID.
    */
  virtual uci::type::NetworkLinkID_Type& getNetworkLinkID() = 0;

  /** Sets the complex content identified by NetworkLinkID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by NetworkLinkID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommTerminalActivityCommandType& setNetworkLinkID(const uci::type::NetworkLinkID_Type& value) = 0;

  /** Returns whether the Element identified by NetworkLinkID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by NetworkLinkID is enabled or not.
    */
  virtual bool hasNetworkLinkID() const = 0;

  /** Enables the Element identified by NetworkLinkID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by NetworkLinkID.
    */
  virtual uci::type::NetworkLinkID_Type& enableNetworkLinkID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by NetworkLinkID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommTerminalActivityCommandType& clearNetworkLinkID() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * WaveformSpecificSettingsChange.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      WaveformSpecificSettingsChange.
    */
  virtual const uci::type::CommWaveformActivityCommandPET& getWaveformSpecificSettingsChange() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * WaveformSpecificSettingsChange.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      WaveformSpecificSettingsChange.
    */
  virtual uci::type::CommWaveformActivityCommandPET& getWaveformSpecificSettingsChange() = 0;

  /** Sets the complex content identified by WaveformSpecificSettingsChange to the contents of the complex content accessed
    * by the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by WaveformSpecificSettingsChange.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommTerminalActivityCommandType& setWaveformSpecificSettingsChange(const uci::type::CommWaveformActivityCommandPET& value) = 0;

  /** Returns whether the Element identified by WaveformSpecificSettingsChange exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by WaveformSpecificSettingsChange is enabled or not.
    */
  virtual bool hasWaveformSpecificSettingsChange() const = 0;

  /** Enables the Element identified by WaveformSpecificSettingsChange.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by
    *      WaveformSpecificSettingsChange.
    */
  virtual uci::type::CommWaveformActivityCommandPET& enableWaveformSpecificSettingsChange(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by WaveformSpecificSettingsChange.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommTerminalActivityCommandType& clearWaveformSpecificSettingsChange() = 0;

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
  virtual uci::type::CommTerminalActivityCommandType& setVerboseStatus(const uci::type::VerboseStatusType& value) = 0;

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
  virtual uci::type::CommTerminalActivityCommandType& clearVerboseStatus() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Frequency.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Frequency.
    */
  virtual const uci::type::CapabilityCommandFrequencyType& getFrequency() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Frequency.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Frequency.
    */
  virtual uci::type::CapabilityCommandFrequencyType& getFrequency() = 0;

  /** Sets the complex content identified by Frequency to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Frequency.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommTerminalActivityCommandType& setFrequency(const uci::type::CapabilityCommandFrequencyType& value) = 0;

  /** Returns whether the Element identified by Frequency exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Frequency is enabled or not.
    */
  virtual bool hasFrequency() const = 0;

  /** Enables the Element identified by Frequency.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Frequency.
    */
  virtual uci::type::CapabilityCommandFrequencyType& enableFrequency(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Frequency.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommTerminalActivityCommandType& clearFrequency() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  CommTerminalActivityCommandType() {
  }

  /** The destructor [only available to derived classes]. */
  ~CommTerminalActivityCommandType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The CommTerminalActivityCommandType to copy from.
    */
  CommTerminalActivityCommandType(const CommTerminalActivityCommandType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this CommTerminalActivityCommandType to the contents of the
    * CommTerminalActivityCommandType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The CommTerminalActivityCommandType on the right hand side (rhs) of the assignment operator whose contents
    *      are used to set the contents of this CommTerminalActivityCommandType.
    * @return A reference to this CommTerminalActivityCommandType.
    */
  CommTerminalActivityCommandType& operator=(const CommTerminalActivityCommandType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_COMMTERMINALACTIVITYCOMMANDTYPE_H

