/** @file PO_SettingsCommandMDT.cpp
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

#include "../../../include/asb_uci/type/PO_SettingsCommandMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CapabilitySettingsCommandBaseType.h"
#include "../../../include/asb_uci/type/FOR_Type.h"
#include "../../../include/asb_uci/type/PO_CollectionConstraintsSettingsType.h"
#include "../../../include/asb_uci/type/PO_ComponentSettingsType.h"
#include "../../../include/asb_uci/type/PO_MessageOutputsEnum.h"
#include "../../../include/asb_uci/type/PO_SubCapabilitySettingsType.h"
#include "../../../include/asb_uci/type/PO_TrackSettingsType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/FOR_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_CollectionConstraintsSettingsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentSettingsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_MessageOutputsEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_SettingsCommandMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_SubCapabilitySettingsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_TrackSettingsType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PO_SettingsCommandMDT::PO_SettingsCommandMDT()
  : subCapability_Accessor{boost::make_unique<SubCapability>(0, SIZE_MAX)},
    trackSettings_Accessor{boost::make_unique<TrackSettings>(0, SIZE_MAX)},
    componentSettings_Accessor{boost::make_unique<ComponentSettings>(0, SIZE_MAX)},
    messageOutput_Accessor{boost::make_unique<MessageOutput>(0, 4)} {
}

PO_SettingsCommandMDT::~PO_SettingsCommandMDT() = default;

void PO_SettingsCommandMDT::copy(const uci::type::PO_SettingsCommandMDT& accessor) {
  copyImpl(accessor, false);
}

void PO_SettingsCommandMDT::copyImpl(const uci::type::PO_SettingsCommandMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    CapabilitySettingsCommandBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const PO_SettingsCommandMDT&>(accessor);
    setSubCapability(*(accessorImpl.subCapability_Accessor));
    setTrackSettings(*(accessorImpl.trackSettings_Accessor));
    setComponentSettings(*(accessorImpl.componentSettings_Accessor));
    if (accessorImpl.collectionConstraintsSettings_Accessor) {
      setCollectionConstraintsSettings(*(accessorImpl.collectionConstraintsSettings_Accessor));
    } else {
      collectionConstraintsSettings_Accessor.reset();
    }
    setMessageOutput(*(accessorImpl.messageOutput_Accessor));
    if (accessorImpl.fOR_Settings_Accessor) {
      setFOR_Settings(*(accessorImpl.fOR_Settings_Accessor));
    } else {
      fOR_Settings_Accessor.reset();
    }
    if (accessorImpl.thermalBlankingFOR_Settings_Accessor) {
      setThermalBlankingFOR_Settings(*(accessorImpl.thermalBlankingFOR_Settings_Accessor));
    } else {
      thermalBlankingFOR_Settings_Accessor.reset();
    }
  }
}

void PO_SettingsCommandMDT::reset() noexcept {
  CapabilitySettingsCommandBaseType::reset();
  subCapability_Accessor->reset();
  trackSettings_Accessor->reset();
  componentSettings_Accessor->reset();
  collectionConstraintsSettings_Accessor.reset();
  messageOutput_Accessor->reset();
  fOR_Settings_Accessor.reset();
  thermalBlankingFOR_Settings_Accessor.reset();
}

const uci::type::PO_SettingsCommandMDT::SubCapability& PO_SettingsCommandMDT::getSubCapability() const {
  return *subCapability_Accessor;
}

uci::type::PO_SettingsCommandMDT::SubCapability& PO_SettingsCommandMDT::getSubCapability() {
  return *subCapability_Accessor;
}

uci::type::PO_SettingsCommandMDT& PO_SettingsCommandMDT::setSubCapability(const uci::type::PO_SettingsCommandMDT::SubCapability& accessor) {
  if (&accessor != subCapability_Accessor.get()) {
    subCapability_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PO_SettingsCommandMDT::TrackSettings& PO_SettingsCommandMDT::getTrackSettings() const {
  return *trackSettings_Accessor;
}

uci::type::PO_SettingsCommandMDT::TrackSettings& PO_SettingsCommandMDT::getTrackSettings() {
  return *trackSettings_Accessor;
}

uci::type::PO_SettingsCommandMDT& PO_SettingsCommandMDT::setTrackSettings(const uci::type::PO_SettingsCommandMDT::TrackSettings& accessor) {
  if (&accessor != trackSettings_Accessor.get()) {
    trackSettings_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PO_SettingsCommandMDT::ComponentSettings& PO_SettingsCommandMDT::getComponentSettings() const {
  return *componentSettings_Accessor;
}

uci::type::PO_SettingsCommandMDT::ComponentSettings& PO_SettingsCommandMDT::getComponentSettings() {
  return *componentSettings_Accessor;
}

uci::type::PO_SettingsCommandMDT& PO_SettingsCommandMDT::setComponentSettings(const uci::type::PO_SettingsCommandMDT::ComponentSettings& accessor) {
  if (&accessor != componentSettings_Accessor.get()) {
    componentSettings_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::PO_CollectionConstraintsSettingsType& PO_SettingsCommandMDT::getCollectionConstraintsSettings_() const {
  if (collectionConstraintsSettings_Accessor) {
    return *collectionConstraintsSettings_Accessor;
  }
  throw uci::base::UCIException("Error in getCollectionConstraintsSettings(): An attempt was made to get an optional field that was not enabled, call hasCollectionConstraintsSettings() to determine if it is safe to call getCollectionConstraintsSettings()");
}

const uci::type::PO_CollectionConstraintsSettingsType& PO_SettingsCommandMDT::getCollectionConstraintsSettings() const {
  return getCollectionConstraintsSettings_();
}

uci::type::PO_CollectionConstraintsSettingsType& PO_SettingsCommandMDT::getCollectionConstraintsSettings() {
  return getCollectionConstraintsSettings_();
}

uci::type::PO_SettingsCommandMDT& PO_SettingsCommandMDT::setCollectionConstraintsSettings(const uci::type::PO_CollectionConstraintsSettingsType& accessor) {
  enableCollectionConstraintsSettings();
  if (&accessor != collectionConstraintsSettings_Accessor.get()) {
    collectionConstraintsSettings_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PO_SettingsCommandMDT::hasCollectionConstraintsSettings() const noexcept {
  return static_cast<bool>(collectionConstraintsSettings_Accessor);
}

uci::type::PO_CollectionConstraintsSettingsType& PO_SettingsCommandMDT::enableCollectionConstraintsSettings(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pO_CollectionConstraintsSettingsType : type};
  if ((!collectionConstraintsSettings_Accessor) || (collectionConstraintsSettings_Accessor->getAccessorType() != requestedType)) {
    collectionConstraintsSettings_Accessor = PO_CollectionConstraintsSettingsType::create(requestedType);
    if (!collectionConstraintsSettings_Accessor) {
      throw uci::base::UCIException("Error in enableCollectionConstraintsSettings(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *collectionConstraintsSettings_Accessor;
}

uci::type::PO_SettingsCommandMDT& PO_SettingsCommandMDT::clearCollectionConstraintsSettings() noexcept {
  collectionConstraintsSettings_Accessor.reset();
  return *this;
}

const uci::type::PO_SettingsCommandMDT::MessageOutput& PO_SettingsCommandMDT::getMessageOutput() const {
  return *messageOutput_Accessor;
}

uci::type::PO_SettingsCommandMDT::MessageOutput& PO_SettingsCommandMDT::getMessageOutput() {
  return *messageOutput_Accessor;
}

uci::type::PO_SettingsCommandMDT& PO_SettingsCommandMDT::setMessageOutput(const uci::type::PO_SettingsCommandMDT::MessageOutput& accessor) {
  if (&accessor != messageOutput_Accessor.get()) {
    messageOutput_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::FOR_Type& PO_SettingsCommandMDT::getFOR_Settings_() const {
  if (fOR_Settings_Accessor) {
    return *fOR_Settings_Accessor;
  }
  throw uci::base::UCIException("Error in getFOR_Settings(): An attempt was made to get an optional field that was not enabled, call hasFOR_Settings() to determine if it is safe to call getFOR_Settings()");
}

const uci::type::FOR_Type& PO_SettingsCommandMDT::getFOR_Settings() const {
  return getFOR_Settings_();
}

uci::type::FOR_Type& PO_SettingsCommandMDT::getFOR_Settings() {
  return getFOR_Settings_();
}

uci::type::PO_SettingsCommandMDT& PO_SettingsCommandMDT::setFOR_Settings(const uci::type::FOR_Type& accessor) {
  enableFOR_Settings();
  if (&accessor != fOR_Settings_Accessor.get()) {
    fOR_Settings_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PO_SettingsCommandMDT::hasFOR_Settings() const noexcept {
  return static_cast<bool>(fOR_Settings_Accessor);
}

uci::type::FOR_Type& PO_SettingsCommandMDT::enableFOR_Settings(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::fOR_Type : type};
  if ((!fOR_Settings_Accessor) || (fOR_Settings_Accessor->getAccessorType() != requestedType)) {
    fOR_Settings_Accessor = FOR_Type::create(requestedType);
    if (!fOR_Settings_Accessor) {
      throw uci::base::UCIException("Error in enableFOR_Settings(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *fOR_Settings_Accessor;
}

uci::type::PO_SettingsCommandMDT& PO_SettingsCommandMDT::clearFOR_Settings() noexcept {
  fOR_Settings_Accessor.reset();
  return *this;
}

uci::type::FOR_Type& PO_SettingsCommandMDT::getThermalBlankingFOR_Settings_() const {
  if (thermalBlankingFOR_Settings_Accessor) {
    return *thermalBlankingFOR_Settings_Accessor;
  }
  throw uci::base::UCIException("Error in getThermalBlankingFOR_Settings(): An attempt was made to get an optional field that was not enabled, call hasThermalBlankingFOR_Settings() to determine if it is safe to call getThermalBlankingFOR_Settings()");
}

const uci::type::FOR_Type& PO_SettingsCommandMDT::getThermalBlankingFOR_Settings() const {
  return getThermalBlankingFOR_Settings_();
}

uci::type::FOR_Type& PO_SettingsCommandMDT::getThermalBlankingFOR_Settings() {
  return getThermalBlankingFOR_Settings_();
}

uci::type::PO_SettingsCommandMDT& PO_SettingsCommandMDT::setThermalBlankingFOR_Settings(const uci::type::FOR_Type& accessor) {
  enableThermalBlankingFOR_Settings();
  if (&accessor != thermalBlankingFOR_Settings_Accessor.get()) {
    thermalBlankingFOR_Settings_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PO_SettingsCommandMDT::hasThermalBlankingFOR_Settings() const noexcept {
  return static_cast<bool>(thermalBlankingFOR_Settings_Accessor);
}

uci::type::FOR_Type& PO_SettingsCommandMDT::enableThermalBlankingFOR_Settings(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::fOR_Type : type};
  if ((!thermalBlankingFOR_Settings_Accessor) || (thermalBlankingFOR_Settings_Accessor->getAccessorType() != requestedType)) {
    thermalBlankingFOR_Settings_Accessor = FOR_Type::create(requestedType);
    if (!thermalBlankingFOR_Settings_Accessor) {
      throw uci::base::UCIException("Error in enableThermalBlankingFOR_Settings(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *thermalBlankingFOR_Settings_Accessor;
}

uci::type::PO_SettingsCommandMDT& PO_SettingsCommandMDT::clearThermalBlankingFOR_Settings() noexcept {
  thermalBlankingFOR_Settings_Accessor.reset();
  return *this;
}

std::unique_ptr<PO_SettingsCommandMDT> PO_SettingsCommandMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pO_SettingsCommandMDT : type};
  return (requestedType == uci::type::accessorType::pO_SettingsCommandMDT) ? boost::make_unique<PO_SettingsCommandMDT>() : nullptr;
}

/**  */
namespace PO_SettingsCommandMDT_Names {

constexpr const char* Extern_Type_Name{"PO_SettingsCommandMDT"};
constexpr const char* SubCapability_Name{"SubCapability"};
constexpr const char* TrackSettings_Name{"TrackSettings"};
constexpr const char* ComponentSettings_Name{"ComponentSettings"};
constexpr const char* CollectionConstraintsSettings_Name{"CollectionConstraintsSettings"};
constexpr const char* MessageOutput_Name{"MessageOutput"};
constexpr const char* FOR_Settings_Name{"FOR_Settings"};
constexpr const char* ThermalBlankingFOR_Settings_Name{"ThermalBlankingFOR_Settings"};

} // namespace PO_SettingsCommandMDT_Names

