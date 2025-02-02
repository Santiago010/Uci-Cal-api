/** @file PO_ComponentF_StopSettingsType.cpp
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

#include "../../../include/asb_uci/type/PO_ComponentF_StopSettingsType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentF_StopSettingsType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PO_ComponentF_StopSettingsType::PO_ComponentF_StopSettingsType() = default;

PO_ComponentF_StopSettingsType::~PO_ComponentF_StopSettingsType() = default;

void PO_ComponentF_StopSettingsType::copy(const uci::type::PO_ComponentF_StopSettingsType& accessor) {
  copyImpl(accessor, false);
}

void PO_ComponentF_StopSettingsType::copyImpl(const uci::type::PO_ComponentF_StopSettingsType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PO_ComponentF_StopSettingsType&>(accessor);
    f_StopSetting_Accessor = (accessorImpl.f_StopSetting_Accessor ? accessorImpl.f_StopSetting_Accessor : boost::none);
    autoF_Stop_Accessor = (accessorImpl.autoF_Stop_Accessor ? accessorImpl.autoF_Stop_Accessor : boost::none);
  }
}

void PO_ComponentF_StopSettingsType::reset() noexcept {
  f_StopSetting_Accessor.reset();
  autoF_Stop_Accessor.reset();
}

uci::type::PO_ComponentF_StopSettingsType::PO_ComponentF_StopSettingsTypeChoice PO_ComponentF_StopSettingsType::getPO_ComponentF_StopSettingsTypeChoiceOrdinal() const noexcept {
  if (f_StopSetting_Accessor) {
    return PO_COMPONENTF_STOPSETTINGSTYPE_CHOICE_F_STOPSETTING;
  }
  if (autoF_Stop_Accessor) {
    return PO_COMPONENTF_STOPSETTINGSTYPE_CHOICE_AUTOF_STOP;
  }
  return PO_COMPONENTF_STOPSETTINGSTYPE_CHOICE_NONE;
}

uci::type::PO_ComponentF_StopSettingsType& PO_ComponentF_StopSettingsType::setPO_ComponentF_StopSettingsTypeChoiceOrdinal(uci::type::PO_ComponentF_StopSettingsType::PO_ComponentF_StopSettingsTypeChoice ordinal, uci::base::accessorType::AccessorType /*type*/) {
  switch (ordinal) {
    case PO_COMPONENTF_STOPSETTINGSTYPE_CHOICE_F_STOPSETTING:
      chooseF_StopSetting();
      break;
    case PO_COMPONENTF_STOPSETTINGSTYPE_CHOICE_AUTOF_STOP:
      chooseAutoF_Stop();
      break;
    default:
      throw uci::base::UCIException("Error in setPO_ComponentF_StopSettingsTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

xs::Float PO_ComponentF_StopSettingsType::getF_StopSetting() const {
  if (f_StopSetting_Accessor) {
    return *f_StopSetting_Accessor;
  }
  throw uci::base::UCIException("Error in getF_StopSetting(): Unable to get F_StopSetting, field not selected");
}

uci::type::PO_ComponentF_StopSettingsType& PO_ComponentF_StopSettingsType::setF_StopSetting(xs::Float value) {
  chooseF_StopSetting();
  f_StopSetting_Accessor = value;
  return *this;
}

bool PO_ComponentF_StopSettingsType::isF_StopSetting() const noexcept {
  return static_cast<bool>(f_StopSetting_Accessor);
}

void PO_ComponentF_StopSettingsType::chooseF_StopSetting() {
  autoF_Stop_Accessor.reset();
  if (!f_StopSetting_Accessor) {
    f_StopSetting_Accessor = boost::optional<asb_xs::Float>();
  }
}

xs::Boolean PO_ComponentF_StopSettingsType::getAutoF_Stop() const {
  if (autoF_Stop_Accessor) {
    return *autoF_Stop_Accessor;
  }
  throw uci::base::UCIException("Error in getAutoF_Stop(): Unable to get AutoF_Stop, field not selected");
}

uci::type::PO_ComponentF_StopSettingsType& PO_ComponentF_StopSettingsType::setAutoF_Stop(xs::Boolean value) {
  chooseAutoF_Stop();
  autoF_Stop_Accessor = value;
  return *this;
}

bool PO_ComponentF_StopSettingsType::isAutoF_Stop() const noexcept {
  return static_cast<bool>(autoF_Stop_Accessor);
}

void PO_ComponentF_StopSettingsType::chooseAutoF_Stop() {
  f_StopSetting_Accessor.reset();
  if (!autoF_Stop_Accessor) {
    autoF_Stop_Accessor = boost::optional<asb_xs::Boolean>();
  }
}

std::unique_ptr<PO_ComponentF_StopSettingsType> PO_ComponentF_StopSettingsType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pO_ComponentF_StopSettingsType : type};
  return (requestedType == uci::type::accessorType::pO_ComponentF_StopSettingsType) ? boost::make_unique<PO_ComponentF_StopSettingsType>() : nullptr;
}

/**  */
namespace PO_ComponentF_StopSettingsType_Names {

constexpr const char* Extern_Type_Name{"PO_ComponentF_StopSettingsType"};
constexpr const char* F_StopSetting_Name{"F_StopSetting"};
constexpr const char* AutoF_Stop_Name{"AutoF_Stop"};

} // namespace PO_ComponentF_StopSettingsType_Names

void PO_ComponentF_StopSettingsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_ComponentF_StopSettingsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PO_ComponentF_StopSettingsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PO_ComponentF_StopSettingsType_Names::F_StopSetting_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setF_StopSetting(asb_uci::util::SerializationHelpers::deserializeFloat(*value));
      }
    } else if (valueType.first == nsPrefix + PO_ComponentF_StopSettingsType_Names::AutoF_Stop_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAutoF_Stop(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    }
  }
}

std::string PO_ComponentF_StopSettingsType::serialize(const uci::type::PO_ComponentF_StopSettingsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PO_ComponentF_StopSettingsType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PO_ComponentF_StopSettingsType_Names::Extern_Type_Name);
  }
  if (accessor.isF_StopSetting()) {
    asb_uci::util::SerializationHelpers::serializeFloat(accessor.getF_StopSetting(), node, PO_ComponentF_StopSettingsType_Names::F_StopSetting_Name);
  } else if (accessor.isAutoF_Stop()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getAutoF_Stop(), node, PO_ComponentF_StopSettingsType_Names::AutoF_Stop_Name);
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

uci::type::PO_ComponentF_StopSettingsType& PO_ComponentF_StopSettingsType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PO_ComponentF_StopSettingsType>().release());
}

uci::type::PO_ComponentF_StopSettingsType& PO_ComponentF_StopSettingsType::create(const uci::type::PO_ComponentF_StopSettingsType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PO_ComponentF_StopSettingsType> newAccessor{boost::make_unique<asb_uci::type::PO_ComponentF_StopSettingsType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PO_ComponentF_StopSettingsType::destroy(uci::type::PO_ComponentF_StopSettingsType& accessor) {
  delete dynamic_cast<asb_uci::type::PO_ComponentF_StopSettingsType*>(&accessor);
}

} // namespace type

} // namespace uci

