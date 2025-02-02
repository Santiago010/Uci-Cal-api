/** @file QueryTopicPairType.cpp
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

#include "../../../include/asb_uci/type/QueryTopicPairType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/MessageTypeEnum.h"
#include "../../../include/asb_uci/type/VisibleString1024Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MessageTypeEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/QueryTopicPairType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString1024Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

QueryTopicPairType::QueryTopicPairType()
  : messageType_Accessor{boost::make_unique<MessageTypeEnum>()},
    receiverAddress_Accessor{boost::make_unique<VisibleString1024Type>()} {
}

QueryTopicPairType::~QueryTopicPairType() = default;

void QueryTopicPairType::copy(const uci::type::QueryTopicPairType& accessor) {
  copyImpl(accessor, false);
}

void QueryTopicPairType::copyImpl(const uci::type::QueryTopicPairType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const QueryTopicPairType&>(accessor);
    setMessageType(*(accessorImpl.messageType_Accessor));
    setReceiverAddress(*(accessorImpl.receiverAddress_Accessor));
  }
}

void QueryTopicPairType::reset() noexcept {
  messageType_Accessor->reset();
  receiverAddress_Accessor->reset();
}

const uci::type::MessageTypeEnum& QueryTopicPairType::getMessageType() const {
  return *messageType_Accessor;
}

uci::type::MessageTypeEnum& QueryTopicPairType::getMessageType() {
  return *messageType_Accessor;
}

uci::type::QueryTopicPairType& QueryTopicPairType::setMessageType(const uci::type::MessageTypeEnum& accessor) {
  if (&accessor != messageType_Accessor.get()) {
    messageType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::QueryTopicPairType& QueryTopicPairType::setMessageType(uci::type::MessageTypeEnum::EnumerationItem value) {
  messageType_Accessor->setValue(value);
  return *this;
}


const uci::type::VisibleString1024Type& QueryTopicPairType::getReceiverAddress() const noexcept {
  return *receiverAddress_Accessor;
}

uci::type::VisibleString1024Type& QueryTopicPairType::getReceiverAddress() noexcept {
  return *receiverAddress_Accessor;
}

uci::type::QueryTopicPairType& QueryTopicPairType::setReceiverAddress(const uci::type::VisibleString1024Type& value) {
  return setReceiverAddress(value.c_str());
}

uci::type::QueryTopicPairType& QueryTopicPairType::setReceiverAddress(const std::string& value) {
  return setReceiverAddress(value.c_str());
}

uci::type::QueryTopicPairType& QueryTopicPairType::setReceiverAddress(const char* value) {
  receiverAddress_Accessor->setStringValue(value);
  return *this;
}

std::unique_ptr<QueryTopicPairType> QueryTopicPairType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::queryTopicPairType : type};
  return (requestedType == uci::type::accessorType::queryTopicPairType) ? boost::make_unique<QueryTopicPairType>() : nullptr;
}

/**  */
namespace QueryTopicPairType_Names {

constexpr const char* Extern_Type_Name{"QueryTopicPairType"};
constexpr const char* MessageType_Name{"MessageType"};
constexpr const char* ReceiverAddress_Name{"ReceiverAddress"};

} // namespace QueryTopicPairType_Names

void QueryTopicPairType::deserialize(const boost::property_tree::ptree& propTree, uci::type::QueryTopicPairType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = QueryTopicPairType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + QueryTopicPairType_Names::MessageType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getMessageType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + QueryTopicPairType_Names::ReceiverAddress_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setReceiverAddress(*value);
      }
    }
  }
}

std::string QueryTopicPairType::serialize(const uci::type::QueryTopicPairType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? QueryTopicPairType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, QueryTopicPairType_Names::Extern_Type_Name);
  }
  MessageTypeEnum::serialize(accessor.getMessageType(), node, QueryTopicPairType_Names::MessageType_Name, false);
  asb_uci::util::SerializationHelpers::serializeString(accessor.getReceiverAddress(), node, QueryTopicPairType_Names::ReceiverAddress_Name);
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

uci::type::QueryTopicPairType& QueryTopicPairType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::QueryTopicPairType>().release());
}

uci::type::QueryTopicPairType& QueryTopicPairType::create(const uci::type::QueryTopicPairType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::QueryTopicPairType> newAccessor{boost::make_unique<asb_uci::type::QueryTopicPairType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void QueryTopicPairType::destroy(uci::type::QueryTopicPairType& accessor) {
  delete dynamic_cast<asb_uci::type::QueryTopicPairType*>(&accessor);
}

} // namespace type

} // namespace uci