void PO_SettingsCommandMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_SettingsCommandMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PO_SettingsCommandMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PO_SettingsCommandMDT_Names::SubCapability_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PO_SettingsCommandMDT::SubCapability& boundedList = accessor.getSubCapability();
        const uci::type::PO_SettingsCommandMDT::SubCapability::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::PO_SubCapabilitySettingsType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + PO_SettingsCommandMDT_Names::TrackSettings_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PO_SettingsCommandMDT::TrackSettings& boundedList = accessor.getTrackSettings();
        const uci::type::PO_SettingsCommandMDT::TrackSettings::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::PO_TrackSettingsType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + PO_SettingsCommandMDT_Names::ComponentSettings_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PO_SettingsCommandMDT::ComponentSettings& boundedList = accessor.getComponentSettings();
        const uci::type::PO_SettingsCommandMDT::ComponentSettings::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::PO_ComponentSettingsType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + PO_SettingsCommandMDT_Names::CollectionConstraintsSettings_Name) {
      PO_CollectionConstraintsSettingsType::deserialize(valueType.second, accessor.enableCollectionConstraintsSettings(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_SettingsCommandMDT_Names::MessageOutput_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PO_SettingsCommandMDT::MessageOutput& boundedList = accessor.getMessageOutput();
        const uci::type::PO_SettingsCommandMDT::MessageOutput::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + PO_SettingsCommandMDT_Names::FOR_Settings_Name) {
      FOR_Type::deserialize(valueType.second, accessor.enableFOR_Settings(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_SettingsCommandMDT_Names::ThermalBlankingFOR_Settings_Name) {
      FOR_Type::deserialize(valueType.second, accessor.enableThermalBlankingFOR_Settings(), nodeName, nsPrefix);
    }
  }
  CapabilitySettingsCommandBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string PO_SettingsCommandMDT::serialize(const uci::type::PO_SettingsCommandMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PO_SettingsCommandMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PO_SettingsCommandMDT_Names::Extern_Type_Name);
  }
  CapabilitySettingsCommandBaseType::serialize(accessor, node, "", false, false, false);
  {
    const uci::type::PO_SettingsCommandMDT::SubCapability& boundedList = accessor.getSubCapability();
    for (uci::type::PO_SettingsCommandMDT::SubCapability::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::PO_SubCapabilitySettingsType::serialize(boundedList.at(i), node, PO_SettingsCommandMDT_Names::SubCapability_Name);
    }
  }
  {
    const uci::type::PO_SettingsCommandMDT::TrackSettings& boundedList = accessor.getTrackSettings();
    for (uci::type::PO_SettingsCommandMDT::TrackSettings::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::PO_TrackSettingsType::serialize(boundedList.at(i), node, PO_SettingsCommandMDT_Names::TrackSettings_Name);
    }
  }
  {
    const uci::type::PO_SettingsCommandMDT::ComponentSettings& boundedList = accessor.getComponentSettings();
    for (uci::type::PO_SettingsCommandMDT::ComponentSettings::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::PO_ComponentSettingsType::serialize(boundedList.at(i), node, PO_SettingsCommandMDT_Names::ComponentSettings_Name);
    }
  }
  if (accessor.hasCollectionConstraintsSettings()) {
    PO_CollectionConstraintsSettingsType::serialize(accessor.getCollectionConstraintsSettings(), node, PO_SettingsCommandMDT_Names::CollectionConstraintsSettings_Name);
  }
  {
    const uci::type::PO_SettingsCommandMDT::MessageOutput& boundedList = accessor.getMessageOutput();
    for (uci::type::PO_SettingsCommandMDT::MessageOutput::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      PO_MessageOutputsEnum::serialize(boundedList.at(i), node, PO_SettingsCommandMDT_Names::MessageOutput_Name, false);
    }
  }
  if (accessor.hasFOR_Settings()) {
    FOR_Type::serialize(accessor.getFOR_Settings(), node, PO_SettingsCommandMDT_Names::FOR_Settings_Name);
  }
  if (accessor.hasThermalBlankingFOR_Settings()) {
    FOR_Type::serialize(accessor.getThermalBlankingFOR_Settings(), node, PO_SettingsCommandMDT_Names::ThermalBlankingFOR_Settings_Name);
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

uci::type::PO_SettingsCommandMDT& PO_SettingsCommandMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PO_SettingsCommandMDT>().release());
}

uci::type::PO_SettingsCommandMDT& PO_SettingsCommandMDT::create(const uci::type::PO_SettingsCommandMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PO_SettingsCommandMDT> newAccessor{boost::make_unique<asb_uci::type::PO_SettingsCommandMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PO_SettingsCommandMDT::destroy(uci::type::PO_SettingsCommandMDT& accessor) {
  delete dynamic_cast<asb_uci::type::PO_SettingsCommandMDT*>(&accessor);
}

} // namespace type

} // namespace uci

