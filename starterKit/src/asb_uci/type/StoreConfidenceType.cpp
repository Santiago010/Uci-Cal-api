/** @file StoreConfidenceType.cpp
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

#include "../../../include/asb_uci/type/StoreConfidenceType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/StoreType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PercentType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/StoreConfidenceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/StoreType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

StoreConfidenceType::StoreConfidenceType()
  : weaponType_Accessor{boost::make_unique<StoreType>()} {
}

StoreConfidenceType::~StoreConfidenceType() = default;

void StoreConfidenceType::copy(const uci::type::StoreConfidenceType& accessor) {
  copyImpl(accessor, false);
}

void StoreConfidenceType::copyImpl(const uci::type::StoreConfidenceType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const StoreConfidenceType&>(accessor);
    setWeaponType(*(accessorImpl.weaponType_Accessor));
    setConfidence(accessorImpl.confidence_Accessor);
  }
}

void StoreConfidenceType::reset() noexcept {
  if (weaponType_Accessor->getAccessorType() != uci::type::accessorType::storeType) {
    weaponType_Accessor = boost::make_unique<StoreType>();
  } else {
    weaponType_Accessor->reset();
  }
  confidence_Accessor = 0.0;
}

const uci::type::StoreType& StoreConfidenceType::getWeaponType() const {
  return *weaponType_Accessor;
}

uci::type::StoreType& StoreConfidenceType::getWeaponType() {
  return *weaponType_Accessor;
}

uci::type::StoreConfidenceType& StoreConfidenceType::setWeaponType(const uci::type::StoreType& accessor) {
  enableWeaponType(accessor.getAccessorType());
  if (&accessor != weaponType_Accessor.get()) {
    weaponType_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

uci::type::StoreType& StoreConfidenceType::enableWeaponType(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::storeType : type};
  if ((!weaponType_Accessor) || (weaponType_Accessor->getAccessorType() != requestedType)) {
    weaponType_Accessor = StoreType::create(requestedType);
    if (!weaponType_Accessor) {
      throw uci::base::UCIException("Error in enableWeaponType(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *weaponType_Accessor;
}

uci::type::PercentTypeValue StoreConfidenceType::getConfidence() const {
  return confidence_Accessor;
}

uci::type::StoreConfidenceType& StoreConfidenceType::setConfidence(uci::type::PercentTypeValue value) {
  confidence_Accessor = value;
  return *this;
}


std::unique_ptr<StoreConfidenceType> StoreConfidenceType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::storeConfidenceType : type};
  return (requestedType == uci::type::accessorType::storeConfidenceType) ? boost::make_unique<StoreConfidenceType>() : nullptr;
}

/**  */
namespace StoreConfidenceType_Names {

constexpr const char* Extern_Type_Name{"StoreConfidenceType"};
constexpr const char* WeaponType_Name{"WeaponType"};
constexpr const char* Confidence_Name{"Confidence"};

} // namespace StoreConfidenceType_Names

void StoreConfidenceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::StoreConfidenceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = StoreConfidenceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + StoreConfidenceType_Names::WeaponType_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableWeaponType(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + StoreConfidenceType_Names::Confidence_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setConfidence(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    }
  }
}

std::string StoreConfidenceType::serialize(const uci::type::StoreConfidenceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? StoreConfidenceType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, StoreConfidenceType_Names::Extern_Type_Name);
  }
  StoreType::serialize(accessor.getWeaponType(), node, StoreConfidenceType_Names::WeaponType_Name);
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getConfidence(), node, StoreConfidenceType_Names::Confidence_Name);
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

uci::type::StoreConfidenceType& StoreConfidenceType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::StoreConfidenceType>().release());
}

uci::type::StoreConfidenceType& StoreConfidenceType::create(const uci::type::StoreConfidenceType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::StoreConfidenceType> newAccessor{boost::make_unique<asb_uci::type::StoreConfidenceType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void StoreConfidenceType::destroy(uci::type::StoreConfidenceType& accessor) {
  delete dynamic_cast<asb_uci::type::StoreConfidenceType*>(&accessor);
}

} // namespace type

} // namespace uci

