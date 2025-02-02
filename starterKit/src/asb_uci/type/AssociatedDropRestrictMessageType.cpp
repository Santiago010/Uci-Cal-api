/** @file AssociatedDropRestrictMessageType.cpp
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

#include "../../../include/asb_uci/type/AssociatedDropRestrictMessageType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ID_Type.h"
#include "../../../include/asb_uci/type/MessageTypeDropRestrictionEnum.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AssociatedDropRestrictMessageType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MessageTypeDropRestrictionEnum.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

AssociatedDropRestrictMessageType::AssociatedDropRestrictMessageType()
  : messageType_Accessor{boost::make_unique<MessageTypeDropRestrictionEnum>()} {
}

AssociatedDropRestrictMessageType::~AssociatedDropRestrictMessageType() = default;

void AssociatedDropRestrictMessageType::copy(const uci::type::AssociatedDropRestrictMessageType& accessor) {
  copyImpl(accessor, false);
}

void AssociatedDropRestrictMessageType::copyImpl(const uci::type::AssociatedDropRestrictMessageType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const AssociatedDropRestrictMessageType&>(accessor);
    setMessageType(*(accessorImpl.messageType_Accessor));
    if (accessorImpl.associatedID_Accessor) {
      setAssociatedID(*(accessorImpl.associatedID_Accessor));
    } else {
      associatedID_Accessor.reset();
    }
  }
}

void AssociatedDropRestrictMessageType::reset() noexcept {
  messageType_Accessor->reset();
  associatedID_Accessor.reset();
}

const uci::type::MessageTypeDropRestrictionEnum& AssociatedDropRestrictMessageType::getMessageType() const {
  return *messageType_Accessor;
}

uci::type::MessageTypeDropRestrictionEnum& AssociatedDropRestrictMessageType::getMessageType() {
  return *messageType_Accessor;
}

uci::type::AssociatedDropRestrictMessageType& AssociatedDropRestrictMessageType::setMessageType(const uci::type::MessageTypeDropRestrictionEnum& accessor) {
  if (&accessor != messageType_Accessor.get()) {
    messageType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::AssociatedDropRestrictMessageType& AssociatedDropRestrictMessageType::setMessageType(uci::type::MessageTypeDropRestrictionEnum::EnumerationItem value) {
  messageType_Accessor->setValue(value);
  return *this;
}


uci::type::ID_Type& AssociatedDropRestrictMessageType::getAssociatedID_() const {
  if (associatedID_Accessor) {
    return *associatedID_Accessor;
  }
  throw uci::base::UCIException("Error in getAssociatedID(): An attempt was made to get an optional field that was not enabled, call hasAssociatedID() to determine if it is safe to call getAssociatedID()");
}

const uci::type::ID_Type& AssociatedDropRestrictMessageType::getAssociatedID() const {
  return getAssociatedID_();
}

uci::type::ID_Type& AssociatedDropRestrictMessageType::getAssociatedID() {
  return getAssociatedID_();
}

uci::type::AssociatedDropRestrictMessageType& AssociatedDropRestrictMessageType::setAssociatedID(const uci::type::ID_Type& accessor) {
  enableAssociatedID(accessor.getAccessorType());
  if (&accessor != associatedID_Accessor.get()) {
    associatedID_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool AssociatedDropRestrictMessageType::hasAssociatedID() const noexcept {
  return static_cast<bool>(associatedID_Accessor);
}

uci::type::ID_Type& AssociatedDropRestrictMessageType::enableAssociatedID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::iD_Type : type};
  if ((!associatedID_Accessor) || (associatedID_Accessor->getAccessorType() != requestedType)) {
    associatedID_Accessor = ID_Type::create(requestedType);
    if (!associatedID_Accessor) {
      throw uci::base::UCIException("Error in enableAssociatedID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *associatedID_Accessor;
}

uci::type::AssociatedDropRestrictMessageType& AssociatedDropRestrictMessageType::clearAssociatedID() noexcept {
  associatedID_Accessor.reset();
  return *this;
}

std::unique_ptr<AssociatedDropRestrictMessageType> AssociatedDropRestrictMessageType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::associatedDropRestrictMessageType : type};
  return (requestedType == uci::type::accessorType::associatedDropRestrictMessageType) ? boost::make_unique<AssociatedDropRestrictMessageType>() : nullptr;
}

/**  */
namespace AssociatedDropRestrictMessageType_Names {

constexpr const char* Extern_Type_Name{"AssociatedDropRestrictMessageType"};
constexpr const char* MessageType_Name{"MessageType"};
constexpr const char* AssociatedID_Name{"AssociatedID"};

} // namespace AssociatedDropRestrictMessageType_Names

void AssociatedDropRestrictMessageType::deserialize(const boost::property_tree::ptree& propTree, uci::type::AssociatedDropRestrictMessageType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = AssociatedDropRestrictMessageType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + AssociatedDropRestrictMessageType_Names::MessageType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getMessageType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + AssociatedDropRestrictMessageType_Names::AssociatedID_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableAssociatedID(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    }
  }
}

std::string AssociatedDropRestrictMessageType::serialize(const uci::type::AssociatedDropRestrictMessageType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? AssociatedDropRestrictMessageType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, AssociatedDropRestrictMessageType_Names::Extern_Type_Name);
  }
  MessageTypeDropRestrictionEnum::serialize(accessor.getMessageType(), node, AssociatedDropRestrictMessageType_Names::MessageType_Name, false);
  if (accessor.hasAssociatedID()) {
    ID_Type::serialize(accessor.getAssociatedID(), node, AssociatedDropRestrictMessageType_Names::AssociatedID_Name);
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

uci::type::AssociatedDropRestrictMessageType& AssociatedDropRestrictMessageType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::AssociatedDropRestrictMessageType>().release());
}

uci::type::AssociatedDropRestrictMessageType& AssociatedDropRestrictMessageType::create(const uci::type::AssociatedDropRestrictMessageType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::AssociatedDropRestrictMessageType> newAccessor{boost::make_unique<asb_uci::type::AssociatedDropRestrictMessageType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void AssociatedDropRestrictMessageType::destroy(uci::type::AssociatedDropRestrictMessageType& accessor) {
  delete dynamic_cast<asb_uci::type::AssociatedDropRestrictMessageType*>(&accessor);
}

} // namespace type

} // namespace uci

