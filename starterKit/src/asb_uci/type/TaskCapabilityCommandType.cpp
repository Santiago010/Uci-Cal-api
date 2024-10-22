/** @file TaskCapabilityCommandType.cpp
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

#include "../../../include/asb_uci/type/TaskCapabilityCommandType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CapabilityCommandBaseType.h"
#include "../../../include/asb_uci/type/PlanReferenceType.h"
#include "../../../include/asb_uci/type/RequirementAllocationDetailsType.h"
#include "../../../include/asb_uci/type/RequirementConstraintsType.h"
#include "../../../include/asb_uci/type/TaskID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanReferenceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementAllocationDetailsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementConstraintsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TaskCapabilityCommandType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TaskID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

TaskCapabilityCommandType::TaskCapabilityCommandType()
  : taskID_Accessor{boost::make_unique<TaskID_Type>()} {
}

TaskCapabilityCommandType::~TaskCapabilityCommandType() = default;

void TaskCapabilityCommandType::copy(const uci::type::TaskCapabilityCommandType& accessor) {
  copyImpl(accessor, false);
}

void TaskCapabilityCommandType::copyImpl(const uci::type::TaskCapabilityCommandType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    CapabilityCommandBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const TaskCapabilityCommandType&>(accessor);
    setTaskID(*(accessorImpl.taskID_Accessor));
    if (accessorImpl.associatedPlan_Accessor) {
      setAssociatedPlan(*(accessorImpl.associatedPlan_Accessor));
    } else {
      associatedPlan_Accessor.reset();
    }
    if (accessorImpl.constraintOverride_Accessor) {
      setConstraintOverride(*(accessorImpl.constraintOverride_Accessor));
    } else {
      constraintOverride_Accessor.reset();
    }
    if (accessorImpl.otherOverride_Accessor) {
      setOtherOverride(*(accessorImpl.otherOverride_Accessor));
    } else {
      otherOverride_Accessor.reset();
    }
  }
}

void TaskCapabilityCommandType::reset() noexcept {
  CapabilityCommandBaseType::reset();
  taskID_Accessor->reset();
  associatedPlan_Accessor.reset();
  constraintOverride_Accessor.reset();
  otherOverride_Accessor.reset();
}

const uci::type::TaskID_Type& TaskCapabilityCommandType::getTaskID() const {
  return *taskID_Accessor;
}

uci::type::TaskID_Type& TaskCapabilityCommandType::getTaskID() {
  return *taskID_Accessor;
}

uci::type::TaskCapabilityCommandType& TaskCapabilityCommandType::setTaskID(const uci::type::TaskID_Type& accessor) {
  if (&accessor != taskID_Accessor.get()) {
    taskID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::PlanReferenceType& TaskCapabilityCommandType::getAssociatedPlan_() const {
  if (associatedPlan_Accessor) {
    return *associatedPlan_Accessor;
  }
  throw uci::base::UCIException("Error in getAssociatedPlan(): An attempt was made to get an optional field that was not enabled, call hasAssociatedPlan() to determine if it is safe to call getAssociatedPlan()");
}

const uci::type::PlanReferenceType& TaskCapabilityCommandType::getAssociatedPlan() const {
  return getAssociatedPlan_();
}

uci::type::PlanReferenceType& TaskCapabilityCommandType::getAssociatedPlan() {
  return getAssociatedPlan_();
}

uci::type::TaskCapabilityCommandType& TaskCapabilityCommandType::setAssociatedPlan(const uci::type::PlanReferenceType& accessor) {
  enableAssociatedPlan();
  if (&accessor != associatedPlan_Accessor.get()) {
    associatedPlan_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool TaskCapabilityCommandType::hasAssociatedPlan() const noexcept {
  return static_cast<bool>(associatedPlan_Accessor);
}

uci::type::PlanReferenceType& TaskCapabilityCommandType::enableAssociatedPlan(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::planReferenceType : type};
  if ((!associatedPlan_Accessor) || (associatedPlan_Accessor->getAccessorType() != requestedType)) {
    associatedPlan_Accessor = PlanReferenceType::create(requestedType);
    if (!associatedPlan_Accessor) {
      throw uci::base::UCIException("Error in enableAssociatedPlan(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *associatedPlan_Accessor;
}

uci::type::TaskCapabilityCommandType& TaskCapabilityCommandType::clearAssociatedPlan() noexcept {
  associatedPlan_Accessor.reset();
  return *this;
}

uci::type::RequirementConstraintsType& TaskCapabilityCommandType::getConstraintOverride_() const {
  if (constraintOverride_Accessor) {
    return *constraintOverride_Accessor;
  }
  throw uci::base::UCIException("Error in getConstraintOverride(): An attempt was made to get an optional field that was not enabled, call hasConstraintOverride() to determine if it is safe to call getConstraintOverride()");
}

const uci::type::RequirementConstraintsType& TaskCapabilityCommandType::getConstraintOverride() const {
  return getConstraintOverride_();
}

uci::type::RequirementConstraintsType& TaskCapabilityCommandType::getConstraintOverride() {
  return getConstraintOverride_();
}

uci::type::TaskCapabilityCommandType& TaskCapabilityCommandType::setConstraintOverride(const uci::type::RequirementConstraintsType& accessor) {
  enableConstraintOverride();
  if (&accessor != constraintOverride_Accessor.get()) {
    constraintOverride_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool TaskCapabilityCommandType::hasConstraintOverride() const noexcept {
  return static_cast<bool>(constraintOverride_Accessor);
}

uci::type::RequirementConstraintsType& TaskCapabilityCommandType::enableConstraintOverride(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::requirementConstraintsType : type};
  if ((!constraintOverride_Accessor) || (constraintOverride_Accessor->getAccessorType() != requestedType)) {
    constraintOverride_Accessor = RequirementConstraintsType::create(requestedType);
    if (!constraintOverride_Accessor) {
      throw uci::base::UCIException("Error in enableConstraintOverride(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *constraintOverride_Accessor;
}

uci::type::TaskCapabilityCommandType& TaskCapabilityCommandType::clearConstraintOverride() noexcept {
  constraintOverride_Accessor.reset();
  return *this;
}

uci::type::RequirementAllocationDetailsType& TaskCapabilityCommandType::getOtherOverride_() const {
  if (otherOverride_Accessor) {
    return *otherOverride_Accessor;
  }
  throw uci::base::UCIException("Error in getOtherOverride(): An attempt was made to get an optional field that was not enabled, call hasOtherOverride() to determine if it is safe to call getOtherOverride()");
}

const uci::type::RequirementAllocationDetailsType& TaskCapabilityCommandType::getOtherOverride() const {
  return getOtherOverride_();
}

uci::type::RequirementAllocationDetailsType& TaskCapabilityCommandType::getOtherOverride() {
  return getOtherOverride_();
}

uci::type::TaskCapabilityCommandType& TaskCapabilityCommandType::setOtherOverride(const uci::type::RequirementAllocationDetailsType& accessor) {
  enableOtherOverride();
  if (&accessor != otherOverride_Accessor.get()) {
    otherOverride_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool TaskCapabilityCommandType::hasOtherOverride() const noexcept {
  return static_cast<bool>(otherOverride_Accessor);
}

uci::type::RequirementAllocationDetailsType& TaskCapabilityCommandType::enableOtherOverride(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::requirementAllocationDetailsType : type};
  if ((!otherOverride_Accessor) || (otherOverride_Accessor->getAccessorType() != requestedType)) {
    otherOverride_Accessor = RequirementAllocationDetailsType::create(requestedType);
    if (!otherOverride_Accessor) {
      throw uci::base::UCIException("Error in enableOtherOverride(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *otherOverride_Accessor;
}

uci::type::TaskCapabilityCommandType& TaskCapabilityCommandType::clearOtherOverride() noexcept {
  otherOverride_Accessor.reset();
  return *this;
}

std::unique_ptr<TaskCapabilityCommandType> TaskCapabilityCommandType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::taskCapabilityCommandType : type};
  return (requestedType == uci::type::accessorType::taskCapabilityCommandType) ? boost::make_unique<TaskCapabilityCommandType>() : nullptr;
}

/**  */
namespace TaskCapabilityCommandType_Names {

constexpr const char* Extern_Type_Name{"TaskCapabilityCommandType"};
constexpr const char* TaskID_Name{"TaskID"};
constexpr const char* AssociatedPlan_Name{"AssociatedPlan"};
constexpr const char* ConstraintOverride_Name{"ConstraintOverride"};
constexpr const char* OtherOverride_Name{"OtherOverride"};

} // namespace TaskCapabilityCommandType_Names

