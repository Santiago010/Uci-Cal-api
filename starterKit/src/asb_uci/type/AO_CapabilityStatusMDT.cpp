/** @file AO_CapabilityStatusMDT.cpp
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

#include "../../../include/asb_uci/type/AO_CapabilityStatusMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/AO_ComponentSettingsType.h"
#include "../../../include/asb_uci/type/AO_MessageOutputsEnum.h"
#include "../../../include/asb_uci/type/CapabilityStatusBaseType.h"
#include "../../../include/asb_uci/type/CapabilityStatusType.h"
#include "../../../include/asb_uci/type/JPEG_SettingsType.h"
#include "../../../include/asb_uci/type/NITF_PackingPlanPET.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AO_CapabilityStatusMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AO_ComponentSettingsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AO_MessageOutputsEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityStatusType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/JPEG_SettingsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/NITF_PackingPlanPET.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

AO_CapabilityStatusMDT::AO_CapabilityStatusMDT()
  : capabilityStatus_Accessor{boost::make_unique<CapabilityStatus>(1, SIZE_MAX)},
    componentSetting_Accessor{boost::make_unique<ComponentSetting>(0, SIZE_MAX)},
    currentMessageOutput_Accessor{boost::make_unique<CurrentMessageOutput>(0, 2)} {
}

AO_CapabilityStatusMDT::~AO_CapabilityStatusMDT() = default;

void AO_CapabilityStatusMDT::copy(const uci::type::AO_CapabilityStatusMDT& accessor) {
  copyImpl(accessor, false);
}

void AO_CapabilityStatusMDT::copyImpl(const uci::type::AO_CapabilityStatusMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    CapabilityStatusBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const AO_CapabilityStatusMDT&>(accessor);
    setCapabilityStatus(*(accessorImpl.capabilityStatus_Accessor));
    setComponentSetting(*(accessorImpl.componentSetting_Accessor));
    setCurrentMessageOutput(*(accessorImpl.currentMessageOutput_Accessor));
    if (accessorImpl.defaultPackingPlan_Accessor) {
      setDefaultPackingPlan(*(accessorImpl.defaultPackingPlan_Accessor));
    } else {
      defaultPackingPlan_Accessor.reset();
    }
    if (accessorImpl.defaultJPEG_Settings_Accessor) {
      setDefaultJPEG_Settings(*(accessorImpl.defaultJPEG_Settings_Accessor));
    } else {
      defaultJPEG_Settings_Accessor.reset();
    }
  }
}

void AO_CapabilityStatusMDT::reset() noexcept {
  CapabilityStatusBaseType::reset();
  capabilityStatus_Accessor->reset();
  componentSetting_Accessor->reset();
  currentMessageOutput_Accessor->reset();
  defaultPackingPlan_Accessor.reset();
  defaultJPEG_Settings_Accessor.reset();
}

const uci::type::AO_CapabilityStatusMDT::CapabilityStatus& AO_CapabilityStatusMDT::getCapabilityStatus() const {
  return *capabilityStatus_Accessor;
}

uci::type::AO_CapabilityStatusMDT::CapabilityStatus& AO_CapabilityStatusMDT::getCapabilityStatus() {
  return *capabilityStatus_Accessor;
}

uci::type::AO_CapabilityStatusMDT& AO_CapabilityStatusMDT::setCapabilityStatus(const uci::type::AO_CapabilityStatusMDT::CapabilityStatus& accessor) {
  if (&accessor != capabilityStatus_Accessor.get()) {
    capabilityStatus_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::AO_CapabilityStatusMDT::ComponentSetting& AO_CapabilityStatusMDT::getComponentSetting() const {
  return *componentSetting_Accessor;
}

uci::type::AO_CapabilityStatusMDT::ComponentSetting& AO_CapabilityStatusMDT::getComponentSetting() {
  return *componentSetting_Accessor;
}

uci::type::AO_CapabilityStatusMDT& AO_CapabilityStatusMDT::setComponentSetting(const uci::type::AO_CapabilityStatusMDT::ComponentSetting& accessor) {
  if (&accessor != componentSetting_Accessor.get()) {
    componentSetting_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::AO_CapabilityStatusMDT::CurrentMessageOutput& AO_CapabilityStatusMDT::getCurrentMessageOutput() const {
  return *currentMessageOutput_Accessor;
}

uci::type::AO_CapabilityStatusMDT::CurrentMessageOutput& AO_CapabilityStatusMDT::getCurrentMessageOutput() {
  return *currentMessageOutput_Accessor;
}

uci::type::AO_CapabilityStatusMDT& AO_CapabilityStatusMDT::setCurrentMessageOutput(const uci::type::AO_CapabilityStatusMDT::CurrentMessageOutput& accessor) {
  if (&accessor != currentMessageOutput_Accessor.get()) {
    currentMessageOutput_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::NITF_PackingPlanPET& AO_CapabilityStatusMDT::getDefaultPackingPlan_() const {
  if (defaultPackingPlan_Accessor) {
    return *defaultPackingPlan_Accessor;
  }
  throw uci::base::UCIException("Error in getDefaultPackingPlan(): An attempt was made to get an optional field that was not enabled, call hasDefaultPackingPlan() to determine if it is safe to call getDefaultPackingPlan()");
}

const uci::type::NITF_PackingPlanPET& AO_CapabilityStatusMDT::getDefaultPackingPlan() const {
  return getDefaultPackingPlan_();
}

uci::type::NITF_PackingPlanPET& AO_CapabilityStatusMDT::getDefaultPackingPlan() {
  return getDefaultPackingPlan_();
}

uci::type::AO_CapabilityStatusMDT& AO_CapabilityStatusMDT::setDefaultPackingPlan(const uci::type::NITF_PackingPlanPET& accessor) {
  enableDefaultPackingPlan(accessor.getAccessorType());
  if (&accessor != defaultPackingPlan_Accessor.get()) {
    defaultPackingPlan_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool AO_CapabilityStatusMDT::hasDefaultPackingPlan() const noexcept {
  return static_cast<bool>(defaultPackingPlan_Accessor);
}

uci::type::NITF_PackingPlanPET& AO_CapabilityStatusMDT::enableDefaultPackingPlan(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::nITF_PackingPlanPET : type};
  if ((!defaultPackingPlan_Accessor) || (defaultPackingPlan_Accessor->getAccessorType() != requestedType)) {
    defaultPackingPlan_Accessor = NITF_PackingPlanPET::create(requestedType);
    if (!defaultPackingPlan_Accessor) {
      throw uci::base::UCIException("Error in enableDefaultPackingPlan(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *defaultPackingPlan_Accessor;
}

uci::type::AO_CapabilityStatusMDT& AO_CapabilityStatusMDT::clearDefaultPackingPlan() noexcept {
  defaultPackingPlan_Accessor.reset();
  return *this;
}

uci::type::JPEG_SettingsType& AO_CapabilityStatusMDT::getDefaultJPEG_Settings_() const {
  if (defaultJPEG_Settings_Accessor) {
    return *defaultJPEG_Settings_Accessor;
  }
  throw uci::base::UCIException("Error in getDefaultJPEG_Settings(): An attempt was made to get an optional field that was not enabled, call hasDefaultJPEG_Settings() to determine if it is safe to call getDefaultJPEG_Settings()");
}

const uci::type::JPEG_SettingsType& AO_CapabilityStatusMDT::getDefaultJPEG_Settings() const {
  return getDefaultJPEG_Settings_();
}

uci::type::JPEG_SettingsType& AO_CapabilityStatusMDT::getDefaultJPEG_Settings() {
  return getDefaultJPEG_Settings_();
}

uci::type::AO_CapabilityStatusMDT& AO_CapabilityStatusMDT::setDefaultJPEG_Settings(const uci::type::JPEG_SettingsType& accessor) {
  enableDefaultJPEG_Settings();
  if (&accessor != defaultJPEG_Settings_Accessor.get()) {
    defaultJPEG_Settings_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool AO_CapabilityStatusMDT::hasDefaultJPEG_Settings() const noexcept {
  return static_cast<bool>(defaultJPEG_Settings_Accessor);
}

uci::type::JPEG_SettingsType& AO_CapabilityStatusMDT::enableDefaultJPEG_Settings(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::jPEG_SettingsType : type};
  if ((!defaultJPEG_Settings_Accessor) || (defaultJPEG_Settings_Accessor->getAccessorType() != requestedType)) {
    defaultJPEG_Settings_Accessor = JPEG_SettingsType::create(requestedType);
    if (!defaultJPEG_Settings_Accessor) {
      throw uci::base::UCIException("Error in enableDefaultJPEG_Settings(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *defaultJPEG_Settings_Accessor;
}

uci::type::AO_CapabilityStatusMDT& AO_CapabilityStatusMDT::clearDefaultJPEG_Settings() noexcept {
  defaultJPEG_Settings_Accessor.reset();
  return *this;
}

std::unique_ptr<AO_CapabilityStatusMDT> AO_CapabilityStatusMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::aO_CapabilityStatusMDT : type};
  return (requestedType == uci::type::accessorType::aO_CapabilityStatusMDT) ? boost::make_unique<AO_CapabilityStatusMDT>() : nullptr;
}

/**  */
namespace AO_CapabilityStatusMDT_Names {

constexpr const char* Extern_Type_Name{"AO_CapabilityStatusMDT"};
constexpr const char* CapabilityStatus_Name{"CapabilityStatus"};
constexpr const char* ComponentSetting_Name{"ComponentSetting"};
constexpr const char* CurrentMessageOutput_Name{"CurrentMessageOutput"};
constexpr const char* DefaultPackingPlan_Name{"DefaultPackingPlan"};
constexpr const char* DefaultJPEG_Settings_Name{"DefaultJPEG_Settings"};

} // namespace AO_CapabilityStatusMDT_Names

