/** @file EA_CapabilityCommandType.cpp
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

#include "../../../include/asb_uci/type/EA_CapabilityCommandType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CapabilityCommandFrequencyType.h"
#include "../../../include/asb_uci/type/EA_ActivationEnum.h"
#include "../../../include/asb_uci/type/EA_EmissionType.h"
#include "../../../include/asb_uci/type/ProtectedAssetReturnPowerType.h"
#include "../../../include/asb_uci/type/ResourceAllocatorCommandExtensionType.h"
#include "../../../include/asb_uci/type/ResourceSelectionType.h"
#include "../../../include/asb_uci/type/SharedRF_ApertureCapabilityCommandBaseType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityCommandFrequencyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EA_ActivationEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EA_CapabilityCommandType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EA_EmissionType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProtectedAssetReturnPowerType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ResourceAllocatorCommandExtensionType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ResourceSelectionType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

EA_CapabilityCommandType::EA_CapabilityCommandType()
  : protectedEntityPredictedReturnPower_Accessor{boost::make_unique<ProtectedEntityPredictedReturnPower>(0, SIZE_MAX)},
    resourceSelection_Accessor{boost::make_unique<ResourceSelection>(0, SIZE_MAX)} {
}

EA_CapabilityCommandType::~EA_CapabilityCommandType() = default;

void EA_CapabilityCommandType::copy(const uci::type::EA_CapabilityCommandType& accessor) {
  copyImpl(accessor, false);
}

void EA_CapabilityCommandType::copyImpl(const uci::type::EA_CapabilityCommandType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    SharedRF_ApertureCapabilityCommandBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const EA_CapabilityCommandType&>(accessor);
    if (accessorImpl.resourceAllocatorCommandExtension_Accessor) {
      setResourceAllocatorCommandExtension(*(accessorImpl.resourceAllocatorCommandExtension_Accessor));
    } else {
      resourceAllocatorCommandExtension_Accessor.reset();
    }
    if (accessorImpl.emission_Accessor) {
      setEmission(*(accessorImpl.emission_Accessor));
    } else {
      emission_Accessor.reset();
    }
    if (accessorImpl.activation_Accessor) {
      setActivation(*(accessorImpl.activation_Accessor));
    } else {
      activation_Accessor.reset();
    }
    if (accessorImpl.frequency_Accessor) {
      setFrequency(*(accessorImpl.frequency_Accessor));
    } else {
      frequency_Accessor.reset();
    }
    setProtectedEntityPredictedReturnPower(*(accessorImpl.protectedEntityPredictedReturnPower_Accessor));
    setResourceSelection(*(accessorImpl.resourceSelection_Accessor));
  }
}

void EA_CapabilityCommandType::reset() noexcept {
  SharedRF_ApertureCapabilityCommandBaseType::reset();
  resourceAllocatorCommandExtension_Accessor.reset();
  emission_Accessor.reset();
  activation_Accessor.reset();
  frequency_Accessor.reset();
  protectedEntityPredictedReturnPower_Accessor->reset();
  resourceSelection_Accessor->reset();
}

uci::type::ResourceAllocatorCommandExtensionType& EA_CapabilityCommandType::getResourceAllocatorCommandExtension_() const {
  if (resourceAllocatorCommandExtension_Accessor) {
    return *resourceAllocatorCommandExtension_Accessor;
  }
  throw uci::base::UCIException("Error in getResourceAllocatorCommandExtension(): An attempt was made to get an optional field that was not enabled, call hasResourceAllocatorCommandExtension() to determine if it is safe to call getResourceAllocatorCommandExtension()");
}

const uci::type::ResourceAllocatorCommandExtensionType& EA_CapabilityCommandType::getResourceAllocatorCommandExtension() const {
  return getResourceAllocatorCommandExtension_();
}

uci::type::ResourceAllocatorCommandExtensionType& EA_CapabilityCommandType::getResourceAllocatorCommandExtension() {
  return getResourceAllocatorCommandExtension_();
}

uci::type::EA_CapabilityCommandType& EA_CapabilityCommandType::setResourceAllocatorCommandExtension(const uci::type::ResourceAllocatorCommandExtensionType& accessor) {
  enableResourceAllocatorCommandExtension();
  if (&accessor != resourceAllocatorCommandExtension_Accessor.get()) {
    resourceAllocatorCommandExtension_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool EA_CapabilityCommandType::hasResourceAllocatorCommandExtension() const noexcept {
  return static_cast<bool>(resourceAllocatorCommandExtension_Accessor);
}

uci::type::ResourceAllocatorCommandExtensionType& EA_CapabilityCommandType::enableResourceAllocatorCommandExtension(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::resourceAllocatorCommandExtensionType : type};
  if ((!resourceAllocatorCommandExtension_Accessor) || (resourceAllocatorCommandExtension_Accessor->getAccessorType() != requestedType)) {
    resourceAllocatorCommandExtension_Accessor = ResourceAllocatorCommandExtensionType::create(requestedType);
    if (!resourceAllocatorCommandExtension_Accessor) {
      throw uci::base::UCIException("Error in enableResourceAllocatorCommandExtension(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *resourceAllocatorCommandExtension_Accessor;
}

uci::type::EA_CapabilityCommandType& EA_CapabilityCommandType::clearResourceAllocatorCommandExtension() noexcept {
  resourceAllocatorCommandExtension_Accessor.reset();
  return *this;
}

uci::type::EA_EmissionType& EA_CapabilityCommandType::getEmission_() const {
  if (emission_Accessor) {
    return *emission_Accessor;
  }
  throw uci::base::UCIException("Error in getEmission(): An attempt was made to get an optional field that was not enabled, call hasEmission() to determine if it is safe to call getEmission()");
}

const uci::type::EA_EmissionType& EA_CapabilityCommandType::getEmission() const {
  return getEmission_();
}

uci::type::EA_EmissionType& EA_CapabilityCommandType::getEmission() {
  return getEmission_();
}

uci::type::EA_CapabilityCommandType& EA_CapabilityCommandType::setEmission(const uci::type::EA_EmissionType& accessor) {
  enableEmission();
  if (&accessor != emission_Accessor.get()) {
    emission_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool EA_CapabilityCommandType::hasEmission() const noexcept {
  return static_cast<bool>(emission_Accessor);
}

uci::type::EA_EmissionType& EA_CapabilityCommandType::enableEmission(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::eA_EmissionType : type};
  if ((!emission_Accessor) || (emission_Accessor->getAccessorType() != requestedType)) {
    emission_Accessor = EA_EmissionType::create(requestedType);
    if (!emission_Accessor) {
      throw uci::base::UCIException("Error in enableEmission(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *emission_Accessor;
}

uci::type::EA_CapabilityCommandType& EA_CapabilityCommandType::clearEmission() noexcept {
  emission_Accessor.reset();
  return *this;
}

uci::type::EA_ActivationEnum& EA_CapabilityCommandType::getActivation_() const {
  if (activation_Accessor) {
    return *activation_Accessor;
  }
  throw uci::base::UCIException("Error in getActivation(): An attempt was made to get an optional field that was not enabled, call hasActivation() to determine if it is safe to call getActivation()");
}

const uci::type::EA_ActivationEnum& EA_CapabilityCommandType::getActivation() const {
  return getActivation_();
}

uci::type::EA_ActivationEnum& EA_CapabilityCommandType::getActivation() {
  return getActivation_();
}

uci::type::EA_CapabilityCommandType& EA_CapabilityCommandType::setActivation(const uci::type::EA_ActivationEnum& accessor) {
  enableActivation();
  if (&accessor != activation_Accessor.get()) {
    activation_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::EA_CapabilityCommandType& EA_CapabilityCommandType::setActivation(const uci::type::EA_ActivationEnum::EnumerationItem value) {
  enableActivation().setValue(value);
  return *this;
}

bool EA_CapabilityCommandType::hasActivation() const noexcept {
  return static_cast<bool>(activation_Accessor);
}

uci::type::EA_ActivationEnum& EA_CapabilityCommandType::enableActivation(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::eA_ActivationEnum : type};
  if ((!activation_Accessor) || (activation_Accessor->getAccessorType() != requestedType)) {
    activation_Accessor = EA_ActivationEnum::create(requestedType);
    if (!activation_Accessor) {
      throw uci::base::UCIException("Error in enableActivation(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *activation_Accessor;
}

uci::type::EA_CapabilityCommandType& EA_CapabilityCommandType::clearActivation() noexcept {
  activation_Accessor.reset();
  return *this;
}

uci::type::CapabilityCommandFrequencyType& EA_CapabilityCommandType::getFrequency_() const {
  if (frequency_Accessor) {
    return *frequency_Accessor;
  }
  throw uci::base::UCIException("Error in getFrequency(): An attempt was made to get an optional field that was not enabled, call hasFrequency() to determine if it is safe to call getFrequency()");
}

const uci::type::CapabilityCommandFrequencyType& EA_CapabilityCommandType::getFrequency() const {
  return getFrequency_();
}

uci::type::CapabilityCommandFrequencyType& EA_CapabilityCommandType::getFrequency() {
  return getFrequency_();
}

uci::type::EA_CapabilityCommandType& EA_CapabilityCommandType::setFrequency(const uci::type::CapabilityCommandFrequencyType& accessor) {
  enableFrequency();
  if (&accessor != frequency_Accessor.get()) {
    frequency_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool EA_CapabilityCommandType::hasFrequency() const noexcept {
  return static_cast<bool>(frequency_Accessor);
}

uci::type::CapabilityCommandFrequencyType& EA_CapabilityCommandType::enableFrequency(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::capabilityCommandFrequencyType : type};
  if ((!frequency_Accessor) || (frequency_Accessor->getAccessorType() != requestedType)) {
    frequency_Accessor = CapabilityCommandFrequencyType::create(requestedType);
    if (!frequency_Accessor) {
      throw uci::base::UCIException("Error in enableFrequency(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *frequency_Accessor;
}

uci::type::EA_CapabilityCommandType& EA_CapabilityCommandType::clearFrequency() noexcept {
  frequency_Accessor.reset();
  return *this;
}

const uci::type::EA_CapabilityCommandType::ProtectedEntityPredictedReturnPower& EA_CapabilityCommandType::getProtectedEntityPredictedReturnPower() const {
  return *protectedEntityPredictedReturnPower_Accessor;
}

uci::type::EA_CapabilityCommandType::ProtectedEntityPredictedReturnPower& EA_CapabilityCommandType::getProtectedEntityPredictedReturnPower() {
  return *protectedEntityPredictedReturnPower_Accessor;
}

uci::type::EA_CapabilityCommandType& EA_CapabilityCommandType::setProtectedEntityPredictedReturnPower(const uci::type::EA_CapabilityCommandType::ProtectedEntityPredictedReturnPower& accessor) {
  if (&accessor != protectedEntityPredictedReturnPower_Accessor.get()) {
    protectedEntityPredictedReturnPower_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::EA_CapabilityCommandType::ResourceSelection& EA_CapabilityCommandType::getResourceSelection() const {
  return *resourceSelection_Accessor;
}

uci::type::EA_CapabilityCommandType::ResourceSelection& EA_CapabilityCommandType::getResourceSelection() {
  return *resourceSelection_Accessor;
}

uci::type::EA_CapabilityCommandType& EA_CapabilityCommandType::setResourceSelection(const uci::type::EA_CapabilityCommandType::ResourceSelection& accessor) {
  if (&accessor != resourceSelection_Accessor.get()) {
    resourceSelection_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<EA_CapabilityCommandType> EA_CapabilityCommandType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::eA_CapabilityCommandType : type};
  return (requestedType == uci::type::accessorType::eA_CapabilityCommandType) ? boost::make_unique<EA_CapabilityCommandType>() : nullptr;
}

/**  */
namespace EA_CapabilityCommandType_Names {

constexpr const char* Extern_Type_Name{"EA_CapabilityCommandType"};
constexpr const char* ResourceAllocatorCommandExtension_Name{"ResourceAllocatorCommandExtension"};
constexpr const char* Emission_Name{"Emission"};
constexpr const char* Activation_Name{"Activation"};
constexpr const char* Frequency_Name{"Frequency"};
constexpr const char* ProtectedEntityPredictedReturnPower_Name{"ProtectedEntityPredictedReturnPower"};
constexpr const char* ResourceSelection_Name{"ResourceSelection"};

} // namespace EA_CapabilityCommandType_Names

