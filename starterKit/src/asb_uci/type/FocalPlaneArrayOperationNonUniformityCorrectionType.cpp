/** @file FocalPlaneArrayOperationNonUniformityCorrectionType.cpp
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

#include "../../../include/asb_uci/type/FocalPlaneArrayOperationNonUniformityCorrectionType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/FocalPlaneArrayNonUniformityCorrectionReferenceType.h"
#include "../../../include/asb_uci/type/UnsignedIntegerMinMaxType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/FocalPlaneArrayNonUniformityCorrectionReferenceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/FocalPlaneArrayOperationNonUniformityCorrectionType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/UnsignedIntegerMinMaxType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

FocalPlaneArrayOperationNonUniformityCorrectionType::FocalPlaneArrayOperationNonUniformityCorrectionType()
  : nUC_ReferenceOffsetSettings_Accessor{boost::make_unique<NUC_ReferenceOffsetSettings>(0, SIZE_MAX)} {
}

FocalPlaneArrayOperationNonUniformityCorrectionType::~FocalPlaneArrayOperationNonUniformityCorrectionType() = default;

void FocalPlaneArrayOperationNonUniformityCorrectionType::copy(const uci::type::FocalPlaneArrayOperationNonUniformityCorrectionType& accessor) {
  copyImpl(accessor, false);
}

void FocalPlaneArrayOperationNonUniformityCorrectionType::copyImpl(const uci::type::FocalPlaneArrayOperationNonUniformityCorrectionType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const FocalPlaneArrayOperationNonUniformityCorrectionType&>(accessor);
    if (accessorImpl.nUC_TablesSettings_Accessor) {
      setNUC_TablesSettings(*(accessorImpl.nUC_TablesSettings_Accessor));
    } else {
      nUC_TablesSettings_Accessor.reset();
    }
    setNUC_ReferenceOffsetSettings(*(accessorImpl.nUC_ReferenceOffsetSettings_Accessor));
  }
}

void FocalPlaneArrayOperationNonUniformityCorrectionType::reset() noexcept {
  nUC_TablesSettings_Accessor.reset();
  nUC_ReferenceOffsetSettings_Accessor->reset();
}

uci::type::UnsignedIntegerMinMaxType& FocalPlaneArrayOperationNonUniformityCorrectionType::getNUC_TablesSettings_() const {
  if (nUC_TablesSettings_Accessor) {
    return *nUC_TablesSettings_Accessor;
  }
  throw uci::base::UCIException("Error in getNUC_TablesSettings(): An attempt was made to get an optional field that was not enabled, call hasNUC_TablesSettings() to determine if it is safe to call getNUC_TablesSettings()");
}

const uci::type::UnsignedIntegerMinMaxType& FocalPlaneArrayOperationNonUniformityCorrectionType::getNUC_TablesSettings() const {
  return getNUC_TablesSettings_();
}

uci::type::UnsignedIntegerMinMaxType& FocalPlaneArrayOperationNonUniformityCorrectionType::getNUC_TablesSettings() {
  return getNUC_TablesSettings_();
}

uci::type::FocalPlaneArrayOperationNonUniformityCorrectionType& FocalPlaneArrayOperationNonUniformityCorrectionType::setNUC_TablesSettings(const uci::type::UnsignedIntegerMinMaxType& accessor) {
  enableNUC_TablesSettings(accessor.getAccessorType());
  if (&accessor != nUC_TablesSettings_Accessor.get()) {
    nUC_TablesSettings_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool FocalPlaneArrayOperationNonUniformityCorrectionType::hasNUC_TablesSettings() const noexcept {
  return static_cast<bool>(nUC_TablesSettings_Accessor);
}

uci::type::UnsignedIntegerMinMaxType& FocalPlaneArrayOperationNonUniformityCorrectionType::enableNUC_TablesSettings(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::unsignedIntegerMinMaxType : type};
  if ((!nUC_TablesSettings_Accessor) || (nUC_TablesSettings_Accessor->getAccessorType() != requestedType)) {
    nUC_TablesSettings_Accessor = UnsignedIntegerMinMaxType::create(requestedType);
    if (!nUC_TablesSettings_Accessor) {
      throw uci::base::UCIException("Error in enableNUC_TablesSettings(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *nUC_TablesSettings_Accessor;
}

uci::type::FocalPlaneArrayOperationNonUniformityCorrectionType& FocalPlaneArrayOperationNonUniformityCorrectionType::clearNUC_TablesSettings() noexcept {
  nUC_TablesSettings_Accessor.reset();
  return *this;
}

const uci::type::FocalPlaneArrayOperationNonUniformityCorrectionType::NUC_ReferenceOffsetSettings& FocalPlaneArrayOperationNonUniformityCorrectionType::getNUC_ReferenceOffsetSettings() const {
  return *nUC_ReferenceOffsetSettings_Accessor;
}

uci::type::FocalPlaneArrayOperationNonUniformityCorrectionType::NUC_ReferenceOffsetSettings& FocalPlaneArrayOperationNonUniformityCorrectionType::getNUC_ReferenceOffsetSettings() {
  return *nUC_ReferenceOffsetSettings_Accessor;
}

uci::type::FocalPlaneArrayOperationNonUniformityCorrectionType& FocalPlaneArrayOperationNonUniformityCorrectionType::setNUC_ReferenceOffsetSettings(const uci::type::FocalPlaneArrayOperationNonUniformityCorrectionType::NUC_ReferenceOffsetSettings& accessor) {
  if (&accessor != nUC_ReferenceOffsetSettings_Accessor.get()) {
    nUC_ReferenceOffsetSettings_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<FocalPlaneArrayOperationNonUniformityCorrectionType> FocalPlaneArrayOperationNonUniformityCorrectionType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::focalPlaneArrayOperationNonUniformityCorrectionType : type};
  return (requestedType == uci::type::accessorType::focalPlaneArrayOperationNonUniformityCorrectionType) ? boost::make_unique<FocalPlaneArrayOperationNonUniformityCorrectionType>() : nullptr;
}

/**  */
namespace FocalPlaneArrayOperationNonUniformityCorrectionType_Names {

constexpr const char* Extern_Type_Name{"FocalPlaneArrayOperationNonUniformityCorrectionType"};
constexpr const char* NUC_TablesSettings_Name{"NUC_TablesSettings"};
constexpr const char* NUC_ReferenceOffsetSettings_Name{"NUC_ReferenceOffsetSettings"};

} // namespace FocalPlaneArrayOperationNonUniformityCorrectionType_Names

