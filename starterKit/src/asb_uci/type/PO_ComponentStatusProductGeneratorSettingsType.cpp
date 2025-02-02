/** @file PO_ComponentStatusProductGeneratorSettingsType.cpp
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

#include "../../../include/asb_uci/type/PO_ComponentStatusProductGeneratorSettingsType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/PO_ComponentStatusGeneratorSettingsType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentStatusGeneratorSettingsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentStatusProductGeneratorSettingsType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PO_ComponentStatusProductGeneratorSettingsType::PO_ComponentStatusProductGeneratorSettingsType() = default;

PO_ComponentStatusProductGeneratorSettingsType::~PO_ComponentStatusProductGeneratorSettingsType() = default;

void PO_ComponentStatusProductGeneratorSettingsType::copy(const uci::type::PO_ComponentStatusProductGeneratorSettingsType& accessor) {
  copyImpl(accessor, false);
}

void PO_ComponentStatusProductGeneratorSettingsType::copyImpl(const uci::type::PO_ComponentStatusProductGeneratorSettingsType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PO_ComponentStatusProductGeneratorSettingsType&>(accessor);
    if (accessorImpl.generatorSettings_Accessor) {
      setGeneratorSettings(*(accessorImpl.generatorSettings_Accessor));
    } else {
      generatorSettings_Accessor.reset();
    }
    setAutoGeneratorSettings(accessorImpl.autoGeneratorSettings_Accessor);
  }
}

void PO_ComponentStatusProductGeneratorSettingsType::reset() noexcept {
  generatorSettings_Accessor.reset();
  autoGeneratorSettings_Accessor = false;
}

uci::type::PO_ComponentStatusGeneratorSettingsType& PO_ComponentStatusProductGeneratorSettingsType::getGeneratorSettings_() const {
  if (generatorSettings_Accessor) {
    return *generatorSettings_Accessor;
  }
  throw uci::base::UCIException("Error in getGeneratorSettings(): An attempt was made to get an optional field that was not enabled, call hasGeneratorSettings() to determine if it is safe to call getGeneratorSettings()");
}

const uci::type::PO_ComponentStatusGeneratorSettingsType& PO_ComponentStatusProductGeneratorSettingsType::getGeneratorSettings() const {
  return getGeneratorSettings_();
}

uci::type::PO_ComponentStatusGeneratorSettingsType& PO_ComponentStatusProductGeneratorSettingsType::getGeneratorSettings() {
  return getGeneratorSettings_();
}

uci::type::PO_ComponentStatusProductGeneratorSettingsType& PO_ComponentStatusProductGeneratorSettingsType::setGeneratorSettings(const uci::type::PO_ComponentStatusGeneratorSettingsType& accessor) {
  enableGeneratorSettings();
  if (&accessor != generatorSettings_Accessor.get()) {
    generatorSettings_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PO_ComponentStatusProductGeneratorSettingsType::hasGeneratorSettings() const noexcept {
  return static_cast<bool>(generatorSettings_Accessor);
}

uci::type::PO_ComponentStatusGeneratorSettingsType& PO_ComponentStatusProductGeneratorSettingsType::enableGeneratorSettings(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pO_ComponentStatusGeneratorSettingsType : type};
  if ((!generatorSettings_Accessor) || (generatorSettings_Accessor->getAccessorType() != requestedType)) {
    generatorSettings_Accessor = PO_ComponentStatusGeneratorSettingsType::create(requestedType);
    if (!generatorSettings_Accessor) {
      throw uci::base::UCIException("Error in enableGeneratorSettings(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *generatorSettings_Accessor;
}

uci::type::PO_ComponentStatusProductGeneratorSettingsType& PO_ComponentStatusProductGeneratorSettingsType::clearGeneratorSettings() noexcept {
  generatorSettings_Accessor.reset();
  return *this;
}

xs::Boolean PO_ComponentStatusProductGeneratorSettingsType::getAutoGeneratorSettings() const {
  return autoGeneratorSettings_Accessor;
}

uci::type::PO_ComponentStatusProductGeneratorSettingsType& PO_ComponentStatusProductGeneratorSettingsType::setAutoGeneratorSettings(xs::Boolean value) {
  autoGeneratorSettings_Accessor = value;
  return *this;
}


std::unique_ptr<PO_ComponentStatusProductGeneratorSettingsType> PO_ComponentStatusProductGeneratorSettingsType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pO_ComponentStatusProductGeneratorSettingsType : type};
  return (requestedType == uci::type::accessorType::pO_ComponentStatusProductGeneratorSettingsType) ? boost::make_unique<PO_ComponentStatusProductGeneratorSettingsType>() : nullptr;
}

/**  */
namespace PO_ComponentStatusProductGeneratorSettingsType_Names {

constexpr const char* Extern_Type_Name{"PO_ComponentStatusProductGeneratorSettingsType"};
constexpr const char* GeneratorSettings_Name{"GeneratorSettings"};
constexpr const char* AutoGeneratorSettings_Name{"AutoGeneratorSettings"};

} // namespace PO_ComponentStatusProductGeneratorSettingsType_Names

void PO_ComponentStatusProductGeneratorSettingsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_ComponentStatusProductGeneratorSettingsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PO_ComponentStatusProductGeneratorSettingsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PO_ComponentStatusProductGeneratorSettingsType_Names::GeneratorSettings_Name) {
      PO_ComponentStatusGeneratorSettingsType::deserialize(valueType.second, accessor.enableGeneratorSettings(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_ComponentStatusProductGeneratorSettingsType_Names::AutoGeneratorSettings_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAutoGeneratorSettings(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    }
  }
}

std::string PO_ComponentStatusProductGeneratorSettingsType::serialize(const uci::type::PO_ComponentStatusProductGeneratorSettingsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PO_ComponentStatusProductGeneratorSettingsType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PO_ComponentStatusProductGeneratorSettingsType_Names::Extern_Type_Name);
  }
  if (accessor.hasGeneratorSettings()) {
    PO_ComponentStatusGeneratorSettingsType::serialize(accessor.getGeneratorSettings(), node, PO_ComponentStatusProductGeneratorSettingsType_Names::GeneratorSettings_Name);
  }
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getAutoGeneratorSettings(), node, PO_ComponentStatusProductGeneratorSettingsType_Names::AutoGeneratorSettings_Name);
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

uci::type::PO_ComponentStatusProductGeneratorSettingsType& PO_ComponentStatusProductGeneratorSettingsType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PO_ComponentStatusProductGeneratorSettingsType>().release());
}

uci::type::PO_ComponentStatusProductGeneratorSettingsType& PO_ComponentStatusProductGeneratorSettingsType::create(const uci::type::PO_ComponentStatusProductGeneratorSettingsType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PO_ComponentStatusProductGeneratorSettingsType> newAccessor{boost::make_unique<asb_uci::type::PO_ComponentStatusProductGeneratorSettingsType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PO_ComponentStatusProductGeneratorSettingsType::destroy(uci::type::PO_ComponentStatusProductGeneratorSettingsType& accessor) {
  delete dynamic_cast<asb_uci::type::PO_ComponentStatusProductGeneratorSettingsType*>(&accessor);
}

} // namespace type

} // namespace uci

