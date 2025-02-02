/** @file ESM_CommandStatusMT.cpp
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

#include "../../../include/asb_uci/type/ESM_CommandStatusMT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/base/Reader.h"
#include "../../../include/asb_uci/base/Writer.h"
#include "../../../include/asb_uci/type/ESM_CommandStatusMDT.h"
#include "../../../include/asb_uci/type/MessageType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ESM_CommandStatusMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ESM_CommandStatusMT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ESM_CommandStatusMT::ESM_CommandStatusMT()
  : messageData_Accessor{boost::make_unique<ESM_CommandStatusMDT>()} {
}

ESM_CommandStatusMT::~ESM_CommandStatusMT() = default;

void ESM_CommandStatusMT::copy(const uci::type::ESM_CommandStatusMT& accessor) {
  copyImpl(accessor, false);
}

void ESM_CommandStatusMT::copyImpl(const uci::type::ESM_CommandStatusMT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    MessageType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const ESM_CommandStatusMT&>(accessor);
    setMessageData(*(accessorImpl.messageData_Accessor));
  }
}

void ESM_CommandStatusMT::reset() noexcept {
  MessageType::reset();
  messageData_Accessor->reset();
}

const uci::type::ESM_CommandStatusMDT& ESM_CommandStatusMT::getMessageData() const {
  return *messageData_Accessor;
}

uci::type::ESM_CommandStatusMDT& ESM_CommandStatusMT::getMessageData() {
  return *messageData_Accessor;
}

uci::type::ESM_CommandStatusMT& ESM_CommandStatusMT::setMessageData(const uci::type::ESM_CommandStatusMDT& accessor) {
  if (&accessor != messageData_Accessor.get()) {
    messageData_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<ESM_CommandStatusMT> ESM_CommandStatusMT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::eSM_CommandStatusMT : type};
  return (requestedType == uci::type::accessorType::eSM_CommandStatusMT) ? boost::make_unique<ESM_CommandStatusMT>() : nullptr;
}

/**  */
namespace ESM_CommandStatusMT_Names {

constexpr const char* Extern_Top_Type_Name{"ESM_CommandStatus"};
constexpr const char* Extern_Type_Name{"ESM_CommandStatusMT"};
constexpr const char* MessageData_Name{"MessageData"};

} // namespace ESM_CommandStatusMT_Names

void ESM_CommandStatusMT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ESM_CommandStatusMT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = (topLevel ? ESM_CommandStatusMT_Names::Extern_Top_Type_Name : ESM_CommandStatusMT_Names::Extern_Type_Name);
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ESM_CommandStatusMT_Names::MessageData_Name) {
      ESM_CommandStatusMDT::deserialize(valueType.second, accessor.getMessageData(), nodeName, nsPrefix);
    }
  }
  MessageType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string ESM_CommandStatusMT::serialize(const uci::type::ESM_CommandStatusMT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool topLevel) {
  std::string generatedNodeName{(nodeName.empty() ? (topLevel ? ESM_CommandStatusMT_Names::Extern_Top_Type_Name : ESM_CommandStatusMT_Names::Extern_Type_Name) : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, (topLevel ? ESM_CommandStatusMT_Names::Extern_Top_Type_Name : ESM_CommandStatusMT_Names::Extern_Type_Name));
  }
  MessageType::serialize(accessor, node, "", false, false, false);
  ESM_CommandStatusMDT::serialize(accessor.getMessageData(), node, ESM_CommandStatusMT_Names::MessageData_Name);
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

uci::type::ESM_CommandStatusMT& ESM_CommandStatusMT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ESM_CommandStatusMT>().release());
}

uci::type::ESM_CommandStatusMT& ESM_CommandStatusMT::create(const uci::type::ESM_CommandStatusMT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ESM_CommandStatusMT> newAccessor{boost::make_unique<asb_uci::type::ESM_CommandStatusMT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ESM_CommandStatusMT::destroy(uci::type::ESM_CommandStatusMT& accessor) {
  delete dynamic_cast<asb_uci::type::ESM_CommandStatusMT*>(&accessor);
}

ESM_CommandStatusMT::Reader& ESM_CommandStatusMT::createReader(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Reader<ESM_CommandStatusMT, asb_uci::type::ESM_CommandStatusMT>> reader{boost::make_unique<asb_uci::base::Reader<ESM_CommandStatusMT, asb_uci::type::ESM_CommandStatusMT>>(topic, abstractServiceBusConnection)};
  reader->init();
  return *(reader.release());
}

void ESM_CommandStatusMT::destroyReader(ESM_CommandStatusMT::Reader& reader) {
  delete dynamic_cast<asb_uci::base::Reader<ESM_CommandStatusMT, asb_uci::type::ESM_CommandStatusMT>*>(&reader);
}

ESM_CommandStatusMT::Writer& ESM_CommandStatusMT::createWriter(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Writer<ESM_CommandStatusMT, asb_uci::type::ESM_CommandStatusMT>> writer{boost::make_unique<asb_uci::base::Writer<ESM_CommandStatusMT, asb_uci::type::ESM_CommandStatusMT>>(topic, abstractServiceBusConnection)};
  writer->init();
  return *(writer.release());
}

void ESM_CommandStatusMT::destroyWriter(ESM_CommandStatusMT::Writer& writer) {
  delete dynamic_cast<asb_uci::base::Writer<ESM_CommandStatusMT, asb_uci::type::ESM_CommandStatusMT>*>(&writer);
}

} // namespace type

} // namespace uci

