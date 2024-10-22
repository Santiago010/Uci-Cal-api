/** @file PO_ComponentSettingsFocalPlaneArrayPixelPolarityType.cpp
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

#include "../../../include/asb_uci/type/PO_ComponentSettingsFocalPlaneArrayPixelPolarityType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ComponentControlsB_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ComponentControlsB_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentSettingsFocalPlaneArrayPixelPolarityType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::PO_ComponentSettingsFocalPlaneArrayPixelPolarityType() = default;

PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::~PO_ComponentSettingsFocalPlaneArrayPixelPolarityType() = default;

void PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::copy(const uci::type::PO_ComponentSettingsFocalPlaneArrayPixelPolarityType& accessor) {
  copyImpl(accessor, false);
}

void PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::copyImpl(const uci::type::PO_ComponentSettingsFocalPlaneArrayPixelPolarityType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PO_ComponentSettingsFocalPlaneArrayPixelPolarityType&>(accessor);
    polaritySetting_Accessor = (accessorImpl.polaritySetting_Accessor ? accessorImpl.polaritySetting_Accessor : boost::none);
    if (accessorImpl.polarityControls_Accessor) {
      setPolarityControls(*(accessorImpl.polarityControls_Accessor));
    } else {
      polarityControls_Accessor.reset();
    }
  }
}

void PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::reset() noexcept {
  polaritySetting_Accessor.reset();
  polarityControls_Accessor.reset();
}

uci::type::PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::PO_ComponentSettingsFocalPlaneArrayPixelPolarityTypeChoice PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::getPO_ComponentSettingsFocalPlaneArrayPixelPolarityTypeChoiceOrdinal() const noexcept {
  if (polaritySetting_Accessor) {
    return PO_COMPONENTSETTINGSFOCALPLANEARRAYPIXELPOLARITYTYPE_CHOICE_POLARITYSETTING;
  }
  if (polarityControls_Accessor) {
    return PO_COMPONENTSETTINGSFOCALPLANEARRAYPIXELPOLARITYTYPE_CHOICE_POLARITYCONTROLS;
  }
  return PO_COMPONENTSETTINGSFOCALPLANEARRAYPIXELPOLARITYTYPE_CHOICE_NONE;
}

uci::type::PO_ComponentSettingsFocalPlaneArrayPixelPolarityType& PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::setPO_ComponentSettingsFocalPlaneArrayPixelPolarityTypeChoiceOrdinal(uci::type::PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::PO_ComponentSettingsFocalPlaneArrayPixelPolarityTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case PO_COMPONENTSETTINGSFOCALPLANEARRAYPIXELPOLARITYTYPE_CHOICE_POLARITYSETTING:
      choosePolaritySetting();
      break;
    case PO_COMPONENTSETTINGSFOCALPLANEARRAYPIXELPOLARITYTYPE_CHOICE_POLARITYCONTROLS:
      choosePolarityControls("setPO_ComponentSettingsFocalPlaneArrayPixelPolarityTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setPO_ComponentSettingsFocalPlaneArrayPixelPolarityTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

xs::Boolean PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::getPolaritySetting() const {
  if (polaritySetting_Accessor) {
    return *polaritySetting_Accessor;
  }
  throw uci::base::UCIException("Error in getPolaritySetting(): Unable to get PolaritySetting, field not selected");
}

uci::type::PO_ComponentSettingsFocalPlaneArrayPixelPolarityType& PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::setPolaritySetting(xs::Boolean value) {
  choosePolaritySetting();
  polaritySetting_Accessor = value;
  return *this;
}

bool PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::isPolaritySetting() const noexcept {
  return static_cast<bool>(polaritySetting_Accessor);
}

void PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::choosePolaritySetting() {
  polarityControls_Accessor.reset();
  if (!polaritySetting_Accessor) {
    polaritySetting_Accessor = boost::optional<asb_xs::Boolean>();
  }
}

uci::type::ComponentControlsB_Type& PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::getPolarityControls_() const {
  if (polarityControls_Accessor) {
    return *polarityControls_Accessor;
  }
  throw uci::base::UCIException("Error in getPolarityControls(): Unable to get PolarityControls, field not selected");
}

const uci::type::ComponentControlsB_Type& PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::getPolarityControls() const {
  return getPolarityControls_();
}

uci::type::ComponentControlsB_Type& PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::getPolarityControls() {
  return getPolarityControls_();
}

uci::type::PO_ComponentSettingsFocalPlaneArrayPixelPolarityType& PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::setPolarityControls(const uci::type::ComponentControlsB_Type& accessor) {
  choosePolarityControls();
  if (&accessor != polarityControls_Accessor.get()) {
    polarityControls_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::isPolarityControls() const noexcept {
  return static_cast<bool>(polarityControls_Accessor);
}

uci::type::ComponentControlsB_Type& PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::choosePolarityControls(const std::string& method, uci::base::accessorType::AccessorType type) {
  polaritySetting_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::componentControlsB_Type : type};
  if ((!polarityControls_Accessor) || (polarityControls_Accessor->getAccessorType() != requestedType)) {
    polarityControls_Accessor = ComponentControlsB_Type::create(type);
    if (!polarityControls_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *polarityControls_Accessor;
}

uci::type::ComponentControlsB_Type& PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::choosePolarityControls(uci::base::accessorType::AccessorType type) {
  return choosePolarityControls("choosePolarityControls", type);
}

std::unique_ptr<PO_ComponentSettingsFocalPlaneArrayPixelPolarityType> PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pO_ComponentSettingsFocalPlaneArrayPixelPolarityType : type};
  return (requestedType == uci::type::accessorType::pO_ComponentSettingsFocalPlaneArrayPixelPolarityType) ? boost::make_unique<PO_ComponentSettingsFocalPlaneArrayPixelPolarityType>() : nullptr;
}

/**  */
namespace PO_ComponentSettingsFocalPlaneArrayPixelPolarityType_Names {

constexpr const char* Extern_Type_Name{"PO_ComponentSettingsFocalPlaneArrayPixelPolarityType"};
constexpr const char* PolaritySetting_Name{"PolaritySetting"};
constexpr const char* PolarityControls_Name{"PolarityControls"};

} // namespace PO_ComponentSettingsFocalPlaneArrayPixelPolarityType_Names

void PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_ComponentSettingsFocalPlaneArrayPixelPolarityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PO_ComponentSettingsFocalPlaneArrayPixelPolarityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PO_ComponentSettingsFocalPlaneArrayPixelPolarityType_Names::PolaritySetting_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPolaritySetting(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + PO_ComponentSettingsFocalPlaneArrayPixelPolarityType_Names::PolarityControls_Name) {
      ComponentControlsB_Type::deserialize(valueType.second, accessor.choosePolarityControls(), nodeName, nsPrefix);
    }
  }
}

std::string PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::serialize(const uci::type::PO_ComponentSettingsFocalPlaneArrayPixelPolarityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PO_ComponentSettingsFocalPlaneArrayPixelPolarityType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PO_ComponentSettingsFocalPlaneArrayPixelPolarityType_Names::Extern_Type_Name);
  }
  if (accessor.isPolaritySetting()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getPolaritySetting(), node, PO_ComponentSettingsFocalPlaneArrayPixelPolarityType_Names::PolaritySetting_Name);
  } else if (accessor.isPolarityControls()) {
    ComponentControlsB_Type::serialize(accessor.getPolarityControls(), node, PO_ComponentSettingsFocalPlaneArrayPixelPolarityType_Names::PolarityControls_Name);
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

uci::type::PO_ComponentSettingsFocalPlaneArrayPixelPolarityType& PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PO_ComponentSettingsFocalPlaneArrayPixelPolarityType>().release());
}

uci::type::PO_ComponentSettingsFocalPlaneArrayPixelPolarityType& PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::create(const uci::type::PO_ComponentSettingsFocalPlaneArrayPixelPolarityType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PO_ComponentSettingsFocalPlaneArrayPixelPolarityType> newAccessor{boost::make_unique<asb_uci::type::PO_ComponentSettingsFocalPlaneArrayPixelPolarityType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PO_ComponentSettingsFocalPlaneArrayPixelPolarityType::destroy(uci::type::PO_ComponentSettingsFocalPlaneArrayPixelPolarityType& accessor) {
  delete dynamic_cast<asb_uci::type::PO_ComponentSettingsFocalPlaneArrayPixelPolarityType*>(&accessor);
}

} // namespace type

} // namespace uci

