/** @file ProductNeededByType.cpp
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

#include "../../../include/asb_uci/type/ProductNeededByType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/EmptyType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DurationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EmptyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductNeededByType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ProductNeededByType::ProductNeededByType() = default;

ProductNeededByType::~ProductNeededByType() = default;

void ProductNeededByType::copy(const uci::type::ProductNeededByType& accessor) {
  copyImpl(accessor, false);
}

void ProductNeededByType::copyImpl(const uci::type::ProductNeededByType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const ProductNeededByType&>(accessor);
    if (accessorImpl.asSoonAsPossible_Accessor) {
      setAsSoonAsPossible(*(accessorImpl.asSoonAsPossible_Accessor));
    } else {
      asSoonAsPossible_Accessor.reset();
    }
    absoluteTime_Accessor = (accessorImpl.absoluteTime_Accessor ? accessorImpl.absoluteTime_Accessor : boost::none);
    relativeToEventTime_Accessor = (accessorImpl.relativeToEventTime_Accessor ? accessorImpl.relativeToEventTime_Accessor : boost::none);
  }
}

void ProductNeededByType::reset() noexcept {
  asSoonAsPossible_Accessor.reset();
  absoluteTime_Accessor.reset();
  relativeToEventTime_Accessor.reset();
}

uci::type::ProductNeededByType::ProductNeededByTypeChoice ProductNeededByType::getProductNeededByTypeChoiceOrdinal() const noexcept {
  if (asSoonAsPossible_Accessor) {
    return PRODUCTNEEDEDBYTYPE_CHOICE_ASSOONASPOSSIBLE;
  }
  if (absoluteTime_Accessor) {
    return PRODUCTNEEDEDBYTYPE_CHOICE_ABSOLUTETIME;
  }
  if (relativeToEventTime_Accessor) {
    return PRODUCTNEEDEDBYTYPE_CHOICE_RELATIVETOEVENTTIME;
  }
  return PRODUCTNEEDEDBYTYPE_CHOICE_NONE;
}

uci::type::ProductNeededByType& ProductNeededByType::setProductNeededByTypeChoiceOrdinal(uci::type::ProductNeededByType::ProductNeededByTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case PRODUCTNEEDEDBYTYPE_CHOICE_ASSOONASPOSSIBLE:
      chooseAsSoonAsPossible("setProductNeededByTypeChoiceOrdinal", type);
      break;
    case PRODUCTNEEDEDBYTYPE_CHOICE_ABSOLUTETIME:
      chooseAbsoluteTime();
      break;
    case PRODUCTNEEDEDBYTYPE_CHOICE_RELATIVETOEVENTTIME:
      chooseRelativeToEventTime();
      break;
    default:
      throw uci::base::UCIException("Error in setProductNeededByTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::EmptyType& ProductNeededByType::getAsSoonAsPossible_() const {
  if (asSoonAsPossible_Accessor) {
    return *asSoonAsPossible_Accessor;
  }
  throw uci::base::UCIException("Error in getAsSoonAsPossible(): An attempt was made to get an optional field that was not enabled, call hasAsSoonAsPossible() to determine if it is safe to call getAsSoonAsPossible()");
}

const uci::type::EmptyType& ProductNeededByType::getAsSoonAsPossible() const {
  return getAsSoonAsPossible_();
}

uci::type::EmptyType& ProductNeededByType::getAsSoonAsPossible() {
  return getAsSoonAsPossible_();
}

uci::type::ProductNeededByType& ProductNeededByType::setAsSoonAsPossible(const uci::type::EmptyType& value) {
  return setAsSoonAsPossible(value.c_str());
}

uci::type::ProductNeededByType& ProductNeededByType::setAsSoonAsPossible(const std::string& value) {
  return setAsSoonAsPossible(value.c_str());
}

uci::type::ProductNeededByType& ProductNeededByType::setAsSoonAsPossible(const char * value) {
  chooseAsSoonAsPossible().setStringValue(value);
  return *this;
}

bool ProductNeededByType::isAsSoonAsPossible() const noexcept {
  return static_cast<bool>(asSoonAsPossible_Accessor);
}

uci::type::EmptyType& ProductNeededByType::chooseAsSoonAsPossible(const std::string& /*method*/, uci::base::accessorType::AccessorType type) {
  absoluteTime_Accessor.reset();
  relativeToEventTime_Accessor.reset();
  if (!asSoonAsPossible_Accessor) {
    asSoonAsPossible_Accessor = EmptyType::create(type);
  }
  return *asSoonAsPossible_Accessor;
}

