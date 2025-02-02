/** @file IFF_CapabilityCommandType.cpp
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

#include "../../../include/asb_uci/type/IFF_CapabilityCommandType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/AirTargetVolumeCommandType.h"
#include "../../../include/asb_uci/type/AirTargetVolumeType.h"
#include "../../../include/asb_uci/type/CapabilityCommandBaseType.h"
#include "../../../include/asb_uci/type/IFF_CollectionConstraintsType.h"
#include "../../../include/asb_uci/type/IFF_InterrogatorTransponderModesType.h"
#include "../../../include/asb_uci/type/ProductOutputCommandBasicType.h"
#include "../../../include/asb_uci/type/RadarCollectionOptionsType.h"
#include "../../../include/asb_uci/type/RepetitionType.h"
#include "../../../include/asb_uci/type/ResourceSelectionType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AirTargetVolumeCommandType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AirTargetVolumeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IFF_CapabilityCommandType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IFF_CollectionConstraintsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IFF_InterrogatorTransponderModesType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductOutputCommandBasicType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RadarCollectionOptionsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RepetitionType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ResourceSelectionType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

IFF_CapabilityCommandType::IFF_CapabilityCommandType()
  : subCapabilityDetails_Accessor{boost::make_unique<IFF_InterrogatorTransponderModesType>()},
    resourceSelection_Accessor{boost::make_unique<ResourceSelection>(0, SIZE_MAX)},
    targetVolume_Accessor{boost::make_unique<TargetVolume>(0, 2)},
    blankingVolume_Accessor{boost::make_unique<BlankingVolume>(0, SIZE_MAX)},
    productOutput_Accessor{boost::make_unique<ProductOutput>(0, SIZE_MAX)} {
}

IFF_CapabilityCommandType::~IFF_CapabilityCommandType() = default;

void IFF_CapabilityCommandType::copy(const uci::type::IFF_CapabilityCommandType& accessor) {
  copyImpl(accessor, false);
}

void IFF_CapabilityCommandType::copyImpl(const uci::type::IFF_CapabilityCommandType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    CapabilityCommandBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const IFF_CapabilityCommandType&>(accessor);
    setSubCapabilityDetails(*(accessorImpl.subCapabilityDetails_Accessor));
    setResourceSelection(*(accessorImpl.resourceSelection_Accessor));
    setTargetVolume(*(accessorImpl.targetVolume_Accessor));
    setBlankingVolume(*(accessorImpl.blankingVolume_Accessor));
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
    if (accessorImpl.repetition_Accessor) {
      setRepetition(*(accessorImpl.repetition_Accessor));
    } else {
      repetition_Accessor.reset();
    }
    setProductOutput(*(accessorImpl.productOutput_Accessor));
  }
}

void IFF_CapabilityCommandType::reset() noexcept {
  CapabilityCommandBaseType::reset();
  subCapabilityDetails_Accessor->reset();
  resourceSelection_Accessor->reset();
  targetVolume_Accessor->reset();
  blankingVolume_Accessor->reset();
  collectionOptions_Accessor.reset();
  collectionConstraints_Accessor.reset();
  repetition_Accessor.reset();
  productOutput_Accessor->reset();
}

const uci::type::IFF_InterrogatorTransponderModesType& IFF_CapabilityCommandType::getSubCapabilityDetails() const {
  return *subCapabilityDetails_Accessor;
}

uci::type::IFF_InterrogatorTransponderModesType& IFF_CapabilityCommandType::getSubCapabilityDetails() {
  return *subCapabilityDetails_Accessor;
}

uci::type::IFF_CapabilityCommandType& IFF_CapabilityCommandType::setSubCapabilityDetails(const uci::type::IFF_InterrogatorTransponderModesType& accessor) {
  if (&accessor != subCapabilityDetails_Accessor.get()) {
    subCapabilityDetails_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::IFF_CapabilityCommandType::ResourceSelection& IFF_CapabilityCommandType::getResourceSelection() const {
  return *resourceSelection_Accessor;
}

uci::type::IFF_CapabilityCommandType::ResourceSelection& IFF_CapabilityCommandType::getResourceSelection() {
  return *resourceSelection_Accessor;
}

uci::type::IFF_CapabilityCommandType& IFF_CapabilityCommandType::setResourceSelection(const uci::type::IFF_CapabilityCommandType::ResourceSelection& accessor) {
  if (&accessor != resourceSelection_Accessor.get()) {
    resourceSelection_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::IFF_CapabilityCommandType::TargetVolume& IFF_CapabilityCommandType::getTargetVolume() const {
  return *targetVolume_Accessor;
}

uci::type::IFF_CapabilityCommandType::TargetVolume& IFF_CapabilityCommandType::getTargetVolume() {
  return *targetVolume_Accessor;
}

uci::type::IFF_CapabilityCommandType& IFF_CapabilityCommandType::setTargetVolume(const uci::type::IFF_CapabilityCommandType::TargetVolume& accessor) {
  if (&accessor != targetVolume_Accessor.get()) {
    targetVolume_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::IFF_CapabilityCommandType::BlankingVolume& IFF_CapabilityCommandType::getBlankingVolume() const {
  return *blankingVolume_Accessor;
}

uci::type::IFF_CapabilityCommandType::BlankingVolume& IFF_CapabilityCommandType::getBlankingVolume() {
  return *blankingVolume_Accessor;
}

uci::type::IFF_CapabilityCommandType& IFF_CapabilityCommandType::setBlankingVolume(const uci::type::IFF_CapabilityCommandType::BlankingVolume& accessor) {
  if (&accessor != blankingVolume_Accessor.get()) {
    blankingVolume_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::RadarCollectionOptionsType& IFF_CapabilityCommandType::getCollectionOptions_() const {
  if (collectionOptions_Accessor) {
    return *collectionOptions_Accessor;
  }
  throw uci::base::UCIException("Error in getCollectionOptions(): An attempt was made to get an optional field that was not enabled, call hasCollectionOptions() to determine if it is safe to call getCollectionOptions()");
}

const uci::type::RadarCollectionOptionsType& IFF_CapabilityCommandType::getCollectionOptions() const {
  return getCollectionOptions_();
}

uci::type::RadarCollectionOptionsType& IFF_CapabilityCommandType::getCollectionOptions() {
  return getCollectionOptions_();
}

uci::type::IFF_CapabilityCommandType& IFF_CapabilityCommandType::setCollectionOptions(const uci::type::RadarCollectionOptionsType& accessor) {
  enableCollectionOptions(accessor.getAccessorType());
  if (&accessor != collectionOptions_Accessor.get()) {
    collectionOptions_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool IFF_CapabilityCommandType::hasCollectionOptions() const noexcept {
  return static_cast<bool>(collectionOptions_Accessor);
}

uci::type::RadarCollectionOptionsType& IFF_CapabilityCommandType::enableCollectionOptions(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::radarCollectionOptionsType : type};
  if ((!collectionOptions_Accessor) || (collectionOptions_Accessor->getAccessorType() != requestedType)) {
    collectionOptions_Accessor = RadarCollectionOptionsType::create(requestedType);
    if (!collectionOptions_Accessor) {
      throw uci::base::UCIException("Error in enableCollectionOptions(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *collectionOptions_Accessor;
}

uci::type::IFF_CapabilityCommandType& IFF_CapabilityCommandType::clearCollectionOptions() noexcept {
  collectionOptions_Accessor.reset();
  return *this;
}

uci::type::IFF_CollectionConstraintsType& IFF_CapabilityCommandType::getCollectionConstraints_() const {
  if (collectionConstraints_Accessor) {
    return *collectionConstraints_Accessor;
  }
  throw uci::base::UCIException("Error in getCollectionConstraints(): An attempt was made to get an optional field that was not enabled, call hasCollectionConstraints() to determine if it is safe to call getCollectionConstraints()");
}

const uci::type::IFF_CollectionConstraintsType& IFF_CapabilityCommandType::getCollectionConstraints() const {
  return getCollectionConstraints_();
}

uci::type::IFF_CollectionConstraintsType& IFF_CapabilityCommandType::getCollectionConstraints() {
  return getCollectionConstraints_();
}

uci::type::IFF_CapabilityCommandType& IFF_CapabilityCommandType::setCollectionConstraints(const uci::type::IFF_CollectionConstraintsType& accessor) {
  enableCollectionConstraints();
  if (&accessor != collectionConstraints_Accessor.get()) {
    collectionConstraints_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool IFF_CapabilityCommandType::hasCollectionConstraints() const noexcept {
  return static_cast<bool>(collectionConstraints_Accessor);
}

uci::type::IFF_CollectionConstraintsType& IFF_CapabilityCommandType::enableCollectionConstraints(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::iFF_CollectionConstraintsType : type};
  if ((!collectionConstraints_Accessor) || (collectionConstraints_Accessor->getAccessorType() != requestedType)) {
    collectionConstraints_Accessor = IFF_CollectionConstraintsType::create(requestedType);
    if (!collectionConstraints_Accessor) {
      throw uci::base::UCIException("Error in enableCollectionConstraints(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *collectionConstraints_Accessor;
}

uci::type::IFF_CapabilityCommandType& IFF_CapabilityCommandType::clearCollectionConstraints() noexcept {
  collectionConstraints_Accessor.reset();
  return *this;
}

uci::type::RepetitionType& IFF_CapabilityCommandType::getRepetition_() const {
  if (repetition_Accessor) {
    return *repetition_Accessor;
  }
  throw uci::base::UCIException("Error in getRepetition(): An attempt was made to get an optional field that was not enabled, call hasRepetition() to determine if it is safe to call getRepetition()");
}

const uci::type::RepetitionType& IFF_CapabilityCommandType::getRepetition() const {
  return getRepetition_();
}

uci::type::RepetitionType& IFF_CapabilityCommandType::getRepetition() {
  return getRepetition_();
}

uci::type::IFF_CapabilityCommandType& IFF_CapabilityCommandType::setRepetition(const uci::type::RepetitionType& accessor) {
  enableRepetition();
  if (&accessor != repetition_Accessor.get()) {
    repetition_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool IFF_CapabilityCommandType::hasRepetition() const noexcept {
  return static_cast<bool>(repetition_Accessor);
}

uci::type::RepetitionType& IFF_CapabilityCommandType::enableRepetition(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::repetitionType : type};
  if ((!repetition_Accessor) || (repetition_Accessor->getAccessorType() != requestedType)) {
    repetition_Accessor = RepetitionType::create(requestedType);
    if (!repetition_Accessor) {
      throw uci::base::UCIException("Error in enableRepetition(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *repetition_Accessor;
}

uci::type::IFF_CapabilityCommandType& IFF_CapabilityCommandType::clearRepetition() noexcept {
  repetition_Accessor.reset();
  return *this;
}

const uci::type::IFF_CapabilityCommandType::ProductOutput& IFF_CapabilityCommandType::getProductOutput() const {
  return *productOutput_Accessor;
}

uci::type::IFF_CapabilityCommandType::ProductOutput& IFF_CapabilityCommandType::getProductOutput() {
  return *productOutput_Accessor;
}

uci::type::IFF_CapabilityCommandType& IFF_CapabilityCommandType::setProductOutput(const uci::type::IFF_CapabilityCommandType::ProductOutput& accessor) {
  if (&accessor != productOutput_Accessor.get()) {
    productOutput_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<IFF_CapabilityCommandType> IFF_CapabilityCommandType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::iFF_CapabilityCommandType : type};
  return (requestedType == uci::type::accessorType::iFF_CapabilityCommandType) ? boost::make_unique<IFF_CapabilityCommandType>() : nullptr;
}

/**  */
namespace IFF_CapabilityCommandType_Names {

constexpr const char* Extern_Type_Name{"IFF_CapabilityCommandType"};
constexpr const char* SubCapabilityDetails_Name{"SubCapabilityDetails"};
constexpr const char* ResourceSelection_Name{"ResourceSelection"};
constexpr const char* TargetVolume_Name{"TargetVolume"};
constexpr const char* BlankingVolume_Name{"BlankingVolume"};
constexpr const char* CollectionOptions_Name{"CollectionOptions"};
constexpr const char* CollectionConstraints_Name{"CollectionConstraints"};
constexpr const char* Repetition_Name{"Repetition"};
constexpr const char* ProductOutput_Name{"ProductOutput"};

} // namespace IFF_CapabilityCommandType_Names

