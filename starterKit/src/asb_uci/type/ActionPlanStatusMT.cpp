/** @file ActionPlanStatusMT.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:11 PM
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

#include "../../../include/asb_uci/type/ActionPlanStatusMT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/base/Reader.h"
#include "../../../include/asb_uci/base/Writer.h"
#include "../../../include/asb_uci/type/ActionPlanStatusMDT.h"
#include "../../../include/asb_uci/type/MessageType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActionPlanStatusMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActionPlanStatusMT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ActionPlanStatusMT::ActionPlanStatusMT()
  : messageData_Accessor{boost::make_unique<ActionPlanStatusMDT>()} {
}

ActionPlanStatusMT::~ActionPlanStatusMT() = default;

void ActionPlanStatusMT::copy(const uci::type::ActionPlanStatusMT& accessor) {
  copyImpl(accessor, false);
}

void ActionPlanStatusMT::copyImpl(const uci::type::ActionPlanStatusMT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    MessageType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const ActionPlanStatusMT&>(accessor);
    setMessageData(*(accessorImpl.messageData_Accessor));
  }
}

void ActionPlanStatusMT::reset() noexcept {
  MessageType::reset();
  messageData_Accessor->reset();
}

const uci::type::ActionPlanStatusMDT& ActionPlanStatusMT::getMessageData() const {
  return *messageData_Accessor;
}

uci::type::ActionPlanStatusMDT& ActionPlanStatusMT::getMessageData() {
  return *messageData_Accessor;
}

uci::type::ActionPlanStatusMT& ActionPlanStatusMT::setMessageData(const uci::type::ActionPlanStatusMDT& accessor) {
  if (&accessor != messageData_Accessor.get()) {
    messageData_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<ActionPlanStatusMT> ActionPlanStatusMT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::actionPlanStatusMT : type};
  return (requestedType == uci::type::accessorType::actionPlanStatusMT) ? boost::make_unique<ActionPlanStatusMT>() : nullptr;
}

/**  */
namespace ActionPlanStatusMT_Names {

constexpr const char* Extern_Top_Type_Name{"ActionPlanStatus"};
constexpr const char* Extern_Type_Name{"ActionPlanStatusMT"};
constexpr const char* MessageData_Name{"MessageData"};

} // namespace ActionPlanStatusMT_Names

void ActionPlanStatusMT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ActionPlanStatusMT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = (topLevel ? ActionPlanStatusMT_Names::Extern_Top_Type_Name : ActionPlanStatusMT_Names::Extern_Type_Name);
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ActionPlanStatusMT_Names::MessageData_Name) {
      ActionPlanStatusMDT::deserialize(valueType.second, accessor.getMessageData(), nodeName, nsPrefix);
    }
  }
  MessageType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string ActionPlanStatusMT::serialize(const uci::type::ActionPlanStatusMT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool topLevel) {
  std::string generatedNodeName{(nodeName.empty() ? (topLevel ? ActionPlanStatusMT_Names::Extern_Top_Type_Name : ActionPlanStatusMT_Names::Extern_Type_Name) : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, (topLevel ? ActionPlanStatusMT_Names::Extern_Top_Type_Name : ActionPlanStatusMT_Names::Extern_Type_Name));
  }
  MessageType::serialize(accessor, node, "", false, false, false);
  ActionPlanStatusMDT::serialize(accessor.getMessageData(), node, ActionPlanStatusMT_Names::MessageData_Name);
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

uci::type::ActionPlanStatusMT& ActionPlanStatusMT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ActionPlanStatusMT>().release());
}

uci::type::ActionPlanStatusMT& ActionPlanStatusMT::create(const uci::type::ActionPlanStatusMT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ActionPlanStatusMT> newAccessor{boost::make_unique<asb_uci::type::ActionPlanStatusMT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ActionPlanStatusMT::destroy(uci::type::ActionPlanStatusMT& accessor) {
  delete dynamic_cast<asb_uci::type::ActionPlanStatusMT*>(&accessor);
}

ActionPlanStatusMT::Reader& ActionPlanStatusMT::createReader(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Reader<ActionPlanStatusMT, asb_uci::type::ActionPlanStatusMT>> reader{boost::make_unique<asb_uci::base::Reader<ActionPlanStatusMT, asb_uci::type::ActionPlanStatusMT>>(topic, abstractServiceBusConnection)};
  reader->init();
  return *(reader.release());
}

void ActionPlanStatusMT::destroyReader(ActionPlanStatusMT::Reader& reader) {
  delete dynamic_cast<asb_uci::base::Reader<ActionPlanStatusMT, asb_uci::type::ActionPlanStatusMT>*>(&reader);
}

ActionPlanStatusMT::Writer& ActionPlanStatusMT::createWriter(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Writer<ActionPlanStatusMT, asb_uci::type::ActionPlanStatusMT>> writer{boost::make_unique<asb_uci::base::Writer<ActionPlanStatusMT, asb_uci::type::ActionPlanStatusMT>>(topic, abstractServiceBusConnection)};
  writer->init();
  return *(writer.release());
}

void ActionPlanStatusMT::destroyWriter(ActionPlanStatusMT::Writer& writer) {
  delete dynamic_cast<asb_uci::base::Writer<ActionPlanStatusMT, asb_uci::type::ActionPlanStatusMT>*>(&writer);
}

} // namespace type

} // namespace uci

