/** @file ResponsePlanActivationType.cpp
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

#include "../../../include/asb_uci/type/ResponsePlanActivationType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/PlanActivationCommandEnum.h"
#include "../../../include/asb_uci/type/ResponsePlanID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanActivationCommandEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ResponsePlanActivationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ResponsePlanID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ResponsePlanActivationType::ResponsePlanActivationType()
  : responsePlanID_Accessor{boost::make_unique<ResponsePlanID_Type>()},
    commandType_Accessor{boost::make_unique<PlanActivationCommandEnum>()} {
}

ResponsePlanActivationType::~ResponsePlanActivationType() = default;

void ResponsePlanActivationType::copy(const uci::type::ResponsePlanActivationType& accessor) {
  copyImpl(accessor, false);
}

void ResponsePlanActivationType::copyImpl(const uci::type::ResponsePlanActivationType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const ResponsePlanActivationType&>(accessor);
    setResponsePlanID(*(accessorImpl.responsePlanID_Accessor));
    setCommandType(*(accessorImpl.commandType_Accessor));
  }
}

void ResponsePlanActivationType::reset() noexcept {
  responsePlanID_Accessor->reset();
  commandType_Accessor->reset();
}

const uci::type::ResponsePlanID_Type& ResponsePlanActivationType::getResponsePlanID() const {
  return *responsePlanID_Accessor;
}

uci::type::ResponsePlanID_Type& ResponsePlanActivationType::getResponsePlanID() {
  return *responsePlanID_Accessor;
}

uci::type::ResponsePlanActivationType& ResponsePlanActivationType::setResponsePlanID(const uci::type::ResponsePlanID_Type& accessor) {
  if (&accessor != responsePlanID_Accessor.get()) {
    responsePlanID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PlanActivationCommandEnum& ResponsePlanActivationType::getCommandType() const {
  return *commandType_Accessor;
}

uci::type::PlanActivationCommandEnum& ResponsePlanActivationType::getCommandType() {
  return *commandType_Accessor;
}

uci::type::ResponsePlanActivationType& ResponsePlanActivationType::setCommandType(const uci::type::PlanActivationCommandEnum& accessor) {
  if (&accessor != commandType_Accessor.get()) {
    commandType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ResponsePlanActivationType& ResponsePlanActivationType::setCommandType(uci::type::PlanActivationCommandEnum::EnumerationItem value) {
  commandType_Accessor->setValue(value);
  return *this;
}


std::unique_ptr<ResponsePlanActivationType> ResponsePlanActivationType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::responsePlanActivationType : type};
  return (requestedType == uci::type::accessorType::responsePlanActivationType) ? boost::make_unique<ResponsePlanActivationType>() : nullptr;
}

/**  */
namespace ResponsePlanActivationType_Names {

constexpr const char* Extern_Type_Name{"ResponsePlanActivationType"};
constexpr const char* ResponsePlanID_Name{"ResponsePlanID"};
constexpr const char* CommandType_Name{"CommandType"};

} // namespace ResponsePlanActivationType_Names

void ResponsePlanActivationType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ResponsePlanActivationType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ResponsePlanActivationType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ResponsePlanActivationType_Names::ResponsePlanID_Name) {
      ResponsePlanID_Type::deserialize(valueType.second, accessor.getResponsePlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ResponsePlanActivationType_Names::CommandType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getCommandType().setValueFromName(*value);
      }
    }
  }
}

std::string ResponsePlanActivationType::serialize(const uci::type::ResponsePlanActivationType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ResponsePlanActivationType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ResponsePlanActivationType_Names::Extern_Type_Name);
  }
  ResponsePlanID_Type::serialize(accessor.getResponsePlanID(), node, ResponsePlanActivationType_Names::ResponsePlanID_Name);
  PlanActivationCommandEnum::serialize(accessor.getCommandType(), node, ResponsePlanActivationType_Names::CommandType_Name, false);
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

uci::type::ResponsePlanActivationType& ResponsePlanActivationType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ResponsePlanActivationType>().release());
}

uci::type::ResponsePlanActivationType& ResponsePlanActivationType::create(const uci::type::ResponsePlanActivationType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ResponsePlanActivationType> newAccessor{boost::make_unique<asb_uci::type::ResponsePlanActivationType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ResponsePlanActivationType::destroy(uci::type::ResponsePlanActivationType& accessor) {
  delete dynamic_cast<asb_uci::type::ResponsePlanActivationType*>(&accessor);
}

} // namespace type

} // namespace uci

