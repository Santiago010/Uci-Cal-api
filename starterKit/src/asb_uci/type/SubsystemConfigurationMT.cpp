/** @file SubsystemConfigurationMT.cpp
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

#include "../../../include/asb_uci/type/SubsystemConfigurationMT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/base/Reader.h"
#include "../../../include/asb_uci/base/Writer.h"
#include "../../../include/asb_uci/type/MessageType.h"
#include "../../../include/asb_uci/type/ObjectStateEnum.h"
#include "../../../include/asb_uci/type/SubsystemConfigurationMDT.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ObjectStateEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemConfigurationMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemConfigurationMT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SubsystemConfigurationMT::SubsystemConfigurationMT()
  : messageData_Accessor{boost::make_unique<SubsystemConfigurationMDT>()} {
}

SubsystemConfigurationMT::~SubsystemConfigurationMT() = default;

void SubsystemConfigurationMT::copy(const uci::type::SubsystemConfigurationMT& accessor) {
  copyImpl(accessor, false);
}

void SubsystemConfigurationMT::copyImpl(const uci::type::SubsystemConfigurationMT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    MessageType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const SubsystemConfigurationMT&>(accessor);
    if (accessorImpl.objectState_Accessor) {
      setObjectState(*(accessorImpl.objectState_Accessor));
    } else {
      objectState_Accessor.reset();
    }
    setMessageData(*(accessorImpl.messageData_Accessor));
  }
}

void SubsystemConfigurationMT::reset() noexcept {
  MessageType::reset();
  objectState_Accessor.reset();
  messageData_Accessor->reset();
}

uci::type::ObjectStateEnum& SubsystemConfigurationMT::getObjectState_() const {
  if (objectState_Accessor) {
    return *objectState_Accessor;
  }
  throw uci::base::UCIException("Error in getObjectState(): An attempt was made to get an optional field that was not enabled, call hasObjectState() to determine if it is safe to call getObjectState()");
}

const uci::type::ObjectStateEnum& SubsystemConfigurationMT::getObjectState() const {
  return getObjectState_();
}

uci::type::ObjectStateEnum& SubsystemConfigurationMT::getObjectState() {
  return getObjectState_();
}

uci::type::SubsystemConfigurationMT& SubsystemConfigurationMT::setObjectState(const uci::type::ObjectStateEnum& accessor) {
  enableObjectState();
  if (&accessor != objectState_Accessor.get()) {
    objectState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::SubsystemConfigurationMT& SubsystemConfigurationMT::setObjectState(const uci::type::ObjectStateEnum::EnumerationItem value) {
  enableObjectState().setValue(value);
  return *this;
}

bool SubsystemConfigurationMT::hasObjectState() const noexcept {
  return static_cast<bool>(objectState_Accessor);
}

uci::type::ObjectStateEnum& SubsystemConfigurationMT::enableObjectState(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::objectStateEnum : type};
  if ((!objectState_Accessor) || (objectState_Accessor->getAccessorType() != requestedType)) {
    objectState_Accessor = ObjectStateEnum::create(requestedType);
    if (!objectState_Accessor) {
      throw uci::base::UCIException("Error in enableObjectState(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *objectState_Accessor;
}

uci::type::SubsystemConfigurationMT& SubsystemConfigurationMT::clearObjectState() noexcept {
  objectState_Accessor.reset();
  return *this;
}

const uci::type::SubsystemConfigurationMDT& SubsystemConfigurationMT::getMessageData() const {
  return *messageData_Accessor;
}

uci::type::SubsystemConfigurationMDT& SubsystemConfigurationMT::getMessageData() {
  return *messageData_Accessor;
}

uci::type::SubsystemConfigurationMT& SubsystemConfigurationMT::setMessageData(const uci::type::SubsystemConfigurationMDT& accessor) {
  if (&accessor != messageData_Accessor.get()) {
    messageData_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<SubsystemConfigurationMT> SubsystemConfigurationMT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::subsystemConfigurationMT : type};
  return (requestedType == uci::type::accessorType::subsystemConfigurationMT) ? boost::make_unique<SubsystemConfigurationMT>() : nullptr;
}

/**  */
namespace SubsystemConfigurationMT_Names {

constexpr const char* Extern_Top_Type_Name{"SubsystemConfiguration"};
constexpr const char* Extern_Type_Name{"SubsystemConfigurationMT"};
constexpr const char* ObjectState_Name{"ObjectState"};
constexpr const char* MessageData_Name{"MessageData"};

} // namespace SubsystemConfigurationMT_Names

