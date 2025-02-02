/** @file SystemOrbitalEphemerisMT.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:15 PM
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

#include "../../../include/asb_uci/type/SystemOrbitalEphemerisMT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/base/Reader.h"
#include "../../../include/asb_uci/base/Writer.h"
#include "../../../include/asb_uci/type/MessageType.h"
#include "../../../include/asb_uci/type/ObjectStateEnum.h"
#include "../../../include/asb_uci/type/SystemOrbitalEphemerisMDT.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ObjectStateEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemOrbitalEphemerisMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemOrbitalEphemerisMT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SystemOrbitalEphemerisMT::SystemOrbitalEphemerisMT()
  : messageData_Accessor{boost::make_unique<SystemOrbitalEphemerisMDT>()} {
}

SystemOrbitalEphemerisMT::~SystemOrbitalEphemerisMT() = default;

void SystemOrbitalEphemerisMT::copy(const uci::type::SystemOrbitalEphemerisMT& accessor) {
  copyImpl(accessor, false);
}

void SystemOrbitalEphemerisMT::copyImpl(const uci::type::SystemOrbitalEphemerisMT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    MessageType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const SystemOrbitalEphemerisMT&>(accessor);
    if (accessorImpl.objectState_Accessor) {
      setObjectState(*(accessorImpl.objectState_Accessor));
    } else {
      objectState_Accessor.reset();
    }
    setMessageData(*(accessorImpl.messageData_Accessor));
  }
}

void SystemOrbitalEphemerisMT::reset() noexcept {
  MessageType::reset();
  objectState_Accessor.reset();
  messageData_Accessor->reset();
}

uci::type::ObjectStateEnum& SystemOrbitalEphemerisMT::getObjectState_() const {
  if (objectState_Accessor) {
    return *objectState_Accessor;
  }
  throw uci::base::UCIException("Error in getObjectState(): An attempt was made to get an optional field that was not enabled, call hasObjectState() to determine if it is safe to call getObjectState()");
}

const uci::type::ObjectStateEnum& SystemOrbitalEphemerisMT::getObjectState() const {
  return getObjectState_();
}

uci::type::ObjectStateEnum& SystemOrbitalEphemerisMT::getObjectState() {
  return getObjectState_();
}

uci::type::SystemOrbitalEphemerisMT& SystemOrbitalEphemerisMT::setObjectState(const uci::type::ObjectStateEnum& accessor) {
  enableObjectState();
  if (&accessor != objectState_Accessor.get()) {
    objectState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::SystemOrbitalEphemerisMT& SystemOrbitalEphemerisMT::setObjectState(const uci::type::ObjectStateEnum::EnumerationItem value) {
  enableObjectState().setValue(value);
  return *this;
}

bool SystemOrbitalEphemerisMT::hasObjectState() const noexcept {
  return static_cast<bool>(objectState_Accessor);
}

uci::type::ObjectStateEnum& SystemOrbitalEphemerisMT::enableObjectState(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::objectStateEnum : type};
  if ((!objectState_Accessor) || (objectState_Accessor->getAccessorType() != requestedType)) {
    objectState_Accessor = ObjectStateEnum::create(requestedType);
    if (!objectState_Accessor) {
      throw uci::base::UCIException("Error in enableObjectState(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *objectState_Accessor;
}

uci::type::SystemOrbitalEphemerisMT& SystemOrbitalEphemerisMT::clearObjectState() noexcept {
  objectState_Accessor.reset();
  return *this;
}

const uci::type::SystemOrbitalEphemerisMDT& SystemOrbitalEphemerisMT::getMessageData() const {
  return *messageData_Accessor;
}

uci::type::SystemOrbitalEphemerisMDT& SystemOrbitalEphemerisMT::getMessageData() {
  return *messageData_Accessor;
}

uci::type::SystemOrbitalEphemerisMT& SystemOrbitalEphemerisMT::setMessageData(const uci::type::SystemOrbitalEphemerisMDT& accessor) {
  if (&accessor != messageData_Accessor.get()) {
    messageData_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<SystemOrbitalEphemerisMT> SystemOrbitalEphemerisMT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::systemOrbitalEphemerisMT : type};
  return (requestedType == uci::type::accessorType::systemOrbitalEphemerisMT) ? boost::make_unique<SystemOrbitalEphemerisMT>() : nullptr;
}

/**  */
namespace SystemOrbitalEphemerisMT_Names {

constexpr const char* Extern_Top_Type_Name{"SystemOrbitalEphemeris"};
constexpr const char* Extern_Type_Name{"SystemOrbitalEphemerisMT"};
constexpr const char* ObjectState_Name{"ObjectState"};
constexpr const char* MessageData_Name{"MessageData"};

} // namespace SystemOrbitalEphemerisMT_Names

