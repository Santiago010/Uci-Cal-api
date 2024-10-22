/** @file CommRelayCapabilityMT.cpp
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

#include "../../../include/asb_uci/type/CommRelayCapabilityMT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/base/Reader.h"
#include "../../../include/asb_uci/base/Writer.h"
#include "../../../include/asb_uci/type/CommRelayCapabilityMDT.h"
#include "../../../include/asb_uci/type/MessageType.h"
#include "../../../include/asb_uci/type/ObjectStateEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommRelayCapabilityMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommRelayCapabilityMT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ObjectStateEnum.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

CommRelayCapabilityMT::CommRelayCapabilityMT()
  : messageData_Accessor{boost::make_unique<CommRelayCapabilityMDT>()} {
}

CommRelayCapabilityMT::~CommRelayCapabilityMT() = default;

void CommRelayCapabilityMT::copy(const uci::type::CommRelayCapabilityMT& accessor) {
  copyImpl(accessor, false);
}

void CommRelayCapabilityMT::copyImpl(const uci::type::CommRelayCapabilityMT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    MessageType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const CommRelayCapabilityMT&>(accessor);
    if (accessorImpl.objectState_Accessor) {
      setObjectState(*(accessorImpl.objectState_Accessor));
    } else {
      objectState_Accessor.reset();
    }
    setMessageData(*(accessorImpl.messageData_Accessor));
  }
}

void CommRelayCapabilityMT::reset() noexcept {
  MessageType::reset();
  objectState_Accessor.reset();
  messageData_Accessor->reset();
}

uci::type::ObjectStateEnum& CommRelayCapabilityMT::getObjectState_() const {
  if (objectState_Accessor) {
    return *objectState_Accessor;
  }
  throw uci::base::UCIException("Error in getObjectState(): An attempt was made to get an optional field that was not enabled, call hasObjectState() to determine if it is safe to call getObjectState()");
}

const uci::type::ObjectStateEnum& CommRelayCapabilityMT::getObjectState() const {
  return getObjectState_();
}

uci::type::ObjectStateEnum& CommRelayCapabilityMT::getObjectState() {
  return getObjectState_();
}

uci::type::CommRelayCapabilityMT& CommRelayCapabilityMT::setObjectState(const uci::type::ObjectStateEnum& accessor) {
  enableObjectState();
  if (&accessor != objectState_Accessor.get()) {
    objectState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::CommRelayCapabilityMT& CommRelayCapabilityMT::setObjectState(const uci::type::ObjectStateEnum::EnumerationItem value) {
  enableObjectState().setValue(value);
  return *this;
}

bool CommRelayCapabilityMT::hasObjectState() const noexcept {
  return static_cast<bool>(objectState_Accessor);
}

uci::type::ObjectStateEnum& CommRelayCapabilityMT::enableObjectState(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::objectStateEnum : type};
  if ((!objectState_Accessor) || (objectState_Accessor->getAccessorType() != requestedType)) {
    objectState_Accessor = ObjectStateEnum::create(requestedType);
    if (!objectState_Accessor) {
      throw uci::base::UCIException("Error in enableObjectState(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *objectState_Accessor;
}

uci::type::CommRelayCapabilityMT& CommRelayCapabilityMT::clearObjectState() noexcept {
  objectState_Accessor.reset();
  return *this;
}

const uci::type::CommRelayCapabilityMDT& CommRelayCapabilityMT::getMessageData() const {
  return *messageData_Accessor;
}

uci::type::CommRelayCapabilityMDT& CommRelayCapabilityMT::getMessageData() {
  return *messageData_Accessor;
}

uci::type::CommRelayCapabilityMT& CommRelayCapabilityMT::setMessageData(const uci::type::CommRelayCapabilityMDT& accessor) {
  if (&accessor != messageData_Accessor.get()) {
    messageData_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<CommRelayCapabilityMT> CommRelayCapabilityMT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commRelayCapabilityMT : type};
  return (requestedType == uci::type::accessorType::commRelayCapabilityMT) ? boost::make_unique<CommRelayCapabilityMT>() : nullptr;
}

/**  */
namespace CommRelayCapabilityMT_Names {

constexpr const char* Extern_Top_Type_Name{"CommRelayCapability"};
constexpr const char* Extern_Type_Name{"CommRelayCapabilityMT"};
constexpr const char* ObjectState_Name{"ObjectState"};
constexpr const char* MessageData_Name{"MessageData"};

} // namespace CommRelayCapabilityMT_Names

