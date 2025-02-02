/** @file PO_ComponentSettingsLensAssemblyFocusType.cpp
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

#include "../../../include/asb_uci/type/PO_ComponentSettingsLensAssemblyFocusType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/IncrementalChangeType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IncrementalChangeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentSettingsLensAssemblyFocusType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PercentType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PO_ComponentSettingsLensAssemblyFocusType::PO_ComponentSettingsLensAssemblyFocusType() = default;

PO_ComponentSettingsLensAssemblyFocusType::~PO_ComponentSettingsLensAssemblyFocusType() = default;

void PO_ComponentSettingsLensAssemblyFocusType::copy(const uci::type::PO_ComponentSettingsLensAssemblyFocusType& accessor) {
  copyImpl(accessor, false);
}

void PO_ComponentSettingsLensAssemblyFocusType::copyImpl(const uci::type::PO_ComponentSettingsLensAssemblyFocusType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PO_ComponentSettingsLensAssemblyFocusType&>(accessor);
    focusSetting_Accessor = (accessorImpl.focusSetting_Accessor ? accessorImpl.focusSetting_Accessor : boost::none);
    autoFocus_Accessor = (accessorImpl.autoFocus_Accessor ? accessorImpl.autoFocus_Accessor : boost::none);
    autoFocusZoom_Accessor = (accessorImpl.autoFocusZoom_Accessor ? accessorImpl.autoFocusZoom_Accessor : boost::none);
    if (accessorImpl.incrementalChange_Accessor) {
      setIncrementalChange(*(accessorImpl.incrementalChange_Accessor));
    } else {
      incrementalChange_Accessor.reset();
    }
  }
}

void PO_ComponentSettingsLensAssemblyFocusType::reset() noexcept {
  focusSetting_Accessor.reset();
  autoFocus_Accessor.reset();
  autoFocusZoom_Accessor.reset();
  incrementalChange_Accessor.reset();
}

uci::type::PO_ComponentSettingsLensAssemblyFocusType::PO_ComponentSettingsLensAssemblyFocusTypeChoice PO_ComponentSettingsLensAssemblyFocusType::getPO_ComponentSettingsLensAssemblyFocusTypeChoiceOrdinal() const noexcept {
  if (focusSetting_Accessor) {
    return PO_COMPONENTSETTINGSLENSASSEMBLYFOCUSTYPE_CHOICE_FOCUSSETTING;
  }
  if (autoFocus_Accessor) {
    return PO_COMPONENTSETTINGSLENSASSEMBLYFOCUSTYPE_CHOICE_AUTOFOCUS;
  }
  if (autoFocusZoom_Accessor) {
    return PO_COMPONENTSETTINGSLENSASSEMBLYFOCUSTYPE_CHOICE_AUTOFOCUSZOOM;
  }
  if (incrementalChange_Accessor) {
    return PO_COMPONENTSETTINGSLENSASSEMBLYFOCUSTYPE_CHOICE_INCREMENTALCHANGE;
  }
  return PO_COMPONENTSETTINGSLENSASSEMBLYFOCUSTYPE_CHOICE_NONE;
}

uci::type::PO_ComponentSettingsLensAssemblyFocusType& PO_ComponentSettingsLensAssemblyFocusType::setPO_ComponentSettingsLensAssemblyFocusTypeChoiceOrdinal(uci::type::PO_ComponentSettingsLensAssemblyFocusType::PO_ComponentSettingsLensAssemblyFocusTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case PO_COMPONENTSETTINGSLENSASSEMBLYFOCUSTYPE_CHOICE_FOCUSSETTING:
      chooseFocusSetting();
      break;
    case PO_COMPONENTSETTINGSLENSASSEMBLYFOCUSTYPE_CHOICE_AUTOFOCUS:
      chooseAutoFocus();
      break;
    case PO_COMPONENTSETTINGSLENSASSEMBLYFOCUSTYPE_CHOICE_AUTOFOCUSZOOM:
      chooseAutoFocusZoom();
      break;
    case PO_COMPONENTSETTINGSLENSASSEMBLYFOCUSTYPE_CHOICE_INCREMENTALCHANGE:
      chooseIncrementalChange("setPO_ComponentSettingsLensAssemblyFocusTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setPO_ComponentSettingsLensAssemblyFocusTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::PercentTypeValue PO_ComponentSettingsLensAssemblyFocusType::getFocusSetting() const {
  if (focusSetting_Accessor) {
    return *focusSetting_Accessor;
  }
  throw uci::base::UCIException("Error in getFocusSetting(): Unable to get FocusSetting, field not selected");
}

uci::type::PO_ComponentSettingsLensAssemblyFocusType& PO_ComponentSettingsLensAssemblyFocusType::setFocusSetting(uci::type::PercentTypeValue value) {
  chooseFocusSetting();
  focusSetting_Accessor = value;
  return *this;
}

bool PO_ComponentSettingsLensAssemblyFocusType::isFocusSetting() const noexcept {
  return static_cast<bool>(focusSetting_Accessor);
}

void PO_ComponentSettingsLensAssemblyFocusType::chooseFocusSetting() {
  autoFocus_Accessor.reset();
  autoFocusZoom_Accessor.reset();
  incrementalChange_Accessor.reset();
  if (!focusSetting_Accessor) {
    focusSetting_Accessor = boost::optional<asb_xs::Double>();
  }
}

xs::Boolean PO_ComponentSettingsLensAssemblyFocusType::getAutoFocus() const {
  if (autoFocus_Accessor) {
    return *autoFocus_Accessor;
  }
  throw uci::base::UCIException("Error in getAutoFocus(): Unable to get AutoFocus, field not selected");
}

uci::type::PO_ComponentSettingsLensAssemblyFocusType& PO_ComponentSettingsLensAssemblyFocusType::setAutoFocus(xs::Boolean value) {
  chooseAutoFocus();
  autoFocus_Accessor = value;
  return *this;
}

bool PO_ComponentSettingsLensAssemblyFocusType::isAutoFocus() const noexcept {
  return static_cast<bool>(autoFocus_Accessor);
}

void PO_ComponentSettingsLensAssemblyFocusType::chooseAutoFocus() {
  focusSetting_Accessor.reset();
  autoFocusZoom_Accessor.reset();
  incrementalChange_Accessor.reset();
  if (!autoFocus_Accessor) {
    autoFocus_Accessor = boost::optional<asb_xs::Boolean>();
  }
}

xs::Boolean PO_ComponentSettingsLensAssemblyFocusType::getAutoFocusZoom() const {
  if (autoFocusZoom_Accessor) {
    return *autoFocusZoom_Accessor;
  }
  throw uci::base::UCIException("Error in getAutoFocusZoom(): Unable to get AutoFocusZoom, field not selected");
}

uci::type::PO_ComponentSettingsLensAssemblyFocusType& PO_ComponentSettingsLensAssemblyFocusType::setAutoFocusZoom(xs::Boolean value) {
  chooseAutoFocusZoom();
  autoFocusZoom_Accessor = value;
  return *this;
}

bool PO_ComponentSettingsLensAssemblyFocusType::isAutoFocusZoom() const noexcept {
  return static_cast<bool>(autoFocusZoom_Accessor);
}

void PO_ComponentSettingsLensAssemblyFocusType::chooseAutoFocusZoom() {
  focusSetting_Accessor.reset();
  autoFocus_Accessor.reset();
  incrementalChange_Accessor.reset();
  if (!autoFocusZoom_Accessor) {
    autoFocusZoom_Accessor = boost::optional<asb_xs::Boolean>();
  }
}

uci::type::IncrementalChangeType& PO_ComponentSettingsLensAssemblyFocusType::getIncrementalChange_() const {
  if (incrementalChange_Accessor) {
    return *incrementalChange_Accessor;
  }
  throw uci::base::UCIException("Error in getIncrementalChange(): Unable to get IncrementalChange, field not selected");
}

const uci::type::IncrementalChangeType& PO_ComponentSettingsLensAssemblyFocusType::getIncrementalChange() const {
  return getIncrementalChange_();
}

uci::type::IncrementalChangeType& PO_ComponentSettingsLensAssemblyFocusType::getIncrementalChange() {
  return getIncrementalChange_();
}

uci::type::PO_ComponentSettingsLensAssemblyFocusType& PO_ComponentSettingsLensAssemblyFocusType::setIncrementalChange(const uci::type::IncrementalChangeType& accessor) {
  chooseIncrementalChange();
  if (&accessor != incrementalChange_Accessor.get()) {
    incrementalChange_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PO_ComponentSettingsLensAssemblyFocusType::isIncrementalChange() const noexcept {
  return static_cast<bool>(incrementalChange_Accessor);
}

uci::type::IncrementalChangeType& PO_ComponentSettingsLensAssemblyFocusType::chooseIncrementalChange(const std::string& method, uci::base::accessorType::AccessorType type) {
  focusSetting_Accessor.reset();
  autoFocus_Accessor.reset();
  autoFocusZoom_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::incrementalChangeType : type};
  if ((!incrementalChange_Accessor) || (incrementalChange_Accessor->getAccessorType() != requestedType)) {
    incrementalChange_Accessor = IncrementalChangeType::create(type);
    if (!incrementalChange_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *incrementalChange_Accessor;
}

uci::type::IncrementalChangeType& PO_ComponentSettingsLensAssemblyFocusType::chooseIncrementalChange(uci::base::accessorType::AccessorType type) {
  return chooseIncrementalChange("chooseIncrementalChange", type);
}

std::unique_ptr<PO_ComponentSettingsLensAssemblyFocusType> PO_ComponentSettingsLensAssemblyFocusType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pO_ComponentSettingsLensAssemblyFocusType : type};
  return (requestedType == uci::type::accessorType::pO_ComponentSettingsLensAssemblyFocusType) ? boost::make_unique<PO_ComponentSettingsLensAssemblyFocusType>() : nullptr;
}

/**  */
namespace PO_ComponentSettingsLensAssemblyFocusType_Names {

constexpr const char* Extern_Type_Name{"PO_ComponentSettingsLensAssemblyFocusType"};
constexpr const char* FocusSetting_Name{"FocusSetting"};
constexpr const char* AutoFocus_Name{"AutoFocus"};
constexpr const char* AutoFocusZoom_Name{"AutoFocusZoom"};
constexpr const char* IncrementalChange_Name{"IncrementalChange"};

} // namespace PO_ComponentSettingsLensAssemblyFocusType_Names

