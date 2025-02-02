/** @file OrbitActivityPlanMDT.cpp
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

#include "../../../include/asb_uci/type/OrbitActivityPlanMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/OrbitActivityPlanCommandID_ChoiceType.h"
#include "../../../include/asb_uci/type/OrbitActivityPlanID_Type.h"
#include "../../../include/asb_uci/type/OrbitActivityPlanInputsType.h"
#include "../../../include/asb_uci/type/OrbitActivityPlanType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitActivityPlanCommandID_ChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitActivityPlanID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitActivityPlanInputsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitActivityPlanMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitActivityPlanType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OrbitActivityPlanMDT::OrbitActivityPlanMDT()
  : orbitActivityPlanID_Accessor{boost::make_unique<OrbitActivityPlanID_Type>()},
    plan_Accessor{boost::make_unique<OrbitActivityPlanType>()} {
}

OrbitActivityPlanMDT::~OrbitActivityPlanMDT() = default;

void OrbitActivityPlanMDT::copy(const uci::type::OrbitActivityPlanMDT& accessor) {
  copyImpl(accessor, false);
}

void OrbitActivityPlanMDT::copyImpl(const uci::type::OrbitActivityPlanMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const OrbitActivityPlanMDT&>(accessor);
    setOrbitActivityPlanID(*(accessorImpl.orbitActivityPlanID_Accessor));
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

void OrbitActivityPlanMDT::reset() noexcept {
  orbitActivityPlanID_Accessor->reset();
  planCommandID_Accessor.reset();
  plan_Accessor->reset();
  forPlanningUseOnly_Accessor = false;
  planInputs_Accessor.reset();
}

const uci::type::OrbitActivityPlanID_Type& OrbitActivityPlanMDT::getOrbitActivityPlanID() const {
  return *orbitActivityPlanID_Accessor;
}

uci::type::OrbitActivityPlanID_Type& OrbitActivityPlanMDT::getOrbitActivityPlanID() {
  return *orbitActivityPlanID_Accessor;
}

uci::type::OrbitActivityPlanMDT& OrbitActivityPlanMDT::setOrbitActivityPlanID(const uci::type::OrbitActivityPlanID_Type& accessor) {
  if (&accessor != orbitActivityPlanID_Accessor.get()) {
    orbitActivityPlanID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::OrbitActivityPlanCommandID_ChoiceType& OrbitActivityPlanMDT::getPlanCommandID_() const {
  if (planCommandID_Accessor) {
    return *planCommandID_Accessor;
  }
  throw uci::base::UCIException("Error in getPlanCommandID(): An attempt was made to get an optional field that was not enabled, call hasPlanCommandID() to determine if it is safe to call getPlanCommandID()");
}

const uci::type::OrbitActivityPlanCommandID_ChoiceType& OrbitActivityPlanMDT::getPlanCommandID() const {
  return getPlanCommandID_();
}

uci::type::OrbitActivityPlanCommandID_ChoiceType& OrbitActivityPlanMDT::getPlanCommandID() {
  return getPlanCommandID_();
}

uci::type::OrbitActivityPlanMDT& OrbitActivityPlanMDT::setPlanCommandID(const uci::type::OrbitActivityPlanCommandID_ChoiceType& accessor) {
  enablePlanCommandID();
  if (&accessor != planCommandID_Accessor.get()) {
    planCommandID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OrbitActivityPlanMDT::hasPlanCommandID() const noexcept {
  return static_cast<bool>(planCommandID_Accessor);
}

uci::type::OrbitActivityPlanCommandID_ChoiceType& OrbitActivityPlanMDT::enablePlanCommandID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitActivityPlanCommandID_ChoiceType : type};
  if ((!planCommandID_Accessor) || (planCommandID_Accessor->getAccessorType() != requestedType)) {
    planCommandID_Accessor = OrbitActivityPlanCommandID_ChoiceType::create(requestedType);
    if (!planCommandID_Accessor) {
      throw uci::base::UCIException("Error in enablePlanCommandID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *planCommandID_Accessor;
}

uci::type::OrbitActivityPlanMDT& OrbitActivityPlanMDT::clearPlanCommandID() noexcept {
  planCommandID_Accessor.reset();
  return *this;
}

const uci::type::OrbitActivityPlanType& OrbitActivityPlanMDT::getPlan() const {
  return *plan_Accessor;
}

uci::type::OrbitActivityPlanType& OrbitActivityPlanMDT::getPlan() {
  return *plan_Accessor;
}

uci::type::OrbitActivityPlanMDT& OrbitActivityPlanMDT::setPlan(const uci::type::OrbitActivityPlanType& accessor) {
  if (&accessor != plan_Accessor.get()) {
    plan_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

xs::Boolean OrbitActivityPlanMDT::getForPlanningUseOnly() const {
  return forPlanningUseOnly_Accessor;
}

uci::type::OrbitActivityPlanMDT& OrbitActivityPlanMDT::setForPlanningUseOnly(xs::Boolean value) {
  forPlanningUseOnly_Accessor = value;
  return *this;
}


uci::type::OrbitActivityPlanInputsType& OrbitActivityPlanMDT::getPlanInputs_() const {
  if (planInputs_Accessor) {
    return *planInputs_Accessor;
  }
  throw uci::base::UCIException("Error in getPlanInputs(): An attempt was made to get an optional field that was not enabled, call hasPlanInputs() to determine if it is safe to call getPlanInputs()");
}

const uci::type::OrbitActivityPlanInputsType& OrbitActivityPlanMDT::getPlanInputs() const {
  return getPlanInputs_();
}

uci::type::OrbitActivityPlanInputsType& OrbitActivityPlanMDT::getPlanInputs() {
  return getPlanInputs_();
}

uci::type::OrbitActivityPlanMDT& OrbitActivityPlanMDT::setPlanInputs(const uci::type::OrbitActivityPlanInputsType& accessor) {
  enablePlanInputs();
  if (&accessor != planInputs_Accessor.get()) {
    planInputs_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OrbitActivityPlanMDT::hasPlanInputs() const noexcept {
  return static_cast<bool>(planInputs_Accessor);
}

uci::type::OrbitActivityPlanInputsType& OrbitActivityPlanMDT::enablePlanInputs(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitActivityPlanInputsType : type};
  if ((!planInputs_Accessor) || (planInputs_Accessor->getAccessorType() != requestedType)) {
    planInputs_Accessor = OrbitActivityPlanInputsType::create(requestedType);
    if (!planInputs_Accessor) {
      throw uci::base::UCIException("Error in enablePlanInputs(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *planInputs_Accessor;
}

uci::type::OrbitActivityPlanMDT& OrbitActivityPlanMDT::clearPlanInputs() noexcept {
  planInputs_Accessor.reset();
  return *this;
}

std::unique_ptr<OrbitActivityPlanMDT> OrbitActivityPlanMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitActivityPlanMDT : type};
  return (requestedType == uci::type::accessorType::orbitActivityPlanMDT) ? boost::make_unique<OrbitActivityPlanMDT>() : nullptr;
}

/**  */
namespace OrbitActivityPlanMDT_Names {

constexpr const char* Extern_Type_Name{"OrbitActivityPlanMDT"};
constexpr const char* OrbitActivityPlanID_Name{"OrbitActivityPlanID"};
constexpr const char* PlanCommandID_Name{"PlanCommandID"};
constexpr const char* Plan_Name{"Plan"};
constexpr const char* ForPlanningUseOnly_Name{"ForPlanningUseOnly"};
constexpr const char* PlanInputs_Name{"PlanInputs"};

} // namespace OrbitActivityPlanMDT_Names

void OrbitActivityPlanMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitActivityPlanMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitActivityPlanMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitActivityPlanMDT_Names::OrbitActivityPlanID_Name) {
      OrbitActivityPlanID_Type::deserialize(valueType.second, accessor.getOrbitActivityPlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitActivityPlanMDT_Names::PlanCommandID_Name) {
      OrbitActivityPlanCommandID_ChoiceType::deserialize(valueType.second, accessor.enablePlanCommandID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitActivityPlanMDT_Names::Plan_Name) {
      OrbitActivityPlanType::deserialize(valueType.second, accessor.getPlan(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitActivityPlanMDT_Names::ForPlanningUseOnly_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setForPlanningUseOnly(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitActivityPlanMDT_Names::PlanInputs_Name) {
      OrbitActivityPlanInputsType::deserialize(valueType.second, accessor.enablePlanInputs(), nodeName, nsPrefix);
    }
  }
}

std::string OrbitActivityPlanMDT::serialize(const uci::type::OrbitActivityPlanMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? OrbitActivityPlanMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitActivityPlanMDT_Names::Extern_Type_Name);
  }
  OrbitActivityPlanID_Type::serialize(accessor.getOrbitActivityPlanID(), node, OrbitActivityPlanMDT_Names::OrbitActivityPlanID_Name);
  if (accessor.hasPlanCommandID()) {
    OrbitActivityPlanCommandID_ChoiceType::serialize(accessor.getPlanCommandID(), node, OrbitActivityPlanMDT_Names::PlanCommandID_Name);
  }
  OrbitActivityPlanType::serialize(accessor.getPlan(), node, OrbitActivityPlanMDT_Names::Plan_Name);
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getForPlanningUseOnly(), node, OrbitActivityPlanMDT_Names::ForPlanningUseOnly_Name);
  if (accessor.hasPlanInputs()) {
    OrbitActivityPlanInputsType::serialize(accessor.getPlanInputs(), node, OrbitActivityPlanMDT_Names::PlanInputs_Name);
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

uci::type::OrbitActivityPlanMDT& OrbitActivityPlanMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OrbitActivityPlanMDT>().release());
}

uci::type::OrbitActivityPlanMDT& OrbitActivityPlanMDT::create(const uci::type::OrbitActivityPlanMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OrbitActivityPlanMDT> newAccessor{boost::make_unique<asb_uci::type::OrbitActivityPlanMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OrbitActivityPlanMDT::destroy(uci::type::OrbitActivityPlanMDT& accessor) {
  delete dynamic_cast<asb_uci::type::OrbitActivityPlanMDT*>(&accessor);
}

} // namespace type

} // namespace uci

