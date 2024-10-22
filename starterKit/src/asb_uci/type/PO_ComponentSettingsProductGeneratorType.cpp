/** @file PO_ComponentSettingsProductGeneratorType.cpp
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

#include "../../../include/asb_uci/type/PO_ComponentSettingsProductGeneratorType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ComponentControlsA_Type.h"
#include "../../../include/asb_uci/type/PO_ComponentSettingsOutputProductSettingsType.h"
#include "../../../include/asb_uci/type/PO_ComponentSettingsProductGeneratorSettingsType.h"
#include "../../../include/asb_uci/type/PO_FPA_ID_Type.h"
#include "../../../include/asb_uci/type/PO_ProductGeneratorID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ComponentControlsA_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentSettingsOutputProductSettingsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentSettingsProductGeneratorSettingsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentSettingsProductGeneratorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_FPA_ID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ProductGeneratorID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PO_ComponentSettingsProductGeneratorType::PO_ComponentSettingsProductGeneratorType()
  : generatorID_Accessor{boost::make_unique<PO_ProductGeneratorID_Type>()},
    fPA_ID_Accessor{boost::make_unique<FPA_ID>(0, SIZE_MAX)},
    outputProductSettings_Accessor{boost::make_unique<OutputProductSettings>(0, SIZE_MAX)} {
}

PO_ComponentSettingsProductGeneratorType::~PO_ComponentSettingsProductGeneratorType() = default;

void PO_ComponentSettingsProductGeneratorType::copy(const uci::type::PO_ComponentSettingsProductGeneratorType& accessor) {
  copyImpl(accessor, false);
}

void PO_ComponentSettingsProductGeneratorType::copyImpl(const uci::type::PO_ComponentSettingsProductGeneratorType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PO_ComponentSettingsProductGeneratorType&>(accessor);
    setGeneratorID(*(accessorImpl.generatorID_Accessor));
    setFPA_ID(*(accessorImpl.fPA_ID_Accessor));
    if (accessorImpl.productGeneratorControls_Accessor) {
      setProductGeneratorControls(*(accessorImpl.productGeneratorControls_Accessor));
    } else {
      productGeneratorControls_Accessor.reset();
    }
    if (accessorImpl.productGeneratorSettings_Accessor) {
      setProductGeneratorSettings(*(accessorImpl.productGeneratorSettings_Accessor));
    } else {
      productGeneratorSettings_Accessor.reset();
    }
    setOutputProductSettings(*(accessorImpl.outputProductSettings_Accessor));
  }
}

void PO_ComponentSettingsProductGeneratorType::reset() noexcept {
  generatorID_Accessor->reset();
  fPA_ID_Accessor->reset();
  productGeneratorControls_Accessor.reset();
  productGeneratorSettings_Accessor.reset();
  outputProductSettings_Accessor->reset();
}

const uci::type::PO_ProductGeneratorID_Type& PO_ComponentSettingsProductGeneratorType::getGeneratorID() const {
  return *generatorID_Accessor;
}

uci::type::PO_ProductGeneratorID_Type& PO_ComponentSettingsProductGeneratorType::getGeneratorID() {
  return *generatorID_Accessor;
}

uci::type::PO_ComponentSettingsProductGeneratorType& PO_ComponentSettingsProductGeneratorType::setGeneratorID(const uci::type::PO_ProductGeneratorID_Type& accessor) {
  if (&accessor != generatorID_Accessor.get()) {
    generatorID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PO_ComponentSettingsProductGeneratorType::FPA_ID& PO_ComponentSettingsProductGeneratorType::getFPA_ID() const {
  return *fPA_ID_Accessor;
}

uci::type::PO_ComponentSettingsProductGeneratorType::FPA_ID& PO_ComponentSettingsProductGeneratorType::getFPA_ID() {
  return *fPA_ID_Accessor;
}

uci::type::PO_ComponentSettingsProductGeneratorType& PO_ComponentSettingsProductGeneratorType::setFPA_ID(const uci::type::PO_ComponentSettingsProductGeneratorType::FPA_ID& accessor) {
  if (&accessor != fPA_ID_Accessor.get()) {
    fPA_ID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ComponentControlsA_Type& PO_ComponentSettingsProductGeneratorType::getProductGeneratorControls_() const {
  if (productGeneratorControls_Accessor) {
    return *productGeneratorControls_Accessor;
  }
  throw uci::base::UCIException("Error in getProductGeneratorControls(): An attempt was made to get an optional field that was not enabled, call hasProductGeneratorControls() to determine if it is safe to call getProductGeneratorControls()");
}

const uci::type::ComponentControlsA_Type& PO_ComponentSettingsProductGeneratorType::getProductGeneratorControls() const {
  return getProductGeneratorControls_();
}

uci::type::ComponentControlsA_Type& PO_ComponentSettingsProductGeneratorType::getProductGeneratorControls() {
  return getProductGeneratorControls_();
}

uci::type::PO_ComponentSettingsProductGeneratorType& PO_ComponentSettingsProductGeneratorType::setProductGeneratorControls(const uci::type::ComponentControlsA_Type& accessor) {
  enableProductGeneratorControls();
  if (&accessor != productGeneratorControls_Accessor.get()) {
    productGeneratorControls_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PO_ComponentSettingsProductGeneratorType::hasProductGeneratorControls() const noexcept {
  return static_cast<bool>(productGeneratorControls_Accessor);
}

uci::type::ComponentControlsA_Type& PO_ComponentSettingsProductGeneratorType::enableProductGeneratorControls(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::componentControlsA_Type : type};
  if ((!productGeneratorControls_Accessor) || (productGeneratorControls_Accessor->getAccessorType() != requestedType)) {
    productGeneratorControls_Accessor = ComponentControlsA_Type::create(requestedType);
    if (!productGeneratorControls_Accessor) {
      throw uci::base::UCIException("Error in enableProductGeneratorControls(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *productGeneratorControls_Accessor;
}

uci::type::PO_ComponentSettingsProductGeneratorType& PO_ComponentSettingsProductGeneratorType::clearProductGeneratorControls() noexcept {
  productGeneratorControls_Accessor.reset();
  return *this;
}

uci::type::PO_ComponentSettingsProductGeneratorSettingsType& PO_ComponentSettingsProductGeneratorType::getProductGeneratorSettings_() const {
  if (productGeneratorSettings_Accessor) {
    return *productGeneratorSettings_Accessor;
  }
  throw uci::base::UCIException("Error in getProductGeneratorSettings(): An attempt was made to get an optional field that was not enabled, call hasProductGeneratorSettings() to determine if it is safe to call getProductGeneratorSettings()");
}

const uci::type::PO_ComponentSettingsProductGeneratorSettingsType& PO_ComponentSettingsProductGeneratorType::getProductGeneratorSettings() const {
  return getProductGeneratorSettings_();
}

uci::type::PO_ComponentSettingsProductGeneratorSettingsType& PO_ComponentSettingsProductGeneratorType::getProductGeneratorSettings() {
  return getProductGeneratorSettings_();
}

uci::type::PO_ComponentSettingsProductGeneratorType& PO_ComponentSettingsProductGeneratorType::setProductGeneratorSettings(const uci::type::PO_ComponentSettingsProductGeneratorSettingsType& accessor) {
  enableProductGeneratorSettings();
  if (&accessor != productGeneratorSettings_Accessor.get()) {
    productGeneratorSettings_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PO_ComponentSettingsProductGeneratorType::hasProductGeneratorSettings() const noexcept {
  return static_cast<bool>(productGeneratorSettings_Accessor);
}

uci::type::PO_ComponentSettingsProductGeneratorSettingsType& PO_ComponentSettingsProductGeneratorType::enableProductGeneratorSettings(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pO_ComponentSettingsProductGeneratorSettingsType : type};
  if ((!productGeneratorSettings_Accessor) || (productGeneratorSettings_Accessor->getAccessorType() != requestedType)) {
    productGeneratorSettings_Accessor = PO_ComponentSettingsProductGeneratorSettingsType::create(requestedType);
    if (!productGeneratorSettings_Accessor) {
      throw uci::base::UCIException("Error in enableProductGeneratorSettings(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *productGeneratorSettings_Accessor;
}

uci::type::PO_ComponentSettingsProductGeneratorType& PO_ComponentSettingsProductGeneratorType::clearProductGeneratorSettings() noexcept {
  productGeneratorSettings_Accessor.reset();
  return *this;
}

const uci::type::PO_ComponentSettingsProductGeneratorType::OutputProductSettings& PO_ComponentSettingsProductGeneratorType::getOutputProductSettings() const {
  return *outputProductSettings_Accessor;
}

uci::type::PO_ComponentSettingsProductGeneratorType::OutputProductSettings& PO_ComponentSettingsProductGeneratorType::getOutputProductSettings() {
  return *outputProductSettings_Accessor;
}

uci::type::PO_ComponentSettingsProductGeneratorType& PO_ComponentSettingsProductGeneratorType::setOutputProductSettings(const uci::type::PO_ComponentSettingsProductGeneratorType::OutputProductSettings& accessor) {
  if (&accessor != outputProductSettings_Accessor.get()) {
    outputProductSettings_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<PO_ComponentSettingsProductGeneratorType> PO_ComponentSettingsProductGeneratorType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pO_ComponentSettingsProductGeneratorType : type};
  return (requestedType == uci::type::accessorType::pO_ComponentSettingsProductGeneratorType) ? boost::make_unique<PO_ComponentSettingsProductGeneratorType>() : nullptr;
}

/**  */
namespace PO_ComponentSettingsProductGeneratorType_Names {

constexpr const char* Extern_Type_Name{"PO_ComponentSettingsProductGeneratorType"};
constexpr const char* GeneratorID_Name{"GeneratorID"};
constexpr const char* FPA_ID_Name{"FPA_ID"};
constexpr const char* ProductGeneratorControls_Name{"ProductGeneratorControls"};
constexpr const char* ProductGeneratorSettings_Name{"ProductGeneratorSettings"};
constexpr const char* OutputProductSettings_Name{"OutputProductSettings"};

} // namespace PO_ComponentSettingsProductGeneratorType_Names

