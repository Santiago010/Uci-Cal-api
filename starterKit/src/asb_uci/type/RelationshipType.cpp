/** @file RelationshipType.cpp
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

#include "../../../include/asb_uci/type/RelationshipType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ExternalCommandExecutionStateEnum.h"
#include "../../../include/asb_uci/type/PairingRelationshipEnum.h"
#include "../../../include/asb_uci/type/RelationshipControllingUnitType.h"
#include "../../../include/asb_uci/type/RelationshipElectronicWarfareType.h"
#include "../../../include/asb_uci/type/RelationshipThreatType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ExternalCommandExecutionStateEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PairingRelationshipEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RelationshipControllingUnitType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RelationshipElectronicWarfareType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RelationshipThreatType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RelationshipType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

RelationshipType::RelationshipType() = default;

RelationshipType::~RelationshipType() = default;

void RelationshipType::copy(const uci::type::RelationshipType& accessor) {
  copyImpl(accessor, false);
}

void RelationshipType::copyImpl(const uci::type::RelationshipType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const RelationshipType&>(accessor);
    if (accessorImpl.engagementStatus_Accessor) {
      setEngagementStatus(*(accessorImpl.engagementStatus_Accessor));
    } else {
      engagementStatus_Accessor.reset();
    }
    if (accessorImpl.pairing_Accessor) {
      setPairing(*(accessorImpl.pairing_Accessor));
    } else {
      pairing_Accessor.reset();
    }
    if (accessorImpl.threat_Accessor) {
      setThreat(*(accessorImpl.threat_Accessor));
    } else {
      threat_Accessor.reset();
    }
    if (accessorImpl.electronicWarfare_Accessor) {
      setElectronicWarfare(*(accessorImpl.electronicWarfare_Accessor));
    } else {
      electronicWarfare_Accessor.reset();
    }
    if (accessorImpl.controllingUnit_Accessor) {
      setControllingUnit(*(accessorImpl.controllingUnit_Accessor));
    } else {
      controllingUnit_Accessor.reset();
    }
  }
}

void RelationshipType::reset() noexcept {
  engagementStatus_Accessor.reset();
  pairing_Accessor.reset();
  threat_Accessor.reset();
  electronicWarfare_Accessor.reset();
  controllingUnit_Accessor.reset();
}

uci::type::RelationshipType::RelationshipTypeChoice RelationshipType::getRelationshipTypeChoiceOrdinal() const noexcept {
  if (engagementStatus_Accessor) {
    return RELATIONSHIPTYPE_CHOICE_ENGAGEMENTSTATUS;
  }
  if (pairing_Accessor) {
    return RELATIONSHIPTYPE_CHOICE_PAIRING;
  }
  if (threat_Accessor) {
    return RELATIONSHIPTYPE_CHOICE_THREAT;
  }
  if (electronicWarfare_Accessor) {
    return RELATIONSHIPTYPE_CHOICE_ELECTRONICWARFARE;
  }
  if (controllingUnit_Accessor) {
    return RELATIONSHIPTYPE_CHOICE_CONTROLLINGUNIT;
  }
  return RELATIONSHIPTYPE_CHOICE_NONE;
}

uci::type::RelationshipType& RelationshipType::setRelationshipTypeChoiceOrdinal(uci::type::RelationshipType::RelationshipTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case RELATIONSHIPTYPE_CHOICE_ENGAGEMENTSTATUS:
      chooseEngagementStatus("setRelationshipTypeChoiceOrdinal", type);
      break;
    case RELATIONSHIPTYPE_CHOICE_PAIRING:
      choosePairing("setRelationshipTypeChoiceOrdinal", type);
      break;
    case RELATIONSHIPTYPE_CHOICE_THREAT:
      chooseThreat("setRelationshipTypeChoiceOrdinal", type);
      break;
    case RELATIONSHIPTYPE_CHOICE_ELECTRONICWARFARE:
      chooseElectronicWarfare("setRelationshipTypeChoiceOrdinal", type);
      break;
    case RELATIONSHIPTYPE_CHOICE_CONTROLLINGUNIT:
      chooseControllingUnit("setRelationshipTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setRelationshipTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::ExternalCommandExecutionStateEnum& RelationshipType::getEngagementStatus_() const {
  if (engagementStatus_Accessor) {
    return *engagementStatus_Accessor;
  }
  throw uci::base::UCIException("Error in getEngagementStatus(): Unable to get EngagementStatus, field not selected");
}

const uci::type::ExternalCommandExecutionStateEnum& RelationshipType::getEngagementStatus() const {
  return getEngagementStatus_();
}

uci::type::ExternalCommandExecutionStateEnum& RelationshipType::getEngagementStatus() {
  return getEngagementStatus_();
}

uci::type::RelationshipType& RelationshipType::setEngagementStatus(const uci::type::ExternalCommandExecutionStateEnum& accessor) {
  chooseEngagementStatus();
  if (&accessor != engagementStatus_Accessor.get()) {
    engagementStatus_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::RelationshipType& RelationshipType::setEngagementStatus(uci::type::ExternalCommandExecutionStateEnum::EnumerationItem value) {
  chooseEngagementStatus().setValue(value);
  return *this;
}

bool RelationshipType::isEngagementStatus() const noexcept {
  return static_cast<bool>(engagementStatus_Accessor);
}

uci::type::ExternalCommandExecutionStateEnum& RelationshipType::chooseEngagementStatus(const std::string& method, uci::base::accessorType::AccessorType type) {
  pairing_Accessor.reset();
  threat_Accessor.reset();
  electronicWarfare_Accessor.reset();
  controllingUnit_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::externalCommandExecutionStateEnum : type};
  if ((!engagementStatus_Accessor) || (engagementStatus_Accessor->getAccessorType() != requestedType)) {
    engagementStatus_Accessor = ExternalCommandExecutionStateEnum::create(type);
    if (!engagementStatus_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *engagementStatus_Accessor;
}

uci::type::ExternalCommandExecutionStateEnum& RelationshipType::chooseEngagementStatus(uci::base::accessorType::AccessorType type) {
  return chooseEngagementStatus("chooseEngagementStatus", type);
}

uci::type::PairingRelationshipEnum& RelationshipType::getPairing_() const {
  if (pairing_Accessor) {
    return *pairing_Accessor;
  }
  throw uci::base::UCIException("Error in getPairing(): Unable to get Pairing, field not selected");
}

const uci::type::PairingRelationshipEnum& RelationshipType::getPairing() const {
  return getPairing_();
}

uci::type::PairingRelationshipEnum& RelationshipType::getPairing() {
  return getPairing_();
}

uci::type::RelationshipType& RelationshipType::setPairing(const uci::type::PairingRelationshipEnum& accessor) {
  choosePairing();
  if (&accessor != pairing_Accessor.get()) {
    pairing_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::RelationshipType& RelationshipType::setPairing(uci::type::PairingRelationshipEnum::EnumerationItem value) {
  choosePairing().setValue(value);
  return *this;
}

bool RelationshipType::isPairing() const noexcept {
  return static_cast<bool>(pairing_Accessor);
}

uci::type::PairingRelationshipEnum& RelationshipType::choosePairing(const std::string& method, uci::base::accessorType::AccessorType type) {
  engagementStatus_Accessor.reset();
  threat_Accessor.reset();
  electronicWarfare_Accessor.reset();
  controllingUnit_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pairingRelationshipEnum : type};
  if ((!pairing_Accessor) || (pairing_Accessor->getAccessorType() != requestedType)) {
    pairing_Accessor = PairingRelationshipEnum::create(type);
    if (!pairing_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *pairing_Accessor;
}

uci::type::PairingRelationshipEnum& RelationshipType::choosePairing(uci::base::accessorType::AccessorType type) {
  return choosePairing("choosePairing", type);
}

uci::type::RelationshipThreatType& RelationshipType::getThreat_() const {
  if (threat_Accessor) {
    return *threat_Accessor;
  }
  throw uci::base::UCIException("Error in getThreat(): Unable to get Threat, field not selected");
}

const uci::type::RelationshipThreatType& RelationshipType::getThreat() const {
  return getThreat_();
}

uci::type::RelationshipThreatType& RelationshipType::getThreat() {
  return getThreat_();
}

uci::type::RelationshipType& RelationshipType::setThreat(const uci::type::RelationshipThreatType& accessor) {
  chooseThreat();
  if (&accessor != threat_Accessor.get()) {
    threat_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RelationshipType::isThreat() const noexcept {
  return static_cast<bool>(threat_Accessor);
}

uci::type::RelationshipThreatType& RelationshipType::chooseThreat(const std::string& method, uci::base::accessorType::AccessorType type) {
  engagementStatus_Accessor.reset();
  pairing_Accessor.reset();
  electronicWarfare_Accessor.reset();
  controllingUnit_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::relationshipThreatType : type};
  if ((!threat_Accessor) || (threat_Accessor->getAccessorType() != requestedType)) {
    threat_Accessor = RelationshipThreatType::create(type);
    if (!threat_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *threat_Accessor;
}

uci::type::RelationshipThreatType& RelationshipType::chooseThreat(uci::base::accessorType::AccessorType type) {
  return chooseThreat("chooseThreat", type);
}

uci::type::RelationshipElectronicWarfareType& RelationshipType::getElectronicWarfare_() const {
  if (electronicWarfare_Accessor) {
    return *electronicWarfare_Accessor;
  }
  throw uci::base::UCIException("Error in getElectronicWarfare(): Unable to get ElectronicWarfare, field not selected");
}

const uci::type::RelationshipElectronicWarfareType& RelationshipType::getElectronicWarfare() const {
  return getElectronicWarfare_();
}

uci::type::RelationshipElectronicWarfareType& RelationshipType::getElectronicWarfare() {
  return getElectronicWarfare_();
}

uci::type::RelationshipType& RelationshipType::setElectronicWarfare(const uci::type::RelationshipElectronicWarfareType& accessor) {
  chooseElectronicWarfare();
  if (&accessor != electronicWarfare_Accessor.get()) {
    electronicWarfare_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RelationshipType::isElectronicWarfare() const noexcept {
  return static_cast<bool>(electronicWarfare_Accessor);
}

uci::type::RelationshipElectronicWarfareType& RelationshipType::chooseElectronicWarfare(const std::string& method, uci::base::accessorType::AccessorType type) {
  engagementStatus_Accessor.reset();
  pairing_Accessor.reset();
  threat_Accessor.reset();
  controllingUnit_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::relationshipElectronicWarfareType : type};
  if ((!electronicWarfare_Accessor) || (electronicWarfare_Accessor->getAccessorType() != requestedType)) {
    electronicWarfare_Accessor = RelationshipElectronicWarfareType::create(type);
    if (!electronicWarfare_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *electronicWarfare_Accessor;
}

uci::type::RelationshipElectronicWarfareType& RelationshipType::chooseElectronicWarfare(uci::base::accessorType::AccessorType type) {
  return chooseElectronicWarfare("chooseElectronicWarfare", type);
}

uci::type::RelationshipControllingUnitType& RelationshipType::getControllingUnit_() const {
  if (controllingUnit_Accessor) {
    return *controllingUnit_Accessor;
  }
  throw uci::base::UCIException("Error in getControllingUnit(): Unable to get ControllingUnit, field not selected");
}

const uci::type::RelationshipControllingUnitType& RelationshipType::getControllingUnit() const {
  return getControllingUnit_();
}

uci::type::RelationshipControllingUnitType& RelationshipType::getControllingUnit() {
  return getControllingUnit_();
}

uci::type::RelationshipType& RelationshipType::setControllingUnit(const uci::type::RelationshipControllingUnitType& accessor) {
  chooseControllingUnit();
  if (&accessor != controllingUnit_Accessor.get()) {
    controllingUnit_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RelationshipType::isControllingUnit() const noexcept {
  return static_cast<bool>(controllingUnit_Accessor);
}

uci::type::RelationshipControllingUnitType& RelationshipType::chooseControllingUnit(const std::string& method, uci::base::accessorType::AccessorType type) {
  engagementStatus_Accessor.reset();
  pairing_Accessor.reset();
  threat_Accessor.reset();
  electronicWarfare_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::relationshipControllingUnitType : type};
  if ((!controllingUnit_Accessor) || (controllingUnit_Accessor->getAccessorType() != requestedType)) {
    controllingUnit_Accessor = RelationshipControllingUnitType::create(type);
    if (!controllingUnit_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *controllingUnit_Accessor;
}

uci::type::RelationshipControllingUnitType& RelationshipType::chooseControllingUnit(uci::base::accessorType::AccessorType type) {
  return chooseControllingUnit("chooseControllingUnit", type);
}

std::unique_ptr<RelationshipType> RelationshipType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::relationshipType : type};
  return (requestedType == uci::type::accessorType::relationshipType) ? boost::make_unique<RelationshipType>() : nullptr;
}

/**  */
namespace RelationshipType_Names {

constexpr const char* Extern_Type_Name{"RelationshipType"};
constexpr const char* EngagementStatus_Name{"EngagementStatus"};
constexpr const char* Pairing_Name{"Pairing"};
constexpr const char* Threat_Name{"Threat"};
constexpr const char* ElectronicWarfare_Name{"ElectronicWarfare"};
constexpr const char* ControllingUnit_Name{"ControllingUnit"};

} // namespace RelationshipType_Names

