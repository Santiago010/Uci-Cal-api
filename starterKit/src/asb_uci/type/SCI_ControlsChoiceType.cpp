/** @file SCI_ControlsChoiceType.cpp
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

#include "../../../include/asb_uci/type/SCI_ControlsChoiceType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/SCI_ControlsEnum.h"
#include "../../../include/asb_uci/type/SCI_ControlsType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SCI_ControlsChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SCI_ControlsEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SCI_ControlsType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SCI_ControlsChoiceType::SCI_ControlsChoiceType() = default;

SCI_ControlsChoiceType::~SCI_ControlsChoiceType() = default;

void SCI_ControlsChoiceType::copy(const uci::type::SCI_ControlsChoiceType& accessor) {
  copyImpl(accessor, false);
}

void SCI_ControlsChoiceType::copyImpl(const uci::type::SCI_ControlsChoiceType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const SCI_ControlsChoiceType&>(accessor);
    if (accessorImpl.standardCompartment_Accessor) {
      setStandardCompartment(*(accessorImpl.standardCompartment_Accessor));
    } else {
      standardCompartment_Accessor.reset();
    }
    if (accessorImpl.subCompartment_Accessor) {
      setSubCompartment(*(accessorImpl.subCompartment_Accessor));
    } else {
      subCompartment_Accessor.reset();
    }
  }
}

void SCI_ControlsChoiceType::reset() noexcept {
  standardCompartment_Accessor.reset();
  subCompartment_Accessor.reset();
}

uci::type::SCI_ControlsChoiceType::SCI_ControlsChoiceTypeChoice SCI_ControlsChoiceType::getSCI_ControlsChoiceTypeChoiceOrdinal() const noexcept {
  if (standardCompartment_Accessor) {
    return SCI_CONTROLSCHOICETYPE_CHOICE_STANDARDCOMPARTMENT;
  }
  if (subCompartment_Accessor) {
    return SCI_CONTROLSCHOICETYPE_CHOICE_SUBCOMPARTMENT;
  }
  return SCI_CONTROLSCHOICETYPE_CHOICE_NONE;
}

uci::type::SCI_ControlsChoiceType& SCI_ControlsChoiceType::setSCI_ControlsChoiceTypeChoiceOrdinal(uci::type::SCI_ControlsChoiceType::SCI_ControlsChoiceTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case SCI_CONTROLSCHOICETYPE_CHOICE_STANDARDCOMPARTMENT:
      chooseStandardCompartment("setSCI_ControlsChoiceTypeChoiceOrdinal", type);
      break;
    case SCI_CONTROLSCHOICETYPE_CHOICE_SUBCOMPARTMENT:
      chooseSubCompartment("setSCI_ControlsChoiceTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setSCI_ControlsChoiceTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::SCI_ControlsEnum& SCI_ControlsChoiceType::getStandardCompartment_() const {
  if (standardCompartment_Accessor) {
    return *standardCompartment_Accessor;
  }
  throw uci::base::UCIException("Error in getStandardCompartment(): Unable to get StandardCompartment, field not selected");
}

const uci::type::SCI_ControlsEnum& SCI_ControlsChoiceType::getStandardCompartment() const {
  return getStandardCompartment_();
}

uci::type::SCI_ControlsEnum& SCI_ControlsChoiceType::getStandardCompartment() {
  return getStandardCompartment_();
}

uci::type::SCI_ControlsChoiceType& SCI_ControlsChoiceType::setStandardCompartment(const uci::type::SCI_ControlsEnum& accessor) {
  chooseStandardCompartment();
  if (&accessor != standardCompartment_Accessor.get()) {
    standardCompartment_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::SCI_ControlsChoiceType& SCI_ControlsChoiceType::setStandardCompartment(uci::type::SCI_ControlsEnum::EnumerationItem value) {
  chooseStandardCompartment().setValue(value);
  return *this;
}

bool SCI_ControlsChoiceType::isStandardCompartment() const noexcept {
  return static_cast<bool>(standardCompartment_Accessor);
}

uci::type::SCI_ControlsEnum& SCI_ControlsChoiceType::chooseStandardCompartment(const std::string& method, uci::base::accessorType::AccessorType type) {
  subCompartment_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::sCI_ControlsEnum : type};
  if ((!standardCompartment_Accessor) || (standardCompartment_Accessor->getAccessorType() != requestedType)) {
    standardCompartment_Accessor = SCI_ControlsEnum::create(type);
    if (!standardCompartment_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *standardCompartment_Accessor;
}

uci::type::SCI_ControlsEnum& SCI_ControlsChoiceType::chooseStandardCompartment(uci::base::accessorType::AccessorType type) {
  return chooseStandardCompartment("chooseStandardCompartment", type);
}

uci::type::SCI_ControlsType& SCI_ControlsChoiceType::getSubCompartment_() const {
  if (subCompartment_Accessor) {
    return *subCompartment_Accessor;
  }
  throw uci::base::UCIException("Error in getSubCompartment(): An attempt was made to get an optional field that was not enabled, call hasSubCompartment() to determine if it is safe to call getSubCompartment()");
}

const uci::type::SCI_ControlsType& SCI_ControlsChoiceType::getSubCompartment() const {
  return getSubCompartment_();
}

uci::type::SCI_ControlsType& SCI_ControlsChoiceType::getSubCompartment() {
  return getSubCompartment_();
}

uci::type::SCI_ControlsChoiceType& SCI_ControlsChoiceType::setSubCompartment(const uci::type::SCI_ControlsType& value) {
  return setSubCompartment(value.c_str());
}

uci::type::SCI_ControlsChoiceType& SCI_ControlsChoiceType::setSubCompartment(const std::string& value) {
  return setSubCompartment(value.c_str());
}

uci::type::SCI_ControlsChoiceType& SCI_ControlsChoiceType::setSubCompartment(const char * value) {
  chooseSubCompartment().setStringValue(value);
  return *this;
}

bool SCI_ControlsChoiceType::isSubCompartment() const noexcept {
  return static_cast<bool>(subCompartment_Accessor);
}

uci::type::SCI_ControlsType& SCI_ControlsChoiceType::chooseSubCompartment(const std::string& /*method*/, uci::base::accessorType::AccessorType type) {
  standardCompartment_Accessor.reset();
  if (!subCompartment_Accessor) {
    subCompartment_Accessor = SCI_ControlsType::create(type);
  }
  return *subCompartment_Accessor;
}

