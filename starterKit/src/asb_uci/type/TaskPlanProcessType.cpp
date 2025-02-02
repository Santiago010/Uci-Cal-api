/** @file TaskPlanProcessType.cpp
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

#include "../../../include/asb_uci/type/TaskPlanProcessType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/PlanningProcessID_Type.h"
#include "../../../include/asb_uci/type/TaskPlanProcessDescriptionType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanningProcessID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TaskPlanProcessDescriptionType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TaskPlanProcessType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

TaskPlanProcessType::TaskPlanProcessType()
  : defaultPlanningProcessID_Accessor{boost::make_unique<PlanningProcessID_Type>()},
    process_Accessor{boost::make_unique<Process>(1, SIZE_MAX)} {
}

TaskPlanProcessType::~TaskPlanProcessType() = default;

void TaskPlanProcessType::copy(const uci::type::TaskPlanProcessType& accessor) {
  copyImpl(accessor, false);
}

void TaskPlanProcessType::copyImpl(const uci::type::TaskPlanProcessType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const TaskPlanProcessType&>(accessor);
    setDefaultPlanningProcessID(*(accessorImpl.defaultPlanningProcessID_Accessor));
    setProcess(*(accessorImpl.process_Accessor));
  }
}

void TaskPlanProcessType::reset() noexcept {
  defaultPlanningProcessID_Accessor->reset();
  process_Accessor->reset();
}

const uci::type::PlanningProcessID_Type& TaskPlanProcessType::getDefaultPlanningProcessID() const {
  return *defaultPlanningProcessID_Accessor;
}

uci::type::PlanningProcessID_Type& TaskPlanProcessType::getDefaultPlanningProcessID() {
  return *defaultPlanningProcessID_Accessor;
}

uci::type::TaskPlanProcessType& TaskPlanProcessType::setDefaultPlanningProcessID(const uci::type::PlanningProcessID_Type& accessor) {
  if (&accessor != defaultPlanningProcessID_Accessor.get()) {
    defaultPlanningProcessID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::TaskPlanProcessType::Process& TaskPlanProcessType::getProcess() const {
  return *process_Accessor;
}

uci::type::TaskPlanProcessType::Process& TaskPlanProcessType::getProcess() {
  return *process_Accessor;
}

uci::type::TaskPlanProcessType& TaskPlanProcessType::setProcess(const uci::type::TaskPlanProcessType::Process& accessor) {
  if (&accessor != process_Accessor.get()) {
    process_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<TaskPlanProcessType> TaskPlanProcessType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::taskPlanProcessType : type};
  return (requestedType == uci::type::accessorType::taskPlanProcessType) ? boost::make_unique<TaskPlanProcessType>() : nullptr;
}

/**  */
namespace TaskPlanProcessType_Names {

constexpr const char* Extern_Type_Name{"TaskPlanProcessType"};
constexpr const char* DefaultPlanningProcessID_Name{"DefaultPlanningProcessID"};
constexpr const char* Process_Name{"Process"};

} // namespace TaskPlanProcessType_Names

void TaskPlanProcessType::deserialize(const boost::property_tree::ptree& propTree, uci::type::TaskPlanProcessType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = TaskPlanProcessType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + TaskPlanProcessType_Names::DefaultPlanningProcessID_Name) {
      PlanningProcessID_Type::deserialize(valueType.second, accessor.getDefaultPlanningProcessID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + TaskPlanProcessType_Names::Process_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::TaskPlanProcessType::Process& boundedList = accessor.getProcess();
        const uci::type::TaskPlanProcessType::Process::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::TaskPlanProcessDescriptionType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string TaskPlanProcessType::serialize(const uci::type::TaskPlanProcessType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? TaskPlanProcessType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, TaskPlanProcessType_Names::Extern_Type_Name);
  }
  PlanningProcessID_Type::serialize(accessor.getDefaultPlanningProcessID(), node, TaskPlanProcessType_Names::DefaultPlanningProcessID_Name);
  {
    const uci::type::TaskPlanProcessType::Process& boundedList = accessor.getProcess();
    for (uci::type::TaskPlanProcessType::Process::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::TaskPlanProcessDescriptionType::serialize(boundedList.at(i), node, TaskPlanProcessType_Names::Process_Name);
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

uci::type::TaskPlanProcessType& TaskPlanProcessType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::TaskPlanProcessType>().release());
}

uci::type::TaskPlanProcessType& TaskPlanProcessType::create(const uci::type::TaskPlanProcessType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::TaskPlanProcessType> newAccessor{boost::make_unique<asb_uci::type::TaskPlanProcessType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void TaskPlanProcessType::destroy(uci::type::TaskPlanProcessType& accessor) {
  delete dynamic_cast<asb_uci::type::TaskPlanProcessType*>(&accessor);
}

} // namespace type

} // namespace uci

