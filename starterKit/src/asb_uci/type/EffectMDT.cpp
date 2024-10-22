/** @file EffectMDT.cpp
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

#include "../../../include/asb_uci/type/EffectMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/EffectID_Type.h"
#include "../../../include/asb_uci/type/EffectTypeEnum.h"
#include "../../../include/asb_uci/type/IdentityKindInstanceType.h"
#include "../../../include/asb_uci/type/RequirementConstraintsType.h"
#include "../../../include/asb_uci/type/RequirementGuidanceType.h"
#include "../../../include/asb_uci/type/RequirementMetadataType.h"
#include "../../../include/asb_uci/type/RequirementTargetConstraintsType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EffectID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EffectMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EffectTypeEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IdentityKindInstanceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementConstraintsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementGuidanceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementMetadataType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementTargetConstraintsType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

EffectMDT::EffectMDT()
  : effectID_Accessor{boost::make_unique<EffectID_Type>()},
    effectType_Accessor{boost::make_unique<EffectTypeEnum>()},
    targetObject_Accessor{boost::make_unique<TargetObject>(0, SIZE_MAX)},
    secondaryObject_Accessor{boost::make_unique<SecondaryObject>(0, SIZE_MAX)} {
}

EffectMDT::~EffectMDT() = default;

void EffectMDT::copy(const uci::type::EffectMDT& accessor) {
  copyImpl(accessor, false);
}

void EffectMDT::copyImpl(const uci::type::EffectMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const EffectMDT&>(accessor);
    setEffectID(*(accessorImpl.effectID_Accessor));
    setEffectType(*(accessorImpl.effectType_Accessor));
    if (accessorImpl.effectConstraints_Accessor) {
      setEffectConstraints(*(accessorImpl.effectConstraints_Accessor));
    } else {
      effectConstraints_Accessor.reset();
    }
    if (accessorImpl.effectGuidance_Accessor) {
      setEffectGuidance(*(accessorImpl.effectGuidance_Accessor));
    } else {
      effectGuidance_Accessor.reset();
    }
    setTargetObject(*(accessorImpl.targetObject_Accessor));
    if (accessorImpl.targetObjectConstraints_Accessor) {
      setTargetObjectConstraints(*(accessorImpl.targetObjectConstraints_Accessor));
    } else {
      targetObjectConstraints_Accessor.reset();
    }
    setSecondaryObject(*(accessorImpl.secondaryObject_Accessor));
    if (accessorImpl.metadata_Accessor) {
      setMetadata(*(accessorImpl.metadata_Accessor));
    } else {
      metadata_Accessor.reset();
    }
  }
}

void EffectMDT::reset() noexcept {
  effectID_Accessor->reset();
  effectType_Accessor->reset();
  effectConstraints_Accessor.reset();
  effectGuidance_Accessor.reset();
  targetObject_Accessor->reset();
  targetObjectConstraints_Accessor.reset();
  secondaryObject_Accessor->reset();
  metadata_Accessor.reset();
}

const uci::type::EffectID_Type& EffectMDT::getEffectID() const {
  return *effectID_Accessor;
}

uci::type::EffectID_Type& EffectMDT::getEffectID() {
  return *effectID_Accessor;
}

uci::type::EffectMDT& EffectMDT::setEffectID(const uci::type::EffectID_Type& accessor) {
  if (&accessor != effectID_Accessor.get()) {
    effectID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::EffectTypeEnum& EffectMDT::getEffectType() const {
  return *effectType_Accessor;
}

uci::type::EffectTypeEnum& EffectMDT::getEffectType() {
  return *effectType_Accessor;
}

uci::type::EffectMDT& EffectMDT::setEffectType(const uci::type::EffectTypeEnum& accessor) {
  if (&accessor != effectType_Accessor.get()) {
    effectType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::EffectMDT& EffectMDT::setEffectType(uci::type::EffectTypeEnum::EnumerationItem value) {
  effectType_Accessor->setValue(value);
  return *this;
}


uci::type::RequirementConstraintsType& EffectMDT::getEffectConstraints_() const {
  if (effectConstraints_Accessor) {
    return *effectConstraints_Accessor;
  }
  throw uci::base::UCIException("Error in getEffectConstraints(): An attempt was made to get an optional field that was not enabled, call hasEffectConstraints() to determine if it is safe to call getEffectConstraints()");
}

const uci::type::RequirementConstraintsType& EffectMDT::getEffectConstraints() const {
  return getEffectConstraints_();
}

uci::type::RequirementConstraintsType& EffectMDT::getEffectConstraints() {
  return getEffectConstraints_();
}

uci::type::EffectMDT& EffectMDT::setEffectConstraints(const uci::type::RequirementConstraintsType& accessor) {
  enableEffectConstraints();
  if (&accessor != effectConstraints_Accessor.get()) {
    effectConstraints_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool EffectMDT::hasEffectConstraints() const noexcept {
  return static_cast<bool>(effectConstraints_Accessor);
}

uci::type::RequirementConstraintsType& EffectMDT::enableEffectConstraints(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::requirementConstraintsType : type};
  if ((!effectConstraints_Accessor) || (effectConstraints_Accessor->getAccessorType() != requestedType)) {
    effectConstraints_Accessor = RequirementConstraintsType::create(requestedType);
    if (!effectConstraints_Accessor) {
      throw uci::base::UCIException("Error in enableEffectConstraints(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *effectConstraints_Accessor;
}

uci::type::EffectMDT& EffectMDT::clearEffectConstraints() noexcept {
  effectConstraints_Accessor.reset();
  return *this;
}

uci::type::RequirementGuidanceType& EffectMDT::getEffectGuidance_() const {
  if (effectGuidance_Accessor) {
    return *effectGuidance_Accessor;
  }
  throw uci::base::UCIException("Error in getEffectGuidance(): An attempt was made to get an optional field that was not enabled, call hasEffectGuidance() to determine if it is safe to call getEffectGuidance()");
}

const uci::type::RequirementGuidanceType& EffectMDT::getEffectGuidance() const {
  return getEffectGuidance_();
}

uci::type::RequirementGuidanceType& EffectMDT::getEffectGuidance() {
  return getEffectGuidance_();
}

uci::type::EffectMDT& EffectMDT::setEffectGuidance(const uci::type::RequirementGuidanceType& accessor) {
  enableEffectGuidance();
  if (&accessor != effectGuidance_Accessor.get()) {
    effectGuidance_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool EffectMDT::hasEffectGuidance() const noexcept {
  return static_cast<bool>(effectGuidance_Accessor);
}

uci::type::RequirementGuidanceType& EffectMDT::enableEffectGuidance(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::requirementGuidanceType : type};
  if ((!effectGuidance_Accessor) || (effectGuidance_Accessor->getAccessorType() != requestedType)) {
    effectGuidance_Accessor = RequirementGuidanceType::create(requestedType);
    if (!effectGuidance_Accessor) {
      throw uci::base::UCIException("Error in enableEffectGuidance(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *effectGuidance_Accessor;
}

uci::type::EffectMDT& EffectMDT::clearEffectGuidance() noexcept {
  effectGuidance_Accessor.reset();
  return *this;
}

const uci::type::EffectMDT::TargetObject& EffectMDT::getTargetObject() const {
  return *targetObject_Accessor;
}

uci::type::EffectMDT::TargetObject& EffectMDT::getTargetObject() {
  return *targetObject_Accessor;
}

uci::type::EffectMDT& EffectMDT::setTargetObject(const uci::type::EffectMDT::TargetObject& accessor) {
  if (&accessor != targetObject_Accessor.get()) {
    targetObject_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::RequirementTargetConstraintsType& EffectMDT::getTargetObjectConstraints_() const {
  if (targetObjectConstraints_Accessor) {
    return *targetObjectConstraints_Accessor;
  }
  throw uci::base::UCIException("Error in getTargetObjectConstraints(): An attempt was made to get an optional field that was not enabled, call hasTargetObjectConstraints() to determine if it is safe to call getTargetObjectConstraints()");
}

const uci::type::RequirementTargetConstraintsType& EffectMDT::getTargetObjectConstraints() const {
  return getTargetObjectConstraints_();
}

uci::type::RequirementTargetConstraintsType& EffectMDT::getTargetObjectConstraints() {
  return getTargetObjectConstraints_();
}

uci::type::EffectMDT& EffectMDT::setTargetObjectConstraints(const uci::type::RequirementTargetConstraintsType& accessor) {
  enableTargetObjectConstraints();
  if (&accessor != targetObjectConstraints_Accessor.get()) {
    targetObjectConstraints_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool EffectMDT::hasTargetObjectConstraints() const noexcept {
  return static_cast<bool>(targetObjectConstraints_Accessor);
}

uci::type::RequirementTargetConstraintsType& EffectMDT::enableTargetObjectConstraints(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::requirementTargetConstraintsType : type};
  if ((!targetObjectConstraints_Accessor) || (targetObjectConstraints_Accessor->getAccessorType() != requestedType)) {
    targetObjectConstraints_Accessor = RequirementTargetConstraintsType::create(requestedType);
    if (!targetObjectConstraints_Accessor) {
      throw uci::base::UCIException("Error in enableTargetObjectConstraints(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *targetObjectConstraints_Accessor;
}

uci::type::EffectMDT& EffectMDT::clearTargetObjectConstraints() noexcept {
  targetObjectConstraints_Accessor.reset();
  return *this;
}

const uci::type::EffectMDT::SecondaryObject& EffectMDT::getSecondaryObject() const {
  return *secondaryObject_Accessor;
}

uci::type::EffectMDT::SecondaryObject& EffectMDT::getSecondaryObject() {
  return *secondaryObject_Accessor;
}

uci::type::EffectMDT& EffectMDT::setSecondaryObject(const uci::type::EffectMDT::SecondaryObject& accessor) {
  if (&accessor != secondaryObject_Accessor.get()) {
    secondaryObject_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::RequirementMetadataType& EffectMDT::getMetadata_() const {
  if (metadata_Accessor) {
    return *metadata_Accessor;
  }
  throw uci::base::UCIException("Error in getMetadata(): An attempt was made to get an optional field that was not enabled, call hasMetadata() to determine if it is safe to call getMetadata()");
}

const uci::type::RequirementMetadataType& EffectMDT::getMetadata() const {
  return getMetadata_();
}

uci::type::RequirementMetadataType& EffectMDT::getMetadata() {
  return getMetadata_();
}

uci::type::EffectMDT& EffectMDT::setMetadata(const uci::type::RequirementMetadataType& accessor) {
  enableMetadata();
  if (&accessor != metadata_Accessor.get()) {
    metadata_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool EffectMDT::hasMetadata() const noexcept {
  return static_cast<bool>(metadata_Accessor);
}

uci::type::RequirementMetadataType& EffectMDT::enableMetadata(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::requirementMetadataType : type};
  if ((!metadata_Accessor) || (metadata_Accessor->getAccessorType() != requestedType)) {
    metadata_Accessor = RequirementMetadataType::create(requestedType);
    if (!metadata_Accessor) {
      throw uci::base::UCIException("Error in enableMetadata(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *metadata_Accessor;
}

uci::type::EffectMDT& EffectMDT::clearMetadata() noexcept {
  metadata_Accessor.reset();
  return *this;
}

std::unique_ptr<EffectMDT> EffectMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::effectMDT : type};
  return (requestedType == uci::type::accessorType::effectMDT) ? boost::make_unique<EffectMDT>() : nullptr;
}

/**  */
namespace EffectMDT_Names {

constexpr const char* Extern_Type_Name{"EffectMDT"};
constexpr const char* EffectID_Name{"EffectID"};
constexpr const char* EffectType_Name{"EffectType"};
constexpr const char* EffectConstraints_Name{"EffectConstraints"};
constexpr const char* EffectGuidance_Name{"EffectGuidance"};
constexpr const char* TargetObject_Name{"TargetObject"};
constexpr const char* TargetObjectConstraints_Name{"TargetObjectConstraints"};
constexpr const char* SecondaryObject_Name{"SecondaryObject"};
constexpr const char* Metadata_Name{"Metadata"};

} // namespace EffectMDT_Names

void EffectMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::EffectMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EffectMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + EffectMDT_Names::EffectID_Name) {
      EffectID_Type::deserialize(valueType.second, accessor.getEffectID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EffectMDT_Names::EffectType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getEffectType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + EffectMDT_Names::EffectConstraints_Name) {
      RequirementConstraintsType::deserialize(valueType.second, accessor.enableEffectConstraints(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EffectMDT_Names::EffectGuidance_Name) {
      RequirementGuidanceType::deserialize(valueType.second, accessor.enableEffectGuidance(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EffectMDT_Names::TargetObject_Name) {
      uci::type::EffectMDT::TargetObject& boundedList = accessor.getTargetObject();
      const uci::type::EffectMDT::TargetObject::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::IdentityKindInstanceType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EffectMDT_Names::TargetObjectConstraints_Name) {
      RequirementTargetConstraintsType::deserialize(valueType.second, accessor.enableTargetObjectConstraints(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EffectMDT_Names::SecondaryObject_Name) {
      uci::type::EffectMDT::SecondaryObject& boundedList = accessor.getSecondaryObject();
      const uci::type::EffectMDT::SecondaryObject::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::IdentityKindInstanceType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EffectMDT_Names::Metadata_Name) {
      RequirementMetadataType::deserialize(valueType.second, accessor.enableMetadata(), nodeName, nsPrefix);
    }
  }
}

std::string EffectMDT::serialize(const uci::type::EffectMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? EffectMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, EffectMDT_Names::Extern_Type_Name);
  }
  EffectID_Type::serialize(accessor.getEffectID(), node, EffectMDT_Names::EffectID_Name);
  EffectTypeEnum::serialize(accessor.getEffectType(), node, EffectMDT_Names::EffectType_Name, false);
  if (accessor.hasEffectConstraints()) {
    RequirementConstraintsType::serialize(accessor.getEffectConstraints(), node, EffectMDT_Names::EffectConstraints_Name);
  }
  if (accessor.hasEffectGuidance()) {
    RequirementGuidanceType::serialize(accessor.getEffectGuidance(), node, EffectMDT_Names::EffectGuidance_Name);
  }
  {
    const uci::type::EffectMDT::TargetObject& boundedList = accessor.getTargetObject();
    for (uci::type::EffectMDT::TargetObject::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::IdentityKindInstanceType::serialize(boundedList.at(i), node, EffectMDT_Names::TargetObject_Name);
    }
  }
  if (accessor.hasTargetObjectConstraints()) {
    RequirementTargetConstraintsType::serialize(accessor.getTargetObjectConstraints(), node, EffectMDT_Names::TargetObjectConstraints_Name);
  }
  {
    const uci::type::EffectMDT::SecondaryObject& boundedList = accessor.getSecondaryObject();
    for (uci::type::EffectMDT::SecondaryObject::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::IdentityKindInstanceType::serialize(boundedList.at(i), node, EffectMDT_Names::SecondaryObject_Name);
    }
  }
  if (accessor.hasMetadata()) {
    RequirementMetadataType::serialize(accessor.getMetadata(), node, EffectMDT_Names::Metadata_Name);
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

uci::type::EffectMDT& EffectMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::EffectMDT>().release());
}

uci::type::EffectMDT& EffectMDT::create(const uci::type::EffectMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::EffectMDT> newAccessor{boost::make_unique<asb_uci::type::EffectMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void EffectMDT::destroy(uci::type::EffectMDT& accessor) {
  delete dynamic_cast<asb_uci::type::EffectMDT*>(&accessor);
}

} // namespace type

} // namespace uci

