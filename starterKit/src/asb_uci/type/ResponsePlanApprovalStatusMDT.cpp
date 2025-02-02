/** @file ResponsePlanApprovalStatusMDT.cpp
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

#include "../../../include/asb_uci/type/ResponsePlanApprovalStatusMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ApprovalStateEnum.h"
#include "../../../include/asb_uci/type/ResponsePlanID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ApprovalStateEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ResponsePlanApprovalStatusMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ResponsePlanID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ResponsePlanApprovalStatusMDT::ResponsePlanApprovalStatusMDT()
  : planID_Accessor{boost::make_unique<ResponsePlanID_Type>()},
    planApprovalState_Accessor{boost::make_unique<ApprovalStateEnum>()} {
}

ResponsePlanApprovalStatusMDT::~ResponsePlanApprovalStatusMDT() = default;

void ResponsePlanApprovalStatusMDT::copy(const uci::type::ResponsePlanApprovalStatusMDT& accessor) {
  copyImpl(accessor, false);
}

void ResponsePlanApprovalStatusMDT::copyImpl(const uci::type::ResponsePlanApprovalStatusMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const ResponsePlanApprovalStatusMDT&>(accessor);
    setPlanID(*(accessorImpl.planID_Accessor));
    setPlanApprovalState(*(accessorImpl.planApprovalState_Accessor));
  }
}

void ResponsePlanApprovalStatusMDT::reset() noexcept {
  planID_Accessor->reset();
  planApprovalState_Accessor->reset();
}

const uci::type::ResponsePlanID_Type& ResponsePlanApprovalStatusMDT::getPlanID() const {
  return *planID_Accessor;
}

uci::type::ResponsePlanID_Type& ResponsePlanApprovalStatusMDT::getPlanID() {
  return *planID_Accessor;
}

uci::type::ResponsePlanApprovalStatusMDT& ResponsePlanApprovalStatusMDT::setPlanID(const uci::type::ResponsePlanID_Type& accessor) {
  if (&accessor != planID_Accessor.get()) {
    planID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ApprovalStateEnum& ResponsePlanApprovalStatusMDT::getPlanApprovalState() const {
  return *planApprovalState_Accessor;
}

uci::type::ApprovalStateEnum& ResponsePlanApprovalStatusMDT::getPlanApprovalState() {
  return *planApprovalState_Accessor;
}

uci::type::ResponsePlanApprovalStatusMDT& ResponsePlanApprovalStatusMDT::setPlanApprovalState(const uci::type::ApprovalStateEnum& accessor) {
  if (&accessor != planApprovalState_Accessor.get()) {
    planApprovalState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ResponsePlanApprovalStatusMDT& ResponsePlanApprovalStatusMDT::setPlanApprovalState(uci::type::ApprovalStateEnum::EnumerationItem value) {
  planApprovalState_Accessor->setValue(value);
  return *this;
}


std::unique_ptr<ResponsePlanApprovalStatusMDT> ResponsePlanApprovalStatusMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::responsePlanApprovalStatusMDT : type};
  return (requestedType == uci::type::accessorType::responsePlanApprovalStatusMDT) ? boost::make_unique<ResponsePlanApprovalStatusMDT>() : nullptr;
}

/**  */
namespace ResponsePlanApprovalStatusMDT_Names {

constexpr const char* Extern_Type_Name{"ResponsePlanApprovalStatusMDT"};
constexpr const char* PlanID_Name{"PlanID"};
constexpr const char* PlanApprovalState_Name{"PlanApprovalState"};

} // namespace ResponsePlanApprovalStatusMDT_Names

void ResponsePlanApprovalStatusMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ResponsePlanApprovalStatusMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ResponsePlanApprovalStatusMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ResponsePlanApprovalStatusMDT_Names::PlanID_Name) {
      ResponsePlanID_Type::deserialize(valueType.second, accessor.getPlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ResponsePlanApprovalStatusMDT_Names::PlanApprovalState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getPlanApprovalState().setValueFromName(*value);
      }
    }
  }
}

std::string ResponsePlanApprovalStatusMDT::serialize(const uci::type::ResponsePlanApprovalStatusMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ResponsePlanApprovalStatusMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ResponsePlanApprovalStatusMDT_Names::Extern_Type_Name);
  }
  ResponsePlanID_Type::serialize(accessor.getPlanID(), node, ResponsePlanApprovalStatusMDT_Names::PlanID_Name);
  ApprovalStateEnum::serialize(accessor.getPlanApprovalState(), node, ResponsePlanApprovalStatusMDT_Names::PlanApprovalState_Name, false);
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

uci::type::ResponsePlanApprovalStatusMDT& ResponsePlanApprovalStatusMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ResponsePlanApprovalStatusMDT>().release());
}

uci::type::ResponsePlanApprovalStatusMDT& ResponsePlanApprovalStatusMDT::create(const uci::type::ResponsePlanApprovalStatusMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ResponsePlanApprovalStatusMDT> newAccessor{boost::make_unique<asb_uci::type::ResponsePlanApprovalStatusMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ResponsePlanApprovalStatusMDT::destroy(uci::type::ResponsePlanApprovalStatusMDT& accessor) {
  delete dynamic_cast<asb_uci::type::ResponsePlanApprovalStatusMDT*>(&accessor);
}

} // namespace type

} // namespace uci

