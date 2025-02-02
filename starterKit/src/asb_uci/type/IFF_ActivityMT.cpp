/** @file IFF_ActivityMT.cpp
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

#include "../../../include/asb_uci/type/IFF_ActivityMT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/base/Reader.h"
#include "../../../include/asb_uci/base/Writer.h"
#include "../../../include/asb_uci/type/IFF_ActivityMDT.h"
#include "../../../include/asb_uci/type/MessageType.h"
#include "../../../include/asb_uci/type/ObjectStateEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IFF_ActivityMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IFF_ActivityMT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ObjectStateEnum.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

IFF_ActivityMT::IFF_ActivityMT()
  : messageData_Accessor{boost::make_unique<IFF_ActivityMDT>()} {
}

IFF_ActivityMT::~IFF_ActivityMT() = default;

void IFF_ActivityMT::copy(const uci::type::IFF_ActivityMT& accessor) {
  copyImpl(accessor, false);
}

void IFF_ActivityMT::copyImpl(const uci::type::IFF_ActivityMT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    MessageType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const IFF_ActivityMT&>(accessor);
    if (accessorImpl.objectState_Accessor) {
      setObjectState(*(accessorImpl.objectState_Accessor));
    } else {
      objectState_Accessor.reset();
    }
    setMessageData(*(accessorImpl.messageData_Accessor));
  }
}

void IFF_ActivityMT::reset() noexcept {
  MessageType::reset();
  objectState_Accessor.reset();
  messageData_Accessor->reset();
}

uci::type::ObjectStateEnum& IFF_ActivityMT::getObjectState_() const {
  if (objectState_Accessor) {
    return *objectState_Accessor;
  }
  throw uci::base::UCIException("Error in getObjectState(): An attempt was made to get an optional field that was not enabled, call hasObjectState() to determine if it is safe to call getObjectState()");
}

const uci::type::ObjectStateEnum& IFF_ActivityMT::getObjectState() const {
  return getObjectState_();
}

uci::type::ObjectStateEnum& IFF_ActivityMT::getObjectState() {
  return getObjectState_();
}

uci::type::IFF_ActivityMT& IFF_ActivityMT::setObjectState(const uci::type::ObjectStateEnum& accessor) {
  enableObjectState();
  if (&accessor != objectState_Accessor.get()) {
    objectState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::IFF_ActivityMT& IFF_ActivityMT::setObjectState(const uci::type::ObjectStateEnum::EnumerationItem value) {
  enableObjectState().setValue(value);
  return *this;
}

bool IFF_ActivityMT::hasObjectState() const noexcept {
  return static_cast<bool>(objectState_Accessor);
}

uci::type::ObjectStateEnum& IFF_ActivityMT::enableObjectState(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::objectStateEnum : type};
  if ((!objectState_Accessor) || (objectState_Accessor->getAccessorType() != requestedType)) {
    objectState_Accessor = ObjectStateEnum::create(requestedType);
    if (!objectState_Accessor) {
      throw uci::base::UCIException("Error in enableObjectState(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *objectState_Accessor;
}

uci::type::IFF_ActivityMT& IFF_ActivityMT::clearObjectState() noexcept {
  objectState_Accessor.reset();
  return *this;
}

const uci::type::IFF_ActivityMDT& IFF_ActivityMT::getMessageData() const {
  return *messageData_Accessor;
}

uci::type::IFF_ActivityMDT& IFF_ActivityMT::getMessageData() {
  return *messageData_Accessor;
}

uci::type::IFF_ActivityMT& IFF_ActivityMT::setMessageData(const uci::type::IFF_ActivityMDT& accessor) {
  if (&accessor != messageData_Accessor.get()) {
    messageData_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<IFF_ActivityMT> IFF_ActivityMT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::iFF_ActivityMT : type};
  return (requestedType == uci::type::accessorType::iFF_ActivityMT) ? boost::make_unique<IFF_ActivityMT>() : nullptr;
}

/**  */
namespace IFF_ActivityMT_Names {

constexpr const char* Extern_Top_Type_Name{"IFF_Activity"};
constexpr const char* Extern_Type_Name{"IFF_ActivityMT"};
constexpr const char* ObjectState_Name{"ObjectState"};
constexpr const char* MessageData_Name{"MessageData"};

} // namespace IFF_ActivityMT_Names

void IFF_ActivityMT::deserialize(const boost::property_tree::ptree& propTree, uci::type::IFF_ActivityMT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = (topLevel ? IFF_ActivityMT_Names::Extern_Top_Type_Name : IFF_ActivityMT_Names::Extern_Type_Name);
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + IFF_ActivityMT_Names::ObjectState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableObjectState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + IFF_ActivityMT_Names::MessageData_Name) {
      IFF_ActivityMDT::deserialize(valueType.second, accessor.getMessageData(), nodeName, nsPrefix);
    }
  }
  MessageType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string IFF_ActivityMT::serialize(const uci::type::IFF_ActivityMT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool topLevel) {
  std::string generatedNodeName{(nodeName.empty() ? (topLevel ? IFF_ActivityMT_Names::Extern_Top_Type_Name : IFF_ActivityMT_Names::Extern_Type_Name) : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, (topLevel ? IFF_ActivityMT_Names::Extern_Top_Type_Name : IFF_ActivityMT_Names::Extern_Type_Name));
  }
  MessageType::serialize(accessor, node, "", false, false, false);
  if (accessor.hasObjectState()) {
    ObjectStateEnum::serialize(accessor.getObjectState(), node, IFF_ActivityMT_Names::ObjectState_Name, false);
  }
  IFF_ActivityMDT::serialize(accessor.getMessageData(), node, IFF_ActivityMT_Names::MessageData_Name);
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

uci::type::IFF_ActivityMT& IFF_ActivityMT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::IFF_ActivityMT>().release());
}

uci::type::IFF_ActivityMT& IFF_ActivityMT::create(const uci::type::IFF_ActivityMT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::IFF_ActivityMT> newAccessor{boost::make_unique<asb_uci::type::IFF_ActivityMT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void IFF_ActivityMT::destroy(uci::type::IFF_ActivityMT& accessor) {
  delete dynamic_cast<asb_uci::type::IFF_ActivityMT*>(&accessor);
}

IFF_ActivityMT::Reader& IFF_ActivityMT::createReader(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Reader<IFF_ActivityMT, asb_uci::type::IFF_ActivityMT>> reader{boost::make_unique<asb_uci::base::Reader<IFF_ActivityMT, asb_uci::type::IFF_ActivityMT>>(topic, abstractServiceBusConnection)};
  reader->init();
  return *(reader.release());
}

void IFF_ActivityMT::destroyReader(IFF_ActivityMT::Reader& reader) {
  delete dynamic_cast<asb_uci::base::Reader<IFF_ActivityMT, asb_uci::type::IFF_ActivityMT>*>(&reader);
}

IFF_ActivityMT::Writer& IFF_ActivityMT::createWriter(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Writer<IFF_ActivityMT, asb_uci::type::IFF_ActivityMT>> writer{boost::make_unique<asb_uci::base::Writer<IFF_ActivityMT, asb_uci::type::IFF_ActivityMT>>(topic, abstractServiceBusConnection)};
  writer->init();
  return *(writer.release());
}

void IFF_ActivityMT::destroyWriter(IFF_ActivityMT::Writer& writer) {
  delete dynamic_cast<asb_uci::base::Writer<IFF_ActivityMT, asb_uci::type::IFF_ActivityMT>*>(&writer);
}

} // namespace type

} // namespace uci

