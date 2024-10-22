/** @file RequirementOptionsInputsType.cpp
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

#include "../../../include/asb_uci/type/RequirementOptionsInputsType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/DateTimeRangeType.h"
#include "../../../include/asb_uci/type/MissionEnvironmentConstraintType.h"
#include "../../../include/asb_uci/type/OpConstraintWeightingType.h"
#include "../../../include/asb_uci/type/PlanningDataSourceEnum.h"
#include "../../../include/asb_uci/type/RequirementAllocationCommandType.h"
#include "../../../include/asb_uci/type/RequirementAssociationConstraintType.h"
#include "../../../include/asb_uci/type/RequirementPlanConstraintType.h"
#include "../../../include/asb_uci/type/RequirementPlanningCandidateType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeRangeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MissionEnvironmentConstraintType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OpConstraintWeightingType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanningDataSourceEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementAllocationCommandType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementAssociationConstraintType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementOptionsInputsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementPlanConstraintType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementPlanningCandidateType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

RequirementOptionsInputsType::RequirementOptionsInputsType()
  : optionsCandidate_Accessor{boost::make_unique<OptionsCandidate>(0, SIZE_MAX)},
    planningDataSource_Accessor{boost::make_unique<PlanningDataSourceEnum>()},
    environmentOverride_Accessor{boost::make_unique<EnvironmentOverride>(0, SIZE_MAX)},
    opConstraint_Accessor{boost::make_unique<OpConstraint>(0, 15)},
    associationConstraint_Accessor{boost::make_unique<AssociationConstraint>(0, SIZE_MAX)} {
}

RequirementOptionsInputsType::~RequirementOptionsInputsType() = default;

void RequirementOptionsInputsType::copy(const uci::type::RequirementOptionsInputsType& accessor) {
  copyImpl(accessor, false);
}

void RequirementOptionsInputsType::copyImpl(const uci::type::RequirementOptionsInputsType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const RequirementOptionsInputsType&>(accessor);
    setOptionsCandidate(*(accessorImpl.optionsCandidate_Accessor));
    setPlanningDataSource(*(accessorImpl.planningDataSource_Accessor));
    if (accessorImpl.optionsWindow_Accessor) {
      setOptionsWindow(*(accessorImpl.optionsWindow_Accessor));
    } else {
      optionsWindow_Accessor.reset();
    }
    setEnvironmentOverride(*(accessorImpl.environmentOverride_Accessor));
    setOpConstraint(*(accessorImpl.opConstraint_Accessor));
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
  }
}

void RequirementOptionsInputsType::reset() noexcept {
  optionsCandidate_Accessor->reset();
  planningDataSource_Accessor->reset();
  optionsWindow_Accessor.reset();
  environmentOverride_Accessor->reset();
  opConstraint_Accessor->reset();
  proposedRequirementPlans_Accessor.reset();
  proposedRequirements_Accessor.reset();
  associationConstraint_Accessor->reset();
}

const uci::type::RequirementOptionsInputsType::OptionsCandidate& RequirementOptionsInputsType::getOptionsCandidate() const {
  return *optionsCandidate_Accessor;
}

uci::type::RequirementOptionsInputsType::OptionsCandidate& RequirementOptionsInputsType::getOptionsCandidate() {
  return *optionsCandidate_Accessor;
}

uci::type::RequirementOptionsInputsType& RequirementOptionsInputsType::setOptionsCandidate(const uci::type::RequirementOptionsInputsType::OptionsCandidate& accessor) {
  if (&accessor != optionsCandidate_Accessor.get()) {
    optionsCandidate_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PlanningDataSourceEnum& RequirementOptionsInputsType::getPlanningDataSource() const {
  return *planningDataSource_Accessor;
}

uci::type::PlanningDataSourceEnum& RequirementOptionsInputsType::getPlanningDataSource() {
  return *planningDataSource_Accessor;
}

uci::type::RequirementOptionsInputsType& RequirementOptionsInputsType::setPlanningDataSource(const uci::type::PlanningDataSourceEnum& accessor) {
  if (&accessor != planningDataSource_Accessor.get()) {
    planningDataSource_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::RequirementOptionsInputsType& RequirementOptionsInputsType::setPlanningDataSource(uci::type::PlanningDataSourceEnum::EnumerationItem value) {
  planningDataSource_Accessor->setValue(value);
  return *this;
}


uci::type::DateTimeRangeType& RequirementOptionsInputsType::getOptionsWindow_() const {
  if (optionsWindow_Accessor) {
    return *optionsWindow_Accessor;
  }
  throw uci::base::UCIException("Error in getOptionsWindow(): An attempt was made to get an optional field that was not enabled, call hasOptionsWindow() to determine if it is safe to call getOptionsWindow()");
}

const uci::type::DateTimeRangeType& RequirementOptionsInputsType::getOptionsWindow() const {
  return getOptionsWindow_();
}

uci::type::DateTimeRangeType& RequirementOptionsInputsType::getOptionsWindow() {
  return getOptionsWindow_();
}

uci::type::RequirementOptionsInputsType& RequirementOptionsInputsType::setOptionsWindow(const uci::type::DateTimeRangeType& accessor) {
  enableOptionsWindow();
  if (&accessor != optionsWindow_Accessor.get()) {
    optionsWindow_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RequirementOptionsInputsType::hasOptionsWindow() const noexcept {
  return static_cast<bool>(optionsWindow_Accessor);
}

uci::type::DateTimeRangeType& RequirementOptionsInputsType::enableOptionsWindow(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::dateTimeRangeType : type};
  if ((!optionsWindow_Accessor) || (optionsWindow_Accessor->getAccessorType() != requestedType)) {
    optionsWindow_Accessor = DateTimeRangeType::create(requestedType);
    if (!optionsWindow_Accessor) {
      throw uci::base::UCIException("Error in enableOptionsWindow(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *optionsWindow_Accessor;
}

uci::type::RequirementOptionsInputsType& RequirementOptionsInputsType::clearOptionsWindow() noexcept {
  optionsWindow_Accessor.reset();
  return *this;
}

const uci::type::RequirementOptionsInputsType::EnvironmentOverride& RequirementOptionsInputsType::getEnvironmentOverride() const {
  return *environmentOverride_Accessor;
}

uci::type::RequirementOptionsInputsType::EnvironmentOverride& RequirementOptionsInputsType::getEnvironmentOverride() {
  return *environmentOverride_Accessor;
}

uci::type::RequirementOptionsInputsType& RequirementOptionsInputsType::setEnvironmentOverride(const uci::type::RequirementOptionsInputsType::EnvironmentOverride& accessor) {
  if (&accessor != environmentOverride_Accessor.get()) {
    environmentOverride_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::RequirementOptionsInputsType::OpConstraint& RequirementOptionsInputsType::getOpConstraint() const {
  return *opConstraint_Accessor;
}

uci::type::RequirementOptionsInputsType::OpConstraint& RequirementOptionsInputsType::getOpConstraint() {
  return *opConstraint_Accessor;
}

uci::type::RequirementOptionsInputsType& RequirementOptionsInputsType::setOpConstraint(const uci::type::RequirementOptionsInputsType::OpConstraint& accessor) {
  if (&accessor != opConstraint_Accessor.get()) {
    opConstraint_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::RequirementPlanConstraintType& RequirementOptionsInputsType::getProposedRequirementPlans_() const {
  if (proposedRequirementPlans_Accessor) {
    return *proposedRequirementPlans_Accessor;
  }
  throw uci::base::UCIException("Error in getProposedRequirementPlans(): An attempt was made to get an optional field that was not enabled, call hasProposedRequirementPlans() to determine if it is safe to call getProposedRequirementPlans()");
}

const uci::type::RequirementPlanConstraintType& RequirementOptionsInputsType::getProposedRequirementPlans() const {
  return getProposedRequirementPlans_();
}

uci::type::RequirementPlanConstraintType& RequirementOptionsInputsType::getProposedRequirementPlans() {
  return getProposedRequirementPlans_();
}

uci::type::RequirementOptionsInputsType& RequirementOptionsInputsType::setProposedRequirementPlans(const uci::type::RequirementPlanConstraintType& accessor) {
  enableProposedRequirementPlans();
  if (&accessor != proposedRequirementPlans_Accessor.get()) {
    proposedRequirementPlans_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RequirementOptionsInputsType::hasProposedRequirementPlans() const noexcept {
  return static_cast<bool>(proposedRequirementPlans_Accessor);
}

uci::type::RequirementPlanConstraintType& RequirementOptionsInputsType::enableProposedRequirementPlans(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::requirementPlanConstraintType : type};
  if ((!proposedRequirementPlans_Accessor) || (proposedRequirementPlans_Accessor->getAccessorType() != requestedType)) {
    proposedRequirementPlans_Accessor = RequirementPlanConstraintType::create(requestedType);
    if (!proposedRequirementPlans_Accessor) {
      throw uci::base::UCIException("Error in enableProposedRequirementPlans(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *proposedRequirementPlans_Accessor;
}

uci::type::RequirementOptionsInputsType& RequirementOptionsInputsType::clearProposedRequirementPlans() noexcept {
  proposedRequirementPlans_Accessor.reset();
  return *this;
}

uci::type::RequirementAllocationCommandType& RequirementOptionsInputsType::getProposedRequirements_() const {
  if (proposedRequirements_Accessor) {
    return *proposedRequirements_Accessor;
  }
  throw uci::base::UCIException("Error in getProposedRequirements(): An attempt was made to get an optional field that was not enabled, call hasProposedRequirements() to determine if it is safe to call getProposedRequirements()");
}

const uci::type::RequirementAllocationCommandType& RequirementOptionsInputsType::getProposedRequirements() const {
  return getProposedRequirements_();
}

uci::type::RequirementAllocationCommandType& RequirementOptionsInputsType::getProposedRequirements() {
  return getProposedRequirements_();
}

uci::type::RequirementOptionsInputsType& RequirementOptionsInputsType::setProposedRequirements(const uci::type::RequirementAllocationCommandType& accessor) {
  enableProposedRequirements();
  if (&accessor != proposedRequirements_Accessor.get()) {
    proposedRequirements_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RequirementOptionsInputsType::hasProposedRequirements() const noexcept {
  return static_cast<bool>(proposedRequirements_Accessor);
}

uci::type::RequirementAllocationCommandType& RequirementOptionsInputsType::enableProposedRequirements(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::requirementAllocationCommandType : type};
  if ((!proposedRequirements_Accessor) || (proposedRequirements_Accessor->getAccessorType() != requestedType)) {
    proposedRequirements_Accessor = RequirementAllocationCommandType::create(requestedType);
    if (!proposedRequirements_Accessor) {
      throw uci::base::UCIException("Error in enableProposedRequirements(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *proposedRequirements_Accessor;
}

uci::type::RequirementOptionsInputsType& RequirementOptionsInputsType::clearProposedRequirements() noexcept {
  proposedRequirements_Accessor.reset();
  return *this;
}

const uci::type::RequirementOptionsInputsType::AssociationConstraint& RequirementOptionsInputsType::getAssociationConstraint() const {
  return *associationConstraint_Accessor;
}

uci::type::RequirementOptionsInputsType::AssociationConstraint& RequirementOptionsInputsType::getAssociationConstraint() {
  return *associationConstraint_Accessor;
}

uci::type::RequirementOptionsInputsType& RequirementOptionsInputsType::setAssociationConstraint(const uci::type::RequirementOptionsInputsType::AssociationConstraint& accessor) {
  if (&accessor != associationConstraint_Accessor.get()) {
    associationConstraint_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<RequirementOptionsInputsType> RequirementOptionsInputsType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::requirementOptionsInputsType : type};
  return (requestedType == uci::type::accessorType::requirementOptionsInputsType) ? boost::make_unique<RequirementOptionsInputsType>() : nullptr;
}

/**  */
namespace RequirementOptionsInputsType_Names {

constexpr const char* Extern_Type_Name{"RequirementOptionsInputsType"};
constexpr const char* OptionsCandidate_Name{"OptionsCandidate"};
constexpr const char* PlanningDataSource_Name{"PlanningDataSource"};
constexpr const char* OptionsWindow_Name{"OptionsWindow"};
constexpr const char* EnvironmentOverride_Name{"EnvironmentOverride"};
constexpr const char* OpConstraint_Name{"OpConstraint"};
constexpr const char* ProposedRequirementPlans_Name{"ProposedRequirementPlans"};
constexpr const char* ProposedRequirements_Name{"ProposedRequirements"};
constexpr const char* AssociationConstraint_Name{"AssociationConstraint"};

} // namespace RequirementOptionsInputsType_Names

void RequirementOptionsInputsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::RequirementOptionsInputsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RequirementOptionsInputsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RequirementOptionsInputsType_Names::OptionsCandidate_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::RequirementOptionsInputsType::OptionsCandidate& boundedList = accessor.getOptionsCandidate();
        const uci::type::RequirementOptionsInputsType::OptionsCandidate::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::RequirementPlanningCandidateType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + RequirementOptionsInputsType_Names::PlanningDataSource_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getPlanningDataSource().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + RequirementOptionsInputsType_Names::OptionsWindow_Name) {
      DateTimeRangeType::deserialize(valueType.second, accessor.enableOptionsWindow(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RequirementOptionsInputsType_Names::EnvironmentOverride_Name) {
      uci::type::RequirementOptionsInputsType::EnvironmentOverride& boundedList = accessor.getEnvironmentOverride();
      const uci::type::RequirementOptionsInputsType::EnvironmentOverride::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::MissionEnvironmentConstraintType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RequirementOptionsInputsType_Names::OpConstraint_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::RequirementOptionsInputsType::OpConstraint& boundedList = accessor.getOpConstraint();
        const uci::type::RequirementOptionsInputsType::OpConstraint::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::OpConstraintWeightingType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + RequirementOptionsInputsType_Names::ProposedRequirementPlans_Name) {
      RequirementPlanConstraintType::deserialize(valueType.second, accessor.enableProposedRequirementPlans(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RequirementOptionsInputsType_Names::ProposedRequirements_Name) {
      RequirementAllocationCommandType::deserialize(valueType.second, accessor.enableProposedRequirements(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RequirementOptionsInputsType_Names::AssociationConstraint_Name) {
      uci::type::RequirementOptionsInputsType::AssociationConstraint& boundedList = accessor.getAssociationConstraint();
      const uci::type::RequirementOptionsInputsType::AssociationConstraint::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::RequirementAssociationConstraintType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    }
  }
}

std::string RequirementOptionsInputsType::serialize(const uci::type::RequirementOptionsInputsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? RequirementOptionsInputsType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, RequirementOptionsInputsType_Names::Extern_Type_Name);
  }
  {
    const uci::type::RequirementOptionsInputsType::OptionsCandidate& boundedList = accessor.getOptionsCandidate();
    for (uci::type::RequirementOptionsInputsType::OptionsCandidate::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::RequirementPlanningCandidateType::serialize(boundedList.at(i), node, RequirementOptionsInputsType_Names::OptionsCandidate_Name);
    }
  }
  PlanningDataSourceEnum::serialize(accessor.getPlanningDataSource(), node, RequirementOptionsInputsType_Names::PlanningDataSource_Name, false);
  if (accessor.hasOptionsWindow()) {
    DateTimeRangeType::serialize(accessor.getOptionsWindow(), node, RequirementOptionsInputsType_Names::OptionsWindow_Name);
  }
  {
    const uci::type::RequirementOptionsInputsType::EnvironmentOverride& boundedList = accessor.getEnvironmentOverride();
    for (uci::type::RequirementOptionsInputsType::EnvironmentOverride::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::MissionEnvironmentConstraintType::serialize(boundedList.at(i), node, RequirementOptionsInputsType_Names::EnvironmentOverride_Name);
    }
  }
  {
    const uci::type::RequirementOptionsInputsType::OpConstraint& boundedList = accessor.getOpConstraint();
    for (uci::type::RequirementOptionsInputsType::OpConstraint::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::OpConstraintWeightingType::serialize(boundedList.at(i), node, RequirementOptionsInputsType_Names::OpConstraint_Name);
    }
  }
  if (accessor.hasProposedRequirementPlans()) {
    RequirementPlanConstraintType::serialize(accessor.getProposedRequirementPlans(), node, RequirementOptionsInputsType_Names::ProposedRequirementPlans_Name);
  }
  if (accessor.hasProposedRequirements()) {
    RequirementAllocationCommandType::serialize(accessor.getProposedRequirements(), node, RequirementOptionsInputsType_Names::ProposedRequirements_Name);
  }
  {
    const uci::type::RequirementOptionsInputsType::AssociationConstraint& boundedList = accessor.getAssociationConstraint();
    for (uci::type::RequirementOptionsInputsType::AssociationConstraint::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::RequirementAssociationConstraintType::serialize(boundedList.at(i), node, RequirementOptionsInputsType_Names::AssociationConstraint_Name);
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

uci::type::RequirementOptionsInputsType& RequirementOptionsInputsType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::RequirementOptionsInputsType>().release());
}

uci::type::RequirementOptionsInputsType& RequirementOptionsInputsType::create(const uci::type::RequirementOptionsInputsType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::RequirementOptionsInputsType> newAccessor{boost::make_unique<asb_uci::type::RequirementOptionsInputsType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void RequirementOptionsInputsType::destroy(uci::type::RequirementOptionsInputsType& accessor) {
  delete dynamic_cast<asb_uci::type::RequirementOptionsInputsType*>(&accessor);
}

} // namespace type

} // namespace uci

