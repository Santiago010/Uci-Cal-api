/** @file OrbitPlanCommandStatusMDT.cpp
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

#include "../../../include/asb_uci/type/OrbitPlanCommandStatusMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/OrbitPlanCommandID_Type.h"
#include "../../../include/asb_uci/type/OrbitPlanID_Type.h"
#include "../../../include/asb_uci/type/PlanCommandStatusType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitPlanCommandID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitPlanCommandStatusMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitPlanID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanCommandStatusType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OrbitPlanCommandStatusMDT::OrbitPlanCommandStatusMDT()
  : commandID_Accessor{boost::make_unique<OrbitPlanCommandID_Type>()},
    planningStatus_Accessor{boost::make_unique<PlanCommandStatusType>()},
    resultingPlanID_Accessor{boost::make_unique<ResultingPlanID>(0, SIZE_MAX)} {
}

OrbitPlanCommandStatusMDT::~OrbitPlanCommandStatusMDT() = default;

void OrbitPlanCommandStatusMDT::copy(const uci::type::OrbitPlanCommandStatusMDT& accessor) {
  copyImpl(accessor, false);
}

void OrbitPlanCommandStatusMDT::copyImpl(const uci::type::OrbitPlanCommandStatusMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const OrbitPlanCommandStatusMDT&>(accessor);
    setCommandID(*(accessorImpl.commandID_Accessor));
    setPlanningStatus(*(accessorImpl.planningStatus_Accessor));
    setResultingPlanID(*(accessorImpl.resultingPlanID_Accessor));
  }
}

void OrbitPlanCommandStatusMDT::reset() noexcept {
  commandID_Accessor->reset();
  planningStatus_Accessor->reset();
  resultingPlanID_Accessor->reset();
}

const uci::type::OrbitPlanCommandID_Type& OrbitPlanCommandStatusMDT::getCommandID() const {
  return *commandID_Accessor;
}

uci::type::OrbitPlanCommandID_Type& OrbitPlanCommandStatusMDT::getCommandID() {
  return *commandID_Accessor;
}

uci::type::OrbitPlanCommandStatusMDT& OrbitPlanCommandStatusMDT::setCommandID(const uci::type::OrbitPlanCommandID_Type& accessor) {
  if (&accessor != commandID_Accessor.get()) {
    commandID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PlanCommandStatusType& OrbitPlanCommandStatusMDT::getPlanningStatus() const {
  return *planningStatus_Accessor;
}

uci::type::PlanCommandStatusType& OrbitPlanCommandStatusMDT::getPlanningStatus() {
  return *planningStatus_Accessor;
}

uci::type::OrbitPlanCommandStatusMDT& OrbitPlanCommandStatusMDT::setPlanningStatus(const uci::type::PlanCommandStatusType& accessor) {
  if (&accessor != planningStatus_Accessor.get()) {
    planningStatus_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::OrbitPlanCommandStatusMDT::ResultingPlanID& OrbitPlanCommandStatusMDT::getResultingPlanID() const {
  return *resultingPlanID_Accessor;
}

uci::type::OrbitPlanCommandStatusMDT::ResultingPlanID& OrbitPlanCommandStatusMDT::getResultingPlanID() {
  return *resultingPlanID_Accessor;
}

uci::type::OrbitPlanCommandStatusMDT& OrbitPlanCommandStatusMDT::setResultingPlanID(const uci::type::OrbitPlanCommandStatusMDT::ResultingPlanID& accessor) {
  if (&accessor != resultingPlanID_Accessor.get()) {
    resultingPlanID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<OrbitPlanCommandStatusMDT> OrbitPlanCommandStatusMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitPlanCommandStatusMDT : type};
  return (requestedType == uci::type::accessorType::orbitPlanCommandStatusMDT) ? boost::make_unique<OrbitPlanCommandStatusMDT>() : nullptr;
}

/**  */
namespace OrbitPlanCommandStatusMDT_Names {

constexpr const char* Extern_Type_Name{"OrbitPlanCommandStatusMDT"};
constexpr const char* CommandID_Name{"CommandID"};
constexpr const char* PlanningStatus_Name{"PlanningStatus"};
constexpr const char* ResultingPlanID_Name{"ResultingPlanID"};

} // namespace OrbitPlanCommandStatusMDT_Names

void OrbitPlanCommandStatusMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitPlanCommandStatusMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitPlanCommandStatusMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitPlanCommandStatusMDT_Names::CommandID_Name) {
      OrbitPlanCommandID_Type::deserialize(valueType.second, accessor.getCommandID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitPlanCommandStatusMDT_Names::PlanningStatus_Name) {
      PlanCommandStatusType::deserialize(valueType.second, accessor.getPlanningStatus(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitPlanCommandStatusMDT_Names::ResultingPlanID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::OrbitPlanCommandStatusMDT::ResultingPlanID& boundedList = accessor.getResultingPlanID();
        const uci::type::OrbitPlanCommandStatusMDT::ResultingPlanID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::OrbitPlanID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string OrbitPlanCommandStatusMDT::serialize(const uci::type::OrbitPlanCommandStatusMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? OrbitPlanCommandStatusMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitPlanCommandStatusMDT_Names::Extern_Type_Name);
  }
  OrbitPlanCommandID_Type::serialize(accessor.getCommandID(), node, OrbitPlanCommandStatusMDT_Names::CommandID_Name);
  PlanCommandStatusType::serialize(accessor.getPlanningStatus(), node, OrbitPlanCommandStatusMDT_Names::PlanningStatus_Name);
  {
    const uci::type::OrbitPlanCommandStatusMDT::ResultingPlanID& boundedList = accessor.getResultingPlanID();
    for (uci::type::OrbitPlanCommandStatusMDT::ResultingPlanID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::OrbitPlanID_Type::serialize(boundedList.at(i), node, OrbitPlanCommandStatusMDT_Names::ResultingPlanID_Name);
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

uci::type::OrbitPlanCommandStatusMDT& OrbitPlanCommandStatusMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OrbitPlanCommandStatusMDT>().release());
}

uci::type::OrbitPlanCommandStatusMDT& OrbitPlanCommandStatusMDT::create(const uci::type::OrbitPlanCommandStatusMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OrbitPlanCommandStatusMDT> newAccessor{boost::make_unique<asb_uci::type::OrbitPlanCommandStatusMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OrbitPlanCommandStatusMDT::destroy(uci::type::OrbitPlanCommandStatusMDT& accessor) {
  delete dynamic_cast<asb_uci::type::OrbitPlanCommandStatusMDT*>(&accessor);
}

} // namespace type

} // namespace uci

