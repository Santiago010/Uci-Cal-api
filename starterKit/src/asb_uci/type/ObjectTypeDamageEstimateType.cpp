/** @file ObjectTypeDamageEstimateType.cpp
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

#include "../../../include/asb_uci/type/ObjectTypeDamageEstimateType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/DamageCauseEnum.h"
#include "../../../include/asb_uci/type/DamageObjectClassType.h"
#include "../../../include/asb_uci/type/DamageProbabilityZoneType.h"
#include "../../../include/asb_uci/type/DamageType.h"
#include "../../../include/asb_uci/type/VisibleString1024Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DamageCauseEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DamageObjectClassType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DamageProbabilityZoneType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DamageType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ObjectTypeDamageEstimateType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString1024Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ObjectTypeDamageEstimateType::ObjectTypeDamageEstimateType()
  : objectType_Accessor{boost::make_unique<ObjectType>(1, SIZE_MAX)},
    damageType_Accessor{boost::make_unique<DamageType>(1, SIZE_MAX)},
    probabilityZone_Accessor{boost::make_unique<ProbabilityZone>(1, SIZE_MAX)} {
}

ObjectTypeDamageEstimateType::~ObjectTypeDamageEstimateType() = default;

void ObjectTypeDamageEstimateType::copy(const uci::type::ObjectTypeDamageEstimateType& accessor) {
  copyImpl(accessor, false);
}

void ObjectTypeDamageEstimateType::copyImpl(const uci::type::ObjectTypeDamageEstimateType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const ObjectTypeDamageEstimateType&>(accessor);
    setObjectType(*(accessorImpl.objectType_Accessor));
    setDamageType(*(accessorImpl.damageType_Accessor));
    setProbabilityZone(*(accessorImpl.probabilityZone_Accessor));
    if (accessorImpl.damageCause_Accessor) {
      setDamageCause(*(accessorImpl.damageCause_Accessor));
    } else {
      damageCause_Accessor.reset();
    }
    if (accessorImpl.damageNarrative_Accessor) {
      setDamageNarrative(*(accessorImpl.damageNarrative_Accessor));
    } else {
      damageNarrative_Accessor.reset();
    }
  }
}

void ObjectTypeDamageEstimateType::reset() noexcept {
  objectType_Accessor->reset();
  damageType_Accessor->reset();
  probabilityZone_Accessor->reset();
  damageCause_Accessor.reset();
  damageNarrative_Accessor.reset();
}

const uci::type::ObjectTypeDamageEstimateType::ObjectType& ObjectTypeDamageEstimateType::getObjectType() const {
  return *objectType_Accessor;
}

uci::type::ObjectTypeDamageEstimateType::ObjectType& ObjectTypeDamageEstimateType::getObjectType() {
  return *objectType_Accessor;
}

uci::type::ObjectTypeDamageEstimateType& ObjectTypeDamageEstimateType::setObjectType(const uci::type::ObjectTypeDamageEstimateType::ObjectType& accessor) {
  if (&accessor != objectType_Accessor.get()) {
    objectType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ObjectTypeDamageEstimateType::DamageType& ObjectTypeDamageEstimateType::getDamageType() const {
  return *damageType_Accessor;
}

uci::type::ObjectTypeDamageEstimateType::DamageType& ObjectTypeDamageEstimateType::getDamageType() {
  return *damageType_Accessor;
}

uci::type::ObjectTypeDamageEstimateType& ObjectTypeDamageEstimateType::setDamageType(const uci::type::ObjectTypeDamageEstimateType::DamageType& accessor) {
  if (&accessor != damageType_Accessor.get()) {
    damageType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ObjectTypeDamageEstimateType::ProbabilityZone& ObjectTypeDamageEstimateType::getProbabilityZone() const {
  return *probabilityZone_Accessor;
}

uci::type::ObjectTypeDamageEstimateType::ProbabilityZone& ObjectTypeDamageEstimateType::getProbabilityZone() {
  return *probabilityZone_Accessor;
}

uci::type::ObjectTypeDamageEstimateType& ObjectTypeDamageEstimateType::setProbabilityZone(const uci::type::ObjectTypeDamageEstimateType::ProbabilityZone& accessor) {
  if (&accessor != probabilityZone_Accessor.get()) {
    probabilityZone_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::DamageCauseEnum& ObjectTypeDamageEstimateType::getDamageCause_() const {
  if (damageCause_Accessor) {
    return *damageCause_Accessor;
  }
  throw uci::base::UCIException("Error in getDamageCause(): An attempt was made to get an optional field that was not enabled, call hasDamageCause() to determine if it is safe to call getDamageCause()");
}

const uci::type::DamageCauseEnum& ObjectTypeDamageEstimateType::getDamageCause() const {
  return getDamageCause_();
}

uci::type::DamageCauseEnum& ObjectTypeDamageEstimateType::getDamageCause() {
  return getDamageCause_();
}

uci::type::ObjectTypeDamageEstimateType& ObjectTypeDamageEstimateType::setDamageCause(const uci::type::DamageCauseEnum& accessor) {
  enableDamageCause();
  if (&accessor != damageCause_Accessor.get()) {
    damageCause_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ObjectTypeDamageEstimateType& ObjectTypeDamageEstimateType::setDamageCause(const uci::type::DamageCauseEnum::EnumerationItem value) {
  enableDamageCause().setValue(value);
  return *this;
}

bool ObjectTypeDamageEstimateType::hasDamageCause() const noexcept {
  return static_cast<bool>(damageCause_Accessor);
}

uci::type::DamageCauseEnum& ObjectTypeDamageEstimateType::enableDamageCause(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::damageCauseEnum : type};
  if ((!damageCause_Accessor) || (damageCause_Accessor->getAccessorType() != requestedType)) {
    damageCause_Accessor = DamageCauseEnum::create(requestedType);
    if (!damageCause_Accessor) {
      throw uci::base::UCIException("Error in enableDamageCause(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *damageCause_Accessor;
}

uci::type::ObjectTypeDamageEstimateType& ObjectTypeDamageEstimateType::clearDamageCause() noexcept {
  damageCause_Accessor.reset();
  return *this;
}

uci::type::VisibleString1024Type& ObjectTypeDamageEstimateType::getDamageNarrative_() const {
  if (damageNarrative_Accessor) {
    return *damageNarrative_Accessor;
  }
  throw uci::base::UCIException("Error in getDamageNarrative(): An attempt was made to get an optional field that was not enabled, call hasDamageNarrative() to determine if it is safe to call getDamageNarrative()");
}

const uci::type::VisibleString1024Type& ObjectTypeDamageEstimateType::getDamageNarrative() const {
  return getDamageNarrative_();
}

uci::type::VisibleString1024Type& ObjectTypeDamageEstimateType::getDamageNarrative() {
  return getDamageNarrative_();
}

uci::type::ObjectTypeDamageEstimateType& ObjectTypeDamageEstimateType::setDamageNarrative(const uci::type::VisibleString1024Type& value) {
  return setDamageNarrative(value.c_str());
}

uci::type::ObjectTypeDamageEstimateType& ObjectTypeDamageEstimateType::setDamageNarrative(const std::string& value) {
  return setDamageNarrative(value.c_str());
}

uci::type::ObjectTypeDamageEstimateType& ObjectTypeDamageEstimateType::setDamageNarrative(const char* value) {
  enableDamageNarrative().setStringValue(value);
  return *this;
}

bool ObjectTypeDamageEstimateType::hasDamageNarrative() const noexcept {
  return static_cast<bool>(damageNarrative_Accessor);
}

uci::type::VisibleString1024Type& ObjectTypeDamageEstimateType::enableDamageNarrative(uci::base::accessorType::AccessorType type) {
  if (!damageNarrative_Accessor) {
    damageNarrative_Accessor = VisibleString1024Type::create(type);
  }
  return *damageNarrative_Accessor;
}

uci::type::ObjectTypeDamageEstimateType& ObjectTypeDamageEstimateType::clearDamageNarrative() noexcept {
  damageNarrative_Accessor.reset();
  return *this;
}

std::unique_ptr<ObjectTypeDamageEstimateType> ObjectTypeDamageEstimateType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::objectTypeDamageEstimateType : type};
  return (requestedType == uci::type::accessorType::objectTypeDamageEstimateType) ? boost::make_unique<ObjectTypeDamageEstimateType>() : nullptr;
}

/**  */
namespace ObjectTypeDamageEstimateType_Names {

constexpr const char* Extern_Type_Name{"ObjectTypeDamageEstimateType"};
constexpr const char* ObjectType_Name{"ObjectType"};
constexpr const char* DamageType_Name{"DamageType"};
constexpr const char* ProbabilityZone_Name{"ProbabilityZone"};
constexpr const char* DamageCause_Name{"DamageCause"};
constexpr const char* DamageNarrative_Name{"DamageNarrative"};

} // namespace ObjectTypeDamageEstimateType_Names

