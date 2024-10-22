/** @file ApprovalManagementCommandMDT.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:11 PM
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

#include "../../../include/asb_uci/type/ApprovalManagementCommandMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ApprovalPolicyID_Type.h"
#include "../../../include/asb_uci/type/ApprovalRequestItemReferenceType.h"
#include "../../../include/asb_uci/type/CommandBaseType.h"
#include "../../../include/asb_uci/type/PlanPolicyProcessingEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ApprovalManagementCommandMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ApprovalPolicyID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ApprovalRequestItemReferenceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanPolicyProcessingEnum.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ApprovalManagementCommandMDT::ApprovalManagementCommandMDT()
  : approvalPolicyID_Accessor{boost::make_unique<ApprovalPolicyID>(0, SIZE_MAX)},
    approvalItem_Accessor{boost::make_unique<ApprovalRequestItemReferenceType>()} {
}

ApprovalManagementCommandMDT::~ApprovalManagementCommandMDT() = default;

void ApprovalManagementCommandMDT::copy(const uci::type::ApprovalManagementCommandMDT& accessor) {
  copyImpl(accessor, false);
}

void ApprovalManagementCommandMDT::copyImpl(const uci::type::ApprovalManagementCommandMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    CommandBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const ApprovalManagementCommandMDT&>(accessor);
    setApprovalPolicyID(*(accessorImpl.approvalPolicyID_Accessor));
    setApprovalItem(*(accessorImpl.approvalItem_Accessor));
    if (accessorImpl.planPolicyProcessing_Accessor) {
      setPlanPolicyProcessing(*(accessorImpl.planPolicyProcessing_Accessor));
    } else {
      planPolicyProcessing_Accessor.reset();
    }
  }
}

void ApprovalManagementCommandMDT::reset() noexcept {
  CommandBaseType::reset();
  approvalPolicyID_Accessor->reset();
  approvalItem_Accessor->reset();
  planPolicyProcessing_Accessor.reset();
}

const uci::type::ApprovalManagementCommandMDT::ApprovalPolicyID& ApprovalManagementCommandMDT::getApprovalPolicyID() const {
  return *approvalPolicyID_Accessor;
}

uci::type::ApprovalManagementCommandMDT::ApprovalPolicyID& ApprovalManagementCommandMDT::getApprovalPolicyID() {
  return *approvalPolicyID_Accessor;
}

uci::type::ApprovalManagementCommandMDT& ApprovalManagementCommandMDT::setApprovalPolicyID(const uci::type::ApprovalManagementCommandMDT::ApprovalPolicyID& accessor) {
  if (&accessor != approvalPolicyID_Accessor.get()) {
    approvalPolicyID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ApprovalRequestItemReferenceType& ApprovalManagementCommandMDT::getApprovalItem() const {
  return *approvalItem_Accessor;
}

uci::type::ApprovalRequestItemReferenceType& ApprovalManagementCommandMDT::getApprovalItem() {
  return *approvalItem_Accessor;
}

uci::type::ApprovalManagementCommandMDT& ApprovalManagementCommandMDT::setApprovalItem(const uci::type::ApprovalRequestItemReferenceType& accessor) {
  if (&accessor != approvalItem_Accessor.get()) {
    approvalItem_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::PlanPolicyProcessingEnum& ApprovalManagementCommandMDT::getPlanPolicyProcessing_() const {
  if (planPolicyProcessing_Accessor) {
    return *planPolicyProcessing_Accessor;
  }
  throw uci::base::UCIException("Error in getPlanPolicyProcessing(): An attempt was made to get an optional field that was not enabled, call hasPlanPolicyProcessing() to determine if it is safe to call getPlanPolicyProcessing()");
}

const uci::type::PlanPolicyProcessingEnum& ApprovalManagementCommandMDT::getPlanPolicyProcessing() const {
  return getPlanPolicyProcessing_();
}

uci::type::PlanPolicyProcessingEnum& ApprovalManagementCommandMDT::getPlanPolicyProcessing() {
  return getPlanPolicyProcessing_();
}

uci::type::ApprovalManagementCommandMDT& ApprovalManagementCommandMDT::setPlanPolicyProcessing(const uci::type::PlanPolicyProcessingEnum& accessor) {
  enablePlanPolicyProcessing();
  if (&accessor != planPolicyProcessing_Accessor.get()) {
    planPolicyProcessing_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ApprovalManagementCommandMDT& ApprovalManagementCommandMDT::setPlanPolicyProcessing(const uci::type::PlanPolicyProcessingEnum::EnumerationItem value) {
  enablePlanPolicyProcessing().setValue(value);
  return *this;
}

bool ApprovalManagementCommandMDT::hasPlanPolicyProcessing() const noexcept {
  return static_cast<bool>(planPolicyProcessing_Accessor);
}

uci::type::PlanPolicyProcessingEnum& ApprovalManagementCommandMDT::enablePlanPolicyProcessing(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::planPolicyProcessingEnum : type};
  if ((!planPolicyProcessing_Accessor) || (planPolicyProcessing_Accessor->getAccessorType() != requestedType)) {
    planPolicyProcessing_Accessor = PlanPolicyProcessingEnum::create(requestedType);
    if (!planPolicyProcessing_Accessor) {
      throw uci::base::UCIException("Error in enablePlanPolicyProcessing(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *planPolicyProcessing_Accessor;
}

uci::type::ApprovalManagementCommandMDT& ApprovalManagementCommandMDT::clearPlanPolicyProcessing() noexcept {
  planPolicyProcessing_Accessor.reset();
  return *this;
}

std::unique_ptr<ApprovalManagementCommandMDT> ApprovalManagementCommandMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::approvalManagementCommandMDT : type};
  return (requestedType == uci::type::accessorType::approvalManagementCommandMDT) ? boost::make_unique<ApprovalManagementCommandMDT>() : nullptr;
}

/**  */
namespace ApprovalManagementCommandMDT_Names {

constexpr const char* Extern_Type_Name{"ApprovalManagementCommandMDT"};
constexpr const char* ApprovalPolicyID_Name{"ApprovalPolicyID"};
constexpr const char* ApprovalItem_Name{"ApprovalItem"};
constexpr const char* PlanPolicyProcessing_Name{"PlanPolicyProcessing"};

} // namespace ApprovalManagementCommandMDT_Names

void ApprovalManagementCommandMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ApprovalManagementCommandMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ApprovalManagementCommandMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ApprovalManagementCommandMDT_Names::ApprovalPolicyID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ApprovalManagementCommandMDT::ApprovalPolicyID& boundedList = accessor.getApprovalPolicyID();
        const uci::type::ApprovalManagementCommandMDT::ApprovalPolicyID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::ApprovalPolicyID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ApprovalManagementCommandMDT_Names::ApprovalItem_Name) {
      ApprovalRequestItemReferenceType::deserialize(valueType.second, accessor.getApprovalItem(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ApprovalManagementCommandMDT_Names::PlanPolicyProcessing_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enablePlanPolicyProcessing().setValueFromName(*value);
      }
    }
  }
  CommandBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string ApprovalManagementCommandMDT::serialize(const uci::type::ApprovalManagementCommandMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ApprovalManagementCommandMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ApprovalManagementCommandMDT_Names::Extern_Type_Name);
  }
  CommandBaseType::serialize(accessor, node, "", false, false, false);
  {
    const uci::type::ApprovalManagementCommandMDT::ApprovalPolicyID& boundedList = accessor.getApprovalPolicyID();
    for (uci::type::ApprovalManagementCommandMDT::ApprovalPolicyID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ApprovalPolicyID_Type::serialize(boundedList.at(i), node, ApprovalManagementCommandMDT_Names::ApprovalPolicyID_Name);
    }
  }
  ApprovalRequestItemReferenceType::serialize(accessor.getApprovalItem(), node, ApprovalManagementCommandMDT_Names::ApprovalItem_Name);
  if (accessor.hasPlanPolicyProcessing()) {
    PlanPolicyProcessingEnum::serialize(accessor.getPlanPolicyProcessing(), node, ApprovalManagementCommandMDT_Names::PlanPolicyProcessing_Name, false);
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

uci::type::ApprovalManagementCommandMDT& ApprovalManagementCommandMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ApprovalManagementCommandMDT>().release());
}

uci::type::ApprovalManagementCommandMDT& ApprovalManagementCommandMDT::create(const uci::type::ApprovalManagementCommandMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ApprovalManagementCommandMDT> newAccessor{boost::make_unique<asb_uci::type::ApprovalManagementCommandMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ApprovalManagementCommandMDT::destroy(uci::type::ApprovalManagementCommandMDT& accessor) {
  delete dynamic_cast<asb_uci::type::ApprovalManagementCommandMDT*>(&accessor);
}

} // namespace type

} // namespace uci

