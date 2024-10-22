/** @file CommRelayCapabilityType.cpp
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

#include "../../../include/asb_uci/type/CommRelayCapabilityType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CommCapabilityEnum.h"
#include "../../../include/asb_uci/type/CommRelayMessageOutputsEnum.h"
#include "../../../include/asb_uci/type/CommRelayOptionsType.h"
#include "../../../include/asb_uci/type/CommandableCapabilityDeclarationType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommCapabilityEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommRelayCapabilityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommRelayMessageOutputsEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommRelayOptionsType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

CommRelayCapabilityType::CommRelayCapabilityType()
  : capabilityType_Accessor{boost::make_unique<CommCapabilityEnum>()},
    capabilityOptions_Accessor{boost::make_unique<CommRelayOptionsType>()},
    messageOutput_Accessor{boost::make_unique<MessageOutput>(0, 2)} {
}

CommRelayCapabilityType::~CommRelayCapabilityType() = default;

void CommRelayCapabilityType::copy(const uci::type::CommRelayCapabilityType& accessor) {
  copyImpl(accessor, false);
}

void CommRelayCapabilityType::copyImpl(const uci::type::CommRelayCapabilityType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    CommandableCapabilityDeclarationType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const CommRelayCapabilityType&>(accessor);
    setCapabilityType(*(accessorImpl.capabilityType_Accessor));
    setCapabilityOptions(*(accessorImpl.capabilityOptions_Accessor));
    setMessageOutput(*(accessorImpl.messageOutput_Accessor));
  }
}

void CommRelayCapabilityType::reset() noexcept {
  CommandableCapabilityDeclarationType::reset();
  capabilityType_Accessor->reset();
  capabilityOptions_Accessor->reset();
  messageOutput_Accessor->reset();
}

const uci::type::CommCapabilityEnum& CommRelayCapabilityType::getCapabilityType() const {
  return *capabilityType_Accessor;
}

uci::type::CommCapabilityEnum& CommRelayCapabilityType::getCapabilityType() {
  return *capabilityType_Accessor;
}

uci::type::CommRelayCapabilityType& CommRelayCapabilityType::setCapabilityType(const uci::type::CommCapabilityEnum& accessor) {
  if (&accessor != capabilityType_Accessor.get()) {
    capabilityType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::CommRelayCapabilityType& CommRelayCapabilityType::setCapabilityType(uci::type::CommCapabilityEnum::EnumerationItem value) {
  capabilityType_Accessor->setValue(value);
  return *this;
}


const uci::type::CommRelayOptionsType& CommRelayCapabilityType::getCapabilityOptions() const {
  return *capabilityOptions_Accessor;
}

uci::type::CommRelayOptionsType& CommRelayCapabilityType::getCapabilityOptions() {
  return *capabilityOptions_Accessor;
}

uci::type::CommRelayCapabilityType& CommRelayCapabilityType::setCapabilityOptions(const uci::type::CommRelayOptionsType& accessor) {
  if (&accessor != capabilityOptions_Accessor.get()) {
    capabilityOptions_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::CommRelayCapabilityType::MessageOutput& CommRelayCapabilityType::getMessageOutput() const {
  return *messageOutput_Accessor;
}

uci::type::CommRelayCapabilityType::MessageOutput& CommRelayCapabilityType::getMessageOutput() {
  return *messageOutput_Accessor;
}

uci::type::CommRelayCapabilityType& CommRelayCapabilityType::setMessageOutput(const uci::type::CommRelayCapabilityType::MessageOutput& accessor) {
  if (&accessor != messageOutput_Accessor.get()) {
    messageOutput_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<CommRelayCapabilityType> CommRelayCapabilityType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commRelayCapabilityType : type};
  return (requestedType == uci::type::accessorType::commRelayCapabilityType) ? boost::make_unique<CommRelayCapabilityType>() : nullptr;
}

/**  */
namespace CommRelayCapabilityType_Names {

constexpr const char* Extern_Type_Name{"CommRelayCapabilityType"};
constexpr const char* CapabilityType_Name{"CapabilityType"};
constexpr const char* CapabilityOptions_Name{"CapabilityOptions"};
constexpr const char* MessageOutput_Name{"MessageOutput"};

} // namespace CommRelayCapabilityType_Names

void CommRelayCapabilityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CommRelayCapabilityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CommRelayCapabilityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CommRelayCapabilityType_Names::CapabilityType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getCapabilityType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + CommRelayCapabilityType_Names::CapabilityOptions_Name) {
      CommRelayOptionsType::deserialize(valueType.second, accessor.getCapabilityOptions(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CommRelayCapabilityType_Names::MessageOutput_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::CommRelayCapabilityType::MessageOutput& boundedList = accessor.getMessageOutput();
        const uci::type::CommRelayCapabilityType::MessageOutput::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    }
  }
  CommandableCapabilityDeclarationType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string CommRelayCapabilityType::serialize(const uci::type::CommRelayCapabilityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? CommRelayCapabilityType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, CommRelayCapabilityType_Names::Extern_Type_Name);
  }
  CommandableCapabilityDeclarationType::serialize(accessor, node, "", false, false, false);
  CommCapabilityEnum::serialize(accessor.getCapabilityType(), node, CommRelayCapabilityType_Names::CapabilityType_Name, false);
  CommRelayOptionsType::serialize(accessor.getCapabilityOptions(), node, CommRelayCapabilityType_Names::CapabilityOptions_Name);
  {
    const uci::type::CommRelayCapabilityType::MessageOutput& boundedList = accessor.getMessageOutput();
    for (uci::type::CommRelayCapabilityType::MessageOutput::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      CommRelayMessageOutputsEnum::serialize(boundedList.at(i), node, CommRelayCapabilityType_Names::MessageOutput_Name, false);
    }
  }
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

uci::type::CommRelayCapabilityType& CommRelayCapabilityType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::CommRelayCapabilityType>().release());
}

uci::type::CommRelayCapabilityType& CommRelayCapabilityType::create(const uci::type::CommRelayCapabilityType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::CommRelayCapabilityType> newAccessor{boost::make_unique<asb_uci::type::CommRelayCapabilityType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void CommRelayCapabilityType::destroy(uci::type::CommRelayCapabilityType& accessor) {
  delete dynamic_cast<asb_uci::type::CommRelayCapabilityType*>(&accessor);
}

} // namespace type

} // namespace uci

