/** @file RequirementPlanningResultType.cpp
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

#include "../../../include/asb_uci/type/RequirementPlanningResultType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/RequirementInstanceID_ChoiceType.h"
#include "../../../include/asb_uci/type/RequirementPlanningResultBaseType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementInstanceID_ChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementPlanningResultType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

RequirementPlanningResultType::RequirementPlanningResultType()
  : requirementID_Accessor{boost::make_unique<RequirementInstanceID_ChoiceType>()} {
}

RequirementPlanningResultType::~RequirementPlanningResultType() = default;

void RequirementPlanningResultType::copy(const uci::type::RequirementPlanningResultType& accessor) {
  copyImpl(accessor, false);
}

void RequirementPlanningResultType::copyImpl(const uci::type::RequirementPlanningResultType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    RequirementPlanningResultBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const RequirementPlanningResultType&>(accessor);
    setRequirementID(*(accessorImpl.requirementID_Accessor));
  }
}

void RequirementPlanningResultType::reset() noexcept {
  RequirementPlanningResultBaseType::reset();
  requirementID_Accessor->reset();
}

const uci::type::RequirementInstanceID_ChoiceType& RequirementPlanningResultType::getRequirementID() const {
  return *requirementID_Accessor;
}

uci::type::RequirementInstanceID_ChoiceType& RequirementPlanningResultType::getRequirementID() {
  return *requirementID_Accessor;
}

uci::type::RequirementPlanningResultType& RequirementPlanningResultType::setRequirementID(const uci::type::RequirementInstanceID_ChoiceType& accessor) {
  if (&accessor != requirementID_Accessor.get()) {
    requirementID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<RequirementPlanningResultType> RequirementPlanningResultType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::requirementPlanningResultType : type};
  return (requestedType == uci::type::accessorType::requirementPlanningResultType) ? boost::make_unique<RequirementPlanningResultType>() : nullptr;
}

/**  */
namespace RequirementPlanningResultType_Names {

constexpr const char* Extern_Type_Name{"RequirementPlanningResultType"};
constexpr const char* RequirementID_Name{"RequirementID"};

} // namespace RequirementPlanningResultType_Names

void RequirementPlanningResultType::deserialize(const boost::property_tree::ptree& propTree, uci::type::RequirementPlanningResultType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RequirementPlanningResultType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RequirementPlanningResultType_Names::RequirementID_Name) {
      RequirementInstanceID_ChoiceType::deserialize(valueType.second, accessor.getRequirementID(), nodeName, nsPrefix);
    }
  }
  RequirementPlanningResultBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string RequirementPlanningResultType::serialize(const uci::type::RequirementPlanningResultType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? RequirementPlanningResultType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, RequirementPlanningResultType_Names::Extern_Type_Name);
  }
  RequirementPlanningResultBaseType::serialize(accessor, node, "", false, false, false);
  RequirementInstanceID_ChoiceType::serialize(accessor.getRequirementID(), node, RequirementPlanningResultType_Names::RequirementID_Name);
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

uci::type::RequirementPlanningResultType& RequirementPlanningResultType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::RequirementPlanningResultType>().release());
}

uci::type::RequirementPlanningResultType& RequirementPlanningResultType::create(const uci::type::RequirementPlanningResultType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::RequirementPlanningResultType> newAccessor{boost::make_unique<asb_uci::type::RequirementPlanningResultType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void RequirementPlanningResultType::destroy(uci::type::RequirementPlanningResultType& accessor) {
  delete dynamic_cast<asb_uci::type::RequirementPlanningResultType*>(&accessor);
}

} // namespace type

} // namespace uci