void PO_ComponentSettingsLensAssemblyFocusType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_ComponentSettingsLensAssemblyFocusType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PO_ComponentSettingsLensAssemblyFocusType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PO_ComponentSettingsLensAssemblyFocusType_Names::FocusSetting_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setFocusSetting(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + PO_ComponentSettingsLensAssemblyFocusType_Names::AutoFocus_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAutoFocus(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + PO_ComponentSettingsLensAssemblyFocusType_Names::AutoFocusZoom_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAutoFocusZoom(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + PO_ComponentSettingsLensAssemblyFocusType_Names::IncrementalChange_Name) {
      IncrementalChangeType::deserialize(valueType.second, accessor.chooseIncrementalChange(), nodeName, nsPrefix);
    }
  }
}

std::string PO_ComponentSettingsLensAssemblyFocusType::serialize(const uci::type::PO_ComponentSettingsLensAssemblyFocusType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PO_ComponentSettingsLensAssemblyFocusType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PO_ComponentSettingsLensAssemblyFocusType_Names::Extern_Type_Name);
  }
  if (accessor.isFocusSetting()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getFocusSetting(), node, PO_ComponentSettingsLensAssemblyFocusType_Names::FocusSetting_Name);
  } else if (accessor.isAutoFocus()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getAutoFocus(), node, PO_ComponentSettingsLensAssemblyFocusType_Names::AutoFocus_Name);
  } else if (accessor.isAutoFocusZoom()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getAutoFocusZoom(), node, PO_ComponentSettingsLensAssemblyFocusType_Names::AutoFocusZoom_Name);
  } else if (accessor.isIncrementalChange()) {
    IncrementalChangeType::serialize(accessor.getIncrementalChange(), node, PO_ComponentSettingsLensAssemblyFocusType_Names::IncrementalChange_Name);
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

uci::type::PO_ComponentSettingsLensAssemblyFocusType& PO_ComponentSettingsLensAssemblyFocusType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PO_ComponentSettingsLensAssemblyFocusType>().release());
}

uci::type::PO_ComponentSettingsLensAssemblyFocusType& PO_ComponentSettingsLensAssemblyFocusType::create(const uci::type::PO_ComponentSettingsLensAssemblyFocusType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PO_ComponentSettingsLensAssemblyFocusType> newAccessor{boost::make_unique<asb_uci::type::PO_ComponentSettingsLensAssemblyFocusType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PO_ComponentSettingsLensAssemblyFocusType::destroy(uci::type::PO_ComponentSettingsLensAssemblyFocusType& accessor) {
  delete dynamic_cast<asb_uci::type::PO_ComponentSettingsLensAssemblyFocusType*>(&accessor);
}

} // namespace type

} // namespace uci