void SystemOrbitalEphemerisMT::deserialize(const boost::property_tree::ptree& propTree, uci::type::SystemOrbitalEphemerisMT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = (topLevel ? SystemOrbitalEphemerisMT_Names::Extern_Top_Type_Name : SystemOrbitalEphemerisMT_Names::Extern_Type_Name);
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SystemOrbitalEphemerisMT_Names::ObjectState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableObjectState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + SystemOrbitalEphemerisMT_Names::MessageData_Name) {
      SystemOrbitalEphemerisMDT::deserialize(valueType.second, accessor.getMessageData(), nodeName, nsPrefix);
    }
  }
  MessageType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string SystemOrbitalEphemerisMT::serialize(const uci::type::SystemOrbitalEphemerisMT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool topLevel) {
  std::string generatedNodeName{(nodeName.empty() ? (topLevel ? SystemOrbitalEphemerisMT_Names::Extern_Top_Type_Name : SystemOrbitalEphemerisMT_Names::Extern_Type_Name) : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, (topLevel ? SystemOrbitalEphemerisMT_Names::Extern_Top_Type_Name : SystemOrbitalEphemerisMT_Names::Extern_Type_Name));
  }
  MessageType::serialize(accessor, node, "", false, false, false);
  if (accessor.hasObjectState()) {
    ObjectStateEnum::serialize(accessor.getObjectState(), node, SystemOrbitalEphemerisMT_Names::ObjectState_Name, false);
  }
  SystemOrbitalEphemerisMDT::serialize(accessor.getMessageData(), node, SystemOrbitalEphemerisMT_Names::MessageData_Name);
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

uci::type::SystemOrbitalEphemerisMT& SystemOrbitalEphemerisMT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SystemOrbitalEphemerisMT>().release());
}

uci::type::SystemOrbitalEphemerisMT& SystemOrbitalEphemerisMT::create(const uci::type::SystemOrbitalEphemerisMT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SystemOrbitalEphemerisMT> newAccessor{boost::make_unique<asb_uci::type::SystemOrbitalEphemerisMT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SystemOrbitalEphemerisMT::destroy(uci::type::SystemOrbitalEphemerisMT& accessor) {
  delete dynamic_cast<asb_uci::type::SystemOrbitalEphemerisMT*>(&accessor);
}

SystemOrbitalEphemerisMT::Reader& SystemOrbitalEphemerisMT::createReader(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Reader<SystemOrbitalEphemerisMT, asb_uci::type::SystemOrbitalEphemerisMT>> reader{boost::make_unique<asb_uci::base::Reader<SystemOrbitalEphemerisMT, asb_uci::type::SystemOrbitalEphemerisMT>>(topic, abstractServiceBusConnection)};
  reader->init();
  return *(reader.release());
}

void SystemOrbitalEphemerisMT::destroyReader(SystemOrbitalEphemerisMT::Reader& reader) {
  delete dynamic_cast<asb_uci::base::Reader<SystemOrbitalEphemerisMT, asb_uci::type::SystemOrbitalEphemerisMT>*>(&reader);
}

SystemOrbitalEphemerisMT::Writer& SystemOrbitalEphemerisMT::createWriter(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Writer<SystemOrbitalEphemerisMT, asb_uci::type::SystemOrbitalEphemerisMT>> writer{boost::make_unique<asb_uci::base::Writer<SystemOrbitalEphemerisMT, asb_uci::type::SystemOrbitalEphemerisMT>>(topic, abstractServiceBusConnection)};
  writer->init();
  return *(writer.release());
}

void SystemOrbitalEphemerisMT::destroyWriter(SystemOrbitalEphemerisMT::Writer& writer) {
  delete dynamic_cast<asb_uci::base::Writer<SystemOrbitalEphemerisMT, asb_uci::type::SystemOrbitalEphemerisMT>*>(&writer);
}

} // namespace type

} // namespace uci

