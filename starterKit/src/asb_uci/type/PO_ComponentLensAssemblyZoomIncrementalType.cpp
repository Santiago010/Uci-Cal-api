/** @file PO_ComponentLensAssemblyZoomIncrementalType.cpp
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

#include "../../../include/asb_uci/type/PO_ComponentLensAssemblyZoomIncrementalType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ComponentControlInterfacesEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ComponentControlInterfacesEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentLensAssemblyZoomIncrementalType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PO_ComponentLensAssemblyZoomIncrementalType::PO_ComponentLensAssemblyZoomIncrementalType()
  : zoomControl_Accessor{boost::make_unique<ZoomControl>(1, 4)} {
}

PO_ComponentLensAssemblyZoomIncrementalType::~PO_ComponentLensAssemblyZoomIncrementalType() = default;

void PO_ComponentLensAssemblyZoomIncrementalType::copy(const uci::type::PO_ComponentLensAssemblyZoomIncrementalType& accessor) {
  copyImpl(accessor, false);
}

void PO_ComponentLensAssemblyZoomIncrementalType::copyImpl(const uci::type::PO_ComponentLensAssemblyZoomIncrementalType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PO_ComponentLensAssemblyZoomIncrementalType&>(accessor);
    setZoomControl(*(accessorImpl.zoomControl_Accessor));
  }
}

void PO_ComponentLensAssemblyZoomIncrementalType::reset() noexcept {
  zoomControl_Accessor->reset();
}

const uci::type::PO_ComponentLensAssemblyZoomIncrementalType::ZoomControl& PO_ComponentLensAssemblyZoomIncrementalType::getZoomControl() const {
  return *zoomControl_Accessor;
}

uci::type::PO_ComponentLensAssemblyZoomIncrementalType::ZoomControl& PO_ComponentLensAssemblyZoomIncrementalType::getZoomControl() {
  return *zoomControl_Accessor;
}

uci::type::PO_ComponentLensAssemblyZoomIncrementalType& PO_ComponentLensAssemblyZoomIncrementalType::setZoomControl(const uci::type::PO_ComponentLensAssemblyZoomIncrementalType::ZoomControl& accessor) {
  if (&accessor != zoomControl_Accessor.get()) {
    zoomControl_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<PO_ComponentLensAssemblyZoomIncrementalType> PO_ComponentLensAssemblyZoomIncrementalType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pO_ComponentLensAssemblyZoomIncrementalType : type};
  return (requestedType == uci::type::accessorType::pO_ComponentLensAssemblyZoomIncrementalType) ? boost::make_unique<PO_ComponentLensAssemblyZoomIncrementalType>() : nullptr;
}

/**  */
namespace PO_ComponentLensAssemblyZoomIncrementalType_Names {

constexpr const char* Extern_Type_Name{"PO_ComponentLensAssemblyZoomIncrementalType"};
constexpr const char* ZoomControl_Name{"ZoomControl"};

} // namespace PO_ComponentLensAssemblyZoomIncrementalType_Names

void PO_ComponentLensAssemblyZoomIncrementalType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_ComponentLensAssemblyZoomIncrementalType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PO_ComponentLensAssemblyZoomIncrementalType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PO_ComponentLensAssemblyZoomIncrementalType_Names::ZoomControl_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PO_ComponentLensAssemblyZoomIncrementalType::ZoomControl& boundedList = accessor.getZoomControl();
        const uci::type::PO_ComponentLensAssemblyZoomIncrementalType::ZoomControl::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    }
  }
}

std::string PO_ComponentLensAssemblyZoomIncrementalType::serialize(const uci::type::PO_ComponentLensAssemblyZoomIncrementalType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PO_ComponentLensAssemblyZoomIncrementalType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PO_ComponentLensAssemblyZoomIncrementalType_Names::Extern_Type_Name);
  }
  {
    const uci::type::PO_ComponentLensAssemblyZoomIncrementalType::ZoomControl& boundedList = accessor.getZoomControl();
    for (uci::type::PO_ComponentLensAssemblyZoomIncrementalType::ZoomControl::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      ComponentControlInterfacesEnum::serialize(boundedList.at(i), node, PO_ComponentLensAssemblyZoomIncrementalType_Names::ZoomControl_Name, false);
    }
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

uci::type::PO_ComponentLensAssemblyZoomIncrementalType& PO_ComponentLensAssemblyZoomIncrementalType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PO_ComponentLensAssemblyZoomIncrementalType>().release());
}

uci::type::PO_ComponentLensAssemblyZoomIncrementalType& PO_ComponentLensAssemblyZoomIncrementalType::create(const uci::type::PO_ComponentLensAssemblyZoomIncrementalType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PO_ComponentLensAssemblyZoomIncrementalType> newAccessor{boost::make_unique<asb_uci::type::PO_ComponentLensAssemblyZoomIncrementalType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PO_ComponentLensAssemblyZoomIncrementalType::destroy(uci::type::PO_ComponentLensAssemblyZoomIncrementalType& accessor) {
  delete dynamic_cast<asb_uci::type::PO_ComponentLensAssemblyZoomIncrementalType*>(&accessor);
}

} // namespace type

} // namespace uci

