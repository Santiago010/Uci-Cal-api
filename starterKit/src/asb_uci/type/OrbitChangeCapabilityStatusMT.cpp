/** @file OrbitChangeCapabilityStatusMT.cpp
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

#include "../../../include/asb_uci/type/OrbitChangeCapabilityStatusMT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/base/Reader.h"
#include "../../../include/asb_uci/base/Writer.h"
#include "../../../include/asb_uci/type/MessageType.h"
#include "../../../include/asb_uci/type/OrbitChangeCapabilityStatusMDT.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitChangeCapabilityStatusMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitChangeCapabilityStatusMT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OrbitChangeCapabilityStatusMT::OrbitChangeCapabilityStatusMT()
  : messageData_Accessor{boost::make_unique<OrbitChangeCapabilityStatusMDT>()} {
}

OrbitChangeCapabilityStatusMT::~OrbitChangeCapabilityStatusMT() = default;

void OrbitChangeCapabilityStatusMT::copy(const uci::type::OrbitChangeCapabilityStatusMT& accessor) {
  copyImpl(accessor, false);
}

void OrbitChangeCapabilityStatusMT::copyImpl(const uci::type::OrbitChangeCapabilityStatusMT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    MessageType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const OrbitChangeCapabilityStatusMT&>(accessor);
    setMessageData(*(accessorImpl.messageData_Accessor));
  }
}

void OrbitChangeCapabilityStatusMT::reset() noexcept {
  MessageType::reset();
  messageData_Accessor->reset();
}

const uci::type::OrbitChangeCapabilityStatusMDT& OrbitChangeCapabilityStatusMT::getMessageData() const {
  return *messageData_Accessor;
}

uci::type::OrbitChangeCapabilityStatusMDT& OrbitChangeCapabilityStatusMT::getMessageData() {
  return *messageData_Accessor;
}

uci::type::OrbitChangeCapabilityStatusMT& OrbitChangeCapabilityStatusMT::setMessageData(const uci::type::OrbitChangeCapabilityStatusMDT& accessor) {
  if (&accessor != messageData_Accessor.get()) {
    messageData_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<OrbitChangeCapabilityStatusMT> OrbitChangeCapabilityStatusMT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitChangeCapabilityStatusMT : type};
  return (requestedType == uci::type::accessorType::orbitChangeCapabilityStatusMT) ? boost::make_unique<OrbitChangeCapabilityStatusMT>() : nullptr;
}

/**  */
namespace OrbitChangeCapabilityStatusMT_Names {

constexpr const char* Extern_Top_Type_Name{"OrbitChangeCapabilityStatus"};
constexpr const char* Extern_Type_Name{"OrbitChangeCapabilityStatusMT"};
constexpr const char* MessageData_Name{"MessageData"};

} // namespace OrbitChangeCapabilityStatusMT_Names

void OrbitChangeCapabilityStatusMT::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitChangeCapabilityStatusMT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = (topLevel ? OrbitChangeCapabilityStatusMT_Names::Extern_Top_Type_Name : OrbitChangeCapabilityStatusMT_Names::Extern_Type_Name);
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitChangeCapabilityStatusMT_Names::MessageData_Name) {
      OrbitChangeCapabilityStatusMDT::deserialize(valueType.second, accessor.getMessageData(), nodeName, nsPrefix);
    }
  }
  MessageType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string OrbitChangeCapabilityStatusMT::serialize(const uci::type::OrbitChangeCapabilityStatusMT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool topLevel) {
  std::string generatedNodeName{(nodeName.empty() ? (topLevel ? OrbitChangeCapabilityStatusMT_Names::Extern_Top_Type_Name : OrbitChangeCapabilityStatusMT_Names::Extern_Type_Name) : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, (topLevel ? OrbitChangeCapabilityStatusMT_Names::Extern_Top_Type_Name : OrbitChangeCapabilityStatusMT_Names::Extern_Type_Name));
  }
  MessageType::serialize(accessor, node, "", false, false, false);
  OrbitChangeCapabilityStatusMDT::serialize(accessor.getMessageData(), node, OrbitChangeCapabilityStatusMT_Names::MessageData_Name);
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

uci::type::OrbitChangeCapabilityStatusMT& OrbitChangeCapabilityStatusMT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OrbitChangeCapabilityStatusMT>().release());
}

uci::type::OrbitChangeCapabilityStatusMT& OrbitChangeCapabilityStatusMT::create(const uci::type::OrbitChangeCapabilityStatusMT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OrbitChangeCapabilityStatusMT> newAccessor{boost::make_unique<asb_uci::type::OrbitChangeCapabilityStatusMT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OrbitChangeCapabilityStatusMT::destroy(uci::type::OrbitChangeCapabilityStatusMT& accessor) {
  delete dynamic_cast<asb_uci::type::OrbitChangeCapabilityStatusMT*>(&accessor);
}

OrbitChangeCapabilityStatusMT::Reader& OrbitChangeCapabilityStatusMT::createReader(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Reader<OrbitChangeCapabilityStatusMT, asb_uci::type::OrbitChangeCapabilityStatusMT>> reader{boost::make_unique<asb_uci::base::Reader<OrbitChangeCapabilityStatusMT, asb_uci::type::OrbitChangeCapabilityStatusMT>>(topic, abstractServiceBusConnection)};
  reader->init();
  return *(reader.release());
}

void OrbitChangeCapabilityStatusMT::destroyReader(OrbitChangeCapabilityStatusMT::Reader& reader) {
  delete dynamic_cast<asb_uci::base::Reader<OrbitChangeCapabilityStatusMT, asb_uci::type::OrbitChangeCapabilityStatusMT>*>(&reader);
}

OrbitChangeCapabilityStatusMT::Writer& OrbitChangeCapabilityStatusMT::createWriter(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Writer<OrbitChangeCapabilityStatusMT, asb_uci::type::OrbitChangeCapabilityStatusMT>> writer{boost::make_unique<asb_uci::base::Writer<OrbitChangeCapabilityStatusMT, asb_uci::type::OrbitChangeCapabilityStatusMT>>(topic, abstractServiceBusConnection)};
  writer->init();
  return *(writer.release());
}

void OrbitChangeCapabilityStatusMT::destroyWriter(OrbitChangeCapabilityStatusMT::Writer& writer) {
  delete dynamic_cast<asb_uci::base::Writer<OrbitChangeCapabilityStatusMT, asb_uci::type::OrbitChangeCapabilityStatusMT>*>(&writer);
}

} // namespace type

} // namespace uci

