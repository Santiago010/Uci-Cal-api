/** @file ResponsePlanCommandMDT.cpp
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

#include "../../../include/asb_uci/type/ResponsePlanCommandMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CommandStateEnum.h"
#include "../../../include/asb_uci/type/ResponsePlanCommandID_ChoiceType.h"
#include "../../../include/asb_uci/type/ResponsePlanCommandID_Type.h"
#include "../../../include/asb_uci/type/ResponsePlanInputsType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommandStateEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ResponsePlanCommandID_ChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ResponsePlanCommandID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ResponsePlanCommandMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ResponsePlanInputsType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ResponsePlanCommandMDT::ResponsePlanCommandMDT()
  : commandID_Accessor{boost::make_unique<ResponsePlanCommandID_Type>()},
    commandState_Accessor{boost::make_unique<CommandStateEnum>()},
    inputs_Accessor{boost::make_unique<ResponsePlanInputsType>()} {
}

ResponsePlanCommandMDT::~ResponsePlanCommandMDT() = default;

void ResponsePlanCommandMDT::copy(const uci::type::ResponsePlanCommandMDT& accessor) {
  copyImpl(accessor, false);
}

void ResponsePlanCommandMDT::copyImpl(const uci::type::ResponsePlanCommandMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const ResponsePlanCommandMDT&>(accessor);
    setCommandID(*(accessorImpl.commandID_Accessor));
    setCommandState(*(accessorImpl.commandState_Accessor));
    if (accessorImpl.parentPlanCommandID_Accessor) {
      setParentPlanCommandID(*(accessorImpl.parentPlanCommandID_Accessor));
    } else {
      parentPlanCommandID_Accessor.reset();
    }
    setInputs(*(accessorImpl.inputs_Accessor));
    setForPlanningUseOnly(accessorImpl.forPlanningUseOnly_Accessor);
  }
}

void ResponsePlanCommandMDT::reset() noexcept {
  commandID_Accessor->reset();
  commandState_Accessor->reset();
  parentPlanCommandID_Accessor.reset();
  inputs_Accessor->reset();
  forPlanningUseOnly_Accessor = false;
}

const uci::type::ResponsePlanCommandID_Type& ResponsePlanCommandMDT::getCommandID() const {
  return *commandID_Accessor;
}

uci::type::ResponsePlanCommandID_Type& ResponsePlanCommandMDT::getCommandID() {
  return *commandID_Accessor;
}

uci::type::ResponsePlanCommandMDT& ResponsePlanCommandMDT::setCommandID(const uci::type::ResponsePlanCommandID_Type& accessor) {
  if (&accessor != commandID_Accessor.get()) {
    commandID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::CommandStateEnum& ResponsePlanCommandMDT::getCommandState() const {
  return *commandState_Accessor;
}

uci::type::CommandStateEnum& ResponsePlanCommandMDT::getCommandState() {
  return *commandState_Accessor;
}

uci::type::ResponsePlanCommandMDT& ResponsePlanCommandMDT::setCommandState(const uci::type::CommandStateEnum& accessor) {
  if (&accessor != commandState_Accessor.get()) {
    commandState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ResponsePlanCommandMDT& ResponsePlanCommandMDT::setCommandState(uci::type::CommandStateEnum::EnumerationItem value) {
  commandState_Accessor->setValue(value);
  return *this;
}


uci::type::ResponsePlanCommandID_ChoiceType& ResponsePlanCommandMDT::getParentPlanCommandID_() const {
  if (parentPlanCommandID_Accessor) {
    return *parentPlanCommandID_Accessor;
  }
  throw uci::base::UCIException("Error in getParentPlanCommandID(): An attempt was made to get an optional field that was not enabled, call hasParentPlanCommandID() to determine if it is safe to call getParentPlanCommandID()");
}

const uci::type::ResponsePlanCommandID_ChoiceType& ResponsePlanCommandMDT::getParentPlanCommandID() const {
  return getParentPlanCommandID_();
}

uci::type::ResponsePlanCommandID_ChoiceType& ResponsePlanCommandMDT::getParentPlanCommandID() {
  return getParentPlanCommandID_();
}

uci::type::ResponsePlanCommandMDT& ResponsePlanCommandMDT::setParentPlanCommandID(const uci::type::ResponsePlanCommandID_ChoiceType& accessor) {
  enableParentPlanCommandID();
  if (&accessor != parentPlanCommandID_Accessor.get()) {
    parentPlanCommandID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool ResponsePlanCommandMDT::hasParentPlanCommandID() const noexcept {
  return static_cast<bool>(parentPlanCommandID_Accessor);
}

uci::type::ResponsePlanCommandID_ChoiceType& ResponsePlanCommandMDT::enableParentPlanCommandID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::responsePlanCommandID_ChoiceType : type};
  if ((!parentPlanCommandID_Accessor) || (parentPlanCommandID_Accessor->getAccessorType() != requestedType)) {
    parentPlanCommandID_Accessor = ResponsePlanCommandID_ChoiceType::create(requestedType);
    if (!parentPlanCommandID_Accessor) {
      throw uci::base::UCIException("Error in enableParentPlanCommandID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *parentPlanCommandID_Accessor;
}

uci::type::ResponsePlanCommandMDT& ResponsePlanCommandMDT::clearParentPlanCommandID() noexcept {
  parentPlanCommandID_Accessor.reset();
  return *this;
}

const uci::type::ResponsePlanInputsType& ResponsePlanCommandMDT::getInputs() const {
  return *inputs_Accessor;
}

uci::type::ResponsePlanInputsType& ResponsePlanCommandMDT::getInputs() {
  return *inputs_Accessor;
}

uci::type::ResponsePlanCommandMDT& ResponsePlanCommandMDT::setInputs(const uci::type::ResponsePlanInputsType& accessor) {
  if (&accessor != inputs_Accessor.get()) {
    inputs_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

xs::Boolean ResponsePlanCommandMDT::getForPlanningUseOnly() const {
  return forPlanningUseOnly_Accessor;
}

uci::type::ResponsePlanCommandMDT& ResponsePlanCommandMDT::setForPlanningUseOnly(xs::Boolean value) {
  forPlanningUseOnly_Accessor = value;
  return *this;
}


std::unique_ptr<ResponsePlanCommandMDT> ResponsePlanCommandMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::responsePlanCommandMDT : type};
  return (requestedType == uci::type::accessorType::responsePlanCommandMDT) ? boost::make_unique<ResponsePlanCommandMDT>() : nullptr;
}

/**  */
namespace ResponsePlanCommandMDT_Names {

constexpr const char* Extern_Type_Name{"ResponsePlanCommandMDT"};
constexpr const char* CommandID_Name{"CommandID"};
constexpr const char* CommandState_Name{"CommandState"};
constexpr const char* ParentPlanCommandID_Name{"ParentPlanCommandID"};
constexpr const char* Inputs_Name{"Inputs"};
constexpr const char* ForPlanningUseOnly_Name{"ForPlanningUseOnly"};

} // namespace ResponsePlanCommandMDT_Names

void ResponsePlanCommandMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ResponsePlanCommandMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ResponsePlanCommandMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ResponsePlanCommandMDT_Names::CommandID_Name) {
      ResponsePlanCommandID_Type::deserialize(valueType.second, accessor.getCommandID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ResponsePlanCommandMDT_Names::CommandState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getCommandState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ResponsePlanCommandMDT_Names::ParentPlanCommandID_Name) {
      ResponsePlanCommandID_ChoiceType::deserialize(valueType.second, accessor.enableParentPlanCommandID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ResponsePlanCommandMDT_Names::Inputs_Name) {
      ResponsePlanInputsType::deserialize(valueType.second, accessor.getInputs(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ResponsePlanCommandMDT_Names::ForPlanningUseOnly_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setForPlanningUseOnly(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    }
  }
}

std::string ResponsePlanCommandMDT::serialize(const uci::type::ResponsePlanCommandMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ResponsePlanCommandMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ResponsePlanCommandMDT_Names::Extern_Type_Name);
  }
  ResponsePlanCommandID_Type::serialize(accessor.getCommandID(), node, ResponsePlanCommandMDT_Names::CommandID_Name);
  CommandStateEnum::serialize(accessor.getCommandState(), node, ResponsePlanCommandMDT_Names::CommandState_Name, false);
  if (accessor.hasParentPlanCommandID()) {
    ResponsePlanCommandID_ChoiceType::serialize(accessor.getParentPlanCommandID(), node, ResponsePlanCommandMDT_Names::ParentPlanCommandID_Name);
  }
  ResponsePlanInputsType::serialize(accessor.getInputs(), node, ResponsePlanCommandMDT_Names::Inputs_Name);
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getForPlanningUseOnly(), node, ResponsePlanCommandMDT_Names::ForPlanningUseOnly_Name);
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

uci::type::ResponsePlanCommandMDT& ResponsePlanCommandMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ResponsePlanCommandMDT>().release());
}

uci::type::ResponsePlanCommandMDT& ResponsePlanCommandMDT::create(const uci::type::ResponsePlanCommandMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ResponsePlanCommandMDT> newAccessor{boost::make_unique<asb_uci::type::ResponsePlanCommandMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ResponsePlanCommandMDT::destroy(uci::type::ResponsePlanCommandMDT& accessor) {
  delete dynamic_cast<asb_uci::type::ResponsePlanCommandMDT*>(&accessor);
}

} // namespace type

} // namespace uci

