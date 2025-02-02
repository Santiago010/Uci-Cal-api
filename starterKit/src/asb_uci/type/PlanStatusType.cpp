/** @file PlanStatusType.cpp
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

#include "../../../include/asb_uci/type/PlanStatusType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/PlanValidationStateEnum.h"
#include "../../../include/asb_uci/type/PlanningStateEnum.h"
#include "../../../include/asb_uci/util/DerivedTypesCopier.h"
#include "../../../include/asb_uci/util/DerivedTypesCreator.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/DerivedTypesSerializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanStatusType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanValidationStateEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanningStateEnum.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PlanStatusType::PlanStatusType()
  : planningState_Accessor{boost::make_unique<PlanningStateEnum>()},
    validationState_Accessor{boost::make_unique<PlanValidationStateEnum>()} {
}

PlanStatusType::~PlanStatusType() = default;

void PlanStatusType::copy(const uci::type::PlanStatusType& accessor) {
  copyImpl(accessor, false);
}

void PlanStatusType::copyImpl(const uci::type::PlanStatusType& accessor, const bool checkIfDerivation) {
  if (&accessor != this) {
    if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::planStatusType)) {
      const auto& accessorImpl = dynamic_cast<const PlanStatusType&>(accessor);
      setPlanningState(*(accessorImpl.planningState_Accessor));
      setValidationState(*(accessorImpl.validationState_Accessor));
    } else {
      asb_uci::util::DerivedTypesCopier::copy(accessor, *this);
    }
  }
}

void PlanStatusType::reset() noexcept {
  planningState_Accessor->reset();
  validationState_Accessor->reset();
}

const uci::type::PlanningStateEnum& PlanStatusType::getPlanningState() const {
  return *planningState_Accessor;
}

uci::type::PlanningStateEnum& PlanStatusType::getPlanningState() {
  return *planningState_Accessor;
}

uci::type::PlanStatusType& PlanStatusType::setPlanningState(const uci::type::PlanningStateEnum& accessor) {
  if (&accessor != planningState_Accessor.get()) {
    planningState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::PlanStatusType& PlanStatusType::setPlanningState(uci::type::PlanningStateEnum::EnumerationItem value) {
  planningState_Accessor->setValue(value);
  return *this;
}


const uci::type::PlanValidationStateEnum& PlanStatusType::getValidationState() const {
  return *validationState_Accessor;
}

uci::type::PlanValidationStateEnum& PlanStatusType::getValidationState() {
  return *validationState_Accessor;
}

uci::type::PlanStatusType& PlanStatusType::setValidationState(const uci::type::PlanValidationStateEnum& accessor) {
  if (&accessor != validationState_Accessor.get()) {
    validationState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::PlanStatusType& PlanStatusType::setValidationState(uci::type::PlanValidationStateEnum::EnumerationItem value) {
  validationState_Accessor->setValue(value);
  return *this;
}


std::unique_ptr<PlanStatusType> PlanStatusType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::planStatusType : type};
  return std::unique_ptr<PlanStatusType>(dynamic_cast<PlanStatusType*>(asb_uci::util::DerivedTypesCreator::create(requestedType)));
}

/**  */
namespace PlanStatusType_Names {

constexpr const char* Extern_Type_Name{"PlanStatusType"};
constexpr const char* PlanningState_Name{"PlanningState"};
constexpr const char* ValidationState_Name{"ValidationState"};

} // namespace PlanStatusType_Names

void PlanStatusType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PlanStatusType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PlanStatusType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PlanStatusType_Names::PlanningState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getPlanningState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + PlanStatusType_Names::ValidationState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getValidationState().setValueFromName(*value);
      }
    }
  }
}

std::string PlanStatusType::serialize(const uci::type::PlanStatusType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PlanStatusType_Names::Extern_Type_Name : nodeName)};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::planStatusType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      asb_uci::util::SerializationHelpers::addTypeAttribute(node, PlanStatusType_Names::Extern_Type_Name);
    }
    PlanningStateEnum::serialize(accessor.getPlanningState(), node, PlanStatusType_Names::PlanningState_Name, false);
    PlanValidationStateEnum::serialize(accessor.getValidationState(), node, PlanStatusType_Names::ValidationState_Name, false);
    if (createNode) {
      propTree.add_child(generatedNodeName, node);
    }
  } else {
    asb_uci::util::DerivedTypesSerializer::serialize(accessor, propTree, nodeName, createNode);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace asb_uci

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

uci::type::PlanStatusType& PlanStatusType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PlanStatusType>().release());
}

uci::type::PlanStatusType& PlanStatusType::create(const uci::type::PlanStatusType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PlanStatusType> newAccessor{boost::make_unique<asb_uci::type::PlanStatusType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PlanStatusType::destroy(uci::type::PlanStatusType& accessor) {
  delete dynamic_cast<asb_uci::type::PlanStatusType*>(&accessor);
}

} // namespace type

} // namespace uci

