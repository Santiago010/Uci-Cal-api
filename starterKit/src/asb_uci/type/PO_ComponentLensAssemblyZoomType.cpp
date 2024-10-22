/** @file PO_ComponentLensAssemblyZoomType.cpp
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

#include "../../../include/asb_uci/type/PO_ComponentLensAssemblyZoomType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/PO_ComponentLensAssemblyZoomAbsoluteType.h"
#include "../../../include/asb_uci/type/PO_ComponentLensAssemblyZoomIncrementalType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentLensAssemblyZoomAbsoluteType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentLensAssemblyZoomIncrementalType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentLensAssemblyZoomType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PO_ComponentLensAssemblyZoomType::PO_ComponentLensAssemblyZoomType() = default;

PO_ComponentLensAssemblyZoomType::~PO_ComponentLensAssemblyZoomType() = default;

void PO_ComponentLensAssemblyZoomType::copy(const uci::type::PO_ComponentLensAssemblyZoomType& accessor) {
  copyImpl(accessor, false);
}

void PO_ComponentLensAssemblyZoomType::copyImpl(const uci::type::PO_ComponentLensAssemblyZoomType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PO_ComponentLensAssemblyZoomType&>(accessor);
    if (accessorImpl.incrementalZoom_Accessor) {
      setIncrementalZoom(*(accessorImpl.incrementalZoom_Accessor));
    } else {
      incrementalZoom_Accessor.reset();
    }
    if (accessorImpl.absoluteZoom_Accessor) {
      setAbsoluteZoom(*(accessorImpl.absoluteZoom_Accessor));
    } else {
      absoluteZoom_Accessor.reset();
    }
  }
}

void PO_ComponentLensAssemblyZoomType::reset() noexcept {
  incrementalZoom_Accessor.reset();
  absoluteZoom_Accessor.reset();
}

uci::type::PO_ComponentLensAssemblyZoomIncrementalType& PO_ComponentLensAssemblyZoomType::getIncrementalZoom_() const {
  if (incrementalZoom_Accessor) {
    return *incrementalZoom_Accessor;
  }
  throw uci::base::UCIException("Error in getIncrementalZoom(): An attempt was made to get an optional field that was not enabled, call hasIncrementalZoom() to determine if it is safe to call getIncrementalZoom()");
}

const uci::type::PO_ComponentLensAssemblyZoomIncrementalType& PO_ComponentLensAssemblyZoomType::getIncrementalZoom() const {
  return getIncrementalZoom_();
}

uci::type::PO_ComponentLensAssemblyZoomIncrementalType& PO_ComponentLensAssemblyZoomType::getIncrementalZoom() {
  return getIncrementalZoom_();
}

uci::type::PO_ComponentLensAssemblyZoomType& PO_ComponentLensAssemblyZoomType::setIncrementalZoom(const uci::type::PO_ComponentLensAssemblyZoomIncrementalType& accessor) {
  enableIncrementalZoom();
  if (&accessor != incrementalZoom_Accessor.get()) {
    incrementalZoom_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PO_ComponentLensAssemblyZoomType::hasIncrementalZoom() const noexcept {
  return static_cast<bool>(incrementalZoom_Accessor);
}

uci::type::PO_ComponentLensAssemblyZoomIncrementalType& PO_ComponentLensAssemblyZoomType::enableIncrementalZoom(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pO_ComponentLensAssemblyZoomIncrementalType : type};
  if ((!incrementalZoom_Accessor) || (incrementalZoom_Accessor->getAccessorType() != requestedType)) {
    incrementalZoom_Accessor = PO_ComponentLensAssemblyZoomIncrementalType::create(requestedType);
    if (!incrementalZoom_Accessor) {
      throw uci::base::UCIException("Error in enableIncrementalZoom(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *incrementalZoom_Accessor;
}

uci::type::PO_ComponentLensAssemblyZoomType& PO_ComponentLensAssemblyZoomType::clearIncrementalZoom() noexcept {
  incrementalZoom_Accessor.reset();
  return *this;
}

uci::type::PO_ComponentLensAssemblyZoomAbsoluteType& PO_ComponentLensAssemblyZoomType::getAbsoluteZoom_() const {
  if (absoluteZoom_Accessor) {
    return *absoluteZoom_Accessor;
  }
  throw uci::base::UCIException("Error in getAbsoluteZoom(): An attempt was made to get an optional field that was not enabled, call hasAbsoluteZoom() to determine if it is safe to call getAbsoluteZoom()");
}

const uci::type::PO_ComponentLensAssemblyZoomAbsoluteType& PO_ComponentLensAssemblyZoomType::getAbsoluteZoom() const {
  return getAbsoluteZoom_();
}

uci::type::PO_ComponentLensAssemblyZoomAbsoluteType& PO_ComponentLensAssemblyZoomType::getAbsoluteZoom() {
  return getAbsoluteZoom_();
}

uci::type::PO_ComponentLensAssemblyZoomType& PO_ComponentLensAssemblyZoomType::setAbsoluteZoom(const uci::type::PO_ComponentLensAssemblyZoomAbsoluteType& accessor) {
  enableAbsoluteZoom();
  if (&accessor != absoluteZoom_Accessor.get()) {
    absoluteZoom_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PO_ComponentLensAssemblyZoomType::hasAbsoluteZoom() const noexcept {
  return static_cast<bool>(absoluteZoom_Accessor);
}

uci::type::PO_ComponentLensAssemblyZoomAbsoluteType& PO_ComponentLensAssemblyZoomType::enableAbsoluteZoom(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pO_ComponentLensAssemblyZoomAbsoluteType : type};
  if ((!absoluteZoom_Accessor) || (absoluteZoom_Accessor->getAccessorType() != requestedType)) {
    absoluteZoom_Accessor = PO_ComponentLensAssemblyZoomAbsoluteType::create(requestedType);
    if (!absoluteZoom_Accessor) {
      throw uci::base::UCIException("Error in enableAbsoluteZoom(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *absoluteZoom_Accessor;
}

uci::type::PO_ComponentLensAssemblyZoomType& PO_ComponentLensAssemblyZoomType::clearAbsoluteZoom() noexcept {
  absoluteZoom_Accessor.reset();
  return *this;
}

std::unique_ptr<PO_ComponentLensAssemblyZoomType> PO_ComponentLensAssemblyZoomType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pO_ComponentLensAssemblyZoomType : type};
  return (requestedType == uci::type::accessorType::pO_ComponentLensAssemblyZoomType) ? boost::make_unique<PO_ComponentLensAssemblyZoomType>() : nullptr;
}

/**  */
namespace PO_ComponentLensAssemblyZoomType_Names {

constexpr const char* Extern_Type_Name{"PO_ComponentLensAssemblyZoomType"};
constexpr const char* IncrementalZoom_Name{"IncrementalZoom"};
constexpr const char* AbsoluteZoom_Name{"AbsoluteZoom"};

} // namespace PO_ComponentLensAssemblyZoomType_Names

