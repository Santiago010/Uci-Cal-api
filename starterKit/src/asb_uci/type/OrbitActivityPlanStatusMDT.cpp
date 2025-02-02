/** @file OrbitActivityPlanStatusMDT.cpp
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

#include "../../../include/asb_uci/type/OrbitActivityPlanStatusMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/OrbitActivityPlanID_Type.h"
#include "../../../include/asb_uci/type/OrbitActivityPlanStatusType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitActivityPlanID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitActivityPlanStatusMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitActivityPlanStatusType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OrbitActivityPlanStatusMDT::OrbitActivityPlanStatusMDT()
  : planID_Accessor{boost::make_unique<OrbitActivityPlanID_Type>()},
    status_Accessor{boost::make_unique<OrbitActivityPlanStatusType>()} {
}

OrbitActivityPlanStatusMDT::~OrbitActivityPlanStatusMDT() = default;

void OrbitActivityPlanStatusMDT::copy(const uci::type::OrbitActivityPlanStatusMDT& accessor) {
  copyImpl(accessor, false);
}

void OrbitActivityPlanStatusMDT::copyImpl(const uci::type::OrbitActivityPlanStatusMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const OrbitActivityPlanStatusMDT&>(accessor);
    setPlanID(*(accessorImpl.planID_Accessor));
    setStatus(*(accessorImpl.status_Accessor));
  }
}

void OrbitActivityPlanStatusMDT::reset() noexcept {
  planID_Accessor->reset();
  status_Accessor->reset();
}

const uci::type::OrbitActivityPlanID_Type& OrbitActivityPlanStatusMDT::getPlanID() const {
  return *planID_Accessor;
}

uci::type::OrbitActivityPlanID_Type& OrbitActivityPlanStatusMDT::getPlanID() {
  return *planID_Accessor;
}

uci::type::OrbitActivityPlanStatusMDT& OrbitActivityPlanStatusMDT::setPlanID(const uci::type::OrbitActivityPlanID_Type& accessor) {
  if (&accessor != planID_Accessor.get()) {
    planID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::OrbitActivityPlanStatusType& OrbitActivityPlanStatusMDT::getStatus() const {
  return *status_Accessor;
}

uci::type::OrbitActivityPlanStatusType& OrbitActivityPlanStatusMDT::getStatus() {
  return *status_Accessor;
}

uci::type::OrbitActivityPlanStatusMDT& OrbitActivityPlanStatusMDT::setStatus(const uci::type::OrbitActivityPlanStatusType& accessor) {
  if (&accessor != status_Accessor.get()) {
    status_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<OrbitActivityPlanStatusMDT> OrbitActivityPlanStatusMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitActivityPlanStatusMDT : type};
  return (requestedType == uci::type::accessorType::orbitActivityPlanStatusMDT) ? boost::make_unique<OrbitActivityPlanStatusMDT>() : nullptr;
}

/**  */
namespace OrbitActivityPlanStatusMDT_Names {

constexpr const char* Extern_Type_Name{"OrbitActivityPlanStatusMDT"};
constexpr const char* PlanID_Name{"PlanID"};
constexpr const char* Status_Name{"Status"};

} // namespace OrbitActivityPlanStatusMDT_Names

void OrbitActivityPlanStatusMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitActivityPlanStatusMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitActivityPlanStatusMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitActivityPlanStatusMDT_Names::PlanID_Name) {
      OrbitActivityPlanID_Type::deserialize(valueType.second, accessor.getPlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitActivityPlanStatusMDT_Names::Status_Name) {
      OrbitActivityPlanStatusType::deserialize(valueType.second, accessor.getStatus(), nodeName, nsPrefix);
    }
  }
}

std::string OrbitActivityPlanStatusMDT::serialize(const uci::type::OrbitActivityPlanStatusMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? OrbitActivityPlanStatusMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitActivityPlanStatusMDT_Names::Extern_Type_Name);
  }
  OrbitActivityPlanID_Type::serialize(accessor.getPlanID(), node, OrbitActivityPlanStatusMDT_Names::PlanID_Name);
  OrbitActivityPlanStatusType::serialize(accessor.getStatus(), node, OrbitActivityPlanStatusMDT_Names::Status_Name);
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

uci::type::OrbitActivityPlanStatusMDT& OrbitActivityPlanStatusMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OrbitActivityPlanStatusMDT>().release());
}

uci::type::OrbitActivityPlanStatusMDT& OrbitActivityPlanStatusMDT::create(const uci::type::OrbitActivityPlanStatusMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OrbitActivityPlanStatusMDT> newAccessor{boost::make_unique<asb_uci::type::OrbitActivityPlanStatusMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OrbitActivityPlanStatusMDT::destroy(uci::type::OrbitActivityPlanStatusMDT& accessor) {
  delete dynamic_cast<asb_uci::type::OrbitActivityPlanStatusMDT*>(&accessor);
}

} // namespace type

} // namespace uci

