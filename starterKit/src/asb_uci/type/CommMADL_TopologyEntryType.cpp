/** @file CommMADL_TopologyEntryType.cpp
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

#include "../../../include/asb_uci/type/CommMADL_TopologyEntryType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CommMADL_DataRateTypeEnum.h"
#include "../../../include/asb_uci/type/CommMADL_NodeDataValidityEnum.h"
#include "../../../include/asb_uci/type/CommMADL_SecurityKeyType.h"
#include "../../../include/asb_uci/type/CommMADL_TimeSourceEnum.h"
#include "../../../include/asb_uci/type/Point4D_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommMADL_DataRateTypeEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommMADL_FlightGroupType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommMADL_NodeDataValidityEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommMADL_SecurityKeyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommMADL_TimeSourceEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommMADL_TopologyEntryType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MADL_NodeRangeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Point4D_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ShortPositiveType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

CommMADL_TopologyEntryType::CommMADL_TopologyEntryType()
  : securityKey_Accessor{boost::make_unique<SecurityKey>(0, 4)},
    nodeDataValidity_Accessor{boost::make_unique<CommMADL_NodeDataValidityEnum>()} {
}

CommMADL_TopologyEntryType::~CommMADL_TopologyEntryType() = default;

void CommMADL_TopologyEntryType::copy(const uci::type::CommMADL_TopologyEntryType& accessor) {
  copyImpl(accessor, false);
}

void CommMADL_TopologyEntryType::copyImpl(const uci::type::CommMADL_TopologyEntryType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const CommMADL_TopologyEntryType&>(accessor);
    setMemberNodeIdentifier(accessorImpl.memberNodeIdentifier_Accessor);
    if (accessorImpl.hasMemberMADL_UniqueIdentifier()) {
      setMemberMADL_UniqueIdentifier(accessorImpl.getMemberMADL_UniqueIdentifier());
    } else {
      clearMemberMADL_UniqueIdentifier();
    }
    if (accessorImpl.memberFlightGroupIdentifier_Accessor) {
      setMemberFlightGroupIdentifier(*(accessorImpl.memberFlightGroupIdentifier_Accessor));
    } else {
      memberFlightGroupIdentifier_Accessor.reset();
    }
    if (accessorImpl.hasDataCapable()) {
      setDataCapable(accessorImpl.getDataCapable());
    } else {
      clearDataCapable();
    }
    if (accessorImpl.hasVoiceCapable()) {
      setVoiceCapable(accessorImpl.getVoiceCapable());
    } else {
      clearVoiceCapable();
    }
    if (accessorImpl.memberPosition_Accessor) {
      setMemberPosition(*(accessorImpl.memberPosition_Accessor));
    } else {
      memberPosition_Accessor.reset();
    }
    if (accessorImpl.memberTimeSource_Accessor) {
      setMemberTimeSource(*(accessorImpl.memberTimeSource_Accessor));
    } else {
      memberTimeSource_Accessor.reset();
    }
    if (accessorImpl.hasNetTimeFineSyncAchieved()) {
      setNetTimeFineSyncAchieved(accessorImpl.getNetTimeFineSyncAchieved());
    } else {
      clearNetTimeFineSyncAchieved();
    }
    if (accessorImpl.hasPathLatencyRelay()) {
      setPathLatencyRelay(accessorImpl.getPathLatencyRelay());
    } else {
      clearPathLatencyRelay();
    }
    if (accessorImpl.actualTxDataRate_Accessor) {
      setActualTxDataRate(*(accessorImpl.actualTxDataRate_Accessor));
    } else {
      actualTxDataRate_Accessor.reset();
    }
    if (accessorImpl.hasHigherDataRateCapable()) {
      setHigherDataRateCapable(accessorImpl.getHigherDataRateCapable());
    } else {
      clearHigherDataRateCapable();
    }
    setSecurityKey(*(accessorImpl.securityKey_Accessor));
    setNodeDataValidity(*(accessorImpl.nodeDataValidity_Accessor));
  }
}

void CommMADL_TopologyEntryType::reset() noexcept {
  memberNodeIdentifier_Accessor = 0;
  clearMemberMADL_UniqueIdentifier();
  memberFlightGroupIdentifier_Accessor.reset();
  clearDataCapable();
  clearVoiceCapable();
  memberPosition_Accessor.reset();
  memberTimeSource_Accessor.reset();
  clearNetTimeFineSyncAchieved();
  clearPathLatencyRelay();
  actualTxDataRate_Accessor.reset();
  clearHigherDataRateCapable();
  securityKey_Accessor->reset();
  nodeDataValidity_Accessor->reset();
}

uci::type::MADL_NodeRangeTypeValue CommMADL_TopologyEntryType::getMemberNodeIdentifier() const {
  return memberNodeIdentifier_Accessor;
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::setMemberNodeIdentifier(uci::type::MADL_NodeRangeTypeValue value) {
  memberNodeIdentifier_Accessor = value;
  return *this;
}


uci::type::ShortPositiveTypeValue CommMADL_TopologyEntryType::getMemberMADL_UniqueIdentifier() const {
  if (memberMADL_UniqueIdentifier_Accessor) {
    return *memberMADL_UniqueIdentifier_Accessor;
  }
  throw uci::base::UCIException("Error in getMemberMADL_UniqueIdentifier(): An attempt was made to get an optional field that was not enabled, call hasMemberMADL_UniqueIdentifier() to determine if it is safe to call getMemberMADL_UniqueIdentifier()");
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::setMemberMADL_UniqueIdentifier(uci::type::ShortPositiveTypeValue value) {
  memberMADL_UniqueIdentifier_Accessor = value;
  return *this;
}

bool CommMADL_TopologyEntryType::hasMemberMADL_UniqueIdentifier() const noexcept {
  return memberMADL_UniqueIdentifier_Accessor.has_value();
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::clearMemberMADL_UniqueIdentifier() noexcept {
  memberMADL_UniqueIdentifier_Accessor.reset();
  return *this;
}

uci::type::CommMADL_FlightGroupType& CommMADL_TopologyEntryType::getMemberFlightGroupIdentifier_() const {
  if (memberFlightGroupIdentifier_Accessor) {
    return *memberFlightGroupIdentifier_Accessor;
  }
  throw uci::base::UCIException("Error in getMemberFlightGroupIdentifier(): An attempt was made to get an optional field that was not enabled, call hasMemberFlightGroupIdentifier() to determine if it is safe to call getMemberFlightGroupIdentifier()");
}

const uci::type::CommMADL_FlightGroupType& CommMADL_TopologyEntryType::getMemberFlightGroupIdentifier() const {
  return getMemberFlightGroupIdentifier_();
}

uci::type::CommMADL_FlightGroupType& CommMADL_TopologyEntryType::getMemberFlightGroupIdentifier() {
  return getMemberFlightGroupIdentifier_();
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::setMemberFlightGroupIdentifier(const uci::type::CommMADL_FlightGroupType& value) {
  return setMemberFlightGroupIdentifier(value.c_str());
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::setMemberFlightGroupIdentifier(const std::string& value) {
  return setMemberFlightGroupIdentifier(value.c_str());
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::setMemberFlightGroupIdentifier(const char* value) {
  enableMemberFlightGroupIdentifier().setStringValue(value);
  return *this;
}

bool CommMADL_TopologyEntryType::hasMemberFlightGroupIdentifier() const noexcept {
  return static_cast<bool>(memberFlightGroupIdentifier_Accessor);
}

uci::type::CommMADL_FlightGroupType& CommMADL_TopologyEntryType::enableMemberFlightGroupIdentifier(uci::base::accessorType::AccessorType type) {
  if (!memberFlightGroupIdentifier_Accessor) {
    memberFlightGroupIdentifier_Accessor = CommMADL_FlightGroupType::create(type);
  }
  return *memberFlightGroupIdentifier_Accessor;
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::clearMemberFlightGroupIdentifier() noexcept {
  memberFlightGroupIdentifier_Accessor.reset();
  return *this;
}

xs::Boolean CommMADL_TopologyEntryType::getDataCapable() const {
  if (dataCapable_Accessor) {
    return *dataCapable_Accessor;
  }
  throw uci::base::UCIException("Error in getDataCapable(): An attempt was made to get an optional field that was not enabled, call hasDataCapable() to determine if it is safe to call getDataCapable()");
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::setDataCapable(xs::Boolean value) {
  dataCapable_Accessor = value;
  return *this;
}

bool CommMADL_TopologyEntryType::hasDataCapable() const noexcept {
  return dataCapable_Accessor.has_value();
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::clearDataCapable() noexcept {
  dataCapable_Accessor.reset();
  return *this;
}

xs::Boolean CommMADL_TopologyEntryType::getVoiceCapable() const {
  if (voiceCapable_Accessor) {
    return *voiceCapable_Accessor;
  }
  throw uci::base::UCIException("Error in getVoiceCapable(): An attempt was made to get an optional field that was not enabled, call hasVoiceCapable() to determine if it is safe to call getVoiceCapable()");
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::setVoiceCapable(xs::Boolean value) {
  voiceCapable_Accessor = value;
  return *this;
}

bool CommMADL_TopologyEntryType::hasVoiceCapable() const noexcept {
  return voiceCapable_Accessor.has_value();
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::clearVoiceCapable() noexcept {
  voiceCapable_Accessor.reset();
  return *this;
}

uci::type::Point4D_Type& CommMADL_TopologyEntryType::getMemberPosition_() const {
  if (memberPosition_Accessor) {
    return *memberPosition_Accessor;
  }
  throw uci::base::UCIException("Error in getMemberPosition(): An attempt was made to get an optional field that was not enabled, call hasMemberPosition() to determine if it is safe to call getMemberPosition()");
}

const uci::type::Point4D_Type& CommMADL_TopologyEntryType::getMemberPosition() const {
  return getMemberPosition_();
}

uci::type::Point4D_Type& CommMADL_TopologyEntryType::getMemberPosition() {
  return getMemberPosition_();
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::setMemberPosition(const uci::type::Point4D_Type& accessor) {
  enableMemberPosition();
  if (&accessor != memberPosition_Accessor.get()) {
    memberPosition_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool CommMADL_TopologyEntryType::hasMemberPosition() const noexcept {
  return static_cast<bool>(memberPosition_Accessor);
}

uci::type::Point4D_Type& CommMADL_TopologyEntryType::enableMemberPosition(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::point4D_Type : type};
  if ((!memberPosition_Accessor) || (memberPosition_Accessor->getAccessorType() != requestedType)) {
    memberPosition_Accessor = Point4D_Type::create(requestedType);
    if (!memberPosition_Accessor) {
      throw uci::base::UCIException("Error in enableMemberPosition(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *memberPosition_Accessor;
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::clearMemberPosition() noexcept {
  memberPosition_Accessor.reset();
  return *this;
}

uci::type::CommMADL_TimeSourceEnum& CommMADL_TopologyEntryType::getMemberTimeSource_() const {
  if (memberTimeSource_Accessor) {
    return *memberTimeSource_Accessor;
  }
  throw uci::base::UCIException("Error in getMemberTimeSource(): An attempt was made to get an optional field that was not enabled, call hasMemberTimeSource() to determine if it is safe to call getMemberTimeSource()");
}

const uci::type::CommMADL_TimeSourceEnum& CommMADL_TopologyEntryType::getMemberTimeSource() const {
  return getMemberTimeSource_();
}

uci::type::CommMADL_TimeSourceEnum& CommMADL_TopologyEntryType::getMemberTimeSource() {
  return getMemberTimeSource_();
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::setMemberTimeSource(const uci::type::CommMADL_TimeSourceEnum& accessor) {
  enableMemberTimeSource();
  if (&accessor != memberTimeSource_Accessor.get()) {
    memberTimeSource_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::setMemberTimeSource(const uci::type::CommMADL_TimeSourceEnum::EnumerationItem value) {
  enableMemberTimeSource().setValue(value);
  return *this;
}

bool CommMADL_TopologyEntryType::hasMemberTimeSource() const noexcept {
  return static_cast<bool>(memberTimeSource_Accessor);
}

uci::type::CommMADL_TimeSourceEnum& CommMADL_TopologyEntryType::enableMemberTimeSource(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commMADL_TimeSourceEnum : type};
  if ((!memberTimeSource_Accessor) || (memberTimeSource_Accessor->getAccessorType() != requestedType)) {
    memberTimeSource_Accessor = CommMADL_TimeSourceEnum::create(requestedType);
    if (!memberTimeSource_Accessor) {
      throw uci::base::UCIException("Error in enableMemberTimeSource(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *memberTimeSource_Accessor;
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::clearMemberTimeSource() noexcept {
  memberTimeSource_Accessor.reset();
  return *this;
}

xs::Boolean CommMADL_TopologyEntryType::getNetTimeFineSyncAchieved() const {
  if (netTimeFineSyncAchieved_Accessor) {
    return *netTimeFineSyncAchieved_Accessor;
  }
  throw uci::base::UCIException("Error in getNetTimeFineSyncAchieved(): An attempt was made to get an optional field that was not enabled, call hasNetTimeFineSyncAchieved() to determine if it is safe to call getNetTimeFineSyncAchieved()");
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::setNetTimeFineSyncAchieved(xs::Boolean value) {
  netTimeFineSyncAchieved_Accessor = value;
  return *this;
}

bool CommMADL_TopologyEntryType::hasNetTimeFineSyncAchieved() const noexcept {
  return netTimeFineSyncAchieved_Accessor.has_value();
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::clearNetTimeFineSyncAchieved() noexcept {
  netTimeFineSyncAchieved_Accessor.reset();
  return *this;
}

uci::type::MADL_NodeRangeTypeValue CommMADL_TopologyEntryType::getPathLatencyRelay() const {
  if (pathLatencyRelay_Accessor) {
    return *pathLatencyRelay_Accessor;
  }
  throw uci::base::UCIException("Error in getPathLatencyRelay(): An attempt was made to get an optional field that was not enabled, call hasPathLatencyRelay() to determine if it is safe to call getPathLatencyRelay()");
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::setPathLatencyRelay(uci::type::MADL_NodeRangeTypeValue value) {
  pathLatencyRelay_Accessor = value;
  return *this;
}

bool CommMADL_TopologyEntryType::hasPathLatencyRelay() const noexcept {
  return pathLatencyRelay_Accessor.has_value();
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::clearPathLatencyRelay() noexcept {
  pathLatencyRelay_Accessor.reset();
  return *this;
}

uci::type::CommMADL_DataRateTypeEnum& CommMADL_TopologyEntryType::getActualTxDataRate_() const {
  if (actualTxDataRate_Accessor) {
    return *actualTxDataRate_Accessor;
  }
  throw uci::base::UCIException("Error in getActualTxDataRate(): An attempt was made to get an optional field that was not enabled, call hasActualTxDataRate() to determine if it is safe to call getActualTxDataRate()");
}

const uci::type::CommMADL_DataRateTypeEnum& CommMADL_TopologyEntryType::getActualTxDataRate() const {
  return getActualTxDataRate_();
}

uci::type::CommMADL_DataRateTypeEnum& CommMADL_TopologyEntryType::getActualTxDataRate() {
  return getActualTxDataRate_();
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::setActualTxDataRate(const uci::type::CommMADL_DataRateTypeEnum& accessor) {
  enableActualTxDataRate();
  if (&accessor != actualTxDataRate_Accessor.get()) {
    actualTxDataRate_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::setActualTxDataRate(const uci::type::CommMADL_DataRateTypeEnum::EnumerationItem value) {
  enableActualTxDataRate().setValue(value);
  return *this;
}

bool CommMADL_TopologyEntryType::hasActualTxDataRate() const noexcept {
  return static_cast<bool>(actualTxDataRate_Accessor);
}

uci::type::CommMADL_DataRateTypeEnum& CommMADL_TopologyEntryType::enableActualTxDataRate(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commMADL_DataRateTypeEnum : type};
  if ((!actualTxDataRate_Accessor) || (actualTxDataRate_Accessor->getAccessorType() != requestedType)) {
    actualTxDataRate_Accessor = CommMADL_DataRateTypeEnum::create(requestedType);
    if (!actualTxDataRate_Accessor) {
      throw uci::base::UCIException("Error in enableActualTxDataRate(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *actualTxDataRate_Accessor;
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::clearActualTxDataRate() noexcept {
  actualTxDataRate_Accessor.reset();
  return *this;
}

xs::Boolean CommMADL_TopologyEntryType::getHigherDataRateCapable() const {
  if (higherDataRateCapable_Accessor) {
    return *higherDataRateCapable_Accessor;
  }
  throw uci::base::UCIException("Error in getHigherDataRateCapable(): An attempt was made to get an optional field that was not enabled, call hasHigherDataRateCapable() to determine if it is safe to call getHigherDataRateCapable()");
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::setHigherDataRateCapable(xs::Boolean value) {
  higherDataRateCapable_Accessor = value;
  return *this;
}

bool CommMADL_TopologyEntryType::hasHigherDataRateCapable() const noexcept {
  return higherDataRateCapable_Accessor.has_value();
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::clearHigherDataRateCapable() noexcept {
  higherDataRateCapable_Accessor.reset();
  return *this;
}

const uci::type::CommMADL_TopologyEntryType::SecurityKey& CommMADL_TopologyEntryType::getSecurityKey() const {
  return *securityKey_Accessor;
}

uci::type::CommMADL_TopologyEntryType::SecurityKey& CommMADL_TopologyEntryType::getSecurityKey() {
  return *securityKey_Accessor;
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::setSecurityKey(const uci::type::CommMADL_TopologyEntryType::SecurityKey& accessor) {
  if (&accessor != securityKey_Accessor.get()) {
    securityKey_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::CommMADL_NodeDataValidityEnum& CommMADL_TopologyEntryType::getNodeDataValidity() const {
  return *nodeDataValidity_Accessor;
}

uci::type::CommMADL_NodeDataValidityEnum& CommMADL_TopologyEntryType::getNodeDataValidity() {
  return *nodeDataValidity_Accessor;
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::setNodeDataValidity(const uci::type::CommMADL_NodeDataValidityEnum& accessor) {
  if (&accessor != nodeDataValidity_Accessor.get()) {
    nodeDataValidity_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::setNodeDataValidity(uci::type::CommMADL_NodeDataValidityEnum::EnumerationItem value) {
  nodeDataValidity_Accessor->setValue(value);
  return *this;
}


std::unique_ptr<CommMADL_TopologyEntryType> CommMADL_TopologyEntryType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commMADL_TopologyEntryType : type};
  return (requestedType == uci::type::accessorType::commMADL_TopologyEntryType) ? boost::make_unique<CommMADL_TopologyEntryType>() : nullptr;
}

/**  */
namespace CommMADL_TopologyEntryType_Names {

constexpr const char* Extern_Type_Name{"CommMADL_TopologyEntryType"};
constexpr const char* MemberNodeIdentifier_Name{"MemberNodeIdentifier"};
constexpr const char* MemberMADL_UniqueIdentifier_Name{"MemberMADL_UniqueIdentifier"};
constexpr const char* MemberFlightGroupIdentifier_Name{"MemberFlightGroupIdentifier"};
constexpr const char* DataCapable_Name{"DataCapable"};
constexpr const char* VoiceCapable_Name{"VoiceCapable"};
constexpr const char* MemberPosition_Name{"MemberPosition"};
constexpr const char* MemberTimeSource_Name{"MemberTimeSource"};
constexpr const char* NetTimeFineSyncAchieved_Name{"NetTimeFineSyncAchieved"};
constexpr const char* PathLatencyRelay_Name{"PathLatencyRelay"};
constexpr const char* ActualTxDataRate_Name{"ActualTxDataRate"};
constexpr const char* HigherDataRateCapable_Name{"HigherDataRateCapable"};
constexpr const char* SecurityKey_Name{"SecurityKey"};
constexpr const char* NodeDataValidity_Name{"NodeDataValidity"};

} // namespace CommMADL_TopologyEntryType_Names

