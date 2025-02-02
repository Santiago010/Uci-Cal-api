/** @file FuzeTriggerType.cpp
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

#include "../../../include/asb_uci/type/FuzeTriggerType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DistanceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DurationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/FuzeTriggerType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

FuzeTriggerType::FuzeTriggerType() = default;

FuzeTriggerType::~FuzeTriggerType() = default;

void FuzeTriggerType::copy(const uci::type::FuzeTriggerType& accessor) {
  copyImpl(accessor, false);
}

void FuzeTriggerType::copyImpl(const uci::type::FuzeTriggerType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const FuzeTriggerType&>(accessor);
    fuzeDistance_Accessor = (accessorImpl.fuzeDistance_Accessor ? accessorImpl.fuzeDistance_Accessor : boost::none);
    fuzeDelayTime_Accessor = (accessorImpl.fuzeDelayTime_Accessor ? accessorImpl.fuzeDelayTime_Accessor : boost::none);
  }
}

void FuzeTriggerType::reset() noexcept {
  fuzeDistance_Accessor.reset();
  fuzeDelayTime_Accessor.reset();
}

uci::type::FuzeTriggerType::FuzeTriggerTypeChoice FuzeTriggerType::getFuzeTriggerTypeChoiceOrdinal() const noexcept {
  if (fuzeDistance_Accessor) {
    return FUZETRIGGERTYPE_CHOICE_FUZEDISTANCE;
  }
  if (fuzeDelayTime_Accessor) {
    return FUZETRIGGERTYPE_CHOICE_FUZEDELAYTIME;
  }
  return FUZETRIGGERTYPE_CHOICE_NONE;
}

uci::type::FuzeTriggerType& FuzeTriggerType::setFuzeTriggerTypeChoiceOrdinal(uci::type::FuzeTriggerType::FuzeTriggerTypeChoice ordinal, uci::base::accessorType::AccessorType /*type*/) {
  switch (ordinal) {
    case FUZETRIGGERTYPE_CHOICE_FUZEDISTANCE:
      chooseFuzeDistance();
      break;
    case FUZETRIGGERTYPE_CHOICE_FUZEDELAYTIME:
      chooseFuzeDelayTime();
      break;
    default:
      throw uci::base::UCIException("Error in setFuzeTriggerTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::DistanceTypeValue FuzeTriggerType::getFuzeDistance() const {
  if (fuzeDistance_Accessor) {
    return *fuzeDistance_Accessor;
  }
  throw uci::base::UCIException("Error in getFuzeDistance(): Unable to get FuzeDistance, field not selected");
}

uci::type::FuzeTriggerType& FuzeTriggerType::setFuzeDistance(uci::type::DistanceTypeValue value) {
  chooseFuzeDistance();
  fuzeDistance_Accessor = value;
  return *this;
}

bool FuzeTriggerType::isFuzeDistance() const noexcept {
  return static_cast<bool>(fuzeDistance_Accessor);
}

void FuzeTriggerType::chooseFuzeDistance() {
  fuzeDelayTime_Accessor.reset();
  if (!fuzeDistance_Accessor) {
    fuzeDistance_Accessor = boost::optional<asb_xs::Double>();
  }
}

uci::type::DurationTypeValue FuzeTriggerType::getFuzeDelayTime() const {
  if (fuzeDelayTime_Accessor) {
    return *fuzeDelayTime_Accessor;
  }
  throw uci::base::UCIException("Error in getFuzeDelayTime(): Unable to get FuzeDelayTime, field not selected");
}

uci::type::FuzeTriggerType& FuzeTriggerType::setFuzeDelayTime(uci::type::DurationTypeValue value) {
  chooseFuzeDelayTime();
  fuzeDelayTime_Accessor = value;
  return *this;
}

bool FuzeTriggerType::isFuzeDelayTime() const noexcept {
  return static_cast<bool>(fuzeDelayTime_Accessor);
}

void FuzeTriggerType::chooseFuzeDelayTime() {
  fuzeDistance_Accessor.reset();
  if (!fuzeDelayTime_Accessor) {
    fuzeDelayTime_Accessor = boost::optional<asb_xs::Duration>();
  }
}

std::unique_ptr<FuzeTriggerType> FuzeTriggerType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::fuzeTriggerType : type};
  return (requestedType == uci::type::accessorType::fuzeTriggerType) ? boost::make_unique<FuzeTriggerType>() : nullptr;
}

/**  */
namespace FuzeTriggerType_Names {

constexpr const char* Extern_Type_Name{"FuzeTriggerType"};
constexpr const char* FuzeDistance_Name{"FuzeDistance"};
constexpr const char* FuzeDelayTime_Name{"FuzeDelayTime"};

} // namespace FuzeTriggerType_Names

void FuzeTriggerType::deserialize(const boost::property_tree::ptree& propTree, uci::type::FuzeTriggerType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = FuzeTriggerType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + FuzeTriggerType_Names::FuzeDistance_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setFuzeDistance(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + FuzeTriggerType_Names::FuzeDelayTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setFuzeDelayTime(asb_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    }
  }
}

std::string FuzeTriggerType::serialize(const uci::type::FuzeTriggerType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? FuzeTriggerType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, FuzeTriggerType_Names::Extern_Type_Name);
  }
  if (accessor.isFuzeDistance()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getFuzeDistance(), node, FuzeTriggerType_Names::FuzeDistance_Name);
  } else if (accessor.isFuzeDelayTime()) {
    asb_uci::util::SerializationHelpers::serializeDuration(accessor.getFuzeDelayTime(), node, FuzeTriggerType_Names::FuzeDelayTime_Name);
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

uci::type::FuzeTriggerType& FuzeTriggerType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::FuzeTriggerType>().release());
}

uci::type::FuzeTriggerType& FuzeTriggerType::create(const uci::type::FuzeTriggerType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::FuzeTriggerType> newAccessor{boost::make_unique<asb_uci::type::FuzeTriggerType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void FuzeTriggerType::destroy(uci::type::FuzeTriggerType& accessor) {
  delete dynamic_cast<asb_uci::type::FuzeTriggerType*>(&accessor);
}

} // namespace type

} // namespace uci

