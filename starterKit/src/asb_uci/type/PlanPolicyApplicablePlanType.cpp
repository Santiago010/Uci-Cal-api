/** @file PlanPolicyApplicablePlanType.cpp
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

#include "../../../include/asb_uci/type/PlanPolicyApplicablePlanType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/AutonomousPlanningConstrainingPlansType.h"
#include "../../../include/asb_uci/type/AutonomousPlanningOtherSystemConstrainingPlansType.h"
#include "../../../include/asb_uci/type/PlanPartsType.h"
#include "../../../include/asb_uci/type/PlanTypeEnum.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AutonomousPlanningConstrainingPlansType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AutonomousPlanningOtherSystemConstrainingPlansType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanPartsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanPolicyApplicablePlanType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanTypeEnum.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PlanPolicyApplicablePlanType::PlanPolicyApplicablePlanType()
  : planType_Accessor{boost::make_unique<PlanTypeEnum>()},
    otherSystemConstrainingPlans_Accessor{boost::make_unique<OtherSystemConstrainingPlans>(0, SIZE_MAX)} {
}

PlanPolicyApplicablePlanType::~PlanPolicyApplicablePlanType() = default;

void PlanPolicyApplicablePlanType::copy(const uci::type::PlanPolicyApplicablePlanType& accessor) {
  copyImpl(accessor, false);
}

void PlanPolicyApplicablePlanType::copyImpl(const uci::type::PlanPolicyApplicablePlanType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PlanPolicyApplicablePlanType&>(accessor);
    setPlanType(*(accessorImpl.planType_Accessor));
    if (accessorImpl.planParts_Accessor) {
      setPlanParts(*(accessorImpl.planParts_Accessor));
    } else {
      planParts_Accessor.reset();
    }
    if (accessorImpl.constrainingPlans_Accessor) {
      setConstrainingPlans(*(accessorImpl.constrainingPlans_Accessor));
    } else {
      constrainingPlans_Accessor.reset();
    }
    setOtherSystemConstrainingPlans(*(accessorImpl.otherSystemConstrainingPlans_Accessor));
  }
}

void PlanPolicyApplicablePlanType::reset() noexcept {
  planType_Accessor->reset();
  planParts_Accessor.reset();
  constrainingPlans_Accessor.reset();
  otherSystemConstrainingPlans_Accessor->reset();
}

const uci::type::PlanTypeEnum& PlanPolicyApplicablePlanType::getPlanType() const {
  return *planType_Accessor;
}

uci::type::PlanTypeEnum& PlanPolicyApplicablePlanType::getPlanType() {
  return *planType_Accessor;
}

uci::type::PlanPolicyApplicablePlanType& PlanPolicyApplicablePlanType::setPlanType(const uci::type::PlanTypeEnum& accessor) {
  if (&accessor != planType_Accessor.get()) {
    planType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::PlanPolicyApplicablePlanType& PlanPolicyApplicablePlanType::setPlanType(uci::type::PlanTypeEnum::EnumerationItem value) {
  planType_Accessor->setValue(value);
  return *this;
}


uci::type::PlanPartsType& PlanPolicyApplicablePlanType::getPlanParts_() const {
  if (planParts_Accessor) {
    return *planParts_Accessor;
  }
  throw uci::base::UCIException("Error in getPlanParts(): An attempt was made to get an optional field that was not enabled, call hasPlanParts() to determine if it is safe to call getPlanParts()");
}

const uci::type::PlanPartsType& PlanPolicyApplicablePlanType::getPlanParts() const {
  return getPlanParts_();
}

uci::type::PlanPartsType& PlanPolicyApplicablePlanType::getPlanParts() {
  return getPlanParts_();
}

uci::type::PlanPolicyApplicablePlanType& PlanPolicyApplicablePlanType::setPlanParts(const uci::type::PlanPartsType& accessor) {
  enablePlanParts(accessor.getAccessorType());
  if (&accessor != planParts_Accessor.get()) {
    planParts_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool PlanPolicyApplicablePlanType::hasPlanParts() const noexcept {
  return static_cast<bool>(planParts_Accessor);
}

uci::type::PlanPartsType& PlanPolicyApplicablePlanType::enablePlanParts(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::planPartsType : type};
  if ((!planParts_Accessor) || (planParts_Accessor->getAccessorType() != requestedType)) {
    planParts_Accessor = PlanPartsType::create(requestedType);
    if (!planParts_Accessor) {
      throw uci::base::UCIException("Error in enablePlanParts(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *planParts_Accessor;
}

uci::type::PlanPolicyApplicablePlanType& PlanPolicyApplicablePlanType::clearPlanParts() noexcept {
  planParts_Accessor.reset();
  return *this;
}

uci::type::AutonomousPlanningConstrainingPlansType& PlanPolicyApplicablePlanType::getConstrainingPlans_() const {
  if (constrainingPlans_Accessor) {
    return *constrainingPlans_Accessor;
  }
  throw uci::base::UCIException("Error in getConstrainingPlans(): An attempt was made to get an optional field that was not enabled, call hasConstrainingPlans() to determine if it is safe to call getConstrainingPlans()");
}

const uci::type::AutonomousPlanningConstrainingPlansType& PlanPolicyApplicablePlanType::getConstrainingPlans() const {
  return getConstrainingPlans_();
}

uci::type::AutonomousPlanningConstrainingPlansType& PlanPolicyApplicablePlanType::getConstrainingPlans() {
  return getConstrainingPlans_();
}

uci::type::PlanPolicyApplicablePlanType& PlanPolicyApplicablePlanType::setConstrainingPlans(const uci::type::AutonomousPlanningConstrainingPlansType& accessor) {
  enableConstrainingPlans(accessor.getAccessorType());
  if (&accessor != constrainingPlans_Accessor.get()) {
    constrainingPlans_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool PlanPolicyApplicablePlanType::hasConstrainingPlans() const noexcept {
  return static_cast<bool>(constrainingPlans_Accessor);
}

uci::type::AutonomousPlanningConstrainingPlansType& PlanPolicyApplicablePlanType::enableConstrainingPlans(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::autonomousPlanningConstrainingPlansType : type};
  if ((!constrainingPlans_Accessor) || (constrainingPlans_Accessor->getAccessorType() != requestedType)) {
    constrainingPlans_Accessor = AutonomousPlanningConstrainingPlansType::create(requestedType);
    if (!constrainingPlans_Accessor) {
      throw uci::base::UCIException("Error in enableConstrainingPlans(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *constrainingPlans_Accessor;
}

uci::type::PlanPolicyApplicablePlanType& PlanPolicyApplicablePlanType::clearConstrainingPlans() noexcept {
  constrainingPlans_Accessor.reset();
  return *this;
}

const uci::type::PlanPolicyApplicablePlanType::OtherSystemConstrainingPlans& PlanPolicyApplicablePlanType::getOtherSystemConstrainingPlans() const {
  return *otherSystemConstrainingPlans_Accessor;
}

uci::type::PlanPolicyApplicablePlanType::OtherSystemConstrainingPlans& PlanPolicyApplicablePlanType::getOtherSystemConstrainingPlans() {
  return *otherSystemConstrainingPlans_Accessor;
}

uci::type::PlanPolicyApplicablePlanType& PlanPolicyApplicablePlanType::setOtherSystemConstrainingPlans(const uci::type::PlanPolicyApplicablePlanType::OtherSystemConstrainingPlans& accessor) {
  if (&accessor != otherSystemConstrainingPlans_Accessor.get()) {
    otherSystemConstrainingPlans_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<PlanPolicyApplicablePlanType> PlanPolicyApplicablePlanType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::planPolicyApplicablePlanType : type};
  return (requestedType == uci::type::accessorType::planPolicyApplicablePlanType) ? boost::make_unique<PlanPolicyApplicablePlanType>() : nullptr;
}

/**  */
namespace PlanPolicyApplicablePlanType_Names {

constexpr const char* Extern_Type_Name{"PlanPolicyApplicablePlanType"};
constexpr const char* PlanType_Name{"PlanType"};
constexpr const char* PlanParts_Name{"PlanParts"};
constexpr const char* ConstrainingPlans_Name{"ConstrainingPlans"};
constexpr const char* OtherSystemConstrainingPlans_Name{"OtherSystemConstrainingPlans"};

} // namespace PlanPolicyApplicablePlanType_Names

