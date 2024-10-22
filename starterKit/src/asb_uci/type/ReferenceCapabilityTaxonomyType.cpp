/** @file ReferenceCapabilityTaxonomyType.cpp
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

#include "../../../include/asb_uci/type/ReferenceCapabilityTaxonomyType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ActionTypeEnum.h"
#include "../../../include/asb_uci/type/CommCapabilityEnum.h"
#include "../../../include/asb_uci/type/CyberTypeEnum.h"
#include "../../../include/asb_uci/type/EffectTypeEnum.h"
#include "../../../include/asb_uci/type/EnvironmentPairingEnum.h"
#include "../../../include/asb_uci/type/IdentificationTypeEnum.h"
#include "../../../include/asb_uci/type/SensingTypeEnum.h"
#include "../../../include/asb_uci/type/WeaponTypeEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActionTypeEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommCapabilityEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CyberTypeEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EffectTypeEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EnvironmentPairingEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IdentificationTypeEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ReferenceCapabilityTaxonomyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SensingTypeEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/WeaponTypeEnum.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ReferenceCapabilityTaxonomyType::ReferenceCapabilityTaxonomyType()
  : domainPairing_Accessor{boost::make_unique<DomainPairing>(1, 48)},
    effect_Accessor{boost::make_unique<Effect>(0, 47)},
    action_Accessor{boost::make_unique<Action>(0, 84)},
    sensing_Accessor{boost::make_unique<Sensing>(0, 35)},
    weapon_Accessor{boost::make_unique<Weapon>(0, 28)},
    communications_Accessor{boost::make_unique<Communications>(0, 53)},
    identification_Accessor{boost::make_unique<Identification>(0, 8)},
    cyber_Accessor{boost::make_unique<Cyber>(0, 17)} {
}

ReferenceCapabilityTaxonomyType::~ReferenceCapabilityTaxonomyType() = default;

void ReferenceCapabilityTaxonomyType::copy(const uci::type::ReferenceCapabilityTaxonomyType& accessor) {
  copyImpl(accessor, false);
}

void ReferenceCapabilityTaxonomyType::copyImpl(const uci::type::ReferenceCapabilityTaxonomyType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const ReferenceCapabilityTaxonomyType&>(accessor);
    setDomainPairing(*(accessorImpl.domainPairing_Accessor));
    setEffect(*(accessorImpl.effect_Accessor));
    setAction(*(accessorImpl.action_Accessor));
    setSensing(*(accessorImpl.sensing_Accessor));
    setWeapon(*(accessorImpl.weapon_Accessor));
    setCommunications(*(accessorImpl.communications_Accessor));
    setIdentification(*(accessorImpl.identification_Accessor));
    setCyber(*(accessorImpl.cyber_Accessor));
  }
}

void ReferenceCapabilityTaxonomyType::reset() noexcept {
  domainPairing_Accessor->reset();
  effect_Accessor->reset();
  action_Accessor->reset();
  sensing_Accessor->reset();
  weapon_Accessor->reset();
  communications_Accessor->reset();
  identification_Accessor->reset();
  cyber_Accessor->reset();
}

const uci::type::ReferenceCapabilityTaxonomyType::DomainPairing& ReferenceCapabilityTaxonomyType::getDomainPairing() const {
  return *domainPairing_Accessor;
}

uci::type::ReferenceCapabilityTaxonomyType::DomainPairing& ReferenceCapabilityTaxonomyType::getDomainPairing() {
  return *domainPairing_Accessor;
}

uci::type::ReferenceCapabilityTaxonomyType& ReferenceCapabilityTaxonomyType::setDomainPairing(const uci::type::ReferenceCapabilityTaxonomyType::DomainPairing& accessor) {
  if (&accessor != domainPairing_Accessor.get()) {
    domainPairing_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ReferenceCapabilityTaxonomyType::Effect& ReferenceCapabilityTaxonomyType::getEffect() const {
  return *effect_Accessor;
}

uci::type::ReferenceCapabilityTaxonomyType::Effect& ReferenceCapabilityTaxonomyType::getEffect() {
  return *effect_Accessor;
}

uci::type::ReferenceCapabilityTaxonomyType& ReferenceCapabilityTaxonomyType::setEffect(const uci::type::ReferenceCapabilityTaxonomyType::Effect& accessor) {
  if (&accessor != effect_Accessor.get()) {
    effect_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ReferenceCapabilityTaxonomyType::Action& ReferenceCapabilityTaxonomyType::getAction() const {
  return *action_Accessor;
}

uci::type::ReferenceCapabilityTaxonomyType::Action& ReferenceCapabilityTaxonomyType::getAction() {
  return *action_Accessor;
}

uci::type::ReferenceCapabilityTaxonomyType& ReferenceCapabilityTaxonomyType::setAction(const uci::type::ReferenceCapabilityTaxonomyType::Action& accessor) {
  if (&accessor != action_Accessor.get()) {
    action_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ReferenceCapabilityTaxonomyType::Sensing& ReferenceCapabilityTaxonomyType::getSensing() const {
  return *sensing_Accessor;
}

uci::type::ReferenceCapabilityTaxonomyType::Sensing& ReferenceCapabilityTaxonomyType::getSensing() {
  return *sensing_Accessor;
}

uci::type::ReferenceCapabilityTaxonomyType& ReferenceCapabilityTaxonomyType::setSensing(const uci::type::ReferenceCapabilityTaxonomyType::Sensing& accessor) {
  if (&accessor != sensing_Accessor.get()) {
    sensing_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ReferenceCapabilityTaxonomyType::Weapon& ReferenceCapabilityTaxonomyType::getWeapon() const {
  return *weapon_Accessor;
}

uci::type::ReferenceCapabilityTaxonomyType::Weapon& ReferenceCapabilityTaxonomyType::getWeapon() {
  return *weapon_Accessor;
}

uci::type::ReferenceCapabilityTaxonomyType& ReferenceCapabilityTaxonomyType::setWeapon(const uci::type::ReferenceCapabilityTaxonomyType::Weapon& accessor) {
  if (&accessor != weapon_Accessor.get()) {
    weapon_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ReferenceCapabilityTaxonomyType::Communications& ReferenceCapabilityTaxonomyType::getCommunications() const {
  return *communications_Accessor;
}

uci::type::ReferenceCapabilityTaxonomyType::Communications& ReferenceCapabilityTaxonomyType::getCommunications() {
  return *communications_Accessor;
}

uci::type::ReferenceCapabilityTaxonomyType& ReferenceCapabilityTaxonomyType::setCommunications(const uci::type::ReferenceCapabilityTaxonomyType::Communications& accessor) {
  if (&accessor != communications_Accessor.get()) {
    communications_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ReferenceCapabilityTaxonomyType::Identification& ReferenceCapabilityTaxonomyType::getIdentification() const {
  return *identification_Accessor;
}

uci::type::ReferenceCapabilityTaxonomyType::Identification& ReferenceCapabilityTaxonomyType::getIdentification() {
  return *identification_Accessor;
}

uci::type::ReferenceCapabilityTaxonomyType& ReferenceCapabilityTaxonomyType::setIdentification(const uci::type::ReferenceCapabilityTaxonomyType::Identification& accessor) {
  if (&accessor != identification_Accessor.get()) {
    identification_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ReferenceCapabilityTaxonomyType::Cyber& ReferenceCapabilityTaxonomyType::getCyber() const {
  return *cyber_Accessor;
}

uci::type::ReferenceCapabilityTaxonomyType::Cyber& ReferenceCapabilityTaxonomyType::getCyber() {
  return *cyber_Accessor;
}

uci::type::ReferenceCapabilityTaxonomyType& ReferenceCapabilityTaxonomyType::setCyber(const uci::type::ReferenceCapabilityTaxonomyType::Cyber& accessor) {
  if (&accessor != cyber_Accessor.get()) {
    cyber_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<ReferenceCapabilityTaxonomyType> ReferenceCapabilityTaxonomyType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::referenceCapabilityTaxonomyType : type};
  return (requestedType == uci::type::accessorType::referenceCapabilityTaxonomyType) ? boost::make_unique<ReferenceCapabilityTaxonomyType>() : nullptr;
}

/**  */
namespace ReferenceCapabilityTaxonomyType_Names {

constexpr const char* Extern_Type_Name{"ReferenceCapabilityTaxonomyType"};
constexpr const char* DomainPairing_Name{"DomainPairing"};
constexpr const char* Effect_Name{"Effect"};
constexpr const char* Action_Name{"Action"};
constexpr const char* Sensing_Name{"Sensing"};
constexpr const char* Weapon_Name{"Weapon"};
constexpr const char* Communications_Name{"Communications"};
constexpr const char* Identification_Name{"Identification"};
constexpr const char* Cyber_Name{"Cyber"};

} // namespace ReferenceCapabilityTaxonomyType_Names

