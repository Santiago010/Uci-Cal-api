/** @file TaskPlanCommandStatusMT.cpp
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

#include "../../../include/asb_uci/type/TaskPlanCommandStatusMT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/base/Reader.h"
#include "../../../include/asb_uci/base/Writer.h"
#include "../../../include/asb_uci/type/MessageType.h"
#include "../../../include/asb_uci/type/TaskPlanCommandStatusMDT.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TaskPlanCommandStatusMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TaskPlanCommandStatusMT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

TaskPlanCommandStatusMT::TaskPlanCommandStatusMT()
  : messageData_Accessor{boost::make_unique<TaskPlanCommandStatusMDT>()} {
}

TaskPlanCommandStatusMT::~TaskPlanCommandStatusMT() = default;

void TaskPlanCommandStatusMT::copy(const uci::type::TaskPlanCommandStatusMT& accessor) {
  copyImpl(accessor, false);
}

void TaskPlanCommandStatusMT::copyImpl(const uci::type::TaskPlanCommandStatusMT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    MessageType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const TaskPlanCommandStatusMT&>(accessor);
    setMessageData(*(accessorImpl.messageData_Accessor));
  }
}

void TaskPlanCommandStatusMT::reset() noexcept {
  MessageType::reset();
  messageData_Accessor->reset();
}

const uci::type::TaskPlanCommandStatusMDT& TaskPlanCommandStatusMT::getMessageData() const {
  return *messageData_Accessor;
}

uci::type::TaskPlanCommandStatusMDT& TaskPlanCommandStatusMT::getMessageData() {
  return *messageData_Accessor;
}

uci::type::TaskPlanCommandStatusMT& TaskPlanCommandStatusMT::setMessageData(const uci::type::TaskPlanCommandStatusMDT& accessor) {
  if (&accessor != messageData_Accessor.get()) {
    messageData_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<TaskPlanCommandStatusMT> TaskPlanCommandStatusMT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::taskPlanCommandStatusMT : type};
  return (requestedType == uci::type::accessorType::taskPlanCommandStatusMT) ? boost::make_unique<TaskPlanCommandStatusMT>() : nullptr;
}

/**  */
namespace TaskPlanCommandStatusMT_Names {

constexpr const char* Extern_Top_Type_Name{"TaskPlanCommandStatus"};
constexpr const char* Extern_Type_Name{"TaskPlanCommandStatusMT"};
constexpr const char* MessageData_Name{"MessageData"};

} // namespace TaskPlanCommandStatusMT_Names

void TaskPlanCommandStatusMT::deserialize(const boost::property_tree::ptree& propTree, uci::type::TaskPlanCommandStatusMT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = (topLevel ? TaskPlanCommandStatusMT_Names::Extern_Top_Type_Name : TaskPlanCommandStatusMT_Names::Extern_Type_Name);
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + TaskPlanCommandStatusMT_Names::MessageData_Name) {
      TaskPlanCommandStatusMDT::deserialize(valueType.second, accessor.getMessageData(), nodeName, nsPrefix);
    }
  }
  MessageType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string TaskPlanCommandStatusMT::serialize(const uci::type::TaskPlanCommandStatusMT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool topLevel) {
  std::string generatedNodeName{(nodeName.empty() ? (topLevel ? TaskPlanCommandStatusMT_Names::Extern_Top_Type_Name : TaskPlanCommandStatusMT_Names::Extern_Type_Name) : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, (topLevel ? TaskPlanCommandStatusMT_Names::Extern_Top_Type_Name : TaskPlanCommandStatusMT_Names::Extern_Type_Name));
  }
  MessageType::serialize(accessor, node, "", false, false, false);
  TaskPlanCommandStatusMDT::serialize(accessor.getMessageData(), node, TaskPlanCommandStatusMT_Names::MessageData_Name);
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

uci::type::TaskPlanCommandStatusMT& TaskPlanCommandStatusMT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::TaskPlanCommandStatusMT>().release());
}

uci::type::TaskPlanCommandStatusMT& TaskPlanCommandStatusMT::create(const uci::type::TaskPlanCommandStatusMT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::TaskPlanCommandStatusMT> newAccessor{boost::make_unique<asb_uci::type::TaskPlanCommandStatusMT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void TaskPlanCommandStatusMT::destroy(uci::type::TaskPlanCommandStatusMT& accessor) {
  delete dynamic_cast<asb_uci::type::TaskPlanCommandStatusMT*>(&accessor);
}

TaskPlanCommandStatusMT::Reader& TaskPlanCommandStatusMT::createReader(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Reader<TaskPlanCommandStatusMT, asb_uci::type::TaskPlanCommandStatusMT>> reader{boost::make_unique<asb_uci::base::Reader<TaskPlanCommandStatusMT, asb_uci::type::TaskPlanCommandStatusMT>>(topic, abstractServiceBusConnection)};
  reader->init();
  return *(reader.release());
}

void TaskPlanCommandStatusMT::destroyReader(TaskPlanCommandStatusMT::Reader& reader) {
  delete dynamic_cast<asb_uci::base::Reader<TaskPlanCommandStatusMT, asb_uci::type::TaskPlanCommandStatusMT>*>(&reader);
}

TaskPlanCommandStatusMT::Writer& TaskPlanCommandStatusMT::createWriter(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Writer<TaskPlanCommandStatusMT, asb_uci::type::TaskPlanCommandStatusMT>> writer{boost::make_unique<asb_uci::base::Writer<TaskPlanCommandStatusMT, asb_uci::type::TaskPlanCommandStatusMT>>(topic, abstractServiceBusConnection)};
  writer->init();
  return *(writer.release());
}

void TaskPlanCommandStatusMT::destroyWriter(TaskPlanCommandStatusMT::Writer& writer) {
  delete dynamic_cast<asb_uci::base::Writer<TaskPlanCommandStatusMT, asb_uci::type::TaskPlanCommandStatusMT>*>(&writer);
}

} // namespace type

} // namespace uci

