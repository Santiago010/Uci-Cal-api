/** @file RuleResponseType.cpp
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

#include "../../../include/asb_uci/type/RuleResponseType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/EmptyType.h"
#include "../../../include/asb_uci/type/MissionPlanActivationCommandType.h"
#include "../../../include/asb_uci/type/ResponseAlertType.h"
#include "../../../include/asb_uci/type/ResponseTemplateType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EmptyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MissionPlanActivationCommandType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ResponseAlertType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ResponseTemplateType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RuleResponseType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

RuleResponseType::RuleResponseType() = default;

RuleResponseType::~RuleResponseType() = default;

void RuleResponseType::copy(const uci::type::RuleResponseType& accessor) {
  copyImpl(accessor, false);
}

void RuleResponseType::copyImpl(const uci::type::RuleResponseType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const RuleResponseType&>(accessor);
    if (accessorImpl.requirementsTemplate_Accessor) {
      setRequirementsTemplate(*(accessorImpl.requirementsTemplate_Accessor));
    } else {
      requirementsTemplate_Accessor.reset();
    }
    if (accessorImpl.activatePlan_Accessor) {
      setActivatePlan(*(accessorImpl.activatePlan_Accessor));
    } else {
      activatePlan_Accessor.reset();
    }
    if (accessorImpl.generateAlert_Accessor) {
      setGenerateAlert(*(accessorImpl.generateAlert_Accessor));
    } else {
      generateAlert_Accessor.reset();
    }
    if (accessorImpl.doNothing_Accessor) {
      setDoNothing(*(accessorImpl.doNothing_Accessor));
    } else {
      doNothing_Accessor.reset();
    }
  }
}

void RuleResponseType::reset() noexcept {
  requirementsTemplate_Accessor.reset();
  activatePlan_Accessor.reset();
  generateAlert_Accessor.reset();
  doNothing_Accessor.reset();
}

uci::type::RuleResponseType::RuleResponseTypeChoice RuleResponseType::getRuleResponseTypeChoiceOrdinal() const noexcept {
  if (requirementsTemplate_Accessor) {
    return RULERESPONSETYPE_CHOICE_REQUIREMENTSTEMPLATE;
  }
  if (activatePlan_Accessor) {
    return RULERESPONSETYPE_CHOICE_ACTIVATEPLAN;
  }
  if (generateAlert_Accessor) {
    return RULERESPONSETYPE_CHOICE_GENERATEALERT;
  }
  if (doNothing_Accessor) {
    return RULERESPONSETYPE_CHOICE_DONOTHING;
  }
  return RULERESPONSETYPE_CHOICE_NONE;
}

uci::type::RuleResponseType& RuleResponseType::setRuleResponseTypeChoiceOrdinal(uci::type::RuleResponseType::RuleResponseTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case RULERESPONSETYPE_CHOICE_REQUIREMENTSTEMPLATE:
      chooseRequirementsTemplate("setRuleResponseTypeChoiceOrdinal", type);
      break;
    case RULERESPONSETYPE_CHOICE_ACTIVATEPLAN:
      chooseActivatePlan("setRuleResponseTypeChoiceOrdinal", type);
      break;
    case RULERESPONSETYPE_CHOICE_GENERATEALERT:
      chooseGenerateAlert("setRuleResponseTypeChoiceOrdinal", type);
      break;
    case RULERESPONSETYPE_CHOICE_DONOTHING:
      chooseDoNothing("setRuleResponseTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setRuleResponseTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::ResponseTemplateType& RuleResponseType::getRequirementsTemplate_() const {
  if (requirementsTemplate_Accessor) {
    return *requirementsTemplate_Accessor;
  }
  throw uci::base::UCIException("Error in getRequirementsTemplate(): Unable to get RequirementsTemplate, field not selected");
}

const uci::type::ResponseTemplateType& RuleResponseType::getRequirementsTemplate() const {
  return getRequirementsTemplate_();
}

uci::type::ResponseTemplateType& RuleResponseType::getRequirementsTemplate() {
  return getRequirementsTemplate_();
}

uci::type::RuleResponseType& RuleResponseType::setRequirementsTemplate(const uci::type::ResponseTemplateType& accessor) {
  chooseRequirementsTemplate();
  if (&accessor != requirementsTemplate_Accessor.get()) {
    requirementsTemplate_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RuleResponseType::isRequirementsTemplate() const noexcept {
  return static_cast<bool>(requirementsTemplate_Accessor);
}

uci::type::ResponseTemplateType& RuleResponseType::chooseRequirementsTemplate(const std::string& method, uci::base::accessorType::AccessorType type) {
  activatePlan_Accessor.reset();
  generateAlert_Accessor.reset();
  doNothing_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::responseTemplateType : type};
  if ((!requirementsTemplate_Accessor) || (requirementsTemplate_Accessor->getAccessorType() != requestedType)) {
    requirementsTemplate_Accessor = ResponseTemplateType::create(type);
    if (!requirementsTemplate_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *requirementsTemplate_Accessor;
}

uci::type::ResponseTemplateType& RuleResponseType::chooseRequirementsTemplate(uci::base::accessorType::AccessorType type) {
  return chooseRequirementsTemplate("chooseRequirementsTemplate", type);
}

uci::type::MissionPlanActivationCommandType& RuleResponseType::getActivatePlan_() const {
  if (activatePlan_Accessor) {
    return *activatePlan_Accessor;
  }
  throw uci::base::UCIException("Error in getActivatePlan(): Unable to get ActivatePlan, field not selected");
}

const uci::type::MissionPlanActivationCommandType& RuleResponseType::getActivatePlan() const {
  return getActivatePlan_();
}

uci::type::MissionPlanActivationCommandType& RuleResponseType::getActivatePlan() {
  return getActivatePlan_();
}

uci::type::RuleResponseType& RuleResponseType::setActivatePlan(const uci::type::MissionPlanActivationCommandType& accessor) {
  chooseActivatePlan();
  if (&accessor != activatePlan_Accessor.get()) {
    activatePlan_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RuleResponseType::isActivatePlan() const noexcept {
  return static_cast<bool>(activatePlan_Accessor);
}

uci::type::MissionPlanActivationCommandType& RuleResponseType::chooseActivatePlan(const std::string& method, uci::base::accessorType::AccessorType type) {
  requirementsTemplate_Accessor.reset();
  generateAlert_Accessor.reset();
  doNothing_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::missionPlanActivationCommandType : type};
  if ((!activatePlan_Accessor) || (activatePlan_Accessor->getAccessorType() != requestedType)) {
    activatePlan_Accessor = MissionPlanActivationCommandType::create(type);
    if (!activatePlan_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *activatePlan_Accessor;
}

uci::type::MissionPlanActivationCommandType& RuleResponseType::chooseActivatePlan(uci::base::accessorType::AccessorType type) {
  return chooseActivatePlan("chooseActivatePlan", type);
}

uci::type::ResponseAlertType& RuleResponseType::getGenerateAlert_() const {
  if (generateAlert_Accessor) {
    return *generateAlert_Accessor;
  }
  throw uci::base::UCIException("Error in getGenerateAlert(): Unable to get GenerateAlert, field not selected");
}

const uci::type::ResponseAlertType& RuleResponseType::getGenerateAlert() const {
  return getGenerateAlert_();
}

uci::type::ResponseAlertType& RuleResponseType::getGenerateAlert() {
  return getGenerateAlert_();
}

uci::type::RuleResponseType& RuleResponseType::setGenerateAlert(const uci::type::ResponseAlertType& accessor) {
  chooseGenerateAlert();
  if (&accessor != generateAlert_Accessor.get()) {
    generateAlert_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RuleResponseType::isGenerateAlert() const noexcept {
  return static_cast<bool>(generateAlert_Accessor);
}

uci::type::ResponseAlertType& RuleResponseType::chooseGenerateAlert(const std::string& method, uci::base::accessorType::AccessorType type) {
  requirementsTemplate_Accessor.reset();
  activatePlan_Accessor.reset();
  doNothing_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::responseAlertType : type};
  if ((!generateAlert_Accessor) || (generateAlert_Accessor->getAccessorType() != requestedType)) {
    generateAlert_Accessor = ResponseAlertType::create(type);
    if (!generateAlert_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *generateAlert_Accessor;
}

uci::type::ResponseAlertType& RuleResponseType::chooseGenerateAlert(uci::base::accessorType::AccessorType type) {
  return chooseGenerateAlert("chooseGenerateAlert", type);
}

uci::type::EmptyType& RuleResponseType::getDoNothing_() const {
  if (doNothing_Accessor) {
    return *doNothing_Accessor;
  }
  throw uci::base::UCIException("Error in getDoNothing(): An attempt was made to get an optional field that was not enabled, call hasDoNothing() to determine if it is safe to call getDoNothing()");
}

const uci::type::EmptyType& RuleResponseType::getDoNothing() const {
  return getDoNothing_();
}

uci::type::EmptyType& RuleResponseType::getDoNothing() {
  return getDoNothing_();
}

uci::type::RuleResponseType& RuleResponseType::setDoNothing(const uci::type::EmptyType& value) {
  return setDoNothing(value.c_str());
}

uci::type::RuleResponseType& RuleResponseType::setDoNothing(const std::string& value) {
  return setDoNothing(value.c_str());
}

uci::type::RuleResponseType& RuleResponseType::setDoNothing(const char * value) {
  chooseDoNothing().setStringValue(value);
  return *this;
}

bool RuleResponseType::isDoNothing() const noexcept {
  return static_cast<bool>(doNothing_Accessor);
}

uci::type::EmptyType& RuleResponseType::chooseDoNothing(const std::string& /*method*/, uci::base::accessorType::AccessorType type) {
  requirementsTemplate_Accessor.reset();
  activatePlan_Accessor.reset();
  generateAlert_Accessor.reset();
  if (!doNothing_Accessor) {
    doNothing_Accessor = EmptyType::create(type);
  }
  return *doNothing_Accessor;
}

