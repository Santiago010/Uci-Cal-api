/** @file CommIFDL_CommWaveformActivityType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:12 PM
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

#include "../../../include/asb_uci/type/CommIFDL_CommWaveformActivityType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CommIFDL_ControlType.h"
#include "../../../include/asb_uci/type/CommIFDL_FlightSizeEnum.h"
#include "../../../include/asb_uci/type/CommIFDL_NetLinkStatusType.h"
#include "../../../include/asb_uci/type/CommWaveformActivityPET.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommIFDL_CommWaveformActivityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommIFDL_ControlType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommIFDL_FlightSizeEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommIFDL_NetLinkStatusType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IFDL_ChannelNumberType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IFDL_WideNetIdentifierType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

CommIFDL_CommWaveformActivityType::CommIFDL_CommWaveformActivityType()
  : settingsStatus_Accessor{boost::make_unique<CommIFDL_ControlType>()},
    flightSize_Accessor{boost::make_unique<CommIFDL_FlightSizeEnum>()},
    peerLinkStatus_Accessor{boost::make_unique<PeerLinkStatus>(0, 6)} {
}

CommIFDL_CommWaveformActivityType::~CommIFDL_CommWaveformActivityType() = default;

void CommIFDL_CommWaveformActivityType::copy(const uci::type::CommIFDL_CommWaveformActivityType& accessor) {
  copyImpl(accessor, false);
}

void CommIFDL_CommWaveformActivityType::copyImpl(const uci::type::CommIFDL_CommWaveformActivityType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    CommWaveformActivityPET::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const CommIFDL_CommWaveformActivityType&>(accessor);
    setSettingsStatus(*(accessorImpl.settingsStatus_Accessor));
    setFlightSize(*(accessorImpl.flightSize_Accessor));
    setChannelA_Number(accessorImpl.channelA_Number_Accessor);
    setChannelB_Number(accessorImpl.channelB_Number_Accessor);
    if (accessorImpl.hasAcquisitionActive()) {
      setAcquisitionActive(accessorImpl.getAcquisitionActive());
    } else {
      clearAcquisitionActive();
    }
    if (accessorImpl.hasVoiceTransmit()) {
      setVoiceTransmit(accessorImpl.getVoiceTransmit());
    } else {
      clearVoiceTransmit();
    }
    if (accessorImpl.hasVoiceReceive()) {
      setVoiceReceive(accessorImpl.getVoiceReceive());
    } else {
      clearVoiceReceive();
    }
    if (accessorImpl.hasWideNetIdentifier1()) {
      setWideNetIdentifier1(accessorImpl.getWideNetIdentifier1());
    } else {
      clearWideNetIdentifier1();
    }
    if (accessorImpl.hasWideNetIdentifier2()) {
      setWideNetIdentifier2(accessorImpl.getWideNetIdentifier2());
    } else {
      clearWideNetIdentifier2();
    }
    if (accessorImpl.hasWideNetIdentifier3()) {
      setWideNetIdentifier3(accessorImpl.getWideNetIdentifier3());
    } else {
      clearWideNetIdentifier3();
    }
    setPeerLinkStatus(*(accessorImpl.peerLinkStatus_Accessor));
  }
}

void CommIFDL_CommWaveformActivityType::reset() noexcept {
  CommWaveformActivityPET::reset();
  settingsStatus_Accessor->reset();
  flightSize_Accessor->reset();
  channelA_Number_Accessor = 0;
  channelB_Number_Accessor = 0;
  clearAcquisitionActive();
  clearVoiceTransmit();
  clearVoiceReceive();
  clearWideNetIdentifier1();
  clearWideNetIdentifier2();
  clearWideNetIdentifier3();
  peerLinkStatus_Accessor->reset();
}

const uci::type::CommIFDL_ControlType& CommIFDL_CommWaveformActivityType::getSettingsStatus() const {
  return *settingsStatus_Accessor;
}

uci::type::CommIFDL_ControlType& CommIFDL_CommWaveformActivityType::getSettingsStatus() {
  return *settingsStatus_Accessor;
}

uci::type::CommIFDL_CommWaveformActivityType& CommIFDL_CommWaveformActivityType::setSettingsStatus(const uci::type::CommIFDL_ControlType& accessor) {
  if (&accessor != settingsStatus_Accessor.get()) {
    settingsStatus_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::CommIFDL_FlightSizeEnum& CommIFDL_CommWaveformActivityType::getFlightSize() const {
  return *flightSize_Accessor;
}

uci::type::CommIFDL_FlightSizeEnum& CommIFDL_CommWaveformActivityType::getFlightSize() {
  return *flightSize_Accessor;
}

uci::type::CommIFDL_CommWaveformActivityType& CommIFDL_CommWaveformActivityType::setFlightSize(const uci::type::CommIFDL_FlightSizeEnum& accessor) {
  if (&accessor != flightSize_Accessor.get()) {
    flightSize_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::CommIFDL_CommWaveformActivityType& CommIFDL_CommWaveformActivityType::setFlightSize(uci::type::CommIFDL_FlightSizeEnum::EnumerationItem value) {
  flightSize_Accessor->setValue(value);
  return *this;
}


uci::type::IFDL_ChannelNumberTypeValue CommIFDL_CommWaveformActivityType::getChannelA_Number() const {
  return channelA_Number_Accessor;
}

uci::type::CommIFDL_CommWaveformActivityType& CommIFDL_CommWaveformActivityType::setChannelA_Number(uci::type::IFDL_ChannelNumberTypeValue value) {
  channelA_Number_Accessor = value;
  return *this;
}


uci::type::IFDL_ChannelNumberTypeValue CommIFDL_CommWaveformActivityType::getChannelB_Number() const {
  return channelB_Number_Accessor;
}

uci::type::CommIFDL_CommWaveformActivityType& CommIFDL_CommWaveformActivityType::setChannelB_Number(uci::type::IFDL_ChannelNumberTypeValue value) {
  channelB_Number_Accessor = value;
  return *this;
}


xs::Boolean CommIFDL_CommWaveformActivityType::getAcquisitionActive() const {
  if (acquisitionActive_Accessor) {
    return *acquisitionActive_Accessor;
  }
  throw uci::base::UCIException("Error in getAcquisitionActive(): An attempt was made to get an optional field that was not enabled, call hasAcquisitionActive() to determine if it is safe to call getAcquisitionActive()");
}

uci::type::CommIFDL_CommWaveformActivityType& CommIFDL_CommWaveformActivityType::setAcquisitionActive(xs::Boolean value) {
  acquisitionActive_Accessor = value;
  return *this;
}

bool CommIFDL_CommWaveformActivityType::hasAcquisitionActive() const noexcept {
  return acquisitionActive_Accessor.has_value();
}

uci::type::CommIFDL_CommWaveformActivityType& CommIFDL_CommWaveformActivityType::clearAcquisitionActive() noexcept {
  acquisitionActive_Accessor.reset();
  return *this;
}

xs::Boolean CommIFDL_CommWaveformActivityType::getVoiceTransmit() const {
  if (voiceTransmit_Accessor) {
    return *voiceTransmit_Accessor;
  }
  throw uci::base::UCIException("Error in getVoiceTransmit(): An attempt was made to get an optional field that was not enabled, call hasVoiceTransmit() to determine if it is safe to call getVoiceTransmit()");
}

uci::type::CommIFDL_CommWaveformActivityType& CommIFDL_CommWaveformActivityType::setVoiceTransmit(xs::Boolean value) {
  voiceTransmit_Accessor = value;
  return *this;
}

bool CommIFDL_CommWaveformActivityType::hasVoiceTransmit() const noexcept {
  return voiceTransmit_Accessor.has_value();
}

uci::type::CommIFDL_CommWaveformActivityType& CommIFDL_CommWaveformActivityType::clearVoiceTransmit() noexcept {
  voiceTransmit_Accessor.reset();
  return *this;
}

xs::Boolean CommIFDL_CommWaveformActivityType::getVoiceReceive() const {
  if (voiceReceive_Accessor) {
    return *voiceReceive_Accessor;
  }
  throw uci::base::UCIException("Error in getVoiceReceive(): An attempt was made to get an optional field that was not enabled, call hasVoiceReceive() to determine if it is safe to call getVoiceReceive()");
}

uci::type::CommIFDL_CommWaveformActivityType& CommIFDL_CommWaveformActivityType::setVoiceReceive(xs::Boolean value) {
  voiceReceive_Accessor = value;
  return *this;
}

bool CommIFDL_CommWaveformActivityType::hasVoiceReceive() const noexcept {
  return voiceReceive_Accessor.has_value();
}

uci::type::CommIFDL_CommWaveformActivityType& CommIFDL_CommWaveformActivityType::clearVoiceReceive() noexcept {
  voiceReceive_Accessor.reset();
  return *this;
}

uci::type::IFDL_WideNetIdentifierTypeValue CommIFDL_CommWaveformActivityType::getWideNetIdentifier1() const {
  if (wideNetIdentifier1_Accessor) {
    return *wideNetIdentifier1_Accessor;
  }
  throw uci::base::UCIException("Error in getWideNetIdentifier1(): An attempt was made to get an optional field that was not enabled, call hasWideNetIdentifier1() to determine if it is safe to call getWideNetIdentifier1()");
}

uci::type::CommIFDL_CommWaveformActivityType& CommIFDL_CommWaveformActivityType::setWideNetIdentifier1(uci::type::IFDL_WideNetIdentifierTypeValue value) {
  wideNetIdentifier1_Accessor = value;
  return *this;
}

bool CommIFDL_CommWaveformActivityType::hasWideNetIdentifier1() const noexcept {
  return wideNetIdentifier1_Accessor.has_value();
}

uci::type::CommIFDL_CommWaveformActivityType& CommIFDL_CommWaveformActivityType::clearWideNetIdentifier1() noexcept {
  wideNetIdentifier1_Accessor.reset();
  return *this;
}

uci::type::IFDL_WideNetIdentifierTypeValue CommIFDL_CommWaveformActivityType::getWideNetIdentifier2() const {
  if (wideNetIdentifier2_Accessor) {
    return *wideNetIdentifier2_Accessor;
  }
  throw uci::base::UCIException("Error in getWideNetIdentifier2(): An attempt was made to get an optional field that was not enabled, call hasWideNetIdentifier2() to determine if it is safe to call getWideNetIdentifier2()");
}

uci::type::CommIFDL_CommWaveformActivityType& CommIFDL_CommWaveformActivityType::setWideNetIdentifier2(uci::type::IFDL_WideNetIdentifierTypeValue value) {
  wideNetIdentifier2_Accessor = value;
  return *this;
}

bool CommIFDL_CommWaveformActivityType::hasWideNetIdentifier2() const noexcept {
  return wideNetIdentifier2_Accessor.has_value();
}

uci::type::CommIFDL_CommWaveformActivityType& CommIFDL_CommWaveformActivityType::clearWideNetIdentifier2() noexcept {
  wideNetIdentifier2_Accessor.reset();
  return *this;
}

uci::type::IFDL_WideNetIdentifierTypeValue CommIFDL_CommWaveformActivityType::getWideNetIdentifier3() const {
  if (wideNetIdentifier3_Accessor) {
    return *wideNetIdentifier3_Accessor;
  }
  throw uci::base::UCIException("Error in getWideNetIdentifier3(): An attempt was made to get an optional field that was not enabled, call hasWideNetIdentifier3() to determine if it is safe to call getWideNetIdentifier3()");
}

uci::type::CommIFDL_CommWaveformActivityType& CommIFDL_CommWaveformActivityType::setWideNetIdentifier3(uci::type::IFDL_WideNetIdentifierTypeValue value) {
  wideNetIdentifier3_Accessor = value;
  return *this;
}

bool CommIFDL_CommWaveformActivityType::hasWideNetIdentifier3() const noexcept {
  return wideNetIdentifier3_Accessor.has_value();
}

uci::type::CommIFDL_CommWaveformActivityType& CommIFDL_CommWaveformActivityType::clearWideNetIdentifier3() noexcept {
  wideNetIdentifier3_Accessor.reset();
  return *this;
}

const uci::type::CommIFDL_CommWaveformActivityType::PeerLinkStatus& CommIFDL_CommWaveformActivityType::getPeerLinkStatus() const {
  return *peerLinkStatus_Accessor;
}

uci::type::CommIFDL_CommWaveformActivityType::PeerLinkStatus& CommIFDL_CommWaveformActivityType::getPeerLinkStatus() {
  return *peerLinkStatus_Accessor;
}

uci::type::CommIFDL_CommWaveformActivityType& CommIFDL_CommWaveformActivityType::setPeerLinkStatus(const uci::type::CommIFDL_CommWaveformActivityType::PeerLinkStatus& accessor) {
  if (&accessor != peerLinkStatus_Accessor.get()) {
    peerLinkStatus_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<CommIFDL_CommWaveformActivityType> CommIFDL_CommWaveformActivityType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commIFDL_CommWaveformActivityType : type};
  return (requestedType == uci::type::accessorType::commIFDL_CommWaveformActivityType) ? boost::make_unique<CommIFDL_CommWaveformActivityType>() : nullptr;
}

/**  */
namespace CommIFDL_CommWaveformActivityType_Names {

constexpr const char* Extern_Type_Name{"CommIFDL_CommWaveformActivityType"};
constexpr const char* SettingsStatus_Name{"SettingsStatus"};
constexpr const char* FlightSize_Name{"FlightSize"};
constexpr const char* ChannelA_Number_Name{"ChannelA_Number"};
constexpr const char* ChannelB_Number_Name{"ChannelB_Number"};
constexpr const char* AcquisitionActive_Name{"AcquisitionActive"};
constexpr const char* VoiceTransmit_Name{"VoiceTransmit"};
constexpr const char* VoiceReceive_Name{"VoiceReceive"};
constexpr const char* WideNetIdentifier1_Name{"WideNetIdentifier1"};
constexpr const char* WideNetIdentifier2_Name{"WideNetIdentifier2"};
constexpr const char* WideNetIdentifier3_Name{"WideNetIdentifier3"};
constexpr const char* PeerLinkStatus_Name{"PeerLinkStatus"};

} // namespace CommIFDL_CommWaveformActivityType_Names

