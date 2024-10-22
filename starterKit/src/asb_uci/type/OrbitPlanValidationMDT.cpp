/** @file OrbitPlanValidationMDT.cpp
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

#include "../../../include/asb_uci/type/OrbitPlanValidationMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CompletionStatusType.h"
#include "../../../include/asb_uci/type/IncompleteProcessingType.h"
#include "../../../include/asb_uci/type/OrbitPlanID_Type.h"
#include "../../../include/asb_uci/type/OrbitPlanValidationID_Type.h"
#include "../../../include/asb_uci/type/OrbitPlanValidationInvalidSequenceType.h"
#include "../../../include/asb_uci/type/PlanValidationStateEnum.h"
#include "../../../include/asb_uci/type/ValidatorType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CompletionStatusType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IncompleteProcessingType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitPlanID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitPlanValidationID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitPlanValidationInvalidSequenceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitPlanValidationMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanValidationStateEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ValidatorType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OrbitPlanValidationMDT::OrbitPlanValidationMDT()
  : orbitPlanValidationID_Accessor{boost::make_unique<OrbitPlanValidationID_Type>()},
    planID_Accessor{boost::make_unique<OrbitPlanID_Type>()},
    validator_Accessor{boost::make_unique<ValidatorType>()},
    validationState_Accessor{boost::make_unique<PlanValidationStateEnum>()},
    incompleteItem_Accessor{boost::make_unique<IncompleteItem>(0, SIZE_MAX)},
    invalidSequence_Accessor{boost::make_unique<InvalidSequence>(0, SIZE_MAX)} {
}

OrbitPlanValidationMDT::~OrbitPlanValidationMDT() = default;

void OrbitPlanValidationMDT::copy(const uci::type::OrbitPlanValidationMDT& accessor) {
  copyImpl(accessor, false);
}

void OrbitPlanValidationMDT::copyImpl(const uci::type::OrbitPlanValidationMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const OrbitPlanValidationMDT&>(accessor);
    setOrbitPlanValidationID(*(accessorImpl.orbitPlanValidationID_Accessor));
    setPlanID(*(accessorImpl.planID_Accessor));
    setValidator(*(accessorImpl.validator_Accessor));
    setValidationState(*(accessorImpl.validationState_Accessor));
    if (accessorImpl.completionStatus_Accessor) {
      setCompletionStatus(*(accessorImpl.completionStatus_Accessor));
    } else {
      completionStatus_Accessor.reset();
    }
    setIncompleteItem(*(accessorImpl.incompleteItem_Accessor));
    setInvalidSequence(*(accessorImpl.invalidSequence_Accessor));
    if (accessorImpl.modifiedPlanID_Accessor) {
      setModifiedPlanID(*(accessorImpl.modifiedPlanID_Accessor));
    } else {
      modifiedPlanID_Accessor.reset();
    }
  }
}

void OrbitPlanValidationMDT::reset() noexcept {
  orbitPlanValidationID_Accessor->reset();
  planID_Accessor->reset();
  validator_Accessor->reset();
  validationState_Accessor->reset();
  completionStatus_Accessor.reset();
  incompleteItem_Accessor->reset();
  invalidSequence_Accessor->reset();
  modifiedPlanID_Accessor.reset();
}

const uci::type::OrbitPlanValidationID_Type& OrbitPlanValidationMDT::getOrbitPlanValidationID() const {
  return *orbitPlanValidationID_Accessor;
}

uci::type::OrbitPlanValidationID_Type& OrbitPlanValidationMDT::getOrbitPlanValidationID() {
  return *orbitPlanValidationID_Accessor;
}

uci::type::OrbitPlanValidationMDT& OrbitPlanValidationMDT::setOrbitPlanValidationID(const uci::type::OrbitPlanValidationID_Type& accessor) {
  if (&accessor != orbitPlanValidationID_Accessor.get()) {
    orbitPlanValidationID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::OrbitPlanID_Type& OrbitPlanValidationMDT::getPlanID() const {
  return *planID_Accessor;
}

uci::type::OrbitPlanID_Type& OrbitPlanValidationMDT::getPlanID() {
  return *planID_Accessor;
}

uci::type::OrbitPlanValidationMDT& OrbitPlanValidationMDT::setPlanID(const uci::type::OrbitPlanID_Type& accessor) {
  if (&accessor != planID_Accessor.get()) {
    planID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ValidatorType& OrbitPlanValidationMDT::getValidator() const {
  return *validator_Accessor;
}

uci::type::ValidatorType& OrbitPlanValidationMDT::getValidator() {
  return *validator_Accessor;
}

uci::type::OrbitPlanValidationMDT& OrbitPlanValidationMDT::setValidator(const uci::type::ValidatorType& accessor) {
  if (&accessor != validator_Accessor.get()) {
    validator_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PlanValidationStateEnum& OrbitPlanValidationMDT::getValidationState() const {
  return *validationState_Accessor;
}

uci::type::PlanValidationStateEnum& OrbitPlanValidationMDT::getValidationState() {
  return *validationState_Accessor;
}

uci::type::OrbitPlanValidationMDT& OrbitPlanValidationMDT::setValidationState(const uci::type::PlanValidationStateEnum& accessor) {
  if (&accessor != validationState_Accessor.get()) {
    validationState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::OrbitPlanValidationMDT& OrbitPlanValidationMDT::setValidationState(uci::type::PlanValidationStateEnum::EnumerationItem value) {
  validationState_Accessor->setValue(value);
  return *this;
}


uci::type::CompletionStatusType& OrbitPlanValidationMDT::getCompletionStatus_() const {
  if (completionStatus_Accessor) {
    return *completionStatus_Accessor;
  }
  throw uci::base::UCIException("Error in getCompletionStatus(): An attempt was made to get an optional field that was not enabled, call hasCompletionStatus() to determine if it is safe to call getCompletionStatus()");
}

const uci::type::CompletionStatusType& OrbitPlanValidationMDT::getCompletionStatus() const {
  return getCompletionStatus_();
}

uci::type::CompletionStatusType& OrbitPlanValidationMDT::getCompletionStatus() {
  return getCompletionStatus_();
}

uci::type::OrbitPlanValidationMDT& OrbitPlanValidationMDT::setCompletionStatus(const uci::type::CompletionStatusType& accessor) {
  enableCompletionStatus();
  if (&accessor != completionStatus_Accessor.get()) {
    completionStatus_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OrbitPlanValidationMDT::hasCompletionStatus() const noexcept {
  return static_cast<bool>(completionStatus_Accessor);
}

uci::type::CompletionStatusType& OrbitPlanValidationMDT::enableCompletionStatus(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::completionStatusType : type};
  if ((!completionStatus_Accessor) || (completionStatus_Accessor->getAccessorType() != requestedType)) {
    completionStatus_Accessor = CompletionStatusType::create(requestedType);
    if (!completionStatus_Accessor) {
      throw uci::base::UCIException("Error in enableCompletionStatus(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *completionStatus_Accessor;
}

uci::type::OrbitPlanValidationMDT& OrbitPlanValidationMDT::clearCompletionStatus() noexcept {
  completionStatus_Accessor.reset();
  return *this;
}

const uci::type::OrbitPlanValidationMDT::IncompleteItem& OrbitPlanValidationMDT::getIncompleteItem() const {
  return *incompleteItem_Accessor;
}

uci::type::OrbitPlanValidationMDT::IncompleteItem& OrbitPlanValidationMDT::getIncompleteItem() {
  return *incompleteItem_Accessor;
}

uci::type::OrbitPlanValidationMDT& OrbitPlanValidationMDT::setIncompleteItem(const uci::type::OrbitPlanValidationMDT::IncompleteItem& accessor) {
  if (&accessor != incompleteItem_Accessor.get()) {
    incompleteItem_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::OrbitPlanValidationMDT::InvalidSequence& OrbitPlanValidationMDT::getInvalidSequence() const {
  return *invalidSequence_Accessor;
}

uci::type::OrbitPlanValidationMDT::InvalidSequence& OrbitPlanValidationMDT::getInvalidSequence() {
  return *invalidSequence_Accessor;
}

uci::type::OrbitPlanValidationMDT& OrbitPlanValidationMDT::setInvalidSequence(const uci::type::OrbitPlanValidationMDT::InvalidSequence& accessor) {
  if (&accessor != invalidSequence_Accessor.get()) {
    invalidSequence_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::OrbitPlanID_Type& OrbitPlanValidationMDT::getModifiedPlanID_() const {
  if (modifiedPlanID_Accessor) {
    return *modifiedPlanID_Accessor;
  }
  throw uci::base::UCIException("Error in getModifiedPlanID(): An attempt was made to get an optional field that was not enabled, call hasModifiedPlanID() to determine if it is safe to call getModifiedPlanID()");
}

const uci::type::OrbitPlanID_Type& OrbitPlanValidationMDT::getModifiedPlanID() const {
  return getModifiedPlanID_();
}

uci::type::OrbitPlanID_Type& OrbitPlanValidationMDT::getModifiedPlanID() {
  return getModifiedPlanID_();
}

uci::type::OrbitPlanValidationMDT& OrbitPlanValidationMDT::setModifiedPlanID(const uci::type::OrbitPlanID_Type& accessor) {
  enableModifiedPlanID();
  if (&accessor != modifiedPlanID_Accessor.get()) {
    modifiedPlanID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OrbitPlanValidationMDT::hasModifiedPlanID() const noexcept {
  return static_cast<bool>(modifiedPlanID_Accessor);
}

uci::type::OrbitPlanID_Type& OrbitPlanValidationMDT::enableModifiedPlanID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitPlanID_Type : type};
  if ((!modifiedPlanID_Accessor) || (modifiedPlanID_Accessor->getAccessorType() != requestedType)) {
    modifiedPlanID_Accessor = OrbitPlanID_Type::create(requestedType);
    if (!modifiedPlanID_Accessor) {
      throw uci::base::UCIException("Error in enableModifiedPlanID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *modifiedPlanID_Accessor;
}

uci::type::OrbitPlanValidationMDT& OrbitPlanValidationMDT::clearModifiedPlanID() noexcept {
  modifiedPlanID_Accessor.reset();
  return *this;
}

std::unique_ptr<OrbitPlanValidationMDT> OrbitPlanValidationMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitPlanValidationMDT : type};
  return (requestedType == uci::type::accessorType::orbitPlanValidationMDT) ? boost::make_unique<OrbitPlanValidationMDT>() : nullptr;
}

/**  */
namespace OrbitPlanValidationMDT_Names {

constexpr const char* Extern_Type_Name{"OrbitPlanValidationMDT"};
constexpr const char* OrbitPlanValidationID_Name{"OrbitPlanValidationID"};
constexpr const char* PlanID_Name{"PlanID"};
constexpr const char* Validator_Name{"Validator"};
constexpr const char* ValidationState_Name{"ValidationState"};
constexpr const char* CompletionStatus_Name{"CompletionStatus"};
constexpr const char* IncompleteItem_Name{"IncompleteItem"};
constexpr const char* InvalidSequence_Name{"InvalidSequence"};
constexpr const char* ModifiedPlanID_Name{"ModifiedPlanID"};

} // namespace OrbitPlanValidationMDT_Names

void OrbitPlanValidationMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitPlanValidationMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitPlanValidationMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitPlanValidationMDT_Names::OrbitPlanValidationID_Name) {
      OrbitPlanValidationID_Type::deserialize(valueType.second, accessor.getOrbitPlanValidationID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitPlanValidationMDT_Names::PlanID_Name) {
      OrbitPlanID_Type::deserialize(valueType.second, accessor.getPlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitPlanValidationMDT_Names::Validator_Name) {
      ValidatorType::deserialize(valueType.second, accessor.getValidator(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitPlanValidationMDT_Names::ValidationState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getValidationState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + OrbitPlanValidationMDT_Names::CompletionStatus_Name) {
      CompletionStatusType::deserialize(valueType.second, accessor.enableCompletionStatus(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitPlanValidationMDT_Names::IncompleteItem_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::OrbitPlanValidationMDT::IncompleteItem& boundedList = accessor.getIncompleteItem();
        const uci::type::OrbitPlanValidationMDT::IncompleteItem::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::IncompleteProcessingType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + OrbitPlanValidationMDT_Names::InvalidSequence_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::OrbitPlanValidationMDT::InvalidSequence& boundedList = accessor.getInvalidSequence();
        const uci::type::OrbitPlanValidationMDT::InvalidSequence::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::OrbitPlanValidationInvalidSequenceType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + OrbitPlanValidationMDT_Names::ModifiedPlanID_Name) {
      OrbitPlanID_Type::deserialize(valueType.second, accessor.enableModifiedPlanID(), nodeName, nsPrefix);
    }
  }
}

std::string OrbitPlanValidationMDT::serialize(const uci::type::OrbitPlanValidationMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? OrbitPlanValidationMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitPlanValidationMDT_Names::Extern_Type_Name);
  }
  OrbitPlanValidationID_Type::serialize(accessor.getOrbitPlanValidationID(), node, OrbitPlanValidationMDT_Names::OrbitPlanValidationID_Name);
  OrbitPlanID_Type::serialize(accessor.getPlanID(), node, OrbitPlanValidationMDT_Names::PlanID_Name);
  ValidatorType::serialize(accessor.getValidator(), node, OrbitPlanValidationMDT_Names::Validator_Name);
  PlanValidationStateEnum::serialize(accessor.getValidationState(), node, OrbitPlanValidationMDT_Names::ValidationState_Name, false);
  if (accessor.hasCompletionStatus()) {
    CompletionStatusType::serialize(accessor.getCompletionStatus(), node, OrbitPlanValidationMDT_Names::CompletionStatus_Name);
  }
  {
    const uci::type::OrbitPlanValidationMDT::IncompleteItem& boundedList = accessor.getIncompleteItem();
    for (uci::type::OrbitPlanValidationMDT::IncompleteItem::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::IncompleteProcessingType::serialize(boundedList.at(i), node, OrbitPlanValidationMDT_Names::IncompleteItem_Name);
    }
  }
  {
    const uci::type::OrbitPlanValidationMDT::InvalidSequence& boundedList = accessor.getInvalidSequence();
    for (uci::type::OrbitPlanValidationMDT::InvalidSequence::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::OrbitPlanValidationInvalidSequenceType::serialize(boundedList.at(i), node, OrbitPlanValidationMDT_Names::InvalidSequence_Name);
    }
  }
  if (accessor.hasModifiedPlanID()) {
    OrbitPlanID_Type::serialize(accessor.getModifiedPlanID(), node, OrbitPlanValidationMDT_Names::ModifiedPlanID_Name);
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

uci::type::OrbitPlanValidationMDT& OrbitPlanValidationMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OrbitPlanValidationMDT>().release());
}

uci::type::OrbitPlanValidationMDT& OrbitPlanValidationMDT::create(const uci::type::OrbitPlanValidationMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OrbitPlanValidationMDT> newAccessor{boost::make_unique<asb_uci::type::OrbitPlanValidationMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OrbitPlanValidationMDT::destroy(uci::type::OrbitPlanValidationMDT& accessor) {
  delete dynamic_cast<asb_uci::type::OrbitPlanValidationMDT*>(&accessor);
}

} // namespace type

} // namespace uci

