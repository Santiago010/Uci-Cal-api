/** @file SubsystemMaintenanceTestPET.cpp
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

#include "../../../include/asb_uci/type/SubsystemMaintenanceTestPET.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CapabilityID_Type.h"
#include "../../../include/asb_uci/type/SubsystemID_Type.h"
#include "../../../include/asb_uci/type/SubsystemMaintenanceControlInterfacesEnum.h"
#include "../../../include/asb_uci/type/SubsystemMaintenanceEventSettingsType.h"
#include "../../../include/asb_uci/type/SubsystemMaintenanceID_Type.h"
#include "../../../include/asb_uci/type/VisibleString256Type.h"
#include "../../../include/asb_uci/util/DerivedTypesCopier.h"
#include "../../../include/asb_uci/util/DerivedTypesCreator.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/DerivedTypesSerializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemMaintenanceControlInterfacesEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemMaintenanceEventSettingsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemMaintenanceID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemMaintenanceTestPET.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString256Type.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SubsystemMaintenanceTestPET::SubsystemMaintenanceTestPET()
  : testID_Accessor{boost::make_unique<SubsystemMaintenanceID_Type>()},
    acceptedInterface_Accessor{boost::make_unique<SubsystemMaintenanceControlInterfacesEnum>()},
    subsystemComponentID_Accessor{boost::make_unique<SubsystemComponentID>(0, SIZE_MAX)},
    capabilityID_Accessor{boost::make_unique<CapabilityID>(0, SIZE_MAX)},
    testEventSettings_Accessor{boost::make_unique<TestEventSettings>(0, SIZE_MAX)} {
}

SubsystemMaintenanceTestPET::~SubsystemMaintenanceTestPET() = default;

void SubsystemMaintenanceTestPET::copy(const uci::type::SubsystemMaintenanceTestPET& accessor) {
  copyImpl(accessor, false);
}

void SubsystemMaintenanceTestPET::copyImpl(const uci::type::SubsystemMaintenanceTestPET& accessor, const bool checkIfDerivation) {
  if (&accessor != this) {
    if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::subsystemMaintenanceTestPET)) {
      const auto& accessorImpl = dynamic_cast<const SubsystemMaintenanceTestPET&>(accessor);
      setTestID(*(accessorImpl.testID_Accessor));
      setAcceptedInterface(*(accessorImpl.acceptedInterface_Accessor));
      if (accessorImpl.description_Accessor) {
        setDescription(*(accessorImpl.description_Accessor));
      } else {
        description_Accessor.reset();
      }
      setSubsystemComponentID(*(accessorImpl.subsystemComponentID_Accessor));
      setCapabilityID(*(accessorImpl.capabilityID_Accessor));
      if (accessorImpl.hasMaintenanceTestType()) {
        setMaintenanceTestType(accessorImpl.getMaintenanceTestType());
      } else {
        clearMaintenanceTestType();
      }
      setTestEventSettings(*(accessorImpl.testEventSettings_Accessor));
      if (accessorImpl.subsystemMaintenanceItemName_Accessor) {
        setSubsystemMaintenanceItemName(*(accessorImpl.subsystemMaintenanceItemName_Accessor));
      } else {
        subsystemMaintenanceItemName_Accessor.reset();
      }
    } else {
      asb_uci::util::DerivedTypesCopier::copy(accessor, *this);
    }
  }
}

void SubsystemMaintenanceTestPET::reset() noexcept {
  testID_Accessor->reset();
  acceptedInterface_Accessor->reset();
  description_Accessor.reset();
  subsystemComponentID_Accessor->reset();
  capabilityID_Accessor->reset();
  clearMaintenanceTestType();
  testEventSettings_Accessor->reset();
  subsystemMaintenanceItemName_Accessor.reset();
}

const uci::type::SubsystemMaintenanceID_Type& SubsystemMaintenanceTestPET::getTestID() const {
  return *testID_Accessor;
}

uci::type::SubsystemMaintenanceID_Type& SubsystemMaintenanceTestPET::getTestID() {
  return *testID_Accessor;
}

uci::type::SubsystemMaintenanceTestPET& SubsystemMaintenanceTestPET::setTestID(const uci::type::SubsystemMaintenanceID_Type& accessor) {
  if (&accessor != testID_Accessor.get()) {
    testID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SubsystemMaintenanceControlInterfacesEnum& SubsystemMaintenanceTestPET::getAcceptedInterface() const {
  return *acceptedInterface_Accessor;
}

uci::type::SubsystemMaintenanceControlInterfacesEnum& SubsystemMaintenanceTestPET::getAcceptedInterface() {
  return *acceptedInterface_Accessor;
}

uci::type::SubsystemMaintenanceTestPET& SubsystemMaintenanceTestPET::setAcceptedInterface(const uci::type::SubsystemMaintenanceControlInterfacesEnum& accessor) {
  if (&accessor != acceptedInterface_Accessor.get()) {
    acceptedInterface_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::SubsystemMaintenanceTestPET& SubsystemMaintenanceTestPET::setAcceptedInterface(uci::type::SubsystemMaintenanceControlInterfacesEnum::EnumerationItem value) {
  acceptedInterface_Accessor->setValue(value);
  return *this;
}


asb_uci::type::VisibleString256Type& SubsystemMaintenanceTestPET::getDescription_() const {
  if (description_Accessor) {
    return *description_Accessor;
  }
  throw uci::base::UCIException("Error in getDescription(): An attempt was made to get an optional field that was not enabled, call hasDescription() to determine if it is safe to call getDescription()");
}

const asb_uci::type::VisibleString256Type& SubsystemMaintenanceTestPET::getDescription() const {
  return getDescription_();
}

asb_uci::type::VisibleString256Type& SubsystemMaintenanceTestPET::getDescription() {
  return getDescription_();
}

uci::type::SubsystemMaintenanceTestPET& SubsystemMaintenanceTestPET::setDescription(const asb_uci::type::VisibleString256Type& value) {
  return setDescription(value.c_str());
}

uci::type::SubsystemMaintenanceTestPET& SubsystemMaintenanceTestPET::setDescription(const std::string& value) {
  return setDescription(value.c_str());
}

uci::type::SubsystemMaintenanceTestPET& SubsystemMaintenanceTestPET::setDescription(const char* value) {
  enableDescription().setStringValue(value);
  return *this;
}

bool SubsystemMaintenanceTestPET::hasDescription() const noexcept {
  return static_cast<bool>(description_Accessor);
}

asb_uci::type::VisibleString256Type& SubsystemMaintenanceTestPET::enableDescription(uci::base::accessorType::AccessorType type) {
  if (!description_Accessor) {
    description_Accessor =  asb_uci::type::VisibleString256Type::create(type);
  }
  return *description_Accessor;
}

uci::type::SubsystemMaintenanceTestPET& SubsystemMaintenanceTestPET::clearDescription() noexcept {
  description_Accessor.reset();
  return *this;
}

const uci::type::SubsystemMaintenanceTestPET::SubsystemComponentID& SubsystemMaintenanceTestPET::getSubsystemComponentID() const {
  return *subsystemComponentID_Accessor;
}

uci::type::SubsystemMaintenanceTestPET::SubsystemComponentID& SubsystemMaintenanceTestPET::getSubsystemComponentID() {
  return *subsystemComponentID_Accessor;
}

uci::type::SubsystemMaintenanceTestPET& SubsystemMaintenanceTestPET::setSubsystemComponentID(const uci::type::SubsystemMaintenanceTestPET::SubsystemComponentID& accessor) {
  if (&accessor != subsystemComponentID_Accessor.get()) {
    subsystemComponentID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SubsystemMaintenanceTestPET::CapabilityID& SubsystemMaintenanceTestPET::getCapabilityID() const {
  return *capabilityID_Accessor;
}

uci::type::SubsystemMaintenanceTestPET::CapabilityID& SubsystemMaintenanceTestPET::getCapabilityID() {
  return *capabilityID_Accessor;
}

uci::type::SubsystemMaintenanceTestPET& SubsystemMaintenanceTestPET::setCapabilityID(const uci::type::SubsystemMaintenanceTestPET::CapabilityID& accessor) {
  if (&accessor != capabilityID_Accessor.get()) {
    capabilityID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

xs::UnsignedInt SubsystemMaintenanceTestPET::getMaintenanceTestType() const {
  if (maintenanceTestType_Accessor) {
    return *maintenanceTestType_Accessor;
  }
  throw uci::base::UCIException("Error in getMaintenanceTestType(): An attempt was made to get an optional field that was not enabled, call hasMaintenanceTestType() to determine if it is safe to call getMaintenanceTestType()");
}

uci::type::SubsystemMaintenanceTestPET& SubsystemMaintenanceTestPET::setMaintenanceTestType(xs::UnsignedInt value) {
  maintenanceTestType_Accessor = value;
  return *this;
}

bool SubsystemMaintenanceTestPET::hasMaintenanceTestType() const noexcept {
  return maintenanceTestType_Accessor.has_value();
}

uci::type::SubsystemMaintenanceTestPET& SubsystemMaintenanceTestPET::clearMaintenanceTestType() noexcept {
  maintenanceTestType_Accessor.reset();
  return *this;
}

const uci::type::SubsystemMaintenanceTestPET::TestEventSettings& SubsystemMaintenanceTestPET::getTestEventSettings() const {
  return *testEventSettings_Accessor;
}

uci::type::SubsystemMaintenanceTestPET::TestEventSettings& SubsystemMaintenanceTestPET::getTestEventSettings() {
  return *testEventSettings_Accessor;
}

uci::type::SubsystemMaintenanceTestPET& SubsystemMaintenanceTestPET::setTestEventSettings(const uci::type::SubsystemMaintenanceTestPET::TestEventSettings& accessor) {
  if (&accessor != testEventSettings_Accessor.get()) {
    testEventSettings_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

asb_uci::type::VisibleString256Type& SubsystemMaintenanceTestPET::getSubsystemMaintenanceItemName_() const {
  if (subsystemMaintenanceItemName_Accessor) {
    return *subsystemMaintenanceItemName_Accessor;
  }
  throw uci::base::UCIException("Error in getSubsystemMaintenanceItemName(): An attempt was made to get an optional field that was not enabled, call hasSubsystemMaintenanceItemName() to determine if it is safe to call getSubsystemMaintenanceItemName()");
}

const asb_uci::type::VisibleString256Type& SubsystemMaintenanceTestPET::getSubsystemMaintenanceItemName() const {
  return getSubsystemMaintenanceItemName_();
}

asb_uci::type::VisibleString256Type& SubsystemMaintenanceTestPET::getSubsystemMaintenanceItemName() {
  return getSubsystemMaintenanceItemName_();
}

uci::type::SubsystemMaintenanceTestPET& SubsystemMaintenanceTestPET::setSubsystemMaintenanceItemName(const asb_uci::type::VisibleString256Type& value) {
  return setSubsystemMaintenanceItemName(value.c_str());
}

uci::type::SubsystemMaintenanceTestPET& SubsystemMaintenanceTestPET::setSubsystemMaintenanceItemName(const std::string& value) {
  return setSubsystemMaintenanceItemName(value.c_str());
}

uci::type::SubsystemMaintenanceTestPET& SubsystemMaintenanceTestPET::setSubsystemMaintenanceItemName(const char* value) {
  enableSubsystemMaintenanceItemName().setStringValue(value);
  return *this;
}

bool SubsystemMaintenanceTestPET::hasSubsystemMaintenanceItemName() const noexcept {
  return static_cast<bool>(subsystemMaintenanceItemName_Accessor);
}

asb_uci::type::VisibleString256Type& SubsystemMaintenanceTestPET::enableSubsystemMaintenanceItemName(uci::base::accessorType::AccessorType type) {
  if (!subsystemMaintenanceItemName_Accessor) {
    subsystemMaintenanceItemName_Accessor = asb_uci::type::VisibleString256Type::create(type);
  }
  return *subsystemMaintenanceItemName_Accessor;
}

uci::type::SubsystemMaintenanceTestPET& SubsystemMaintenanceTestPET::clearSubsystemMaintenanceItemName() noexcept {
  subsystemMaintenanceItemName_Accessor.reset();
  return *this;
}

std::unique_ptr<SubsystemMaintenanceTestPET> SubsystemMaintenanceTestPET::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::subsystemMaintenanceTestPET : type};
  return std::unique_ptr<SubsystemMaintenanceTestPET>(dynamic_cast<SubsystemMaintenanceTestPET*>(asb_uci::util::DerivedTypesCreator::create(requestedType)));
}

/**  */
namespace SubsystemMaintenanceTestPET_Names {

constexpr const char* Extern_Type_Name{"SubsystemMaintenanceTestPET"};
constexpr const char* TestID_Name{"TestID"};
constexpr const char* AcceptedInterface_Name{"AcceptedInterface"};
constexpr const char* Description_Name{"Description"};
constexpr const char* SubsystemComponentID_Name{"SubsystemComponentID"};
constexpr const char* CapabilityID_Name{"CapabilityID"};
constexpr const char* MaintenanceTestType_Name{"MaintenanceTestType"};
constexpr const char* TestEventSettings_Name{"TestEventSettings"};
constexpr const char* SubsystemMaintenanceItemName_Name{"SubsystemMaintenanceItemName"};

} // namespace SubsystemMaintenanceTestPET_Names

