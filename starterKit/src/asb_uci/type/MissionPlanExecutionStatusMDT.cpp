/** @file MissionPlanExecutionStatusMDT.cpp
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

#include "../../../include/asb_uci/type/MissionPlanExecutionStatusMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/MissionPlanExecutionStateType.h"
#include "../../../include/asb_uci/type/SystemID_Type.h"
#include "../../../include/asb_uci/type/SystemSourceEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MissionPlanExecutionStateType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MissionPlanExecutionStatusMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemSourceEnum.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

MissionPlanExecutionStatusMDT::MissionPlanExecutionStatusMDT()
  : systemID_Accessor{boost::make_unique<SystemID_Type>()},
    source_Accessor{boost::make_unique<SystemSourceEnum>()},
    planExecutionStatus_Accessor{boost::make_unique<PlanExecutionStatus>(0, SIZE_MAX)} {
}

MissionPlanExecutionStatusMDT::~MissionPlanExecutionStatusMDT() = default;

void MissionPlanExecutionStatusMDT::copy(const uci::type::MissionPlanExecutionStatusMDT& accessor) {
  copyImpl(accessor, false);
}

void MissionPlanExecutionStatusMDT::copyImpl(const uci::type::MissionPlanExecutionStatusMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const MissionPlanExecutionStatusMDT&>(accessor);
    setSystemID(*(accessorImpl.systemID_Accessor));
    setSource(*(accessorImpl.source_Accessor));
    setPlanExecutionStatus(*(accessorImpl.planExecutionStatus_Accessor));
  }
}

void MissionPlanExecutionStatusMDT::reset() noexcept {
  systemID_Accessor->reset();
  source_Accessor->reset();
  planExecutionStatus_Accessor->reset();
}

const uci::type::SystemID_Type& MissionPlanExecutionStatusMDT::getSystemID() const {
  return *systemID_Accessor;
}

uci::type::SystemID_Type& MissionPlanExecutionStatusMDT::getSystemID() {
  return *systemID_Accessor;
}

uci::type::MissionPlanExecutionStatusMDT& MissionPlanExecutionStatusMDT::setSystemID(const uci::type::SystemID_Type& accessor) {
  if (&accessor != systemID_Accessor.get()) {
    systemID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SystemSourceEnum& MissionPlanExecutionStatusMDT::getSource() const {
  return *source_Accessor;
}

uci::type::SystemSourceEnum& MissionPlanExecutionStatusMDT::getSource() {
  return *source_Accessor;
}

uci::type::MissionPlanExecutionStatusMDT& MissionPlanExecutionStatusMDT::setSource(const uci::type::SystemSourceEnum& accessor) {
  if (&accessor != source_Accessor.get()) {
    source_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::MissionPlanExecutionStatusMDT& MissionPlanExecutionStatusMDT::setSource(uci::type::SystemSourceEnum::EnumerationItem value) {
  source_Accessor->setValue(value);
  return *this;
}


const uci::type::MissionPlanExecutionStatusMDT::PlanExecutionStatus& MissionPlanExecutionStatusMDT::getPlanExecutionStatus() const {
  return *planExecutionStatus_Accessor;
}

uci::type::MissionPlanExecutionStatusMDT::PlanExecutionStatus& MissionPlanExecutionStatusMDT::getPlanExecutionStatus() {
  return *planExecutionStatus_Accessor;
}

uci::type::MissionPlanExecutionStatusMDT& MissionPlanExecutionStatusMDT::setPlanExecutionStatus(const uci::type::MissionPlanExecutionStatusMDT::PlanExecutionStatus& accessor) {
  if (&accessor != planExecutionStatus_Accessor.get()) {
    planExecutionStatus_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<MissionPlanExecutionStatusMDT> MissionPlanExecutionStatusMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::missionPlanExecutionStatusMDT : type};
  return (requestedType == uci::type::accessorType::missionPlanExecutionStatusMDT) ? boost::make_unique<MissionPlanExecutionStatusMDT>() : nullptr;
}

/**  */
namespace MissionPlanExecutionStatusMDT_Names {

constexpr const char* Extern_Type_Name{"MissionPlanExecutionStatusMDT"};
constexpr const char* SystemID_Name{"SystemID"};
constexpr const char* Source_Name{"Source"};
constexpr const char* PlanExecutionStatus_Name{"PlanExecutionStatus"};

} // namespace MissionPlanExecutionStatusMDT_Names

void MissionPlanExecutionStatusMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::MissionPlanExecutionStatusMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = MissionPlanExecutionStatusMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + MissionPlanExecutionStatusMDT_Names::SystemID_Name) {
      SystemID_Type::deserialize(valueType.second, accessor.getSystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MissionPlanExecutionStatusMDT_Names::Source_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getSource().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + MissionPlanExecutionStatusMDT_Names::PlanExecutionStatus_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::MissionPlanExecutionStatusMDT::PlanExecutionStatus& boundedList = accessor.getPlanExecutionStatus();
        const uci::type::MissionPlanExecutionStatusMDT::PlanExecutionStatus::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::MissionPlanExecutionStateType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string MissionPlanExecutionStatusMDT::serialize(const uci::type::MissionPlanExecutionStatusMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? MissionPlanExecutionStatusMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, MissionPlanExecutionStatusMDT_Names::Extern_Type_Name);
  }
  SystemID_Type::serialize(accessor.getSystemID(), node, MissionPlanExecutionStatusMDT_Names::SystemID_Name);
  SystemSourceEnum::serialize(accessor.getSource(), node, MissionPlanExecutionStatusMDT_Names::Source_Name, false);
  {
    const uci::type::MissionPlanExecutionStatusMDT::PlanExecutionStatus& boundedList = accessor.getPlanExecutionStatus();
    for (uci::type::MissionPlanExecutionStatusMDT::PlanExecutionStatus::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::MissionPlanExecutionStateType::serialize(boundedList.at(i), node, MissionPlanExecutionStatusMDT_Names::PlanExecutionStatus_Name);
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

uci::type::MissionPlanExecutionStatusMDT& MissionPlanExecutionStatusMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::MissionPlanExecutionStatusMDT>().release());
}

uci::type::MissionPlanExecutionStatusMDT& MissionPlanExecutionStatusMDT::create(const uci::type::MissionPlanExecutionStatusMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::MissionPlanExecutionStatusMDT> newAccessor{boost::make_unique<asb_uci::type::MissionPlanExecutionStatusMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void MissionPlanExecutionStatusMDT::destroy(uci::type::MissionPlanExecutionStatusMDT& accessor) {
  delete dynamic_cast<asb_uci::type::MissionPlanExecutionStatusMDT*>(&accessor);
}

} // namespace type

} // namespace uci

