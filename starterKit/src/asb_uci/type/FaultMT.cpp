/** @file FaultMT.cpp
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

#include "../../../include/asb_uci/type/FaultMT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/base/Reader.h"
#include "../../../include/asb_uci/base/Writer.h"
#include "../../../include/asb_uci/type/FaultMDT.h"
#include "../../../include/asb_uci/type/MessageType.h"
#include "../../../include/asb_uci/type/ObjectStateEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/FaultMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/FaultMT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ObjectStateEnum.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

FaultMT::FaultMT()
  : messageData_Accessor{boost::make_unique<FaultMDT>()} {
}

FaultMT::~FaultMT() = default;

void FaultMT::copy(const uci::type::FaultMT& accessor) {
  copyImpl(accessor, false);
}

void FaultMT::copyImpl(const uci::type::FaultMT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    MessageType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const FaultMT&>(accessor);
    if (accessorImpl.objectState_Accessor) {
      setObjectState(*(accessorImpl.objectState_Accessor));
    } else {
      objectState_Accessor.reset();
    }
    setMessageData(*(accessorImpl.messageData_Accessor));
  }
}

void FaultMT::reset() noexcept {
  MessageType::reset();
  objectState_Accessor.reset();
  messageData_Accessor->reset();
}

uci::type::ObjectStateEnum& FaultMT::getObjectState_() const {
  if (objectState_Accessor) {
    return *objectState_Accessor;
  }
  throw uci::base::UCIException("Error in getObjectState(): An attempt was made to get an optional field that was not enabled, call hasObjectState() to determine if it is safe to call getObjectState()");
}

const uci::type::ObjectStateEnum& FaultMT::getObjectState() const {
  return getObjectState_();
}

uci::type::ObjectStateEnum& FaultMT::getObjectState() {
  return getObjectState_();
}

uci::type::FaultMT& FaultMT::setObjectState(const uci::type::ObjectStateEnum& accessor) {
  enableObjectState();
  if (&accessor != objectState_Accessor.get()) {
    objectState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::FaultMT& FaultMT::setObjectState(const uci::type::ObjectStateEnum::EnumerationItem value) {
  enableObjectState().setValue(value);
  return *this;
}

bool FaultMT::hasObjectState() const noexcept {
  return static_cast<bool>(objectState_Accessor);
}

uci::type::ObjectStateEnum& FaultMT::enableObjectState(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::objectStateEnum : type};
  if ((!objectState_Accessor) || (objectState_Accessor->getAccessorType() != requestedType)) {
    objectState_Accessor = ObjectStateEnum::create(requestedType);
    if (!objectState_Accessor) {
      throw uci::base::UCIException("Error in enableObjectState(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *objectState_Accessor;
}

uci::type::FaultMT& FaultMT::clearObjectState() noexcept {
  objectState_Accessor.reset();
  return *this;
}

const uci::type::FaultMDT& FaultMT::getMessageData() const {
  return *messageData_Accessor;
}

uci::type::FaultMDT& FaultMT::getMessageData() {
  return *messageData_Accessor;
}

uci::type::FaultMT& FaultMT::setMessageData(const uci::type::FaultMDT& accessor) {
  if (&accessor != messageData_Accessor.get()) {
    messageData_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<FaultMT> FaultMT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::faultMT : type};
  return (requestedType == uci::type::accessorType::faultMT) ? boost::make_unique<FaultMT>() : nullptr;
}

/**  */
namespace FaultMT_Names {

constexpr const char* Extern_Top_Type_Name{"Fault"};
constexpr const char* Extern_Type_Name{"FaultMT"};
constexpr const char* ObjectState_Name{"ObjectState"};
constexpr const char* MessageData_Name{"MessageData"};

} // namespace FaultMT_Names

void FaultMT::deserialize(const boost::property_tree::ptree& propTree, uci::type::FaultMT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = (topLevel ? FaultMT_Names::Extern_Top_Type_Name : FaultMT_Names::Extern_Type_Name);
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + FaultMT_Names::ObjectState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableObjectState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + FaultMT_Names::MessageData_Name) {
      FaultMDT::deserialize(valueType.second, accessor.getMessageData(), nodeName, nsPrefix);
    }
  }
  MessageType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string FaultMT::serialize(const uci::type::FaultMT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool topLevel) {
  std::string generatedNodeName{(nodeName.empty() ? (topLevel ? FaultMT_Names::Extern_Top_Type_Name : FaultMT_Names::Extern_Type_Name) : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, (topLevel ? FaultMT_Names::Extern_Top_Type_Name : FaultMT_Names::Extern_Type_Name));
  }
  MessageType::serialize(accessor, node, "", false, false, false);
  if (accessor.hasObjectState()) {
    ObjectStateEnum::serialize(accessor.getObjectState(), node, FaultMT_Names::ObjectState_Name, false);
  }
  FaultMDT::serialize(accessor.getMessageData(), node, FaultMT_Names::MessageData_Name);
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

uci::type::FaultMT& FaultMT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::FaultMT>().release());
}

uci::type::FaultMT& FaultMT::create(const uci::type::FaultMT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::FaultMT> newAccessor{boost::make_unique<asb_uci::type::FaultMT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void FaultMT::destroy(uci::type::FaultMT& accessor) {
  delete dynamic_cast<asb_uci::type::FaultMT*>(&accessor);
}

FaultMT::Reader& FaultMT::createReader(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Reader<FaultMT, asb_uci::type::FaultMT>> reader{boost::make_unique<asb_uci::base::Reader<FaultMT, asb_uci::type::FaultMT>>(topic, abstractServiceBusConnection)};
  reader->init();
  return *(reader.release());
}

void FaultMT::destroyReader(FaultMT::Reader& reader) {
  delete dynamic_cast<asb_uci::base::Reader<FaultMT, asb_uci::type::FaultMT>*>(&reader);
}

FaultMT::Writer& FaultMT::createWriter(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Writer<FaultMT, asb_uci::type::FaultMT>> writer{boost::make_unique<asb_uci::base::Writer<FaultMT, asb_uci::type::FaultMT>>(topic, abstractServiceBusConnection)};
  writer->init();
  return *(writer.release());
}

void FaultMT::destroyWriter(FaultMT::Writer& writer) {
  delete dynamic_cast<asb_uci::base::Writer<FaultMT, asb_uci::type::FaultMT>*>(&writer);
}

} // namespace type

} // namespace uci

