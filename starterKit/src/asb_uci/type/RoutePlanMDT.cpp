/** @file RoutePlanMDT.cpp
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

#include "../../../include/asb_uci/type/RoutePlanMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/RoutePlanCommandID_ChoiceType.h"
#include "../../../include/asb_uci/type/RoutePlanID_Type.h"
#include "../../../include/asb_uci/type/RoutePlanInputsType.h"
#include "../../../include/asb_uci/type/RoutePlanType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RoutePlanCommandID_ChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RoutePlanID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RoutePlanInputsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RoutePlanMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RoutePlanType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

RoutePlanMDT::RoutePlanMDT()
  : routePlanID_Accessor{boost::make_unique<RoutePlanID_Type>()},
    plan_Accessor{boost::make_unique<RoutePlanType>()} {
}

RoutePlanMDT::~RoutePlanMDT() = default;

void RoutePlanMDT::copy(const uci::type::RoutePlanMDT& accessor) {
  copyImpl(accessor, false);
}

void RoutePlanMDT::copyImpl(const uci::type::RoutePlanMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const RoutePlanMDT&>(accessor);
    setRoutePlanID(*(accessorImpl.routePlanID_Accessor));
    if (accessorImpl.planCommandID_Accessor) {
      setPlanCommandID(*(accessorImpl.planCommandID_Accessor));
    } else {
      planCommandID_Accessor.reset();
    }
    setPlan(*(accessorImpl.plan_Accessor));
    setForPlanningUseOnly(accessorImpl.forPlanningUseOnly_Accessor);
    if (accessorImpl.planInputs_Accessor) {
      setPlanInputs(*(accessorImpl.planInputs_Accessor));
    } else {
      planInputs_Accessor.reset();
    }
  }
}

void RoutePlanMDT::reset() noexcept {
  routePlanID_Accessor->reset();
  planCommandID_Accessor.reset();
  plan_Accessor->reset();
  forPlanningUseOnly_Accessor = false;
  planInputs_Accessor.reset();
}

const uci::type::RoutePlanID_Type& RoutePlanMDT::getRoutePlanID() const {
  return *routePlanID_Accessor;
}

uci::type::RoutePlanID_Type& RoutePlanMDT::getRoutePlanID() {
  return *routePlanID_Accessor;
}

uci::type::RoutePlanMDT& RoutePlanMDT::setRoutePlanID(const uci::type::RoutePlanID_Type& accessor) {
  if (&accessor != routePlanID_Accessor.get()) {
    routePlanID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::RoutePlanCommandID_ChoiceType& RoutePlanMDT::getPlanCommandID_() const {
  if (planCommandID_Accessor) {
    return *planCommandID_Accessor;
  }
  throw uci::base::UCIException("Error in getPlanCommandID(): An attempt was made to get an optional field that was not enabled, call hasPlanCommandID() to determine if it is safe to call getPlanCommandID()");
}

const uci::type::RoutePlanCommandID_ChoiceType& RoutePlanMDT::getPlanCommandID() const {
  return getPlanCommandID_();
}

uci::type::RoutePlanCommandID_ChoiceType& RoutePlanMDT::getPlanCommandID() {
  return getPlanCommandID_();
}

uci::type::RoutePlanMDT& RoutePlanMDT::setPlanCommandID(const uci::type::RoutePlanCommandID_ChoiceType& accessor) {
  enablePlanCommandID();
  if (&accessor != planCommandID_Accessor.get()) {
    planCommandID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RoutePlanMDT::hasPlanCommandID() const noexcept {
  return static_cast<bool>(planCommandID_Accessor);
}

uci::type::RoutePlanCommandID_ChoiceType& RoutePlanMDT::enablePlanCommandID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::routePlanCommandID_ChoiceType : type};
  if ((!planCommandID_Accessor) || (planCommandID_Accessor->getAccessorType() != requestedType)) {
    planCommandID_Accessor = RoutePlanCommandID_ChoiceType::create(requestedType);
    if (!planCommandID_Accessor) {
      throw uci::base::UCIException("Error in enablePlanCommandID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *planCommandID_Accessor;
}

uci::type::RoutePlanMDT& RoutePlanMDT::clearPlanCommandID() noexcept {
  planCommandID_Accessor.reset();
  return *this;
}

const uci::type::RoutePlanType& RoutePlanMDT::getPlan() const {
  return *plan_Accessor;
}

uci::type::RoutePlanType& RoutePlanMDT::getPlan() {
  return *plan_Accessor;
}

uci::type::RoutePlanMDT& RoutePlanMDT::setPlan(const uci::type::RoutePlanType& accessor) {
  if (&accessor != plan_Accessor.get()) {
    plan_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

xs::Boolean RoutePlanMDT::getForPlanningUseOnly() const {
  return forPlanningUseOnly_Accessor;
}

uci::type::RoutePlanMDT& RoutePlanMDT::setForPlanningUseOnly(xs::Boolean value) {
  forPlanningUseOnly_Accessor = value;
  return *this;
}


uci::type::RoutePlanInputsType& RoutePlanMDT::getPlanInputs_() const {
  if (planInputs_Accessor) {
    return *planInputs_Accessor;
  }
  throw uci::base::UCIException("Error in getPlanInputs(): An attempt was made to get an optional field that was not enabled, call hasPlanInputs() to determine if it is safe to call getPlanInputs()");
}

const uci::type::RoutePlanInputsType& RoutePlanMDT::getPlanInputs() const {
  return getPlanInputs_();
}

uci::type::RoutePlanInputsType& RoutePlanMDT::getPlanInputs() {
  return getPlanInputs_();
}

uci::type::RoutePlanMDT& RoutePlanMDT::setPlanInputs(const uci::type::RoutePlanInputsType& accessor) {
  enablePlanInputs();
  if (&accessor != planInputs_Accessor.get()) {
    planInputs_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RoutePlanMDT::hasPlanInputs() const noexcept {
  return static_cast<bool>(planInputs_Accessor);
}

uci::type::RoutePlanInputsType& RoutePlanMDT::enablePlanInputs(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::routePlanInputsType : type};
  if ((!planInputs_Accessor) || (planInputs_Accessor->getAccessorType() != requestedType)) {
    planInputs_Accessor = RoutePlanInputsType::create(requestedType);
    if (!planInputs_Accessor) {
      throw uci::base::UCIException("Error in enablePlanInputs(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *planInputs_Accessor;
}

uci::type::RoutePlanMDT& RoutePlanMDT::clearPlanInputs() noexcept {
  planInputs_Accessor.reset();
  return *this;
}

std::unique_ptr<RoutePlanMDT> RoutePlanMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::routePlanMDT : type};
  return (requestedType == uci::type::accessorType::routePlanMDT) ? boost::make_unique<RoutePlanMDT>() : nullptr;
}

/**  */
namespace RoutePlanMDT_Names {

constexpr const char* Extern_Type_Name{"RoutePlanMDT"};
constexpr const char* RoutePlanID_Name{"RoutePlanID"};
constexpr const char* PlanCommandID_Name{"PlanCommandID"};
constexpr const char* Plan_Name{"Plan"};
constexpr const char* ForPlanningUseOnly_Name{"ForPlanningUseOnly"};
constexpr const char* PlanInputs_Name{"PlanInputs"};

} // namespace RoutePlanMDT_Names

void RoutePlanMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::RoutePlanMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RoutePlanMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RoutePlanMDT_Names::RoutePlanID_Name) {
      RoutePlanID_Type::deserialize(valueType.second, accessor.getRoutePlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RoutePlanMDT_Names::PlanCommandID_Name) {
      RoutePlanCommandID_ChoiceType::deserialize(valueType.second, accessor.enablePlanCommandID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RoutePlanMDT_Names::Plan_Name) {
      RoutePlanType::deserialize(valueType.second, accessor.getPlan(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RoutePlanMDT_Names::ForPlanningUseOnly_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setForPlanningUseOnly(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + RoutePlanMDT_Names::PlanInputs_Name) {
      RoutePlanInputsType::deserialize(valueType.second, accessor.enablePlanInputs(), nodeName, nsPrefix);
    }
  }
}

std::string RoutePlanMDT::serialize(const uci::type::RoutePlanMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? RoutePlanMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, RoutePlanMDT_Names::Extern_Type_Name);
  }
  RoutePlanID_Type::serialize(accessor.getRoutePlanID(), node, RoutePlanMDT_Names::RoutePlanID_Name);
  if (accessor.hasPlanCommandID()) {
    RoutePlanCommandID_ChoiceType::serialize(accessor.getPlanCommandID(), node, RoutePlanMDT_Names::PlanCommandID_Name);
  }
  RoutePlanType::serialize(accessor.getPlan(), node, RoutePlanMDT_Names::Plan_Name);
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getForPlanningUseOnly(), node, RoutePlanMDT_Names::ForPlanningUseOnly_Name);
  if (accessor.hasPlanInputs()) {
    RoutePlanInputsType::serialize(accessor.getPlanInputs(), node, RoutePlanMDT_Names::PlanInputs_Name);
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

uci::type::RoutePlanMDT& RoutePlanMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::RoutePlanMDT>().release());
}

uci::type::RoutePlanMDT& RoutePlanMDT::create(const uci::type::RoutePlanMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::RoutePlanMDT> newAccessor{boost::make_unique<asb_uci::type::RoutePlanMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void RoutePlanMDT::destroy(uci::type::RoutePlanMDT& accessor) {
  delete dynamic_cast<asb_uci::type::RoutePlanMDT*>(&accessor);
}

} // namespace type

} // namespace uci

