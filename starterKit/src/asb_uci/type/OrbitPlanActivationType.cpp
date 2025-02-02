/** @file OrbitPlanActivationType.cpp
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

#include "../../../include/asb_uci/type/OrbitPlanActivationType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ActivationOrbitSequenceType.h"
#include "../../../include/asb_uci/type/OrbitPlanID_Type.h"
#include "../../../include/asb_uci/type/PlanActivationCommandEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActivationOrbitSequenceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitPlanActivationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitPlanID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanActivationCommandEnum.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OrbitPlanActivationType::OrbitPlanActivationType()
  : orbitPlanID_Accessor{boost::make_unique<OrbitPlanID_Type>()},
    commandType_Accessor{boost::make_unique<PlanActivationCommandEnum>()} {
}

OrbitPlanActivationType::~OrbitPlanActivationType() = default;

void OrbitPlanActivationType::copy(const uci::type::OrbitPlanActivationType& accessor) {
  copyImpl(accessor, false);
}

void OrbitPlanActivationType::copyImpl(const uci::type::OrbitPlanActivationType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const OrbitPlanActivationType&>(accessor);
    setOrbitPlanID(*(accessorImpl.orbitPlanID_Accessor));
    setCommandType(*(accessorImpl.commandType_Accessor));
    if (accessorImpl.activationOrbitSequence_Accessor) {
      setActivationOrbitSequence(*(accessorImpl.activationOrbitSequence_Accessor));
    } else {
      activationOrbitSequence_Accessor.reset();
    }
  }
}

void OrbitPlanActivationType::reset() noexcept {
  orbitPlanID_Accessor->reset();
  commandType_Accessor->reset();
  activationOrbitSequence_Accessor.reset();
}

const uci::type::OrbitPlanID_Type& OrbitPlanActivationType::getOrbitPlanID() const {
  return *orbitPlanID_Accessor;
}

uci::type::OrbitPlanID_Type& OrbitPlanActivationType::getOrbitPlanID() {
  return *orbitPlanID_Accessor;
}

uci::type::OrbitPlanActivationType& OrbitPlanActivationType::setOrbitPlanID(const uci::type::OrbitPlanID_Type& accessor) {
  if (&accessor != orbitPlanID_Accessor.get()) {
    orbitPlanID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PlanActivationCommandEnum& OrbitPlanActivationType::getCommandType() const {
  return *commandType_Accessor;
}

uci::type::PlanActivationCommandEnum& OrbitPlanActivationType::getCommandType() {
  return *commandType_Accessor;
}

uci::type::OrbitPlanActivationType& OrbitPlanActivationType::setCommandType(const uci::type::PlanActivationCommandEnum& accessor) {
  if (&accessor != commandType_Accessor.get()) {
    commandType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::OrbitPlanActivationType& OrbitPlanActivationType::setCommandType(uci::type::PlanActivationCommandEnum::EnumerationItem value) {
  commandType_Accessor->setValue(value);
  return *this;
}


uci::type::ActivationOrbitSequenceType& OrbitPlanActivationType::getActivationOrbitSequence_() const {
  if (activationOrbitSequence_Accessor) {
    return *activationOrbitSequence_Accessor;
  }
  throw uci::base::UCIException("Error in getActivationOrbitSequence(): An attempt was made to get an optional field that was not enabled, call hasActivationOrbitSequence() to determine if it is safe to call getActivationOrbitSequence()");
}

const uci::type::ActivationOrbitSequenceType& OrbitPlanActivationType::getActivationOrbitSequence() const {
  return getActivationOrbitSequence_();
}

uci::type::ActivationOrbitSequenceType& OrbitPlanActivationType::getActivationOrbitSequence() {
  return getActivationOrbitSequence_();
}

uci::type::OrbitPlanActivationType& OrbitPlanActivationType::setActivationOrbitSequence(const uci::type::ActivationOrbitSequenceType& accessor) {
  enableActivationOrbitSequence();
  if (&accessor != activationOrbitSequence_Accessor.get()) {
    activationOrbitSequence_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OrbitPlanActivationType::hasActivationOrbitSequence() const noexcept {
  return static_cast<bool>(activationOrbitSequence_Accessor);
}

uci::type::ActivationOrbitSequenceType& OrbitPlanActivationType::enableActivationOrbitSequence(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::activationOrbitSequenceType : type};
  if ((!activationOrbitSequence_Accessor) || (activationOrbitSequence_Accessor->getAccessorType() != requestedType)) {
    activationOrbitSequence_Accessor = ActivationOrbitSequenceType::create(requestedType);
    if (!activationOrbitSequence_Accessor) {
      throw uci::base::UCIException("Error in enableActivationOrbitSequence(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *activationOrbitSequence_Accessor;
}

uci::type::OrbitPlanActivationType& OrbitPlanActivationType::clearActivationOrbitSequence() noexcept {
  activationOrbitSequence_Accessor.reset();
  return *this;
}

std::unique_ptr<OrbitPlanActivationType> OrbitPlanActivationType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitPlanActivationType : type};
  return (requestedType == uci::type::accessorType::orbitPlanActivationType) ? boost::make_unique<OrbitPlanActivationType>() : nullptr;
}

/**  */
namespace OrbitPlanActivationType_Names {

constexpr const char* Extern_Type_Name{"OrbitPlanActivationType"};
constexpr const char* OrbitPlanID_Name{"OrbitPlanID"};
constexpr const char* CommandType_Name{"CommandType"};
constexpr const char* ActivationOrbitSequence_Name{"ActivationOrbitSequence"};

} // namespace OrbitPlanActivationType_Names

void OrbitPlanActivationType::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitPlanActivationType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitPlanActivationType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitPlanActivationType_Names::OrbitPlanID_Name) {
      OrbitPlanID_Type::deserialize(valueType.second, accessor.getOrbitPlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitPlanActivationType_Names::CommandType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getCommandType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + OrbitPlanActivationType_Names::ActivationOrbitSequence_Name) {
      ActivationOrbitSequenceType::deserialize(valueType.second, accessor.enableActivationOrbitSequence(), nodeName, nsPrefix);
    }
  }
}

std::string OrbitPlanActivationType::serialize(const uci::type::OrbitPlanActivationType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? OrbitPlanActivationType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitPlanActivationType_Names::Extern_Type_Name);
  }
  OrbitPlanID_Type::serialize(accessor.getOrbitPlanID(), node, OrbitPlanActivationType_Names::OrbitPlanID_Name);
  PlanActivationCommandEnum::serialize(accessor.getCommandType(), node, OrbitPlanActivationType_Names::CommandType_Name, false);
  if (accessor.hasActivationOrbitSequence()) {
    ActivationOrbitSequenceType::serialize(accessor.getActivationOrbitSequence(), node, OrbitPlanActivationType_Names::ActivationOrbitSequence_Name);
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

uci::type::OrbitPlanActivationType& OrbitPlanActivationType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OrbitPlanActivationType>().release());
}

uci::type::OrbitPlanActivationType& OrbitPlanActivationType::create(const uci::type::OrbitPlanActivationType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OrbitPlanActivationType> newAccessor{boost::make_unique<asb_uci::type::OrbitPlanActivationType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OrbitPlanActivationType::destroy(uci::type::OrbitPlanActivationType& accessor) {
  delete dynamic_cast<asb_uci::type::OrbitPlanActivationType*>(&accessor);
}

} // namespace type

} // namespace uci

