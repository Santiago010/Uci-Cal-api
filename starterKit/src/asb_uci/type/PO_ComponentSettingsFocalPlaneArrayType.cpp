/** @file PO_ComponentSettingsFocalPlaneArrayType.cpp
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

#include "../../../include/asb_uci/type/PO_ComponentSettingsFocalPlaneArrayType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ComponentControlsA_Type.h"
#include "../../../include/asb_uci/type/PO_ComponentSettingsFocalPlaneArrayChannelType.h"
#include "../../../include/asb_uci/type/PO_FPA_ID_Type.h"
#include "../../../include/asb_uci/type/PO_WindowID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ComponentControlsA_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentSettingsFocalPlaneArrayChannelType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentSettingsFocalPlaneArrayType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_FPA_ID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_WindowID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PO_ComponentSettingsFocalPlaneArrayType::PO_ComponentSettingsFocalPlaneArrayType()
  : focalPlaneArrayID_Accessor{boost::make_unique<PO_FPA_ID_Type>()},
    windowSelectionID_Accessor{boost::make_unique<WindowSelectionID>(0, SIZE_MAX)},
    channel_Accessor{boost::make_unique<Channel>(0, SIZE_MAX)} {
}

PO_ComponentSettingsFocalPlaneArrayType::~PO_ComponentSettingsFocalPlaneArrayType() = default;

void PO_ComponentSettingsFocalPlaneArrayType::copy(const uci::type::PO_ComponentSettingsFocalPlaneArrayType& accessor) {
  copyImpl(accessor, false);
}

void PO_ComponentSettingsFocalPlaneArrayType::copyImpl(const uci::type::PO_ComponentSettingsFocalPlaneArrayType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PO_ComponentSettingsFocalPlaneArrayType&>(accessor);
    setFocalPlaneArrayID(*(accessorImpl.focalPlaneArrayID_Accessor));
    setWindowSelectionID(*(accessorImpl.windowSelectionID_Accessor));
    if (accessorImpl.fPA_Controls_Accessor) {
      setFPA_Controls(*(accessorImpl.fPA_Controls_Accessor));
    } else {
      fPA_Controls_Accessor.reset();
    }
    setChannel(*(accessorImpl.channel_Accessor));
  }
}

void PO_ComponentSettingsFocalPlaneArrayType::reset() noexcept {
  focalPlaneArrayID_Accessor->reset();
  windowSelectionID_Accessor->reset();
  fPA_Controls_Accessor.reset();
  channel_Accessor->reset();
}

const uci::type::PO_FPA_ID_Type& PO_ComponentSettingsFocalPlaneArrayType::getFocalPlaneArrayID() const {
  return *focalPlaneArrayID_Accessor;
}

uci::type::PO_FPA_ID_Type& PO_ComponentSettingsFocalPlaneArrayType::getFocalPlaneArrayID() {
  return *focalPlaneArrayID_Accessor;
}

uci::type::PO_ComponentSettingsFocalPlaneArrayType& PO_ComponentSettingsFocalPlaneArrayType::setFocalPlaneArrayID(const uci::type::PO_FPA_ID_Type& accessor) {
  if (&accessor != focalPlaneArrayID_Accessor.get()) {
    focalPlaneArrayID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PO_ComponentSettingsFocalPlaneArrayType::WindowSelectionID& PO_ComponentSettingsFocalPlaneArrayType::getWindowSelectionID() const {
  return *windowSelectionID_Accessor;
}

uci::type::PO_ComponentSettingsFocalPlaneArrayType::WindowSelectionID& PO_ComponentSettingsFocalPlaneArrayType::getWindowSelectionID() {
  return *windowSelectionID_Accessor;
}

uci::type::PO_ComponentSettingsFocalPlaneArrayType& PO_ComponentSettingsFocalPlaneArrayType::setWindowSelectionID(const uci::type::PO_ComponentSettingsFocalPlaneArrayType::WindowSelectionID& accessor) {
  if (&accessor != windowSelectionID_Accessor.get()) {
    windowSelectionID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ComponentControlsA_Type& PO_ComponentSettingsFocalPlaneArrayType::getFPA_Controls_() const {
  if (fPA_Controls_Accessor) {
    return *fPA_Controls_Accessor;
  }
  throw uci::base::UCIException("Error in getFPA_Controls(): An attempt was made to get an optional field that was not enabled, call hasFPA_Controls() to determine if it is safe to call getFPA_Controls()");
}

const uci::type::ComponentControlsA_Type& PO_ComponentSettingsFocalPlaneArrayType::getFPA_Controls() const {
  return getFPA_Controls_();
}

uci::type::ComponentControlsA_Type& PO_ComponentSettingsFocalPlaneArrayType::getFPA_Controls() {
  return getFPA_Controls_();
}

uci::type::PO_ComponentSettingsFocalPlaneArrayType& PO_ComponentSettingsFocalPlaneArrayType::setFPA_Controls(const uci::type::ComponentControlsA_Type& accessor) {
  enableFPA_Controls();
  if (&accessor != fPA_Controls_Accessor.get()) {
    fPA_Controls_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PO_ComponentSettingsFocalPlaneArrayType::hasFPA_Controls() const noexcept {
  return static_cast<bool>(fPA_Controls_Accessor);
}

uci::type::ComponentControlsA_Type& PO_ComponentSettingsFocalPlaneArrayType::enableFPA_Controls(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::componentControlsA_Type : type};
  if ((!fPA_Controls_Accessor) || (fPA_Controls_Accessor->getAccessorType() != requestedType)) {
    fPA_Controls_Accessor = ComponentControlsA_Type::create(requestedType);
    if (!fPA_Controls_Accessor) {
      throw uci::base::UCIException("Error in enableFPA_Controls(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *fPA_Controls_Accessor;
}

uci::type::PO_ComponentSettingsFocalPlaneArrayType& PO_ComponentSettingsFocalPlaneArrayType::clearFPA_Controls() noexcept {
  fPA_Controls_Accessor.reset();
  return *this;
}

const uci::type::PO_ComponentSettingsFocalPlaneArrayType::Channel& PO_ComponentSettingsFocalPlaneArrayType::getChannel() const {
  return *channel_Accessor;
}

uci::type::PO_ComponentSettingsFocalPlaneArrayType::Channel& PO_ComponentSettingsFocalPlaneArrayType::getChannel() {
  return *channel_Accessor;
}

uci::type::PO_ComponentSettingsFocalPlaneArrayType& PO_ComponentSettingsFocalPlaneArrayType::setChannel(const uci::type::PO_ComponentSettingsFocalPlaneArrayType::Channel& accessor) {
  if (&accessor != channel_Accessor.get()) {
    channel_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<PO_ComponentSettingsFocalPlaneArrayType> PO_ComponentSettingsFocalPlaneArrayType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pO_ComponentSettingsFocalPlaneArrayType : type};
  return (requestedType == uci::type::accessorType::pO_ComponentSettingsFocalPlaneArrayType) ? boost::make_unique<PO_ComponentSettingsFocalPlaneArrayType>() : nullptr;
}

/**  */
namespace PO_ComponentSettingsFocalPlaneArrayType_Names {

constexpr const char* Extern_Type_Name{"PO_ComponentSettingsFocalPlaneArrayType"};
constexpr const char* FocalPlaneArrayID_Name{"FocalPlaneArrayID"};
constexpr const char* WindowSelectionID_Name{"WindowSelectionID"};
constexpr const char* FPA_Controls_Name{"FPA_Controls"};
constexpr const char* Channel_Name{"Channel"};

} // namespace PO_ComponentSettingsFocalPlaneArrayType_Names

