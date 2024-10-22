/** @file RequirementTemplateInstantiationType.cpp
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

#include "../../../include/asb_uci/type/RequirementTemplateInstantiationType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/PlansReferenceType.h"
#include "../../../include/asb_uci/type/RequirementInstanceID_ChoiceType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlansReferenceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementInstanceID_ChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementTemplateInstantiationType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

RequirementTemplateInstantiationType::RequirementTemplateInstantiationType()
  : requirementID_Accessor{boost::make_unique<RequirementID>(1, SIZE_MAX)} {
}

RequirementTemplateInstantiationType::~RequirementTemplateInstantiationType() = default;

void RequirementTemplateInstantiationType::copy(const uci::type::RequirementTemplateInstantiationType& accessor) {
  copyImpl(accessor, false);
}

void RequirementTemplateInstantiationType::copyImpl(const uci::type::RequirementTemplateInstantiationType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const RequirementTemplateInstantiationType&>(accessor);
    setRequirementID(*(accessorImpl.requirementID_Accessor));
    if (accessorImpl.resultingPlans_Accessor) {
      setResultingPlans(*(accessorImpl.resultingPlans_Accessor));
    } else {
      resultingPlans_Accessor.reset();
    }
  }
}

void RequirementTemplateInstantiationType::reset() noexcept {
  requirementID_Accessor->reset();
  resultingPlans_Accessor.reset();
}

const uci::type::RequirementTemplateInstantiationType::RequirementID& RequirementTemplateInstantiationType::getRequirementID() const {
  return *requirementID_Accessor;
}

uci::type::RequirementTemplateInstantiationType::RequirementID& RequirementTemplateInstantiationType::getRequirementID() {
  return *requirementID_Accessor;
}

uci::type::RequirementTemplateInstantiationType& RequirementTemplateInstantiationType::setRequirementID(const uci::type::RequirementTemplateInstantiationType::RequirementID& accessor) {
  if (&accessor != requirementID_Accessor.get()) {
    requirementID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::PlansReferenceType& RequirementTemplateInstantiationType::getResultingPlans_() const {
  if (resultingPlans_Accessor) {
    return *resultingPlans_Accessor;
  }
  throw uci::base::UCIException("Error in getResultingPlans(): An attempt was made to get an optional field that was not enabled, call hasResultingPlans() to determine if it is safe to call getResultingPlans()");
}

const uci::type::PlansReferenceType& RequirementTemplateInstantiationType::getResultingPlans() const {
  return getResultingPlans_();
}

uci::type::PlansReferenceType& RequirementTemplateInstantiationType::getResultingPlans() {
  return getResultingPlans_();
}

uci::type::RequirementTemplateInstantiationType& RequirementTemplateInstantiationType::setResultingPlans(const uci::type::PlansReferenceType& accessor) {
  enableResultingPlans();
  if (&accessor != resultingPlans_Accessor.get()) {
    resultingPlans_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RequirementTemplateInstantiationType::hasResultingPlans() const noexcept {
  return static_cast<bool>(resultingPlans_Accessor);
}

uci::type::PlansReferenceType& RequirementTemplateInstantiationType::enableResultingPlans(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::plansReferenceType : type};
  if ((!resultingPlans_Accessor) || (resultingPlans_Accessor->getAccessorType() != requestedType)) {
    resultingPlans_Accessor = PlansReferenceType::create(requestedType);
    if (!resultingPlans_Accessor) {
      throw uci::base::UCIException("Error in enableResultingPlans(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *resultingPlans_Accessor;
}

uci::type::RequirementTemplateInstantiationType& RequirementTemplateInstantiationType::clearResultingPlans() noexcept {
  resultingPlans_Accessor.reset();
  return *this;
}

std::unique_ptr<RequirementTemplateInstantiationType> RequirementTemplateInstantiationType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::requirementTemplateInstantiationType : type};
  return (requestedType == uci::type::accessorType::requirementTemplateInstantiationType) ? boost::make_unique<RequirementTemplateInstantiationType>() : nullptr;
}

/**  */
namespace RequirementTemplateInstantiationType_Names {

constexpr const char* Extern_Type_Name{"RequirementTemplateInstantiationType"};
constexpr const char* RequirementID_Name{"RequirementID"};
constexpr const char* ResultingPlans_Name{"ResultingPlans"};

} // namespace RequirementTemplateInstantiationType_Names

void RequirementTemplateInstantiationType::deserialize(const boost::property_tree::ptree& propTree, uci::type::RequirementTemplateInstantiationType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RequirementTemplateInstantiationType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RequirementTemplateInstantiationType_Names::RequirementID_Name) {
      uci::type::RequirementTemplateInstantiationType::RequirementID& boundedList = accessor.getRequirementID();
      const uci::type::RequirementTemplateInstantiationType::RequirementID::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::RequirementInstanceID_ChoiceType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RequirementTemplateInstantiationType_Names::ResultingPlans_Name) {
      PlansReferenceType::deserialize(valueType.second, accessor.enableResultingPlans(), nodeName, nsPrefix);
    }
  }
}

std::string RequirementTemplateInstantiationType::serialize(const uci::type::RequirementTemplateInstantiationType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? RequirementTemplateInstantiationType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, RequirementTemplateInstantiationType_Names::Extern_Type_Name);
  }
  {
    const uci::type::RequirementTemplateInstantiationType::RequirementID& boundedList = accessor.getRequirementID();
    for (uci::type::RequirementTemplateInstantiationType::RequirementID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::RequirementInstanceID_ChoiceType::serialize(boundedList.at(i), node, RequirementTemplateInstantiationType_Names::RequirementID_Name);
    }
  }
  if (accessor.hasResultingPlans()) {
    PlansReferenceType::serialize(accessor.getResultingPlans(), node, RequirementTemplateInstantiationType_Names::ResultingPlans_Name);
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

uci::type::RequirementTemplateInstantiationType& RequirementTemplateInstantiationType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::RequirementTemplateInstantiationType>().release());
}

uci::type::RequirementTemplateInstantiationType& RequirementTemplateInstantiationType::create(const uci::type::RequirementTemplateInstantiationType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::RequirementTemplateInstantiationType> newAccessor{boost::make_unique<asb_uci::type::RequirementTemplateInstantiationType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void RequirementTemplateInstantiationType::destroy(uci::type::RequirementTemplateInstantiationType& accessor) {
  delete dynamic_cast<asb_uci::type::RequirementTemplateInstantiationType*>(&accessor);
}

} // namespace type

} // namespace uci