void CommRelayCapabilityMT::deserialize(const boost::property_tree::ptree& propTree, uci::type::CommRelayCapabilityMT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = (topLevel ? CommRelayCapabilityMT_Names::Extern_Top_Type_Name : CommRelayCapabilityMT_Names::Extern_Type_Name);
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CommRelayCapabilityMT_Names::ObjectState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableObjectState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + CommRelayCapabilityMT_Names::MessageData_Name) {
      CommRelayCapabilityMDT::deserialize(valueType.second, accessor.getMessageData(), nodeName, nsPrefix);
    }
  }
  MessageType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string CommRelayCapabilityMT::serialize(const uci::type::CommRelayCapabilityMT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool topLevel) {
  std::string generatedNodeName{(nodeName.empty() ? (topLevel ? CommRelayCapabilityMT_Names::Extern_Top_Type_Name : CommRelayCapabilityMT_Names::Extern_Type_Name) : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, (topLevel ? CommRelayCapabilityMT_Names::Extern_Top_Type_Name : CommRelayCapabilityMT_Names::Extern_Type_Name));
  }
  MessageType::serialize(accessor, node, "", false, false, false);
  if (accessor.hasObjectState()) {
    ObjectStateEnum::serialize(accessor.getObjectState(), node, CommRelayCapabilityMT_Names::ObjectState_Name, false);
  }
  CommRelayCapabilityMDT::serialize(accessor.getMessageData(), node, CommRelayCapabilityMT_Names::MessageData_Name);
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

uci::type::CommRelayCapabilityMT& CommRelayCapabilityMT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::CommRelayCapabilityMT>().release());
}

uci::type::CommRelayCapabilityMT& CommRelayCapabilityMT::create(const uci::type::CommRelayCapabilityMT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::CommRelayCapabilityMT> newAccessor{boost::make_unique<asb_uci::type::CommRelayCapabilityMT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void CommRelayCapabilityMT::destroy(uci::type::CommRelayCapabilityMT& accessor) {
  delete dynamic_cast<asb_uci::type::CommRelayCapabilityMT*>(&accessor);
}

CommRelayCapabilityMT::Reader& CommRelayCapabilityMT::createReader(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Reader<CommRelayCapabilityMT, asb_uci::type::CommRelayCapabilityMT>> reader{boost::make_unique<asb_uci::base::Reader<CommRelayCapabilityMT, asb_uci::type::CommRelayCapabilityMT>>(topic, abstractServiceBusConnection)};
  reader->init();
  return *(reader.release());
}

void CommRelayCapabilityMT::destroyReader(CommRelayCapabilityMT::Reader& reader) {
  delete dynamic_cast<asb_uci::base::Reader<CommRelayCapabilityMT, asb_uci::type::CommRelayCapabilityMT>*>(&reader);
}

CommRelayCapabilityMT::Writer& CommRelayCapabilityMT::createWriter(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Writer<CommRelayCapabilityMT, asb_uci::type::CommRelayCapabilityMT>> writer{boost::make_unique<asb_uci::base::Writer<CommRelayCapabilityMT, asb_uci::type::CommRelayCapabilityMT>>(topic, abstractServiceBusConnection)};
  writer->init();
  return *(writer.release());
}

void CommRelayCapabilityMT::destroyWriter(CommRelayCapabilityMT::Writer& writer) {
  delete dynamic_cast<asb_uci::base::Writer<CommRelayCapabilityMT, asb_uci::type::CommRelayCapabilityMT>*>(&writer);
}

} // namespace type

} // namespace uci