void PO_ComponentSettingsProductGeneratorType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_ComponentSettingsProductGeneratorType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PO_ComponentSettingsProductGeneratorType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PO_ComponentSettingsProductGeneratorType_Names::GeneratorID_Name) {
      PO_ProductGeneratorID_Type::deserialize(valueType.second, accessor.getGeneratorID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_ComponentSettingsProductGeneratorType_Names::FPA_ID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PO_ComponentSettingsProductGeneratorType::FPA_ID& boundedList = accessor.getFPA_ID();
        const uci::type::PO_ComponentSettingsProductGeneratorType::FPA_ID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::PO_FPA_ID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + PO_ComponentSettingsProductGeneratorType_Names::ProductGeneratorControls_Name) {
      ComponentControlsA_Type::deserialize(valueType.second, accessor.enableProductGeneratorControls(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_ComponentSettingsProductGeneratorType_Names::ProductGeneratorSettings_Name) {
      PO_ComponentSettingsProductGeneratorSettingsType::deserialize(valueType.second, accessor.enableProductGeneratorSettings(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_ComponentSettingsProductGeneratorType_Names::OutputProductSettings_Name) {
      uci::type::PO_ComponentSettingsProductGeneratorType::OutputProductSettings& boundedList = accessor.getOutputProductSettings();
      const uci::type::PO_ComponentSettingsProductGeneratorType::OutputProductSettings::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::PO_ComponentSettingsOutputProductSettingsType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    }
  }
}

std::string PO_ComponentSettingsProductGeneratorType::serialize(const uci::type::PO_ComponentSettingsProductGeneratorType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PO_ComponentSettingsProductGeneratorType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PO_ComponentSettingsProductGeneratorType_Names::Extern_Type_Name);
  }
  PO_ProductGeneratorID_Type::serialize(accessor.getGeneratorID(), node, PO_ComponentSettingsProductGeneratorType_Names::GeneratorID_Name);
  {
    const uci::type::PO_ComponentSettingsProductGeneratorType::FPA_ID& boundedList = accessor.getFPA_ID();
    for (uci::type::PO_ComponentSettingsProductGeneratorType::FPA_ID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::PO_FPA_ID_Type::serialize(boundedList.at(i), node, PO_ComponentSettingsProductGeneratorType_Names::FPA_ID_Name);
    }
  }
  if (accessor.hasProductGeneratorControls()) {
    ComponentControlsA_Type::serialize(accessor.getProductGeneratorControls(), node, PO_ComponentSettingsProductGeneratorType_Names::ProductGeneratorControls_Name);
  }
  if (accessor.hasProductGeneratorSettings()) {
    PO_ComponentSettingsProductGeneratorSettingsType::serialize(accessor.getProductGeneratorSettings(), node, PO_ComponentSettingsProductGeneratorType_Names::ProductGeneratorSettings_Name);
  }
  {
    const uci::type::PO_ComponentSettingsProductGeneratorType::OutputProductSettings& boundedList = accessor.getOutputProductSettings();
    for (uci::type::PO_ComponentSettingsProductGeneratorType::OutputProductSettings::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::PO_ComponentSettingsOutputProductSettingsType::serialize(boundedList.at(i), node, PO_ComponentSettingsProductGeneratorType_Names::OutputProductSettings_Name);
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

uci::type::PO_ComponentSettingsProductGeneratorType& PO_ComponentSettingsProductGeneratorType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PO_ComponentSettingsProductGeneratorType>().release());
}

uci::type::PO_ComponentSettingsProductGeneratorType& PO_ComponentSettingsProductGeneratorType::create(const uci::type::PO_ComponentSettingsProductGeneratorType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PO_ComponentSettingsProductGeneratorType> newAccessor{boost::make_unique<asb_uci::type::PO_ComponentSettingsProductGeneratorType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PO_ComponentSettingsProductGeneratorType::destroy(uci::type::PO_ComponentSettingsProductGeneratorType& accessor) {
  delete dynamic_cast<asb_uci::type::PO_ComponentSettingsProductGeneratorType*>(&accessor);
}

} // namespace type

} // namespace uci

