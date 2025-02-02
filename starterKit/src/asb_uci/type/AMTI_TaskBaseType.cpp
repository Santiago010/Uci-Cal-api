/** @file AMTI_TaskBaseType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:11 PM
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

#include "../../../include/asb_uci/type/AMTI_TaskBaseType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/AMTI_CapabilityEnum.h"
#include "../../../include/asb_uci/type/AMTI_CollectionConstraintsType.h"
#include "../../../include/asb_uci/type/AMTI_SubCapabilityEnum.h"
#include "../../../include/asb_uci/type/CollectionPolicyEnum.h"
#include "../../../include/asb_uci/type/ProductOutputCommandBasicType.h"
#include "../../../include/asb_uci/util/DerivedTypesCopier.h"
#include "../../../include/asb_uci/util/DerivedTypesCreator.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/DerivedTypesSerializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AMTI_CapabilityEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AMTI_CollectionConstraintsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AMTI_SubCapabilityEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AMTI_TaskBaseType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CollectionPolicyEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductOutputCommandBasicType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

AMTI_TaskBaseType::AMTI_TaskBaseType()
  : capabilityType_Accessor{boost::make_unique<AMTI_CapabilityEnum>()},
    subCapabilityType_Accessor{boost::make_unique<SubCapabilityType>(0, 4)},
    output_Accessor{boost::make_unique<Output>(0, SIZE_MAX)} {
}

AMTI_TaskBaseType::~AMTI_TaskBaseType() = default;

void AMTI_TaskBaseType::copy(const uci::type::AMTI_TaskBaseType& accessor) {
  copyImpl(accessor, false);
}

void AMTI_TaskBaseType::copyImpl(const uci::type::AMTI_TaskBaseType& accessor, const bool checkIfDerivation) {
  if (&accessor != this) {
    if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::aMTI_TaskBaseType)) {
      const auto& accessorImpl = dynamic_cast<const AMTI_TaskBaseType&>(accessor);
      setCapabilityType(*(accessorImpl.capabilityType_Accessor));
      setSubCapabilityType(*(accessorImpl.subCapabilityType_Accessor));
      if (accessorImpl.collectionPolicy_Accessor) {
        setCollectionPolicy(*(accessorImpl.collectionPolicy_Accessor));
      } else {
        collectionPolicy_Accessor.reset();
      }
      if (accessorImpl.collectionConstraints_Accessor) {
        setCollectionConstraints(*(accessorImpl.collectionConstraints_Accessor));
      } else {
        collectionConstraints_Accessor.reset();
      }
      setOutput(*(accessorImpl.output_Accessor));
    } else {
      asb_uci::util::DerivedTypesCopier::copy(accessor, *this);
    }
  }
}

void AMTI_TaskBaseType::reset() noexcept {
  capabilityType_Accessor->reset();
  subCapabilityType_Accessor->reset();
  collectionPolicy_Accessor.reset();
  collectionConstraints_Accessor.reset();
  output_Accessor->reset();
}

const uci::type::AMTI_CapabilityEnum& AMTI_TaskBaseType::getCapabilityType() const {
  return *capabilityType_Accessor;
}

uci::type::AMTI_CapabilityEnum& AMTI_TaskBaseType::getCapabilityType() {
  return *capabilityType_Accessor;
}

uci::type::AMTI_TaskBaseType& AMTI_TaskBaseType::setCapabilityType(const uci::type::AMTI_CapabilityEnum& accessor) {
  if (&accessor != capabilityType_Accessor.get()) {
    capabilityType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::AMTI_TaskBaseType& AMTI_TaskBaseType::setCapabilityType(uci::type::AMTI_CapabilityEnum::EnumerationItem value) {
  capabilityType_Accessor->setValue(value);
  return *this;
}


const uci::type::AMTI_TaskBaseType::SubCapabilityType& AMTI_TaskBaseType::getSubCapabilityType() const {
  return *subCapabilityType_Accessor;
}

uci::type::AMTI_TaskBaseType::SubCapabilityType& AMTI_TaskBaseType::getSubCapabilityType() {
  return *subCapabilityType_Accessor;
}

uci::type::AMTI_TaskBaseType& AMTI_TaskBaseType::setSubCapabilityType(const uci::type::AMTI_TaskBaseType::SubCapabilityType& accessor) {
  if (&accessor != subCapabilityType_Accessor.get()) {
    subCapabilityType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::CollectionPolicyEnum& AMTI_TaskBaseType::getCollectionPolicy_() const {
  if (collectionPolicy_Accessor) {
    return *collectionPolicy_Accessor;
  }
  throw uci::base::UCIException("Error in getCollectionPolicy(): An attempt was made to get an optional field that was not enabled, call hasCollectionPolicy() to determine if it is safe to call getCollectionPolicy()");
}

const uci::type::CollectionPolicyEnum& AMTI_TaskBaseType::getCollectionPolicy() const {
  return getCollectionPolicy_();
}

uci::type::CollectionPolicyEnum& AMTI_TaskBaseType::getCollectionPolicy() {
  return getCollectionPolicy_();
}

uci::type::AMTI_TaskBaseType& AMTI_TaskBaseType::setCollectionPolicy(const uci::type::CollectionPolicyEnum& accessor) {
  enableCollectionPolicy();
  if (&accessor != collectionPolicy_Accessor.get()) {
    collectionPolicy_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::AMTI_TaskBaseType& AMTI_TaskBaseType::setCollectionPolicy(const uci::type::CollectionPolicyEnum::EnumerationItem value) {
  enableCollectionPolicy().setValue(value);
  return *this;
}

bool AMTI_TaskBaseType::hasCollectionPolicy() const noexcept {
  return static_cast<bool>(collectionPolicy_Accessor);
}

uci::type::CollectionPolicyEnum& AMTI_TaskBaseType::enableCollectionPolicy(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::collectionPolicyEnum : type};
  if ((!collectionPolicy_Accessor) || (collectionPolicy_Accessor->getAccessorType() != requestedType)) {
    collectionPolicy_Accessor = CollectionPolicyEnum::create(requestedType);
    if (!collectionPolicy_Accessor) {
      throw uci::base::UCIException("Error in enableCollectionPolicy(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *collectionPolicy_Accessor;
}

uci::type::AMTI_TaskBaseType& AMTI_TaskBaseType::clearCollectionPolicy() noexcept {
  collectionPolicy_Accessor.reset();
  return *this;
}

uci::type::AMTI_CollectionConstraintsType& AMTI_TaskBaseType::getCollectionConstraints_() const {
  if (collectionConstraints_Accessor) {
    return *collectionConstraints_Accessor;
  }
  throw uci::base::UCIException("Error in getCollectionConstraints(): An attempt was made to get an optional field that was not enabled, call hasCollectionConstraints() to determine if it is safe to call getCollectionConstraints()");
}

const uci::type::AMTI_CollectionConstraintsType& AMTI_TaskBaseType::getCollectionConstraints() const {
  return getCollectionConstraints_();
}

uci::type::AMTI_CollectionConstraintsType& AMTI_TaskBaseType::getCollectionConstraints() {
  return getCollectionConstraints_();
}

uci::type::AMTI_TaskBaseType& AMTI_TaskBaseType::setCollectionConstraints(const uci::type::AMTI_CollectionConstraintsType& accessor) {
  enableCollectionConstraints();
  if (&accessor != collectionConstraints_Accessor.get()) {
    collectionConstraints_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool AMTI_TaskBaseType::hasCollectionConstraints() const noexcept {
  return static_cast<bool>(collectionConstraints_Accessor);
}

uci::type::AMTI_CollectionConstraintsType& AMTI_TaskBaseType::enableCollectionConstraints(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::aMTI_CollectionConstraintsType : type};
  if ((!collectionConstraints_Accessor) || (collectionConstraints_Accessor->getAccessorType() != requestedType)) {
    collectionConstraints_Accessor = AMTI_CollectionConstraintsType::create(requestedType);
    if (!collectionConstraints_Accessor) {
      throw uci::base::UCIException("Error in enableCollectionConstraints(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *collectionConstraints_Accessor;
}

uci::type::AMTI_TaskBaseType& AMTI_TaskBaseType::clearCollectionConstraints() noexcept {
  collectionConstraints_Accessor.reset();
  return *this;
}

const uci::type::AMTI_TaskBaseType::Output& AMTI_TaskBaseType::getOutput() const {
  return *output_Accessor;
}

uci::type::AMTI_TaskBaseType::Output& AMTI_TaskBaseType::getOutput() {
  return *output_Accessor;
}

uci::type::AMTI_TaskBaseType& AMTI_TaskBaseType::setOutput(const uci::type::AMTI_TaskBaseType::Output& accessor) {
  if (&accessor != output_Accessor.get()) {
    output_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<AMTI_TaskBaseType> AMTI_TaskBaseType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::aMTI_TaskBaseType : type};
  return std::unique_ptr<AMTI_TaskBaseType>(dynamic_cast<AMTI_TaskBaseType*>(asb_uci::util::DerivedTypesCreator::create(requestedType)));
}

/**  */
namespace AMTI_TaskBaseType_Names {

constexpr const char* Extern_Type_Name{"AMTI_TaskBaseType"};
constexpr const char* CapabilityType_Name{"CapabilityType"};
constexpr const char* SubCapabilityType_Name{"SubCapabilityType"};
constexpr const char* CollectionPolicy_Name{"CollectionPolicy"};
constexpr const char* CollectionConstraints_Name{"CollectionConstraints"};
constexpr const char* Output_Name{"Output"};

} // namespace AMTI_TaskBaseType_Names