void SubsystemMaintenanceTestPET::deserialize(const boost::property_tree::ptree& propTree, uci::type::SubsystemMaintenanceTestPET& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SubsystemMaintenanceTestPET_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SubsystemMaintenanceTestPET_Names::TestID_Name) {
      SubsystemMaintenanceID_Type::deserialize(valueType.second, accessor.getTestID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SubsystemMaintenanceTestPET_Names::AcceptedInterface_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getAcceptedInterface().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + SubsystemMaintenanceTestPET_Names::Description_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setDescription(*value);
      }
    } else if (valueType.first == nsPrefix + SubsystemMaintenanceTestPET_Names::SubsystemComponentID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SubsystemMaintenanceTestPET::SubsystemComponentID& boundedList = accessor.getSubsystemComponentID();
        const uci::type::SubsystemMaintenanceTestPET::SubsystemComponentID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::SubsystemID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + SubsystemMaintenanceTestPET_Names::CapabilityID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SubsystemMaintenanceTestPET::CapabilityID& boundedList = accessor.getCapabilityID();
        const uci::type::SubsystemMaintenanceTestPET::CapabilityID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::CapabilityID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + SubsystemMaintenanceTestPET_Names::MaintenanceTestType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMaintenanceTestType(asb_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    } else if (valueType.first == nsPrefix + SubsystemMaintenanceTestPET_Names::TestEventSettings_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SubsystemMaintenanceTestPET::TestEventSettings& boundedList = accessor.getTestEventSettings();
        const uci::type::SubsystemMaintenanceTestPET::TestEventSettings::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::SubsystemMaintenanceEventSettingsType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + SubsystemMaintenanceTestPET_Names::SubsystemMaintenanceItemName_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSubsystemMaintenanceItemName(*value);
      }
    }
  }
}