void PO_ComponentSettingsFocalPlaneArrayType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_ComponentSettingsFocalPlaneArrayType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PO_ComponentSettingsFocalPlaneArrayType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PO_ComponentSettingsFocalPlaneArrayType_Names::FocalPlaneArrayID_Name) {
      PO_FPA_ID_Type::deserialize(valueType.second, accessor.getFocalPlaneArrayID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_ComponentSettingsFocalPlaneArrayType_Names::WindowSelectionID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PO_ComponentSettingsFocalPlaneArrayType::WindowSelectionID& boundedList = accessor.getWindowSelectionID();
        const uci::type::PO_ComponentSettingsFocalPlaneArrayType::WindowSelectionID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::PO_WindowID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + PO_ComponentSettingsFocalPlaneArrayType_Names::FPA_Controls_Name) {
      ComponentControlsA_Type::deserialize(valueType.second, accessor.enableFPA_Controls(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_ComponentSettingsFocalPlaneArrayType_Names::Channel_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PO_ComponentSettingsFocalPlaneArrayType::Channel& boundedList = accessor.getChannel();
        const uci::type::PO_ComponentSettingsFocalPlaneArrayType::Channel::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::PO_ComponentSettingsFocalPlaneArrayChannelType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string PO_ComponentSettingsFocalPlaneArrayType::serialize(const uci::type::PO_ComponentSettingsFocalPlaneArrayType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PO_ComponentSettingsFocalPlaneArrayType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PO_ComponentSettingsFocalPlaneArrayType_Names::Extern_Type_Name);
  }
  PO_FPA_ID_Type::serialize(accessor.getFocalPlaneArrayID(), node, PO_ComponentSettingsFocalPlaneArrayType_Names::FocalPlaneArrayID_Name);
  {
    const uci::type::PO_ComponentSettingsFocalPlaneArrayType::WindowSelectionID& boundedList = accessor.getWindowSelectionID();
    for (uci::type::PO_ComponentSettingsFocalPlaneArrayType::WindowSelectionID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::PO_WindowID_Type::serialize(boundedList.at(i), node, PO_ComponentSettingsFocalPlaneArrayType_Names::WindowSelectionID_Name);
    }
  }
  if (accessor.hasFPA_Controls()) {
    ComponentControlsA_Type::serialize(accessor.getFPA_Controls(), node, PO_ComponentSettingsFocalPlaneArrayType_Names::FPA_Controls_Name);
  }
  {
    const uci::type::PO_ComponentSettingsFocalPlaneArrayType::Channel& boundedList = accessor.getChannel();
    for (uci::type::PO_ComponentSettingsFocalPlaneArrayType::Channel::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::PO_ComponentSettingsFocalPlaneArrayChannelType::serialize(boundedList.at(i), node, PO_ComponentSettingsFocalPlaneArrayType_Names::Channel_Name);
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

uci::type::PO_ComponentSettingsFocalPlaneArrayType& PO_ComponentSettingsFocalPlaneArrayType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PO_ComponentSettingsFocalPlaneArrayType>().release());
}

uci::type::PO_ComponentSettingsFocalPlaneArrayType& PO_ComponentSettingsFocalPlaneArrayType::create(const uci::type::PO_ComponentSettingsFocalPlaneArrayType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PO_ComponentSettingsFocalPlaneArrayType> newAccessor{boost::make_unique<asb_uci::type::PO_ComponentSettingsFocalPlaneArrayType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PO_ComponentSettingsFocalPlaneArrayType::destroy(uci::type::PO_ComponentSettingsFocalPlaneArrayType& accessor) {
  delete dynamic_cast<asb_uci::type::PO_ComponentSettingsFocalPlaneArrayType*>(&accessor);
}

} // namespace type

} // namespace uci

