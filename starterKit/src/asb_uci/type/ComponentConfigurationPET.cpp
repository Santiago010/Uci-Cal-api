/** @file ComponentConfigurationPET.cpp
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

#include "../../../include/asb_uci/type/ComponentConfigurationPET.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/AboutType.h"
#include "../../../include/asb_uci/type/CapabilityCrossReferenceType.h"
#include "../../../include/asb_uci/type/ComponentConfigurationID_Type.h"
#include "../../../include/asb_uci/type/ComponentID_Type.h"
#include "../../../include/asb_uci/type/ComponentTypeEnum.h"
#include "../../../include/asb_uci/type/ForeignKeyType.h"
#include "../../../include/asb_uci/type/InstallationDetailsType.h"
#include "../../../include/asb_uci/type/ServiceID_Type.h"
#include "../../../include/asb_uci/util/DerivedTypesCopier.h"
#include "../../../include/asb_uci/util/DerivedTypesCreator.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/DerivedTypesSerializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AboutType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityCrossReferenceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ComponentConfigurationID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ComponentConfigurationPET.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ComponentID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ComponentTypeEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ForeignKeyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/InstallationDetailsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MassType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ServiceID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ComponentConfigurationPET::ComponentConfigurationPET()
  : componentConfigurationID_Accessor{boost::make_unique<ComponentConfigurationID_Type>()},
    componentID_Accessor{boost::make_unique<ComponentID_Type>()},
    capabilityCrossReference_Accessor{boost::make_unique<CapabilityCrossReference>(0, SIZE_MAX)},
    serviceID_Accessor{boost::make_unique<ServiceID>(0, SIZE_MAX)} {
}

ComponentConfigurationPET::~ComponentConfigurationPET() = default;

void ComponentConfigurationPET::copy(const uci::type::ComponentConfigurationPET& accessor) {
  copyImpl(accessor, false);
}

void ComponentConfigurationPET::copyImpl(const uci::type::ComponentConfigurationPET& accessor, const bool checkIfDerivation) {
  if (&accessor != this) {
    if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::componentConfigurationPET)) {
      const auto& accessorImpl = dynamic_cast<const ComponentConfigurationPET&>(accessor);
      setComponentConfigurationID(*(accessorImpl.componentConfigurationID_Accessor));
      setComponentID(*(accessorImpl.componentID_Accessor));
      if (accessorImpl.about_Accessor) {
        setAbout(*(accessorImpl.about_Accessor));
      } else {
        about_Accessor.reset();
      }
      if (accessorImpl.hasMass()) {
        setMass(accessorImpl.getMass());
      } else {
        clearMass();
      }
      setCapabilityCrossReference(*(accessorImpl.capabilityCrossReference_Accessor));
      if (accessorImpl.installationLocationKey_Accessor) {
        setInstallationLocationKey(*(accessorImpl.installationLocationKey_Accessor));
      } else {
        installationLocationKey_Accessor.reset();
      }
      if (accessorImpl.installationDetails_Accessor) {
        setInstallationDetails(*(accessorImpl.installationDetails_Accessor));
      } else {
        installationDetails_Accessor.reset();
      }
      if (accessorImpl.componentType_Accessor) {
        setComponentType(*(accessorImpl.componentType_Accessor));
      } else {
        componentType_Accessor.reset();
      }
      if (accessorImpl.componentCode_Accessor) {
        setComponentCode(*(accessorImpl.componentCode_Accessor));
      } else {
        componentCode_Accessor.reset();
      }
      setServiceID(*(accessorImpl.serviceID_Accessor));
    } else {
      asb_uci::util::DerivedTypesCopier::copy(accessor, *this);
    }
  }
}

void ComponentConfigurationPET::reset() noexcept {
  componentConfigurationID_Accessor->reset();
  componentID_Accessor->reset();
  about_Accessor.reset();
  clearMass();
  capabilityCrossReference_Accessor->reset();
  installationLocationKey_Accessor.reset();
  installationDetails_Accessor.reset();
  componentType_Accessor.reset();
  componentCode_Accessor.reset();
  serviceID_Accessor->reset();
}

const uci::type::ComponentConfigurationID_Type& ComponentConfigurationPET::getComponentConfigurationID() const {
  return *componentConfigurationID_Accessor;
}

uci::type::ComponentConfigurationID_Type& ComponentConfigurationPET::getComponentConfigurationID() {
  return *componentConfigurationID_Accessor;
}

uci::type::ComponentConfigurationPET& ComponentConfigurationPET::setComponentConfigurationID(const uci::type::ComponentConfigurationID_Type& accessor) {
  if (&accessor != componentConfigurationID_Accessor.get()) {
    componentConfigurationID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ComponentID_Type& ComponentConfigurationPET::getComponentID() const {
  return *componentID_Accessor;
}

uci::type::ComponentID_Type& ComponentConfigurationPET::getComponentID() {
  return *componentID_Accessor;
}

uci::type::ComponentConfigurationPET& ComponentConfigurationPET::setComponentID(const uci::type::ComponentID_Type& accessor) {
  if (&accessor != componentID_Accessor.get()) {
    componentID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::AboutType& ComponentConfigurationPET::getAbout_() const {
  if (about_Accessor) {
    return *about_Accessor;
  }
  throw uci::base::UCIException("Error in getAbout(): An attempt was made to get an optional field that was not enabled, call hasAbout() to determine if it is safe to call getAbout()");
}

const uci::type::AboutType& ComponentConfigurationPET::getAbout() const {
  return getAbout_();
}

uci::type::AboutType& ComponentConfigurationPET::getAbout() {
  return getAbout_();
}

uci::type::ComponentConfigurationPET& ComponentConfigurationPET::setAbout(const uci::type::AboutType& accessor) {
  enableAbout();
  if (&accessor != about_Accessor.get()) {
    about_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool ComponentConfigurationPET::hasAbout() const noexcept {
  return static_cast<bool>(about_Accessor);
}

uci::type::AboutType& ComponentConfigurationPET::enableAbout(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::aboutType : type};
  if ((!about_Accessor) || (about_Accessor->getAccessorType() != requestedType)) {
    about_Accessor = AboutType::create(requestedType);
    if (!about_Accessor) {
      throw uci::base::UCIException("Error in enableAbout(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *about_Accessor;
}

uci::type::ComponentConfigurationPET& ComponentConfigurationPET::clearAbout() noexcept {
  about_Accessor.reset();
  return *this;
}

uci::type::MassTypeValue ComponentConfigurationPET::getMass() const {
  if (mass_Accessor) {
    return *mass_Accessor;
  }
  throw uci::base::UCIException("Error in getMass(): An attempt was made to get an optional field that was not enabled, call hasMass() to determine if it is safe to call getMass()");
}

uci::type::ComponentConfigurationPET& ComponentConfigurationPET::setMass(uci::type::MassTypeValue value) {
  mass_Accessor = value;
  return *this;
}

bool ComponentConfigurationPET::hasMass() const noexcept {
  return mass_Accessor.has_value();
}

uci::type::ComponentConfigurationPET& ComponentConfigurationPET::clearMass() noexcept {
  mass_Accessor.reset();
  return *this;
}

const uci::type::ComponentConfigurationPET::CapabilityCrossReference& ComponentConfigurationPET::getCapabilityCrossReference() const {
  return *capabilityCrossReference_Accessor;
}

uci::type::ComponentConfigurationPET::CapabilityCrossReference& ComponentConfigurationPET::getCapabilityCrossReference() {
  return *capabilityCrossReference_Accessor;
}

uci::type::ComponentConfigurationPET& ComponentConfigurationPET::setCapabilityCrossReference(const uci::type::ComponentConfigurationPET::CapabilityCrossReference& accessor) {
  if (&accessor != capabilityCrossReference_Accessor.get()) {
    capabilityCrossReference_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ForeignKeyType& ComponentConfigurationPET::getInstallationLocationKey_() const {
  if (installationLocationKey_Accessor) {
    return *installationLocationKey_Accessor;
  }
  throw uci::base::UCIException("Error in getInstallationLocationKey(): An attempt was made to get an optional field that was not enabled, call hasInstallationLocationKey() to determine if it is safe to call getInstallationLocationKey()");
}

const uci::type::ForeignKeyType& ComponentConfigurationPET::getInstallationLocationKey() const {
  return getInstallationLocationKey_();
}

uci::type::ForeignKeyType& ComponentConfigurationPET::getInstallationLocationKey() {
  return getInstallationLocationKey_();
}

uci::type::ComponentConfigurationPET& ComponentConfigurationPET::setInstallationLocationKey(const uci::type::ForeignKeyType& accessor) {
  enableInstallationLocationKey(accessor.getAccessorType());
  if (&accessor != installationLocationKey_Accessor.get()) {
    installationLocationKey_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool ComponentConfigurationPET::hasInstallationLocationKey() const noexcept {
  return static_cast<bool>(installationLocationKey_Accessor);
}

uci::type::ForeignKeyType& ComponentConfigurationPET::enableInstallationLocationKey(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::foreignKeyType : type};
  if ((!installationLocationKey_Accessor) || (installationLocationKey_Accessor->getAccessorType() != requestedType)) {
    installationLocationKey_Accessor = ForeignKeyType::create(requestedType);
    if (!installationLocationKey_Accessor) {
      throw uci::base::UCIException("Error in enableInstallationLocationKey(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *installationLocationKey_Accessor;
}

uci::type::ComponentConfigurationPET& ComponentConfigurationPET::clearInstallationLocationKey() noexcept {
  installationLocationKey_Accessor.reset();
  return *this;
}

uci::type::InstallationDetailsType& ComponentConfigurationPET::getInstallationDetails_() const {
  if (installationDetails_Accessor) {
    return *installationDetails_Accessor;
  }
  throw uci::base::UCIException("Error in getInstallationDetails(): An attempt was made to get an optional field that was not enabled, call hasInstallationDetails() to determine if it is safe to call getInstallationDetails()");
}

const uci::type::InstallationDetailsType& ComponentConfigurationPET::getInstallationDetails() const {
  return getInstallationDetails_();
}

uci::type::InstallationDetailsType& ComponentConfigurationPET::getInstallationDetails() {
  return getInstallationDetails_();
}

uci::type::ComponentConfigurationPET& ComponentConfigurationPET::setInstallationDetails(const uci::type::InstallationDetailsType& accessor) {
  enableInstallationDetails();
  if (&accessor != installationDetails_Accessor.get()) {
    installationDetails_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool ComponentConfigurationPET::hasInstallationDetails() const noexcept {
  return static_cast<bool>(installationDetails_Accessor);
}

uci::type::InstallationDetailsType& ComponentConfigurationPET::enableInstallationDetails(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::installationDetailsType : type};
  if ((!installationDetails_Accessor) || (installationDetails_Accessor->getAccessorType() != requestedType)) {
    installationDetails_Accessor = InstallationDetailsType::create(requestedType);
    if (!installationDetails_Accessor) {
      throw uci::base::UCIException("Error in enableInstallationDetails(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *installationDetails_Accessor;
}

uci::type::ComponentConfigurationPET& ComponentConfigurationPET::clearInstallationDetails() noexcept {
  installationDetails_Accessor.reset();
  return *this;
}

uci::type::ComponentTypeEnum& ComponentConfigurationPET::getComponentType_() const {
  if (componentType_Accessor) {
    return *componentType_Accessor;
  }
  throw uci::base::UCIException("Error in getComponentType(): An attempt was made to get an optional field that was not enabled, call hasComponentType() to determine if it is safe to call getComponentType()");
}

const uci::type::ComponentTypeEnum& ComponentConfigurationPET::getComponentType() const {
  return getComponentType_();
}

uci::type::ComponentTypeEnum& ComponentConfigurationPET::getComponentType() {
  return getComponentType_();
}

uci::type::ComponentConfigurationPET& ComponentConfigurationPET::setComponentType(const uci::type::ComponentTypeEnum& accessor) {
  enableComponentType();
  if (&accessor != componentType_Accessor.get()) {
    componentType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ComponentConfigurationPET& ComponentConfigurationPET::setComponentType(const uci::type::ComponentTypeEnum::EnumerationItem value) {
  enableComponentType().setValue(value);
  return *this;
}

bool ComponentConfigurationPET::hasComponentType() const noexcept {
  return static_cast<bool>(componentType_Accessor);
}

uci::type::ComponentTypeEnum& ComponentConfigurationPET::enableComponentType(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::componentTypeEnum : type};
  if ((!componentType_Accessor) || (componentType_Accessor->getAccessorType() != requestedType)) {
    componentType_Accessor = ComponentTypeEnum::create(requestedType);
    if (!componentType_Accessor) {
      throw uci::base::UCIException("Error in enableComponentType(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *componentType_Accessor;
}

uci::type::ComponentConfigurationPET& ComponentConfigurationPET::clearComponentType() noexcept {
  componentType_Accessor.reset();
  return *this;
}

uci::type::ForeignKeyType& ComponentConfigurationPET::getComponentCode_() const {
  if (componentCode_Accessor) {
    return *componentCode_Accessor;
  }
  throw uci::base::UCIException("Error in getComponentCode(): An attempt was made to get an optional field that was not enabled, call hasComponentCode() to determine if it is safe to call getComponentCode()");
}

const uci::type::ForeignKeyType& ComponentConfigurationPET::getComponentCode() const {
  return getComponentCode_();
}

uci::type::ForeignKeyType& ComponentConfigurationPET::getComponentCode() {
  return getComponentCode_();
}

uci::type::ComponentConfigurationPET& ComponentConfigurationPET::setComponentCode(const uci::type::ForeignKeyType& accessor) {
  enableComponentCode(accessor.getAccessorType());
  if (&accessor != componentCode_Accessor.get()) {
    componentCode_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool ComponentConfigurationPET::hasComponentCode() const noexcept {
  return static_cast<bool>(componentCode_Accessor);
}

uci::type::ForeignKeyType& ComponentConfigurationPET::enableComponentCode(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::foreignKeyType : type};
  if ((!componentCode_Accessor) || (componentCode_Accessor->getAccessorType() != requestedType)) {
    componentCode_Accessor = ForeignKeyType::create(requestedType);
    if (!componentCode_Accessor) {
      throw uci::base::UCIException("Error in enableComponentCode(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *componentCode_Accessor;
}

uci::type::ComponentConfigurationPET& ComponentConfigurationPET::clearComponentCode() noexcept {
  componentCode_Accessor.reset();
  return *this;
}

const uci::type::ComponentConfigurationPET::ServiceID& ComponentConfigurationPET::getServiceID() const {
  return *serviceID_Accessor;
}

uci::type::ComponentConfigurationPET::ServiceID& ComponentConfigurationPET::getServiceID() {
  return *serviceID_Accessor;
}

uci::type::ComponentConfigurationPET& ComponentConfigurationPET::setServiceID(const uci::type::ComponentConfigurationPET::ServiceID& accessor) {
  if (&accessor != serviceID_Accessor.get()) {
    serviceID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<ComponentConfigurationPET> ComponentConfigurationPET::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::componentConfigurationPET : type};
  return std::unique_ptr<ComponentConfigurationPET>(dynamic_cast<ComponentConfigurationPET*>(asb_uci::util::DerivedTypesCreator::create(requestedType)));
}

/**  */
namespace ComponentConfigurationPET_Names {

constexpr const char* Extern_Type_Name{"ComponentConfigurationPET"};
constexpr const char* ComponentConfigurationID_Name{"ComponentConfigurationID"};
constexpr const char* ComponentID_Name{"ComponentID"};
constexpr const char* About_Name{"About"};
constexpr const char* Mass_Name{"Mass"};
constexpr const char* CapabilityCrossReference_Name{"CapabilityCrossReference"};
constexpr const char* InstallationLocationKey_Name{"InstallationLocationKey"};
constexpr const char* InstallationDetails_Name{"InstallationDetails"};
constexpr const char* ComponentType_Name{"ComponentType"};
constexpr const char* ComponentCode_Name{"ComponentCode"};
constexpr const char* ServiceID_Name{"ServiceID"};

} // namespace ComponentConfigurationPET_Names