std::string SubsystemMaintenanceTestPET::serialize(const uci::type::SubsystemMaintenanceTestPET& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SubsystemMaintenanceTestPET_Names::Extern_Type_Name : nodeName)};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::subsystemMaintenanceTestPET)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      asb_uci::util::SerializationHelpers::addTypeAttribute(node, SubsystemMaintenanceTestPET_Names::Extern_Type_Name);
    }
    SubsystemMaintenanceID_Type::serialize(accessor.getTestID(), node, SubsystemMaintenanceTestPET_Names::TestID_Name);
    SubsystemMaintenanceControlInterfacesEnum::serialize(accessor.getAcceptedInterface(), node, SubsystemMaintenanceTestPET_Names::AcceptedInterface_Name, false);
    if (accessor.hasDescription()) {
      asb_uci::util::SerializationHelpers::serializeString(accessor.getDescription(), node, SubsystemMaintenanceTestPET_Names::Description_Name);
    }
    {
      const uci::type::SubsystemMaintenanceTestPET::SubsystemComponentID& boundedList = accessor.getSubsystemComponentID();
      for (uci::type::SubsystemMaintenanceTestPET::SubsystemComponentID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::SubsystemID_Type::serialize(boundedList.at(i), node, SubsystemMaintenanceTestPET_Names::SubsystemComponentID_Name);
      }
    }
    {
      const uci::type::SubsystemMaintenanceTestPET::CapabilityID& boundedList = accessor.getCapabilityID();
      for (uci::type::SubsystemMaintenanceTestPET::CapabilityID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::CapabilityID_Type::serialize(boundedList.at(i), node, SubsystemMaintenanceTestPET_Names::CapabilityID_Name);
      }
    }
    if (accessor.hasMaintenanceTestType()) {
      asb_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getMaintenanceTestType(), node, SubsystemMaintenanceTestPET_Names::MaintenanceTestType_Name);
    }
    {
      const uci::type::SubsystemMaintenanceTestPET::TestEventSettings& boundedList = accessor.getTestEventSettings();
      for (uci::type::SubsystemMaintenanceTestPET::TestEventSettings::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::SubsystemMaintenanceEventSettingsType::serialize(boundedList.at(i), node, SubsystemMaintenanceTestPET_Names::TestEventSettings_Name);
      }
    }
    if (accessor.hasSubsystemMaintenanceItemName()) {
      asb_uci::util::SerializationHelpers::serializeString(accessor.getSubsystemMaintenanceItemName(), node, SubsystemMaintenanceTestPET_Names::SubsystemMaintenanceItemName_Name);
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

