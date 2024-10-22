/** @file WeatherRadarSettingsCommandMDT.cpp
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

#include "../../../include/asb_uci/type/WeatherRadarSettingsCommandMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CapabilitySettingsCommandBaseType.h"
#include "../../../include/asb_uci/type/ElectronicProtectionOptionsDefaultType.h"
#include "../../../include/asb_uci/type/EmconSettingType.h"
#include "../../../include/asb_uci/type/EmissionBalanceEnum.h"
#include "../../../include/asb_uci/type/WeatherRadarMessageOutputsEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ElectronicProtectionOptionsDefaultType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EmconSettingType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EmissionBalanceEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/WeatherRadarMessageOutputsEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/WeatherRadarSettingsCommandMDT.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

WeatherRadarSettingsCommandMDT::WeatherRadarSettingsCommandMDT()
  : messageOutput_Accessor{boost::make_unique<MessageOutput>(0, 3)},
    electronicProtectionOptionsEnabled_Accessor{boost::make_unique<ElectronicProtectionOptionsEnabled>(0, SIZE_MAX)} {
}

WeatherRadarSettingsCommandMDT::~WeatherRadarSettingsCommandMDT() = default;

void WeatherRadarSettingsCommandMDT::copy(const uci::type::WeatherRadarSettingsCommandMDT& accessor) {
  copyImpl(accessor, false);
}

void WeatherRadarSettingsCommandMDT::copyImpl(const uci::type::WeatherRadarSettingsCommandMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    CapabilitySettingsCommandBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const WeatherRadarSettingsCommandMDT&>(accessor);
    if (accessorImpl.hasElectronicProtectionState()) {
      setElectronicProtectionState(accessorImpl.getElectronicProtectionState());
    } else {
      clearElectronicProtectionState();
    }
    if (accessorImpl.emissionBalanceState_Accessor) {
      setEmissionBalanceState(*(accessorImpl.emissionBalanceState_Accessor));
    } else {
      emissionBalanceState_Accessor.reset();
    }
    setMessageOutput(*(accessorImpl.messageOutput_Accessor));
    if (accessorImpl.hasUnassignAll()) {
      setUnassignAll(accessorImpl.getUnassignAll());
    } else {
      clearUnassignAll();
    }
    if (accessorImpl.defaultEmcon_Accessor) {
      setDefaultEmcon(*(accessorImpl.defaultEmcon_Accessor));
    } else {
      defaultEmcon_Accessor.reset();
    }
    setElectronicProtectionOptionsEnabled(*(accessorImpl.electronicProtectionOptionsEnabled_Accessor));
  }
}

void WeatherRadarSettingsCommandMDT::reset() noexcept {
  CapabilitySettingsCommandBaseType::reset();
  clearElectronicProtectionState();
  emissionBalanceState_Accessor.reset();
  messageOutput_Accessor->reset();
  clearUnassignAll();
  defaultEmcon_Accessor.reset();
  electronicProtectionOptionsEnabled_Accessor->reset();
}

xs::Boolean WeatherRadarSettingsCommandMDT::getElectronicProtectionState() const {
  if (electronicProtectionState_Accessor) {
    return *electronicProtectionState_Accessor;
  }
  throw uci::base::UCIException("Error in getElectronicProtectionState(): An attempt was made to get an optional field that was not enabled, call hasElectronicProtectionState() to determine if it is safe to call getElectronicProtectionState()");
}

uci::type::WeatherRadarSettingsCommandMDT& WeatherRadarSettingsCommandMDT::setElectronicProtectionState(xs::Boolean value) {
  electronicProtectionState_Accessor = value;
  return *this;
}

bool WeatherRadarSettingsCommandMDT::hasElectronicProtectionState() const noexcept {
  return electronicProtectionState_Accessor.has_value();
}

uci::type::WeatherRadarSettingsCommandMDT& WeatherRadarSettingsCommandMDT::clearElectronicProtectionState() noexcept {
  electronicProtectionState_Accessor.reset();
  return *this;
}

uci::type::EmissionBalanceEnum& WeatherRadarSettingsCommandMDT::getEmissionBalanceState_() const {
  if (emissionBalanceState_Accessor) {
    return *emissionBalanceState_Accessor;
  }
  throw uci::base::UCIException("Error in getEmissionBalanceState(): An attempt was made to get an optional field that was not enabled, call hasEmissionBalanceState() to determine if it is safe to call getEmissionBalanceState()");
}

const uci::type::EmissionBalanceEnum& WeatherRadarSettingsCommandMDT::getEmissionBalanceState() const {
  return getEmissionBalanceState_();
}

uci::type::EmissionBalanceEnum& WeatherRadarSettingsCommandMDT::getEmissionBalanceState() {
  return getEmissionBalanceState_();
}

uci::type::WeatherRadarSettingsCommandMDT& WeatherRadarSettingsCommandMDT::setEmissionBalanceState(const uci::type::EmissionBalanceEnum& accessor) {
  enableEmissionBalanceState();
  if (&accessor != emissionBalanceState_Accessor.get()) {
    emissionBalanceState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::WeatherRadarSettingsCommandMDT& WeatherRadarSettingsCommandMDT::setEmissionBalanceState(const uci::type::EmissionBalanceEnum::EnumerationItem value) {
  enableEmissionBalanceState().setValue(value);
  return *this;
}

bool WeatherRadarSettingsCommandMDT::hasEmissionBalanceState() const noexcept {
  return static_cast<bool>(emissionBalanceState_Accessor);
}

uci::type::EmissionBalanceEnum& WeatherRadarSettingsCommandMDT::enableEmissionBalanceState(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::emissionBalanceEnum : type};
  if ((!emissionBalanceState_Accessor) || (emissionBalanceState_Accessor->getAccessorType() != requestedType)) {
    emissionBalanceState_Accessor = EmissionBalanceEnum::create(requestedType);
    if (!emissionBalanceState_Accessor) {
      throw uci::base::UCIException("Error in enableEmissionBalanceState(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *emissionBalanceState_Accessor;
}

uci::type::WeatherRadarSettingsCommandMDT& WeatherRadarSettingsCommandMDT::clearEmissionBalanceState() noexcept {
  emissionBalanceState_Accessor.reset();
  return *this;
}

const uci::type::WeatherRadarSettingsCommandMDT::MessageOutput& WeatherRadarSettingsCommandMDT::getMessageOutput() const {
  return *messageOutput_Accessor;
}

uci::type::WeatherRadarSettingsCommandMDT::MessageOutput& WeatherRadarSettingsCommandMDT::getMessageOutput() {
  return *messageOutput_Accessor;
}

uci::type::WeatherRadarSettingsCommandMDT& WeatherRadarSettingsCommandMDT::setMessageOutput(const uci::type::WeatherRadarSettingsCommandMDT::MessageOutput& accessor) {
  if (&accessor != messageOutput_Accessor.get()) {
    messageOutput_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

xs::Boolean WeatherRadarSettingsCommandMDT::getUnassignAll() const {
  if (unassignAll_Accessor) {
    return *unassignAll_Accessor;
  }
  throw uci::base::UCIException("Error in getUnassignAll(): An attempt was made to get an optional field that was not enabled, call hasUnassignAll() to determine if it is safe to call getUnassignAll()");
}

uci::type::WeatherRadarSettingsCommandMDT& WeatherRadarSettingsCommandMDT::setUnassignAll(xs::Boolean value) {
  unassignAll_Accessor = value;
  return *this;
}

bool WeatherRadarSettingsCommandMDT::hasUnassignAll() const noexcept {
  return unassignAll_Accessor.has_value();
}

uci::type::WeatherRadarSettingsCommandMDT& WeatherRadarSettingsCommandMDT::clearUnassignAll() noexcept {
  unassignAll_Accessor.reset();
  return *this;
}

uci::type::EmconSettingType& WeatherRadarSettingsCommandMDT::getDefaultEmcon_() const {
  if (defaultEmcon_Accessor) {
    return *defaultEmcon_Accessor;
  }
  throw uci::base::UCIException("Error in getDefaultEmcon(): An attempt was made to get an optional field that was not enabled, call hasDefaultEmcon() to determine if it is safe to call getDefaultEmcon()");
}

const uci::type::EmconSettingType& WeatherRadarSettingsCommandMDT::getDefaultEmcon() const {
  return getDefaultEmcon_();
}

uci::type::EmconSettingType& WeatherRadarSettingsCommandMDT::getDefaultEmcon() {
  return getDefaultEmcon_();
}

uci::type::WeatherRadarSettingsCommandMDT& WeatherRadarSettingsCommandMDT::setDefaultEmcon(const uci::type::EmconSettingType& accessor) {
  enableDefaultEmcon();
  if (&accessor != defaultEmcon_Accessor.get()) {
    defaultEmcon_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool WeatherRadarSettingsCommandMDT::hasDefaultEmcon() const noexcept {
  return static_cast<bool>(defaultEmcon_Accessor);
}

uci::type::EmconSettingType& WeatherRadarSettingsCommandMDT::enableDefaultEmcon(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::emconSettingType : type};
  if ((!defaultEmcon_Accessor) || (defaultEmcon_Accessor->getAccessorType() != requestedType)) {
    defaultEmcon_Accessor = EmconSettingType::create(requestedType);
    if (!defaultEmcon_Accessor) {
      throw uci::base::UCIException("Error in enableDefaultEmcon(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *defaultEmcon_Accessor;
}

uci::type::WeatherRadarSettingsCommandMDT& WeatherRadarSettingsCommandMDT::clearDefaultEmcon() noexcept {
  defaultEmcon_Accessor.reset();
  return *this;
}

const uci::type::WeatherRadarSettingsCommandMDT::ElectronicProtectionOptionsEnabled& WeatherRadarSettingsCommandMDT::getElectronicProtectionOptionsEnabled() const {
  return *electronicProtectionOptionsEnabled_Accessor;
}

uci::type::WeatherRadarSettingsCommandMDT::ElectronicProtectionOptionsEnabled& WeatherRadarSettingsCommandMDT::getElectronicProtectionOptionsEnabled() {
  return *electronicProtectionOptionsEnabled_Accessor;
}

uci::type::WeatherRadarSettingsCommandMDT& WeatherRadarSettingsCommandMDT::setElectronicProtectionOptionsEnabled(const uci::type::WeatherRadarSettingsCommandMDT::ElectronicProtectionOptionsEnabled& accessor) {
  if (&accessor != electronicProtectionOptionsEnabled_Accessor.get()) {
    electronicProtectionOptionsEnabled_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<WeatherRadarSettingsCommandMDT> WeatherRadarSettingsCommandMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::weatherRadarSettingsCommandMDT : type};
  return (requestedType == uci::type::accessorType::weatherRadarSettingsCommandMDT) ? boost::make_unique<WeatherRadarSettingsCommandMDT>() : nullptr;
}

/**  */
namespace WeatherRadarSettingsCommandMDT_Names {

constexpr const char* Extern_Type_Name{"WeatherRadarSettingsCommandMDT"};
constexpr const char* ElectronicProtectionState_Name{"ElectronicProtectionState"};
constexpr const char* EmissionBalanceState_Name{"EmissionBalanceState"};
constexpr const char* MessageOutput_Name{"MessageOutput"};
constexpr const char* UnassignAll_Name{"UnassignAll"};
constexpr const char* DefaultEmcon_Name{"DefaultEmcon"};
constexpr const char* ElectronicProtectionOptionsEnabled_Name{"ElectronicProtectionOptionsEnabled"};

} // namespace WeatherRadarSettingsCommandMDT_Names

void WeatherRadarSettingsCommandMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::WeatherRadarSettingsCommandMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = WeatherRadarSettingsCommandMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + WeatherRadarSettingsCommandMDT_Names::ElectronicProtectionState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setElectronicProtectionState(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + WeatherRadarSettingsCommandMDT_Names::EmissionBalanceState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableEmissionBalanceState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + WeatherRadarSettingsCommandMDT_Names::MessageOutput_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::WeatherRadarSettingsCommandMDT::MessageOutput& boundedList = accessor.getMessageOutput();
        const uci::type::WeatherRadarSettingsCommandMDT::MessageOutput::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + WeatherRadarSettingsCommandMDT_Names::UnassignAll_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setUnassignAll(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + WeatherRadarSettingsCommandMDT_Names::DefaultEmcon_Name) {
      EmconSettingType::deserialize(valueType.second, accessor.enableDefaultEmcon(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + WeatherRadarSettingsCommandMDT_Names::ElectronicProtectionOptionsEnabled_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::WeatherRadarSettingsCommandMDT::ElectronicProtectionOptionsEnabled& boundedList = accessor.getElectronicProtectionOptionsEnabled();
        const uci::type::WeatherRadarSettingsCommandMDT::ElectronicProtectionOptionsEnabled::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::ElectronicProtectionOptionsDefaultType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  CapabilitySettingsCommandBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string WeatherRadarSettingsCommandMDT::serialize(const uci::type::WeatherRadarSettingsCommandMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? WeatherRadarSettingsCommandMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, WeatherRadarSettingsCommandMDT_Names::Extern_Type_Name);
  }
  CapabilitySettingsCommandBaseType::serialize(accessor, node, "", false, false, false);
  if (accessor.hasElectronicProtectionState()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getElectronicProtectionState(), node, WeatherRadarSettingsCommandMDT_Names::ElectronicProtectionState_Name);
  }
  if (accessor.hasEmissionBalanceState()) {
    EmissionBalanceEnum::serialize(accessor.getEmissionBalanceState(), node, WeatherRadarSettingsCommandMDT_Names::EmissionBalanceState_Name, false);
  }
  {
    const uci::type::WeatherRadarSettingsCommandMDT::MessageOutput& boundedList = accessor.getMessageOutput();
    for (uci::type::WeatherRadarSettingsCommandMDT::MessageOutput::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      WeatherRadarMessageOutputsEnum::serialize(boundedList.at(i), node, WeatherRadarSettingsCommandMDT_Names::MessageOutput_Name, false);
    }
  }
  if (accessor.hasUnassignAll()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getUnassignAll(), node, WeatherRadarSettingsCommandMDT_Names::UnassignAll_Name);
  }
  if (accessor.hasDefaultEmcon()) {
    EmconSettingType::serialize(accessor.getDefaultEmcon(), node, WeatherRadarSettingsCommandMDT_Names::DefaultEmcon_Name);
  }
  {
    const uci::type::WeatherRadarSettingsCommandMDT::ElectronicProtectionOptionsEnabled& boundedList = accessor.getElectronicProtectionOptionsEnabled();
    for (uci::type::WeatherRadarSettingsCommandMDT::ElectronicProtectionOptionsEnabled::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ElectronicProtectionOptionsDefaultType::serialize(boundedList.at(i), node, WeatherRadarSettingsCommandMDT_Names::ElectronicProtectionOptionsEnabled_Name);
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

uci::type::WeatherRadarSettingsCommandMDT& WeatherRadarSettingsCommandMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::WeatherRadarSettingsCommandMDT>().release());
}

uci::type::WeatherRadarSettingsCommandMDT& WeatherRadarSettingsCommandMDT::create(const uci::type::WeatherRadarSettingsCommandMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::WeatherRadarSettingsCommandMDT> newAccessor{boost::make_unique<asb_uci::type::WeatherRadarSettingsCommandMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void WeatherRadarSettingsCommandMDT::destroy(uci::type::WeatherRadarSettingsCommandMDT& accessor) {
  delete dynamic_cast<asb_uci::type::WeatherRadarSettingsCommandMDT*>(&accessor);
}

} // namespace type

} // namespace uci