void RelationshipType::deserialize(const boost::property_tree::ptree& propTree, uci::type::RelationshipType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RelationshipType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RelationshipType_Names::EngagementStatus_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.chooseEngagementStatus().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + RelationshipType_Names::Pairing_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.choosePairing().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + RelationshipType_Names::Threat_Name) {
      RelationshipThreatType::deserialize(valueType.second, accessor.chooseThreat(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RelationshipType_Names::ElectronicWarfare_Name) {
      RelationshipElectronicWarfareType::deserialize(valueType.second, accessor.chooseElectronicWarfare(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RelationshipType_Names::ControllingUnit_Name) {
      RelationshipControllingUnitType::deserialize(valueType.second, accessor.chooseControllingUnit(), nodeName, nsPrefix);
    }
  }
}

std::string RelationshipType::serialize(const uci::type::RelationshipType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? RelationshipType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, RelationshipType_Names::Extern_Type_Name);
  }
  if (accessor.isEngagementStatus()) {
    ExternalCommandExecutionStateEnum::serialize(accessor.getEngagementStatus(), node, RelationshipType_Names::EngagementStatus_Name, false);
  } else if (accessor.isPairing()) {
    PairingRelationshipEnum::serialize(accessor.getPairing(), node, RelationshipType_Names::Pairing_Name, false);
  } else if (accessor.isThreat()) {
    RelationshipThreatType::serialize(accessor.getThreat(), node, RelationshipType_Names::Threat_Name);
  } else if (accessor.isElectronicWarfare()) {
    RelationshipElectronicWarfareType::serialize(accessor.getElectronicWarfare(), node, RelationshipType_Names::ElectronicWarfare_Name);
  } else if (accessor.isControllingUnit()) {
    RelationshipControllingUnitType::serialize(accessor.getControllingUnit(), node, RelationshipType_Names::ControllingUnit_Name);
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

uci::type::RelationshipType& RelationshipType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::RelationshipType>().release());
}

uci::type::RelationshipType& RelationshipType::create(const uci::type::RelationshipType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::RelationshipType> newAccessor{boost::make_unique<asb_uci::type::RelationshipType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void RelationshipType::destroy(uci::type::RelationshipType& accessor) {
  delete dynamic_cast<asb_uci::type::RelationshipType*>(&accessor);
}

} // namespace type

} // namespace uci

