/** @file EffectStatusMT.cpp
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

#include "../../../include/asb_uci/type/EffectStatusMT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/base/Reader.h"
#include "../../../include/asb_uci/base/Writer.h"
#include "../../../include/asb_uci/type/EffectStatusMDT.h"
#include "../../../include/asb_uci/type/MessageType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EffectStatusMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EffectStatusMT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

EffectStatusMT::EffectStatusMT()
  : messageData_Accessor{boost::make_unique<EffectStatusMDT>()} {
}

EffectStatusMT::~EffectStatusMT() = default;

void EffectStatusMT::copy(const uci::type::EffectStatusMT& accessor) {
  copyImpl(accessor, false);
}

void EffectStatusMT::copyImpl(const uci::type::EffectStatusMT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    MessageType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const EffectStatusMT&>(accessor);
    setMessageData(*(accessorImpl.messageData_Accessor));
  }
}

void EffectStatusMT::reset() noexcept {
  MessageType::reset();
  messageData_Accessor->reset();
}

const uci::type::EffectStatusMDT& EffectStatusMT::getMessageData() const {
  return *messageData_Accessor;
}

uci::type::EffectStatusMDT& EffectStatusMT::getMessageData() {
  return *messageData_Accessor;
}

uci::type::EffectStatusMT& EffectStatusMT::setMessageData(const uci::type::EffectStatusMDT& accessor) {
  if (&accessor != messageData_Accessor.get()) {
    messageData_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<EffectStatusMT> EffectStatusMT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::effectStatusMT : type};
  return (requestedType == uci::type::accessorType::effectStatusMT) ? boost::make_unique<EffectStatusMT>() : nullptr;
}

/**  */
namespace EffectStatusMT_Names {

constexpr const char* Extern_Top_Type_Name{"EffectStatus"};
constexpr const char* Extern_Type_Name{"EffectStatusMT"};
constexpr const char* MessageData_Name{"MessageData"};

} // namespace EffectStatusMT_Names

void EffectStatusMT::deserialize(const boost::property_tree::ptree& propTree, uci::type::EffectStatusMT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = (topLevel ? EffectStatusMT_Names::Extern_Top_Type_Name : EffectStatusMT_Names::Extern_Type_Name);
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + EffectStatusMT_Names::MessageData_Name) {
      EffectStatusMDT::deserialize(valueType.second, accessor.getMessageData(), nodeName, nsPrefix);
    }
  }
  MessageType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string EffectStatusMT::serialize(const uci::type::EffectStatusMT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool topLevel) {
  std::string generatedNodeName{(nodeName.empty() ? (topLevel ? EffectStatusMT_Names::Extern_Top_Type_Name : EffectStatusMT_Names::Extern_Type_Name) : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, (topLevel ? EffectStatusMT_Names::Extern_Top_Type_Name : EffectStatusMT_Names::Extern_Type_Name));
  }
  MessageType::serialize(accessor, node, "", false, false, false);
  EffectStatusMDT::serialize(accessor.getMessageData(), node, EffectStatusMT_Names::MessageData_Name);
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

uci::type::EffectStatusMT& EffectStatusMT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::EffectStatusMT>().release());
}

uci::type::EffectStatusMT& EffectStatusMT::create(const uci::type::EffectStatusMT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::EffectStatusMT> newAccessor{boost::make_unique<asb_uci::type::EffectStatusMT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void EffectStatusMT::destroy(uci::type::EffectStatusMT& accessor) {
  delete dynamic_cast<asb_uci::type::EffectStatusMT*>(&accessor);
}

EffectStatusMT::Reader& EffectStatusMT::createReader(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Reader<EffectStatusMT, asb_uci::type::EffectStatusMT>> reader{boost::make_unique<asb_uci::base::Reader<EffectStatusMT, asb_uci::type::EffectStatusMT>>(topic, abstractServiceBusConnection)};
  reader->init();
  return *(reader.release());
}

void EffectStatusMT::destroyReader(EffectStatusMT::Reader& reader) {
  delete dynamic_cast<asb_uci::base::Reader<EffectStatusMT, asb_uci::type::EffectStatusMT>*>(&reader);
}

EffectStatusMT::Writer& EffectStatusMT::createWriter(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Writer<EffectStatusMT, asb_uci::type::EffectStatusMT>> writer{boost::make_unique<asb_uci::base::Writer<EffectStatusMT, asb_uci::type::EffectStatusMT>>(topic, abstractServiceBusConnection)};
  writer->init();
  return *(writer.release());
}

void EffectStatusMT::destroyWriter(EffectStatusMT::Writer& writer) {
  delete dynamic_cast<asb_uci::base::Writer<EffectStatusMT, asb_uci::type::EffectStatusMT>*>(&writer);
}

} // namespace type

} // namespace uci

