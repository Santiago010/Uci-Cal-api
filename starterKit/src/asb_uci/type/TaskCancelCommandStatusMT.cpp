/** @file TaskCancelCommandStatusMT.cpp
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

#include "../../../include/asb_uci/type/TaskCancelCommandStatusMT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/base/Reader.h"
#include "../../../include/asb_uci/base/Writer.h"
#include "../../../include/asb_uci/type/MessageType.h"
#include "../../../include/asb_uci/type/TaskCancelCommandStatusMDT.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TaskCancelCommandStatusMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TaskCancelCommandStatusMT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

TaskCancelCommandStatusMT::TaskCancelCommandStatusMT()
  : messageData_Accessor{boost::make_unique<TaskCancelCommandStatusMDT>()} {
}

TaskCancelCommandStatusMT::~TaskCancelCommandStatusMT() = default;

void TaskCancelCommandStatusMT::copy(const uci::type::TaskCancelCommandStatusMT& accessor) {
  copyImpl(accessor, false);
}

void TaskCancelCommandStatusMT::copyImpl(const uci::type::TaskCancelCommandStatusMT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    MessageType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const TaskCancelCommandStatusMT&>(accessor);
    setMessageData(*(accessorImpl.messageData_Accessor));
  }
}

void TaskCancelCommandStatusMT::reset() noexcept {
  MessageType::reset();
  messageData_Accessor->reset();
}

const uci::type::TaskCancelCommandStatusMDT& TaskCancelCommandStatusMT::getMessageData() const {
  return *messageData_Accessor;
}

uci::type::TaskCancelCommandStatusMDT& TaskCancelCommandStatusMT::getMessageData() {
  return *messageData_Accessor;
}

uci::type::TaskCancelCommandStatusMT& TaskCancelCommandStatusMT::setMessageData(const uci::type::TaskCancelCommandStatusMDT& accessor) {
  if (&accessor != messageData_Accessor.get()) {
    messageData_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<TaskCancelCommandStatusMT> TaskCancelCommandStatusMT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::taskCancelCommandStatusMT : type};
  return (requestedType == uci::type::accessorType::taskCancelCommandStatusMT) ? boost::make_unique<TaskCancelCommandStatusMT>() : nullptr;
}

/**  */
namespace TaskCancelCommandStatusMT_Names {

constexpr const char* Extern_Top_Type_Name{"TaskCancelCommandStatus"};
constexpr const char* Extern_Type_Name{"TaskCancelCommandStatusMT"};
constexpr const char* MessageData_Name{"MessageData"};

} // namespace TaskCancelCommandStatusMT_Names

void TaskCancelCommandStatusMT::deserialize(const boost::property_tree::ptree& propTree, uci::type::TaskCancelCommandStatusMT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = (topLevel ? TaskCancelCommandStatusMT_Names::Extern_Top_Type_Name : TaskCancelCommandStatusMT_Names::Extern_Type_Name);
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + TaskCancelCommandStatusMT_Names::MessageData_Name) {
      TaskCancelCommandStatusMDT::deserialize(valueType.second, accessor.getMessageData(), nodeName, nsPrefix);
    }
  }
  MessageType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string TaskCancelCommandStatusMT::serialize(const uci::type::TaskCancelCommandStatusMT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool topLevel) {
  std::string generatedNodeName{(nodeName.empty() ? (topLevel ? TaskCancelCommandStatusMT_Names::Extern_Top_Type_Name : TaskCancelCommandStatusMT_Names::Extern_Type_Name) : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, (topLevel ? TaskCancelCommandStatusMT_Names::Extern_Top_Type_Name : TaskCancelCommandStatusMT_Names::Extern_Type_Name));
  }
  MessageType::serialize(accessor, node, "", false, false, false);
  TaskCancelCommandStatusMDT::serialize(accessor.getMessageData(), node, TaskCancelCommandStatusMT_Names::MessageData_Name);
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

uci::type::TaskCancelCommandStatusMT& TaskCancelCommandStatusMT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::TaskCancelCommandStatusMT>().release());
}

uci::type::TaskCancelCommandStatusMT& TaskCancelCommandStatusMT::create(const uci::type::TaskCancelCommandStatusMT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::TaskCancelCommandStatusMT> newAccessor{boost::make_unique<asb_uci::type::TaskCancelCommandStatusMT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void TaskCancelCommandStatusMT::destroy(uci::type::TaskCancelCommandStatusMT& accessor) {
  delete dynamic_cast<asb_uci::type::TaskCancelCommandStatusMT*>(&accessor);
}

TaskCancelCommandStatusMT::Reader& TaskCancelCommandStatusMT::createReader(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Reader<TaskCancelCommandStatusMT, asb_uci::type::TaskCancelCommandStatusMT>> reader{boost::make_unique<asb_uci::base::Reader<TaskCancelCommandStatusMT, asb_uci::type::TaskCancelCommandStatusMT>>(topic, abstractServiceBusConnection)};
  reader->init();
  return *(reader.release());
}

void TaskCancelCommandStatusMT::destroyReader(TaskCancelCommandStatusMT::Reader& reader) {
  delete dynamic_cast<asb_uci::base::Reader<TaskCancelCommandStatusMT, asb_uci::type::TaskCancelCommandStatusMT>*>(&reader);
}

TaskCancelCommandStatusMT::Writer& TaskCancelCommandStatusMT::createWriter(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Writer<TaskCancelCommandStatusMT, asb_uci::type::TaskCancelCommandStatusMT>> writer{boost::make_unique<asb_uci::base::Writer<TaskCancelCommandStatusMT, asb_uci::type::TaskCancelCommandStatusMT>>(topic, abstractServiceBusConnection)};
  writer->init();
  return *(writer.release());
}

void TaskCancelCommandStatusMT::destroyWriter(TaskCancelCommandStatusMT::Writer& writer) {
  delete dynamic_cast<asb_uci::base::Writer<TaskCancelCommandStatusMT, asb_uci::type::TaskCancelCommandStatusMT>*>(&writer);
}

} // namespace type

} // namespace uci

