/** @file HRR_OptionsType.cpp
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

#include "../../../include/asb_uci/type/HRR_OptionsType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/HRR_ChipSizeType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/HRR_ChipSizeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/HRR_OptionsType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

HRR_OptionsType::HRR_OptionsType() = default;

HRR_OptionsType::~HRR_OptionsType() = default;

void HRR_OptionsType::copy(const uci::type::HRR_OptionsType& accessor) {
  copyImpl(accessor, false);
}

void HRR_OptionsType::copyImpl(const uci::type::HRR_OptionsType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const HRR_OptionsType&>(accessor);
    if (accessorImpl.hasHRR_PeakScatterers()) {
      setHRR_PeakScatterers(accessorImpl.getHRR_PeakScatterers());
    } else {
      clearHRR_PeakScatterers();
    }
    if (accessorImpl.chipSize_Accessor) {
      setChipSize(*(accessorImpl.chipSize_Accessor));
    } else {
      chipSize_Accessor.reset();
    }
  }
}

void HRR_OptionsType::reset() noexcept {
  clearHRR_PeakScatterers();
  chipSize_Accessor.reset();
}

xs::UnsignedByte HRR_OptionsType::getHRR_PeakScatterers() const {
  if (hRR_PeakScatterers_Accessor) {
    return *hRR_PeakScatterers_Accessor;
  }
  throw uci::base::UCIException("Error in getHRR_PeakScatterers(): An attempt was made to get an optional field that was not enabled, call hasHRR_PeakScatterers() to determine if it is safe to call getHRR_PeakScatterers()");
}

uci::type::HRR_OptionsType& HRR_OptionsType::setHRR_PeakScatterers(xs::UnsignedByte value) {
  hRR_PeakScatterers_Accessor = value;
  return *this;
}

bool HRR_OptionsType::hasHRR_PeakScatterers() const noexcept {
  return hRR_PeakScatterers_Accessor.has_value();
}

uci::type::HRR_OptionsType& HRR_OptionsType::clearHRR_PeakScatterers() noexcept {
  hRR_PeakScatterers_Accessor.reset();
  return *this;
}

uci::type::HRR_ChipSizeType& HRR_OptionsType::getChipSize_() const {
  if (chipSize_Accessor) {
    return *chipSize_Accessor;
  }
  throw uci::base::UCIException("Error in getChipSize(): An attempt was made to get an optional field that was not enabled, call hasChipSize() to determine if it is safe to call getChipSize()");
}

const uci::type::HRR_ChipSizeType& HRR_OptionsType::getChipSize() const {
  return getChipSize_();
}

uci::type::HRR_ChipSizeType& HRR_OptionsType::getChipSize() {
  return getChipSize_();
}

uci::type::HRR_OptionsType& HRR_OptionsType::setChipSize(const uci::type::HRR_ChipSizeType& accessor) {
  enableChipSize();
  if (&accessor != chipSize_Accessor.get()) {
    chipSize_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool HRR_OptionsType::hasChipSize() const noexcept {
  return static_cast<bool>(chipSize_Accessor);
}

uci::type::HRR_ChipSizeType& HRR_OptionsType::enableChipSize(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::hRR_ChipSizeType : type};
  if ((!chipSize_Accessor) || (chipSize_Accessor->getAccessorType() != requestedType)) {
    chipSize_Accessor = HRR_ChipSizeType::create(requestedType);
    if (!chipSize_Accessor) {
      throw uci::base::UCIException("Error in enableChipSize(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *chipSize_Accessor;
}

uci::type::HRR_OptionsType& HRR_OptionsType::clearChipSize() noexcept {
  chipSize_Accessor.reset();
  return *this;
}

std::unique_ptr<HRR_OptionsType> HRR_OptionsType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::hRR_OptionsType : type};
  return (requestedType == uci::type::accessorType::hRR_OptionsType) ? boost::make_unique<HRR_OptionsType>() : nullptr;
}

/**  */
namespace HRR_OptionsType_Names {

constexpr const char* Extern_Type_Name{"HRR_OptionsType"};
constexpr const char* HRR_PeakScatterers_Name{"HRR_PeakScatterers"};
constexpr const char* ChipSize_Name{"ChipSize"};

} // namespace HRR_OptionsType_Names

void HRR_OptionsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::HRR_OptionsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = HRR_OptionsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + HRR_OptionsType_Names::HRR_PeakScatterers_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setHRR_PeakScatterers(asb_uci::util::SerializationHelpers::deserializeUnsignedByte(*value));
      }
    } else if (valueType.first == nsPrefix + HRR_OptionsType_Names::ChipSize_Name) {
      HRR_ChipSizeType::deserialize(valueType.second, accessor.enableChipSize(), nodeName, nsPrefix);
    }
  }
}

std::string HRR_OptionsType::serialize(const uci::type::HRR_OptionsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? HRR_OptionsType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, HRR_OptionsType_Names::Extern_Type_Name);
  }
  if (accessor.hasHRR_PeakScatterers()) {
    asb_uci::util::SerializationHelpers::serializeUnsignedByte(accessor.getHRR_PeakScatterers(), node, HRR_OptionsType_Names::HRR_PeakScatterers_Name);
  }
  if (accessor.hasChipSize()) {
    HRR_ChipSizeType::serialize(accessor.getChipSize(), node, HRR_OptionsType_Names::ChipSize_Name);
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

uci::type::HRR_OptionsType& HRR_OptionsType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::HRR_OptionsType>().release());
}

uci::type::HRR_OptionsType& HRR_OptionsType::create(const uci::type::HRR_OptionsType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::HRR_OptionsType> newAccessor{boost::make_unique<asb_uci::type::HRR_OptionsType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void HRR_OptionsType::destroy(uci::type::HRR_OptionsType& accessor) {
  delete dynamic_cast<asb_uci::type::HRR_OptionsType*>(&accessor);
}

} // namespace type

} // namespace uci

