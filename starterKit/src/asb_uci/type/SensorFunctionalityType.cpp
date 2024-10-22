/** @file SensorFunctionalityType.cpp
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

#include "../../../include/asb_uci/type/SensorFunctionalityType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/SensorFunctionalCollectionsEnum.h"
#include "../../../include/asb_uci/type/SensorFunctionalProcessingEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SensorFunctionalCollectionsEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SensorFunctionalProcessingEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SensorFunctionalityType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SensorFunctionalityType::SensorFunctionalityType()
  : collections_Accessor{boost::make_unique<SensorFunctionalCollectionsEnum>()},
    processing_Accessor{boost::make_unique<SensorFunctionalProcessingEnum>()} {
}

SensorFunctionalityType::~SensorFunctionalityType() = default;

void SensorFunctionalityType::copy(const uci::type::SensorFunctionalityType& accessor) {
  copyImpl(accessor, false);
}

void SensorFunctionalityType::copyImpl(const uci::type::SensorFunctionalityType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const SensorFunctionalityType&>(accessor);
    setCollections(*(accessorImpl.collections_Accessor));
    setProcessing(*(accessorImpl.processing_Accessor));
  }
}

void SensorFunctionalityType::reset() noexcept {
  collections_Accessor->reset();
  processing_Accessor->reset();
}

const uci::type::SensorFunctionalCollectionsEnum& SensorFunctionalityType::getCollections() const {
  return *collections_Accessor;
}

uci::type::SensorFunctionalCollectionsEnum& SensorFunctionalityType::getCollections() {
  return *collections_Accessor;
}

uci::type::SensorFunctionalityType& SensorFunctionalityType::setCollections(const uci::type::SensorFunctionalCollectionsEnum& accessor) {
  if (&accessor != collections_Accessor.get()) {
    collections_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::SensorFunctionalityType& SensorFunctionalityType::setCollections(uci::type::SensorFunctionalCollectionsEnum::EnumerationItem value) {
  collections_Accessor->setValue(value);
  return *this;
}


const uci::type::SensorFunctionalProcessingEnum& SensorFunctionalityType::getProcessing() const {
  return *processing_Accessor;
}

uci::type::SensorFunctionalProcessingEnum& SensorFunctionalityType::getProcessing() {
  return *processing_Accessor;
}

uci::type::SensorFunctionalityType& SensorFunctionalityType::setProcessing(const uci::type::SensorFunctionalProcessingEnum& accessor) {
  if (&accessor != processing_Accessor.get()) {
    processing_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::SensorFunctionalityType& SensorFunctionalityType::setProcessing(uci::type::SensorFunctionalProcessingEnum::EnumerationItem value) {
  processing_Accessor->setValue(value);
  return *this;
}


std::unique_ptr<SensorFunctionalityType> SensorFunctionalityType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::sensorFunctionalityType : type};
  return (requestedType == uci::type::accessorType::sensorFunctionalityType) ? boost::make_unique<SensorFunctionalityType>() : nullptr;
}

/**  */
namespace SensorFunctionalityType_Names {

constexpr const char* Extern_Type_Name{"SensorFunctionalityType"};
constexpr const char* Collections_Name{"Collections"};
constexpr const char* Processing_Name{"Processing"};

} // namespace SensorFunctionalityType_Names

void SensorFunctionalityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SensorFunctionalityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SensorFunctionalityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SensorFunctionalityType_Names::Collections_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getCollections().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + SensorFunctionalityType_Names::Processing_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getProcessing().setValueFromName(*value);
      }
    }
  }
}

std::string SensorFunctionalityType::serialize(const uci::type::SensorFunctionalityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SensorFunctionalityType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SensorFunctionalityType_Names::Extern_Type_Name);
  }
  SensorFunctionalCollectionsEnum::serialize(accessor.getCollections(), node, SensorFunctionalityType_Names::Collections_Name, false);
  SensorFunctionalProcessingEnum::serialize(accessor.getProcessing(), node, SensorFunctionalityType_Names::Processing_Name, false);
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

uci::type::SensorFunctionalityType& SensorFunctionalityType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SensorFunctionalityType>().release());
}

uci::type::SensorFunctionalityType& SensorFunctionalityType::create(const uci::type::SensorFunctionalityType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SensorFunctionalityType> newAccessor{boost::make_unique<asb_uci::type::SensorFunctionalityType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SensorFunctionalityType::destroy(uci::type::SensorFunctionalityType& accessor) {
  delete dynamic_cast<asb_uci::type::SensorFunctionalityType*>(&accessor);
}

} // namespace type

} // namespace uci