void FocalPlaneArrayOperationNonUniformityCorrectionType::deserialize(const boost::property_tree::ptree& propTree, uci::type::FocalPlaneArrayOperationNonUniformityCorrectionType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = FocalPlaneArrayOperationNonUniformityCorrectionType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + FocalPlaneArrayOperationNonUniformityCorrectionType_Names::NUC_TablesSettings_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableNUC_TablesSettings(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + FocalPlaneArrayOperationNonUniformityCorrectionType_Names::NUC_ReferenceOffsetSettings_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::FocalPlaneArrayOperationNonUniformityCorrectionType::NUC_ReferenceOffsetSettings& boundedList = accessor.getNUC_ReferenceOffsetSettings();
        const uci::type::FocalPlaneArrayOperationNonUniformityCorrectionType::NUC_ReferenceOffsetSettings::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::FocalPlaneArrayNonUniformityCorrectionReferenceType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string FocalPlaneArrayOperationNonUniformityCorrectionType::serialize(const uci::type::FocalPlaneArrayOperationNonUniformityCorrectionType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? FocalPlaneArrayOperationNonUniformityCorrectionType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, FocalPlaneArrayOperationNonUniformityCorrectionType_Names::Extern_Type_Name);
  }
  if (accessor.hasNUC_TablesSettings()) {
    UnsignedIntegerMinMaxType::serialize(accessor.getNUC_TablesSettings(), node, FocalPlaneArrayOperationNonUniformityCorrectionType_Names::NUC_TablesSettings_Name);
  }
  {
    const uci::type::FocalPlaneArrayOperationNonUniformityCorrectionType::NUC_ReferenceOffsetSettings& boundedList = accessor.getNUC_ReferenceOffsetSettings();
    for (uci::type::FocalPlaneArrayOperationNonUniformityCorrectionType::NUC_ReferenceOffsetSettings::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::FocalPlaneArrayNonUniformityCorrectionReferenceType::serialize(boundedList.at(i), node, FocalPlaneArrayOperationNonUniformityCorrectionType_Names::NUC_ReferenceOffsetSettings_Name);
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

uci::type::FocalPlaneArrayOperationNonUniformityCorrectionType& FocalPlaneArrayOperationNonUniformityCorrectionType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::FocalPlaneArrayOperationNonUniformityCorrectionType>().release());
}

uci::type::FocalPlaneArrayOperationNonUniformityCorrectionType& FocalPlaneArrayOperationNonUniformityCorrectionType::create(const uci::type::FocalPlaneArrayOperationNonUniformityCorrectionType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::FocalPlaneArrayOperationNonUniformityCorrectionType> newAccessor{boost::make_unique<asb_uci::type::FocalPlaneArrayOperationNonUniformityCorrectionType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void FocalPlaneArrayOperationNonUniformityCorrectionType::destroy(uci::type::FocalPlaneArrayOperationNonUniformityCorrectionType& accessor) {
  delete dynamic_cast<asb_uci::type::FocalPlaneArrayOperationNonUniformityCorrectionType*>(&accessor);
}

} // namespace type

} // namespace uci

