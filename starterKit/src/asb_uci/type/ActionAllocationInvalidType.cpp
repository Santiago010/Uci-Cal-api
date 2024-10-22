/** @file ActionAllocationInvalidType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:11 PM
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

#include "../../../include/asb_uci/type/ActionAllocationInvalidType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ActionID_Type.h"
#include "../../../include/asb_uci/type/CannotComplyType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActionAllocationInvalidType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActionID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CannotComplyType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ActionAllocationInvalidType::ActionAllocationInvalidType()
  : invalidActionID_Accessor{boost::make_unique<ActionID_Type>()} {
}

ActionAllocationInvalidType::~ActionAllocationInvalidType() = default;

void ActionAllocationInvalidType::copy(const uci::type::ActionAllocationInvalidType& accessor) {
  copyImpl(accessor, false);
}

void ActionAllocationInvalidType::copyImpl(const uci::type::ActionAllocationInvalidType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const ActionAllocationInvalidType&>(accessor);
    setInvalidActionID(*(accessorImpl.invalidActionID_Accessor));
    if (accessorImpl.invalidReason_Accessor) {
      setInvalidReason(*(accessorImpl.invalidReason_Accessor));
    } else {
      invalidReason_Accessor.reset();
    }
  }
}

void ActionAllocationInvalidType::reset() noexcept {
  invalidActionID_Accessor->reset();
  invalidReason_Accessor.reset();
}

const uci::type::ActionID_Type& ActionAllocationInvalidType::getInvalidActionID() const {
  return *invalidActionID_Accessor;
}

uci::type::ActionID_Type& ActionAllocationInvalidType::getInvalidActionID() {
  return *invalidActionID_Accessor;
}

uci::type::ActionAllocationInvalidType& ActionAllocationInvalidType::setInvalidActionID(const uci::type::ActionID_Type& accessor) {
  if (&accessor != invalidActionID_Accessor.get()) {
    invalidActionID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::CannotComplyType& ActionAllocationInvalidType::getInvalidReason_() const {
  if (invalidReason_Accessor) {
    return *invalidReason_Accessor;
  }
  throw uci::base::UCIException("Error in getInvalidReason(): An attempt was made to get an optional field that was not enabled, call hasInvalidReason() to determine if it is safe to call getInvalidReason()");
}

const uci::type::CannotComplyType& ActionAllocationInvalidType::getInvalidReason() const {
  return getInvalidReason_();
}

uci::type::CannotComplyType& ActionAllocationInvalidType::getInvalidReason() {
  return getInvalidReason_();
}

uci::type::ActionAllocationInvalidType& ActionAllocationInvalidType::setInvalidReason(const uci::type::CannotComplyType& accessor) {
  enableInvalidReason(accessor.getAccessorType());
  if (&accessor != invalidReason_Accessor.get()) {
    invalidReason_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool ActionAllocationInvalidType::hasInvalidReason() const noexcept {
  return static_cast<bool>(invalidReason_Accessor);
}

uci::type::CannotComplyType& ActionAllocationInvalidType::enableInvalidReason(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::cannotComplyType : type};
  if ((!invalidReason_Accessor) || (invalidReason_Accessor->getAccessorType() != requestedType)) {
    invalidReason_Accessor = CannotComplyType::create(requestedType);
    if (!invalidReason_Accessor) {
      throw uci::base::UCIException("Error in enableInvalidReason(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *invalidReason_Accessor;
}

uci::type::ActionAllocationInvalidType& ActionAllocationInvalidType::clearInvalidReason() noexcept {
  invalidReason_Accessor.reset();
  return *this;
}

std::unique_ptr<ActionAllocationInvalidType> ActionAllocationInvalidType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::actionAllocationInvalidType : type};
  return (requestedType == uci::type::accessorType::actionAllocationInvalidType) ? boost::make_unique<ActionAllocationInvalidType>() : nullptr;
}

/**  */
namespace ActionAllocationInvalidType_Names {

constexpr const char* Extern_Type_Name{"ActionAllocationInvalidType"};
constexpr const char* InvalidActionID_Name{"InvalidActionID"};
constexpr const char* InvalidReason_Name{"InvalidReason"};

} // namespace ActionAllocationInvalidType_Names

void ActionAllocationInvalidType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ActionAllocationInvalidType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ActionAllocationInvalidType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ActionAllocationInvalidType_Names::InvalidActionID_Name) {
      ActionID_Type::deserialize(valueType.second, accessor.getInvalidActionID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ActionAllocationInvalidType_Names::InvalidReason_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableInvalidReason(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    }
  }
}

std::string ActionAllocationInvalidType::serialize(const uci::type::ActionAllocationInvalidType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ActionAllocationInvalidType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ActionAllocationInvalidType_Names::Extern_Type_Name);
  }
  ActionID_Type::serialize(accessor.getInvalidActionID(), node, ActionAllocationInvalidType_Names::InvalidActionID_Name);
  if (accessor.hasInvalidReason()) {
    CannotComplyType::serialize(accessor.getInvalidReason(), node, ActionAllocationInvalidType_Names::InvalidReason_Name);
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

uci::type::ActionAllocationInvalidType& ActionAllocationInvalidType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ActionAllocationInvalidType>().release());
}

uci::type::ActionAllocationInvalidType& ActionAllocationInvalidType::create(const uci::type::ActionAllocationInvalidType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ActionAllocationInvalidType> newAccessor{boost::make_unique<asb_uci::type::ActionAllocationInvalidType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ActionAllocationInvalidType::destroy(uci::type::ActionAllocationInvalidType& accessor) {
  delete dynamic_cast<asb_uci::type::ActionAllocationInvalidType*>(&accessor);
}

} // namespace type

} // namespace uci

