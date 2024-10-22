/** @file RequirementGuidanceType.cpp
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

#include "../../../include/asb_uci/type/RequirementGuidanceType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/FailureGuidanceEnum.h"
#include "../../../include/asb_uci/type/RequirementUsageEnum.h"
#include "../../../include/asb_uci/type/TacticalPlanningAndExecutionEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/FailureGuidanceEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementGuidanceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementUsageEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TacticalPlanningAndExecutionEnum.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

RequirementGuidanceType::RequirementGuidanceType()
  : usage_Accessor{boost::make_unique<Usage>(0, 3)} {
}

RequirementGuidanceType::~RequirementGuidanceType() = default;

void RequirementGuidanceType::copy(const uci::type::RequirementGuidanceType& accessor) {
  copyImpl(accessor, false);
}

void RequirementGuidanceType::copyImpl(const uci::type::RequirementGuidanceType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const RequirementGuidanceType&>(accessor);
    setUsage(*(accessorImpl.usage_Accessor));
    if (accessorImpl.tacticalPlanningAndExecution_Accessor) {
      setTacticalPlanningAndExecution(*(accessorImpl.tacticalPlanningAndExecution_Accessor));
    } else {
      tacticalPlanningAndExecution_Accessor.reset();
    }
    if (accessorImpl.failure_Accessor) {
      setFailure(*(accessorImpl.failure_Accessor));
    } else {
      failure_Accessor.reset();
    }
  }
}

void RequirementGuidanceType::reset() noexcept {
  usage_Accessor->reset();
  tacticalPlanningAndExecution_Accessor.reset();
  failure_Accessor.reset();
}

const uci::type::RequirementGuidanceType::Usage& RequirementGuidanceType::getUsage() const {
  return *usage_Accessor;
}

uci::type::RequirementGuidanceType::Usage& RequirementGuidanceType::getUsage() {
  return *usage_Accessor;
}

uci::type::RequirementGuidanceType& RequirementGuidanceType::setUsage(const uci::type::RequirementGuidanceType::Usage& accessor) {
  if (&accessor != usage_Accessor.get()) {
    usage_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::TacticalPlanningAndExecutionEnum& RequirementGuidanceType::getTacticalPlanningAndExecution_() const {
  if (tacticalPlanningAndExecution_Accessor) {
    return *tacticalPlanningAndExecution_Accessor;
  }
  throw uci::base::UCIException("Error in getTacticalPlanningAndExecution(): An attempt was made to get an optional field that was not enabled, call hasTacticalPlanningAndExecution() to determine if it is safe to call getTacticalPlanningAndExecution()");
}

const uci::type::TacticalPlanningAndExecutionEnum& RequirementGuidanceType::getTacticalPlanningAndExecution() const {
  return getTacticalPlanningAndExecution_();
}

uci::type::TacticalPlanningAndExecutionEnum& RequirementGuidanceType::getTacticalPlanningAndExecution() {
  return getTacticalPlanningAndExecution_();
}

uci::type::RequirementGuidanceType& RequirementGuidanceType::setTacticalPlanningAndExecution(const uci::type::TacticalPlanningAndExecutionEnum& accessor) {
  enableTacticalPlanningAndExecution();
  if (&accessor != tacticalPlanningAndExecution_Accessor.get()) {
    tacticalPlanningAndExecution_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::RequirementGuidanceType& RequirementGuidanceType::setTacticalPlanningAndExecution(const uci::type::TacticalPlanningAndExecutionEnum::EnumerationItem value) {
  enableTacticalPlanningAndExecution().setValue(value);
  return *this;
}

bool RequirementGuidanceType::hasTacticalPlanningAndExecution() const noexcept {
  return static_cast<bool>(tacticalPlanningAndExecution_Accessor);
}

uci::type::TacticalPlanningAndExecutionEnum& RequirementGuidanceType::enableTacticalPlanningAndExecution(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::tacticalPlanningAndExecutionEnum : type};
  if ((!tacticalPlanningAndExecution_Accessor) || (tacticalPlanningAndExecution_Accessor->getAccessorType() != requestedType)) {
    tacticalPlanningAndExecution_Accessor = TacticalPlanningAndExecutionEnum::create(requestedType);
    if (!tacticalPlanningAndExecution_Accessor) {
      throw uci::base::UCIException("Error in enableTacticalPlanningAndExecution(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *tacticalPlanningAndExecution_Accessor;
}

uci::type::RequirementGuidanceType& RequirementGuidanceType::clearTacticalPlanningAndExecution() noexcept {
  tacticalPlanningAndExecution_Accessor.reset();
  return *this;
}

uci::type::FailureGuidanceEnum& RequirementGuidanceType::getFailure_() const {
  if (failure_Accessor) {
    return *failure_Accessor;
  }
  throw uci::base::UCIException("Error in getFailure(): An attempt was made to get an optional field that was not enabled, call hasFailure() to determine if it is safe to call getFailure()");
}

const uci::type::FailureGuidanceEnum& RequirementGuidanceType::getFailure() const {
  return getFailure_();
}

uci::type::FailureGuidanceEnum& RequirementGuidanceType::getFailure() {
  return getFailure_();
}

uci::type::RequirementGuidanceType& RequirementGuidanceType::setFailure(const uci::type::FailureGuidanceEnum& accessor) {
  enableFailure();
  if (&accessor != failure_Accessor.get()) {
    failure_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::RequirementGuidanceType& RequirementGuidanceType::setFailure(const uci::type::FailureGuidanceEnum::EnumerationItem value) {
  enableFailure().setValue(value);
  return *this;
}

bool RequirementGuidanceType::hasFailure() const noexcept {
  return static_cast<bool>(failure_Accessor);
}

uci::type::FailureGuidanceEnum& RequirementGuidanceType::enableFailure(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::failureGuidanceEnum : type};
  if ((!failure_Accessor) || (failure_Accessor->getAccessorType() != requestedType)) {
    failure_Accessor = FailureGuidanceEnum::create(requestedType);
    if (!failure_Accessor) {
      throw uci::base::UCIException("Error in enableFailure(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *failure_Accessor;
}

uci::type::RequirementGuidanceType& RequirementGuidanceType::clearFailure() noexcept {
  failure_Accessor.reset();
  return *this;
}

std::unique_ptr<RequirementGuidanceType> RequirementGuidanceType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::requirementGuidanceType : type};
  return (requestedType == uci::type::accessorType::requirementGuidanceType) ? boost::make_unique<RequirementGuidanceType>() : nullptr;
}

/**  */
namespace RequirementGuidanceType_Names {

constexpr const char* Extern_Type_Name{"RequirementGuidanceType"};
constexpr const char* Usage_Name{"Usage"};
constexpr const char* TacticalPlanningAndExecution_Name{"TacticalPlanningAndExecution"};
constexpr const char* Failure_Name{"Failure"};

} // namespace RequirementGuidanceType_Names

void RequirementGuidanceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::RequirementGuidanceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RequirementGuidanceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RequirementGuidanceType_Names::Usage_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::RequirementGuidanceType::Usage& boundedList = accessor.getUsage();
        const uci::type::RequirementGuidanceType::Usage::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + RequirementGuidanceType_Names::TacticalPlanningAndExecution_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableTacticalPlanningAndExecution().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + RequirementGuidanceType_Names::Failure_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableFailure().setValueFromName(*value);
      }
    }
  }
}

std::string RequirementGuidanceType::serialize(const uci::type::RequirementGuidanceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? RequirementGuidanceType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, RequirementGuidanceType_Names::Extern_Type_Name);
  }
  {
    const uci::type::RequirementGuidanceType::Usage& boundedList = accessor.getUsage();
    for (uci::type::RequirementGuidanceType::Usage::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      RequirementUsageEnum::serialize(boundedList.at(i), node, RequirementGuidanceType_Names::Usage_Name, false);
    }
  }
  if (accessor.hasTacticalPlanningAndExecution()) {
    TacticalPlanningAndExecutionEnum::serialize(accessor.getTacticalPlanningAndExecution(), node, RequirementGuidanceType_Names::TacticalPlanningAndExecution_Name, false);
  }
  if (accessor.hasFailure()) {
    FailureGuidanceEnum::serialize(accessor.getFailure(), node, RequirementGuidanceType_Names::Failure_Name, false);
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

uci::type::RequirementGuidanceType& RequirementGuidanceType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::RequirementGuidanceType>().release());
}

uci::type::RequirementGuidanceType& RequirementGuidanceType::create(const uci::type::RequirementGuidanceType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::RequirementGuidanceType> newAccessor{boost::make_unique<asb_uci::type::RequirementGuidanceType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void RequirementGuidanceType::destroy(uci::type::RequirementGuidanceType& accessor) {
  delete dynamic_cast<asb_uci::type::RequirementGuidanceType*>(&accessor);
}

} // namespace type

} // namespace uci

