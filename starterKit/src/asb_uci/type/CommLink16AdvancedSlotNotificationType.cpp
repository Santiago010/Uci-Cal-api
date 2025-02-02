/** @file CommLink16AdvancedSlotNotificationType.cpp
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

#include "../../../include/asb_uci/type/CommLink16AdvancedSlotNotificationType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CommLink16_AdvanceSlotNotificationModeEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommLink16AdvancedSlotNotificationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommLink16_AdvanceSlotNotificationModeEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Link16_SlotSelectionType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

CommLink16AdvancedSlotNotificationType::CommLink16AdvancedSlotNotificationType()
  : aSN_SlotMode_Accessor{boost::make_unique<CommLink16_AdvanceSlotNotificationModeEnum>()} {
}

CommLink16AdvancedSlotNotificationType::~CommLink16AdvancedSlotNotificationType() = default;

void CommLink16AdvancedSlotNotificationType::copy(const uci::type::CommLink16AdvancedSlotNotificationType& accessor) {
  copyImpl(accessor, false);
}

void CommLink16AdvancedSlotNotificationType::copyImpl(const uci::type::CommLink16AdvancedSlotNotificationType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const CommLink16AdvancedSlotNotificationType&>(accessor);
    setASN_SlotMode(*(accessorImpl.aSN_SlotMode_Accessor));
    setASN_SlotModeEnabled(accessorImpl.aSN_SlotModeEnabled_Accessor);
    setASN_SlotSelection(accessorImpl.aSN_SlotSelection_Accessor);
  }
}

void CommLink16AdvancedSlotNotificationType::reset() noexcept {
  aSN_SlotMode_Accessor->reset();
  aSN_SlotModeEnabled_Accessor = false;
  aSN_SlotSelection_Accessor = 0;
}

const uci::type::CommLink16_AdvanceSlotNotificationModeEnum& CommLink16AdvancedSlotNotificationType::getASN_SlotMode() const {
  return *aSN_SlotMode_Accessor;
}

uci::type::CommLink16_AdvanceSlotNotificationModeEnum& CommLink16AdvancedSlotNotificationType::getASN_SlotMode() {
  return *aSN_SlotMode_Accessor;
}

uci::type::CommLink16AdvancedSlotNotificationType& CommLink16AdvancedSlotNotificationType::setASN_SlotMode(const uci::type::CommLink16_AdvanceSlotNotificationModeEnum& accessor) {
  if (&accessor != aSN_SlotMode_Accessor.get()) {
    aSN_SlotMode_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::CommLink16AdvancedSlotNotificationType& CommLink16AdvancedSlotNotificationType::setASN_SlotMode(uci::type::CommLink16_AdvanceSlotNotificationModeEnum::EnumerationItem value) {
  aSN_SlotMode_Accessor->setValue(value);
  return *this;
}


xs::Boolean CommLink16AdvancedSlotNotificationType::getASN_SlotModeEnabled() const {
  return aSN_SlotModeEnabled_Accessor;
}

uci::type::CommLink16AdvancedSlotNotificationType& CommLink16AdvancedSlotNotificationType::setASN_SlotModeEnabled(xs::Boolean value) {
  aSN_SlotModeEnabled_Accessor = value;
  return *this;
}


uci::type::Link16_SlotSelectionTypeValue CommLink16AdvancedSlotNotificationType::getASN_SlotSelection() const {
  return aSN_SlotSelection_Accessor;
}

uci::type::CommLink16AdvancedSlotNotificationType& CommLink16AdvancedSlotNotificationType::setASN_SlotSelection(uci::type::Link16_SlotSelectionTypeValue value) {
  aSN_SlotSelection_Accessor = value;
  return *this;
}


std::unique_ptr<CommLink16AdvancedSlotNotificationType> CommLink16AdvancedSlotNotificationType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commLink16AdvancedSlotNotificationType : type};
  return (requestedType == uci::type::accessorType::commLink16AdvancedSlotNotificationType) ? boost::make_unique<CommLink16AdvancedSlotNotificationType>() : nullptr;
}

/**  */
namespace CommLink16AdvancedSlotNotificationType_Names {

constexpr const char* Extern_Type_Name{"CommLink16AdvancedSlotNotificationType"};
constexpr const char* ASN_SlotMode_Name{"ASN_SlotMode"};
constexpr const char* ASN_SlotModeEnabled_Name{"ASN_SlotModeEnabled"};
constexpr const char* ASN_SlotSelection_Name{"ASN_SlotSelection"};

} // namespace CommLink16AdvancedSlotNotificationType_Names

void CommLink16AdvancedSlotNotificationType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CommLink16AdvancedSlotNotificationType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CommLink16AdvancedSlotNotificationType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CommLink16AdvancedSlotNotificationType_Names::ASN_SlotMode_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getASN_SlotMode().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + CommLink16AdvancedSlotNotificationType_Names::ASN_SlotModeEnabled_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setASN_SlotModeEnabled(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + CommLink16AdvancedSlotNotificationType_Names::ASN_SlotSelection_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setASN_SlotSelection(asb_uci::util::SerializationHelpers::deserializeUnsignedByte(*value));
      }
    }
  }
}

std::string CommLink16AdvancedSlotNotificationType::serialize(const uci::type::CommLink16AdvancedSlotNotificationType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? CommLink16AdvancedSlotNotificationType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, CommLink16AdvancedSlotNotificationType_Names::Extern_Type_Name);
  }
  CommLink16_AdvanceSlotNotificationModeEnum::serialize(accessor.getASN_SlotMode(), node, CommLink16AdvancedSlotNotificationType_Names::ASN_SlotMode_Name, false);
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getASN_SlotModeEnabled(), node, CommLink16AdvancedSlotNotificationType_Names::ASN_SlotModeEnabled_Name);
  asb_uci::util::SerializationHelpers::serializeUnsignedByte(accessor.getASN_SlotSelection(), node, CommLink16AdvancedSlotNotificationType_Names::ASN_SlotSelection_Name);
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

uci::type::CommLink16AdvancedSlotNotificationType& CommLink16AdvancedSlotNotificationType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::CommLink16AdvancedSlotNotificationType>().release());
}

uci::type::CommLink16AdvancedSlotNotificationType& CommLink16AdvancedSlotNotificationType::create(const uci::type::CommLink16AdvancedSlotNotificationType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::CommLink16AdvancedSlotNotificationType> newAccessor{boost::make_unique<asb_uci::type::CommLink16AdvancedSlotNotificationType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void CommLink16AdvancedSlotNotificationType::destroy(uci::type::CommLink16AdvancedSlotNotificationType& accessor) {
  delete dynamic_cast<asb_uci::type::CommLink16AdvancedSlotNotificationType*>(&accessor);
}

} // namespace type

} // namespace uci

