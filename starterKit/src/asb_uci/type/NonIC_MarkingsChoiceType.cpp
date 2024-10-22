/** @file NonIC_MarkingsChoiceType.cpp
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

#include "../../../include/asb_uci/type/NonIC_MarkingsChoiceType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/NonIC_MarkingsEnum.h"
#include "../../../include/asb_uci/type/NonIC_MarkingsType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/NonIC_MarkingsChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/NonIC_MarkingsEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/NonIC_MarkingsType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

NonIC_MarkingsChoiceType::NonIC_MarkingsChoiceType() = default;

NonIC_MarkingsChoiceType::~NonIC_MarkingsChoiceType() = default;

void NonIC_MarkingsChoiceType::copy(const uci::type::NonIC_MarkingsChoiceType& accessor) {
  copyImpl(accessor, false);
}

void NonIC_MarkingsChoiceType::copyImpl(const uci::type::NonIC_MarkingsChoiceType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const NonIC_MarkingsChoiceType&>(accessor);
    if (accessorImpl.standardMarking_Accessor) {
      setStandardMarking(*(accessorImpl.standardMarking_Accessor));
    } else {
      standardMarking_Accessor.reset();
    }
    if (accessorImpl.alternateMarking_Accessor) {
      setAlternateMarking(*(accessorImpl.alternateMarking_Accessor));
    } else {
      alternateMarking_Accessor.reset();
    }
  }
}

void NonIC_MarkingsChoiceType::reset() noexcept {
  standardMarking_Accessor.reset();
  alternateMarking_Accessor.reset();
}

uci::type::NonIC_MarkingsChoiceType::NonIC_MarkingsChoiceTypeChoice NonIC_MarkingsChoiceType::getNonIC_MarkingsChoiceTypeChoiceOrdinal() const noexcept {
  if (standardMarking_Accessor) {
    return NONIC_MARKINGSCHOICETYPE_CHOICE_STANDARDMARKING;
  }
  if (alternateMarking_Accessor) {
    return NONIC_MARKINGSCHOICETYPE_CHOICE_ALTERNATEMARKING;
  }
  return NONIC_MARKINGSCHOICETYPE_CHOICE_NONE;
}

uci::type::NonIC_MarkingsChoiceType& NonIC_MarkingsChoiceType::setNonIC_MarkingsChoiceTypeChoiceOrdinal(uci::type::NonIC_MarkingsChoiceType::NonIC_MarkingsChoiceTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case NONIC_MARKINGSCHOICETYPE_CHOICE_STANDARDMARKING:
      chooseStandardMarking("setNonIC_MarkingsChoiceTypeChoiceOrdinal", type);
      break;
    case NONIC_MARKINGSCHOICETYPE_CHOICE_ALTERNATEMARKING:
      chooseAlternateMarking("setNonIC_MarkingsChoiceTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setNonIC_MarkingsChoiceTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::NonIC_MarkingsEnum& NonIC_MarkingsChoiceType::getStandardMarking_() const {
  if (standardMarking_Accessor) {
    return *standardMarking_Accessor;
  }
  throw uci::base::UCIException("Error in getStandardMarking(): Unable to get StandardMarking, field not selected");
}

const uci::type::NonIC_MarkingsEnum& NonIC_MarkingsChoiceType::getStandardMarking() const {
  return getStandardMarking_();
}

uci::type::NonIC_MarkingsEnum& NonIC_MarkingsChoiceType::getStandardMarking() {
  return getStandardMarking_();
}

uci::type::NonIC_MarkingsChoiceType& NonIC_MarkingsChoiceType::setStandardMarking(const uci::type::NonIC_MarkingsEnum& accessor) {
  chooseStandardMarking();
  if (&accessor != standardMarking_Accessor.get()) {
    standardMarking_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::NonIC_MarkingsChoiceType& NonIC_MarkingsChoiceType::setStandardMarking(uci::type::NonIC_MarkingsEnum::EnumerationItem value) {
  chooseStandardMarking().setValue(value);
  return *this;
}

bool NonIC_MarkingsChoiceType::isStandardMarking() const noexcept {
  return static_cast<bool>(standardMarking_Accessor);
}

uci::type::NonIC_MarkingsEnum& NonIC_MarkingsChoiceType::chooseStandardMarking(const std::string& method, uci::base::accessorType::AccessorType type) {
  alternateMarking_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::nonIC_MarkingsEnum : type};
  if ((!standardMarking_Accessor) || (standardMarking_Accessor->getAccessorType() != requestedType)) {
    standardMarking_Accessor = NonIC_MarkingsEnum::create(type);
    if (!standardMarking_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *standardMarking_Accessor;
}

uci::type::NonIC_MarkingsEnum& NonIC_MarkingsChoiceType::chooseStandardMarking(uci::base::accessorType::AccessorType type) {
  return chooseStandardMarking("chooseStandardMarking", type);
}

uci::type::NonIC_MarkingsType& NonIC_MarkingsChoiceType::getAlternateMarking_() const {
  if (alternateMarking_Accessor) {
    return *alternateMarking_Accessor;
  }
  throw uci::base::UCIException("Error in getAlternateMarking(): An attempt was made to get an optional field that was not enabled, call hasAlternateMarking() to determine if it is safe to call getAlternateMarking()");
}

const uci::type::NonIC_MarkingsType& NonIC_MarkingsChoiceType::getAlternateMarking() const {
  return getAlternateMarking_();
}

uci::type::NonIC_MarkingsType& NonIC_MarkingsChoiceType::getAlternateMarking() {
  return getAlternateMarking_();
}

uci::type::NonIC_MarkingsChoiceType& NonIC_MarkingsChoiceType::setAlternateMarking(const uci::type::NonIC_MarkingsType& value) {
  return setAlternateMarking(value.c_str());
}

uci::type::NonIC_MarkingsChoiceType& NonIC_MarkingsChoiceType::setAlternateMarking(const std::string& value) {
  return setAlternateMarking(value.c_str());
}

uci::type::NonIC_MarkingsChoiceType& NonIC_MarkingsChoiceType::setAlternateMarking(const char * value) {
  chooseAlternateMarking().setStringValue(value);
  return *this;
}

bool NonIC_MarkingsChoiceType::isAlternateMarking() const noexcept {
  return static_cast<bool>(alternateMarking_Accessor);
}

uci::type::NonIC_MarkingsType& NonIC_MarkingsChoiceType::chooseAlternateMarking(const std::string& /*method*/, uci::base::accessorType::AccessorType type) {
  standardMarking_Accessor.reset();
  if (!alternateMarking_Accessor) {
    alternateMarking_Accessor = NonIC_MarkingsType::create(type);
  }
  return *alternateMarking_Accessor;
}

