/** @file EffectPlanInvalidType.cpp
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

#include "../../../include/asb_uci/type/EffectPlanInvalidType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/EffectAllocationInvalidType.h"
#include "../../../include/asb_uci/type/EffectPlanID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EffectAllocationInvalidType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EffectPlanID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EffectPlanInvalidType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

EffectPlanInvalidType::EffectPlanInvalidType()
  : effectPlanID_Accessor{boost::make_unique<EffectPlanID_Type>()},
    invalidAllocation_Accessor{boost::make_unique<InvalidAllocation>(1, SIZE_MAX)} {
}

EffectPlanInvalidType::~EffectPlanInvalidType() = default;

void EffectPlanInvalidType::copy(const uci::type::EffectPlanInvalidType& accessor) {
  copyImpl(accessor, false);
}

void EffectPlanInvalidType::copyImpl(const uci::type::EffectPlanInvalidType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const EffectPlanInvalidType&>(accessor);
    setEffectPlanID(*(accessorImpl.effectPlanID_Accessor));
    setInvalidAllocation(*(accessorImpl.invalidAllocation_Accessor));
  }
}

void EffectPlanInvalidType::reset() noexcept {
  effectPlanID_Accessor->reset();
  invalidAllocation_Accessor->reset();
}

const uci::type::EffectPlanID_Type& EffectPlanInvalidType::getEffectPlanID() const {
  return *effectPlanID_Accessor;
}

uci::type::EffectPlanID_Type& EffectPlanInvalidType::getEffectPlanID() {
  return *effectPlanID_Accessor;
}

uci::type::EffectPlanInvalidType& EffectPlanInvalidType::setEffectPlanID(const uci::type::EffectPlanID_Type& accessor) {
  if (&accessor != effectPlanID_Accessor.get()) {
    effectPlanID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::EffectPlanInvalidType::InvalidAllocation& EffectPlanInvalidType::getInvalidAllocation() const {
  return *invalidAllocation_Accessor;
}

uci::type::EffectPlanInvalidType::InvalidAllocation& EffectPlanInvalidType::getInvalidAllocation() {
  return *invalidAllocation_Accessor;
}

uci::type::EffectPlanInvalidType& EffectPlanInvalidType::setInvalidAllocation(const uci::type::EffectPlanInvalidType::InvalidAllocation& accessor) {
  if (&accessor != invalidAllocation_Accessor.get()) {
    invalidAllocation_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<EffectPlanInvalidType> EffectPlanInvalidType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::effectPlanInvalidType : type};
  return (requestedType == uci::type::accessorType::effectPlanInvalidType) ? boost::make_unique<EffectPlanInvalidType>() : nullptr;
}

/**  */
namespace EffectPlanInvalidType_Names {

constexpr const char* Extern_Type_Name{"EffectPlanInvalidType"};
constexpr const char* EffectPlanID_Name{"EffectPlanID"};
constexpr const char* InvalidAllocation_Name{"InvalidAllocation"};

} // namespace EffectPlanInvalidType_Names

void EffectPlanInvalidType::deserialize(const boost::property_tree::ptree& propTree, uci::type::EffectPlanInvalidType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EffectPlanInvalidType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + EffectPlanInvalidType_Names::EffectPlanID_Name) {
      EffectPlanID_Type::deserialize(valueType.second, accessor.getEffectPlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EffectPlanInvalidType_Names::InvalidAllocation_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::EffectPlanInvalidType::InvalidAllocation& boundedList = accessor.getInvalidAllocation();
        const uci::type::EffectPlanInvalidType::InvalidAllocation::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::EffectAllocationInvalidType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string EffectPlanInvalidType::serialize(const uci::type::EffectPlanInvalidType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? EffectPlanInvalidType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, EffectPlanInvalidType_Names::Extern_Type_Name);
  }
  EffectPlanID_Type::serialize(accessor.getEffectPlanID(), node, EffectPlanInvalidType_Names::EffectPlanID_Name);
  {
    const uci::type::EffectPlanInvalidType::InvalidAllocation& boundedList = accessor.getInvalidAllocation();
    for (uci::type::EffectPlanInvalidType::InvalidAllocation::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::EffectAllocationInvalidType::serialize(boundedList.at(i), node, EffectPlanInvalidType_Names::InvalidAllocation_Name);
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

uci::type::EffectPlanInvalidType& EffectPlanInvalidType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::EffectPlanInvalidType>().release());
}

uci::type::EffectPlanInvalidType& EffectPlanInvalidType::create(const uci::type::EffectPlanInvalidType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::EffectPlanInvalidType> newAccessor{boost::make_unique<asb_uci::type::EffectPlanInvalidType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void EffectPlanInvalidType::destroy(uci::type::EffectPlanInvalidType& accessor) {
  delete dynamic_cast<asb_uci::type::EffectPlanInvalidType*>(&accessor);
}

} // namespace type

} // namespace uci

