/** @file PlannedControlInterfacesType.cpp
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

#include "../../../include/asb_uci/type/PlannedControlInterfacesType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/InterfacePlanTypeEnum.h"
#include "../../../include/asb_uci/type/PlanSimultaneityEnum.h"
#include "../../../include/asb_uci/type/PlannedControlInterfaceStateType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/InterfacePlanTypeEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanSimultaneityEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlannedControlInterfaceStateType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlannedControlInterfacesType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PlannedControlInterfacesType::PlannedControlInterfacesType()
  : planType_Accessor{boost::make_unique<InterfacePlanTypeEnum>()},
    controlInterface_Accessor{boost::make_unique<ControlInterface>(1, 4)},
    planSimultaneity_Accessor{boost::make_unique<PlanSimultaneityEnum>()} {
}

PlannedControlInterfacesType::~PlannedControlInterfacesType() = default;

void PlannedControlInterfacesType::copy(const uci::type::PlannedControlInterfacesType& accessor) {
  copyImpl(accessor, false);
}

void PlannedControlInterfacesType::copyImpl(const uci::type::PlannedControlInterfacesType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PlannedControlInterfacesType&>(accessor);
    setPlanType(*(accessorImpl.planType_Accessor));
    setControlInterface(*(accessorImpl.controlInterface_Accessor));
    setPlanSimultaneity(*(accessorImpl.planSimultaneity_Accessor));
  }
}

void PlannedControlInterfacesType::reset() noexcept {
  planType_Accessor->reset();
  controlInterface_Accessor->reset();
  planSimultaneity_Accessor->reset();
}

const uci::type::InterfacePlanTypeEnum& PlannedControlInterfacesType::getPlanType() const {
  return *planType_Accessor;
}

uci::type::InterfacePlanTypeEnum& PlannedControlInterfacesType::getPlanType() {
  return *planType_Accessor;
}

uci::type::PlannedControlInterfacesType& PlannedControlInterfacesType::setPlanType(const uci::type::InterfacePlanTypeEnum& accessor) {
  if (&accessor != planType_Accessor.get()) {
    planType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::PlannedControlInterfacesType& PlannedControlInterfacesType::setPlanType(uci::type::InterfacePlanTypeEnum::EnumerationItem value) {
  planType_Accessor->setValue(value);
  return *this;
}


const uci::type::PlannedControlInterfacesType::ControlInterface& PlannedControlInterfacesType::getControlInterface() const {
  return *controlInterface_Accessor;
}

uci::type::PlannedControlInterfacesType::ControlInterface& PlannedControlInterfacesType::getControlInterface() {
  return *controlInterface_Accessor;
}

uci::type::PlannedControlInterfacesType& PlannedControlInterfacesType::setControlInterface(const uci::type::PlannedControlInterfacesType::ControlInterface& accessor) {
  if (&accessor != controlInterface_Accessor.get()) {
    controlInterface_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PlanSimultaneityEnum& PlannedControlInterfacesType::getPlanSimultaneity() const {
  return *planSimultaneity_Accessor;
}

uci::type::PlanSimultaneityEnum& PlannedControlInterfacesType::getPlanSimultaneity() {
  return *planSimultaneity_Accessor;
}

uci::type::PlannedControlInterfacesType& PlannedControlInterfacesType::setPlanSimultaneity(const uci::type::PlanSimultaneityEnum& accessor) {
  if (&accessor != planSimultaneity_Accessor.get()) {
    planSimultaneity_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::PlannedControlInterfacesType& PlannedControlInterfacesType::setPlanSimultaneity(uci::type::PlanSimultaneityEnum::EnumerationItem value) {
  planSimultaneity_Accessor->setValue(value);
  return *this;
}


std::unique_ptr<PlannedControlInterfacesType> PlannedControlInterfacesType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::plannedControlInterfacesType : type};
  return (requestedType == uci::type::accessorType::plannedControlInterfacesType) ? boost::make_unique<PlannedControlInterfacesType>() : nullptr;
}

/**  */
namespace PlannedControlInterfacesType_Names {

constexpr const char* Extern_Type_Name{"PlannedControlInterfacesType"};
constexpr const char* PlanType_Name{"PlanType"};
constexpr const char* ControlInterface_Name{"ControlInterface"};
constexpr const char* PlanSimultaneity_Name{"PlanSimultaneity"};

} // namespace PlannedControlInterfacesType_Names

void PlannedControlInterfacesType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PlannedControlInterfacesType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PlannedControlInterfacesType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PlannedControlInterfacesType_Names::PlanType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getPlanType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + PlannedControlInterfacesType_Names::ControlInterface_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PlannedControlInterfacesType::ControlInterface& boundedList = accessor.getControlInterface();
        const uci::type::PlannedControlInterfacesType::ControlInterface::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::PlannedControlInterfaceStateType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + PlannedControlInterfacesType_Names::PlanSimultaneity_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getPlanSimultaneity().setValueFromName(*value);
      }
    }
  }
}

std::string PlannedControlInterfacesType::serialize(const uci::type::PlannedControlInterfacesType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PlannedControlInterfacesType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PlannedControlInterfacesType_Names::Extern_Type_Name);
  }
  InterfacePlanTypeEnum::serialize(accessor.getPlanType(), node, PlannedControlInterfacesType_Names::PlanType_Name, false);
  {
    const uci::type::PlannedControlInterfacesType::ControlInterface& boundedList = accessor.getControlInterface();
    for (uci::type::PlannedControlInterfacesType::ControlInterface::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::PlannedControlInterfaceStateType::serialize(boundedList.at(i), node, PlannedControlInterfacesType_Names::ControlInterface_Name);
    }
  }
  PlanSimultaneityEnum::serialize(accessor.getPlanSimultaneity(), node, PlannedControlInterfacesType_Names::PlanSimultaneity_Name, false);
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

uci::type::PlannedControlInterfacesType& PlannedControlInterfacesType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PlannedControlInterfacesType>().release());
}

uci::type::PlannedControlInterfacesType& PlannedControlInterfacesType::create(const uci::type::PlannedControlInterfacesType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PlannedControlInterfacesType> newAccessor{boost::make_unique<asb_uci::type::PlannedControlInterfacesType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PlannedControlInterfacesType::destroy(uci::type::PlannedControlInterfacesType& accessor) {
  delete dynamic_cast<asb_uci::type::PlannedControlInterfacesType*>(&accessor);
}

} // namespace type

} // namespace uci