void SubsystemConfigurationMT::deserialize(const boost::property_tree::ptree& propTree, uci::type::SubsystemConfigurationMT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = (topLevel ? SubsystemConfigurationMT_Names::Extern_Top_Type_Name : SubsystemConfigurationMT_Names::Extern_Type_Name);
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SubsystemConfigurationMT_Names::ObjectState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableObjectState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + SubsystemConfigurationMT_Names::MessageData_Name) {
      SubsystemConfigurationMDT::deserialize(valueType.second, accessor.getMessageData(), nodeName, nsPrefix);
    }
  }
  MessageType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string SubsystemConfigurationMT::serialize(const uci::type::SubsystemConfigurationMT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool topLevel) {
  std::string generatedNodeName{(nodeName.empty() ? (topLevel ? SubsystemConfigurationMT_Names::Extern_Top_Type_Name : SubsystemConfigurationMT_Names::Extern_Type_Name) : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, (topLevel ? SubsystemConfigurationMT_Names::Extern_Top_Type_Name : SubsystemConfigurationMT_Names::Extern_Type_Name));
  }
  MessageType::serialize(accessor, node, "", false, false, false);
  if (accessor.hasObjectState()) {
    ObjectStateEnum::serialize(accessor.getObjectState(), node, SubsystemConfigurationMT_Names::ObjectState_Name, false);
  }
  SubsystemConfigurationMDT::serialize(accessor.getMessageData(), node, SubsystemConfigurationMT_Names::MessageData_Name);
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

uci::type::SubsystemConfigurationMT& SubsystemConfigurationMT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SubsystemConfigurationMT>().release());
}

uci::type::SubsystemConfigurationMT& SubsystemConfigurationMT::create(const uci::type::SubsystemConfigurationMT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SubsystemConfigurationMT> newAccessor{boost::make_unique<asb_uci::type::SubsystemConfigurationMT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SubsystemConfigurationMT::destroy(uci::type::SubsystemConfigurationMT& accessor) {
  delete dynamic_cast<asb_uci::type::SubsystemConfigurationMT*>(&accessor);
}

SubsystemConfigurationMT::Reader& SubsystemConfigurationMT::createReader(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Reader<SubsystemConfigurationMT, asb_uci::type::SubsystemConfigurationMT>> reader{boost::make_unique<asb_uci::base::Reader<SubsystemConfigurationMT, asb_uci::type::SubsystemConfigurationMT>>(topic, abstractServiceBusConnection)};
  reader->init();
  return *(reader.release());
}

void SubsystemConfigurationMT::destroyReader(SubsystemConfigurationMT::Reader& reader) {
  delete dynamic_cast<asb_uci::base::Reader<SubsystemConfigurationMT, asb_uci::type::SubsystemConfigurationMT>*>(&reader);
}

SubsystemConfigurationMT::Writer& SubsystemConfigurationMT::createWriter(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Writer<SubsystemConfigurationMT, asb_uci::type::SubsystemConfigurationMT>> writer{boost::make_unique<asb_uci::base::Writer<SubsystemConfigurationMT, asb_uci::type::SubsystemConfigurationMT>>(topic, abstractServiceBusConnection)};
  writer->init();
  return *(writer.release());
}

void SubsystemConfigurationMT::destroyWriter(SubsystemConfigurationMT::Writer& writer) {
  delete dynamic_cast<asb_uci::base::Writer<SubsystemConfigurationMT, asb_uci::type::SubsystemConfigurationMT>*>(&writer);
}

} // namespace type

} // namespace uci

