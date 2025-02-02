/** @file SAR_TaskBaseType.cpp
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

#include "../../../include/asb_uci/type/SAR_TaskBaseType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/LocatedEllipseType.h"
#include "../../../include/asb_uci/type/PairIdentifierEnum.h"
#include "../../../include/asb_uci/type/ProductOutputCommandImageryType.h"
#include "../../../include/asb_uci/type/SAR_CapabilityEnum.h"
#include "../../../include/asb_uci/type/SAR_CollectionConstraintsType.h"
#include "../../../include/asb_uci/type/SAR_CollectionOptionsType.h"
#include "../../../include/asb_uci/type/SAR_SubCapabilityEnum.h"
#include "../../../include/asb_uci/type/SAR_WaveformType.h"
#include "../../../include/asb_uci/util/DerivedTypesCopier.h"
#include "../../../include/asb_uci/util/DerivedTypesCreator.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/DerivedTypesSerializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LocatedEllipseType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PairIdentifierEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductOutputCommandImageryType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SAR_CapabilityEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SAR_CollectionConstraintsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SAR_CollectionOptionsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SAR_SubCapabilityEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SAR_TaskBaseType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SAR_WaveformType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SAR_TaskBaseType::SAR_TaskBaseType()
  : capabilityType_Accessor{boost::make_unique<SAR_CapabilityEnum>()},
    subCapabilityType_Accessor{boost::make_unique<SAR_SubCapabilityEnum>()},
    output_Accessor{boost::make_unique<Output>(0, SIZE_MAX)} {
}

SAR_TaskBaseType::~SAR_TaskBaseType() = default;

void SAR_TaskBaseType::copy(const uci::type::SAR_TaskBaseType& accessor) {
  copyImpl(accessor, false);
}

void SAR_TaskBaseType::copyImpl(const uci::type::SAR_TaskBaseType& accessor, const bool checkIfDerivation) {
  if (&accessor != this) {
    if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::sAR_TaskBaseType)) {
      const auto& accessorImpl = dynamic_cast<const SAR_TaskBaseType&>(accessor);
      setCapabilityType(*(accessorImpl.capabilityType_Accessor));
      setSubCapabilityType(*(accessorImpl.subCapabilityType_Accessor));
      if (accessorImpl.lookAtCoords_Accessor) {
        setLookAtCoords(*(accessorImpl.lookAtCoords_Accessor));
      } else {
        lookAtCoords_Accessor.reset();
      }
      if (accessorImpl.collectionOptions_Accessor) {
        setCollectionOptions(*(accessorImpl.collectionOptions_Accessor));
      } else {
        collectionOptions_Accessor.reset();
      }
      if (accessorImpl.collectionConstraints_Accessor) {
        setCollectionConstraints(*(accessorImpl.collectionConstraints_Accessor));
      } else {
        collectionConstraints_Accessor.reset();
      }
      if (accessorImpl.desiredWaveform_Accessor) {
        setDesiredWaveform(*(accessorImpl.desiredWaveform_Accessor));
      } else {
        desiredWaveform_Accessor.reset();
      }
      if (accessorImpl.pairIdentifier_Accessor) {
        setPairIdentifier(*(accessorImpl.pairIdentifier_Accessor));
      } else {
        pairIdentifier_Accessor.reset();
      }
      setOutput(*(accessorImpl.output_Accessor));
    } else {
      asb_uci::util::DerivedTypesCopier::copy(accessor, *this);
    }
  }
}

void SAR_TaskBaseType::reset() noexcept {
  capabilityType_Accessor->reset();
  subCapabilityType_Accessor->reset();
  lookAtCoords_Accessor.reset();
  collectionOptions_Accessor.reset();
  collectionConstraints_Accessor.reset();
  desiredWaveform_Accessor.reset();
  pairIdentifier_Accessor.reset();
  output_Accessor->reset();
}

const uci::type::SAR_CapabilityEnum& SAR_TaskBaseType::getCapabilityType() const {
  return *capabilityType_Accessor;
}

uci::type::SAR_CapabilityEnum& SAR_TaskBaseType::getCapabilityType() {
  return *capabilityType_Accessor;
}

uci::type::SAR_TaskBaseType& SAR_TaskBaseType::setCapabilityType(const uci::type::SAR_CapabilityEnum& accessor) {
  if (&accessor != capabilityType_Accessor.get()) {
    capabilityType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::SAR_TaskBaseType& SAR_TaskBaseType::setCapabilityType(uci::type::SAR_CapabilityEnum::EnumerationItem value) {
  capabilityType_Accessor->setValue(value);
  return *this;
}


const uci::type::SAR_SubCapabilityEnum& SAR_TaskBaseType::getSubCapabilityType() const {
  return *subCapabilityType_Accessor;
}

uci::type::SAR_SubCapabilityEnum& SAR_TaskBaseType::getSubCapabilityType() {
  return *subCapabilityType_Accessor;
}

uci::type::SAR_TaskBaseType& SAR_TaskBaseType::setSubCapabilityType(const uci::type::SAR_SubCapabilityEnum& accessor) {
  if (&accessor != subCapabilityType_Accessor.get()) {
    subCapabilityType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::SAR_TaskBaseType& SAR_TaskBaseType::setSubCapabilityType(uci::type::SAR_SubCapabilityEnum::EnumerationItem value) {
  subCapabilityType_Accessor->setValue(value);
  return *this;
}


uci::type::LocatedEllipseType& SAR_TaskBaseType::getLookAtCoords_() const {
  if (lookAtCoords_Accessor) {
    return *lookAtCoords_Accessor;
  }
  throw uci::base::UCIException("Error in getLookAtCoords(): An attempt was made to get an optional field that was not enabled, call hasLookAtCoords() to determine if it is safe to call getLookAtCoords()");
}

const uci::type::LocatedEllipseType& SAR_TaskBaseType::getLookAtCoords() const {
  return getLookAtCoords_();
}

uci::type::LocatedEllipseType& SAR_TaskBaseType::getLookAtCoords() {
  return getLookAtCoords_();
}

uci::type::SAR_TaskBaseType& SAR_TaskBaseType::setLookAtCoords(const uci::type::LocatedEllipseType& accessor) {
  enableLookAtCoords();
  if (&accessor != lookAtCoords_Accessor.get()) {
    lookAtCoords_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool SAR_TaskBaseType::hasLookAtCoords() const noexcept {
  return static_cast<bool>(lookAtCoords_Accessor);
}

uci::type::LocatedEllipseType& SAR_TaskBaseType::enableLookAtCoords(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::locatedEllipseType : type};
  if ((!lookAtCoords_Accessor) || (lookAtCoords_Accessor->getAccessorType() != requestedType)) {
    lookAtCoords_Accessor = LocatedEllipseType::create(requestedType);
    if (!lookAtCoords_Accessor) {
      throw uci::base::UCIException("Error in enableLookAtCoords(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *lookAtCoords_Accessor;
}

uci::type::SAR_TaskBaseType& SAR_TaskBaseType::clearLookAtCoords() noexcept {
  lookAtCoords_Accessor.reset();
  return *this;
}

uci::type::SAR_CollectionOptionsType& SAR_TaskBaseType::getCollectionOptions_() const {
  if (collectionOptions_Accessor) {
    return *collectionOptions_Accessor;
  }
  throw uci::base::UCIException("Error in getCollectionOptions(): An attempt was made to get an optional field that was not enabled, call hasCollectionOptions() to determine if it is safe to call getCollectionOptions()");
}

const uci::type::SAR_CollectionOptionsType& SAR_TaskBaseType::getCollectionOptions() const {
  return getCollectionOptions_();
}

uci::type::SAR_CollectionOptionsType& SAR_TaskBaseType::getCollectionOptions() {
  return getCollectionOptions_();
}

uci::type::SAR_TaskBaseType& SAR_TaskBaseType::setCollectionOptions(const uci::type::SAR_CollectionOptionsType& accessor) {
  enableCollectionOptions();
  if (&accessor != collectionOptions_Accessor.get()) {
    collectionOptions_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool SAR_TaskBaseType::hasCollectionOptions() const noexcept {
  return static_cast<bool>(collectionOptions_Accessor);
}

uci::type::SAR_CollectionOptionsType& SAR_TaskBaseType::enableCollectionOptions(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::sAR_CollectionOptionsType : type};
  if ((!collectionOptions_Accessor) || (collectionOptions_Accessor->getAccessorType() != requestedType)) {
    collectionOptions_Accessor = SAR_CollectionOptionsType::create(requestedType);
    if (!collectionOptions_Accessor) {
      throw uci::base::UCIException("Error in enableCollectionOptions(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *collectionOptions_Accessor;
}

uci::type::SAR_TaskBaseType& SAR_TaskBaseType::clearCollectionOptions() noexcept {
  collectionOptions_Accessor.reset();
  return *this;
}

uci::type::SAR_CollectionConstraintsType& SAR_TaskBaseType::getCollectionConstraints_() const {
  if (collectionConstraints_Accessor) {
    return *collectionConstraints_Accessor;
  }
  throw uci::base::UCIException("Error in getCollectionConstraints(): An attempt was made to get an optional field that was not enabled, call hasCollectionConstraints() to determine if it is safe to call getCollectionConstraints()");
}

const uci::type::SAR_CollectionConstraintsType& SAR_TaskBaseType::getCollectionConstraints() const {
  return getCollectionConstraints_();
}

uci::type::SAR_CollectionConstraintsType& SAR_TaskBaseType::getCollectionConstraints() {
  return getCollectionConstraints_();
}

uci::type::SAR_TaskBaseType& SAR_TaskBaseType::setCollectionConstraints(const uci::type::SAR_CollectionConstraintsType& accessor) {
  enableCollectionConstraints();
  if (&accessor != collectionConstraints_Accessor.get()) {
    collectionConstraints_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool SAR_TaskBaseType::hasCollectionConstraints() const noexcept {
  return static_cast<bool>(collectionConstraints_Accessor);
}

uci::type::SAR_CollectionConstraintsType& SAR_TaskBaseType::enableCollectionConstraints(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::sAR_CollectionConstraintsType : type};
  if ((!collectionConstraints_Accessor) || (collectionConstraints_Accessor->getAccessorType() != requestedType)) {
    collectionConstraints_Accessor = SAR_CollectionConstraintsType::create(requestedType);
    if (!collectionConstraints_Accessor) {
      throw uci::base::UCIException("Error in enableCollectionConstraints(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *collectionConstraints_Accessor;
}

uci::type::SAR_TaskBaseType& SAR_TaskBaseType::clearCollectionConstraints() noexcept {
  collectionConstraints_Accessor.reset();
  return *this;
}

uci::type::SAR_WaveformType& SAR_TaskBaseType::getDesiredWaveform_() const {
  if (desiredWaveform_Accessor) {
    return *desiredWaveform_Accessor;
  }
  throw uci::base::UCIException("Error in getDesiredWaveform(): An attempt was made to get an optional field that was not enabled, call hasDesiredWaveform() to determine if it is safe to call getDesiredWaveform()");
}

const uci::type::SAR_WaveformType& SAR_TaskBaseType::getDesiredWaveform() const {
  return getDesiredWaveform_();
}

uci::type::SAR_WaveformType& SAR_TaskBaseType::getDesiredWaveform() {
  return getDesiredWaveform_();
}

uci::type::SAR_TaskBaseType& SAR_TaskBaseType::setDesiredWaveform(const uci::type::SAR_WaveformType& accessor) {
  enableDesiredWaveform();
  if (&accessor != desiredWaveform_Accessor.get()) {
    desiredWaveform_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool SAR_TaskBaseType::hasDesiredWaveform() const noexcept {
  return static_cast<bool>(desiredWaveform_Accessor);
}

uci::type::SAR_WaveformType& SAR_TaskBaseType::enableDesiredWaveform(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::sAR_WaveformType : type};
  if ((!desiredWaveform_Accessor) || (desiredWaveform_Accessor->getAccessorType() != requestedType)) {
    desiredWaveform_Accessor = SAR_WaveformType::create(requestedType);
    if (!desiredWaveform_Accessor) {
      throw uci::base::UCIException("Error in enableDesiredWaveform(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *desiredWaveform_Accessor;
}

uci::type::SAR_TaskBaseType& SAR_TaskBaseType::clearDesiredWaveform() noexcept {
  desiredWaveform_Accessor.reset();
  return *this;
}

uci::type::PairIdentifierEnum& SAR_TaskBaseType::getPairIdentifier_() const {
  if (pairIdentifier_Accessor) {
    return *pairIdentifier_Accessor;
  }
  throw uci::base::UCIException("Error in getPairIdentifier(): An attempt was made to get an optional field that was not enabled, call hasPairIdentifier() to determine if it is safe to call getPairIdentifier()");
}

const uci::type::PairIdentifierEnum& SAR_TaskBaseType::getPairIdentifier() const {
  return getPairIdentifier_();
}

uci::type::PairIdentifierEnum& SAR_TaskBaseType::getPairIdentifier() {
  return getPairIdentifier_();
}

uci::type::SAR_TaskBaseType& SAR_TaskBaseType::setPairIdentifier(const uci::type::PairIdentifierEnum& accessor) {
  enablePairIdentifier();
  if (&accessor != pairIdentifier_Accessor.get()) {
    pairIdentifier_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::SAR_TaskBaseType& SAR_TaskBaseType::setPairIdentifier(const uci::type::PairIdentifierEnum::EnumerationItem value) {
  enablePairIdentifier().setValue(value);
  return *this;
}

bool SAR_TaskBaseType::hasPairIdentifier() const noexcept {
  return static_cast<bool>(pairIdentifier_Accessor);
}

uci::type::PairIdentifierEnum& SAR_TaskBaseType::enablePairIdentifier(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pairIdentifierEnum : type};
  if ((!pairIdentifier_Accessor) || (pairIdentifier_Accessor->getAccessorType() != requestedType)) {
    pairIdentifier_Accessor = PairIdentifierEnum::create(requestedType);
    if (!pairIdentifier_Accessor) {
      throw uci::base::UCIException("Error in enablePairIdentifier(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *pairIdentifier_Accessor;
}

uci::type::SAR_TaskBaseType& SAR_TaskBaseType::clearPairIdentifier() noexcept {
  pairIdentifier_Accessor.reset();
  return *this;
}

const uci::type::SAR_TaskBaseType::Output& SAR_TaskBaseType::getOutput() const {
  return *output_Accessor;
}

uci::type::SAR_TaskBaseType::Output& SAR_TaskBaseType::getOutput() {
  return *output_Accessor;
}

uci::type::SAR_TaskBaseType& SAR_TaskBaseType::setOutput(const uci::type::SAR_TaskBaseType::Output& accessor) {
  if (&accessor != output_Accessor.get()) {
    output_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<SAR_TaskBaseType> SAR_TaskBaseType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::sAR_TaskBaseType : type};
  return std::unique_ptr<SAR_TaskBaseType>(dynamic_cast<SAR_TaskBaseType*>(asb_uci::util::DerivedTypesCreator::create(requestedType)));
}

/**  */
namespace SAR_TaskBaseType_Names {

constexpr const char* Extern_Type_Name{"SAR_TaskBaseType"};
constexpr const char* CapabilityType_Name{"CapabilityType"};
constexpr const char* SubCapabilityType_Name{"SubCapabilityType"};
constexpr const char* LookAtCoords_Name{"LookAtCoords"};
constexpr const char* CollectionOptions_Name{"CollectionOptions"};
constexpr const char* CollectionConstraints_Name{"CollectionConstraints"};
constexpr const char* DesiredWaveform_Name{"DesiredWaveform"};
constexpr const char* PairIdentifier_Name{"PairIdentifier"};
constexpr const char* Output_Name{"Output"};

} // namespace SAR_TaskBaseType_Names