void EA_CapabilityCommandType::deserialize(const boost::property_tree::ptree& propTree, uci::type::EA_CapabilityCommandType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EA_CapabilityCommandType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + EA_CapabilityCommandType_Names::ResourceAllocatorCommandExtension_Name) {
      ResourceAllocatorCommandExtensionType::deserialize(valueType.second, accessor.enableResourceAllocatorCommandExtension(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EA_CapabilityCommandType_Names::Emission_Name) {
      EA_EmissionType::deserialize(valueType.second, accessor.enableEmission(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EA_CapabilityCommandType_Names::Activation_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableActivation().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + EA_CapabilityCommandType_Names::Frequency_Name) {
      CapabilityCommandFrequencyType::deserialize(valueType.second, accessor.enableFrequency(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EA_CapabilityCommandType_Names::ProtectedEntityPredictedReturnPower_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::EA_CapabilityCommandType::ProtectedEntityPredictedReturnPower& boundedList = accessor.getProtectedEntityPredictedReturnPower();
        const uci::type::EA_CapabilityCommandType::ProtectedEntityPredictedReturnPower::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::ProtectedAssetReturnPowerType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + EA_CapabilityCommandType_Names::ResourceSelection_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::EA_CapabilityCommandType::ResourceSelection& boundedList = accessor.getResourceSelection();
        const uci::type::EA_CapabilityCommandType::ResourceSelection::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::ResourceSelectionType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  SharedRF_ApertureCapabilityCommandBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string EA_CapabilityCommandType::serialize(const uci::type::EA_CapabilityCommandType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? EA_CapabilityCommandType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, EA_CapabilityCommandType_Names::Extern_Type_Name);
  }
  SharedRF_ApertureCapabilityCommandBaseType::serialize(accessor, node, "", false, false, false);
  if (accessor.hasResourceAllocatorCommandExtension()) {
    ResourceAllocatorCommandExtensionType::serialize(accessor.getResourceAllocatorCommandExtension(), node, EA_CapabilityCommandType_Names::ResourceAllocatorCommandExtension_Name);
  }
  if (accessor.hasEmission()) {
    EA_EmissionType::serialize(accessor.getEmission(), node, EA_CapabilityCommandType_Names::Emission_Name);
  }
  if (accessor.hasActivation()) {
    EA_ActivationEnum::serialize(accessor.getActivation(), node, EA_CapabilityCommandType_Names::Activation_Name, false);
  }
  if (accessor.hasFrequency()) {
    CapabilityCommandFrequencyType::serialize(accessor.getFrequency(), node, EA_CapabilityCommandType_Names::Frequency_Name);
  }
  {
    const uci::type::EA_CapabilityCommandType::ProtectedEntityPredictedReturnPower& boundedList = accessor.getProtectedEntityPredictedReturnPower();
    for (uci::type::EA_CapabilityCommandType::ProtectedEntityPredictedReturnPower::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ProtectedAssetReturnPowerType::serialize(boundedList.at(i), node, EA_CapabilityCommandType_Names::ProtectedEntityPredictedReturnPower_Name);
    }
  }
  {
    const uci::type::EA_CapabilityCommandType::ResourceSelection& boundedList = accessor.getResourceSelection();
    for (uci::type::EA_CapabilityCommandType::ResourceSelection::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ResourceSelectionType::serialize(boundedList.at(i), node, EA_CapabilityCommandType_Names::ResourceSelection_Name);
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

uci::type::EA_CapabilityCommandType& EA_CapabilityCommandType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::EA_CapabilityCommandType>().release());
}

uci::type::EA_CapabilityCommandType& EA_CapabilityCommandType::create(const uci::type::EA_CapabilityCommandType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::EA_CapabilityCommandType> newAccessor{boost::make_unique<asb_uci::type::EA_CapabilityCommandType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void EA_CapabilityCommandType::destroy(uci::type::EA_CapabilityCommandType& accessor) {
  delete dynamic_cast<asb_uci::type::EA_CapabilityCommandType*>(&accessor);
}

} // namespace type

} // namespace uci

