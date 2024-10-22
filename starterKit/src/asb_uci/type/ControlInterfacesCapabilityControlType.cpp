/** @file ControlInterfacesCapabilityControlType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:12 PM
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

#include "../../../include/asb_uci/type/ControlInterfacesCapabilityControlType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CapabilityControlInterfacesEnum.h"
#include "../../../include/asb_uci/type/CapabilityID_Type.h"
#include "../../../include/asb_uci/type/CapabilityManagerType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityControlInterfacesEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityManagerType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ControlInterfacesCapabilityControlType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ControlInterfacesCapabilityControlType::ControlInterfacesCapabilityControlType()
  : capabilityID_Accessor{boost::make_unique<CapabilityID_Type>()},
    acceptedInterface_Accessor{boost::make_unique<AcceptedInterface>(0, 7)},
    capabilityManager_Accessor{boost::make_unique<CapabilityManager>(0, SIZE_MAX)} {
}

ControlInterfacesCapabilityControlType::~ControlInterfacesCapabilityControlType() = default;

void ControlInterfacesCapabilityControlType::copy(const uci::type::ControlInterfacesCapabilityControlType& accessor) {
  copyImpl(accessor, false);
}

void ControlInterfacesCapabilityControlType::copyImpl(const uci::type::ControlInterfacesCapabilityControlType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const ControlInterfacesCapabilityControlType&>(accessor);
    setCapabilityID(*(accessorImpl.capabilityID_Accessor));
    setAcceptedInterface(*(accessorImpl.acceptedInterface_Accessor));
    setCapabilityManager(*(accessorImpl.capabilityManager_Accessor));
  }
}

void ControlInterfacesCapabilityControlType::reset() noexcept {
  capabilityID_Accessor->reset();
  acceptedInterface_Accessor->reset();
  capabilityManager_Accessor->reset();
}

const uci::type::CapabilityID_Type& ControlInterfacesCapabilityControlType::getCapabilityID() const {
  return *capabilityID_Accessor;
}

uci::type::CapabilityID_Type& ControlInterfacesCapabilityControlType::getCapabilityID() {
  return *capabilityID_Accessor;
}

uci::type::ControlInterfacesCapabilityControlType& ControlInterfacesCapabilityControlType::setCapabilityID(const uci::type::CapabilityID_Type& accessor) {
  if (&accessor != capabilityID_Accessor.get()) {
    capabilityID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ControlInterfacesCapabilityControlType::AcceptedInterface& ControlInterfacesCapabilityControlType::getAcceptedInterface() const {
  return *acceptedInterface_Accessor;
}

uci::type::ControlInterfacesCapabilityControlType::AcceptedInterface& ControlInterfacesCapabilityControlType::getAcceptedInterface() {
  return *acceptedInterface_Accessor;
}

uci::type::ControlInterfacesCapabilityControlType& ControlInterfacesCapabilityControlType::setAcceptedInterface(const uci::type::ControlInterfacesCapabilityControlType::AcceptedInterface& accessor) {
  if (&accessor != acceptedInterface_Accessor.get()) {
    acceptedInterface_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ControlInterfacesCapabilityControlType::CapabilityManager& ControlInterfacesCapabilityControlType::getCapabilityManager() const {
  return *capabilityManager_Accessor;
}

uci::type::ControlInterfacesCapabilityControlType::CapabilityManager& ControlInterfacesCapabilityControlType::getCapabilityManager() {
  return *capabilityManager_Accessor;
}

uci::type::ControlInterfacesCapabilityControlType& ControlInterfacesCapabilityControlType::setCapabilityManager(const uci::type::ControlInterfacesCapabilityControlType::CapabilityManager& accessor) {
  if (&accessor != capabilityManager_Accessor.get()) {
    capabilityManager_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<ControlInterfacesCapabilityControlType> ControlInterfacesCapabilityControlType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::controlInterfacesCapabilityControlType : type};
  return (requestedType == uci::type::accessorType::controlInterfacesCapabilityControlType) ? boost::make_unique<ControlInterfacesCapabilityControlType>() : nullptr;
}

/**  */
namespace ControlInterfacesCapabilityControlType_Names {

constexpr const char* Extern_Type_Name{"ControlInterfacesCapabilityControlType"};
constexpr const char* CapabilityID_Name{"CapabilityID"};
constexpr const char* AcceptedInterface_Name{"AcceptedInterface"};
constexpr const char* CapabilityManager_Name{"CapabilityManager"};

} // namespace ControlInterfacesCapabilityControlType_Names

void ControlInterfacesCapabilityControlType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ControlInterfacesCapabilityControlType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ControlInterfacesCapabilityControlType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ControlInterfacesCapabilityControlType_Names::CapabilityID_Name) {
      CapabilityID_Type::deserialize(valueType.second, accessor.getCapabilityID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ControlInterfacesCapabilityControlType_Names::AcceptedInterface_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ControlInterfacesCapabilityControlType::AcceptedInterface& boundedList = accessor.getAcceptedInterface();
        const uci::type::ControlInterfacesCapabilityControlType::AcceptedInterface::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ControlInterfacesCapabilityControlType_Names::CapabilityManager_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ControlInterfacesCapabilityControlType::CapabilityManager& boundedList = accessor.getCapabilityManager();
        const uci::type::ControlInterfacesCapabilityControlType::CapabilityManager::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::CapabilityManagerType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string ControlInterfacesCapabilityControlType::serialize(const uci::type::ControlInterfacesCapabilityControlType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ControlInterfacesCapabilityControlType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ControlInterfacesCapabilityControlType_Names::Extern_Type_Name);
  }
  CapabilityID_Type::serialize(accessor.getCapabilityID(), node, ControlInterfacesCapabilityControlType_Names::CapabilityID_Name);
  {
    const uci::type::ControlInterfacesCapabilityControlType::AcceptedInterface& boundedList = accessor.getAcceptedInterface();
    for (uci::type::ControlInterfacesCapabilityControlType::AcceptedInterface::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      CapabilityControlInterfacesEnum::serialize(boundedList.at(i), node, ControlInterfacesCapabilityControlType_Names::AcceptedInterface_Name, false);
    }
  }
  {
    const uci::type::ControlInterfacesCapabilityControlType::CapabilityManager& boundedList = accessor.getCapabilityManager();
    for (uci::type::ControlInterfacesCapabilityControlType::CapabilityManager::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::CapabilityManagerType::serialize(boundedList.at(i), node, ControlInterfacesCapabilityControlType_Names::CapabilityManager_Name);
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

uci::type::ControlInterfacesCapabilityControlType& ControlInterfacesCapabilityControlType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ControlInterfacesCapabilityControlType>().release());
}

uci::type::ControlInterfacesCapabilityControlType& ControlInterfacesCapabilityControlType::create(const uci::type::ControlInterfacesCapabilityControlType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ControlInterfacesCapabilityControlType> newAccessor{boost::make_unique<asb_uci::type::ControlInterfacesCapabilityControlType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ControlInterfacesCapabilityControlType::destroy(uci::type::ControlInterfacesCapabilityControlType& accessor) {
  delete dynamic_cast<asb_uci::type::ControlInterfacesCapabilityControlType*>(&accessor);
}

} // namespace type

} // namespace uci

