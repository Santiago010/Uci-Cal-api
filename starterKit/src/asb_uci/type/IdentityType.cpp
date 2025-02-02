/** @file IdentityType.cpp
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

#include "../../../include/asb_uci/type/IdentityType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/EOB_IdentityType.h"
#include "../../../include/asb_uci/type/EmitterIdentityType.h"
#include "../../../include/asb_uci/type/EnvironmentIdentityType.h"
#include "../../../include/asb_uci/type/FacilityIdentificationType.h"
#include "../../../include/asb_uci/type/PlatformIdentityType.h"
#include "../../../include/asb_uci/type/SpecificEmitterIdentityType.h"
#include "../../../include/asb_uci/type/SpecificIdentityType.h"
#include "../../../include/asb_uci/type/StandardIdentityType.h"
#include "../../../include/asb_uci/type/StoreType.h"
#include "../../../include/asb_uci/type/VehicleIdentificationType.h"
#include "../../../include/asb_uci/util/DerivedTypesCopier.h"
#include "../../../include/asb_uci/util/DerivedTypesCreator.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/DerivedTypesSerializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EOB_IdentityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EmitterIdentityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EnvironmentIdentityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/FacilityIdentificationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IdentityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlatformIdentityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SpecificEmitterIdentityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SpecificIdentityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/StandardIdentityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/StoreType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VehicleIdentificationType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

IdentityType::IdentityType()
  : emitter_Accessor{boost::make_unique<Emitter>(0, SIZE_MAX)},
    specificEmitter_Accessor{boost::make_unique<SpecificEmitter>(0, SIZE_MAX)} {
}

IdentityType::~IdentityType() = default;

void IdentityType::copy(const uci::type::IdentityType& accessor) {
  copyImpl(accessor, false);
}

void IdentityType::copyImpl(const uci::type::IdentityType& accessor, const bool checkIfDerivation) {
  if (&accessor != this) {
    if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::identityType)) {
      const auto& accessorImpl = dynamic_cast<const IdentityType&>(accessor);
      if (accessorImpl.standard_Accessor) {
        setStandard(*(accessorImpl.standard_Accessor));
      } else {
        standard_Accessor.reset();
      }
      if (accessorImpl.environment_Accessor) {
        setEnvironment(*(accessorImpl.environment_Accessor));
      } else {
        environment_Accessor.reset();
      }
      if (accessorImpl.platform_Accessor) {
        setPlatform(*(accessorImpl.platform_Accessor));
      } else {
        platform_Accessor.reset();
      }
      if (accessorImpl.specific_Accessor) {
        setSpecific(*(accessorImpl.specific_Accessor));
      } else {
        specific_Accessor.reset();
      }
      setEmitter(*(accessorImpl.emitter_Accessor));
      setSpecificEmitter(*(accessorImpl.specificEmitter_Accessor));
      if (accessorImpl.specificFacility_Accessor) {
        setSpecificFacility(*(accessorImpl.specificFacility_Accessor));
      } else {
        specificFacility_Accessor.reset();
      }
      if (accessorImpl.specificVehicle_Accessor) {
        setSpecificVehicle(*(accessorImpl.specificVehicle_Accessor));
      } else {
        specificVehicle_Accessor.reset();
      }
      if (accessorImpl.eOB_Accessor) {
        setEOB(*(accessorImpl.eOB_Accessor));
      } else {
        eOB_Accessor.reset();
      }
      if (accessorImpl.weapon_Accessor) {
        setWeapon(*(accessorImpl.weapon_Accessor));
      } else {
        weapon_Accessor.reset();
      }
    } else {
      asb_uci::util::DerivedTypesCopier::copy(accessor, *this);
    }
  }
}

void IdentityType::reset() noexcept {
  standard_Accessor.reset();
  environment_Accessor.reset();
  platform_Accessor.reset();
  specific_Accessor.reset();
  emitter_Accessor->reset();
  specificEmitter_Accessor->reset();
  specificFacility_Accessor.reset();
  specificVehicle_Accessor.reset();
  eOB_Accessor.reset();
  weapon_Accessor.reset();
}

uci::type::StandardIdentityType& IdentityType::getStandard_() const {
  if (standard_Accessor) {
    return *standard_Accessor;
  }
  throw uci::base::UCIException("Error in getStandard(): An attempt was made to get an optional field that was not enabled, call hasStandard() to determine if it is safe to call getStandard()");
}

const uci::type::StandardIdentityType& IdentityType::getStandard() const {
  return getStandard_();
}

uci::type::StandardIdentityType& IdentityType::getStandard() {
  return getStandard_();
}

uci::type::IdentityType& IdentityType::setStandard(const uci::type::StandardIdentityType& accessor) {
  enableStandard(accessor.getAccessorType());
  if (&accessor != standard_Accessor.get()) {
    standard_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool IdentityType::hasStandard() const noexcept {
  return static_cast<bool>(standard_Accessor);
}

uci::type::StandardIdentityType& IdentityType::enableStandard(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::standardIdentityType : type};
  if ((!standard_Accessor) || (standard_Accessor->getAccessorType() != requestedType)) {
    standard_Accessor = StandardIdentityType::create(requestedType);
    if (!standard_Accessor) {
      throw uci::base::UCIException("Error in enableStandard(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *standard_Accessor;
}

uci::type::IdentityType& IdentityType::clearStandard() noexcept {
  standard_Accessor.reset();
  return *this;
}

uci::type::EnvironmentIdentityType& IdentityType::getEnvironment_() const {
  if (environment_Accessor) {
    return *environment_Accessor;
  }
  throw uci::base::UCIException("Error in getEnvironment(): An attempt was made to get an optional field that was not enabled, call hasEnvironment() to determine if it is safe to call getEnvironment()");
}

const uci::type::EnvironmentIdentityType& IdentityType::getEnvironment() const {
  return getEnvironment_();
}

uci::type::EnvironmentIdentityType& IdentityType::getEnvironment() {
  return getEnvironment_();
}

uci::type::IdentityType& IdentityType::setEnvironment(const uci::type::EnvironmentIdentityType& accessor) {
  enableEnvironment();
  if (&accessor != environment_Accessor.get()) {
    environment_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool IdentityType::hasEnvironment() const noexcept {
  return static_cast<bool>(environment_Accessor);
}

uci::type::EnvironmentIdentityType& IdentityType::enableEnvironment(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::environmentIdentityType : type};
  if ((!environment_Accessor) || (environment_Accessor->getAccessorType() != requestedType)) {
    environment_Accessor = EnvironmentIdentityType::create(requestedType);
    if (!environment_Accessor) {
      throw uci::base::UCIException("Error in enableEnvironment(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *environment_Accessor;
}

uci::type::IdentityType& IdentityType::clearEnvironment() noexcept {
  environment_Accessor.reset();
  return *this;
}

uci::type::PlatformIdentityType& IdentityType::getPlatform_() const {
  if (platform_Accessor) {
    return *platform_Accessor;
  }
  throw uci::base::UCIException("Error in getPlatform(): An attempt was made to get an optional field that was not enabled, call hasPlatform() to determine if it is safe to call getPlatform()");
}

const uci::type::PlatformIdentityType& IdentityType::getPlatform() const {
  return getPlatform_();
}

uci::type::PlatformIdentityType& IdentityType::getPlatform() {
  return getPlatform_();
}

uci::type::IdentityType& IdentityType::setPlatform(const uci::type::PlatformIdentityType& accessor) {
  enablePlatform(accessor.getAccessorType());
  if (&accessor != platform_Accessor.get()) {
    platform_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool IdentityType::hasPlatform() const noexcept {
  return static_cast<bool>(platform_Accessor);
}

uci::type::PlatformIdentityType& IdentityType::enablePlatform(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::platformIdentityType : type};
  if ((!platform_Accessor) || (platform_Accessor->getAccessorType() != requestedType)) {
    platform_Accessor = PlatformIdentityType::create(requestedType);
    if (!platform_Accessor) {
      throw uci::base::UCIException("Error in enablePlatform(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *platform_Accessor;
}

uci::type::IdentityType& IdentityType::clearPlatform() noexcept {
  platform_Accessor.reset();
  return *this;
}

uci::type::SpecificIdentityType& IdentityType::getSpecific_() const {
  if (specific_Accessor) {
    return *specific_Accessor;
  }
  throw uci::base::UCIException("Error in getSpecific(): An attempt was made to get an optional field that was not enabled, call hasSpecific() to determine if it is safe to call getSpecific()");
}

const uci::type::SpecificIdentityType& IdentityType::getSpecific() const {
  return getSpecific_();
}

uci::type::SpecificIdentityType& IdentityType::getSpecific() {
  return getSpecific_();
}

uci::type::IdentityType& IdentityType::setSpecific(const uci::type::SpecificIdentityType& accessor) {
  enableSpecific(accessor.getAccessorType());
  if (&accessor != specific_Accessor.get()) {
    specific_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool IdentityType::hasSpecific() const noexcept {
  return static_cast<bool>(specific_Accessor);
}

uci::type::SpecificIdentityType& IdentityType::enableSpecific(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::specificIdentityType : type};
  if ((!specific_Accessor) || (specific_Accessor->getAccessorType() != requestedType)) {
    specific_Accessor = SpecificIdentityType::create(requestedType);
    if (!specific_Accessor) {
      throw uci::base::UCIException("Error in enableSpecific(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *specific_Accessor;
}

uci::type::IdentityType& IdentityType::clearSpecific() noexcept {
  specific_Accessor.reset();
  return *this;
}

const uci::type::IdentityType::Emitter& IdentityType::getEmitter() const {
  return *emitter_Accessor;
}

uci::type::IdentityType::Emitter& IdentityType::getEmitter() {
  return *emitter_Accessor;
}

uci::type::IdentityType& IdentityType::setEmitter(const uci::type::IdentityType::Emitter& accessor) {
  if (&accessor != emitter_Accessor.get()) {
    emitter_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::IdentityType::SpecificEmitter& IdentityType::getSpecificEmitter() const {
  return *specificEmitter_Accessor;
}

uci::type::IdentityType::SpecificEmitter& IdentityType::getSpecificEmitter() {
  return *specificEmitter_Accessor;
}

uci::type::IdentityType& IdentityType::setSpecificEmitter(const uci::type::IdentityType::SpecificEmitter& accessor) {
  if (&accessor != specificEmitter_Accessor.get()) {
    specificEmitter_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::FacilityIdentificationType& IdentityType::getSpecificFacility_() const {
  if (specificFacility_Accessor) {
    return *specificFacility_Accessor;
  }
  throw uci::base::UCIException("Error in getSpecificFacility(): An attempt was made to get an optional field that was not enabled, call hasSpecificFacility() to determine if it is safe to call getSpecificFacility()");
}

const uci::type::FacilityIdentificationType& IdentityType::getSpecificFacility() const {
  return getSpecificFacility_();
}

uci::type::FacilityIdentificationType& IdentityType::getSpecificFacility() {
  return getSpecificFacility_();
}

uci::type::IdentityType& IdentityType::setSpecificFacility(const uci::type::FacilityIdentificationType& accessor) {
  enableSpecificFacility();
  if (&accessor != specificFacility_Accessor.get()) {
    specificFacility_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool IdentityType::hasSpecificFacility() const noexcept {
  return static_cast<bool>(specificFacility_Accessor);
}

uci::type::FacilityIdentificationType& IdentityType::enableSpecificFacility(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::facilityIdentificationType : type};
  if ((!specificFacility_Accessor) || (specificFacility_Accessor->getAccessorType() != requestedType)) {
    specificFacility_Accessor = FacilityIdentificationType::create(requestedType);
    if (!specificFacility_Accessor) {
      throw uci::base::UCIException("Error in enableSpecificFacility(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *specificFacility_Accessor;
}

uci::type::IdentityType& IdentityType::clearSpecificFacility() noexcept {
  specificFacility_Accessor.reset();
  return *this;
}

uci::type::VehicleIdentificationType& IdentityType::getSpecificVehicle_() const {
  if (specificVehicle_Accessor) {
    return *specificVehicle_Accessor;
  }
  throw uci::base::UCIException("Error in getSpecificVehicle(): An attempt was made to get an optional field that was not enabled, call hasSpecificVehicle() to determine if it is safe to call getSpecificVehicle()");
}

const uci::type::VehicleIdentificationType& IdentityType::getSpecificVehicle() const {
  return getSpecificVehicle_();
}

uci::type::VehicleIdentificationType& IdentityType::getSpecificVehicle() {
  return getSpecificVehicle_();
}

uci::type::IdentityType& IdentityType::setSpecificVehicle(const uci::type::VehicleIdentificationType& accessor) {
  enableSpecificVehicle(accessor.getAccessorType());
  if (&accessor != specificVehicle_Accessor.get()) {
    specificVehicle_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool IdentityType::hasSpecificVehicle() const noexcept {
  return static_cast<bool>(specificVehicle_Accessor);
}

uci::type::VehicleIdentificationType& IdentityType::enableSpecificVehicle(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::vehicleIdentificationType : type};
  if ((!specificVehicle_Accessor) || (specificVehicle_Accessor->getAccessorType() != requestedType)) {
    specificVehicle_Accessor = VehicleIdentificationType::create(requestedType);
    if (!specificVehicle_Accessor) {
      throw uci::base::UCIException("Error in enableSpecificVehicle(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *specificVehicle_Accessor;
}

uci::type::IdentityType& IdentityType::clearSpecificVehicle() noexcept {
  specificVehicle_Accessor.reset();
  return *this;
}

uci::type::EOB_IdentityType& IdentityType::getEOB_() const {
  if (eOB_Accessor) {
    return *eOB_Accessor;
  }
  throw uci::base::UCIException("Error in getEOB(): An attempt was made to get an optional field that was not enabled, call hasEOB() to determine if it is safe to call getEOB()");
}

const uci::type::EOB_IdentityType& IdentityType::getEOB() const {
  return getEOB_();
}

uci::type::EOB_IdentityType& IdentityType::getEOB() {
  return getEOB_();
}

uci::type::IdentityType& IdentityType::setEOB(const uci::type::EOB_IdentityType& accessor) {
  enableEOB();
  if (&accessor != eOB_Accessor.get()) {
    eOB_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool IdentityType::hasEOB() const noexcept {
  return static_cast<bool>(eOB_Accessor);
}

uci::type::EOB_IdentityType& IdentityType::enableEOB(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::eOB_IdentityType : type};
  if ((!eOB_Accessor) || (eOB_Accessor->getAccessorType() != requestedType)) {
    eOB_Accessor = EOB_IdentityType::create(requestedType);
    if (!eOB_Accessor) {
      throw uci::base::UCIException("Error in enableEOB(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *eOB_Accessor;
}

uci::type::IdentityType& IdentityType::clearEOB() noexcept {
  eOB_Accessor.reset();
  return *this;
}

uci::type::StoreType& IdentityType::getWeapon_() const {
  if (weapon_Accessor) {
    return *weapon_Accessor;
  }
  throw uci::base::UCIException("Error in getWeapon(): An attempt was made to get an optional field that was not enabled, call hasWeapon() to determine if it is safe to call getWeapon()");
}

const uci::type::StoreType& IdentityType::getWeapon() const {
  return getWeapon_();
}

uci::type::StoreType& IdentityType::getWeapon() {
  return getWeapon_();
}

uci::type::IdentityType& IdentityType::setWeapon(const uci::type::StoreType& accessor) {
  enableWeapon(accessor.getAccessorType());
  if (&accessor != weapon_Accessor.get()) {
    weapon_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool IdentityType::hasWeapon() const noexcept {
  return static_cast<bool>(weapon_Accessor);
}

uci::type::StoreType& IdentityType::enableWeapon(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::storeType : type};
  if ((!weapon_Accessor) || (weapon_Accessor->getAccessorType() != requestedType)) {
    weapon_Accessor = StoreType::create(requestedType);
    if (!weapon_Accessor) {
      throw uci::base::UCIException("Error in enableWeapon(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *weapon_Accessor;
}

uci::type::IdentityType& IdentityType::clearWeapon() noexcept {
  weapon_Accessor.reset();
  return *this;
}

std::unique_ptr<IdentityType> IdentityType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::identityType : type};
  return std::unique_ptr<IdentityType>(dynamic_cast<IdentityType*>(asb_uci::util::DerivedTypesCreator::create(requestedType)));
}

/**  */
namespace IdentityType_Names {

constexpr const char* Extern_Type_Name{"IdentityType"};
constexpr const char* Standard_Name{"Standard"};
constexpr const char* Environment_Name{"Environment"};
constexpr const char* Platform_Name{"Platform"};
constexpr const char* Specific_Name{"Specific"};
constexpr const char* Emitter_Name{"Emitter"};
constexpr const char* SpecificEmitter_Name{"SpecificEmitter"};
constexpr const char* SpecificFacility_Name{"SpecificFacility"};
constexpr const char* SpecificVehicle_Name{"SpecificVehicle"};
constexpr const char* EOB_Name{"EOB"};
constexpr const char* Weapon_Name{"Weapon"};

} // namespace IdentityType_Names

void IdentityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::IdentityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = IdentityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + IdentityType_Names::Standard_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableStandard(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + IdentityType_Names::Environment_Name) {
      EnvironmentIdentityType::deserialize(valueType.second, accessor.enableEnvironment(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + IdentityType_Names::Platform_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enablePlatform(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + IdentityType_Names::Specific_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableSpecific(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + IdentityType_Names::Emitter_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::IdentityType::Emitter& boundedList = accessor.getEmitter();
        const uci::type::IdentityType::Emitter::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::EmitterIdentityType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + IdentityType_Names::SpecificEmitter_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::IdentityType::SpecificEmitter& boundedList = accessor.getSpecificEmitter();
        const uci::type::IdentityType::SpecificEmitter::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1, asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix));
        asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + IdentityType_Names::SpecificFacility_Name) {
      FacilityIdentificationType::deserialize(valueType.second, accessor.enableSpecificFacility(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + IdentityType_Names::SpecificVehicle_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableSpecificVehicle(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + IdentityType_Names::EOB_Name) {
      EOB_IdentityType::deserialize(valueType.second, accessor.enableEOB(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + IdentityType_Names::Weapon_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableWeapon(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    }
  }
}

std::string IdentityType::serialize(const uci::type::IdentityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? IdentityType_Names::Extern_Type_Name : nodeName)};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::identityType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      asb_uci::util::SerializationHelpers::addTypeAttribute(node, IdentityType_Names::Extern_Type_Name);
    }
    if (accessor.hasStandard()) {
      StandardIdentityType::serialize(accessor.getStandard(), node, IdentityType_Names::Standard_Name);
    }
    if (accessor.hasEnvironment()) {
      EnvironmentIdentityType::serialize(accessor.getEnvironment(), node, IdentityType_Names::Environment_Name);
    }
    if (accessor.hasPlatform()) {
      PlatformIdentityType::serialize(accessor.getPlatform(), node, IdentityType_Names::Platform_Name);
    }
    if (accessor.hasSpecific()) {
      SpecificIdentityType::serialize(accessor.getSpecific(), node, IdentityType_Names::Specific_Name);
    }
    {
      const uci::type::IdentityType::Emitter& boundedList = accessor.getEmitter();
      for (uci::type::IdentityType::Emitter::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::EmitterIdentityType::serialize(boundedList.at(i), node, IdentityType_Names::Emitter_Name);
      }
    }
    {
      const uci::type::IdentityType::SpecificEmitter& boundedList = accessor.getSpecificEmitter();
      for (uci::type::IdentityType::SpecificEmitter::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::SpecificEmitterIdentityType::serialize(boundedList.at(i), node, IdentityType_Names::SpecificEmitter_Name);
      }
    }
    if (accessor.hasSpecificFacility()) {
      FacilityIdentificationType::serialize(accessor.getSpecificFacility(), node, IdentityType_Names::SpecificFacility_Name);
    }
    if (accessor.hasSpecificVehicle()) {
      VehicleIdentificationType::serialize(accessor.getSpecificVehicle(), node, IdentityType_Names::SpecificVehicle_Name);
    }
    if (accessor.hasEOB()) {
      EOB_IdentityType::serialize(accessor.getEOB(), node, IdentityType_Names::EOB_Name);
    }
    if (accessor.hasWeapon()) {
      StoreType::serialize(accessor.getWeapon(), node, IdentityType_Names::Weapon_Name);
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

uci::type::IdentityType& IdentityType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::IdentityType>().release());
}

uci::type::IdentityType& IdentityType::create(const uci::type::IdentityType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::IdentityType> newAccessor{boost::make_unique<asb_uci::type::IdentityType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void IdentityType::destroy(uci::type::IdentityType& accessor) {
  delete dynamic_cast<asb_uci::type::IdentityType*>(&accessor);
}

} // namespace type

} // namespace uci

