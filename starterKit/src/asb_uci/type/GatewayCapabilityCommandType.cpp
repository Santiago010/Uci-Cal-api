/** @file GatewayCapabilityCommandType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:13 PM
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

#include "../../../include/asb_uci/type/GatewayCapabilityCommandType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CapabilityCommandBaseType.h"
#include "../../../include/asb_uci/type/CommConnectionCommandEnum.h"
#include "../../../include/asb_uci/type/CommProfileID_Type.h"
#include "../../../include/asb_uci/type/GatewayConfigurationType.h"
#include "../../../include/asb_uci/type/GatewayControlType.h"
#include "../../../include/asb_uci/type/VerboseStatusType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommConnectionCommandEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommProfileID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/GatewayCapabilityCommandType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/GatewayConfigurationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/GatewayControlType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VerboseStatusType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

GatewayCapabilityCommandType::GatewayCapabilityCommandType()
  : gatewayConfiguration_Accessor{boost::make_unique<GatewayConfiguration>(0, SIZE_MAX)} {
}

GatewayCapabilityCommandType::~GatewayCapabilityCommandType() = default;

void GatewayCapabilityCommandType::copy(const uci::type::GatewayCapabilityCommandType& accessor) {
  copyImpl(accessor, false);
}

void GatewayCapabilityCommandType::copyImpl(const uci::type::GatewayCapabilityCommandType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    CapabilityCommandBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const GatewayCapabilityCommandType&>(accessor);
    if (accessorImpl.connectionRequest_Accessor) {
      setConnectionRequest(*(accessorImpl.connectionRequest_Accessor));
    } else {
      connectionRequest_Accessor.reset();
    }
    if (accessorImpl.commonSettingsChange_Accessor) {
      setCommonSettingsChange(*(accessorImpl.commonSettingsChange_Accessor));
    } else {
      commonSettingsChange_Accessor.reset();
    }
    setGatewayConfiguration(*(accessorImpl.gatewayConfiguration_Accessor));
    if (accessorImpl.activateProfileID_Accessor) {
      setActivateProfileID(*(accessorImpl.activateProfileID_Accessor));
    } else {
      activateProfileID_Accessor.reset();
    }
    if (accessorImpl.verboseStatus_Accessor) {
      setVerboseStatus(*(accessorImpl.verboseStatus_Accessor));
    } else {
      verboseStatus_Accessor.reset();
    }
  }
}

void GatewayCapabilityCommandType::reset() noexcept {
  CapabilityCommandBaseType::reset();
  connectionRequest_Accessor.reset();
  commonSettingsChange_Accessor.reset();
  gatewayConfiguration_Accessor->reset();
  activateProfileID_Accessor.reset();
  verboseStatus_Accessor.reset();
}

uci::type::CommConnectionCommandEnum& GatewayCapabilityCommandType::getConnectionRequest_() const {
  if (connectionRequest_Accessor) {
    return *connectionRequest_Accessor;
  }
  throw uci::base::UCIException("Error in getConnectionRequest(): An attempt was made to get an optional field that was not enabled, call hasConnectionRequest() to determine if it is safe to call getConnectionRequest()");
}

const uci::type::CommConnectionCommandEnum& GatewayCapabilityCommandType::getConnectionRequest() const {
  return getConnectionRequest_();
}

uci::type::CommConnectionCommandEnum& GatewayCapabilityCommandType::getConnectionRequest() {
  return getConnectionRequest_();
}

uci::type::GatewayCapabilityCommandType& GatewayCapabilityCommandType::setConnectionRequest(const uci::type::CommConnectionCommandEnum& accessor) {
  enableConnectionRequest();
  if (&accessor != connectionRequest_Accessor.get()) {
    connectionRequest_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::GatewayCapabilityCommandType& GatewayCapabilityCommandType::setConnectionRequest(const uci::type::CommConnectionCommandEnum::EnumerationItem value) {
  enableConnectionRequest().setValue(value);
  return *this;
}

bool GatewayCapabilityCommandType::hasConnectionRequest() const noexcept {
  return static_cast<bool>(connectionRequest_Accessor);
}

uci::type::CommConnectionCommandEnum& GatewayCapabilityCommandType::enableConnectionRequest(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commConnectionCommandEnum : type};
  if ((!connectionRequest_Accessor) || (connectionRequest_Accessor->getAccessorType() != requestedType)) {
    connectionRequest_Accessor = CommConnectionCommandEnum::create(requestedType);
    if (!connectionRequest_Accessor) {
      throw uci::base::UCIException("Error in enableConnectionRequest(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *connectionRequest_Accessor;
}

uci::type::GatewayCapabilityCommandType& GatewayCapabilityCommandType::clearConnectionRequest() noexcept {
  connectionRequest_Accessor.reset();
  return *this;
}

uci::type::GatewayControlType& GatewayCapabilityCommandType::getCommonSettingsChange_() const {
  if (commonSettingsChange_Accessor) {
    return *commonSettingsChange_Accessor;
  }
  throw uci::base::UCIException("Error in getCommonSettingsChange(): An attempt was made to get an optional field that was not enabled, call hasCommonSettingsChange() to determine if it is safe to call getCommonSettingsChange()");
}

const uci::type::GatewayControlType& GatewayCapabilityCommandType::getCommonSettingsChange() const {
  return getCommonSettingsChange_();
}

uci::type::GatewayControlType& GatewayCapabilityCommandType::getCommonSettingsChange() {
  return getCommonSettingsChange_();
}

uci::type::GatewayCapabilityCommandType& GatewayCapabilityCommandType::setCommonSettingsChange(const uci::type::GatewayControlType& accessor) {
  enableCommonSettingsChange();
  if (&accessor != commonSettingsChange_Accessor.get()) {
    commonSettingsChange_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool GatewayCapabilityCommandType::hasCommonSettingsChange() const noexcept {
  return static_cast<bool>(commonSettingsChange_Accessor);
}

uci::type::GatewayControlType& GatewayCapabilityCommandType::enableCommonSettingsChange(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::gatewayControlType : type};
  if ((!commonSettingsChange_Accessor) || (commonSettingsChange_Accessor->getAccessorType() != requestedType)) {
    commonSettingsChange_Accessor = GatewayControlType::create(requestedType);
    if (!commonSettingsChange_Accessor) {
      throw uci::base::UCIException("Error in enableCommonSettingsChange(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *commonSettingsChange_Accessor;
}

uci::type::GatewayCapabilityCommandType& GatewayCapabilityCommandType::clearCommonSettingsChange() noexcept {
  commonSettingsChange_Accessor.reset();
  return *this;
}

const uci::type::GatewayCapabilityCommandType::GatewayConfiguration& GatewayCapabilityCommandType::getGatewayConfiguration() const {
  return *gatewayConfiguration_Accessor;
}

uci::type::GatewayCapabilityCommandType::GatewayConfiguration& GatewayCapabilityCommandType::getGatewayConfiguration() {
  return *gatewayConfiguration_Accessor;
}

uci::type::GatewayCapabilityCommandType& GatewayCapabilityCommandType::setGatewayConfiguration(const uci::type::GatewayCapabilityCommandType::GatewayConfiguration& accessor) {
  if (&accessor != gatewayConfiguration_Accessor.get()) {
    gatewayConfiguration_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::CommProfileID_Type& GatewayCapabilityCommandType::getActivateProfileID_() const {
  if (activateProfileID_Accessor) {
    return *activateProfileID_Accessor;
  }
  throw uci::base::UCIException("Error in getActivateProfileID(): An attempt was made to get an optional field that was not enabled, call hasActivateProfileID() to determine if it is safe to call getActivateProfileID()");
}

const uci::type::CommProfileID_Type& GatewayCapabilityCommandType::getActivateProfileID() const {
  return getActivateProfileID_();
}

uci::type::CommProfileID_Type& GatewayCapabilityCommandType::getActivateProfileID() {
  return getActivateProfileID_();
}

uci::type::GatewayCapabilityCommandType& GatewayCapabilityCommandType::setActivateProfileID(const uci::type::CommProfileID_Type& accessor) {
  enableActivateProfileID();
  if (&accessor != activateProfileID_Accessor.get()) {
    activateProfileID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool GatewayCapabilityCommandType::hasActivateProfileID() const noexcept {
  return static_cast<bool>(activateProfileID_Accessor);
}

uci::type::CommProfileID_Type& GatewayCapabilityCommandType::enableActivateProfileID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commProfileID_Type : type};
  if ((!activateProfileID_Accessor) || (activateProfileID_Accessor->getAccessorType() != requestedType)) {
    activateProfileID_Accessor = CommProfileID_Type::create(requestedType);
    if (!activateProfileID_Accessor) {
      throw uci::base::UCIException("Error in enableActivateProfileID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *activateProfileID_Accessor;
}

uci::type::GatewayCapabilityCommandType& GatewayCapabilityCommandType::clearActivateProfileID() noexcept {
  activateProfileID_Accessor.reset();
  return *this;
}

uci::type::VerboseStatusType& GatewayCapabilityCommandType::getVerboseStatus_() const {
  if (verboseStatus_Accessor) {
    return *verboseStatus_Accessor;
  }
  throw uci::base::UCIException("Error in getVerboseStatus(): An attempt was made to get an optional field that was not enabled, call hasVerboseStatus() to determine if it is safe to call getVerboseStatus()");
}

const uci::type::VerboseStatusType& GatewayCapabilityCommandType::getVerboseStatus() const {
  return getVerboseStatus_();
}

uci::type::VerboseStatusType& GatewayCapabilityCommandType::getVerboseStatus() {
  return getVerboseStatus_();
}

uci::type::GatewayCapabilityCommandType& GatewayCapabilityCommandType::setVerboseStatus(const uci::type::VerboseStatusType& accessor) {
  enableVerboseStatus();
  if (&accessor != verboseStatus_Accessor.get()) {
    verboseStatus_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool GatewayCapabilityCommandType::hasVerboseStatus() const noexcept {
  return static_cast<bool>(verboseStatus_Accessor);
}

uci::type::VerboseStatusType& GatewayCapabilityCommandType::enableVerboseStatus(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::verboseStatusType : type};
  if ((!verboseStatus_Accessor) || (verboseStatus_Accessor->getAccessorType() != requestedType)) {
    verboseStatus_Accessor = VerboseStatusType::create(requestedType);
    if (!verboseStatus_Accessor) {
      throw uci::base::UCIException("Error in enableVerboseStatus(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *verboseStatus_Accessor;
}

uci::type::GatewayCapabilityCommandType& GatewayCapabilityCommandType::clearVerboseStatus() noexcept {
  verboseStatus_Accessor.reset();
  return *this;
}

std::unique_ptr<GatewayCapabilityCommandType> GatewayCapabilityCommandType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::gatewayCapabilityCommandType : type};
  return (requestedType == uci::type::accessorType::gatewayCapabilityCommandType) ? boost::make_unique<GatewayCapabilityCommandType>() : nullptr;
}

/**  */
namespace GatewayCapabilityCommandType_Names {

constexpr const char* Extern_Type_Name{"GatewayCapabilityCommandType"};
constexpr const char* ConnectionRequest_Name{"ConnectionRequest"};
constexpr const char* CommonSettingsChange_Name{"CommonSettingsChange"};
constexpr const char* GatewayConfiguration_Name{"GatewayConfiguration"};
constexpr const char* ActivateProfileID_Name{"ActivateProfileID"};
constexpr const char* VerboseStatus_Name{"VerboseStatus"};

} // namespace GatewayCapabilityCommandType_Names