void ReferenceCapabilityTaxonomyType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ReferenceCapabilityTaxonomyType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ReferenceCapabilityTaxonomyType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ReferenceCapabilityTaxonomyType_Names::DomainPairing_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ReferenceCapabilityTaxonomyType::DomainPairing& boundedList = accessor.getDomainPairing();
        const uci::type::ReferenceCapabilityTaxonomyType::DomainPairing::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ReferenceCapabilityTaxonomyType_Names::Effect_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ReferenceCapabilityTaxonomyType::Effect& boundedList = accessor.getEffect();
        const uci::type::ReferenceCapabilityTaxonomyType::Effect::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ReferenceCapabilityTaxonomyType_Names::Action_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ReferenceCapabilityTaxonomyType::Action& boundedList = accessor.getAction();
        const uci::type::ReferenceCapabilityTaxonomyType::Action::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ReferenceCapabilityTaxonomyType_Names::Sensing_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ReferenceCapabilityTaxonomyType::Sensing& boundedList = accessor.getSensing();
        const uci::type::ReferenceCapabilityTaxonomyType::Sensing::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ReferenceCapabilityTaxonomyType_Names::Weapon_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ReferenceCapabilityTaxonomyType::Weapon& boundedList = accessor.getWeapon();
        const uci::type::ReferenceCapabilityTaxonomyType::Weapon::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ReferenceCapabilityTaxonomyType_Names::Communications_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ReferenceCapabilityTaxonomyType::Communications& boundedList = accessor.getCommunications();
        const uci::type::ReferenceCapabilityTaxonomyType::Communications::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ReferenceCapabilityTaxonomyType_Names::Identification_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ReferenceCapabilityTaxonomyType::Identification& boundedList = accessor.getIdentification();
        const uci::type::ReferenceCapabilityTaxonomyType::Identification::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ReferenceCapabilityTaxonomyType_Names::Cyber_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ReferenceCapabilityTaxonomyType::Cyber& boundedList = accessor.getCyber();
        const uci::type::ReferenceCapabilityTaxonomyType::Cyber::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    }
  }
}

