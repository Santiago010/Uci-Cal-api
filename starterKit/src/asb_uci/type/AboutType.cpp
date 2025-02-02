/** @file AboutType.cpp
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

#include "../../../include/asb_uci/type/AboutType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/VisibleString256Type.h"
#include "../../../include/asb_uci/type/VisibleString32Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AboutType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString256Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString32Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

AboutType::AboutType()
  : model_Accessor{boost::make_unique<VisibleString32Type>()} {
}

AboutType::~AboutType() = default;

void AboutType::copy(const uci::type::AboutType& accessor) {
  copyImpl(accessor, false);
}

void AboutType::copyImpl(const uci::type::AboutType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const AboutType&>(accessor);
    setModel(*(accessorImpl.model_Accessor));
    if (accessorImpl.serialNumber_Accessor) {
      setSerialNumber(*(accessorImpl.serialNumber_Accessor));
    } else {
      serialNumber_Accessor.reset();
    }
    if (accessorImpl.softwareVersion_Accessor) {
      setSoftwareVersion(*(accessorImpl.softwareVersion_Accessor));
    } else {
      softwareVersion_Accessor.reset();
    }
    if (accessorImpl.bootloaderSoftwareVersion_Accessor) {
      setBootloaderSoftwareVersion(*(accessorImpl.bootloaderSoftwareVersion_Accessor));
    } else {
      bootloaderSoftwareVersion_Accessor.reset();
    }
    if (accessorImpl.hardwareVersion_Accessor) {
      setHardwareVersion(*(accessorImpl.hardwareVersion_Accessor));
    } else {
      hardwareVersion_Accessor.reset();
    }
  }
}

void AboutType::reset() noexcept {
  model_Accessor->reset();
  serialNumber_Accessor.reset();
  softwareVersion_Accessor.reset();
  bootloaderSoftwareVersion_Accessor.reset();
  hardwareVersion_Accessor.reset();
}

const uci::type::VisibleString32Type& AboutType::getModel() const noexcept {
  return *model_Accessor;
}

uci::type::VisibleString32Type& AboutType::getModel() noexcept {
  return *model_Accessor;
}

uci::type::AboutType& AboutType::setModel(const uci::type::VisibleString32Type& value) {
  return setModel(value.c_str());
}

uci::type::AboutType& AboutType::setModel(const std::string& value) {
  return setModel(value.c_str());
}

uci::type::AboutType& AboutType::setModel(const char* value) {
  model_Accessor->setStringValue(value);
  return *this;
}

asb_uci::type::VisibleString256Type& AboutType::getSerialNumber_() const {
  if (serialNumber_Accessor) {
    return *serialNumber_Accessor;
  }
  throw uci::base::UCIException("Error in getSerialNumber(): An attempt was made to get an optional field that was not enabled, call hasSerialNumber() to determine if it is safe to call getSerialNumber()");
}

const asb_uci::type::VisibleString256Type& AboutType::getSerialNumber() const {
  return getSerialNumber_();
}

asb_uci::type::VisibleString256Type& AboutType::getSerialNumber() {
  return getSerialNumber_();
}

uci::type::AboutType& AboutType::setSerialNumber(const asb_uci::type::VisibleString256Type& value) {
  return setSerialNumber(value.c_str());
}

uci::type::AboutType& AboutType::setSerialNumber(const std::string& value) {
  return setSerialNumber(value.c_str());
}

uci::type::AboutType& AboutType::setSerialNumber(const char* value) {
  enableSerialNumber().setStringValue(value);
  return *this;
}

bool AboutType::hasSerialNumber() const noexcept {
  return static_cast<bool>(serialNumber_Accessor);
}

asb_uci::type::VisibleString256Type& AboutType::enableSerialNumber(uci::base::accessorType::AccessorType type) {
  if (!serialNumber_Accessor) {
    serialNumber_Accessor =  asb_uci::type::VisibleString256Type::create(type);
  }
  return *serialNumber_Accessor;
}

uci::type::AboutType& AboutType::clearSerialNumber() noexcept {
  serialNumber_Accessor.reset();
  return *this;
}

asb_uci::type::VisibleString256Type& AboutType::getSoftwareVersion_() const {
  if (softwareVersion_Accessor) {
    return *softwareVersion_Accessor;
  }
  throw uci::base::UCIException("Error in getSoftwareVersion(): An attempt was made to get an optional field that was not enabled, call hasSoftwareVersion() to determine if it is safe to call getSoftwareVersion()");
}

const asb_uci::type::VisibleString256Type& AboutType::getSoftwareVersion() const {
  return getSoftwareVersion_();
}

asb_uci::type::VisibleString256Type& AboutType::getSoftwareVersion() {
  return getSoftwareVersion_();
}

uci::type::AboutType& AboutType::setSoftwareVersion(const asb_uci::type::VisibleString256Type& value) {
  return setSoftwareVersion(value.c_str());
}

uci::type::AboutType& AboutType::setSoftwareVersion(const std::string& value) {
  return setSoftwareVersion(value.c_str());
}

uci::type::AboutType& AboutType::setSoftwareVersion(const char* value) {
  enableSoftwareVersion().setStringValue(value);
  return *this;
}

bool AboutType::hasSoftwareVersion() const noexcept {
  return static_cast<bool>(softwareVersion_Accessor);
}

asb_uci::type::VisibleString256Type& AboutType::enableSoftwareVersion(uci::base::accessorType::AccessorType type) {
  if (!softwareVersion_Accessor) {
    softwareVersion_Accessor =  asb_uci::type::VisibleString256Type::create(type);
  }
  return *softwareVersion_Accessor;
}

uci::type::AboutType& AboutType::clearSoftwareVersion() noexcept {
  softwareVersion_Accessor.reset();
  return *this;
}

asb_uci::type::VisibleString256Type& AboutType::getBootloaderSoftwareVersion_() const {
  if (bootloaderSoftwareVersion_Accessor) {
    return *bootloaderSoftwareVersion_Accessor;
  }
  throw uci::base::UCIException("Error in getBootloaderSoftwareVersion(): An attempt was made to get an optional field that was not enabled, call hasBootloaderSoftwareVersion() to determine if it is safe to call getBootloaderSoftwareVersion()");
}

const asb_uci::type::VisibleString256Type& AboutType::getBootloaderSoftwareVersion() const {
  return getBootloaderSoftwareVersion_();
}

asb_uci::type::VisibleString256Type& AboutType::getBootloaderSoftwareVersion() {
  return getBootloaderSoftwareVersion_();
}

uci::type::AboutType& AboutType::setBootloaderSoftwareVersion(const asb_uci::type::VisibleString256Type& value) {
  return setBootloaderSoftwareVersion(value.c_str());
}

uci::type::AboutType& AboutType::setBootloaderSoftwareVersion(const std::string& value) {
  return setBootloaderSoftwareVersion(value.c_str());
}

uci::type::AboutType& AboutType::setBootloaderSoftwareVersion(const char* value) {
  enableBootloaderSoftwareVersion().setStringValue(value);
  return *this;
}

bool AboutType::hasBootloaderSoftwareVersion() const noexcept {
  return static_cast<bool>(bootloaderSoftwareVersion_Accessor);
}

asb_uci::type::VisibleString256Type& AboutType::enableBootloaderSoftwareVersion(uci::base::accessorType::AccessorType type) {
  if (!bootloaderSoftwareVersion_Accessor) {
    bootloaderSoftwareVersion_Accessor =  asb_uci::type::VisibleString256Type::create(type);
  }
  return *bootloaderSoftwareVersion_Accessor;
}

uci::type::AboutType& AboutType::clearBootloaderSoftwareVersion() noexcept {
  bootloaderSoftwareVersion_Accessor.reset();
  return *this;
}

uci::type::VisibleString32Type& AboutType::getHardwareVersion_() const {
  if (hardwareVersion_Accessor) {
    return *hardwareVersion_Accessor;
  }
  throw uci::base::UCIException("Error in getHardwareVersion(): An attempt was made to get an optional field that was not enabled, call hasHardwareVersion() to determine if it is safe to call getHardwareVersion()");
}

const uci::type::VisibleString32Type& AboutType::getHardwareVersion() const {
  return getHardwareVersion_();
}

uci::type::VisibleString32Type& AboutType::getHardwareVersion() {
  return getHardwareVersion_();
}

uci::type::AboutType& AboutType::setHardwareVersion(const uci::type::VisibleString32Type& value) {
  return setHardwareVersion(value.c_str());
}

uci::type::AboutType& AboutType::setHardwareVersion(const std::string& value) {
  return setHardwareVersion(value.c_str());
}

uci::type::AboutType& AboutType::setHardwareVersion(const char* value) {
  enableHardwareVersion().setStringValue(value);
  return *this;
}

bool AboutType::hasHardwareVersion() const noexcept {
  return static_cast<bool>(hardwareVersion_Accessor);
}

uci::type::VisibleString32Type& AboutType::enableHardwareVersion(uci::base::accessorType::AccessorType type) {
  if (!hardwareVersion_Accessor) {
    hardwareVersion_Accessor = VisibleString32Type::create(type);
  }
  return *hardwareVersion_Accessor;
}

uci::type::AboutType& AboutType::clearHardwareVersion() noexcept {
  hardwareVersion_Accessor.reset();
  return *this;
}

std::unique_ptr<AboutType> AboutType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::aboutType : type};
  return (requestedType == uci::type::accessorType::aboutType) ? boost::make_unique<AboutType>() : nullptr;
}

/**  */
namespace AboutType_Names {

constexpr const char* Extern_Type_Name{"AboutType"};
constexpr const char* Model_Name{"Model"};
constexpr const char* SerialNumber_Name{"SerialNumber"};
constexpr const char* SoftwareVersion_Name{"SoftwareVersion"};
constexpr const char* BootloaderSoftwareVersion_Name{"BootloaderSoftwareVersion"};
constexpr const char* HardwareVersion_Name{"HardwareVersion"};

} // namespace AboutType_Names

