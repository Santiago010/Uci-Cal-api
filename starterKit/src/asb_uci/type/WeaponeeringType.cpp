/** @file WeaponeeringType.cpp
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

#include "../../../include/asb_uci/type/WeaponeeringType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ApproachConditionsType.h"
#include "../../../include/asb_uci/type/ImpactConditionsType.h"
#include "../../../include/asb_uci/type/WeaponeeringStoreType.h"
#include "../../../include/asb_uci/type/WeaponeeringTargetInfoType.h"
#include "../../../include/asb_uci/util/DerivedTypesCopier.h"
#include "../../../include/asb_uci/util/DerivedTypesCreator.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/DerivedTypesSerializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ApproachConditionsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ImpactConditionsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/WeaponeeringStoreType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/WeaponeeringTargetInfoType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/WeaponeeringType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

WeaponeeringType::WeaponeeringType() = default;

WeaponeeringType::~WeaponeeringType() = default;

void WeaponeeringType::copy(const uci::type::WeaponeeringType& accessor) {
  copyImpl(accessor, false);
}

void WeaponeeringType::copyImpl(const uci::type::WeaponeeringType& accessor, const bool checkIfDerivation) {
  if (&accessor != this) {
    if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::weaponeeringType)) {
      const auto& accessorImpl = dynamic_cast<const WeaponeeringType&>(accessor);
      if (accessorImpl.storeInformation_Accessor) {
        setStoreInformation(*(accessorImpl.storeInformation_Accessor));
      } else {
        storeInformation_Accessor.reset();
      }
      if (accessorImpl.targetInformation_Accessor) {
        setTargetInformation(*(accessorImpl.targetInformation_Accessor));
      } else {
        targetInformation_Accessor.reset();
      }
      if (accessorImpl.approachConditions_Accessor) {
        setApproachConditions(*(accessorImpl.approachConditions_Accessor));
      } else {
        approachConditions_Accessor.reset();
      }
      if (accessorImpl.impactConditions_Accessor) {
        setImpactConditions(*(accessorImpl.impactConditions_Accessor));
      } else {
        impactConditions_Accessor.reset();
      }
    } else {
      asb_uci::util::DerivedTypesCopier::copy(accessor, *this);
    }
  }
}

void WeaponeeringType::reset() noexcept {
  storeInformation_Accessor.reset();
  targetInformation_Accessor.reset();
  approachConditions_Accessor.reset();
  impactConditions_Accessor.reset();
}

uci::type::WeaponeeringStoreType& WeaponeeringType::getStoreInformation_() const {
  if (storeInformation_Accessor) {
    return *storeInformation_Accessor;
  }
  throw uci::base::UCIException("Error in getStoreInformation(): An attempt was made to get an optional field that was not enabled, call hasStoreInformation() to determine if it is safe to call getStoreInformation()");
}

const uci::type::WeaponeeringStoreType& WeaponeeringType::getStoreInformation() const {
  return getStoreInformation_();
}

uci::type::WeaponeeringStoreType& WeaponeeringType::getStoreInformation() {
  return getStoreInformation_();
}

uci::type::WeaponeeringType& WeaponeeringType::setStoreInformation(const uci::type::WeaponeeringStoreType& accessor) {
  enableStoreInformation();
  if (&accessor != storeInformation_Accessor.get()) {
    storeInformation_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool WeaponeeringType::hasStoreInformation() const noexcept {
  return static_cast<bool>(storeInformation_Accessor);
}

uci::type::WeaponeeringStoreType& WeaponeeringType::enableStoreInformation(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::weaponeeringStoreType : type};
  if ((!storeInformation_Accessor) || (storeInformation_Accessor->getAccessorType() != requestedType)) {
    storeInformation_Accessor = WeaponeeringStoreType::create(requestedType);
    if (!storeInformation_Accessor) {
      throw uci::base::UCIException("Error in enableStoreInformation(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *storeInformation_Accessor;
}

uci::type::WeaponeeringType& WeaponeeringType::clearStoreInformation() noexcept {
  storeInformation_Accessor.reset();
  return *this;
}

uci::type::WeaponeeringTargetInfoType& WeaponeeringType::getTargetInformation_() const {
  if (targetInformation_Accessor) {
    return *targetInformation_Accessor;
  }
  throw uci::base::UCIException("Error in getTargetInformation(): An attempt was made to get an optional field that was not enabled, call hasTargetInformation() to determine if it is safe to call getTargetInformation()");
}

const uci::type::WeaponeeringTargetInfoType& WeaponeeringType::getTargetInformation() const {
  return getTargetInformation_();
}

uci::type::WeaponeeringTargetInfoType& WeaponeeringType::getTargetInformation() {
  return getTargetInformation_();
}

uci::type::WeaponeeringType& WeaponeeringType::setTargetInformation(const uci::type::WeaponeeringTargetInfoType& accessor) {
  enableTargetInformation();
  if (&accessor != targetInformation_Accessor.get()) {
    targetInformation_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool WeaponeeringType::hasTargetInformation() const noexcept {
  return static_cast<bool>(targetInformation_Accessor);
}

uci::type::WeaponeeringTargetInfoType& WeaponeeringType::enableTargetInformation(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::weaponeeringTargetInfoType : type};
  if ((!targetInformation_Accessor) || (targetInformation_Accessor->getAccessorType() != requestedType)) {
    targetInformation_Accessor = WeaponeeringTargetInfoType::create(requestedType);
    if (!targetInformation_Accessor) {
      throw uci::base::UCIException("Error in enableTargetInformation(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *targetInformation_Accessor;
}

uci::type::WeaponeeringType& WeaponeeringType::clearTargetInformation() noexcept {
  targetInformation_Accessor.reset();
  return *this;
}

uci::type::ApproachConditionsType& WeaponeeringType::getApproachConditions_() const {
  if (approachConditions_Accessor) {
    return *approachConditions_Accessor;
  }
  throw uci::base::UCIException("Error in getApproachConditions(): An attempt was made to get an optional field that was not enabled, call hasApproachConditions() to determine if it is safe to call getApproachConditions()");
}

const uci::type::ApproachConditionsType& WeaponeeringType::getApproachConditions() const {
  return getApproachConditions_();
}

uci::type::ApproachConditionsType& WeaponeeringType::getApproachConditions() {
  return getApproachConditions_();
}

uci::type::WeaponeeringType& WeaponeeringType::setApproachConditions(const uci::type::ApproachConditionsType& accessor) {
  enableApproachConditions();
  if (&accessor != approachConditions_Accessor.get()) {
    approachConditions_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool WeaponeeringType::hasApproachConditions() const noexcept {
  return static_cast<bool>(approachConditions_Accessor);
}

uci::type::ApproachConditionsType& WeaponeeringType::enableApproachConditions(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::approachConditionsType : type};
  if ((!approachConditions_Accessor) || (approachConditions_Accessor->getAccessorType() != requestedType)) {
    approachConditions_Accessor = ApproachConditionsType::create(requestedType);
    if (!approachConditions_Accessor) {
      throw uci::base::UCIException("Error in enableApproachConditions(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *approachConditions_Accessor;
}

uci::type::WeaponeeringType& WeaponeeringType::clearApproachConditions() noexcept {
  approachConditions_Accessor.reset();
  return *this;
}

uci::type::ImpactConditionsType& WeaponeeringType::getImpactConditions_() const {
  if (impactConditions_Accessor) {
    return *impactConditions_Accessor;
  }
  throw uci::base::UCIException("Error in getImpactConditions(): An attempt was made to get an optional field that was not enabled, call hasImpactConditions() to determine if it is safe to call getImpactConditions()");
}

const uci::type::ImpactConditionsType& WeaponeeringType::getImpactConditions() const {
  return getImpactConditions_();
}

uci::type::ImpactConditionsType& WeaponeeringType::getImpactConditions() {
  return getImpactConditions_();
}

uci::type::WeaponeeringType& WeaponeeringType::setImpactConditions(const uci::type::ImpactConditionsType& accessor) {
  enableImpactConditions();
  if (&accessor != impactConditions_Accessor.get()) {
    impactConditions_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool WeaponeeringType::hasImpactConditions() const noexcept {
  return static_cast<bool>(impactConditions_Accessor);
}

uci::type::ImpactConditionsType& WeaponeeringType::enableImpactConditions(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::impactConditionsType : type};
  if ((!impactConditions_Accessor) || (impactConditions_Accessor->getAccessorType() != requestedType)) {
    impactConditions_Accessor = ImpactConditionsType::create(requestedType);
    if (!impactConditions_Accessor) {
      throw uci::base::UCIException("Error in enableImpactConditions(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *impactConditions_Accessor;
}

uci::type::WeaponeeringType& WeaponeeringType::clearImpactConditions() noexcept {
  impactConditions_Accessor.reset();
  return *this;
}

std::unique_ptr<WeaponeeringType> WeaponeeringType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::weaponeeringType : type};
  return std::unique_ptr<WeaponeeringType>(dynamic_cast<WeaponeeringType*>(asb_uci::util::DerivedTypesCreator::create(requestedType)));
}

/**  */
namespace WeaponeeringType_Names {

constexpr const char* Extern_Type_Name{"WeaponeeringType"};
constexpr const char* StoreInformation_Name{"StoreInformation"};
constexpr const char* TargetInformation_Name{"TargetInformation"};
constexpr const char* ApproachConditions_Name{"ApproachConditions"};
constexpr const char* ImpactConditions_Name{"ImpactConditions"};

} // namespace WeaponeeringType_Names