uci::type::EmptyType& RuleResponseType::chooseDoNothing(uci::base::accessorType::AccessorType type) {
  return chooseDoNothing("chooseDoNothing", type);
}

std::unique_ptr<RuleResponseType> RuleResponseType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::ruleResponseType : type};
  return (requestedType == uci::type::accessorType::ruleResponseType) ? boost::make_unique<RuleResponseType>() : nullptr;
}

/**  */
namespace RuleResponseType_Names {

constexpr const char* Extern_Type_Name{"RuleResponseType"};
constexpr const char* RequirementsTemplate_Name{"RequirementsTemplate"};
constexpr const char* ActivatePlan_Name{"ActivatePlan"};
constexpr const char* GenerateAlert_Name{"GenerateAlert"};
constexpr const char* DoNothing_Name{"DoNothing"};

} // namespace RuleResponseType_Names

void RuleResponseType::deserialize(const boost::property_tree::ptree& propTree, uci::type::RuleResponseType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RuleResponseType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RuleResponseType_Names::RequirementsTemplate_Name) {
      ResponseTemplateType::deserialize(valueType.second, accessor.chooseRequirementsTemplate(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RuleResponseType_Names::ActivatePlan_Name) {
      MissionPlanActivationCommandType::deserialize(valueType.second, accessor.chooseActivatePlan(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RuleResponseType_Names::GenerateAlert_Name) {
      ResponseAlertType::deserialize(valueType.second, accessor.chooseGenerateAlert(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RuleResponseType_Names::DoNothing_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.chooseDoNothing().setStringValue(*value);
      }
    }
  }
}

std::string RuleResponseType::serialize(const uci::type::RuleResponseType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? RuleResponseType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, RuleResponseType_Names::Extern_Type_Name);
  }
  if (accessor.isRequirementsTemplate()) {
    ResponseTemplateType::serialize(accessor.getRequirementsTemplate(), node, RuleResponseType_Names::RequirementsTemplate_Name);
  } else if (accessor.isActivatePlan()) {
    MissionPlanActivationCommandType::serialize(accessor.getActivatePlan(), node, RuleResponseType_Names::ActivatePlan_Name);
  } else if (accessor.isGenerateAlert()) {
    ResponseAlertType::serialize(accessor.getGenerateAlert(), node, RuleResponseType_Names::GenerateAlert_Name);
  } else if (accessor.isDoNothing()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getDoNothing(), node, RuleResponseType_Names::DoNothing_Name);
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

uci::type::RuleResponseType& RuleResponseType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::RuleResponseType>().release());
}

uci::type::RuleResponseType& RuleResponseType::create(const uci::type::RuleResponseType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::RuleResponseType> newAccessor{boost::make_unique<asb_uci::type::RuleResponseType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void RuleResponseType::destroy(uci::type::RuleResponseType& accessor) {
  delete dynamic_cast<asb_uci::type::RuleResponseType*>(&accessor);
}

} // namespace type

} // namespace uci