void AboutType::deserialize(const boost::property_tree::ptree& propTree, uci::type::AboutType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = AboutType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + AboutType_Names::Model_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setModel(*value);
      }
    } else if (valueType.first == nsPrefix + AboutType_Names::SerialNumber_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSerialNumber(*value);
      }
    } else if (valueType.first == nsPrefix + AboutType_Names::SoftwareVersion_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSoftwareVersion(*value);
      }
    } else if (valueType.first == nsPrefix + AboutType_Names::BootloaderSoftwareVersion_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setBootloaderSoftwareVersion(*value);
      }
    } else if (valueType.first == nsPrefix + AboutType_Names::HardwareVersion_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setHardwareVersion(*value);
      }
    }
  }
}

std::string AboutType::serialize(const uci::type::AboutType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? AboutType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, AboutType_Names::Extern_Type_Name);
  }
  asb_uci::util::SerializationHelpers::serializeString(accessor.getModel(), node, AboutType_Names::Model_Name);
  if (accessor.hasSerialNumber()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getSerialNumber(), node, AboutType_Names::SerialNumber_Name);
  }
  if (accessor.hasSoftwareVersion()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getSoftwareVersion(), node, AboutType_Names::SoftwareVersion_Name);
  }
  if (accessor.hasBootloaderSoftwareVersion()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getBootloaderSoftwareVersion(), node, AboutType_Names::BootloaderSoftwareVersion_Name);
  }
  if (accessor.hasHardwareVersion()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getHardwareVersion(), node, AboutType_Names::HardwareVersion_Name);
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

uci::type::AboutType& AboutType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::AboutType>().release());
}

uci::type::AboutType& AboutType::create(const uci::type::AboutType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::AboutType> newAccessor{boost::make_unique<asb_uci::type::AboutType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void AboutType::destroy(uci::type::AboutType& accessor) {
  delete dynamic_cast<asb_uci::type::AboutType*>(&accessor);
}

} // namespace type

} // namespace uci