void WeaponeeringType::deserialize(const boost::property_tree::ptree& propTree, uci::type::WeaponeeringType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = WeaponeeringType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + WeaponeeringType_Names::StoreInformation_Name) {
      WeaponeeringStoreType::deserialize(valueType.second, accessor.enableStoreInformation(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + WeaponeeringType_Names::TargetInformation_Name) {
      WeaponeeringTargetInfoType::deserialize(valueType.second, accessor.enableTargetInformation(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + WeaponeeringType_Names::ApproachConditions_Name) {
      ApproachConditionsType::deserialize(valueType.second, accessor.enableApproachConditions(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + WeaponeeringType_Names::ImpactConditions_Name) {
      ImpactConditionsType::deserialize(valueType.second, accessor.enableImpactConditions(), nodeName, nsPrefix);
    }
  }
}

std::string WeaponeeringType::serialize(const uci::type::WeaponeeringType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? WeaponeeringType_Names::Extern_Type_Name : nodeName)};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::weaponeeringType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      asb_uci::util::SerializationHelpers::addTypeAttribute(node, WeaponeeringType_Names::Extern_Type_Name);
    }
    if (accessor.hasStoreInformation()) {
      WeaponeeringStoreType::serialize(accessor.getStoreInformation(), node, WeaponeeringType_Names::StoreInformation_Name);
    }
    if (accessor.hasTargetInformation()) {
      WeaponeeringTargetInfoType::serialize(accessor.getTargetInformation(), node, WeaponeeringType_Names::TargetInformation_Name);
    }
    if (accessor.hasApproachConditions()) {
      ApproachConditionsType::serialize(accessor.getApproachConditions(), node, WeaponeeringType_Names::ApproachConditions_Name);
    }
    if (accessor.hasImpactConditions()) {
      ImpactConditionsType::serialize(accessor.getImpactConditions(), node, WeaponeeringType_Names::ImpactConditions_Name);
    }
    if (createNode) {
      propTree.add_child(generatedNodeName, node);
    }
  } else {
    asb_uci::util::DerivedTypesSerializer::serialize(accessor, propTree, nodeName, createNode);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace asb_uci

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

uci::type::WeaponeeringType& WeaponeeringType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::WeaponeeringType>().release());
}

uci::type::WeaponeeringType& WeaponeeringType::create(const uci::type::WeaponeeringType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::WeaponeeringType> newAccessor{boost::make_unique<asb_uci::type::WeaponeeringType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void WeaponeeringType::destroy(uci::type::WeaponeeringType& accessor) {
  delete dynamic_cast<asb_uci::type::WeaponeeringType*>(&accessor);
}

} // namespace type

} // namespace uci