void TaskCapabilityCommandType::deserialize(const boost::property_tree::ptree& propTree, uci::type::TaskCapabilityCommandType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = TaskCapabilityCommandType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + TaskCapabilityCommandType_Names::TaskID_Name) {
      TaskID_Type::deserialize(valueType.second, accessor.getTaskID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + TaskCapabilityCommandType_Names::AssociatedPlan_Name) {
      PlanReferenceType::deserialize(valueType.second, accessor.enableAssociatedPlan(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + TaskCapabilityCommandType_Names::ConstraintOverride_Name) {
      RequirementConstraintsType::deserialize(valueType.second, accessor.enableConstraintOverride(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + TaskCapabilityCommandType_Names::OtherOverride_Name) {
      RequirementAllocationDetailsType::deserialize(valueType.second, accessor.enableOtherOverride(), nodeName, nsPrefix);
    }
  }
  CapabilityCommandBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string TaskCapabilityCommandType::serialize(const uci::type::TaskCapabilityCommandType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? TaskCapabilityCommandType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, TaskCapabilityCommandType_Names::Extern_Type_Name);
  }
  CapabilityCommandBaseType::serialize(accessor, node, "", false, false, false);
  TaskID_Type::serialize(accessor.getTaskID(), node, TaskCapabilityCommandType_Names::TaskID_Name);
  if (accessor.hasAssociatedPlan()) {
    PlanReferenceType::serialize(accessor.getAssociatedPlan(), node, TaskCapabilityCommandType_Names::AssociatedPlan_Name);
  }
  if (accessor.hasConstraintOverride()) {
    RequirementConstraintsType::serialize(accessor.getConstraintOverride(), node, TaskCapabilityCommandType_Names::ConstraintOverride_Name);
  }
  if (accessor.hasOtherOverride()) {
    RequirementAllocationDetailsType::serialize(accessor.getOtherOverride(), node, TaskCapabilityCommandType_Names::OtherOverride_Name);
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

uci::type::TaskCapabilityCommandType& TaskCapabilityCommandType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::TaskCapabilityCommandType>().release());
}

uci::type::TaskCapabilityCommandType& TaskCapabilityCommandType::create(const uci::type::TaskCapabilityCommandType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::TaskCapabilityCommandType> newAccessor{boost::make_unique<asb_uci::type::TaskCapabilityCommandType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void TaskCapabilityCommandType::destroy(uci::type::TaskCapabilityCommandType& accessor) {
  delete dynamic_cast<asb_uci::type::TaskCapabilityCommandType*>(&accessor);
}

} // namespace type

} // namespace uci

