/** @file StrikeTaskWeaponType.cpp
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

#include "../../../include/asb_uci/type/StrikeTaskWeaponType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/WeaponeeringType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/StrikeTaskWeaponType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

StrikeTaskWeaponType::StrikeTaskWeaponType() = default;

StrikeTaskWeaponType::~StrikeTaskWeaponType() = default;

void StrikeTaskWeaponType::copy(const uci::type::StrikeTaskWeaponType& accessor) {
  copyImpl(accessor, false);
}

void StrikeTaskWeaponType::copyImpl(const uci::type::StrikeTaskWeaponType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    WeaponeeringType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const StrikeTaskWeaponType&>(accessor);
    setRequiredWeapon(accessorImpl.requiredWeapon_Accessor);
  }
}

void StrikeTaskWeaponType::reset() noexcept {
  WeaponeeringType::reset();
  requiredWeapon_Accessor = false;
}

xs::Boolean StrikeTaskWeaponType::getRequiredWeapon() const {
  return requiredWeapon_Accessor;
}

uci::type::StrikeTaskWeaponType& StrikeTaskWeaponType::setRequiredWeapon(xs::Boolean value) {
  requiredWeapon_Accessor = value;
  return *this;
}


std::unique_ptr<StrikeTaskWeaponType> StrikeTaskWeaponType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::strikeTaskWeaponType : type};
  return (requestedType == uci::type::accessorType::strikeTaskWeaponType) ? boost::make_unique<StrikeTaskWeaponType>() : nullptr;
}

/**  */
namespace StrikeTaskWeaponType_Names {

constexpr const char* Extern_Type_Name{"StrikeTaskWeaponType"};
constexpr const char* RequiredWeapon_Name{"RequiredWeapon"};

} // namespace StrikeTaskWeaponType_Names

void StrikeTaskWeaponType::deserialize(const boost::property_tree::ptree& propTree, uci::type::StrikeTaskWeaponType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = StrikeTaskWeaponType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + StrikeTaskWeaponType_Names::RequiredWeapon_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRequiredWeapon(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    }
  }
  WeaponeeringType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string StrikeTaskWeaponType::serialize(const uci::type::StrikeTaskWeaponType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? StrikeTaskWeaponType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, StrikeTaskWeaponType_Names::Extern_Type_Name);
  }
  WeaponeeringType::serialize(accessor, node, "", false, false, false);
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getRequiredWeapon(), node, StrikeTaskWeaponType_Names::RequiredWeapon_Name);
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

uci::type::StrikeTaskWeaponType& StrikeTaskWeaponType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::StrikeTaskWeaponType>().release());
}

uci::type::StrikeTaskWeaponType& StrikeTaskWeaponType::create(const uci::type::StrikeTaskWeaponType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::StrikeTaskWeaponType> newAccessor{boost::make_unique<asb_uci::type::StrikeTaskWeaponType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void StrikeTaskWeaponType::destroy(uci::type::StrikeTaskWeaponType& accessor) {
  delete dynamic_cast<asb_uci::type::StrikeTaskWeaponType*>(&accessor);
}

} // namespace type

} // namespace uci