void ObjectTypeDamageEstimateType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ObjectTypeDamageEstimateType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ObjectTypeDamageEstimateType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ObjectTypeDamageEstimateType_Names::ObjectType_Name) {
      uci::type::ObjectTypeDamageEstimateType::ObjectType& boundedList = accessor.getObjectType();
      const uci::type::ObjectTypeDamageEstimateType::ObjectType::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::DamageObjectClassType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ObjectTypeDamageEstimateType_Names::DamageType_Name) {
      uci::type::ObjectTypeDamageEstimateType::DamageType& boundedList = accessor.getDamageType();
      const uci::type::ObjectTypeDamageEstimateType::DamageType::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::DamageType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ObjectTypeDamageEstimateType_Names::ProbabilityZone_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ObjectTypeDamageEstimateType::ProbabilityZone& boundedList = accessor.getProbabilityZone();
        const uci::type::ObjectTypeDamageEstimateType::ProbabilityZone::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::DamageProbabilityZoneType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ObjectTypeDamageEstimateType_Names::DamageCause_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableDamageCause().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ObjectTypeDamageEstimateType_Names::DamageNarrative_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setDamageNarrative(*value);
      }
    }
  }
}

std::string ObjectTypeDamageEstimateType::serialize(const uci::type::ObjectTypeDamageEstimateType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ObjectTypeDamageEstimateType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ObjectTypeDamageEstimateType_Names::Extern_Type_Name);
  }
  {
    const uci::type::ObjectTypeDamageEstimateType::ObjectType& boundedList = accessor.getObjectType();
    for (uci::type::ObjectTypeDamageEstimateType::ObjectType::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::DamageObjectClassType::serialize(boundedList.at(i), node, ObjectTypeDamageEstimateType_Names::ObjectType_Name);
    }
  }
  {
    const uci::type::ObjectTypeDamageEstimateType::DamageType& boundedList = accessor.getDamageType();
    for (uci::type::ObjectTypeDamageEstimateType::DamageType::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::DamageType::serialize(boundedList.at(i), node, ObjectTypeDamageEstimateType_Names::DamageType_Name);
    }
  }
  {
    const uci::type::ObjectTypeDamageEstimateType::ProbabilityZone& boundedList = accessor.getProbabilityZone();
    for (uci::type::ObjectTypeDamageEstimateType::ProbabilityZone::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::DamageProbabilityZoneType::serialize(boundedList.at(i), node, ObjectTypeDamageEstimateType_Names::ProbabilityZone_Name);
    }
  }
  if (accessor.hasDamageCause()) {
    DamageCauseEnum::serialize(accessor.getDamageCause(), node, ObjectTypeDamageEstimateType_Names::DamageCause_Name, false);
  }
  if (accessor.hasDamageNarrative()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getDamageNarrative(), node, ObjectTypeDamageEstimateType_Names::DamageNarrative_Name);
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

uci::type::ObjectTypeDamageEstimateType& ObjectTypeDamageEstimateType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ObjectTypeDamageEstimateType>().release());
}

uci::type::ObjectTypeDamageEstimateType& ObjectTypeDamageEstimateType::create(const uci::type::ObjectTypeDamageEstimateType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ObjectTypeDamageEstimateType> newAccessor{boost::make_unique<asb_uci::type::ObjectTypeDamageEstimateType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ObjectTypeDamageEstimateType::destroy(uci::type::ObjectTypeDamageEstimateType& accessor) {
  delete dynamic_cast<asb_uci::type::ObjectTypeDamageEstimateType*>(&accessor);
}

} // namespace type

} // namespace uci

