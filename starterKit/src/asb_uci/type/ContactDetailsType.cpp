/** @file ContactDetailsType.cpp
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

#include "../../../include/asb_uci/type/ContactDetailsType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/OperatorNameType.h"
#include "../../../include/asb_uci/type/OperatorPhoneNumberType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ContactDetailsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OperatorNameType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OperatorPhoneNumberType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ContactDetailsType::ContactDetailsType()
  : operatorName_Accessor{boost::make_unique<OperatorNameType>()},
    phoneNumber_Accessor{boost::make_unique<PhoneNumber>(0, SIZE_MAX)} {
}

ContactDetailsType::~ContactDetailsType() = default;

void ContactDetailsType::copy(const uci::type::ContactDetailsType& accessor) {
  copyImpl(accessor, false);
}

void ContactDetailsType::copyImpl(const uci::type::ContactDetailsType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const ContactDetailsType&>(accessor);
    setOperatorName(*(accessorImpl.operatorName_Accessor));
    setPhoneNumber(*(accessorImpl.phoneNumber_Accessor));
  }
}

void ContactDetailsType::reset() noexcept {
  operatorName_Accessor->reset();
  phoneNumber_Accessor->reset();
}

const uci::type::OperatorNameType& ContactDetailsType::getOperatorName() const {
  return *operatorName_Accessor;
}

uci::type::OperatorNameType& ContactDetailsType::getOperatorName() {
  return *operatorName_Accessor;
}

uci::type::ContactDetailsType& ContactDetailsType::setOperatorName(const uci::type::OperatorNameType& accessor) {
  if (&accessor != operatorName_Accessor.get()) {
    operatorName_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ContactDetailsType::PhoneNumber& ContactDetailsType::getPhoneNumber() const {
  return *phoneNumber_Accessor;
}

uci::type::ContactDetailsType::PhoneNumber& ContactDetailsType::getPhoneNumber() {
  return *phoneNumber_Accessor;
}

uci::type::ContactDetailsType& ContactDetailsType::setPhoneNumber(const uci::type::ContactDetailsType::PhoneNumber& accessor) {
  if (&accessor != phoneNumber_Accessor.get()) {
    phoneNumber_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<ContactDetailsType> ContactDetailsType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::contactDetailsType : type};
  return (requestedType == uci::type::accessorType::contactDetailsType) ? boost::make_unique<ContactDetailsType>() : nullptr;
}

/**  */
namespace ContactDetailsType_Names {

constexpr const char* Extern_Type_Name{"ContactDetailsType"};
constexpr const char* OperatorName_Name{"OperatorName"};
constexpr const char* PhoneNumber_Name{"PhoneNumber"};

} // namespace ContactDetailsType_Names

void ContactDetailsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ContactDetailsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ContactDetailsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ContactDetailsType_Names::OperatorName_Name) {
      OperatorNameType::deserialize(valueType.second, accessor.getOperatorName(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ContactDetailsType_Names::PhoneNumber_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ContactDetailsType::PhoneNumber& boundedList = accessor.getPhoneNumber();
        const uci::type::ContactDetailsType::PhoneNumber::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setStringValue(*value);
      }
    }
  }
}

std::string ContactDetailsType::serialize(const uci::type::ContactDetailsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ContactDetailsType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ContactDetailsType_Names::Extern_Type_Name);
  }
  OperatorNameType::serialize(accessor.getOperatorName(), node, ContactDetailsType_Names::OperatorName_Name);
  {
    const uci::type::ContactDetailsType::PhoneNumber& boundedList = accessor.getPhoneNumber();
    for (uci::type::ContactDetailsType::PhoneNumber::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::util::SerializationHelpers::serializeString(boundedList.at(i), node, ContactDetailsType_Names::PhoneNumber_Name);
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

uci::type::ContactDetailsType& ContactDetailsType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ContactDetailsType>().release());
}

uci::type::ContactDetailsType& ContactDetailsType::create(const uci::type::ContactDetailsType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ContactDetailsType> newAccessor{boost::make_unique<asb_uci::type::ContactDetailsType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ContactDetailsType::destroy(uci::type::ContactDetailsType& accessor) {
  delete dynamic_cast<asb_uci::type::ContactDetailsType*>(&accessor);
}

} // namespace type

} // namespace uci

