/** @file ComponentConfigurationDataRequestMT.cpp
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

#include "../../../include/asb_uci/type/ComponentConfigurationDataRequestMT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/base/Reader.h"
#include "../../../include/asb_uci/base/Writer.h"
#include "../../../include/asb_uci/type/ComponentConfigurationDataRequestMDT.h"
#include "../../../include/asb_uci/type/MessageType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ComponentConfigurationDataRequestMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ComponentConfigurationDataRequestMT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ComponentConfigurationDataRequestMT::ComponentConfigurationDataRequestMT()
  : messageData_Accessor{boost::make_unique<ComponentConfigurationDataRequestMDT>()} {
}

ComponentConfigurationDataRequestMT::~ComponentConfigurationDataRequestMT() = default;

void ComponentConfigurationDataRequestMT::copy(const uci::type::ComponentConfigurationDataRequestMT& accessor) {
  copyImpl(accessor, false);
}

void ComponentConfigurationDataRequestMT::copyImpl(const uci::type::ComponentConfigurationDataRequestMT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    MessageType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const ComponentConfigurationDataRequestMT&>(accessor);
    setMessageData(*(accessorImpl.messageData_Accessor));
  }
}

void ComponentConfigurationDataRequestMT::reset() noexcept {
  MessageType::reset();
  messageData_Accessor->reset();
}

const uci::type::ComponentConfigurationDataRequestMDT& ComponentConfigurationDataRequestMT::getMessageData() const {
  return *messageData_Accessor;
}

uci::type::ComponentConfigurationDataRequestMDT& ComponentConfigurationDataRequestMT::getMessageData() {
  return *messageData_Accessor;
}

uci::type::ComponentConfigurationDataRequestMT& ComponentConfigurationDataRequestMT::setMessageData(const uci::type::ComponentConfigurationDataRequestMDT& accessor) {
  if (&accessor != messageData_Accessor.get()) {
    messageData_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<ComponentConfigurationDataRequestMT> ComponentConfigurationDataRequestMT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::componentConfigurationDataRequestMT : type};
  return (requestedType == uci::type::accessorType::componentConfigurationDataRequestMT) ? boost::make_unique<ComponentConfigurationDataRequestMT>() : nullptr;
}

/**  */
namespace ComponentConfigurationDataRequestMT_Names {

constexpr const char* Extern_Top_Type_Name{"ComponentConfigurationDataRequest"};
constexpr const char* Extern_Type_Name{"ComponentConfigurationDataRequestMT"};
constexpr const char* MessageData_Name{"MessageData"};

} // namespace ComponentConfigurationDataRequestMT_Names

void ComponentConfigurationDataRequestMT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ComponentConfigurationDataRequestMT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = (topLevel ? ComponentConfigurationDataRequestMT_Names::Extern_Top_Type_Name : ComponentConfigurationDataRequestMT_Names::Extern_Type_Name);
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ComponentConfigurationDataRequestMT_Names::MessageData_Name) {
      ComponentConfigurationDataRequestMDT::deserialize(valueType.second, accessor.getMessageData(), nodeName, nsPrefix);
    }
  }
  MessageType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string ComponentConfigurationDataRequestMT::serialize(const uci::type::ComponentConfigurationDataRequestMT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool topLevel) {
  std::string generatedNodeName{(nodeName.empty() ? (topLevel ? ComponentConfigurationDataRequestMT_Names::Extern_Top_Type_Name : ComponentConfigurationDataRequestMT_Names::Extern_Type_Name) : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, (topLevel ? ComponentConfigurationDataRequestMT_Names::Extern_Top_Type_Name : ComponentConfigurationDataRequestMT_Names::Extern_Type_Name));
  }
  MessageType::serialize(accessor, node, "", false, false, false);
  ComponentConfigurationDataRequestMDT::serialize(accessor.getMessageData(), node, ComponentConfigurationDataRequestMT_Names::MessageData_Name);
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

uci::type::ComponentConfigurationDataRequestMT& ComponentConfigurationDataRequestMT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ComponentConfigurationDataRequestMT>().release());
}

uci::type::ComponentConfigurationDataRequestMT& ComponentConfigurationDataRequestMT::create(const uci::type::ComponentConfigurationDataRequestMT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ComponentConfigurationDataRequestMT> newAccessor{boost::make_unique<asb_uci::type::ComponentConfigurationDataRequestMT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ComponentConfigurationDataRequestMT::destroy(uci::type::ComponentConfigurationDataRequestMT& accessor) {
  delete dynamic_cast<asb_uci::type::ComponentConfigurationDataRequestMT*>(&accessor);
}

ComponentConfigurationDataRequestMT::Reader& ComponentConfigurationDataRequestMT::createReader(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Reader<ComponentConfigurationDataRequestMT, asb_uci::type::ComponentConfigurationDataRequestMT>> reader{boost::make_unique<asb_uci::base::Reader<ComponentConfigurationDataRequestMT, asb_uci::type::ComponentConfigurationDataRequestMT>>(topic, abstractServiceBusConnection)};
  reader->init();
  return *(reader.release());
}

void ComponentConfigurationDataRequestMT::destroyReader(ComponentConfigurationDataRequestMT::Reader& reader) {
  delete dynamic_cast<asb_uci::base::Reader<ComponentConfigurationDataRequestMT, asb_uci::type::ComponentConfigurationDataRequestMT>*>(&reader);
}

ComponentConfigurationDataRequestMT::Writer& ComponentConfigurationDataRequestMT::createWriter(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Writer<ComponentConfigurationDataRequestMT, asb_uci::type::ComponentConfigurationDataRequestMT>> writer{boost::make_unique<asb_uci::base::Writer<ComponentConfigurationDataRequestMT, asb_uci::type::ComponentConfigurationDataRequestMT>>(topic, abstractServiceBusConnection)};
  writer->init();
  return *(writer.release());
}

void ComponentConfigurationDataRequestMT::destroyWriter(ComponentConfigurationDataRequestMT::Writer& writer) {
  delete dynamic_cast<asb_uci::base::Writer<ComponentConfigurationDataRequestMT, asb_uci::type::ComponentConfigurationDataRequestMT>*>(&writer);
}

} // namespace type

} // namespace uci

