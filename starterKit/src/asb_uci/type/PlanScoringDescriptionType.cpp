/** @file PlanScoringDescriptionType.cpp
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

#include "../../../include/asb_uci/type/PlanScoringDescriptionType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ApplicabilityType.h"
#include "../../../include/asb_uci/type/OpConstraintEnum.h"
#include "../../../include/asb_uci/type/ScoringProcessID_Type.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ApplicabilityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OpConstraintEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanScoringDescriptionType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ScoringProcessID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PlanScoringDescriptionType::PlanScoringDescriptionType()
  : scoringProcessID_Accessor{boost::make_unique<ScoringProcessID_Type>()},
    opConstraint_Accessor{boost::make_unique<OpConstraint>(0, 15)},
    applicableTo_Accessor{boost::make_unique<ApplicableTo>(0, SIZE_MAX)} {
}

PlanScoringDescriptionType::~PlanScoringDescriptionType() = default;

void PlanScoringDescriptionType::copy(const uci::type::PlanScoringDescriptionType& accessor) {
  copyImpl(accessor, false);
}

void PlanScoringDescriptionType::copyImpl(const uci::type::PlanScoringDescriptionType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PlanScoringDescriptionType&>(accessor);
    setScoringProcessID(*(accessorImpl.scoringProcessID_Accessor));
    setOpConstraint(*(accessorImpl.opConstraint_Accessor));
    setApplicableTo(*(accessorImpl.applicableTo_Accessor));
  }
}

void PlanScoringDescriptionType::reset() noexcept {
  scoringProcessID_Accessor->reset();
  opConstraint_Accessor->reset();
  applicableTo_Accessor->reset();
}

const uci::type::ScoringProcessID_Type& PlanScoringDescriptionType::getScoringProcessID() const {
  return *scoringProcessID_Accessor;
}

uci::type::ScoringProcessID_Type& PlanScoringDescriptionType::getScoringProcessID() {
  return *scoringProcessID_Accessor;
}

uci::type::PlanScoringDescriptionType& PlanScoringDescriptionType::setScoringProcessID(const uci::type::ScoringProcessID_Type& accessor) {
  if (&accessor != scoringProcessID_Accessor.get()) {
    scoringProcessID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PlanScoringDescriptionType::OpConstraint& PlanScoringDescriptionType::getOpConstraint() const {
  return *opConstraint_Accessor;
}

uci::type::PlanScoringDescriptionType::OpConstraint& PlanScoringDescriptionType::getOpConstraint() {
  return *opConstraint_Accessor;
}

uci::type::PlanScoringDescriptionType& PlanScoringDescriptionType::setOpConstraint(const uci::type::PlanScoringDescriptionType::OpConstraint& accessor) {
  if (&accessor != opConstraint_Accessor.get()) {
    opConstraint_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PlanScoringDescriptionType::ApplicableTo& PlanScoringDescriptionType::getApplicableTo() const {
  return *applicableTo_Accessor;
}

uci::type::PlanScoringDescriptionType::ApplicableTo& PlanScoringDescriptionType::getApplicableTo() {
  return *applicableTo_Accessor;
}

uci::type::PlanScoringDescriptionType& PlanScoringDescriptionType::setApplicableTo(const uci::type::PlanScoringDescriptionType::ApplicableTo& accessor) {
  if (&accessor != applicableTo_Accessor.get()) {
    applicableTo_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<PlanScoringDescriptionType> PlanScoringDescriptionType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::planScoringDescriptionType : type};
  return (requestedType == uci::type::accessorType::planScoringDescriptionType) ? boost::make_unique<PlanScoringDescriptionType>() : nullptr;
}

/**  */
namespace PlanScoringDescriptionType_Names {

constexpr const char* Extern_Type_Name{"PlanScoringDescriptionType"};
constexpr const char* ScoringProcessID_Name{"ScoringProcessID"};
constexpr const char* OpConstraint_Name{"OpConstraint"};
constexpr const char* ApplicableTo_Name{"ApplicableTo"};

} // namespace PlanScoringDescriptionType_Names

void PlanScoringDescriptionType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PlanScoringDescriptionType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PlanScoringDescriptionType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PlanScoringDescriptionType_Names::ScoringProcessID_Name) {
      ScoringProcessID_Type::deserialize(valueType.second, accessor.getScoringProcessID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PlanScoringDescriptionType_Names::OpConstraint_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PlanScoringDescriptionType::OpConstraint& boundedList = accessor.getOpConstraint();
        const uci::type::PlanScoringDescriptionType::OpConstraint::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + PlanScoringDescriptionType_Names::ApplicableTo_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PlanScoringDescriptionType::ApplicableTo& boundedList = accessor.getApplicableTo();
        const uci::type::PlanScoringDescriptionType::ApplicableTo::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1, asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix));
        asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string PlanScoringDescriptionType::serialize(const uci::type::PlanScoringDescriptionType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PlanScoringDescriptionType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PlanScoringDescriptionType_Names::Extern_Type_Name);
  }
  ScoringProcessID_Type::serialize(accessor.getScoringProcessID(), node, PlanScoringDescriptionType_Names::ScoringProcessID_Name);
  {
    const uci::type::PlanScoringDescriptionType::OpConstraint& boundedList = accessor.getOpConstraint();
    for (uci::type::PlanScoringDescriptionType::OpConstraint::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      OpConstraintEnum::serialize(boundedList.at(i), node, PlanScoringDescriptionType_Names::OpConstraint_Name, false);
    }
  }
  {
    const uci::type::PlanScoringDescriptionType::ApplicableTo& boundedList = accessor.getApplicableTo();
    for (uci::type::PlanScoringDescriptionType::ApplicableTo::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ApplicabilityType::serialize(boundedList.at(i), node, PlanScoringDescriptionType_Names::ApplicableTo_Name);
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

uci::type::PlanScoringDescriptionType& PlanScoringDescriptionType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PlanScoringDescriptionType>().release());
}

uci::type::PlanScoringDescriptionType& PlanScoringDescriptionType::create(const uci::type::PlanScoringDescriptionType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PlanScoringDescriptionType> newAccessor{boost::make_unique<asb_uci::type::PlanScoringDescriptionType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PlanScoringDescriptionType::destroy(uci::type::PlanScoringDescriptionType& accessor) {
  delete dynamic_cast<asb_uci::type::PlanScoringDescriptionType*>(&accessor);
}

} // namespace type

} // namespace uci

