/** @file WorkingEOB_RequestStatusMT.cpp
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

#include "../../../include/asb_uci/type/WorkingEOB_RequestStatusMT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/base/Reader.h"
#include "../../../include/asb_uci/base/Writer.h"
#include "../../../include/asb_uci/type/MessageType.h"
#include "../../../include/asb_uci/type/WorkingEOB_RequestStatusMDT.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/WorkingEOB_RequestStatusMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/WorkingEOB_RequestStatusMT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

WorkingEOB_RequestStatusMT::WorkingEOB_RequestStatusMT()
  : messageData_Accessor{boost::make_unique<WorkingEOB_RequestStatusMDT>()} {
}

WorkingEOB_RequestStatusMT::~WorkingEOB_RequestStatusMT() = default;

void WorkingEOB_RequestStatusMT::copy(const uci::type::WorkingEOB_RequestStatusMT& accessor) {
  copyImpl(accessor, false);
}

void WorkingEOB_RequestStatusMT::copyImpl(const uci::type::WorkingEOB_RequestStatusMT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    MessageType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const WorkingEOB_RequestStatusMT&>(accessor);
    setMessageData(*(accessorImpl.messageData_Accessor));
  }
}

void WorkingEOB_RequestStatusMT::reset() noexcept {
  MessageType::reset();
  messageData_Accessor->reset();
}

const uci::type::WorkingEOB_RequestStatusMDT& WorkingEOB_RequestStatusMT::getMessageData() const {
  return *messageData_Accessor;
}

uci::type::WorkingEOB_RequestStatusMDT& WorkingEOB_RequestStatusMT::getMessageData() {
  return *messageData_Accessor;
}

uci::type::WorkingEOB_RequestStatusMT& WorkingEOB_RequestStatusMT::setMessageData(const uci::type::WorkingEOB_RequestStatusMDT& accessor) {
  if (&accessor != messageData_Accessor.get()) {
    messageData_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<WorkingEOB_RequestStatusMT> WorkingEOB_RequestStatusMT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::workingEOB_RequestStatusMT : type};
  return (requestedType == uci::type::accessorType::workingEOB_RequestStatusMT) ? boost::make_unique<WorkingEOB_RequestStatusMT>() : nullptr;
}

/**  */
namespace WorkingEOB_RequestStatusMT_Names {

constexpr const char* Extern_Top_Type_Name{"WorkingEOB_RequestStatus"};
constexpr const char* Extern_Type_Name{"WorkingEOB_RequestStatusMT"};
constexpr const char* MessageData_Name{"MessageData"};

} // namespace WorkingEOB_RequestStatusMT_Names

void WorkingEOB_RequestStatusMT::deserialize(const boost::property_tree::ptree& propTree, uci::type::WorkingEOB_RequestStatusMT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = (topLevel ? WorkingEOB_RequestStatusMT_Names::Extern_Top_Type_Name : WorkingEOB_RequestStatusMT_Names::Extern_Type_Name);
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + WorkingEOB_RequestStatusMT_Names::MessageData_Name) {
      WorkingEOB_RequestStatusMDT::deserialize(valueType.second, accessor.getMessageData(), nodeName, nsPrefix);
    }
  }
  MessageType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string WorkingEOB_RequestStatusMT::serialize(const uci::type::WorkingEOB_RequestStatusMT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool topLevel) {
  std::string generatedNodeName{(nodeName.empty() ? (topLevel ? WorkingEOB_RequestStatusMT_Names::Extern_Top_Type_Name : WorkingEOB_RequestStatusMT_Names::Extern_Type_Name) : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, (topLevel ? WorkingEOB_RequestStatusMT_Names::Extern_Top_Type_Name : WorkingEOB_RequestStatusMT_Names::Extern_Type_Name));
  }
  MessageType::serialize(accessor, node, "", false, false, false);
  WorkingEOB_RequestStatusMDT::serialize(accessor.getMessageData(), node, WorkingEOB_RequestStatusMT_Names::MessageData_Name);
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

uci::type::WorkingEOB_RequestStatusMT& WorkingEOB_RequestStatusMT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::WorkingEOB_RequestStatusMT>().release());
}

uci::type::WorkingEOB_RequestStatusMT& WorkingEOB_RequestStatusMT::create(const uci::type::WorkingEOB_RequestStatusMT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::WorkingEOB_RequestStatusMT> newAccessor{boost::make_unique<asb_uci::type::WorkingEOB_RequestStatusMT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void WorkingEOB_RequestStatusMT::destroy(uci::type::WorkingEOB_RequestStatusMT& accessor) {
  delete dynamic_cast<asb_uci::type::WorkingEOB_RequestStatusMT*>(&accessor);
}

WorkingEOB_RequestStatusMT::Reader& WorkingEOB_RequestStatusMT::createReader(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Reader<WorkingEOB_RequestStatusMT, asb_uci::type::WorkingEOB_RequestStatusMT>> reader{boost::make_unique<asb_uci::base::Reader<WorkingEOB_RequestStatusMT, asb_uci::type::WorkingEOB_RequestStatusMT>>(topic, abstractServiceBusConnection)};
  reader->init();
  return *(reader.release());
}

void WorkingEOB_RequestStatusMT::destroyReader(WorkingEOB_RequestStatusMT::Reader& reader) {
  delete dynamic_cast<asb_uci::base::Reader<WorkingEOB_RequestStatusMT, asb_uci::type::WorkingEOB_RequestStatusMT>*>(&reader);
}

WorkingEOB_RequestStatusMT::Writer& WorkingEOB_RequestStatusMT::createWriter(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Writer<WorkingEOB_RequestStatusMT, asb_uci::type::WorkingEOB_RequestStatusMT>> writer{boost::make_unique<asb_uci::base::Writer<WorkingEOB_RequestStatusMT, asb_uci::type::WorkingEOB_RequestStatusMT>>(topic, abstractServiceBusConnection)};
  writer->init();
  return *(writer.release());
}

void WorkingEOB_RequestStatusMT::destroyWriter(WorkingEOB_RequestStatusMT::Writer& writer) {
  delete dynamic_cast<asb_uci::base::Writer<WorkingEOB_RequestStatusMT, asb_uci::type::WorkingEOB_RequestStatusMT>*>(&writer);
}

} // namespace type

} // namespace uci