void PlanPolicyApplicablePlanType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PlanPolicyApplicablePlanType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PlanPolicyApplicablePlanType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PlanPolicyApplicablePlanType_Names::PlanType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getPlanType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + PlanPolicyApplicablePlanType_Names::PlanParts_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enablePlanParts(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PlanPolicyApplicablePlanType_Names::ConstrainingPlans_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableConstrainingPlans(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PlanPolicyApplicablePlanType_Names::OtherSystemConstrainingPlans_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PlanPolicyApplicablePlanType::OtherSystemConstrainingPlans& boundedList = accessor.getOtherSystemConstrainingPlans();
        const uci::type::PlanPolicyApplicablePlanType::OtherSystemConstrainingPlans::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::AutonomousPlanningOtherSystemConstrainingPlansType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string PlanPolicyApplicablePlanType::serialize(const uci::type::PlanPolicyApplicablePlanType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PlanPolicyApplicablePlanType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PlanPolicyApplicablePlanType_Names::Extern_Type_Name);
  }
  PlanTypeEnum::serialize(accessor.getPlanType(), node, PlanPolicyApplicablePlanType_Names::PlanType_Name, false);
  if (accessor.hasPlanParts()) {
    PlanPartsType::serialize(accessor.getPlanParts(), node, PlanPolicyApplicablePlanType_Names::PlanParts_Name);
  }
  if (accessor.hasConstrainingPlans()) {
    AutonomousPlanningConstrainingPlansType::serialize(accessor.getConstrainingPlans(), node, PlanPolicyApplicablePlanType_Names::ConstrainingPlans_Name);
  }
  {
    const uci::type::PlanPolicyApplicablePlanType::OtherSystemConstrainingPlans& boundedList = accessor.getOtherSystemConstrainingPlans();
    for (uci::type::PlanPolicyApplicablePlanType::OtherSystemConstrainingPlans::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::AutonomousPlanningOtherSystemConstrainingPlansType::serialize(boundedList.at(i), node, PlanPolicyApplicablePlanType_Names::OtherSystemConstrainingPlans_Name);
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

uci::type::PlanPolicyApplicablePlanType& PlanPolicyApplicablePlanType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PlanPolicyApplicablePlanType>().release());
}

uci::type::PlanPolicyApplicablePlanType& PlanPolicyApplicablePlanType::create(const uci::type::PlanPolicyApplicablePlanType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PlanPolicyApplicablePlanType> newAccessor{boost::make_unique<asb_uci::type::PlanPolicyApplicablePlanType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PlanPolicyApplicablePlanType::destroy(uci::type::PlanPolicyApplicablePlanType& accessor) {
  delete dynamic_cast<asb_uci::type::PlanPolicyApplicablePlanType*>(&accessor);
}

} // namespace type

} // namespace uci

