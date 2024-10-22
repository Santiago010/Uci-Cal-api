/** @file PrioritizationType.cpp
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

#include "../../../include/asb_uci/type/PrioritizationType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ComparableRankingType.h"
#include "../../../include/asb_uci/type/RequirementTaxonomyType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ComparableRankingType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PrioritizationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementTaxonomyType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PrioritizationType::PrioritizationType()
  : priorityValue_Accessor{boost::make_unique<ComparableRankingType>()} {
}

PrioritizationType::~PrioritizationType() = default;

void PrioritizationType::copy(const uci::type::PrioritizationType& accessor) {
  copyImpl(accessor, false);
}

void PrioritizationType::copyImpl(const uci::type::PrioritizationType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PrioritizationType&>(accessor);
    setPriorityValue(*(accessorImpl.priorityValue_Accessor));
    if (accessorImpl.requirementType_Accessor) {
      setRequirementType(*(accessorImpl.requirementType_Accessor));
    } else {
      requirementType_Accessor.reset();
    }
  }
}

void PrioritizationType::reset() noexcept {
  priorityValue_Accessor->reset();
  requirementType_Accessor.reset();
}

const uci::type::ComparableRankingType& PrioritizationType::getPriorityValue() const {
  return *priorityValue_Accessor;
}

uci::type::ComparableRankingType& PrioritizationType::getPriorityValue() {
  return *priorityValue_Accessor;
}

uci::type::PrioritizationType& PrioritizationType::setPriorityValue(const uci::type::ComparableRankingType& accessor) {
  if (&accessor != priorityValue_Accessor.get()) {
    priorityValue_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::RequirementTaxonomyType& PrioritizationType::getRequirementType_() const {
  if (requirementType_Accessor) {
    return *requirementType_Accessor;
  }
  throw uci::base::UCIException("Error in getRequirementType(): An attempt was made to get an optional field that was not enabled, call hasRequirementType() to determine if it is safe to call getRequirementType()");
}

const uci::type::RequirementTaxonomyType& PrioritizationType::getRequirementType() const {
  return getRequirementType_();
}

uci::type::RequirementTaxonomyType& PrioritizationType::getRequirementType() {
  return getRequirementType_();
}

uci::type::PrioritizationType& PrioritizationType::setRequirementType(const uci::type::RequirementTaxonomyType& accessor) {
  enableRequirementType(accessor.getAccessorType());
  if (&accessor != requirementType_Accessor.get()) {
    requirementType_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool PrioritizationType::hasRequirementType() const noexcept {
  return static_cast<bool>(requirementType_Accessor);
}

uci::type::RequirementTaxonomyType& PrioritizationType::enableRequirementType(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::requirementTaxonomyType : type};
  if ((!requirementType_Accessor) || (requirementType_Accessor->getAccessorType() != requestedType)) {
    requirementType_Accessor = RequirementTaxonomyType::create(requestedType);
    if (!requirementType_Accessor) {
      throw uci::base::UCIException("Error in enableRequirementType(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *requirementType_Accessor;
}

uci::type::PrioritizationType& PrioritizationType::clearRequirementType() noexcept {
  requirementType_Accessor.reset();
  return *this;
}

std::unique_ptr<PrioritizationType> PrioritizationType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::prioritizationType : type};
  return (requestedType == uci::type::accessorType::prioritizationType) ? boost::make_unique<PrioritizationType>() : nullptr;
}

/**  */
namespace PrioritizationType_Names {

constexpr const char* Extern_Type_Name{"PrioritizationType"};
constexpr const char* PriorityValue_Name{"PriorityValue"};
constexpr const char* RequirementType_Name{"RequirementType"};

} // namespace PrioritizationType_Names

void PrioritizationType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PrioritizationType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PrioritizationType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PrioritizationType_Names::PriorityValue_Name) {
      ComparableRankingType::deserialize(valueType.second, accessor.getPriorityValue(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PrioritizationType_Names::RequirementType_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableRequirementType(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    }
  }
}

std::string PrioritizationType::serialize(const uci::type::PrioritizationType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PrioritizationType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PrioritizationType_Names::Extern_Type_Name);
  }
  ComparableRankingType::serialize(accessor.getPriorityValue(), node, PrioritizationType_Names::PriorityValue_Name);
  if (accessor.hasRequirementType()) {
    RequirementTaxonomyType::serialize(accessor.getRequirementType(), node, PrioritizationType_Names::RequirementType_Name);
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

uci::type::PrioritizationType& PrioritizationType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PrioritizationType>().release());
}

uci::type::PrioritizationType& PrioritizationType::create(const uci::type::PrioritizationType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PrioritizationType> newAccessor{boost::make_unique<asb_uci::type::PrioritizationType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PrioritizationType::destroy(uci::type::PrioritizationType& accessor) {
  delete dynamic_cast<asb_uci::type::PrioritizationType*>(&accessor);
}

} // namespace type

} // namespace uci

