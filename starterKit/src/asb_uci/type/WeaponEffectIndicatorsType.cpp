/** @file WeaponEffectIndicatorsType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:15 PM
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

#include "../../../include/asb_uci/type/WeaponEffectIndicatorsType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/WeaponEffectIndicatorsType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

WeaponEffectIndicatorsType::WeaponEffectIndicatorsType() = default;

WeaponEffectIndicatorsType::~WeaponEffectIndicatorsType() = default;

void WeaponEffectIndicatorsType::copy(const uci::type::WeaponEffectIndicatorsType& accessor) {
  copyImpl(accessor, false);
}

void WeaponEffectIndicatorsType::copyImpl(const uci::type::WeaponEffectIndicatorsType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const WeaponEffectIndicatorsType&>(accessor);
    if (accessorImpl.hasPayloadDeployed()) {
      setPayloadDeployed(accessorImpl.getPayloadDeployed());
    } else {
      clearPayloadDeployed();
    }
    if (accessorImpl.hasDetonated()) {
      setDetonated(accessorImpl.getDetonated());
    } else {
      clearDetonated();
    }
  }
}

void WeaponEffectIndicatorsType::reset() noexcept {
  clearPayloadDeployed();
  clearDetonated();
}

xs::Boolean WeaponEffectIndicatorsType::getPayloadDeployed() const {
  if (payloadDeployed_Accessor) {
    return *payloadDeployed_Accessor;
  }
  throw uci::base::UCIException("Error in getPayloadDeployed(): An attempt was made to get an optional field that was not enabled, call hasPayloadDeployed() to determine if it is safe to call getPayloadDeployed()");
}

uci::type::WeaponEffectIndicatorsType& WeaponEffectIndicatorsType::setPayloadDeployed(xs::Boolean value) {
  payloadDeployed_Accessor = value;
  return *this;
}

bool WeaponEffectIndicatorsType::hasPayloadDeployed() const noexcept {
  return payloadDeployed_Accessor.has_value();
}

uci::type::WeaponEffectIndicatorsType& WeaponEffectIndicatorsType::clearPayloadDeployed() noexcept {
  payloadDeployed_Accessor.reset();
  return *this;
}

xs::Boolean WeaponEffectIndicatorsType::getDetonated() const {
  if (detonated_Accessor) {
    return *detonated_Accessor;
  }
  throw uci::base::UCIException("Error in getDetonated(): An attempt was made to get an optional field that was not enabled, call hasDetonated() to determine if it is safe to call getDetonated()");
}

uci::type::WeaponEffectIndicatorsType& WeaponEffectIndicatorsType::setDetonated(xs::Boolean value) {
  detonated_Accessor = value;
  return *this;
}

bool WeaponEffectIndicatorsType::hasDetonated() const noexcept {
  return detonated_Accessor.has_value();
}

uci::type::WeaponEffectIndicatorsType& WeaponEffectIndicatorsType::clearDetonated() noexcept {
  detonated_Accessor.reset();
  return *this;
}

std::unique_ptr<WeaponEffectIndicatorsType> WeaponEffectIndicatorsType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::weaponEffectIndicatorsType : type};
  return (requestedType == uci::type::accessorType::weaponEffectIndicatorsType) ? boost::make_unique<WeaponEffectIndicatorsType>() : nullptr;
}

/**  */
namespace WeaponEffectIndicatorsType_Names {

constexpr const char* Extern_Type_Name{"WeaponEffectIndicatorsType"};
constexpr const char* PayloadDeployed_Name{"PayloadDeployed"};
constexpr const char* Detonated_Name{"Detonated"};

} // namespace WeaponEffectIndicatorsType_Names

void WeaponEffectIndicatorsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::WeaponEffectIndicatorsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = WeaponEffectIndicatorsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + WeaponEffectIndicatorsType_Names::PayloadDeployed_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPayloadDeployed(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + WeaponEffectIndicatorsType_Names::Detonated_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setDetonated(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    }
  }
}

std::string WeaponEffectIndicatorsType::serialize(const uci::type::WeaponEffectIndicatorsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? WeaponEffectIndicatorsType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, WeaponEffectIndicatorsType_Names::Extern_Type_Name);
  }
  if (accessor.hasPayloadDeployed()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getPayloadDeployed(), node, WeaponEffectIndicatorsType_Names::PayloadDeployed_Name);
  }
  if (accessor.hasDetonated()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getDetonated(), node, WeaponEffectIndicatorsType_Names::Detonated_Name);
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

uci::type::WeaponEffectIndicatorsType& WeaponEffectIndicatorsType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::WeaponEffectIndicatorsType>().release());
}

uci::type::WeaponEffectIndicatorsType& WeaponEffectIndicatorsType::create(const uci::type::WeaponEffectIndicatorsType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::WeaponEffectIndicatorsType> newAccessor{boost::make_unique<asb_uci::type::WeaponEffectIndicatorsType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void WeaponEffectIndicatorsType::destroy(uci::type::WeaponEffectIndicatorsType& accessor) {
  delete dynamic_cast<asb_uci::type::WeaponEffectIndicatorsType*>(&accessor);
}

} // namespace type

} // namespace uci

