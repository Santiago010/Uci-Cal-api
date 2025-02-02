/** @file MissionPlanInputsType.cpp
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

#include "../../../include/asb_uci/type/MissionPlanInputsType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/PlanInputsCoreType.h"
#include "../../../include/asb_uci/type/PlanPartsType.h"
#include "../../../include/asb_uci/type/RequirementAllocationCommandType.h"
#include "../../../include/asb_uci/type/RequirementAssociationConstraintType.h"
#include "../../../include/asb_uci/type/RequirementPlanConstraintType.h"
#include "../../../include/asb_uci/type/RequirementPlanningCandidateType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MissionPlanInputsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanPartsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementAllocationCommandType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementAssociationConstraintType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementPlanConstraintType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementPlanningCandidateType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

MissionPlanInputsType::MissionPlanInputsType()
  : planningCandidate_Accessor{boost::make_unique<PlanningCandidate>(0, SIZE_MAX)},
    associationConstraint_Accessor{boost::make_unique<AssociationConstraint>(0, SIZE_MAX)} {
}

MissionPlanInputsType::~MissionPlanInputsType() = default;

void MissionPlanInputsType::copy(const uci::type::MissionPlanInputsType& accessor) {
  copyImpl(accessor, false);
}

void MissionPlanInputsType::copyImpl(const uci::type::MissionPlanInputsType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    PlanInputsCoreType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const MissionPlanInputsType&>(accessor);
    setPlanningCandidate(*(accessorImpl.planningCandidate_Accessor));
    if (accessorImpl.proposedRequirementPlans_Accessor) {
      setProposedRequirementPlans(*(accessorImpl.proposedRequirementPlans_Accessor));
    } else {
      proposedRequirementPlans_Accessor.reset();
    }
    if (accessorImpl.proposedRequirements_Accessor) {
      setProposedRequirements(*(accessorImpl.proposedRequirements_Accessor));
    } else {
      proposedRequirements_Accessor.reset();
    }
    setAssociationConstraint(*(accessorImpl.associationConstraint_Accessor));
    setResultsInMissionPlan(accessorImpl.resultsInMissionPlan_Accessor);
    if (accessorImpl.outputPlanType_Accessor) {
      setOutputPlanType(*(accessorImpl.outputPlanType_Accessor));
    } else {
      outputPlanType_Accessor.reset();
    }
  }
}

void MissionPlanInputsType::reset() noexcept {
  PlanInputsCoreType::reset();
  planningCandidate_Accessor->reset();
  proposedRequirementPlans_Accessor.reset();
  proposedRequirements_Accessor.reset();
  associationConstraint_Accessor->reset();
  resultsInMissionPlan_Accessor = false;
  outputPlanType_Accessor.reset();
}

const uci::type::MissionPlanInputsType::PlanningCandidate& MissionPlanInputsType::getPlanningCandidate() const {
  return *planningCandidate_Accessor;
}

uci::type::MissionPlanInputsType::PlanningCandidate& MissionPlanInputsType::getPlanningCandidate() {
  return *planningCandidate_Accessor;
}

uci::type::MissionPlanInputsType& MissionPlanInputsType::setPlanningCandidate(const uci::type::MissionPlanInputsType::PlanningCandidate& accessor) {
  if (&accessor != planningCandidate_Accessor.get()) {
    planningCandidate_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::RequirementPlanConstraintType& MissionPlanInputsType::getProposedRequirementPlans_() const {
  if (proposedRequirementPlans_Accessor) {
    return *proposedRequirementPlans_Accessor;
  }
  throw uci::base::UCIException("Error in getProposedRequirementPlans(): An attempt was made to get an optional field that was not enabled, call hasProposedRequirementPlans() to determine if it is safe to call getProposedRequirementPlans()");
}

const uci::type::RequirementPlanConstraintType& MissionPlanInputsType::getProposedRequirementPlans() const {
  return getProposedRequirementPlans_();
}

uci::type::RequirementPlanConstraintType& MissionPlanInputsType::getProposedRequirementPlans() {
  return getProposedRequirementPlans_();
}

uci::type::MissionPlanInputsType& MissionPlanInputsType::setProposedRequirementPlans(const uci::type::RequirementPlanConstraintType& accessor) {
  enableProposedRequirementPlans();
  if (&accessor != proposedRequirementPlans_Accessor.get()) {
    proposedRequirementPlans_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool MissionPlanInputsType::hasProposedRequirementPlans() const noexcept {
  return static_cast<bool>(proposedRequirementPlans_Accessor);
}

uci::type::RequirementPlanConstraintType& MissionPlanInputsType::enableProposedRequirementPlans(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::requirementPlanConstraintType : type};
  if ((!proposedRequirementPlans_Accessor) || (proposedRequirementPlans_Accessor->getAccessorType() != requestedType)) {
    proposedRequirementPlans_Accessor = RequirementPlanConstraintType::create(requestedType);
    if (!proposedRequirementPlans_Accessor) {
      throw uci::base::UCIException("Error in enableProposedRequirementPlans(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *proposedRequirementPlans_Accessor;
}

uci::type::MissionPlanInputsType& MissionPlanInputsType::clearProposedRequirementPlans() noexcept {
  proposedRequirementPlans_Accessor.reset();
  return *this;
}

uci::type::RequirementAllocationCommandType& MissionPlanInputsType::getProposedRequirements_() const {
  if (proposedRequirements_Accessor) {
    return *proposedRequirements_Accessor;
  }
  throw uci::base::UCIException("Error in getProposedRequirements(): An attempt was made to get an optional field that was not enabled, call hasProposedRequirements() to determine if it is safe to call getProposedRequirements()");
}

const uci::type::RequirementAllocationCommandType& MissionPlanInputsType::getProposedRequirements() const {
  return getProposedRequirements_();
}

uci::type::RequirementAllocationCommandType& MissionPlanInputsType::getProposedRequirements() {
  return getProposedRequirements_();
}

uci::type::MissionPlanInputsType& MissionPlanInputsType::setProposedRequirements(const uci::type::RequirementAllocationCommandType& accessor) {
  enableProposedRequirements();
  if (&accessor != proposedRequirements_Accessor.get()) {
    proposedRequirements_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool MissionPlanInputsType::hasProposedRequirements() const noexcept {
  return static_cast<bool>(proposedRequirements_Accessor);
}

uci::type::RequirementAllocationCommandType& MissionPlanInputsType::enableProposedRequirements(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::requirementAllocationCommandType : type};
  if ((!proposedRequirements_Accessor) || (proposedRequirements_Accessor->getAccessorType() != requestedType)) {
    proposedRequirements_Accessor = RequirementAllocationCommandType::create(requestedType);
    if (!proposedRequirements_Accessor) {
      throw uci::base::UCIException("Error in enableProposedRequirements(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *proposedRequirements_Accessor;
}

uci::type::MissionPlanInputsType& MissionPlanInputsType::clearProposedRequirements() noexcept {
  proposedRequirements_Accessor.reset();
  return *this;
}

const uci::type::MissionPlanInputsType::AssociationConstraint& MissionPlanInputsType::getAssociationConstraint() const {
  return *associationConstraint_Accessor;
}

uci::type::MissionPlanInputsType::AssociationConstraint& MissionPlanInputsType::getAssociationConstraint() {
  return *associationConstraint_Accessor;
}

uci::type::MissionPlanInputsType& MissionPlanInputsType::setAssociationConstraint(const uci::type::MissionPlanInputsType::AssociationConstraint& accessor) {
  if (&accessor != associationConstraint_Accessor.get()) {
    associationConstraint_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

xs::Boolean MissionPlanInputsType::getResultsInMissionPlan() const {
  return resultsInMissionPlan_Accessor;
}

uci::type::MissionPlanInputsType& MissionPlanInputsType::setResultsInMissionPlan(xs::Boolean value) {
  resultsInMissionPlan_Accessor = value;
  return *this;
}


uci::type::PlanPartsType& MissionPlanInputsType::getOutputPlanType_() const {
  if (outputPlanType_Accessor) {
    return *outputPlanType_Accessor;
  }
  throw uci::base::UCIException("Error in getOutputPlanType(): An attempt was made to get an optional field that was not enabled, call hasOutputPlanType() to determine if it is safe to call getOutputPlanType()");
}

const uci::type::PlanPartsType& MissionPlanInputsType::getOutputPlanType() const {
  return getOutputPlanType_();
}

uci::type::PlanPartsType& MissionPlanInputsType::getOutputPlanType() {
  return getOutputPlanType_();
}

uci::type::MissionPlanInputsType& MissionPlanInputsType::setOutputPlanType(const uci::type::PlanPartsType& accessor) {
  enableOutputPlanType(accessor.getAccessorType());
  if (&accessor != outputPlanType_Accessor.get()) {
    outputPlanType_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool MissionPlanInputsType::hasOutputPlanType() const noexcept {
  return static_cast<bool>(outputPlanType_Accessor);
}

uci::type::PlanPartsType& MissionPlanInputsType::enableOutputPlanType(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::planPartsType : type};
  if ((!outputPlanType_Accessor) || (outputPlanType_Accessor->getAccessorType() != requestedType)) {
    outputPlanType_Accessor = PlanPartsType::create(requestedType);
    if (!outputPlanType_Accessor) {
      throw uci::base::UCIException("Error in enableOutputPlanType(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *outputPlanType_Accessor;
}

uci::type::MissionPlanInputsType& MissionPlanInputsType::clearOutputPlanType() noexcept {
  outputPlanType_Accessor.reset();
  return *this;
}

std::unique_ptr<MissionPlanInputsType> MissionPlanInputsType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::missionPlanInputsType : type};
  return (requestedType == uci::type::accessorType::missionPlanInputsType) ? boost::make_unique<MissionPlanInputsType>() : nullptr;
}

/**  */
namespace MissionPlanInputsType_Names {

constexpr const char* Extern_Type_Name{"MissionPlanInputsType"};
constexpr const char* PlanningCandidate_Name{"PlanningCandidate"};
constexpr const char* ProposedRequirementPlans_Name{"ProposedRequirementPlans"};
constexpr const char* ProposedRequirements_Name{"ProposedRequirements"};
constexpr const char* AssociationConstraint_Name{"AssociationConstraint"};
constexpr const char* ResultsInMissionPlan_Name{"ResultsInMissionPlan"};
constexpr const char* OutputPlanType_Name{"OutputPlanType"};

} // namespace MissionPlanInputsType_Names

void MissionPlanInputsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::MissionPlanInputsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = MissionPlanInputsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + MissionPlanInputsType_Names::PlanningCandidate_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::MissionPlanInputsType::PlanningCandidate& boundedList = accessor.getPlanningCandidate();
        const uci::type::MissionPlanInputsType::PlanningCandidate::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::RequirementPlanningCandidateType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + MissionPlanInputsType_Names::ProposedRequirementPlans_Name) {
      RequirementPlanConstraintType::deserialize(valueType.second, accessor.enableProposedRequirementPlans(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MissionPlanInputsType_Names::ProposedRequirements_Name) {
      RequirementAllocationCommandType::deserialize(valueType.second, accessor.enableProposedRequirements(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MissionPlanInputsType_Names::AssociationConstraint_Name) {
      uci::type::MissionPlanInputsType::AssociationConstraint& boundedList = accessor.getAssociationConstraint();
      const uci::type::MissionPlanInputsType::AssociationConstraint::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::RequirementAssociationConstraintType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MissionPlanInputsType_Names::ResultsInMissionPlan_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setResultsInMissionPlan(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + MissionPlanInputsType_Names::OutputPlanType_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableOutputPlanType(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    }
  }
  PlanInputsCoreType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string MissionPlanInputsType::serialize(const uci::type::MissionPlanInputsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? MissionPlanInputsType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, MissionPlanInputsType_Names::Extern_Type_Name);
  }
  PlanInputsCoreType::serialize(accessor, node, "", false, false, false);
  {
    const uci::type::MissionPlanInputsType::PlanningCandidate& boundedList = accessor.getPlanningCandidate();
    for (uci::type::MissionPlanInputsType::PlanningCandidate::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::RequirementPlanningCandidateType::serialize(boundedList.at(i), node, MissionPlanInputsType_Names::PlanningCandidate_Name);
    }
  }
  if (accessor.hasProposedRequirementPlans()) {
    RequirementPlanConstraintType::serialize(accessor.getProposedRequirementPlans(), node, MissionPlanInputsType_Names::ProposedRequirementPlans_Name);
  }
  if (accessor.hasProposedRequirements()) {
    RequirementAllocationCommandType::serialize(accessor.getProposedRequirements(), node, MissionPlanInputsType_Names::ProposedRequirements_Name);
  }
  {
    const uci::type::MissionPlanInputsType::AssociationConstraint& boundedList = accessor.getAssociationConstraint();
    for (uci::type::MissionPlanInputsType::AssociationConstraint::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::RequirementAssociationConstraintType::serialize(boundedList.at(i), node, MissionPlanInputsType_Names::AssociationConstraint_Name);
    }
  }
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getResultsInMissionPlan(), node, MissionPlanInputsType_Names::ResultsInMissionPlan_Name);
  if (accessor.hasOutputPlanType()) {
    PlanPartsType::serialize(accessor.getOutputPlanType(), node, MissionPlanInputsType_Names::OutputPlanType_Name);
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

uci::type::MissionPlanInputsType& MissionPlanInputsType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::MissionPlanInputsType>().release());
}

uci::type::MissionPlanInputsType& MissionPlanInputsType::create(const uci::type::MissionPlanInputsType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::MissionPlanInputsType> newAccessor{boost::make_unique<asb_uci::type::MissionPlanInputsType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void MissionPlanInputsType::destroy(uci::type::MissionPlanInputsType& accessor) {
  delete dynamic_cast<asb_uci::type::MissionPlanInputsType*>(&accessor);
}

} // namespace type

} // namespace uci