void ComponentConfigurationPET::deserialize(const boost::property_tree::ptree& propTree, uci::type::ComponentConfigurationPET& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ComponentConfigurationPET_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ComponentConfigurationPET_Names::ComponentConfigurationID_Name) {
      ComponentConfigurationID_Type::deserialize(valueType.second, accessor.getComponentConfigurationID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ComponentConfigurationPET_Names::ComponentID_Name) {
      ComponentID_Type::deserialize(valueType.second, accessor.getComponentID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ComponentConfigurationPET_Names::About_Name) {
      AboutType::deserialize(valueType.second, accessor.enableAbout(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ComponentConfigurationPET_Names::Mass_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMass(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ComponentConfigurationPET_Names::CapabilityCrossReference_Name) {
      uci::type::ComponentConfigurationPET::CapabilityCrossReference& boundedList = accessor.getCapabilityCrossReference();
      const uci::type::ComponentConfigurationPET::CapabilityCrossReference::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::CapabilityCrossReferenceType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ComponentConfigurationPET_Names::InstallationLocationKey_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableInstallationLocationKey(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ComponentConfigurationPET_Names::InstallationDetails_Name) {
      InstallationDetailsType::deserialize(valueType.second, accessor.enableInstallationDetails(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ComponentConfigurationPET_Names::ComponentType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableComponentType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ComponentConfigurationPET_Names::ComponentCode_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableComponentCode(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ComponentConfigurationPET_Names::ServiceID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ComponentConfigurationPET::ServiceID& boundedList = accessor.getServiceID();
        const uci::type::ComponentConfigurationPET::ServiceID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::ServiceID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string ComponentConfigurationPET::serialize(const uci::type::ComponentConfigurationPET& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ComponentConfigurationPET_Names::Extern_Type_Name : nodeName)};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::componentConfigurationPET)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      asb_uci::util::SerializationHelpers::addTypeAttribute(node, ComponentConfigurationPET_Names::Extern_Type_Name);
    }
    ComponentConfigurationID_Type::serialize(accessor.getComponentConfigurationID(), node, ComponentConfigurationPET_Names::ComponentConfigurationID_Name);
    ComponentID_Type::serialize(accessor.getComponentID(), node, ComponentConfigurationPET_Names::ComponentID_Name);
    if (accessor.hasAbout()) {
      AboutType::serialize(accessor.getAbout(), node, ComponentConfigurationPET_Names::About_Name);
    }
    if (accessor.hasMass()) {
      asb_uci::util::SerializationHelpers::serializeDouble(accessor.getMass(), node, ComponentConfigurationPET_Names::Mass_Name);
    }
    {
      const uci::type::ComponentConfigurationPET::CapabilityCrossReference& boundedList = accessor.getCapabilityCrossReference();
      for (uci::type::ComponentConfigurationPET::CapabilityCrossReference::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::CapabilityCrossReferenceType::serialize(boundedList.at(i), node, ComponentConfigurationPET_Names::CapabilityCrossReference_Name);
      }
    }
    if (accessor.hasInstallationLocationKey()) {
      ForeignKeyType::serialize(accessor.getInstallationLocationKey(), node, ComponentConfigurationPET_Names::InstallationLocationKey_Name);
    }
    if (accessor.hasInstallationDetails()) {
      InstallationDetailsType::serialize(accessor.getInstallationDetails(), node, ComponentConfigurationPET_Names::InstallationDetails_Name);
    }
    if (accessor.hasComponentType()) {
      ComponentTypeEnum::serialize(accessor.getComponentType(), node, ComponentConfigurationPET_Names::ComponentType_Name, false);
    }
    if (accessor.hasComponentCode()) {
      ForeignKeyType::serialize(accessor.getComponentCode(), node, ComponentConfigurationPET_Names::ComponentCode_Name);
    }
    {
      const uci::type::ComponentConfigurationPET::ServiceID& boundedList = accessor.getServiceID();
      for (uci::type::ComponentConfigurationPET::ServiceID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::ServiceID_Type::serialize(boundedList.at(i), node, ComponentConfigurationPET_Names::ServiceID_Name);
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

