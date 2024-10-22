/** @file PO_ComponentLensAssemblyFieldOfViewType.cpp
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

#include "../../../include/asb_uci/type/PO_ComponentLensAssemblyFieldOfViewType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/PO_ComponentLensAssemblyZoomType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AngleQuarterType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentLensAssemblyFieldOfViewType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentLensAssemblyZoomType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PO_ComponentLensAssemblyFieldOfViewType::PO_ComponentLensAssemblyFieldOfViewType() = default;

PO_ComponentLensAssemblyFieldOfViewType::~PO_ComponentLensAssemblyFieldOfViewType() = default;

void PO_ComponentLensAssemblyFieldOfViewType::copy(const uci::type::PO_ComponentLensAssemblyFieldOfViewType& accessor) {
  copyImpl(accessor, false);
}

void PO_ComponentLensAssemblyFieldOfViewType::copyImpl(const uci::type::PO_ComponentLensAssemblyFieldOfViewType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PO_ComponentLensAssemblyFieldOfViewType&>(accessor);
    fixedFOV_Accessor = (accessorImpl.fixedFOV_Accessor ? accessorImpl.fixedFOV_Accessor : boost::none);
    if (accessorImpl.zoom_Accessor) {
      setZoom(*(accessorImpl.zoom_Accessor));
    } else {
      zoom_Accessor.reset();
    }
  }
}

void PO_ComponentLensAssemblyFieldOfViewType::reset() noexcept {
  fixedFOV_Accessor.reset();
  zoom_Accessor.reset();
}

uci::type::PO_ComponentLensAssemblyFieldOfViewType::PO_ComponentLensAssemblyFieldOfViewTypeChoice PO_ComponentLensAssemblyFieldOfViewType::getPO_ComponentLensAssemblyFieldOfViewTypeChoiceOrdinal() const noexcept {
  if (fixedFOV_Accessor) {
    return PO_COMPONENTLENSASSEMBLYFIELDOFVIEWTYPE_CHOICE_FIXEDFOV;
  }
  if (zoom_Accessor) {
    return PO_COMPONENTLENSASSEMBLYFIELDOFVIEWTYPE_CHOICE_ZOOM;
  }
  return PO_COMPONENTLENSASSEMBLYFIELDOFVIEWTYPE_CHOICE_NONE;
}

uci::type::PO_ComponentLensAssemblyFieldOfViewType& PO_ComponentLensAssemblyFieldOfViewType::setPO_ComponentLensAssemblyFieldOfViewTypeChoiceOrdinal(uci::type::PO_ComponentLensAssemblyFieldOfViewType::PO_ComponentLensAssemblyFieldOfViewTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case PO_COMPONENTLENSASSEMBLYFIELDOFVIEWTYPE_CHOICE_FIXEDFOV:
      chooseFixedFOV();
      break;
    case PO_COMPONENTLENSASSEMBLYFIELDOFVIEWTYPE_CHOICE_ZOOM:
      chooseZoom("setPO_ComponentLensAssemblyFieldOfViewTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setPO_ComponentLensAssemblyFieldOfViewTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::AngleQuarterTypeValue PO_ComponentLensAssemblyFieldOfViewType::getFixedFOV() const {
  if (fixedFOV_Accessor) {
    return *fixedFOV_Accessor;
  }
  throw uci::base::UCIException("Error in getFixedFOV(): Unable to get FixedFOV, field not selected");
}

uci::type::PO_ComponentLensAssemblyFieldOfViewType& PO_ComponentLensAssemblyFieldOfViewType::setFixedFOV(uci::type::AngleQuarterTypeValue value) {
  chooseFixedFOV();
  fixedFOV_Accessor = value;
  return *this;
}

bool PO_ComponentLensAssemblyFieldOfViewType::isFixedFOV() const noexcept {
  return static_cast<bool>(fixedFOV_Accessor);
}

void PO_ComponentLensAssemblyFieldOfViewType::chooseFixedFOV() {
  zoom_Accessor.reset();
  if (!fixedFOV_Accessor) {
    fixedFOV_Accessor = boost::optional<asb_xs::Double>();
  }
}

uci::type::PO_ComponentLensAssemblyZoomType& PO_ComponentLensAssemblyFieldOfViewType::getZoom_() const {
  if (zoom_Accessor) {
    return *zoom_Accessor;
  }
  throw uci::base::UCIException("Error in getZoom(): Unable to get Zoom, field not selected");
}

const uci::type::PO_ComponentLensAssemblyZoomType& PO_ComponentLensAssemblyFieldOfViewType::getZoom() const {
  return getZoom_();
}

uci::type::PO_ComponentLensAssemblyZoomType& PO_ComponentLensAssemblyFieldOfViewType::getZoom() {
  return getZoom_();
}

uci::type::PO_ComponentLensAssemblyFieldOfViewType& PO_ComponentLensAssemblyFieldOfViewType::setZoom(const uci::type::PO_ComponentLensAssemblyZoomType& accessor) {
  chooseZoom();
  if (&accessor != zoom_Accessor.get()) {
    zoom_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PO_ComponentLensAssemblyFieldOfViewType::isZoom() const noexcept {
  return static_cast<bool>(zoom_Accessor);
}

uci::type::PO_ComponentLensAssemblyZoomType& PO_ComponentLensAssemblyFieldOfViewType::chooseZoom(const std::string& method, uci::base::accessorType::AccessorType type) {
  fixedFOV_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pO_ComponentLensAssemblyZoomType : type};
  if ((!zoom_Accessor) || (zoom_Accessor->getAccessorType() != requestedType)) {
    zoom_Accessor = PO_ComponentLensAssemblyZoomType::create(type);
    if (!zoom_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *zoom_Accessor;
}

uci::type::PO_ComponentLensAssemblyZoomType& PO_ComponentLensAssemblyFieldOfViewType::chooseZoom(uci::base::accessorType::AccessorType type) {
  return chooseZoom("chooseZoom", type);
}

std::unique_ptr<PO_ComponentLensAssemblyFieldOfViewType> PO_ComponentLensAssemblyFieldOfViewType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pO_ComponentLensAssemblyFieldOfViewType : type};
  return (requestedType == uci::type::accessorType::pO_ComponentLensAssemblyFieldOfViewType) ? boost::make_unique<PO_ComponentLensAssemblyFieldOfViewType>() : nullptr;
}

/**  */
namespace PO_ComponentLensAssemblyFieldOfViewType_Names {

constexpr const char* Extern_Type_Name{"PO_ComponentLensAssemblyFieldOfViewType"};
constexpr const char* FixedFOV_Name{"FixedFOV"};
constexpr const char* Zoom_Name{"Zoom"};

} // namespace PO_ComponentLensAssemblyFieldOfViewType_Names

