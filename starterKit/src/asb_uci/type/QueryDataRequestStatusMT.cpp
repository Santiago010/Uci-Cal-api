/** @file QueryDataRequestStatusMT.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:14 PM
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

#include "../../../include/asb_uci/type/QueryDataRequestStatusMT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/base/Reader.h"
#include "../../../include/asb_uci/base/Writer.h"
#include "../../../include/asb_uci/type/MessageType.h"
#include "../../../include/asb_uci/type/QueryDataRequestStatusMDT.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/QueryDataRequestStatusMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/QueryDataRequestStatusMT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

QueryDataRequestStatusMT::QueryDataRequestStatusMT()
  : messageData_Accessor{boost::make_unique<QueryDataRequestStatusMDT>()} {
}

QueryDataRequestStatusMT::~QueryDataRequestStatusMT() = default;

void QueryDataRequestStatusMT::copy(const uci::type::QueryDataRequestStatusMT& accessor) {
  copyImpl(accessor, false);
}

void QueryDataRequestStatusMT::copyImpl(const uci::type::QueryDataRequestStatusMT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    MessageType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const QueryDataRequestStatusMT&>(accessor);
    setMessageData(*(accessorImpl.messageData_Accessor));
  }
}

void QueryDataRequestStatusMT::reset() noexcept {
  MessageType::reset();
  messageData_Accessor->reset();
}

const uci::type::QueryDataRequestStatusMDT& QueryDataRequestStatusMT::getMessageData() const {
  return *messageData_Accessor;
}

uci::type::QueryDataRequestStatusMDT& QueryDataRequestStatusMT::getMessageData() {
  return *messageData_Accessor;
}

uci::type::QueryDataRequestStatusMT& QueryDataRequestStatusMT::setMessageData(const uci::type::QueryDataRequestStatusMDT& accessor) {
  if (&accessor != messageData_Accessor.get()) {
    messageData_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<QueryDataRequestStatusMT> QueryDataRequestStatusMT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::queryDataRequestStatusMT : type};
  return (requestedType == uci::type::accessorType::queryDataRequestStatusMT) ? boost::make_unique<QueryDataRequestStatusMT>() : nullptr;
}

/**  */
namespace QueryDataRequestStatusMT_Names {

constexpr const char* Extern_Top_Type_Name{"QueryDataRequestStatus"};
constexpr const char* Extern_Type_Name{"QueryDataRequestStatusMT"};
constexpr const char* MessageData_Name{"MessageData"};

} // namespace QueryDataRequestStatusMT_Names

void QueryDataRequestStatusMT::deserialize(const boost::property_tree::ptree& propTree, uci::type::QueryDataRequestStatusMT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = (topLevel ? QueryDataRequestStatusMT_Names::Extern_Top_Type_Name : QueryDataRequestStatusMT_Names::Extern_Type_Name);
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + QueryDataRequestStatusMT_Names::MessageData_Name) {
      QueryDataRequestStatusMDT::deserialize(valueType.second, accessor.getMessageData(), nodeName, nsPrefix);
    }
  }
  MessageType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string QueryDataRequestStatusMT::serialize(const uci::type::QueryDataRequestStatusMT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool topLevel) {
  std::string generatedNodeName{(nodeName.empty() ? (topLevel ? QueryDataRequestStatusMT_Names::Extern_Top_Type_Name : QueryDataRequestStatusMT_Names::Extern_Type_Name) : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, (topLevel ? QueryDataRequestStatusMT_Names::Extern_Top_Type_Name : QueryDataRequestStatusMT_Names::Extern_Type_Name));
  }
  MessageType::serialize(accessor, node, "", false, false, false);
  QueryDataRequestStatusMDT::serialize(accessor.getMessageData(), node, QueryDataRequestStatusMT_Names::MessageData_Name);
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

uci::type::QueryDataRequestStatusMT& QueryDataRequestStatusMT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::QueryDataRequestStatusMT>().release());
}

uci::type::QueryDataRequestStatusMT& QueryDataRequestStatusMT::create(const uci::type::QueryDataRequestStatusMT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::QueryDataRequestStatusMT> newAccessor{boost::make_unique<asb_uci::type::QueryDataRequestStatusMT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void QueryDataRequestStatusMT::destroy(uci::type::QueryDataRequestStatusMT& accessor) {
  delete dynamic_cast<asb_uci::type::QueryDataRequestStatusMT*>(&accessor);
}

QueryDataRequestStatusMT::Reader& QueryDataRequestStatusMT::createReader(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Reader<QueryDataRequestStatusMT, asb_uci::type::QueryDataRequestStatusMT>> reader{boost::make_unique<asb_uci::base::Reader<QueryDataRequestStatusMT, asb_uci::type::QueryDataRequestStatusMT>>(topic, abstractServiceBusConnection)};
  reader->init();
  return *(reader.release());
}

void QueryDataRequestStatusMT::destroyReader(QueryDataRequestStatusMT::Reader& reader) {
  delete dynamic_cast<asb_uci::base::Reader<QueryDataRequestStatusMT, asb_uci::type::QueryDataRequestStatusMT>*>(&reader);
}

QueryDataRequestStatusMT::Writer& QueryDataRequestStatusMT::createWriter(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Writer<QueryDataRequestStatusMT, asb_uci::type::QueryDataRequestStatusMT>> writer{boost::make_unique<asb_uci::base::Writer<QueryDataRequestStatusMT, asb_uci::type::QueryDataRequestStatusMT>>(topic, abstractServiceBusConnection)};
  writer->init();
  return *(writer.release());
}

void QueryDataRequestStatusMT::destroyWriter(QueryDataRequestStatusMT::Writer& writer) {
  delete dynamic_cast<asb_uci::base::Writer<QueryDataRequestStatusMT, asb_uci::type::QueryDataRequestStatusMT>*>(&writer);
}

} // namespace type

} // namespace uci