uci::type::NonIC_MarkingsType& NonIC_MarkingsChoiceType::chooseAlternateMarking(uci::base::accessorType::AccessorType type) {
  return chooseAlternateMarking("chooseAlternateMarking", type);
}

std::unique_ptr<NonIC_MarkingsChoiceType> NonIC_MarkingsChoiceType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::nonIC_MarkingsChoiceType : type};
  return (requestedType == uci::type::accessorType::nonIC_MarkingsChoiceType) ? boost::make_unique<NonIC_MarkingsChoiceType>() : nullptr;
}

/**  */
namespace NonIC_MarkingsChoiceType_Names {

constexpr const char* Extern_Type_Name{"NonIC_MarkingsChoiceType"};
constexpr const char* StandardMarking_Name{"StandardMarking"};
constexpr const char* AlternateMarking_Name{"AlternateMarking"};

} // namespace NonIC_MarkingsChoiceType_Names

void NonIC_MarkingsChoiceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::NonIC_MarkingsChoiceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = NonIC_MarkingsChoiceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + NonIC_MarkingsChoiceType_Names::StandardMarking_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.chooseStandardMarking().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + NonIC_MarkingsChoiceType_Names::AlternateMarking_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.chooseAlternateMarking().setStringValue(*value);
      }
    }
  }
}

std::string NonIC_MarkingsChoiceType::serialize(const uci::type::NonIC_MarkingsChoiceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? NonIC_MarkingsChoiceType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, NonIC_MarkingsChoiceType_Names::Extern_Type_Name);
  }
  if (accessor.isStandardMarking()) {
    NonIC_MarkingsEnum::serialize(accessor.getStandardMarking(), node, NonIC_MarkingsChoiceType_Names::StandardMarking_Name, false);
  } else if (accessor.isAlternateMarking()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getAlternateMarking(), node, NonIC_MarkingsChoiceType_Names::AlternateMarking_Name);
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

uci::type::NonIC_MarkingsChoiceType& NonIC_MarkingsChoiceType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::NonIC_MarkingsChoiceType>().release());
}

uci::type::NonIC_MarkingsChoiceType& NonIC_MarkingsChoiceType::create(const uci::type::NonIC_MarkingsChoiceType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::NonIC_MarkingsChoiceType> newAccessor{boost::make_unique<asb_uci::type::NonIC_MarkingsChoiceType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void NonIC_MarkingsChoiceType::destroy(uci::type::NonIC_MarkingsChoiceType& accessor) {
  delete dynamic_cast<asb_uci::type::NonIC_MarkingsChoiceType*>(&accessor);
}

} // namespace type

} // namespace uci