void SAR_TaskBaseType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SAR_TaskBaseType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SAR_TaskBaseType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SAR_TaskBaseType_Names::CapabilityType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getCapabilityType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + SAR_TaskBaseType_Names::SubCapabilityType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getSubCapabilityType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + SAR_TaskBaseType_Names::LookAtCoords_Name) {
      LocatedEllipseType::deserialize(valueType.second, accessor.enableLookAtCoords(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SAR_TaskBaseType_Names::CollectionOptions_Name) {
      SAR_CollectionOptionsType::deserialize(valueType.second, accessor.enableCollectionOptions(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SAR_TaskBaseType_Names::CollectionConstraints_Name) {
      SAR_CollectionConstraintsType::deserialize(valueType.second, accessor.enableCollectionConstraints(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SAR_TaskBaseType_Names::DesiredWaveform_Name) {
      SAR_WaveformType::deserialize(valueType.second, accessor.enableDesiredWaveform(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SAR_TaskBaseType_Names::PairIdentifier_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enablePairIdentifier().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + SAR_TaskBaseType_Names::Output_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SAR_TaskBaseType::Output& boundedList = accessor.getOutput();
        const uci::type::SAR_TaskBaseType::Output::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::ProductOutputCommandImageryType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string SAR_TaskBaseType::serialize(const uci::type::SAR_TaskBaseType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SAR_TaskBaseType_Names::Extern_Type_Name : nodeName)};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::sAR_TaskBaseType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      asb_uci::util::SerializationHelpers::addTypeAttribute(node, SAR_TaskBaseType_Names::Extern_Type_Name);
    }
    SAR_CapabilityEnum::serialize(accessor.getCapabilityType(), node, SAR_TaskBaseType_Names::CapabilityType_Name, false);
    SAR_SubCapabilityEnum::serialize(accessor.getSubCapabilityType(), node, SAR_TaskBaseType_Names::SubCapabilityType_Name, false);
    if (accessor.hasLookAtCoords()) {
      LocatedEllipseType::serialize(accessor.getLookAtCoords(), node, SAR_TaskBaseType_Names::LookAtCoords_Name);
    }
    if (accessor.hasCollectionOptions()) {
      SAR_CollectionOptionsType::serialize(accessor.getCollectionOptions(), node, SAR_TaskBaseType_Names::CollectionOptions_Name);
    }
    if (accessor.hasCollectionConstraints()) {
      SAR_CollectionConstraintsType::serialize(accessor.getCollectionConstraints(), node, SAR_TaskBaseType_Names::CollectionConstraints_Name);
    }
    if (accessor.hasDesiredWaveform()) {
      SAR_WaveformType::serialize(accessor.getDesiredWaveform(), node, SAR_TaskBaseType_Names::DesiredWaveform_Name);
    }
    if (accessor.hasPairIdentifier()) {
      PairIdentifierEnum::serialize(accessor.getPairIdentifier(), node, SAR_TaskBaseType_Names::PairIdentifier_Name, false);
    }
    {
      const uci::type::SAR_TaskBaseType::Output& boundedList = accessor.getOutput();
      for (uci::type::SAR_TaskBaseType::Output::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::ProductOutputCommandImageryType::serialize(boundedList.at(i), node, SAR_TaskBaseType_Names::Output_Name);
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

uci::type::SAR_TaskBaseType& SAR_TaskBaseType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SAR_TaskBaseType>().release());
}

uci::type::SAR_TaskBaseType& SAR_TaskBaseType::create(const uci::type::SAR_TaskBaseType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SAR_TaskBaseType> newAccessor{boost::make_unique<asb_uci::type::SAR_TaskBaseType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SAR_TaskBaseType::destroy(uci::type::SAR_TaskBaseType& accessor) {
  delete dynamic_cast<asb_uci::type::SAR_TaskBaseType*>(&accessor);
}

} // namespace type

} // namespace uci

