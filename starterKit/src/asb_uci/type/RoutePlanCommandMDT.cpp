/** @file RoutePlanCommandMDT.cpp
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

#include "../../../include/asb_uci/type/RoutePlanCommandMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CommandStateEnum.h"
#include "../../../include/asb_uci/type/MissionPlanCommandID_Type.h"
#include "../../../include/asb_uci/type/RoutePlanCommandID_Type.h"
#include "../../../include/asb_uci/type/RoutePlanInputsType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommandStateEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MissionPlanCommandID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RoutePlanCommandID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RoutePlanCommandMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RoutePlanInputsType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

RoutePlanCommandMDT::RoutePlanCommandMDT()
  : commandID_Accessor{boost::make_unique<RoutePlanCommandID_Type>()},
    commandState_Accessor{boost::make_unique<CommandStateEnum>()},
    inputs_Accessor{boost::make_unique<RoutePlanInputsType>()} {
}

RoutePlanCommandMDT::~RoutePlanCommandMDT() = default;

void RoutePlanCommandMDT::copy(const uci::type::RoutePlanCommandMDT& accessor) {
  copyImpl(accessor, false);
}

void RoutePlanCommandMDT::copyImpl(const uci::type::RoutePlanCommandMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const RoutePlanCommandMDT&>(accessor);
    setCommandID(*(accessorImpl.commandID_Accessor));
    if (accessorImpl.parentMissionPlanCommandID_Accessor) {
      setParentMissionPlanCommandID(*(accessorImpl.parentMissionPlanCommandID_Accessor));
    } else {
      parentMissionPlanCommandID_Accessor.reset();
    }
    setCommandState(*(accessorImpl.commandState_Accessor));
    setInputs(*(accessorImpl.inputs_Accessor));
    setForPlanningUseOnly(accessorImpl.forPlanningUseOnly_Accessor);
  }
}

void RoutePlanCommandMDT::reset() noexcept {
  commandID_Accessor->reset();
  parentMissionPlanCommandID_Accessor.reset();
  commandState_Accessor->reset();
  inputs_Accessor->reset();
  forPlanningUseOnly_Accessor = false;
}

const uci::type::RoutePlanCommandID_Type& RoutePlanCommandMDT::getCommandID() const {
  return *commandID_Accessor;
}

uci::type::RoutePlanCommandID_Type& RoutePlanCommandMDT::getCommandID() {
  return *commandID_Accessor;
}

uci::type::RoutePlanCommandMDT& RoutePlanCommandMDT::setCommandID(const uci::type::RoutePlanCommandID_Type& accessor) {
  if (&accessor != commandID_Accessor.get()) {
    commandID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::MissionPlanCommandID_Type& RoutePlanCommandMDT::getParentMissionPlanCommandID_() const {
  if (parentMissionPlanCommandID_Accessor) {
    return *parentMissionPlanCommandID_Accessor;
  }
  throw uci::base::UCIException("Error in getParentMissionPlanCommandID(): An attempt was made to get an optional field that was not enabled, call hasParentMissionPlanCommandID() to determine if it is safe to call getParentMissionPlanCommandID()");
}

const uci::type::MissionPlanCommandID_Type& RoutePlanCommandMDT::getParentMissionPlanCommandID() const {
  return getParentMissionPlanCommandID_();
}

uci::type::MissionPlanCommandID_Type& RoutePlanCommandMDT::getParentMissionPlanCommandID() {
  return getParentMissionPlanCommandID_();
}

uci::type::RoutePlanCommandMDT& RoutePlanCommandMDT::setParentMissionPlanCommandID(const uci::type::MissionPlanCommandID_Type& accessor) {
  enableParentMissionPlanCommandID();
  if (&accessor != parentMissionPlanCommandID_Accessor.get()) {
    parentMissionPlanCommandID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RoutePlanCommandMDT::hasParentMissionPlanCommandID() const noexcept {
  return static_cast<bool>(parentMissionPlanCommandID_Accessor);
}

uci::type::MissionPlanCommandID_Type& RoutePlanCommandMDT::enableParentMissionPlanCommandID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::missionPlanCommandID_Type : type};
  if ((!parentMissionPlanCommandID_Accessor) || (parentMissionPlanCommandID_Accessor->getAccessorType() != requestedType)) {
    parentMissionPlanCommandID_Accessor = MissionPlanCommandID_Type::create(requestedType);
    if (!parentMissionPlanCommandID_Accessor) {
      throw uci::base::UCIException("Error in enableParentMissionPlanCommandID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *parentMissionPlanCommandID_Accessor;
}

uci::type::RoutePlanCommandMDT& RoutePlanCommandMDT::clearParentMissionPlanCommandID() noexcept {
  parentMissionPlanCommandID_Accessor.reset();
  return *this;
}

const uci::type::CommandStateEnum& RoutePlanCommandMDT::getCommandState() const {
  return *commandState_Accessor;
}

uci::type::CommandStateEnum& RoutePlanCommandMDT::getCommandState() {
  return *commandState_Accessor;
}

uci::type::RoutePlanCommandMDT& RoutePlanCommandMDT::setCommandState(const uci::type::CommandStateEnum& accessor) {
  if (&accessor != commandState_Accessor.get()) {
    commandState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::RoutePlanCommandMDT& RoutePlanCommandMDT::setCommandState(uci::type::CommandStateEnum::EnumerationItem value) {
  commandState_Accessor->setValue(value);
  return *this;
}


const uci::type::RoutePlanInputsType& RoutePlanCommandMDT::getInputs() const {
  return *inputs_Accessor;
}

uci::type::RoutePlanInputsType& RoutePlanCommandMDT::getInputs() {
  return *inputs_Accessor;
}

uci::type::RoutePlanCommandMDT& RoutePlanCommandMDT::setInputs(const uci::type::RoutePlanInputsType& accessor) {
  if (&accessor != inputs_Accessor.get()) {
    inputs_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

xs::Boolean RoutePlanCommandMDT::getForPlanningUseOnly() const {
  return forPlanningUseOnly_Accessor;
}

uci::type::RoutePlanCommandMDT& RoutePlanCommandMDT::setForPlanningUseOnly(xs::Boolean value) {
  forPlanningUseOnly_Accessor = value;
  return *this;
}


std::unique_ptr<RoutePlanCommandMDT> RoutePlanCommandMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::routePlanCommandMDT : type};
  return (requestedType == uci::type::accessorType::routePlanCommandMDT) ? boost::make_unique<RoutePlanCommandMDT>() : nullptr;
}

/**  */
namespace RoutePlanCommandMDT_Names {

constexpr const char* Extern_Type_Name{"RoutePlanCommandMDT"};
constexpr const char* CommandID_Name{"CommandID"};
constexpr const char* ParentMissionPlanCommandID_Name{"ParentMissionPlanCommandID"};
constexpr const char* CommandState_Name{"CommandState"};
constexpr const char* Inputs_Name{"Inputs"};
constexpr const char* ForPlanningUseOnly_Name{"ForPlanningUseOnly"};

} // namespace RoutePlanCommandMDT_Names

void RoutePlanCommandMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::RoutePlanCommandMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RoutePlanCommandMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RoutePlanCommandMDT_Names::CommandID_Name) {
      RoutePlanCommandID_Type::deserialize(valueType.second, accessor.getCommandID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RoutePlanCommandMDT_Names::ParentMissionPlanCommandID_Name) {
      MissionPlanCommandID_Type::deserialize(valueType.second, accessor.enableParentMissionPlanCommandID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RoutePlanCommandMDT_Names::CommandState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getCommandState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + RoutePlanCommandMDT_Names::Inputs_Name) {
      RoutePlanInputsType::deserialize(valueType.second, accessor.getInputs(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RoutePlanCommandMDT_Names::ForPlanningUseOnly_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setForPlanningUseOnly(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    }
  }
}

std::string RoutePlanCommandMDT::serialize(const uci::type::RoutePlanCommandMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? RoutePlanCommandMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, RoutePlanCommandMDT_Names::Extern_Type_Name);
  }
  RoutePlanCommandID_Type::serialize(accessor.getCommandID(), node, RoutePlanCommandMDT_Names::CommandID_Name);
  if (accessor.hasParentMissionPlanCommandID()) {
    MissionPlanCommandID_Type::serialize(accessor.getParentMissionPlanCommandID(), node, RoutePlanCommandMDT_Names::ParentMissionPlanCommandID_Name);
  }
  CommandStateEnum::serialize(accessor.getCommandState(), node, RoutePlanCommandMDT_Names::CommandState_Name, false);
  RoutePlanInputsType::serialize(accessor.getInputs(), node, RoutePlanCommandMDT_Names::Inputs_Name);
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getForPlanningUseOnly(), node, RoutePlanCommandMDT_Names::ForPlanningUseOnly_Name);
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

uci::type::RoutePlanCommandMDT& RoutePlanCommandMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::RoutePlanCommandMDT>().release());
}

uci::type::RoutePlanCommandMDT& RoutePlanCommandMDT::create(const uci::type::RoutePlanCommandMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::RoutePlanCommandMDT> newAccessor{boost::make_unique<asb_uci::type::RoutePlanCommandMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void RoutePlanCommandMDT::destroy(uci::type::RoutePlanCommandMDT& accessor) {
  delete dynamic_cast<asb_uci::type::RoutePlanCommandMDT*>(&accessor);
}

} // namespace type

} // namespace uci