uci::type::EmptyType& ProductNeededByType::chooseAsSoonAsPossible(uci::base::accessorType::AccessorType type) {
  return chooseAsSoonAsPossible("chooseAsSoonAsPossible", type);
}

uci::type::DateTimeTypeValue ProductNeededByType::getAbsoluteTime() const {
  if (absoluteTime_Accessor) {
    return *absoluteTime_Accessor;
  }
  throw uci::base::UCIException("Error in getAbsoluteTime(): Unable to get AbsoluteTime, field not selected");
}

uci::type::ProductNeededByType& ProductNeededByType::setAbsoluteTime(uci::type::DateTimeTypeValue value) {
  chooseAbsoluteTime();
  absoluteTime_Accessor = value;
  return *this;
}

bool ProductNeededByType::isAbsoluteTime() const noexcept {
  return static_cast<bool>(absoluteTime_Accessor);
}

void ProductNeededByType::chooseAbsoluteTime() {
  asSoonAsPossible_Accessor.reset();
  relativeToEventTime_Accessor.reset();
  if (!absoluteTime_Accessor) {
    absoluteTime_Accessor = boost::optional<asb_xs::DateTime>();
  }
}

uci::type::DurationTypeValue ProductNeededByType::getRelativeToEventTime() const {
  if (relativeToEventTime_Accessor) {
    return *relativeToEventTime_Accessor;
  }
  throw uci::base::UCIException("Error in getRelativeToEventTime(): Unable to get RelativeToEventTime, field not selected");
}

uci::type::ProductNeededByType& ProductNeededByType::setRelativeToEventTime(uci::type::DurationTypeValue value) {
  chooseRelativeToEventTime();
  relativeToEventTime_Accessor = value;
  return *this;
}

bool ProductNeededByType::isRelativeToEventTime() const noexcept {
  return static_cast<bool>(relativeToEventTime_Accessor);
}

void ProductNeededByType::chooseRelativeToEventTime() {
  asSoonAsPossible_Accessor.reset();
  absoluteTime_Accessor.reset();
  if (!relativeToEventTime_Accessor) {
    relativeToEventTime_Accessor = boost::optional<asb_xs::Duration>();
  }
}

std::unique_ptr<ProductNeededByType> ProductNeededByType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::productNeededByType : type};
  return (requestedType == uci::type::accessorType::productNeededByType) ? boost::make_unique<ProductNeededByType>() : nullptr;
}

/**  */
namespace ProductNeededByType_Names {

constexpr const char* Extern_Type_Name{"ProductNeededByType"};
constexpr const char* AsSoonAsPossible_Name{"AsSoonAsPossible"};
constexpr const char* AbsoluteTime_Name{"AbsoluteTime"};
constexpr const char* RelativeToEventTime_Name{"RelativeToEventTime"};

} // namespace ProductNeededByType_Names

void ProductNeededByType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ProductNeededByType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ProductNeededByType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ProductNeededByType_Names::AsSoonAsPossible_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.chooseAsSoonAsPossible().setStringValue(*value);
      }
    } else if (valueType.first == nsPrefix + ProductNeededByType_Names::AbsoluteTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAbsoluteTime(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + ProductNeededByType_Names::RelativeToEventTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRelativeToEventTime(asb_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    }
  }
}

std::string ProductNeededByType::serialize(const uci::type::ProductNeededByType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ProductNeededByType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ProductNeededByType_Names::Extern_Type_Name);
  }
  if (accessor.isAsSoonAsPossible()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getAsSoonAsPossible(), node, ProductNeededByType_Names::AsSoonAsPossible_Name);
  } else if (accessor.isAbsoluteTime()) {
    asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getAbsoluteTime(), node, ProductNeededByType_Names::AbsoluteTime_Name);
  } else if (accessor.isRelativeToEventTime()) {
    asb_uci::util::SerializationHelpers::serializeDuration(accessor.getRelativeToEventTime(), node, ProductNeededByType_Names::RelativeToEventTime_Name);
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

uci::type::ProductNeededByType& ProductNeededByType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ProductNeededByType>().release());
}

uci::type::ProductNeededByType& ProductNeededByType::create(const uci::type::ProductNeededByType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ProductNeededByType> newAccessor{boost::make_unique<asb_uci::type::ProductNeededByType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ProductNeededByType::destroy(uci::type::ProductNeededByType& accessor) {
  delete dynamic_cast<asb_uci::type::ProductNeededByType*>(&accessor);
}

} // namespace type

} // namespace uci

