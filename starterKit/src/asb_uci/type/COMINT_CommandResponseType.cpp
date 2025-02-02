/** @file COMINT_CommandResponseType.cpp
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

#include "../../../include/asb_uci/type/COMINT_CommandResponseType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/COMINT_SubCapabilityEnum.h"
#include "../../../include/asb_uci/type/ProductOutputCommandBasicType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/COMINT_CommandResponseType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/COMINT_SubCapabilityEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductOutputCommandBasicType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

COMINT_CommandResponseType::COMINT_CommandResponseType()
  : subCapability_Accessor{boost::make_unique<COMINT_SubCapabilityEnum>()},
    productOutput_Accessor{boost::make_unique<ProductOutput>(0, SIZE_MAX)} {
}

COMINT_CommandResponseType::~COMINT_CommandResponseType() = default;

void COMINT_CommandResponseType::copy(const uci::type::COMINT_CommandResponseType& accessor) {
  copyImpl(accessor, false);
}

void COMINT_CommandResponseType::copyImpl(const uci::type::COMINT_CommandResponseType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const COMINT_CommandResponseType&>(accessor);
    setSubCapability(*(accessorImpl.subCapability_Accessor));
    setProductOutput(*(accessorImpl.productOutput_Accessor));
  }
}

void COMINT_CommandResponseType::reset() noexcept {
  subCapability_Accessor->reset();
  productOutput_Accessor->reset();
}

const uci::type::COMINT_SubCapabilityEnum& COMINT_CommandResponseType::getSubCapability() const {
  return *subCapability_Accessor;
}

uci::type::COMINT_SubCapabilityEnum& COMINT_CommandResponseType::getSubCapability() {
  return *subCapability_Accessor;
}

uci::type::COMINT_CommandResponseType& COMINT_CommandResponseType::setSubCapability(const uci::type::COMINT_SubCapabilityEnum& accessor) {
  if (&accessor != subCapability_Accessor.get()) {
    subCapability_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::COMINT_CommandResponseType& COMINT_CommandResponseType::setSubCapability(uci::type::COMINT_SubCapabilityEnum::EnumerationItem value) {
  subCapability_Accessor->setValue(value);
  return *this;
}


const uci::type::COMINT_CommandResponseType::ProductOutput& COMINT_CommandResponseType::getProductOutput() const {
  return *productOutput_Accessor;
}

uci::type::COMINT_CommandResponseType::ProductOutput& COMINT_CommandResponseType::getProductOutput() {
  return *productOutput_Accessor;
}

uci::type::COMINT_CommandResponseType& COMINT_CommandResponseType::setProductOutput(const uci::type::COMINT_CommandResponseType::ProductOutput& accessor) {
  if (&accessor != productOutput_Accessor.get()) {
    productOutput_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<COMINT_CommandResponseType> COMINT_CommandResponseType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::cOMINT_CommandResponseType : type};
  return (requestedType == uci::type::accessorType::cOMINT_CommandResponseType) ? boost::make_unique<COMINT_CommandResponseType>() : nullptr;
}

/**  */
namespace COMINT_CommandResponseType_Names {

constexpr const char* Extern_Type_Name{"COMINT_CommandResponseType"};
constexpr const char* SubCapability_Name{"SubCapability"};
constexpr const char* ProductOutput_Name{"ProductOutput"};

} // namespace COMINT_CommandResponseType_Names

void COMINT_CommandResponseType::deserialize(const boost::property_tree::ptree& propTree, uci::type::COMINT_CommandResponseType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = COMINT_CommandResponseType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + COMINT_CommandResponseType_Names::SubCapability_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getSubCapability().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + COMINT_CommandResponseType_Names::ProductOutput_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::COMINT_CommandResponseType::ProductOutput& boundedList = accessor.getProductOutput();
        const uci::type::COMINT_CommandResponseType::ProductOutput::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1, asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix));
        asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string COMINT_CommandResponseType::serialize(const uci::type::COMINT_CommandResponseType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? COMINT_CommandResponseType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, COMINT_CommandResponseType_Names::Extern_Type_Name);
  }
  COMINT_SubCapabilityEnum::serialize(accessor.getSubCapability(), node, COMINT_CommandResponseType_Names::SubCapability_Name, false);
  {
    const uci::type::COMINT_CommandResponseType::ProductOutput& boundedList = accessor.getProductOutput();
    for (uci::type::COMINT_CommandResponseType::ProductOutput::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ProductOutputCommandBasicType::serialize(boundedList.at(i), node, COMINT_CommandResponseType_Names::ProductOutput_Name);
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

uci::type::COMINT_CommandResponseType& COMINT_CommandResponseType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::COMINT_CommandResponseType>().release());
}

uci::type::COMINT_CommandResponseType& COMINT_CommandResponseType::create(const uci::type::COMINT_CommandResponseType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::COMINT_CommandResponseType> newAccessor{boost::make_unique<asb_uci::type::COMINT_CommandResponseType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void COMINT_CommandResponseType::destroy(uci::type::COMINT_CommandResponseType& accessor) {
  delete dynamic_cast<asb_uci::type::COMINT_CommandResponseType*>(&accessor);
}

} // namespace type

} // namespace uci

