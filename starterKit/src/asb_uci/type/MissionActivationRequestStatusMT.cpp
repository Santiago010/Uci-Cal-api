/** @file MissionActivationRequestStatusMT.cpp
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

#include "../../../include/asb_uci/type/MissionActivationRequestStatusMT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/base/Reader.h"
#include "../../../include/asb_uci/base/Writer.h"
#include "../../../include/asb_uci/type/MessageType.h"
#include "../../../include/asb_uci/type/MissionActivationRequestStatusMDT.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MissionActivationRequestStatusMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MissionActivationRequestStatusMT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

MissionActivationRequestStatusMT::MissionActivationRequestStatusMT()
  : messageData_Accessor{boost::make_unique<MissionActivationRequestStatusMDT>()} {
}

MissionActivationRequestStatusMT::~MissionActivationRequestStatusMT() = default;

void MissionActivationRequestStatusMT::copy(const uci::type::MissionActivationRequestStatusMT& accessor) {
  copyImpl(accessor, false);
}

void MissionActivationRequestStatusMT::copyImpl(const uci::type::MissionActivationRequestStatusMT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    MessageType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const MissionActivationRequestStatusMT&>(accessor);
    setMessageData(*(accessorImpl.messageData_Accessor));
  }
}

void MissionActivationRequestStatusMT::reset() noexcept {
  MessageType::reset();
  messageData_Accessor->reset();
}

const uci::type::MissionActivationRequestStatusMDT& MissionActivationRequestStatusMT::getMessageData() const {
  return *messageData_Accessor;
}

uci::type::MissionActivationRequestStatusMDT& MissionActivationRequestStatusMT::getMessageData() {
  return *messageData_Accessor;
}

uci::type::MissionActivationRequestStatusMT& MissionActivationRequestStatusMT::setMessageData(const uci::type::MissionActivationRequestStatusMDT& accessor) {
  if (&accessor != messageData_Accessor.get()) {
    messageData_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<MissionActivationRequestStatusMT> MissionActivationRequestStatusMT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::missionActivationRequestStatusMT : type};
  return (requestedType == uci::type::accessorType::missionActivationRequestStatusMT) ? boost::make_unique<MissionActivationRequestStatusMT>() : nullptr;
}

/**  */
namespace MissionActivationRequestStatusMT_Names {

constexpr const char* Extern_Top_Type_Name{"MissionActivationRequestStatus"};
constexpr const char* Extern_Type_Name{"MissionActivationRequestStatusMT"};
constexpr const char* MessageData_Name{"MessageData"};

} // namespace MissionActivationRequestStatusMT_Names

void MissionActivationRequestStatusMT::deserialize(const boost::property_tree::ptree& propTree, uci::type::MissionActivationRequestStatusMT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = (topLevel ? MissionActivationRequestStatusMT_Names::Extern_Top_Type_Name : MissionActivationRequestStatusMT_Names::Extern_Type_Name);
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + MissionActivationRequestStatusMT_Names::MessageData_Name) {
      MissionActivationRequestStatusMDT::deserialize(valueType.second, accessor.getMessageData(), nodeName, nsPrefix);
    }
  }
  MessageType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string MissionActivationRequestStatusMT::serialize(const uci::type::MissionActivationRequestStatusMT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool topLevel) {
  std::string generatedNodeName{(nodeName.empty() ? (topLevel ? MissionActivationRequestStatusMT_Names::Extern_Top_Type_Name : MissionActivationRequestStatusMT_Names::Extern_Type_Name) : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, (topLevel ? MissionActivationRequestStatusMT_Names::Extern_Top_Type_Name : MissionActivationRequestStatusMT_Names::Extern_Type_Name));
  }
  MessageType::serialize(accessor, node, "", false, false, false);
  MissionActivationRequestStatusMDT::serialize(accessor.getMessageData(), node, MissionActivationRequestStatusMT_Names::MessageData_Name);
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

uci::type::MissionActivationRequestStatusMT& MissionActivationRequestStatusMT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::MissionActivationRequestStatusMT>().release());
}

uci::type::MissionActivationRequestStatusMT& MissionActivationRequestStatusMT::create(const uci::type::MissionActivationRequestStatusMT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::MissionActivationRequestStatusMT> newAccessor{boost::make_unique<asb_uci::type::MissionActivationRequestStatusMT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void MissionActivationRequestStatusMT::destroy(uci::type::MissionActivationRequestStatusMT& accessor) {
  delete dynamic_cast<asb_uci::type::MissionActivationRequestStatusMT*>(&accessor);
}

MissionActivationRequestStatusMT::Reader& MissionActivationRequestStatusMT::createReader(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Reader<MissionActivationRequestStatusMT, asb_uci::type::MissionActivationRequestStatusMT>> reader{boost::make_unique<asb_uci::base::Reader<MissionActivationRequestStatusMT, asb_uci::type::MissionActivationRequestStatusMT>>(topic, abstractServiceBusConnection)};
  reader->init();
  return *(reader.release());
}

void MissionActivationRequestStatusMT::destroyReader(MissionActivationRequestStatusMT::Reader& reader) {
  delete dynamic_cast<asb_uci::base::Reader<MissionActivationRequestStatusMT, asb_uci::type::MissionActivationRequestStatusMT>*>(&reader);
}

MissionActivationRequestStatusMT::Writer& MissionActivationRequestStatusMT::createWriter(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Writer<MissionActivationRequestStatusMT, asb_uci::type::MissionActivationRequestStatusMT>> writer{boost::make_unique<asb_uci::base::Writer<MissionActivationRequestStatusMT, asb_uci::type::MissionActivationRequestStatusMT>>(topic, abstractServiceBusConnection)};
  writer->init();
  return *(writer.release());
}

void MissionActivationRequestStatusMT::destroyWriter(MissionActivationRequestStatusMT::Writer& writer) {
  delete dynamic_cast<asb_uci::base::Writer<MissionActivationRequestStatusMT, asb_uci::type::MissionActivationRequestStatusMT>*>(&writer);
}

} // namespace type

} // namespace uci