void IFF_CapabilityCommandType::deserialize(const boost::property_tree::ptree& propTree, uci::type::IFF_CapabilityCommandType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = IFF_CapabilityCommandType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + IFF_CapabilityCommandType_Names::SubCapabilityDetails_Name) {
      IFF_InterrogatorTransponderModesType::deserialize(valueType.second, accessor.getSubCapabilityDetails(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + IFF_CapabilityCommandType_Names::ResourceSelection_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::IFF_CapabilityCommandType::ResourceSelection& boundedList = accessor.getResourceSelection();
        const uci::type::IFF_CapabilityCommandType::ResourceSelection::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::ResourceSelectionType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + IFF_CapabilityCommandType_Names::TargetVolume_Name) {
      uci::type::IFF_CapabilityCommandType::TargetVolume& boundedList = accessor.getTargetVolume();
      const uci::type::IFF_CapabilityCommandType::TargetVolume::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::AirTargetVolumeCommandType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + IFF_CapabilityCommandType_Names::BlankingVolume_Name) {
      uci::type::IFF_CapabilityCommandType::BlankingVolume& boundedList = accessor.getBlankingVolume();
      const uci::type::IFF_CapabilityCommandType::BlankingVolume::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::AirTargetVolumeType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + IFF_CapabilityCommandType_Names::CollectionOptions_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableCollectionOptions(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + IFF_CapabilityCommandType_Names::CollectionConstraints_Name) {
      IFF_CollectionConstraintsType::deserialize(valueType.second, accessor.enableCollectionConstraints(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + IFF_CapabilityCommandType_Names::Repetition_Name) {
      RepetitionType::deserialize(valueType.second, accessor.enableRepetition(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + IFF_CapabilityCommandType_Names::ProductOutput_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::IFF_CapabilityCommandType::ProductOutput& boundedList = accessor.getProductOutput();
        const uci::type::IFF_CapabilityCommandType::ProductOutput::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1, asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix));
        asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  CapabilityCommandBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string IFF_CapabilityCommandType::serialize(const uci::type::IFF_CapabilityCommandType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? IFF_CapabilityCommandType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, IFF_CapabilityCommandType_Names::Extern_Type_Name);
  }
  CapabilityCommandBaseType::serialize(accessor, node, "", false, false, false);
  IFF_InterrogatorTransponderModesType::serialize(accessor.getSubCapabilityDetails(), node, IFF_CapabilityCommandType_Names::SubCapabilityDetails_Name);
  {
    const uci::type::IFF_CapabilityCommandType::ResourceSelection& boundedList = accessor.getResourceSelection();
    for (uci::type::IFF_CapabilityCommandType::ResourceSelection::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ResourceSelectionType::serialize(boundedList.at(i), node, IFF_CapabilityCommandType_Names::ResourceSelection_Name);
    }
  }
  {
    const uci::type::IFF_CapabilityCommandType::TargetVolume& boundedList = accessor.getTargetVolume();
    for (uci::type::IFF_CapabilityCommandType::TargetVolume::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::AirTargetVolumeCommandType::serialize(boundedList.at(i), node, IFF_CapabilityCommandType_Names::TargetVolume_Name);
    }
  }
  {
    const uci::type::IFF_CapabilityCommandType::BlankingVolume& boundedList = accessor.getBlankingVolume();
    for (uci::type::IFF_CapabilityCommandType::BlankingVolume::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::AirTargetVolumeType::serialize(boundedList.at(i), node, IFF_CapabilityCommandType_Names::BlankingVolume_Name);
    }
  }
  if (accessor.hasCollectionOptions()) {
    RadarCollectionOptionsType::serialize(accessor.getCollectionOptions(), node, IFF_CapabilityCommandType_Names::CollectionOptions_Name);
  }
  if (accessor.hasCollectionConstraints()) {
    IFF_CollectionConstraintsType::serialize(accessor.getCollectionConstraints(), node, IFF_CapabilityCommandType_Names::CollectionConstraints_Name);
  }
  if (accessor.hasRepetition()) {
    RepetitionType::serialize(accessor.getRepetition(), node, IFF_CapabilityCommandType_Names::Repetition_Name);
  }
  {
    const uci::type::IFF_CapabilityCommandType::ProductOutput& boundedList = accessor.getProductOutput();
    for (uci::type::IFF_CapabilityCommandType::ProductOutput::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ProductOutputCommandBasicType::serialize(boundedList.at(i), node, IFF_CapabilityCommandType_Names::ProductOutput_Name);
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

uci::type::IFF_CapabilityCommandType& IFF_CapabilityCommandType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::IFF_CapabilityCommandType>().release());
}

uci::type::IFF_CapabilityCommandType& IFF_CapabilityCommandType::create(const uci::type::IFF_CapabilityCommandType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::IFF_CapabilityCommandType> newAccessor{boost::make_unique<asb_uci::type::IFF_CapabilityCommandType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void IFF_CapabilityCommandType::destroy(uci::type::IFF_CapabilityCommandType& accessor) {
  delete dynamic_cast<asb_uci::type::IFF_CapabilityCommandType*>(&accessor);
}

} // namespace type

} // namespace uci

