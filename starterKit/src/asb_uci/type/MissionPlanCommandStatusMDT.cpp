/** @file MissionPlanCommandStatusMDT.cpp
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

#include "../../../include/asb_uci/type/MissionPlanCommandStatusMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/MissionPlanCommandID_Type.h"
#include "../../../include/asb_uci/type/PlanCommandStatusType.h"
#include "../../../include/asb_uci/type/PlansReferenceType.h"
#include "../../../include/asb_uci/type/RequirementPlanningResultType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MissionPlanCommandID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MissionPlanCommandStatusMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanCommandStatusType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlansReferenceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementPlanningResultType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

MissionPlanCommandStatusMDT::MissionPlanCommandStatusMDT()
  : commandID_Accessor{boost::make_unique<MissionPlanCommandID_Type>()},
    planningStatus_Accessor{boost::make_unique<PlanCommandStatusType>()},
    allocationResult_Accessor{boost::make_unique<AllocationResult>(0, SIZE_MAX)} {
}

MissionPlanCommandStatusMDT::~MissionPlanCommandStatusMDT() = default;

void MissionPlanCommandStatusMDT::copy(const uci::type::MissionPlanCommandStatusMDT& accessor) {
  copyImpl(accessor, false);
}

void MissionPlanCommandStatusMDT::copyImpl(const uci::type::MissionPlanCommandStatusMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const MissionPlanCommandStatusMDT&>(accessor);
    setCommandID(*(accessorImpl.commandID_Accessor));
    setPlanningStatus(*(accessorImpl.planningStatus_Accessor));
    setAllocationResult(*(accessorImpl.allocationResult_Accessor));
    if (accessorImpl.resultingPlanIdentifier_Accessor) {
      setResultingPlanIdentifier(*(accessorImpl.resultingPlanIdentifier_Accessor));
    } else {
      resultingPlanIdentifier_Accessor.reset();
    }
  }
}

void MissionPlanCommandStatusMDT::reset() noexcept {
  commandID_Accessor->reset();
  planningStatus_Accessor->reset();
  allocationResult_Accessor->reset();
  resultingPlanIdentifier_Accessor.reset();
}

const uci::type::MissionPlanCommandID_Type& MissionPlanCommandStatusMDT::getCommandID() const {
  return *commandID_Accessor;
}

uci::type::MissionPlanCommandID_Type& MissionPlanCommandStatusMDT::getCommandID() {
  return *commandID_Accessor;
}

uci::type::MissionPlanCommandStatusMDT& MissionPlanCommandStatusMDT::setCommandID(const uci::type::MissionPlanCommandID_Type& accessor) {
  if (&accessor != commandID_Accessor.get()) {
    commandID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PlanCommandStatusType& MissionPlanCommandStatusMDT::getPlanningStatus() const {
  return *planningStatus_Accessor;
}

uci::type::PlanCommandStatusType& MissionPlanCommandStatusMDT::getPlanningStatus() {
  return *planningStatus_Accessor;
}

uci::type::MissionPlanCommandStatusMDT& MissionPlanCommandStatusMDT::setPlanningStatus(const uci::type::PlanCommandStatusType& accessor) {
  if (&accessor != planningStatus_Accessor.get()) {
    planningStatus_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::MissionPlanCommandStatusMDT::AllocationResult& MissionPlanCommandStatusMDT::getAllocationResult() const {
  return *allocationResult_Accessor;
}

uci::type::MissionPlanCommandStatusMDT::AllocationResult& MissionPlanCommandStatusMDT::getAllocationResult() {
  return *allocationResult_Accessor;
}

uci::type::MissionPlanCommandStatusMDT& MissionPlanCommandStatusMDT::setAllocationResult(const uci::type::MissionPlanCommandStatusMDT::AllocationResult& accessor) {
  if (&accessor != allocationResult_Accessor.get()) {
    allocationResult_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::PlansReferenceType& MissionPlanCommandStatusMDT::getResultingPlanIdentifier_() const {
  if (resultingPlanIdentifier_Accessor) {
    return *resultingPlanIdentifier_Accessor;
  }
  throw uci::base::UCIException("Error in getResultingPlanIdentifier(): An attempt was made to get an optional field that was not enabled, call hasResultingPlanIdentifier() to determine if it is safe to call getResultingPlanIdentifier()");
}

const uci::type::PlansReferenceType& MissionPlanCommandStatusMDT::getResultingPlanIdentifier() const {
  return getResultingPlanIdentifier_();
}

uci::type::PlansReferenceType& MissionPlanCommandStatusMDT::getResultingPlanIdentifier() {
  return getResultingPlanIdentifier_();
}

uci::type::MissionPlanCommandStatusMDT& MissionPlanCommandStatusMDT::setResultingPlanIdentifier(const uci::type::PlansReferenceType& accessor) {
  enableResultingPlanIdentifier();
  if (&accessor != resultingPlanIdentifier_Accessor.get()) {
    resultingPlanIdentifier_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool MissionPlanCommandStatusMDT::hasResultingPlanIdentifier() const noexcept {
  return static_cast<bool>(resultingPlanIdentifier_Accessor);
}

uci::type::PlansReferenceType& MissionPlanCommandStatusMDT::enableResultingPlanIdentifier(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::plansReferenceType : type};
  if ((!resultingPlanIdentifier_Accessor) || (resultingPlanIdentifier_Accessor->getAccessorType() != requestedType)) {
    resultingPlanIdentifier_Accessor = PlansReferenceType::create(requestedType);
    if (!resultingPlanIdentifier_Accessor) {
      throw uci::base::UCIException("Error in enableResultingPlanIdentifier(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *resultingPlanIdentifier_Accessor;
}

uci::type::MissionPlanCommandStatusMDT& MissionPlanCommandStatusMDT::clearResultingPlanIdentifier() noexcept {
  resultingPlanIdentifier_Accessor.reset();
  return *this;
}

std::unique_ptr<MissionPlanCommandStatusMDT> MissionPlanCommandStatusMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::missionPlanCommandStatusMDT : type};
  return (requestedType == uci::type::accessorType::missionPlanCommandStatusMDT) ? boost::make_unique<MissionPlanCommandStatusMDT>() : nullptr;
}

/**  */
namespace MissionPlanCommandStatusMDT_Names {

constexpr const char* Extern_Type_Name{"MissionPlanCommandStatusMDT"};
constexpr const char* CommandID_Name{"CommandID"};
constexpr const char* PlanningStatus_Name{"PlanningStatus"};
constexpr const char* AllocationResult_Name{"AllocationResult"};
constexpr const char* ResultingPlanIdentifier_Name{"ResultingPlanIdentifier"};

} // namespace MissionPlanCommandStatusMDT_Names

void MissionPlanCommandStatusMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::MissionPlanCommandStatusMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = MissionPlanCommandStatusMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + MissionPlanCommandStatusMDT_Names::CommandID_Name) {
      MissionPlanCommandID_Type::deserialize(valueType.second, accessor.getCommandID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MissionPlanCommandStatusMDT_Names::PlanningStatus_Name) {
      PlanCommandStatusType::deserialize(valueType.second, accessor.getPlanningStatus(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MissionPlanCommandStatusMDT_Names::AllocationResult_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::MissionPlanCommandStatusMDT::AllocationResult& boundedList = accessor.getAllocationResult();
        const uci::type::MissionPlanCommandStatusMDT::AllocationResult::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::RequirementPlanningResultType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + MissionPlanCommandStatusMDT_Names::ResultingPlanIdentifier_Name) {
      PlansReferenceType::deserialize(valueType.second, accessor.enableResultingPlanIdentifier(), nodeName, nsPrefix);
    }
  }
}

std::string MissionPlanCommandStatusMDT::serialize(const uci::type::MissionPlanCommandStatusMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? MissionPlanCommandStatusMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, MissionPlanCommandStatusMDT_Names::Extern_Type_Name);
  }
  MissionPlanCommandID_Type::serialize(accessor.getCommandID(), node, MissionPlanCommandStatusMDT_Names::CommandID_Name);
  PlanCommandStatusType::serialize(accessor.getPlanningStatus(), node, MissionPlanCommandStatusMDT_Names::PlanningStatus_Name);
  {
    const uci::type::MissionPlanCommandStatusMDT::AllocationResult& boundedList = accessor.getAllocationResult();
    for (uci::type::MissionPlanCommandStatusMDT::AllocationResult::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::RequirementPlanningResultType::serialize(boundedList.at(i), node, MissionPlanCommandStatusMDT_Names::AllocationResult_Name);
    }
  }
  if (accessor.hasResultingPlanIdentifier()) {
    PlansReferenceType::serialize(accessor.getResultingPlanIdentifier(), node, MissionPlanCommandStatusMDT_Names::ResultingPlanIdentifier_Name);
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

uci::type::MissionPlanCommandStatusMDT& MissionPlanCommandStatusMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::MissionPlanCommandStatusMDT>().release());
}

uci::type::MissionPlanCommandStatusMDT& MissionPlanCommandStatusMDT::create(const uci::type::MissionPlanCommandStatusMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::MissionPlanCommandStatusMDT> newAccessor{boost::make_unique<asb_uci::type::MissionPlanCommandStatusMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void MissionPlanCommandStatusMDT::destroy(uci::type::MissionPlanCommandStatusMDT& accessor) {
  delete dynamic_cast<asb_uci::type::MissionPlanCommandStatusMDT*>(&accessor);
}

} // namespace type

} // namespace uci

