/** @file ActivityPlanApprovalStatusMT.cpp
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

#include "../../../include/asb_uci/type/ActivityPlanApprovalStatusMT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/base/Reader.h"
#include "../../../include/asb_uci/base/Writer.h"
#include "../../../include/asb_uci/type/ActivityPlanApprovalStatusMDT.h"
#include "../../../include/asb_uci/type/MessageType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActivityPlanApprovalStatusMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActivityPlanApprovalStatusMT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ActivityPlanApprovalStatusMT::ActivityPlanApprovalStatusMT()
  : messageData_Accessor{boost::make_unique<ActivityPlanApprovalStatusMDT>()} {
}

ActivityPlanApprovalStatusMT::~ActivityPlanApprovalStatusMT() = default;

void ActivityPlanApprovalStatusMT::copy(const uci::type::ActivityPlanApprovalStatusMT& accessor) {
  copyImpl(accessor, false);
}

void ActivityPlanApprovalStatusMT::copyImpl(const uci::type::ActivityPlanApprovalStatusMT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    MessageType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const ActivityPlanApprovalStatusMT&>(accessor);
    setMessageData(*(accessorImpl.messageData_Accessor));
  }
}

void ActivityPlanApprovalStatusMT::reset() noexcept {
  MessageType::reset();
  messageData_Accessor->reset();
}

const uci::type::ActivityPlanApprovalStatusMDT& ActivityPlanApprovalStatusMT::getMessageData() const {
  return *messageData_Accessor;
}

uci::type::ActivityPlanApprovalStatusMDT& ActivityPlanApprovalStatusMT::getMessageData() {
  return *messageData_Accessor;
}

uci::type::ActivityPlanApprovalStatusMT& ActivityPlanApprovalStatusMT::setMessageData(const uci::type::ActivityPlanApprovalStatusMDT& accessor) {
  if (&accessor != messageData_Accessor.get()) {
    messageData_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<ActivityPlanApprovalStatusMT> ActivityPlanApprovalStatusMT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::activityPlanApprovalStatusMT : type};
  return (requestedType == uci::type::accessorType::activityPlanApprovalStatusMT) ? boost::make_unique<ActivityPlanApprovalStatusMT>() : nullptr;
}

/**  */
namespace ActivityPlanApprovalStatusMT_Names {

constexpr const char* Extern_Top_Type_Name{"ActivityPlanApprovalStatus"};
constexpr const char* Extern_Type_Name{"ActivityPlanApprovalStatusMT"};
constexpr const char* MessageData_Name{"MessageData"};

} // namespace ActivityPlanApprovalStatusMT_Names

void ActivityPlanApprovalStatusMT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ActivityPlanApprovalStatusMT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = (topLevel ? ActivityPlanApprovalStatusMT_Names::Extern_Top_Type_Name : ActivityPlanApprovalStatusMT_Names::Extern_Type_Name);
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ActivityPlanApprovalStatusMT_Names::MessageData_Name) {
      ActivityPlanApprovalStatusMDT::deserialize(valueType.second, accessor.getMessageData(), nodeName, nsPrefix);
    }
  }
  MessageType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string ActivityPlanApprovalStatusMT::serialize(const uci::type::ActivityPlanApprovalStatusMT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool topLevel) {
  std::string generatedNodeName{(nodeName.empty() ? (topLevel ? ActivityPlanApprovalStatusMT_Names::Extern_Top_Type_Name : ActivityPlanApprovalStatusMT_Names::Extern_Type_Name) : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, (topLevel ? ActivityPlanApprovalStatusMT_Names::Extern_Top_Type_Name : ActivityPlanApprovalStatusMT_Names::Extern_Type_Name));
  }
  MessageType::serialize(accessor, node, "", false, false, false);
  ActivityPlanApprovalStatusMDT::serialize(accessor.getMessageData(), node, ActivityPlanApprovalStatusMT_Names::MessageData_Name);
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

uci::type::ActivityPlanApprovalStatusMT& ActivityPlanApprovalStatusMT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ActivityPlanApprovalStatusMT>().release());
}

uci::type::ActivityPlanApprovalStatusMT& ActivityPlanApprovalStatusMT::create(const uci::type::ActivityPlanApprovalStatusMT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ActivityPlanApprovalStatusMT> newAccessor{boost::make_unique<asb_uci::type::ActivityPlanApprovalStatusMT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ActivityPlanApprovalStatusMT::destroy(uci::type::ActivityPlanApprovalStatusMT& accessor) {
  delete dynamic_cast<asb_uci::type::ActivityPlanApprovalStatusMT*>(&accessor);
}

ActivityPlanApprovalStatusMT::Reader& ActivityPlanApprovalStatusMT::createReader(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Reader<ActivityPlanApprovalStatusMT, asb_uci::type::ActivityPlanApprovalStatusMT>> reader{boost::make_unique<asb_uci::base::Reader<ActivityPlanApprovalStatusMT, asb_uci::type::ActivityPlanApprovalStatusMT>>(topic, abstractServiceBusConnection)};
  reader->init();
  return *(reader.release());
}

void ActivityPlanApprovalStatusMT::destroyReader(ActivityPlanApprovalStatusMT::Reader& reader) {
  delete dynamic_cast<asb_uci::base::Reader<ActivityPlanApprovalStatusMT, asb_uci::type::ActivityPlanApprovalStatusMT>*>(&reader);
}

ActivityPlanApprovalStatusMT::Writer& ActivityPlanApprovalStatusMT::createWriter(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Writer<ActivityPlanApprovalStatusMT, asb_uci::type::ActivityPlanApprovalStatusMT>> writer{boost::make_unique<asb_uci::base::Writer<ActivityPlanApprovalStatusMT, asb_uci::type::ActivityPlanApprovalStatusMT>>(topic, abstractServiceBusConnection)};
  writer->init();
  return *(writer.release());
}

void ActivityPlanApprovalStatusMT::destroyWriter(ActivityPlanApprovalStatusMT::Writer& writer) {
  delete dynamic_cast<asb_uci::base::Writer<ActivityPlanApprovalStatusMT, asb_uci::type::ActivityPlanApprovalStatusMT>*>(&writer);
}

} // namespace type

} // namespace uci

