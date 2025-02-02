/** @file OrbitDurationType.cpp
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

#include "../../../include/asb_uci/type/OrbitDurationType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DurationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitDurationType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OrbitDurationType::OrbitDurationType() = default;

OrbitDurationType::~OrbitDurationType() = default;

void OrbitDurationType::copy(const uci::type::OrbitDurationType& accessor) {
  copyImpl(accessor, false);
}

void OrbitDurationType::copyImpl(const uci::type::OrbitDurationType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const OrbitDurationType&>(accessor);
    time_Accessor = (accessorImpl.time_Accessor ? accessorImpl.time_Accessor : boost::none);
    numberOfOrbits_Accessor = (accessorImpl.numberOfOrbits_Accessor ? accessorImpl.numberOfOrbits_Accessor : boost::none);
  }
}

void OrbitDurationType::reset() noexcept {
  time_Accessor.reset();
  numberOfOrbits_Accessor.reset();
}

uci::type::OrbitDurationType::OrbitDurationTypeChoice OrbitDurationType::getOrbitDurationTypeChoiceOrdinal() const noexcept {
  if (time_Accessor) {
    return ORBITDURATIONTYPE_CHOICE_TIME;
  }
  if (numberOfOrbits_Accessor) {
    return ORBITDURATIONTYPE_CHOICE_NUMBEROFORBITS;
  }
  return ORBITDURATIONTYPE_CHOICE_NONE;
}

uci::type::OrbitDurationType& OrbitDurationType::setOrbitDurationTypeChoiceOrdinal(uci::type::OrbitDurationType::OrbitDurationTypeChoice ordinal, uci::base::accessorType::AccessorType /*type*/) {
  switch (ordinal) {
    case ORBITDURATIONTYPE_CHOICE_TIME:
      chooseTime();
      break;
    case ORBITDURATIONTYPE_CHOICE_NUMBEROFORBITS:
      chooseNumberOfOrbits();
      break;
    default:
      throw uci::base::UCIException("Error in setOrbitDurationTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::DurationTypeValue OrbitDurationType::getTime() const {
  if (time_Accessor) {
    return *time_Accessor;
  }
  throw uci::base::UCIException("Error in getTime(): Unable to get Time, field not selected");
}

uci::type::OrbitDurationType& OrbitDurationType::setTime(uci::type::DurationTypeValue value) {
  chooseTime();
  time_Accessor = value;
  return *this;
}

bool OrbitDurationType::isTime() const noexcept {
  return static_cast<bool>(time_Accessor);
}

void OrbitDurationType::chooseTime() {
  numberOfOrbits_Accessor.reset();
  if (!time_Accessor) {
    time_Accessor = boost::optional<asb_xs::Duration>();
  }
}

xs::UnsignedInt OrbitDurationType::getNumberOfOrbits() const {
  if (numberOfOrbits_Accessor) {
    return *numberOfOrbits_Accessor;
  }
  throw uci::base::UCIException("Error in getNumberOfOrbits(): Unable to get NumberOfOrbits, field not selected");
}

uci::type::OrbitDurationType& OrbitDurationType::setNumberOfOrbits(xs::UnsignedInt value) {
  chooseNumberOfOrbits();
  numberOfOrbits_Accessor = value;
  return *this;
}

bool OrbitDurationType::isNumberOfOrbits() const noexcept {
  return static_cast<bool>(numberOfOrbits_Accessor);
}

void OrbitDurationType::chooseNumberOfOrbits() {
  time_Accessor.reset();
  if (!numberOfOrbits_Accessor) {
    numberOfOrbits_Accessor = boost::optional<asb_xs::UnsignedInt>();
  }
}

std::unique_ptr<OrbitDurationType> OrbitDurationType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitDurationType : type};
  return (requestedType == uci::type::accessorType::orbitDurationType) ? boost::make_unique<OrbitDurationType>() : nullptr;
}

/**  */
namespace OrbitDurationType_Names {

constexpr const char* Extern_Type_Name{"OrbitDurationType"};
constexpr const char* Time_Name{"Time"};
constexpr const char* NumberOfOrbits_Name{"NumberOfOrbits"};

} // namespace OrbitDurationType_Names

void OrbitDurationType::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitDurationType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitDurationType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitDurationType_Names::Time_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTime(asb_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitDurationType_Names::NumberOfOrbits_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setNumberOfOrbits(asb_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    }
  }
}

std::string OrbitDurationType::serialize(const uci::type::OrbitDurationType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? OrbitDurationType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitDurationType_Names::Extern_Type_Name);
  }
  if (accessor.isTime()) {
    asb_uci::util::SerializationHelpers::serializeDuration(accessor.getTime(), node, OrbitDurationType_Names::Time_Name);
  } else if (accessor.isNumberOfOrbits()) {
    asb_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getNumberOfOrbits(), node, OrbitDurationType_Names::NumberOfOrbits_Name);
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

uci::type::OrbitDurationType& OrbitDurationType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OrbitDurationType>().release());
}

uci::type::OrbitDurationType& OrbitDurationType::create(const uci::type::OrbitDurationType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OrbitDurationType> newAccessor{boost::make_unique<asb_uci::type::OrbitDurationType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OrbitDurationType::destroy(uci::type::OrbitDurationType& accessor) {
  delete dynamic_cast<asb_uci::type::OrbitDurationType*>(&accessor);
}

} // namespace type

} // namespace uci