uci::type::SCI_ControlsType& SCI_ControlsChoiceType::chooseSubCompartment(uci::base::accessorType::AccessorType type) {
  return chooseSubCompartment("chooseSubCompartment", type);
}

std::unique_ptr<SCI_ControlsChoiceType> SCI_ControlsChoiceType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::sCI_ControlsChoiceType : type};
  return (requestedType == uci::type::accessorType::sCI_ControlsChoiceType) ? boost::make_unique<SCI_ControlsChoiceType>() : nullptr;
}

/**  */
namespace SCI_ControlsChoiceType_Names {

constexpr const char* Extern_Type_Name{"SCI_ControlsChoiceType"};
constexpr const char* StandardCompartment_Name{"StandardCompartment"};
constexpr const char* SubCompartment_Name{"SubCompartment"};

} // namespace SCI_ControlsChoiceType_Names

void SCI_ControlsChoiceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SCI_ControlsChoiceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SCI_ControlsChoiceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SCI_ControlsChoiceType_Names::StandardCompartment_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.chooseStandardCompartment().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + SCI_ControlsChoiceType_Names::SubCompartment_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.chooseSubCompartment().setStringValue(*value);
      }
    }
  }
}

std::string SCI_ControlsChoiceType::serialize(const uci::type::SCI_ControlsChoiceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SCI_ControlsChoiceType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SCI_ControlsChoiceType_Names::Extern_Type_Name);
  }
  if (accessor.isStandardCompartment()) {
    SCI_ControlsEnum::serialize(accessor.getStandardCompartment(), node, SCI_ControlsChoiceType_Names::StandardCompartment_Name, false);
  } else if (accessor.isSubCompartment()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getSubCompartment(), node, SCI_ControlsChoiceType_Names::SubCompartment_Name);
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

uci::type::SCI_ControlsChoiceType& SCI_ControlsChoiceType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SCI_ControlsChoiceType>().release());
}

uci::type::SCI_ControlsChoiceType& SCI_ControlsChoiceType::create(const uci::type::SCI_ControlsChoiceType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SCI_ControlsChoiceType> newAccessor{boost::make_unique<asb_uci::type::SCI_ControlsChoiceType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SCI_ControlsChoiceType::destroy(uci::type::SCI_ControlsChoiceType& accessor) {
  delete dynamic_cast<asb_uci::type::SCI_ControlsChoiceType*>(&accessor);
}

} // namespace type

} // namespace uci

