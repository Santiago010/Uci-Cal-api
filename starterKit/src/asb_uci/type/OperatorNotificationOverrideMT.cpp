/** @file OperatorNotificationOverrideMT.cpp
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

#include "../../../include/asb_uci/type/OperatorNotificationOverrideMT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/base/Reader.h"
#include "../../../include/asb_uci/base/Writer.h"
#include "../../../include/asb_uci/type/MessageType.h"
#include "../../../include/asb_uci/type/ObjectStateEnum.h"
#include "../../../include/asb_uci/type/OperatorNotificationOverrideMDT.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ObjectStateEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OperatorNotificationOverrideMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OperatorNotificationOverrideMT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OperatorNotificationOverrideMT::OperatorNotificationOverrideMT()
  : messageData_Accessor{boost::make_unique<OperatorNotificationOverrideMDT>()} {
}

OperatorNotificationOverrideMT::~OperatorNotificationOverrideMT() = default;

void OperatorNotificationOverrideMT::copy(const uci::type::OperatorNotificationOverrideMT& accessor) {
  copyImpl(accessor, false);
}

void OperatorNotificationOverrideMT::copyImpl(const uci::type::OperatorNotificationOverrideMT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    MessageType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const OperatorNotificationOverrideMT&>(accessor);
    if (accessorImpl.objectState_Accessor) {
      setObjectState(*(accessorImpl.objectState_Accessor));
    } else {
      objectState_Accessor.reset();
    }
    setMessageData(*(accessorImpl.messageData_Accessor));
  }
}

void OperatorNotificationOverrideMT::reset() noexcept {
  MessageType::reset();
  objectState_Accessor.reset();
  messageData_Accessor->reset();
}

uci::type::ObjectStateEnum& OperatorNotificationOverrideMT::getObjectState_() const {
  if (objectState_Accessor) {
    return *objectState_Accessor;
  }
  throw uci::base::UCIException("Error in getObjectState(): An attempt was made to get an optional field that was not enabled, call hasObjectState() to determine if it is safe to call getObjectState()");
}

const uci::type::ObjectStateEnum& OperatorNotificationOverrideMT::getObjectState() const {
  return getObjectState_();
}

uci::type::ObjectStateEnum& OperatorNotificationOverrideMT::getObjectState() {
  return getObjectState_();
}

uci::type::OperatorNotificationOverrideMT& OperatorNotificationOverrideMT::setObjectState(const uci::type::ObjectStateEnum& accessor) {
  enableObjectState();
  if (&accessor != objectState_Accessor.get()) {
    objectState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::OperatorNotificationOverrideMT& OperatorNotificationOverrideMT::setObjectState(const uci::type::ObjectStateEnum::EnumerationItem value) {
  enableObjectState().setValue(value);
  return *this;
}

bool OperatorNotificationOverrideMT::hasObjectState() const noexcept {
  return static_cast<bool>(objectState_Accessor);
}

uci::type::ObjectStateEnum& OperatorNotificationOverrideMT::enableObjectState(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::objectStateEnum : type};
  if ((!objectState_Accessor) || (objectState_Accessor->getAccessorType() != requestedType)) {
    objectState_Accessor = ObjectStateEnum::create(requestedType);
    if (!objectState_Accessor) {
      throw uci::base::UCIException("Error in enableObjectState(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *objectState_Accessor;
}

uci::type::OperatorNotificationOverrideMT& OperatorNotificationOverrideMT::clearObjectState() noexcept {
  objectState_Accessor.reset();
  return *this;
}

const uci::type::OperatorNotificationOverrideMDT& OperatorNotificationOverrideMT::getMessageData() const {
  return *messageData_Accessor;
}

uci::type::OperatorNotificationOverrideMDT& OperatorNotificationOverrideMT::getMessageData() {
  return *messageData_Accessor;
}

uci::type::OperatorNotificationOverrideMT& OperatorNotificationOverrideMT::setMessageData(const uci::type::OperatorNotificationOverrideMDT& accessor) {
  if (&accessor != messageData_Accessor.get()) {
    messageData_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<OperatorNotificationOverrideMT> OperatorNotificationOverrideMT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::operatorNotificationOverrideMT : type};
  return (requestedType == uci::type::accessorType::operatorNotificationOverrideMT) ? boost::make_unique<OperatorNotificationOverrideMT>() : nullptr;
}

/**  */
namespace OperatorNotificationOverrideMT_Names {

constexpr const char* Extern_Top_Type_Name{"OperatorNotificationOverride"};
constexpr const char* Extern_Type_Name{"OperatorNotificationOverrideMT"};
constexpr const char* ObjectState_Name{"ObjectState"};
constexpr const char* MessageData_Name{"MessageData"};

} // namespace OperatorNotificationOverrideMT_Names

