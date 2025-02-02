/** @file EA_ChangeLocationAndPowerType.cpp
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

#include "../../../include/asb_uci/type/EA_ChangeLocationAndPowerType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/EA_PowerType.h"
#include "../../../include/asb_uci/type/EA_TargetPointingType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EA_ChangeLocationAndPowerType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EA_PowerType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EA_TargetPointingType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

EA_ChangeLocationAndPowerType::EA_ChangeLocationAndPowerType() = default;

EA_ChangeLocationAndPowerType::~EA_ChangeLocationAndPowerType() = default;

void EA_ChangeLocationAndPowerType::copy(const uci::type::EA_ChangeLocationAndPowerType& accessor) {
  copyImpl(accessor, false);
}

void EA_ChangeLocationAndPowerType::copyImpl(const uci::type::EA_ChangeLocationAndPowerType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const EA_ChangeLocationAndPowerType&>(accessor);
    if (accessorImpl.pointing_Accessor) {
      setPointing(*(accessorImpl.pointing_Accessor));
    } else {
      pointing_Accessor.reset();
    }
    if (accessorImpl.power_Accessor) {
      setPower(*(accessorImpl.power_Accessor));
    } else {
      power_Accessor.reset();
    }
  }
}

void EA_ChangeLocationAndPowerType::reset() noexcept {
  pointing_Accessor.reset();
  power_Accessor.reset();
}

uci::type::EA_TargetPointingType& EA_ChangeLocationAndPowerType::getPointing_() const {
  if (pointing_Accessor) {
    return *pointing_Accessor;
  }
  throw uci::base::UCIException("Error in getPointing(): An attempt was made to get an optional field that was not enabled, call hasPointing() to determine if it is safe to call getPointing()");
}

const uci::type::EA_TargetPointingType& EA_ChangeLocationAndPowerType::getPointing() const {
  return getPointing_();
}

uci::type::EA_TargetPointingType& EA_ChangeLocationAndPowerType::getPointing() {
  return getPointing_();
}

uci::type::EA_ChangeLocationAndPowerType& EA_ChangeLocationAndPowerType::setPointing(const uci::type::EA_TargetPointingType& accessor) {
  enablePointing();
  if (&accessor != pointing_Accessor.get()) {
    pointing_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool EA_ChangeLocationAndPowerType::hasPointing() const noexcept {
  return static_cast<bool>(pointing_Accessor);
}

uci::type::EA_TargetPointingType& EA_ChangeLocationAndPowerType::enablePointing(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::eA_TargetPointingType : type};
  if ((!pointing_Accessor) || (pointing_Accessor->getAccessorType() != requestedType)) {
    pointing_Accessor = EA_TargetPointingType::create(requestedType);
    if (!pointing_Accessor) {
      throw uci::base::UCIException("Error in enablePointing(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *pointing_Accessor;
}

uci::type::EA_ChangeLocationAndPowerType& EA_ChangeLocationAndPowerType::clearPointing() noexcept {
  pointing_Accessor.reset();
  return *this;
}

uci::type::EA_PowerType& EA_ChangeLocationAndPowerType::getPower_() const {
  if (power_Accessor) {
    return *power_Accessor;
  }
  throw uci::base::UCIException("Error in getPower(): An attempt was made to get an optional field that was not enabled, call hasPower() to determine if it is safe to call getPower()");
}

const uci::type::EA_PowerType& EA_ChangeLocationAndPowerType::getPower() const {
  return getPower_();
}

uci::type::EA_PowerType& EA_ChangeLocationAndPowerType::getPower() {
  return getPower_();
}

uci::type::EA_ChangeLocationAndPowerType& EA_ChangeLocationAndPowerType::setPower(const uci::type::EA_PowerType& accessor) {
  enablePower();
  if (&accessor != power_Accessor.get()) {
    power_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool EA_ChangeLocationAndPowerType::hasPower() const noexcept {
  return static_cast<bool>(power_Accessor);
}

uci::type::EA_PowerType& EA_ChangeLocationAndPowerType::enablePower(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::eA_PowerType : type};
  if ((!power_Accessor) || (power_Accessor->getAccessorType() != requestedType)) {
    power_Accessor = EA_PowerType::create(requestedType);
    if (!power_Accessor) {
      throw uci::base::UCIException("Error in enablePower(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *power_Accessor;
}

uci::type::EA_ChangeLocationAndPowerType& EA_ChangeLocationAndPowerType::clearPower() noexcept {
  power_Accessor.reset();
  return *this;
}

std::unique_ptr<EA_ChangeLocationAndPowerType> EA_ChangeLocationAndPowerType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::eA_ChangeLocationAndPowerType : type};
  return (requestedType == uci::type::accessorType::eA_ChangeLocationAndPowerType) ? boost::make_unique<EA_ChangeLocationAndPowerType>() : nullptr;
}

/**  */
namespace EA_ChangeLocationAndPowerType_Names {

constexpr const char* Extern_Type_Name{"EA_ChangeLocationAndPowerType"};
constexpr const char* Pointing_Name{"Pointing"};
constexpr const char* Power_Name{"Power"};

} // namespace EA_ChangeLocationAndPowerType_Names

void EA_ChangeLocationAndPowerType::deserialize(const boost::property_tree::ptree& propTree, uci::type::EA_ChangeLocationAndPowerType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EA_ChangeLocationAndPowerType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + EA_ChangeLocationAndPowerType_Names::Pointing_Name) {
      EA_TargetPointingType::deserialize(valueType.second, accessor.enablePointing(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EA_ChangeLocationAndPowerType_Names::Power_Name) {
      EA_PowerType::deserialize(valueType.second, accessor.enablePower(), nodeName, nsPrefix);
    }
  }
}

std::string EA_ChangeLocationAndPowerType::serialize(const uci::type::EA_ChangeLocationAndPowerType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? EA_ChangeLocationAndPowerType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, EA_ChangeLocationAndPowerType_Names::Extern_Type_Name);
  }
  if (accessor.hasPointing()) {
    EA_TargetPointingType::serialize(accessor.getPointing(), node, EA_ChangeLocationAndPowerType_Names::Pointing_Name);
  }
  if (accessor.hasPower()) {
    EA_PowerType::serialize(accessor.getPower(), node, EA_ChangeLocationAndPowerType_Names::Power_Name);
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

uci::type::EA_ChangeLocationAndPowerType& EA_ChangeLocationAndPowerType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::EA_ChangeLocationAndPowerType>().release());
}

uci::type::EA_ChangeLocationAndPowerType& EA_ChangeLocationAndPowerType::create(const uci::type::EA_ChangeLocationAndPowerType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::EA_ChangeLocationAndPowerType> newAccessor{boost::make_unique<asb_uci::type::EA_ChangeLocationAndPowerType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void EA_ChangeLocationAndPowerType::destroy(uci::type::EA_ChangeLocationAndPowerType& accessor) {
  delete dynamic_cast<asb_uci::type::EA_ChangeLocationAndPowerType*>(&accessor);
}

} // namespace type

} // namespace uci

