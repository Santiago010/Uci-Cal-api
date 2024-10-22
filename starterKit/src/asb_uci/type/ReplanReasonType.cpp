/** @file ReplanReasonType.cpp
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

#include "../../../include/asb_uci/type/ReplanReasonType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/AutonomousPlanningActionID_Type.h"
#include "../../../include/asb_uci/type/MissionContingencyAlertID_Type.h"
#include "../../../include/asb_uci/type/PlanningTriggerType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AutonomousPlanningActionID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MissionContingencyAlertID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanningTriggerType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ReplanReasonType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ReplanReasonType::ReplanReasonType()
  : trigger_Accessor{boost::make_unique<PlanningTriggerType>()} {
}

ReplanReasonType::~ReplanReasonType() = default;

void ReplanReasonType::copy(const uci::type::ReplanReasonType& accessor) {
  copyImpl(accessor, false);
}

void ReplanReasonType::copyImpl(const uci::type::ReplanReasonType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const ReplanReasonType&>(accessor);
    setTrigger(*(accessorImpl.trigger_Accessor));
    if (accessorImpl.autonomousPlanningActionID_Accessor) {
      setAutonomousPlanningActionID(*(accessorImpl.autonomousPlanningActionID_Accessor));
    } else {
      autonomousPlanningActionID_Accessor.reset();
    }
    if (accessorImpl.missionContingencyAlertID_Accessor) {
      setMissionContingencyAlertID(*(accessorImpl.missionContingencyAlertID_Accessor));
    } else {
      missionContingencyAlertID_Accessor.reset();
    }
  }
}

void ReplanReasonType::reset() noexcept {
  trigger_Accessor->reset();
  autonomousPlanningActionID_Accessor.reset();
  missionContingencyAlertID_Accessor.reset();
}

const uci::type::PlanningTriggerType& ReplanReasonType::getTrigger() const {
  return *trigger_Accessor;
}

uci::type::PlanningTriggerType& ReplanReasonType::getTrigger() {
  return *trigger_Accessor;
}

uci::type::ReplanReasonType& ReplanReasonType::setTrigger(const uci::type::PlanningTriggerType& accessor) {
  if (&accessor != trigger_Accessor.get()) {
    trigger_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::AutonomousPlanningActionID_Type& ReplanReasonType::getAutonomousPlanningActionID_() const {
  if (autonomousPlanningActionID_Accessor) {
    return *autonomousPlanningActionID_Accessor;
  }
  throw uci::base::UCIException("Error in getAutonomousPlanningActionID(): An attempt was made to get an optional field that was not enabled, call hasAutonomousPlanningActionID() to determine if it is safe to call getAutonomousPlanningActionID()");
}

const uci::type::AutonomousPlanningActionID_Type& ReplanReasonType::getAutonomousPlanningActionID() const {
  return getAutonomousPlanningActionID_();
}

uci::type::AutonomousPlanningActionID_Type& ReplanReasonType::getAutonomousPlanningActionID() {
  return getAutonomousPlanningActionID_();
}

uci::type::ReplanReasonType& ReplanReasonType::setAutonomousPlanningActionID(const uci::type::AutonomousPlanningActionID_Type& accessor) {
  enableAutonomousPlanningActionID();
  if (&accessor != autonomousPlanningActionID_Accessor.get()) {
    autonomousPlanningActionID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool ReplanReasonType::hasAutonomousPlanningActionID() const noexcept {
  return static_cast<bool>(autonomousPlanningActionID_Accessor);
}

uci::type::AutonomousPlanningActionID_Type& ReplanReasonType::enableAutonomousPlanningActionID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::autonomousPlanningActionID_Type : type};
  if ((!autonomousPlanningActionID_Accessor) || (autonomousPlanningActionID_Accessor->getAccessorType() != requestedType)) {
    autonomousPlanningActionID_Accessor = AutonomousPlanningActionID_Type::create(requestedType);
    if (!autonomousPlanningActionID_Accessor) {
      throw uci::base::UCIException("Error in enableAutonomousPlanningActionID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *autonomousPlanningActionID_Accessor;
}

uci::type::ReplanReasonType& ReplanReasonType::clearAutonomousPlanningActionID() noexcept {
  autonomousPlanningActionID_Accessor.reset();
  return *this;
}

uci::type::MissionContingencyAlertID_Type& ReplanReasonType::getMissionContingencyAlertID_() const {
  if (missionContingencyAlertID_Accessor) {
    return *missionContingencyAlertID_Accessor;
  }
  throw uci::base::UCIException("Error in getMissionContingencyAlertID(): An attempt was made to get an optional field that was not enabled, call hasMissionContingencyAlertID() to determine if it is safe to call getMissionContingencyAlertID()");
}

const uci::type::MissionContingencyAlertID_Type& ReplanReasonType::getMissionContingencyAlertID() const {
  return getMissionContingencyAlertID_();
}

uci::type::MissionContingencyAlertID_Type& ReplanReasonType::getMissionContingencyAlertID() {
  return getMissionContingencyAlertID_();
}

uci::type::ReplanReasonType& ReplanReasonType::setMissionContingencyAlertID(const uci::type::MissionContingencyAlertID_Type& accessor) {
  enableMissionContingencyAlertID();
  if (&accessor != missionContingencyAlertID_Accessor.get()) {
    missionContingencyAlertID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool ReplanReasonType::hasMissionContingencyAlertID() const noexcept {
  return static_cast<bool>(missionContingencyAlertID_Accessor);
}

uci::type::MissionContingencyAlertID_Type& ReplanReasonType::enableMissionContingencyAlertID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::missionContingencyAlertID_Type : type};
  if ((!missionContingencyAlertID_Accessor) || (missionContingencyAlertID_Accessor->getAccessorType() != requestedType)) {
    missionContingencyAlertID_Accessor = MissionContingencyAlertID_Type::create(requestedType);
    if (!missionContingencyAlertID_Accessor) {
      throw uci::base::UCIException("Error in enableMissionContingencyAlertID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *missionContingencyAlertID_Accessor;
}

uci::type::ReplanReasonType& ReplanReasonType::clearMissionContingencyAlertID() noexcept {
  missionContingencyAlertID_Accessor.reset();
  return *this;
}

std::unique_ptr<ReplanReasonType> ReplanReasonType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::replanReasonType : type};
  return (requestedType == uci::type::accessorType::replanReasonType) ? boost::make_unique<ReplanReasonType>() : nullptr;
}

/**  */
namespace ReplanReasonType_Names {

constexpr const char* Extern_Type_Name{"ReplanReasonType"};
constexpr const char* Trigger_Name{"Trigger"};
constexpr const char* AutonomousPlanningActionID_Name{"AutonomousPlanningActionID"};
constexpr const char* MissionContingencyAlertID_Name{"MissionContingencyAlertID"};

} // namespace ReplanReasonType_Names