void OperatorNotificationOverrideMT::deserialize(const boost::property_tree::ptree& propTree, uci::type::OperatorNotificationOverrideMT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = (topLevel ? OperatorNotificationOverrideMT_Names::Extern_Top_Type_Name : OperatorNotificationOverrideMT_Names::Extern_Type_Name);
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OperatorNotificationOverrideMT_Names::ObjectState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableObjectState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + OperatorNotificationOverrideMT_Names::MessageData_Name) {
      OperatorNotificationOverrideMDT::deserialize(valueType.second, accessor.getMessageData(), nodeName, nsPrefix);
    }
  }
  MessageType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string OperatorNotificationOverrideMT::serialize(const uci::type::OperatorNotificationOverrideMT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool topLevel) {
  std::string generatedNodeName{(nodeName.empty() ? (topLevel ? OperatorNotificationOverrideMT_Names::Extern_Top_Type_Name : OperatorNotificationOverrideMT_Names::Extern_Type_Name) : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, (topLevel ? OperatorNotificationOverrideMT_Names::Extern_Top_Type_Name : OperatorNotificationOverrideMT_Names::Extern_Type_Name));
  }
  MessageType::serialize(accessor, node, "", false, false, false);
  if (accessor.hasObjectState()) {
    ObjectStateEnum::serialize(accessor.getObjectState(), node, OperatorNotificationOverrideMT_Names::ObjectState_Name, false);
  }
  OperatorNotificationOverrideMDT::serialize(accessor.getMessageData(), node, OperatorNotificationOverrideMT_Names::MessageData_Name);
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

uci::type::OperatorNotificationOverrideMT& OperatorNotificationOverrideMT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OperatorNotificationOverrideMT>().release());
}

uci::type::OperatorNotificationOverrideMT& OperatorNotificationOverrideMT::create(const uci::type::OperatorNotificationOverrideMT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OperatorNotificationOverrideMT> newAccessor{boost::make_unique<asb_uci::type::OperatorNotificationOverrideMT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OperatorNotificationOverrideMT::destroy(uci::type::OperatorNotificationOverrideMT& accessor) {
  delete dynamic_cast<asb_uci::type::OperatorNotificationOverrideMT*>(&accessor);
}

OperatorNotificationOverrideMT::Reader& OperatorNotificationOverrideMT::createReader(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Reader<OperatorNotificationOverrideMT, asb_uci::type::OperatorNotificationOverrideMT>> reader{boost::make_unique<asb_uci::base::Reader<OperatorNotificationOverrideMT, asb_uci::type::OperatorNotificationOverrideMT>>(topic, abstractServiceBusConnection)};
  reader->init();
  return *(reader.release());
}

void OperatorNotificationOverrideMT::destroyReader(OperatorNotificationOverrideMT::Reader& reader) {
  delete dynamic_cast<asb_uci::base::Reader<OperatorNotificationOverrideMT, asb_uci::type::OperatorNotificationOverrideMT>*>(&reader);
}

OperatorNotificationOverrideMT::Writer& OperatorNotificationOverrideMT::createWriter(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Writer<OperatorNotificationOverrideMT, asb_uci::type::OperatorNotificationOverrideMT>> writer{boost::make_unique<asb_uci::base::Writer<OperatorNotificationOverrideMT, asb_uci::type::OperatorNotificationOverrideMT>>(topic, abstractServiceBusConnection)};
  writer->init();
  return *(writer.release());
}

void OperatorNotificationOverrideMT::destroyWriter(OperatorNotificationOverrideMT::Writer& writer) {
  delete dynamic_cast<asb_uci::base::Writer<OperatorNotificationOverrideMT, asb_uci::type::OperatorNotificationOverrideMT>*>(&writer);
}

} // namespace type

} // namespace uci

