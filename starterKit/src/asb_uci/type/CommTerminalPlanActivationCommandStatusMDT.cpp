/** @file CommTerminalPlanActivationCommandStatusMDT.cpp
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

#include "../../../include/asb_uci/type/CommTerminalPlanActivationCommandStatusMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CommandStatusBaseType.h"
#include "../../../include/asb_uci/type/PlanActivationStateEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommTerminalPlanActivationCommandStatusMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanActivationStateEnum.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

CommTerminalPlanActivationCommandStatusMDT::CommTerminalPlanActivationCommandStatusMDT()
  : planActivationCommandStatus_Accessor{boost::make_unique<PlanActivationStateEnum>()} {
}

CommTerminalPlanActivationCommandStatusMDT::~CommTerminalPlanActivationCommandStatusMDT() = default;

void CommTerminalPlanActivationCommandStatusMDT::copy(const uci::type::CommTerminalPlanActivationCommandStatusMDT& accessor) {
  copyImpl(accessor, false);
}

void CommTerminalPlanActivationCommandStatusMDT::copyImpl(const uci::type::CommTerminalPlanActivationCommandStatusMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    CommandStatusBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const CommTerminalPlanActivationCommandStatusMDT&>(accessor);
    setPlanActivationCommandStatus(*(accessorImpl.planActivationCommandStatus_Accessor));
  }
}

void CommTerminalPlanActivationCommandStatusMDT::reset() noexcept {
  CommandStatusBaseType::reset();
  planActivationCommandStatus_Accessor->reset();
}

const uci::type::PlanActivationStateEnum& CommTerminalPlanActivationCommandStatusMDT::getPlanActivationCommandStatus() const {
  return *planActivationCommandStatus_Accessor;
}

uci::type::PlanActivationStateEnum& CommTerminalPlanActivationCommandStatusMDT::getPlanActivationCommandStatus() {
  return *planActivationCommandStatus_Accessor;
}

uci::type::CommTerminalPlanActivationCommandStatusMDT& CommTerminalPlanActivationCommandStatusMDT::setPlanActivationCommandStatus(const uci::type::PlanActivationStateEnum& accessor) {
  if (&accessor != planActivationCommandStatus_Accessor.get()) {
    planActivationCommandStatus_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::CommTerminalPlanActivationCommandStatusMDT& CommTerminalPlanActivationCommandStatusMDT::setPlanActivationCommandStatus(uci::type::PlanActivationStateEnum::EnumerationItem value) {
  planActivationCommandStatus_Accessor->setValue(value);
  return *this;
}


std::unique_ptr<CommTerminalPlanActivationCommandStatusMDT> CommTerminalPlanActivationCommandStatusMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commTerminalPlanActivationCommandStatusMDT : type};
  return (requestedType == uci::type::accessorType::commTerminalPlanActivationCommandStatusMDT) ? boost::make_unique<CommTerminalPlanActivationCommandStatusMDT>() : nullptr;
}

/**  */
namespace CommTerminalPlanActivationCommandStatusMDT_Names {

constexpr const char* Extern_Type_Name{"CommTerminalPlanActivationCommandStatusMDT"};
constexpr const char* PlanActivationCommandStatus_Name{"PlanActivationCommandStatus"};

} // namespace CommTerminalPlanActivationCommandStatusMDT_Names

void CommTerminalPlanActivationCommandStatusMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::CommTerminalPlanActivationCommandStatusMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CommTerminalPlanActivationCommandStatusMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CommTerminalPlanActivationCommandStatusMDT_Names::PlanActivationCommandStatus_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getPlanActivationCommandStatus().setValueFromName(*value);
      }
    }
  }
  CommandStatusBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string CommTerminalPlanActivationCommandStatusMDT::serialize(const uci::type::CommTerminalPlanActivationCommandStatusMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? CommTerminalPlanActivationCommandStatusMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, CommTerminalPlanActivationCommandStatusMDT_Names::Extern_Type_Name);
  }
  CommandStatusBaseType::serialize(accessor, node, "", false, false, false);
  PlanActivationStateEnum::serialize(accessor.getPlanActivationCommandStatus(), node, CommTerminalPlanActivationCommandStatusMDT_Names::PlanActivationCommandStatus_Name, false);
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

uci::type::CommTerminalPlanActivationCommandStatusMDT& CommTerminalPlanActivationCommandStatusMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::CommTerminalPlanActivationCommandStatusMDT>().release());
}

uci::type::CommTerminalPlanActivationCommandStatusMDT& CommTerminalPlanActivationCommandStatusMDT::create(const uci::type::CommTerminalPlanActivationCommandStatusMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::CommTerminalPlanActivationCommandStatusMDT> newAccessor{boost::make_unique<asb_uci::type::CommTerminalPlanActivationCommandStatusMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void CommTerminalPlanActivationCommandStatusMDT::destroy(uci::type::CommTerminalPlanActivationCommandStatusMDT& accessor) {
  delete dynamic_cast<asb_uci::type::CommTerminalPlanActivationCommandStatusMDT*>(&accessor);
}

} // namespace type

} // namespace uci