void PO_ComponentLensAssemblyFieldOfViewType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_ComponentLensAssemblyFieldOfViewType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PO_ComponentLensAssemblyFieldOfViewType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PO_ComponentLensAssemblyFieldOfViewType_Names::FixedFOV_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setFixedFOV(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + PO_ComponentLensAssemblyFieldOfViewType_Names::Zoom_Name) {
      PO_ComponentLensAssemblyZoomType::deserialize(valueType.second, accessor.chooseZoom(), nodeName, nsPrefix);
    }
  }
}

std::string PO_ComponentLensAssemblyFieldOfViewType::serialize(const uci::type::PO_ComponentLensAssemblyFieldOfViewType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PO_ComponentLensAssemblyFieldOfViewType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PO_ComponentLensAssemblyFieldOfViewType_Names::Extern_Type_Name);
  }
  if (accessor.isFixedFOV()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getFixedFOV(), node, PO_ComponentLensAssemblyFieldOfViewType_Names::FixedFOV_Name);
  } else if (accessor.isZoom()) {
    PO_ComponentLensAssemblyZoomType::serialize(accessor.getZoom(), node, PO_ComponentLensAssemblyFieldOfViewType_Names::Zoom_Name);
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

uci::type::PO_ComponentLensAssemblyFieldOfViewType& PO_ComponentLensAssemblyFieldOfViewType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PO_ComponentLensAssemblyFieldOfViewType>().release());
}

uci::type::PO_ComponentLensAssemblyFieldOfViewType& PO_ComponentLensAssemblyFieldOfViewType::create(const uci::type::PO_ComponentLensAssemblyFieldOfViewType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PO_ComponentLensAssemblyFieldOfViewType> newAccessor{boost::make_unique<asb_uci::type::PO_ComponentLensAssemblyFieldOfViewType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PO_ComponentLensAssemblyFieldOfViewType::destroy(uci::type::PO_ComponentLensAssemblyFieldOfViewType& accessor) {
  delete dynamic_cast<asb_uci::type::PO_ComponentLensAssemblyFieldOfViewType*>(&accessor);
}

} // namespace type

} // namespace uci