void AO_CapabilityStatusMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::AO_CapabilityStatusMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = AO_CapabilityStatusMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + AO_CapabilityStatusMDT_Names::CapabilityStatus_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::AO_CapabilityStatusMDT::CapabilityStatus& boundedList = accessor.getCapabilityStatus();
        const uci::type::AO_CapabilityStatusMDT::CapabilityStatus::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1, asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix));
        asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + AO_CapabilityStatusMDT_Names::ComponentSetting_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::AO_CapabilityStatusMDT::ComponentSetting& boundedList = accessor.getComponentSetting();
        const uci::type::AO_CapabilityStatusMDT::ComponentSetting::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::AO_ComponentSettingsType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + AO_CapabilityStatusMDT_Names::CurrentMessageOutput_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::AO_CapabilityStatusMDT::CurrentMessageOutput& boundedList = accessor.getCurrentMessageOutput();
        const uci::type::AO_CapabilityStatusMDT::CurrentMessageOutput::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + AO_CapabilityStatusMDT_Names::DefaultPackingPlan_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableDefaultPackingPlan(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + AO_CapabilityStatusMDT_Names::DefaultJPEG_Settings_Name) {
      JPEG_SettingsType::deserialize(valueType.second, accessor.enableDefaultJPEG_Settings(), nodeName, nsPrefix);
    }
  }
  CapabilityStatusBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string AO_CapabilityStatusMDT::serialize(const uci::type::AO_CapabilityStatusMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? AO_CapabilityStatusMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, AO_CapabilityStatusMDT_Names::Extern_Type_Name);
  }
  CapabilityStatusBaseType::serialize(accessor, node, "", false, false, false);
  {
    const uci::type::AO_CapabilityStatusMDT::CapabilityStatus& boundedList = accessor.getCapabilityStatus();
    for (uci::type::AO_CapabilityStatusMDT::CapabilityStatus::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::CapabilityStatusType::serialize(boundedList.at(i), node, AO_CapabilityStatusMDT_Names::CapabilityStatus_Name);
    }
  }
  {
    const uci::type::AO_CapabilityStatusMDT::ComponentSetting& boundedList = accessor.getComponentSetting();
    for (uci::type::AO_CapabilityStatusMDT::ComponentSetting::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::AO_ComponentSettingsType::serialize(boundedList.at(i), node, AO_CapabilityStatusMDT_Names::ComponentSetting_Name);
    }
  }
  {
    const uci::type::AO_CapabilityStatusMDT::CurrentMessageOutput& boundedList = accessor.getCurrentMessageOutput();
    for (uci::type::AO_CapabilityStatusMDT::CurrentMessageOutput::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      AO_MessageOutputsEnum::serialize(boundedList.at(i), node, AO_CapabilityStatusMDT_Names::CurrentMessageOutput_Name, false);
    }
  }
  if (accessor.hasDefaultPackingPlan()) {
    NITF_PackingPlanPET::serialize(accessor.getDefaultPackingPlan(), node, AO_CapabilityStatusMDT_Names::DefaultPackingPlan_Name);
  }
  if (accessor.hasDefaultJPEG_Settings()) {
    JPEG_SettingsType::serialize(accessor.getDefaultJPEG_Settings(), node, AO_CapabilityStatusMDT_Names::DefaultJPEG_Settings_Name);
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

uci::type::AO_CapabilityStatusMDT& AO_CapabilityStatusMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::AO_CapabilityStatusMDT>().release());
}

uci::type::AO_CapabilityStatusMDT& AO_CapabilityStatusMDT::create(const uci::type::AO_CapabilityStatusMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::AO_CapabilityStatusMDT> newAccessor{boost::make_unique<asb_uci::type::AO_CapabilityStatusMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void AO_CapabilityStatusMDT::destroy(uci::type::AO_CapabilityStatusMDT& accessor) {
  delete dynamic_cast<asb_uci::type::AO_CapabilityStatusMDT*>(&accessor);
}

} // namespace type

} // namespace uci