void CommMADL_TopologyEntryType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CommMADL_TopologyEntryType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CommMADL_TopologyEntryType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CommMADL_TopologyEntryType_Names::MemberNodeIdentifier_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMemberNodeIdentifier(asb_uci::util::SerializationHelpers::deserializeUnsignedByte(*value));
      }
    } else if (valueType.first == nsPrefix + CommMADL_TopologyEntryType_Names::MemberMADL_UniqueIdentifier_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMemberMADL_UniqueIdentifier(asb_uci::util::SerializationHelpers::deserializeUnsignedShort(*value));
      }
    } else if (valueType.first == nsPrefix + CommMADL_TopologyEntryType_Names::MemberFlightGroupIdentifier_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMemberFlightGroupIdentifier(*value);
      }
    } else if (valueType.first == nsPrefix + CommMADL_TopologyEntryType_Names::DataCapable_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setDataCapable(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + CommMADL_TopologyEntryType_Names::VoiceCapable_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setVoiceCapable(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + CommMADL_TopologyEntryType_Names::MemberPosition_Name) {
      Point4D_Type::deserialize(valueType.second, accessor.enableMemberPosition(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CommMADL_TopologyEntryType_Names::MemberTimeSource_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableMemberTimeSource().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + CommMADL_TopologyEntryType_Names::NetTimeFineSyncAchieved_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setNetTimeFineSyncAchieved(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + CommMADL_TopologyEntryType_Names::PathLatencyRelay_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPathLatencyRelay(asb_uci::util::SerializationHelpers::deserializeUnsignedByte(*value));
      }
    } else if (valueType.first == nsPrefix + CommMADL_TopologyEntryType_Names::ActualTxDataRate_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableActualTxDataRate().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + CommMADL_TopologyEntryType_Names::HigherDataRateCapable_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setHigherDataRateCapable(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + CommMADL_TopologyEntryType_Names::SecurityKey_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::CommMADL_TopologyEntryType::SecurityKey& boundedList = accessor.getSecurityKey();
        const uci::type::CommMADL_TopologyEntryType::SecurityKey::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::CommMADL_SecurityKeyType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + CommMADL_TopologyEntryType_Names::NodeDataValidity_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getNodeDataValidity().setValueFromName(*value);
      }
    }
  }
}

std::string CommMADL_TopologyEntryType::serialize(const uci::type::CommMADL_TopologyEntryType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? CommMADL_TopologyEntryType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, CommMADL_TopologyEntryType_Names::Extern_Type_Name);
  }
  asb_uci::util::SerializationHelpers::serializeUnsignedByte(accessor.getMemberNodeIdentifier(), node, CommMADL_TopologyEntryType_Names::MemberNodeIdentifier_Name);
  if (accessor.hasMemberMADL_UniqueIdentifier()) {
    asb_uci::util::SerializationHelpers::serializeUnsignedShort(accessor.getMemberMADL_UniqueIdentifier(), node, CommMADL_TopologyEntryType_Names::MemberMADL_UniqueIdentifier_Name);
  }
  if (accessor.hasMemberFlightGroupIdentifier()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getMemberFlightGroupIdentifier(), node, CommMADL_TopologyEntryType_Names::MemberFlightGroupIdentifier_Name);
  }
  if (accessor.hasDataCapable()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getDataCapable(), node, CommMADL_TopologyEntryType_Names::DataCapable_Name);
  }
  if (accessor.hasVoiceCapable()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getVoiceCapable(), node, CommMADL_TopologyEntryType_Names::VoiceCapable_Name);
  }
  if (accessor.hasMemberPosition()) {
    Point4D_Type::serialize(accessor.getMemberPosition(), node, CommMADL_TopologyEntryType_Names::MemberPosition_Name);
  }
  if (accessor.hasMemberTimeSource()) {
    CommMADL_TimeSourceEnum::serialize(accessor.getMemberTimeSource(), node, CommMADL_TopologyEntryType_Names::MemberTimeSource_Name, false);
  }
  if (accessor.hasNetTimeFineSyncAchieved()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getNetTimeFineSyncAchieved(), node, CommMADL_TopologyEntryType_Names::NetTimeFineSyncAchieved_Name);
  }
  if (accessor.hasPathLatencyRelay()) {
    asb_uci::util::SerializationHelpers::serializeUnsignedByte(accessor.getPathLatencyRelay(), node, CommMADL_TopologyEntryType_Names::PathLatencyRelay_Name);
  }
  if (accessor.hasActualTxDataRate()) {
    CommMADL_DataRateTypeEnum::serialize(accessor.getActualTxDataRate(), node, CommMADL_TopologyEntryType_Names::ActualTxDataRate_Name, false);
  }
  if (accessor.hasHigherDataRateCapable()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getHigherDataRateCapable(), node, CommMADL_TopologyEntryType_Names::HigherDataRateCapable_Name);
  }
  {
    const uci::type::CommMADL_TopologyEntryType::SecurityKey& boundedList = accessor.getSecurityKey();
    for (uci::type::CommMADL_TopologyEntryType::SecurityKey::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::CommMADL_SecurityKeyType::serialize(boundedList.at(i), node, CommMADL_TopologyEntryType_Names::SecurityKey_Name);
    }
  }
  CommMADL_NodeDataValidityEnum::serialize(accessor.getNodeDataValidity(), node, CommMADL_TopologyEntryType_Names::NodeDataValidity_Name, false);
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

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::CommMADL_TopologyEntryType>().release());
}

uci::type::CommMADL_TopologyEntryType& CommMADL_TopologyEntryType::create(const uci::type::CommMADL_TopologyEntryType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::CommMADL_TopologyEntryType> newAccessor{boost::make_unique<asb_uci::type::CommMADL_TopologyEntryType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void CommMADL_TopologyEntryType::destroy(uci::type::CommMADL_TopologyEntryType& accessor) {
  delete dynamic_cast<asb_uci::type::CommMADL_TopologyEntryType*>(&accessor);
}

} // namespace type

} // namespace uci

