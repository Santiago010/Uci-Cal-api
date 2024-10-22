/** @file TaskPlanConstraintType.cpp
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

#include "../../../include/asb_uci/type/TaskPlanConstraintType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/PlanChangeableConstraintsEnum.h"
#include "../../../include/asb_uci/type/TaskPlanID_Type.h"
#include "../../../include/asb_uci/type/TaskTypeEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanChangeableConstraintsEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TaskPlanConstraintType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TaskPlanID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TaskTypeEnum.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

TaskPlanConstraintType::TaskPlanConstraintType()
  : changeableAllocations_Accessor{boost::make_unique<PlanChangeableConstraintsEnum>()},
    taskType_Accessor{boost::make_unique<TaskType>(0, 21)} {
}

TaskPlanConstraintType::~TaskPlanConstraintType() = default;

void TaskPlanConstraintType::copy(const uci::type::TaskPlanConstraintType& accessor) {
  copyImpl(accessor, false);
}

void TaskPlanConstraintType::copyImpl(const uci::type::TaskPlanConstraintType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const TaskPlanConstraintType&>(accessor);
    if (accessorImpl.allocationPlanID_Accessor) {
      setAllocationPlanID(*(accessorImpl.allocationPlanID_Accessor));
    } else {
      allocationPlanID_Accessor.reset();
    }
    setChangeableAllocations(*(accessorImpl.changeableAllocations_Accessor));
    setTaskType(*(accessorImpl.taskType_Accessor));
  }
}

void TaskPlanConstraintType::reset() noexcept {
  allocationPlanID_Accessor.reset();
  changeableAllocations_Accessor->reset();
  taskType_Accessor->reset();
}

uci::type::TaskPlanID_Type& TaskPlanConstraintType::getAllocationPlanID_() const {
  if (allocationPlanID_Accessor) {
    return *allocationPlanID_Accessor;
  }
  throw uci::base::UCIException("Error in getAllocationPlanID(): An attempt was made to get an optional field that was not enabled, call hasAllocationPlanID() to determine if it is safe to call getAllocationPlanID()");
}

const uci::type::TaskPlanID_Type& TaskPlanConstraintType::getAllocationPlanID() const {
  return getAllocationPlanID_();
}

uci::type::TaskPlanID_Type& TaskPlanConstraintType::getAllocationPlanID() {
  return getAllocationPlanID_();
}

uci::type::TaskPlanConstraintType& TaskPlanConstraintType::setAllocationPlanID(const uci::type::TaskPlanID_Type& accessor) {
  enableAllocationPlanID();
  if (&accessor != allocationPlanID_Accessor.get()) {
    allocationPlanID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool TaskPlanConstraintType::hasAllocationPlanID() const noexcept {
  return static_cast<bool>(allocationPlanID_Accessor);
}

uci::type::TaskPlanID_Type& TaskPlanConstraintType::enableAllocationPlanID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::taskPlanID_Type : type};
  if ((!allocationPlanID_Accessor) || (allocationPlanID_Accessor->getAccessorType() != requestedType)) {
    allocationPlanID_Accessor = TaskPlanID_Type::create(requestedType);
    if (!allocationPlanID_Accessor) {
      throw uci::base::UCIException("Error in enableAllocationPlanID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *allocationPlanID_Accessor;
}

uci::type::TaskPlanConstraintType& TaskPlanConstraintType::clearAllocationPlanID() noexcept {
  allocationPlanID_Accessor.reset();
  return *this;
}

const uci::type::PlanChangeableConstraintsEnum& TaskPlanConstraintType::getChangeableAllocations() const {
  return *changeableAllocations_Accessor;
}

uci::type::PlanChangeableConstraintsEnum& TaskPlanConstraintType::getChangeableAllocations() {
  return *changeableAllocations_Accessor;
}

uci::type::TaskPlanConstraintType& TaskPlanConstraintType::setChangeableAllocations(const uci::type::PlanChangeableConstraintsEnum& accessor) {
  if (&accessor != changeableAllocations_Accessor.get()) {
    changeableAllocations_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::TaskPlanConstraintType& TaskPlanConstraintType::setChangeableAllocations(uci::type::PlanChangeableConstraintsEnum::EnumerationItem value) {
  changeableAllocations_Accessor->setValue(value);
  return *this;
}


const uci::type::TaskPlanConstraintType::TaskType& TaskPlanConstraintType::getTaskType() const {
  return *taskType_Accessor;
}

uci::type::TaskPlanConstraintType::TaskType& TaskPlanConstraintType::getTaskType() {
  return *taskType_Accessor;
}

uci::type::TaskPlanConstraintType& TaskPlanConstraintType::setTaskType(const uci::type::TaskPlanConstraintType::TaskType& accessor) {
  if (&accessor != taskType_Accessor.get()) {
    taskType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<TaskPlanConstraintType> TaskPlanConstraintType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::taskPlanConstraintType : type};
  return (requestedType == uci::type::accessorType::taskPlanConstraintType) ? boost::make_unique<TaskPlanConstraintType>() : nullptr;
}

/**  */
namespace TaskPlanConstraintType_Names {

constexpr const char* Extern_Type_Name{"TaskPlanConstraintType"};
constexpr const char* AllocationPlanID_Name{"AllocationPlanID"};
constexpr const char* ChangeableAllocations_Name{"ChangeableAllocations"};
constexpr const char* TaskType_Name{"TaskType"};

} // namespace TaskPlanConstraintType_Names

void TaskPlanConstraintType::deserialize(const boost::property_tree::ptree& propTree, uci::type::TaskPlanConstraintType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = TaskPlanConstraintType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + TaskPlanConstraintType_Names::AllocationPlanID_Name) {
      TaskPlanID_Type::deserialize(valueType.second, accessor.enableAllocationPlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + TaskPlanConstraintType_Names::ChangeableAllocations_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getChangeableAllocations().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + TaskPlanConstraintType_Names::TaskType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::TaskPlanConstraintType::TaskType& boundedList = accessor.getTaskType();
        const uci::type::TaskPlanConstraintType::TaskType::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    }
  }
}

std::string TaskPlanConstraintType::serialize(const uci::type::TaskPlanConstraintType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? TaskPlanConstraintType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, TaskPlanConstraintType_Names::Extern_Type_Name);
  }
  if (accessor.hasAllocationPlanID()) {
    TaskPlanID_Type::serialize(accessor.getAllocationPlanID(), node, TaskPlanConstraintType_Names::AllocationPlanID_Name);
  }
  PlanChangeableConstraintsEnum::serialize(accessor.getChangeableAllocations(), node, TaskPlanConstraintType_Names::ChangeableAllocations_Name, false);
  {
    const uci::type::TaskPlanConstraintType::TaskType& boundedList = accessor.getTaskType();
    for (uci::type::TaskPlanConstraintType::TaskType::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      TaskTypeEnum::serialize(boundedList.at(i), node, TaskPlanConstraintType_Names::TaskType_Name, false);
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

uci::type::TaskPlanConstraintType& TaskPlanConstraintType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::TaskPlanConstraintType>().release());
}

uci::type::TaskPlanConstraintType& TaskPlanConstraintType::create(const uci::type::TaskPlanConstraintType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::TaskPlanConstraintType> newAccessor{boost::make_unique<asb_uci::type::TaskPlanConstraintType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void TaskPlanConstraintType::destroy(uci::type::TaskPlanConstraintType& accessor) {
  delete dynamic_cast<asb_uci::type::TaskPlanConstraintType*>(&accessor);
}

} // namespace type

} // namespace uci

