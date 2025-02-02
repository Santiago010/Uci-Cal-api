/** @file TaskCommandType.cpp
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

#include "../../../include/asb_uci/type/TaskCommandType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/TaskCapabilityCommandType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TaskCapabilityCommandType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TaskCommandType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

TaskCommandType::TaskCommandType()
  : capability_Accessor{boost::make_unique<TaskCapabilityCommandType>()} {
}

TaskCommandType::~TaskCommandType() = default;

void TaskCommandType::copy(const uci::type::TaskCommandType& accessor) {
  copyImpl(accessor, false);
}

void TaskCommandType::copyImpl(const uci::type::TaskCommandType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const TaskCommandType&>(accessor);
    setCapability(*(accessorImpl.capability_Accessor));
  }
}

void TaskCommandType::reset() noexcept {
  capability_Accessor->reset();
}

const uci::type::TaskCapabilityCommandType& TaskCommandType::getCapability() const {
  return *capability_Accessor;
}

uci::type::TaskCapabilityCommandType& TaskCommandType::getCapability() {
  return *capability_Accessor;
}

uci::type::TaskCommandType& TaskCommandType::setCapability(const uci::type::TaskCapabilityCommandType& accessor) {
  if (&accessor != capability_Accessor.get()) {
    capability_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<TaskCommandType> TaskCommandType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::taskCommandType : type};
  return (requestedType == uci::type::accessorType::taskCommandType) ? boost::make_unique<TaskCommandType>() : nullptr;
}

/**  */
namespace TaskCommandType_Names {

constexpr const char* Extern_Type_Name{"TaskCommandType"};
constexpr const char* Capability_Name{"Capability"};

} // namespace TaskCommandType_Names

void TaskCommandType::deserialize(const boost::property_tree::ptree& propTree, uci::type::TaskCommandType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = TaskCommandType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + TaskCommandType_Names::Capability_Name) {
      TaskCapabilityCommandType::deserialize(valueType.second, accessor.getCapability(), nodeName, nsPrefix);
    }
  }
}

std::string TaskCommandType::serialize(const uci::type::TaskCommandType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? TaskCommandType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, TaskCommandType_Names::Extern_Type_Name);
  }
  TaskCapabilityCommandType::serialize(accessor.getCapability(), node, TaskCommandType_Names::Capability_Name);
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

uci::type::TaskCommandType& TaskCommandType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::TaskCommandType>().release());
}

uci::type::TaskCommandType& TaskCommandType::create(const uci::type::TaskCommandType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::TaskCommandType> newAccessor{boost::make_unique<asb_uci::type::TaskCommandType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void TaskCommandType::destroy(uci::type::TaskCommandType& accessor) {
  delete dynamic_cast<asb_uci::type::TaskCommandType*>(&accessor);
}

} // namespace type

} // namespace uci