void CommIFDL_CommWaveformActivityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CommIFDL_CommWaveformActivityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CommIFDL_CommWaveformActivityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CommIFDL_CommWaveformActivityType_Names::SettingsStatus_Name) {
      CommIFDL_ControlType::deserialize(valueType.second, accessor.getSettingsStatus(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CommIFDL_CommWaveformActivityType_Names::FlightSize_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getFlightSize().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + CommIFDL_CommWaveformActivityType_Names::ChannelA_Number_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setChannelA_Number(asb_uci::util::SerializationHelpers::deserializeUnsignedByte(*value));
      }
    } else if (valueType.first == nsPrefix + CommIFDL_CommWaveformActivityType_Names::ChannelB_Number_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setChannelB_Number(asb_uci::util::SerializationHelpers::deserializeUnsignedByte(*value));
      }
    } else if (valueType.first == nsPrefix + CommIFDL_CommWaveformActivityType_Names::AcquisitionActive_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAcquisitionActive(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + CommIFDL_CommWaveformActivityType_Names::VoiceTransmit_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setVoiceTransmit(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + CommIFDL_CommWaveformActivityType_Names::VoiceReceive_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setVoiceReceive(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + CommIFDL_CommWaveformActivityType_Names::WideNetIdentifier1_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setWideNetIdentifier1(asb_uci::util::SerializationHelpers::deserializeUnsignedShort(*value));
      }
    } else if (valueType.first == nsPrefix + CommIFDL_CommWaveformActivityType_Names::WideNetIdentifier2_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setWideNetIdentifier2(asb_uci::util::SerializationHelpers::deserializeUnsignedShort(*value));
      }
    } else if (valueType.first == nsPrefix + CommIFDL_CommWaveformActivityType_Names::WideNetIdentifier3_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setWideNetIdentifier3(asb_uci::util::SerializationHelpers::deserializeUnsignedShort(*value));
      }
    } else if (valueType.first == nsPrefix + CommIFDL_CommWaveformActivityType_Names::PeerLinkStatus_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::CommIFDL_CommWaveformActivityType::PeerLinkStatus& boundedList = accessor.getPeerLinkStatus();
        const uci::type::CommIFDL_CommWaveformActivityType::PeerLinkStatus::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::CommIFDL_NetLinkStatusType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  CommWaveformActivityPET::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string CommIFDL_CommWaveformActivityType::serialize(const uci::type::CommIFDL_CommWaveformActivityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? CommIFDL_CommWaveformActivityType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, CommIFDL_CommWaveformActivityType_Names::Extern_Type_Name);
  }
  CommWaveformActivityPET::serialize(accessor, node, "", false, false, false);
  CommIFDL_ControlType::serialize(accessor.getSettingsStatus(), node, CommIFDL_CommWaveformActivityType_Names::SettingsStatus_Name);
  CommIFDL_FlightSizeEnum::serialize(accessor.getFlightSize(), node, CommIFDL_CommWaveformActivityType_Names::FlightSize_Name, false);
  asb_uci::util::SerializationHelpers::serializeUnsignedByte(accessor.getChannelA_Number(), node, CommIFDL_CommWaveformActivityType_Names::ChannelA_Number_Name);
  asb_uci::util::SerializationHelpers::serializeUnsignedByte(accessor.getChannelB_Number(), node, CommIFDL_CommWaveformActivityType_Names::ChannelB_Number_Name);
  if (accessor.hasAcquisitionActive()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getAcquisitionActive(), node, CommIFDL_CommWaveformActivityType_Names::AcquisitionActive_Name);
  }
  if (accessor.hasVoiceTransmit()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getVoiceTransmit(), node, CommIFDL_CommWaveformActivityType_Names::VoiceTransmit_Name);
  }
  if (accessor.hasVoiceReceive()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getVoiceReceive(), node, CommIFDL_CommWaveformActivityType_Names::VoiceReceive_Name);
  }
  if (accessor.hasWideNetIdentifier1()) {
    asb_uci::util::SerializationHelpers::serializeUnsignedShort(accessor.getWideNetIdentifier1(), node, CommIFDL_CommWaveformActivityType_Names::WideNetIdentifier1_Name);
  }
  if (accessor.hasWideNetIdentifier2()) {
    asb_uci::util::SerializationHelpers::serializeUnsignedShort(accessor.getWideNetIdentifier2(), node, CommIFDL_CommWaveformActivityType_Names::WideNetIdentifier2_Name);
  }
  if (accessor.hasWideNetIdentifier3()) {
    asb_uci::util::SerializationHelpers::serializeUnsignedShort(accessor.getWideNetIdentifier3(), node, CommIFDL_CommWaveformActivityType_Names::WideNetIdentifier3_Name);
  }
  {
    const uci::type::CommIFDL_CommWaveformActivityType::PeerLinkStatus& boundedList = accessor.getPeerLinkStatus();
    for (uci::type::CommIFDL_CommWaveformActivityType::PeerLinkStatus::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::CommIFDL_NetLinkStatusType::serialize(boundedList.at(i), node, CommIFDL_CommWaveformActivityType_Names::PeerLinkStatus_Name);
    }
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace asb_uci

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

uci::type::CommIFDL_CommWaveformActivityType& CommIFDL_CommWaveformActivityType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::CommIFDL_CommWaveformActivityType>().release());
}

uci::type::CommIFDL_CommWaveformActivityType& CommIFDL_CommWaveformActivityType::create(const uci::type::CommIFDL_CommWaveformActivityType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::CommIFDL_CommWaveformActivityType> newAccessor{boost::make_unique<asb_uci::type::CommIFDL_CommWaveformActivityType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void CommIFDL_CommWaveformActivityType::destroy(uci::type::CommIFDL_CommWaveformActivityType& accessor) {
  delete dynamic_cast<asb_uci::type::CommIFDL_CommWaveformActivityType*>(&accessor);
}

} // namespace type

} // namespace uci

