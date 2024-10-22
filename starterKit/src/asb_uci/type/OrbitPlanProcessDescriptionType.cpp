/** @file OrbitPlanProcessDescriptionType.cpp
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

#include "../../../include/asb_uci/type/OrbitPlanProcessDescriptionType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/OrbitPlanPartsType.h"
#include "../../../include/asb_uci/type/PlanningDiscoveryBaseType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitPlanPartsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitPlanProcessDescriptionType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OrbitPlanProcessDescriptionType::OrbitPlanProcessDescriptionType()
  : output_Accessor{boost::make_unique<OrbitPlanPartsType>()} {
}

OrbitPlanProcessDescriptionType::~OrbitPlanProcessDescriptionType() = default;

void OrbitPlanProcessDescriptionType::copy(const uci::type::OrbitPlanProcessDescriptionType& accessor) {
  copyImpl(accessor, false);
}

void OrbitPlanProcessDescriptionType::copyImpl(const uci::type::OrbitPlanProcessDescriptionType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    PlanningDiscoveryBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const OrbitPlanProcessDescriptionType&>(accessor);
    setOutput(*(accessorImpl.output_Accessor));
  }
}

void OrbitPlanProcessDescriptionType::reset() noexcept {
  PlanningDiscoveryBaseType::reset();
  output_Accessor->reset();
}

const uci::type::OrbitPlanPartsType& OrbitPlanProcessDescriptionType::getOutput() const {
  return *output_Accessor;
}

uci::type::OrbitPlanPartsType& OrbitPlanProcessDescriptionType::getOutput() {
  return *output_Accessor;
}

uci::type::OrbitPlanProcessDescriptionType& OrbitPlanProcessDescriptionType::setOutput(const uci::type::OrbitPlanPartsType& accessor) {
  if (&accessor != output_Accessor.get()) {
    output_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<OrbitPlanProcessDescriptionType> OrbitPlanProcessDescriptionType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitPlanProcessDescriptionType : type};
  return (requestedType == uci::type::accessorType::orbitPlanProcessDescriptionType) ? boost::make_unique<OrbitPlanProcessDescriptionType>() : nullptr;
}

/**  */
namespace OrbitPlanProcessDescriptionType_Names {

constexpr const char* Extern_Type_Name{"OrbitPlanProcessDescriptionType"};
constexpr const char* Output_Name{"Output"};

} // namespace OrbitPlanProcessDescriptionType_Names

void OrbitPlanProcessDescriptionType::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitPlanProcessDescriptionType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitPlanProcessDescriptionType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitPlanProcessDescriptionType_Names::Output_Name) {
      OrbitPlanPartsType::deserialize(valueType.second, accessor.getOutput(), nodeName, nsPrefix);
    }
  }
  PlanningDiscoveryBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string OrbitPlanProcessDescriptionType::serialize(const uci::type::OrbitPlanProcessDescriptionType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? OrbitPlanProcessDescriptionType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitPlanProcessDescriptionType_Names::Extern_Type_Name);
  }
  PlanningDiscoveryBaseType::serialize(accessor, node, "", false, false, false);
  OrbitPlanPartsType::serialize(accessor.getOutput(), node, OrbitPlanProcessDescriptionType_Names::Output_Name);
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

uci::type::OrbitPlanProcessDescriptionType& OrbitPlanProcessDescriptionType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OrbitPlanProcessDescriptionType>().release());
}

uci::type::OrbitPlanProcessDescriptionType& OrbitPlanProcessDescriptionType::create(const uci::type::OrbitPlanProcessDescriptionType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OrbitPlanProcessDescriptionType> newAccessor{boost::make_unique<asb_uci::type::OrbitPlanProcessDescriptionType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OrbitPlanProcessDescriptionType::destroy(uci::type::OrbitPlanProcessDescriptionType& accessor) {
  delete dynamic_cast<asb_uci::type::OrbitPlanProcessDescriptionType*>(&accessor);
}

} // namespace type

} // namespace uci

