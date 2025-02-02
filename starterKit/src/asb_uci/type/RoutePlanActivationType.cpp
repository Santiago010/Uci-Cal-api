/** @file RoutePlanActivationType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:15 PM
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

#include "../../../include/asb_uci/type/RoutePlanActivationType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ActivationPathSegmentType.h"
#include "../../../include/asb_uci/type/PlanActivationCommandEnum.h"
#include "../../../include/asb_uci/type/RoutePlanID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActivationPathSegmentType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanActivationCommandEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RoutePlanActivationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RoutePlanID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

RoutePlanActivationType::RoutePlanActivationType()
  : routePlanID_Accessor{boost::make_unique<RoutePlanID_Type>()},
    commandType_Accessor{boost::make_unique<PlanActivationCommandEnum>()} {
}

RoutePlanActivationType::~RoutePlanActivationType() = default;

void RoutePlanActivationType::copy(const uci::type::RoutePlanActivationType& accessor) {
  copyImpl(accessor, false);
}

void RoutePlanActivationType::copyImpl(const uci::type::RoutePlanActivationType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const RoutePlanActivationType&>(accessor);
    setRoutePlanID(*(accessorImpl.routePlanID_Accessor));
    setCommandType(*(accessorImpl.commandType_Accessor));
    if (accessorImpl.activationPathSegment_Accessor) {
      setActivationPathSegment(*(accessorImpl.activationPathSegment_Accessor));
    } else {
      activationPathSegment_Accessor.reset();
    }
  }
}

void RoutePlanActivationType::reset() noexcept {
  routePlanID_Accessor->reset();
  commandType_Accessor->reset();
  activationPathSegment_Accessor.reset();
}

const uci::type::RoutePlanID_Type& RoutePlanActivationType::getRoutePlanID() const {
  return *routePlanID_Accessor;
}

uci::type::RoutePlanID_Type& RoutePlanActivationType::getRoutePlanID() {
  return *routePlanID_Accessor;
}

uci::type::RoutePlanActivationType& RoutePlanActivationType::setRoutePlanID(const uci::type::RoutePlanID_Type& accessor) {
  if (&accessor != routePlanID_Accessor.get()) {
    routePlanID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PlanActivationCommandEnum& RoutePlanActivationType::getCommandType() const {
  return *commandType_Accessor;
}

uci::type::PlanActivationCommandEnum& RoutePlanActivationType::getCommandType() {
  return *commandType_Accessor;
}

uci::type::RoutePlanActivationType& RoutePlanActivationType::setCommandType(const uci::type::PlanActivationCommandEnum& accessor) {
  if (&accessor != commandType_Accessor.get()) {
    commandType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::RoutePlanActivationType& RoutePlanActivationType::setCommandType(uci::type::PlanActivationCommandEnum::EnumerationItem value) {
  commandType_Accessor->setValue(value);
  return *this;
}


uci::type::ActivationPathSegmentType& RoutePlanActivationType::getActivationPathSegment_() const {
  if (activationPathSegment_Accessor) {
    return *activationPathSegment_Accessor;
  }
  throw uci::base::UCIException("Error in getActivationPathSegment(): An attempt was made to get an optional field that was not enabled, call hasActivationPathSegment() to determine if it is safe to call getActivationPathSegment()");
}

const uci::type::ActivationPathSegmentType& RoutePlanActivationType::getActivationPathSegment() const {
  return getActivationPathSegment_();
}

uci::type::ActivationPathSegmentType& RoutePlanActivationType::getActivationPathSegment() {
  return getActivationPathSegment_();
}

uci::type::RoutePlanActivationType& RoutePlanActivationType::setActivationPathSegment(const uci::type::ActivationPathSegmentType& accessor) {
  enableActivationPathSegment();
  if (&accessor != activationPathSegment_Accessor.get()) {
    activationPathSegment_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RoutePlanActivationType::hasActivationPathSegment() const noexcept {
  return static_cast<bool>(activationPathSegment_Accessor);
}

uci::type::ActivationPathSegmentType& RoutePlanActivationType::enableActivationPathSegment(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::activationPathSegmentType : type};
  if ((!activationPathSegment_Accessor) || (activationPathSegment_Accessor->getAccessorType() != requestedType)) {
    activationPathSegment_Accessor = ActivationPathSegmentType::create(requestedType);
    if (!activationPathSegment_Accessor) {
      throw uci::base::UCIException("Error in enableActivationPathSegment(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *activationPathSegment_Accessor;
}

uci::type::RoutePlanActivationType& RoutePlanActivationType::clearActivationPathSegment() noexcept {
  activationPathSegment_Accessor.reset();
  return *this;
}

std::unique_ptr<RoutePlanActivationType> RoutePlanActivationType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::routePlanActivationType : type};
  return (requestedType == uci::type::accessorType::routePlanActivationType) ? boost::make_unique<RoutePlanActivationType>() : nullptr;
}

/**  */
namespace RoutePlanActivationType_Names {

constexpr const char* Extern_Type_Name{"RoutePlanActivationType"};
constexpr const char* RoutePlanID_Name{"RoutePlanID"};
constexpr const char* CommandType_Name{"CommandType"};
constexpr const char* ActivationPathSegment_Name{"ActivationPathSegment"};

} // namespace RoutePlanActivationType_Names

void RoutePlanActivationType::deserialize(const boost::property_tree::ptree& propTree, uci::type::RoutePlanActivationType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RoutePlanActivationType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RoutePlanActivationType_Names::RoutePlanID_Name) {
      RoutePlanID_Type::deserialize(valueType.second, accessor.getRoutePlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RoutePlanActivationType_Names::CommandType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getCommandType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + RoutePlanActivationType_Names::ActivationPathSegment_Name) {
      ActivationPathSegmentType::deserialize(valueType.second, accessor.enableActivationPathSegment(), nodeName, nsPrefix);
    }
  }
}

std::string RoutePlanActivationType::serialize(const uci::type::RoutePlanActivationType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? RoutePlanActivationType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, RoutePlanActivationType_Names::Extern_Type_Name);
  }
  RoutePlanID_Type::serialize(accessor.getRoutePlanID(), node, RoutePlanActivationType_Names::RoutePlanID_Name);
  PlanActivationCommandEnum::serialize(accessor.getCommandType(), node, RoutePlanActivationType_Names::CommandType_Name, false);
  if (accessor.hasActivationPathSegment()) {
    ActivationPathSegmentType::serialize(accessor.getActivationPathSegment(), node, RoutePlanActivationType_Names::ActivationPathSegment_Name);
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

uci::type::RoutePlanActivationType& RoutePlanActivationType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::RoutePlanActivationType>().release());
}

uci::type::RoutePlanActivationType& RoutePlanActivationType::create(const uci::type::RoutePlanActivationType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::RoutePlanActivationType> newAccessor{boost::make_unique<asb_uci::type::RoutePlanActivationType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void RoutePlanActivationType::destroy(uci::type::RoutePlanActivationType& accessor) {
  delete dynamic_cast<asb_uci::type::RoutePlanActivationType*>(&accessor);
}

} // namespace type

} // namespace uci

