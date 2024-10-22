/** @file EffectPlanConstraintType.cpp
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

#include "../../../include/asb_uci/type/EffectPlanConstraintType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/EffectPlanID_Type.h"
#include "../../../include/asb_uci/type/EffectTypeEnum.h"
#include "../../../include/asb_uci/type/PlanChangeableConstraintsEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EffectPlanConstraintType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EffectPlanID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EffectTypeEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanChangeableConstraintsEnum.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

EffectPlanConstraintType::EffectPlanConstraintType()
  : changeableAllocations_Accessor{boost::make_unique<PlanChangeableConstraintsEnum>()},
    effectType_Accessor{boost::make_unique<EffectType>(0, 47)} {
}

EffectPlanConstraintType::~EffectPlanConstraintType() = default;

void EffectPlanConstraintType::copy(const uci::type::EffectPlanConstraintType& accessor) {
  copyImpl(accessor, false);
}

void EffectPlanConstraintType::copyImpl(const uci::type::EffectPlanConstraintType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const EffectPlanConstraintType&>(accessor);
    if (accessorImpl.effectPlanID_Accessor) {
      setEffectPlanID(*(accessorImpl.effectPlanID_Accessor));
    } else {
      effectPlanID_Accessor.reset();
    }
    setChangeableAllocations(*(accessorImpl.changeableAllocations_Accessor));
    setEffectType(*(accessorImpl.effectType_Accessor));
  }
}

void EffectPlanConstraintType::reset() noexcept {
  effectPlanID_Accessor.reset();
  changeableAllocations_Accessor->reset();
  effectType_Accessor->reset();
}

uci::type::EffectPlanID_Type& EffectPlanConstraintType::getEffectPlanID_() const {
  if (effectPlanID_Accessor) {
    return *effectPlanID_Accessor;
  }
  throw uci::base::UCIException("Error in getEffectPlanID(): An attempt was made to get an optional field that was not enabled, call hasEffectPlanID() to determine if it is safe to call getEffectPlanID()");
}

const uci::type::EffectPlanID_Type& EffectPlanConstraintType::getEffectPlanID() const {
  return getEffectPlanID_();
}

uci::type::EffectPlanID_Type& EffectPlanConstraintType::getEffectPlanID() {
  return getEffectPlanID_();
}

uci::type::EffectPlanConstraintType& EffectPlanConstraintType::setEffectPlanID(const uci::type::EffectPlanID_Type& accessor) {
  enableEffectPlanID();
  if (&accessor != effectPlanID_Accessor.get()) {
    effectPlanID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool EffectPlanConstraintType::hasEffectPlanID() const noexcept {
  return static_cast<bool>(effectPlanID_Accessor);
}

uci::type::EffectPlanID_Type& EffectPlanConstraintType::enableEffectPlanID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::effectPlanID_Type : type};
  if ((!effectPlanID_Accessor) || (effectPlanID_Accessor->getAccessorType() != requestedType)) {
    effectPlanID_Accessor = EffectPlanID_Type::create(requestedType);
    if (!effectPlanID_Accessor) {
      throw uci::base::UCIException("Error in enableEffectPlanID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *effectPlanID_Accessor;
}

uci::type::EffectPlanConstraintType& EffectPlanConstraintType::clearEffectPlanID() noexcept {
  effectPlanID_Accessor.reset();
  return *this;
}

const uci::type::PlanChangeableConstraintsEnum& EffectPlanConstraintType::getChangeableAllocations() const {
  return *changeableAllocations_Accessor;
}

uci::type::PlanChangeableConstraintsEnum& EffectPlanConstraintType::getChangeableAllocations() {
  return *changeableAllocations_Accessor;
}

uci::type::EffectPlanConstraintType& EffectPlanConstraintType::setChangeableAllocations(const uci::type::PlanChangeableConstraintsEnum& accessor) {
  if (&accessor != changeableAllocations_Accessor.get()) {
    changeableAllocations_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::EffectPlanConstraintType& EffectPlanConstraintType::setChangeableAllocations(uci::type::PlanChangeableConstraintsEnum::EnumerationItem value) {
  changeableAllocations_Accessor->setValue(value);
  return *this;
}


const uci::type::EffectPlanConstraintType::EffectType& EffectPlanConstraintType::getEffectType() const {
  return *effectType_Accessor;
}

uci::type::EffectPlanConstraintType::EffectType& EffectPlanConstraintType::getEffectType() {
  return *effectType_Accessor;
}

uci::type::EffectPlanConstraintType& EffectPlanConstraintType::setEffectType(const uci::type::EffectPlanConstraintType::EffectType& accessor) {
  if (&accessor != effectType_Accessor.get()) {
    effectType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<EffectPlanConstraintType> EffectPlanConstraintType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::effectPlanConstraintType : type};
  return (requestedType == uci::type::accessorType::effectPlanConstraintType) ? boost::make_unique<EffectPlanConstraintType>() : nullptr;
}

/**  */
namespace EffectPlanConstraintType_Names {

constexpr const char* Extern_Type_Name{"EffectPlanConstraintType"};
constexpr const char* EffectPlanID_Name{"EffectPlanID"};
constexpr const char* ChangeableAllocations_Name{"ChangeableAllocations"};
constexpr const char* EffectType_Name{"EffectType"};

} // namespace EffectPlanConstraintType_Names

void EffectPlanConstraintType::deserialize(const boost::property_tree::ptree& propTree, uci::type::EffectPlanConstraintType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EffectPlanConstraintType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + EffectPlanConstraintType_Names::EffectPlanID_Name) {
      EffectPlanID_Type::deserialize(valueType.second, accessor.enableEffectPlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EffectPlanConstraintType_Names::ChangeableAllocations_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getChangeableAllocations().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + EffectPlanConstraintType_Names::EffectType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::EffectPlanConstraintType::EffectType& boundedList = accessor.getEffectType();
        const uci::type::EffectPlanConstraintType::EffectType::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    }
  }
}

std::string EffectPlanConstraintType::serialize(const uci::type::EffectPlanConstraintType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? EffectPlanConstraintType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, EffectPlanConstraintType_Names::Extern_Type_Name);
  }
  if (accessor.hasEffectPlanID()) {
    EffectPlanID_Type::serialize(accessor.getEffectPlanID(), node, EffectPlanConstraintType_Names::EffectPlanID_Name);
  }
  PlanChangeableConstraintsEnum::serialize(accessor.getChangeableAllocations(), node, EffectPlanConstraintType_Names::ChangeableAllocations_Name, false);
  {
    const uci::type::EffectPlanConstraintType::EffectType& boundedList = accessor.getEffectType();
    for (uci::type::EffectPlanConstraintType::EffectType::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      EffectTypeEnum::serialize(boundedList.at(i), node, EffectPlanConstraintType_Names::EffectType_Name, false);
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

uci::type::EffectPlanConstraintType& EffectPlanConstraintType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::EffectPlanConstraintType>().release());
}

uci::type::EffectPlanConstraintType& EffectPlanConstraintType::create(const uci::type::EffectPlanConstraintType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::EffectPlanConstraintType> newAccessor{boost::make_unique<asb_uci::type::EffectPlanConstraintType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void EffectPlanConstraintType::destroy(uci::type::EffectPlanConstraintType& accessor) {
  delete dynamic_cast<asb_uci::type::EffectPlanConstraintType*>(&accessor);
}

} // namespace type

} // namespace uci