void GatewayCapabilityCommandType::deserialize(const boost::property_tree::ptree& propTree, uci::type::GatewayCapabilityCommandType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = GatewayCapabilityCommandType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + GatewayCapabilityCommandType_Names::ConnectionRequest_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableConnectionRequest().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + GatewayCapabilityCommandType_Names::CommonSettingsChange_Name) {
      GatewayControlType::deserialize(valueType.second, accessor.enableCommonSettingsChange(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + GatewayCapabilityCommandType_Names::GatewayConfiguration_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::GatewayCapabilityCommandType::GatewayConfiguration& boundedList = accessor.getGatewayConfiguration();
        const uci::type::GatewayCapabilityCommandType::GatewayConfiguration::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::GatewayConfigurationType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + GatewayCapabilityCommandType_Names::ActivateProfileID_Name) {
      CommProfileID_Type::deserialize(valueType.second, accessor.enableActivateProfileID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + GatewayCapabilityCommandType_Names::VerboseStatus_Name) {
      VerboseStatusType::deserialize(valueType.second, accessor.enableVerboseStatus(), nodeName, nsPrefix);
    }
  }
  CapabilityCommandBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string GatewayCapabilityCommandType::serialize(const uci::type::GatewayCapabilityCommandType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? GatewayCapabilityCommandType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, GatewayCapabilityCommandType_Names::Extern_Type_Name);
  }
  CapabilityCommandBaseType::serialize(accessor, node, "", false, false, false);
  if (accessor.hasConnectionRequest()) {
    CommConnectionCommandEnum::serialize(accessor.getConnectionRequest(), node, GatewayCapabilityCommandType_Names::ConnectionRequest_Name, false);
  }
  if (accessor.hasCommonSettingsChange()) {
    GatewayControlType::serialize(accessor.getCommonSettingsChange(), node, GatewayCapabilityCommandType_Names::CommonSettingsChange_Name);
  }
  {
    const uci::type::GatewayCapabilityCommandType::GatewayConfiguration& boundedList = accessor.getGatewayConfiguration();
    for (uci::type::GatewayCapabilityCommandType::GatewayConfiguration::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::GatewayConfigurationType::serialize(boundedList.at(i), node, GatewayCapabilityCommandType_Names::GatewayConfiguration_Name);
    }
  }
  if (accessor.hasActivateProfileID()) {
    CommProfileID_Type::serialize(accessor.getActivateProfileID(), node, GatewayCapabilityCommandType_Names::ActivateProfileID_Name);
  }
  if (accessor.hasVerboseStatus()) {
    VerboseStatusType::serialize(accessor.getVerboseStatus(), node, GatewayCapabilityCommandType_Names::VerboseStatus_Name);
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

uci::type::GatewayCapabilityCommandType& GatewayCapabilityCommandType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::GatewayCapabilityCommandType>().release());
}

uci::type::GatewayCapabilityCommandType& GatewayCapabilityCommandType::create(const uci::type::GatewayCapabilityCommandType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::GatewayCapabilityCommandType> newAccessor{boost::make_unique<asb_uci::type::GatewayCapabilityCommandType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void GatewayCapabilityCommandType::destroy(uci::type::GatewayCapabilityCommandType& accessor) {
  delete dynamic_cast<asb_uci::type::GatewayCapabilityCommandType*>(&accessor);
}

} // namespace type

} // namespace uci