void PO_ComponentLensAssemblyZoomType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_ComponentLensAssemblyZoomType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PO_ComponentLensAssemblyZoomType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PO_ComponentLensAssemblyZoomType_Names::IncrementalZoom_Name) {
      PO_ComponentLensAssemblyZoomIncrementalType::deserialize(valueType.second, accessor.enableIncrementalZoom(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_ComponentLensAssemblyZoomType_Names::AbsoluteZoom_Name) {
      PO_ComponentLensAssemblyZoomAbsoluteType::deserialize(valueType.second, accessor.enableAbsoluteZoom(), nodeName, nsPrefix);
    }
  }
}

std::string PO_ComponentLensAssemblyZoomType::serialize(const uci::type::PO_ComponentLensAssemblyZoomType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PO_ComponentLensAssemblyZoomType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PO_ComponentLensAssemblyZoomType_Names::Extern_Type_Name);
  }
  if (accessor.hasIncrementalZoom()) {
    PO_ComponentLensAssemblyZoomIncrementalType::serialize(accessor.getIncrementalZoom(), node, PO_ComponentLensAssemblyZoomType_Names::IncrementalZoom_Name);
  }
  if (accessor.hasAbsoluteZoom()) {
    PO_ComponentLensAssemblyZoomAbsoluteType::serialize(accessor.getAbsoluteZoom(), node, PO_ComponentLensAssemblyZoomType_Names::AbsoluteZoom_Name);
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

uci::type::PO_ComponentLensAssemblyZoomType& PO_ComponentLensAssemblyZoomType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PO_ComponentLensAssemblyZoomType>().release());
}

uci::type::PO_ComponentLensAssemblyZoomType& PO_ComponentLensAssemblyZoomType::create(const uci::type::PO_ComponentLensAssemblyZoomType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PO_ComponentLensAssemblyZoomType> newAccessor{boost::make_unique<asb_uci::type::PO_ComponentLensAssemblyZoomType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PO_ComponentLensAssemblyZoomType::destroy(uci::type::PO_ComponentLensAssemblyZoomType& accessor) {
  delete dynamic_cast<asb_uci::type::PO_ComponentLensAssemblyZoomType*>(&accessor);
}

} // namespace type

} // namespace uci

