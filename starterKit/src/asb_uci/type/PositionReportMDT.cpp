/** @file PositionReportMDT.cpp
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

#include "../../../include/asb_uci/type/PositionReportMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/EnvironmentEnum.h"
#include "../../../include/asb_uci/type/InertialStateType.h"
#include "../../../include/asb_uci/type/SystemID_Type.h"
#include "../../../include/asb_uci/type/SystemSourceEnum.h"
#include "../../../include/asb_uci/type/VisibleString256Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AngleType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EnvironmentEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/InertialStateType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PositionReportMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemSourceEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString256Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PositionReportMDT::PositionReportMDT()
  : systemID_Accessor{boost::make_unique<SystemID_Type>()},
    source_Accessor{boost::make_unique<SystemSourceEnum>()},
    currentOperatingDomain_Accessor{boost::make_unique<EnvironmentEnum>()},
    inertialState_Accessor{boost::make_unique<InertialStateType>()} {
}

PositionReportMDT::~PositionReportMDT() = default;

void PositionReportMDT::copy(const uci::type::PositionReportMDT& accessor) {
  copyImpl(accessor, false);
}

void PositionReportMDT::copyImpl(const uci::type::PositionReportMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PositionReportMDT&>(accessor);
    setSystemID(*(accessorImpl.systemID_Accessor));
    if (accessorImpl.displayName_Accessor) {
      setDisplayName(*(accessorImpl.displayName_Accessor));
    } else {
      displayName_Accessor.reset();
    }
    setSource(*(accessorImpl.source_Accessor));
    setCurrentOperatingDomain(*(accessorImpl.currentOperatingDomain_Accessor));
    setInertialState(*(accessorImpl.inertialState_Accessor));
    if (accessorImpl.hasWanderAngle()) {
      setWanderAngle(accessorImpl.getWanderAngle());
    } else {
      clearWanderAngle();
    }
    if (accessorImpl.hasMagneticHeading()) {
      setMagneticHeading(accessorImpl.getMagneticHeading());
    } else {
      clearMagneticHeading();
    }
  }
}

void PositionReportMDT::reset() noexcept {
  systemID_Accessor->reset();
  displayName_Accessor.reset();
  source_Accessor->reset();
  currentOperatingDomain_Accessor->reset();
  inertialState_Accessor->reset();
  clearWanderAngle();
  clearMagneticHeading();
}

const uci::type::SystemID_Type& PositionReportMDT::getSystemID() const {
  return *systemID_Accessor;
}

uci::type::SystemID_Type& PositionReportMDT::getSystemID() {
  return *systemID_Accessor;
}

uci::type::PositionReportMDT& PositionReportMDT::setSystemID(const uci::type::SystemID_Type& accessor) {
  if (&accessor != systemID_Accessor.get()) {
    systemID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

asb_uci::type::VisibleString256Type& PositionReportMDT::getDisplayName_() const {
  if (displayName_Accessor) {
    return *displayName_Accessor;
  }
  throw uci::base::UCIException("Error in getDisplayName(): An attempt was made to get an optional field that was not enabled, call hasDisplayName() to determine if it is safe to call getDisplayName()");
}

const asb_uci::type::VisibleString256Type& PositionReportMDT::getDisplayName() const {
  return getDisplayName_();
}

asb_uci::type::VisibleString256Type& PositionReportMDT::getDisplayName() {
  return getDisplayName_();
}

uci::type::PositionReportMDT& PositionReportMDT::setDisplayName(const asb_uci::type::VisibleString256Type& value) {
  return setDisplayName(value.c_str());
}

uci::type::PositionReportMDT& PositionReportMDT::setDisplayName(const std::string& value) {
  return setDisplayName(value.c_str());
}

uci::type::PositionReportMDT& PositionReportMDT::setDisplayName(const char* value) {
  enableDisplayName().setStringValue(value);
  return *this;
}

bool PositionReportMDT::hasDisplayName() const noexcept {
  return static_cast<bool>(displayName_Accessor);
}

asb_uci::type::VisibleString256Type& PositionReportMDT::enableDisplayName(uci::base::accessorType::AccessorType type) {
  if (!displayName_Accessor) {
    displayName_Accessor =  asb_uci::type::VisibleString256Type::create(type);
  }
  return *displayName_Accessor;
}

uci::type::PositionReportMDT& PositionReportMDT::clearDisplayName() noexcept {
  displayName_Accessor.reset();
  return *this;
}

const uci::type::SystemSourceEnum& PositionReportMDT::getSource() const {
  return *source_Accessor;
}

uci::type::SystemSourceEnum& PositionReportMDT::getSource() {
  return *source_Accessor;
}

uci::type::PositionReportMDT& PositionReportMDT::setSource(const uci::type::SystemSourceEnum& accessor) {
  if (&accessor != source_Accessor.get()) {
    source_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::PositionReportMDT& PositionReportMDT::setSource(uci::type::SystemSourceEnum::EnumerationItem value) {
  source_Accessor->setValue(value);
  return *this;
}


const uci::type::EnvironmentEnum& PositionReportMDT::getCurrentOperatingDomain() const {
  return *currentOperatingDomain_Accessor;
}

uci::type::EnvironmentEnum& PositionReportMDT::getCurrentOperatingDomain() {
  return *currentOperatingDomain_Accessor;
}

uci::type::PositionReportMDT& PositionReportMDT::setCurrentOperatingDomain(const uci::type::EnvironmentEnum& accessor) {
  if (&accessor != currentOperatingDomain_Accessor.get()) {
    currentOperatingDomain_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::PositionReportMDT& PositionReportMDT::setCurrentOperatingDomain(uci::type::EnvironmentEnum::EnumerationItem value) {
  currentOperatingDomain_Accessor->setValue(value);
  return *this;
}


const uci::type::InertialStateType& PositionReportMDT::getInertialState() const {
  return *inertialState_Accessor;
}

uci::type::InertialStateType& PositionReportMDT::getInertialState() {
  return *inertialState_Accessor;
}

uci::type::PositionReportMDT& PositionReportMDT::setInertialState(const uci::type::InertialStateType& accessor) {
  if (&accessor != inertialState_Accessor.get()) {
    inertialState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::AngleTypeValue PositionReportMDT::getWanderAngle() const {
  if (wanderAngle_Accessor) {
    return *wanderAngle_Accessor;
  }
  throw uci::base::UCIException("Error in getWanderAngle(): An attempt was made to get an optional field that was not enabled, call hasWanderAngle() to determine if it is safe to call getWanderAngle()");
}

uci::type::PositionReportMDT& PositionReportMDT::setWanderAngle(uci::type::AngleTypeValue value) {
  wanderAngle_Accessor = value;
  return *this;
}

bool PositionReportMDT::hasWanderAngle() const noexcept {
  return wanderAngle_Accessor.has_value();
}

uci::type::PositionReportMDT& PositionReportMDT::clearWanderAngle() noexcept {
  wanderAngle_Accessor.reset();
  return *this;
}

uci::type::AngleTypeValue PositionReportMDT::getMagneticHeading() const {
  if (magneticHeading_Accessor) {
    return *magneticHeading_Accessor;
  }
  throw uci::base::UCIException("Error in getMagneticHeading(): An attempt was made to get an optional field that was not enabled, call hasMagneticHeading() to determine if it is safe to call getMagneticHeading()");
}

uci::type::PositionReportMDT& PositionReportMDT::setMagneticHeading(uci::type::AngleTypeValue value) {
  magneticHeading_Accessor = value;
  return *this;
}

bool PositionReportMDT::hasMagneticHeading() const noexcept {
  return magneticHeading_Accessor.has_value();
}

uci::type::PositionReportMDT& PositionReportMDT::clearMagneticHeading() noexcept {
  magneticHeading_Accessor.reset();
  return *this;
}

std::unique_ptr<PositionReportMDT> PositionReportMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::positionReportMDT : type};
  return (requestedType == uci::type::accessorType::positionReportMDT) ? boost::make_unique<PositionReportMDT>() : nullptr;
}

/**  */
namespace PositionReportMDT_Names {

constexpr const char* Extern_Type_Name{"PositionReportMDT"};
constexpr const char* SystemID_Name{"SystemID"};
constexpr const char* DisplayName_Name{"DisplayName"};
constexpr const char* Source_Name{"Source"};
constexpr const char* CurrentOperatingDomain_Name{"CurrentOperatingDomain"};
constexpr const char* InertialState_Name{"InertialState"};
constexpr const char* WanderAngle_Name{"WanderAngle"};
constexpr const char* MagneticHeading_Name{"MagneticHeading"};

} // namespace PositionReportMDT_Names

void PositionReportMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::PositionReportMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PositionReportMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PositionReportMDT_Names::SystemID_Name) {
      SystemID_Type::deserialize(valueType.second, accessor.getSystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PositionReportMDT_Names::DisplayName_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setDisplayName(*value);
      }
    } else if (valueType.first == nsPrefix + PositionReportMDT_Names::Source_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getSource().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + PositionReportMDT_Names::CurrentOperatingDomain_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getCurrentOperatingDomain().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + PositionReportMDT_Names::InertialState_Name) {
      InertialStateType::deserialize(valueType.second, accessor.getInertialState(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PositionReportMDT_Names::WanderAngle_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setWanderAngle(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + PositionReportMDT_Names::MagneticHeading_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMagneticHeading(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    }
  }
}

std::string PositionReportMDT::serialize(const uci::type::PositionReportMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PositionReportMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PositionReportMDT_Names::Extern_Type_Name);
  }
  SystemID_Type::serialize(accessor.getSystemID(), node, PositionReportMDT_Names::SystemID_Name);
  if (accessor.hasDisplayName()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getDisplayName(), node, PositionReportMDT_Names::DisplayName_Name);
  }
  SystemSourceEnum::serialize(accessor.getSource(), node, PositionReportMDT_Names::Source_Name, false);
  EnvironmentEnum::serialize(accessor.getCurrentOperatingDomain(), node, PositionReportMDT_Names::CurrentOperatingDomain_Name, false);
  InertialStateType::serialize(accessor.getInertialState(), node, PositionReportMDT_Names::InertialState_Name);
  if (accessor.hasWanderAngle()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getWanderAngle(), node, PositionReportMDT_Names::WanderAngle_Name);
  }
  if (accessor.hasMagneticHeading()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getMagneticHeading(), node, PositionReportMDT_Names::MagneticHeading_Name);
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

uci::type::PositionReportMDT& PositionReportMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PositionReportMDT>().release());
}

uci::type::PositionReportMDT& PositionReportMDT::create(const uci::type::PositionReportMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PositionReportMDT> newAccessor{boost::make_unique<asb_uci::type::PositionReportMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PositionReportMDT::destroy(uci::type::PositionReportMDT& accessor) {
  delete dynamic_cast<asb_uci::type::PositionReportMDT*>(&accessor);
}

} // namespace type

} // namespace uci

