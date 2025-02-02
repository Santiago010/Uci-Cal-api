/** @file CommTerminalPlanOverrideRequestType.cpp
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

#include "../../../include/asb_uci/type/CommTerminalPlanOverrideRequestType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CommActionExtendedType.h"
#include "../../../include/asb_uci/type/CommTerminalPlanOverrideActivationType.h"
#include "../../../include/asb_uci/type/RequestBaseType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommActionExtendedType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommTerminalPlanOverrideActivationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommTerminalPlanOverrideRequestType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

CommTerminalPlanOverrideRequestType::CommTerminalPlanOverrideRequestType()
  : operatorModification_Accessor{boost::make_unique<OperatorModification>(0, SIZE_MAX)} {
}

CommTerminalPlanOverrideRequestType::~CommTerminalPlanOverrideRequestType() = default;

void CommTerminalPlanOverrideRequestType::copy(const uci::type::CommTerminalPlanOverrideRequestType& accessor) {
  copyImpl(accessor, false);
}

void CommTerminalPlanOverrideRequestType::copyImpl(const uci::type::CommTerminalPlanOverrideRequestType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    RequestBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const CommTerminalPlanOverrideRequestType&>(accessor);
    if (accessorImpl.planActivation_Accessor) {
      setPlanActivation(*(accessorImpl.planActivation_Accessor));
    } else {
      planActivation_Accessor.reset();
    }
    setOperatorModification(*(accessorImpl.operatorModification_Accessor));
  }
}

void CommTerminalPlanOverrideRequestType::reset() noexcept {
  RequestBaseType::reset();
  planActivation_Accessor.reset();
  operatorModification_Accessor->reset();
}

uci::type::CommTerminalPlanOverrideActivationType& CommTerminalPlanOverrideRequestType::getPlanActivation_() const {
  if (planActivation_Accessor) {
    return *planActivation_Accessor;
  }
  throw uci::base::UCIException("Error in getPlanActivation(): An attempt was made to get an optional field that was not enabled, call hasPlanActivation() to determine if it is safe to call getPlanActivation()");
}

const uci::type::CommTerminalPlanOverrideActivationType& CommTerminalPlanOverrideRequestType::getPlanActivation() const {
  return getPlanActivation_();
}

uci::type::CommTerminalPlanOverrideActivationType& CommTerminalPlanOverrideRequestType::getPlanActivation() {
  return getPlanActivation_();
}

uci::type::CommTerminalPlanOverrideRequestType& CommTerminalPlanOverrideRequestType::setPlanActivation(const uci::type::CommTerminalPlanOverrideActivationType& accessor) {
  enablePlanActivation();
  if (&accessor != planActivation_Accessor.get()) {
    planActivation_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool CommTerminalPlanOverrideRequestType::hasPlanActivation() const noexcept {
  return static_cast<bool>(planActivation_Accessor);
}

uci::type::CommTerminalPlanOverrideActivationType& CommTerminalPlanOverrideRequestType::enablePlanActivation(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commTerminalPlanOverrideActivationType : type};
  if ((!planActivation_Accessor) || (planActivation_Accessor->getAccessorType() != requestedType)) {
    planActivation_Accessor = CommTerminalPlanOverrideActivationType::create(requestedType);
    if (!planActivation_Accessor) {
      throw uci::base::UCIException("Error in enablePlanActivation(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *planActivation_Accessor;
}

uci::type::CommTerminalPlanOverrideRequestType& CommTerminalPlanOverrideRequestType::clearPlanActivation() noexcept {
  planActivation_Accessor.reset();
  return *this;
}

const uci::type::CommTerminalPlanOverrideRequestType::OperatorModification& CommTerminalPlanOverrideRequestType::getOperatorModification() const {
  return *operatorModification_Accessor;
}

uci::type::CommTerminalPlanOverrideRequestType::OperatorModification& CommTerminalPlanOverrideRequestType::getOperatorModification() {
  return *operatorModification_Accessor;
}

uci::type::CommTerminalPlanOverrideRequestType& CommTerminalPlanOverrideRequestType::setOperatorModification(const uci::type::CommTerminalPlanOverrideRequestType::OperatorModification& accessor) {
  if (&accessor != operatorModification_Accessor.get()) {
    operatorModification_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<CommTerminalPlanOverrideRequestType> CommTerminalPlanOverrideRequestType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commTerminalPlanOverrideRequestType : type};
  return (requestedType == uci::type::accessorType::commTerminalPlanOverrideRequestType) ? boost::make_unique<CommTerminalPlanOverrideRequestType>() : nullptr;
}

/**  */
namespace CommTerminalPlanOverrideRequestType_Names {

constexpr const char* Extern_Type_Name{"CommTerminalPlanOverrideRequestType"};
constexpr const char* PlanActivation_Name{"PlanActivation"};
constexpr const char* OperatorModification_Name{"OperatorModification"};

} // namespace CommTerminalPlanOverrideRequestType_Names

void CommTerminalPlanOverrideRequestType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CommTerminalPlanOverrideRequestType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CommTerminalPlanOverrideRequestType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CommTerminalPlanOverrideRequestType_Names::PlanActivation_Name) {
      CommTerminalPlanOverrideActivationType::deserialize(valueType.second, accessor.enablePlanActivation(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CommTerminalPlanOverrideRequestType_Names::OperatorModification_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::CommTerminalPlanOverrideRequestType::OperatorModification& boundedList = accessor.getOperatorModification();
        const uci::type::CommTerminalPlanOverrideRequestType::OperatorModification::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::CommActionExtendedType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  RequestBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string CommTerminalPlanOverrideRequestType::serialize(const uci::type::CommTerminalPlanOverrideRequestType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? CommTerminalPlanOverrideRequestType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, CommTerminalPlanOverrideRequestType_Names::Extern_Type_Name);
  }
  RequestBaseType::serialize(accessor, node, "", false, false, false);
  if (accessor.hasPlanActivation()) {
    CommTerminalPlanOverrideActivationType::serialize(accessor.getPlanActivation(), node, CommTerminalPlanOverrideRequestType_Names::PlanActivation_Name);
  }
  {
    const uci::type::CommTerminalPlanOverrideRequestType::OperatorModification& boundedList = accessor.getOperatorModification();
    for (uci::type::CommTerminalPlanOverrideRequestType::OperatorModification::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::CommActionExtendedType::serialize(boundedList.at(i), node, CommTerminalPlanOverrideRequestType_Names::OperatorModification_Name);
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

uci::type::CommTerminalPlanOverrideRequestType& CommTerminalPlanOverrideRequestType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::CommTerminalPlanOverrideRequestType>().release());
}

uci::type::CommTerminalPlanOverrideRequestType& CommTerminalPlanOverrideRequestType::create(const uci::type::CommTerminalPlanOverrideRequestType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::CommTerminalPlanOverrideRequestType> newAccessor{boost::make_unique<asb_uci::type::CommTerminalPlanOverrideRequestType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void CommTerminalPlanOverrideRequestType::destroy(uci::type::CommTerminalPlanOverrideRequestType& accessor) {
  delete dynamic_cast<asb_uci::type::CommTerminalPlanOverrideRequestType*>(&accessor);
}

} // namespace type

} // namespace uci