std::string ReferenceCapabilityTaxonomyType::serialize(const uci::type::ReferenceCapabilityTaxonomyType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ReferenceCapabilityTaxonomyType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ReferenceCapabilityTaxonomyType_Names::Extern_Type_Name);
  }
  {
    const uci::type::ReferenceCapabilityTaxonomyType::DomainPairing& boundedList = accessor.getDomainPairing();
    for (uci::type::ReferenceCapabilityTaxonomyType::DomainPairing::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      EnvironmentPairingEnum::serialize(boundedList.at(i), node, ReferenceCapabilityTaxonomyType_Names::DomainPairing_Name, false);
    }
  }
  {
    const uci::type::ReferenceCapabilityTaxonomyType::Effect& boundedList = accessor.getEffect();
    for (uci::type::ReferenceCapabilityTaxonomyType::Effect::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      EffectTypeEnum::serialize(boundedList.at(i), node, ReferenceCapabilityTaxonomyType_Names::Effect_Name, false);
    }
  }
  {
    const uci::type::ReferenceCapabilityTaxonomyType::Action& boundedList = accessor.getAction();
    for (uci::type::ReferenceCapabilityTaxonomyType::Action::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      ActionTypeEnum::serialize(boundedList.at(i), node, ReferenceCapabilityTaxonomyType_Names::Action_Name, false);
    }
  }
  {
    const uci::type::ReferenceCapabilityTaxonomyType::Sensing& boundedList = accessor.getSensing();
    for (uci::type::ReferenceCapabilityTaxonomyType::Sensing::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      SensingTypeEnum::serialize(boundedList.at(i), node, ReferenceCapabilityTaxonomyType_Names::Sensing_Name, false);
    }
  }
  {
    const uci::type::ReferenceCapabilityTaxonomyType::Weapon& boundedList = accessor.getWeapon();
    for (uci::type::ReferenceCapabilityTaxonomyType::Weapon::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      WeaponTypeEnum::serialize(boundedList.at(i), node, ReferenceCapabilityTaxonomyType_Names::Weapon_Name, false);
    }
  }
  {
    const uci::type::ReferenceCapabilityTaxonomyType::Communications& boundedList = accessor.getCommunications();
    for (uci::type::ReferenceCapabilityTaxonomyType::Communications::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      CommCapabilityEnum::serialize(boundedList.at(i), node, ReferenceCapabilityTaxonomyType_Names::Communications_Name, false);
    }
  }
  {
    const uci::type::ReferenceCapabilityTaxonomyType::Identification& boundedList = accessor.getIdentification();
    for (uci::type::ReferenceCapabilityTaxonomyType::Identification::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      IdentificationTypeEnum::serialize(boundedList.at(i), node, ReferenceCapabilityTaxonomyType_Names::Identification_Name, false);
    }
  }
  {
    const uci::type::ReferenceCapabilityTaxonomyType::Cyber& boundedList = accessor.getCyber();
    for (uci::type::ReferenceCapabilityTaxonomyType::Cyber::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      CyberTypeEnum::serialize(boundedList.at(i), node, ReferenceCapabilityTaxonomyType_Names::Cyber_Name, false);
    }
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

uci::type::ReferenceCapabilityTaxonomyType& ReferenceCapabilityTaxonomyType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ReferenceCapabilityTaxonomyType>().release());
}

uci::type::ReferenceCapabilityTaxonomyType& ReferenceCapabilityTaxonomyType::create(const uci::type::ReferenceCapabilityTaxonomyType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ReferenceCapabilityTaxonomyType> newAccessor{boost::make_unique<asb_uci::type::ReferenceCapabilityTaxonomyType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ReferenceCapabilityTaxonomyType::destroy(uci::type::ReferenceCapabilityTaxonomyType& accessor) {
  delete dynamic_cast<asb_uci::type::ReferenceCapabilityTaxonomyType*>(&accessor);
}

} // namespace type

} // namespace uci

