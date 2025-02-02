/** @file OrbitType.cpp
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

#include "../../../include/asb_uci/type/OrbitType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CircleType.h"
#include "../../../include/asb_uci/type/OrbitDurationType.h"
#include "../../../include/asb_uci/type/OrbitEnum.h"
#include "../../../include/asb_uci/type/RelativeDirectionEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CircleType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitDurationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RelativeDirectionEnum.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OrbitType::OrbitType()
  : orbitType_Accessor{boost::make_unique<OrbitEnum>()},
    circle_Accessor{boost::make_unique<Circle>(1, 2)},
    turnDirection_Accessor{boost::make_unique<RelativeDirectionEnum>()},
    duration_Accessor{boost::make_unique<OrbitDurationType>()} {
}

OrbitType::~OrbitType() = default;

void OrbitType::copy(const uci::type::OrbitType& accessor) {
  copyImpl(accessor, false);
}

void OrbitType::copyImpl(const uci::type::OrbitType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const OrbitType&>(accessor);
    setOrbitType(*(accessorImpl.orbitType_Accessor));
    setCircle(*(accessorImpl.circle_Accessor));
    setTurnDirection(*(accessorImpl.turnDirection_Accessor));
    setDuration(*(accessorImpl.duration_Accessor));
  }
}

void OrbitType::reset() noexcept {
  orbitType_Accessor->reset();
  circle_Accessor->reset();
  turnDirection_Accessor->reset();
  duration_Accessor->reset();
}

const uci::type::OrbitEnum& OrbitType::getOrbitType() const {
  return *orbitType_Accessor;
}

uci::type::OrbitEnum& OrbitType::getOrbitType() {
  return *orbitType_Accessor;
}

uci::type::OrbitType& OrbitType::setOrbitType(const uci::type::OrbitEnum& accessor) {
  if (&accessor != orbitType_Accessor.get()) {
    orbitType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::OrbitType& OrbitType::setOrbitType(uci::type::OrbitEnum::EnumerationItem value) {
  orbitType_Accessor->setValue(value);
  return *this;
}


const uci::type::OrbitType::Circle& OrbitType::getCircle() const {
  return *circle_Accessor;
}

uci::type::OrbitType::Circle& OrbitType::getCircle() {
  return *circle_Accessor;
}

uci::type::OrbitType& OrbitType::setCircle(const uci::type::OrbitType::Circle& accessor) {
  if (&accessor != circle_Accessor.get()) {
    circle_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::RelativeDirectionEnum& OrbitType::getTurnDirection() const {
  return *turnDirection_Accessor;
}

uci::type::RelativeDirectionEnum& OrbitType::getTurnDirection() {
  return *turnDirection_Accessor;
}

uci::type::OrbitType& OrbitType::setTurnDirection(const uci::type::RelativeDirectionEnum& accessor) {
  if (&accessor != turnDirection_Accessor.get()) {
    turnDirection_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::OrbitType& OrbitType::setTurnDirection(uci::type::RelativeDirectionEnum::EnumerationItem value) {
  turnDirection_Accessor->setValue(value);
  return *this;
}


const uci::type::OrbitDurationType& OrbitType::getDuration() const {
  return *duration_Accessor;
}

uci::type::OrbitDurationType& OrbitType::getDuration() {
  return *duration_Accessor;
}

uci::type::OrbitType& OrbitType::setDuration(const uci::type::OrbitDurationType& accessor) {
  if (&accessor != duration_Accessor.get()) {
    duration_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<OrbitType> OrbitType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitType : type};
  return (requestedType == uci::type::accessorType::orbitType) ? boost::make_unique<OrbitType>() : nullptr;
}

/**  */
namespace OrbitType_Names {

constexpr const char* Extern_Type_Name{"OrbitType"};
constexpr const char* OrbitType_Name{"OrbitType"};
constexpr const char* Circle_Name{"Circle"};
constexpr const char* TurnDirection_Name{"TurnDirection"};
constexpr const char* Duration_Name{"Duration"};

} // namespace OrbitType_Names

void OrbitType::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitType_Names::OrbitType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getOrbitType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + OrbitType_Names::Circle_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::OrbitType::Circle& boundedList = accessor.getCircle();
        const uci::type::OrbitType::Circle::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::CircleType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + OrbitType_Names::TurnDirection_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getTurnDirection().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + OrbitType_Names::Duration_Name) {
      OrbitDurationType::deserialize(valueType.second, accessor.getDuration(), nodeName, nsPrefix);
    }
  }
}

std::string OrbitType::serialize(const uci::type::OrbitType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? OrbitType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitType_Names::Extern_Type_Name);
  }
  OrbitEnum::serialize(accessor.getOrbitType(), node, OrbitType_Names::OrbitType_Name, false);
  {
    const uci::type::OrbitType::Circle& boundedList = accessor.getCircle();
    for (uci::type::OrbitType::Circle::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::CircleType::serialize(boundedList.at(i), node, OrbitType_Names::Circle_Name);
    }
  }
  RelativeDirectionEnum::serialize(accessor.getTurnDirection(), node, OrbitType_Names::TurnDirection_Name, false);
  OrbitDurationType::serialize(accessor.getDuration(), node, OrbitType_Names::Duration_Name);
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

uci::type::OrbitType& OrbitType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OrbitType>().release());
}

uci::type::OrbitType& OrbitType::create(const uci::type::OrbitType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OrbitType> newAccessor{boost::make_unique<asb_uci::type::OrbitType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OrbitType::destroy(uci::type::OrbitType& accessor) {
  delete dynamic_cast<asb_uci::type::OrbitType*>(&accessor);
}

} // namespace type

} // namespace uci