void AMTI_TaskBaseType::deserialize(const boost::property_tree::ptree& propTree, uci::type::AMTI_TaskBaseType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = AMTI_TaskBaseType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + AMTI_TaskBaseType_Names::CapabilityType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getCapabilityType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + AMTI_TaskBaseType_Names::SubCapabilityType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::AMTI_TaskBaseType::SubCapabilityType& boundedList = accessor.getSubCapabilityType();
        const uci::type::AMTI_TaskBaseType::SubCapabilityType::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + AMTI_TaskBaseType_Names::CollectionPolicy_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableCollectionPolicy().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + AMTI_TaskBaseType_Names::CollectionConstraints_Name) {
      AMTI_CollectionConstraintsType::deserialize(valueType.second, accessor.enableCollectionConstraints(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + AMTI_TaskBaseType_Names::Output_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::AMTI_TaskBaseType::Output& boundedList = accessor.getOutput();
        const uci::type::AMTI_TaskBaseType::Output::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1, asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix));
        asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string AMTI_TaskBaseType::serialize(const uci::type::AMTI_TaskBaseType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? AMTI_TaskBaseType_Names::Extern_Type_Name : nodeName)};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::aMTI_TaskBaseType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      asb_uci::util::SerializationHelpers::addTypeAttribute(node, AMTI_TaskBaseType_Names::Extern_Type_Name);
    }
    AMTI_CapabilityEnum::serialize(accessor.getCapabilityType(), node, AMTI_TaskBaseType_Names::CapabilityType_Name, false);
    {
      const uci::type::AMTI_TaskBaseType::SubCapabilityType& boundedList = accessor.getSubCapabilityType();
      for (uci::type::AMTI_TaskBaseType::SubCapabilityType::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        AMTI_SubCapabilityEnum::serialize(boundedList.at(i), node, AMTI_TaskBaseType_Names::SubCapabilityType_Name, false);
      }
    }
    if (accessor.hasCollectionPolicy()) {
      CollectionPolicyEnum::serialize(accessor.getCollectionPolicy(), node, AMTI_TaskBaseType_Names::CollectionPolicy_Name, false);
    }
    if (accessor.hasCollectionConstraints()) {
      AMTI_CollectionConstraintsType::serialize(accessor.getCollectionConstraints(), node, AMTI_TaskBaseType_Names::CollectionConstraints_Name);
    }
    {
      const uci::type::AMTI_TaskBaseType::Output& boundedList = accessor.getOutput();
      for (uci::type::AMTI_TaskBaseType::Output::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::ProductOutputCommandBasicType::serialize(boundedList.at(i), node, AMTI_TaskBaseType_Names::Output_Name);
      }
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

uci::type::AMTI_TaskBaseType& AMTI_TaskBaseType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::AMTI_TaskBaseType>().release());
}

uci::type::AMTI_TaskBaseType& AMTI_TaskBaseType::create(const uci::type::AMTI_TaskBaseType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::AMTI_TaskBaseType> newAccessor{boost::make_unique<asb_uci::type::AMTI_TaskBaseType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void AMTI_TaskBaseType::destroy(uci::type::AMTI_TaskBaseType& accessor) {
  delete dynamic_cast<asb_uci::type::AMTI_TaskBaseType*>(&accessor);
}

} // namespace type

} // namespace uci