void ReplanReasonType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ReplanReasonType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ReplanReasonType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ReplanReasonType_Names::Trigger_Name) {
      PlanningTriggerType::deserialize(valueType.second, accessor.getTrigger(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ReplanReasonType_Names::AutonomousPlanningActionID_Name) {
      AutonomousPlanningActionID_Type::deserialize(valueType.second, accessor.enableAutonomousPlanningActionID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ReplanReasonType_Names::MissionContingencyAlertID_Name) {
      MissionContingencyAlertID_Type::deserialize(valueType.second, accessor.enableMissionContingencyAlertID(), nodeName, nsPrefix);
    }
  }
}

std::string ReplanReasonType::serialize(const uci::type::ReplanReasonType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ReplanReasonType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ReplanReasonType_Names::Extern_Type_Name);
  }
  PlanningTriggerType::serialize(accessor.getTrigger(), node, ReplanReasonType_Names::Trigger_Name);
  if (accessor.hasAutonomousPlanningActionID()) {
    AutonomousPlanningActionID_Type::serialize(accessor.getAutonomousPlanningActionID(), node, ReplanReasonType_Names::AutonomousPlanningActionID_Name);
  }
  if (accessor.hasMissionContingencyAlertID()) {
    MissionContingencyAlertID_Type::serialize(accessor.getMissionContingencyAlertID(), node, ReplanReasonType_Names::MissionContingencyAlertID_Name);
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

uci::type::ReplanReasonType& ReplanReasonType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ReplanReasonType>().release());
}

uci::type::ReplanReasonType& ReplanReasonType::create(const uci::type::ReplanReasonType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ReplanReasonType> newAccessor{boost::make_unique<asb_uci::type::ReplanReasonType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ReplanReasonType::destroy(uci::type::ReplanReasonType& accessor) {
  delete dynamic_cast<asb_uci::type::ReplanReasonType*>(&accessor);
}

} // namespace type

} // namespace uci

