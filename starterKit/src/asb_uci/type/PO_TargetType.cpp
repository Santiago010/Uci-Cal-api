/** @file PO_TargetType.cpp
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

#include "../../../include/asb_uci/type/PO_TargetType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ActivityID_Type.h"
#include "../../../include/asb_uci/type/EmptyType.h"
#include "../../../include/asb_uci/type/FixedPointingEnum.h"
#include "../../../include/asb_uci/type/LOS_D_Type.h"
#include "../../../include/asb_uci/type/PO_AirTargetVolumeCommandType.h"
#include "../../../include/asb_uci/type/TargetType.h"
#include "../../../include/asb_uci/type/TurretCommandPositionType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActivityID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EmptyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/FixedPointingEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LOS_D_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_AirTargetVolumeCommandType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_TargetType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TargetType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TurretCommandPositionType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PO_TargetType::PO_TargetType() = default;

PO_TargetType::~PO_TargetType() = default;

void PO_TargetType::copy(const uci::type::PO_TargetType& accessor) {
  copyImpl(accessor, false);
}

void PO_TargetType::copyImpl(const uci::type::PO_TargetType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PO_TargetType&>(accessor);
    if (accessorImpl.geospatial_Accessor) {
      setGeospatial(*(accessorImpl.geospatial_Accessor));
    } else {
      geospatial_Accessor.reset();
    }
    if (accessorImpl.pointed_Accessor) {
      setPointed(*(accessorImpl.pointed_Accessor));
    } else {
      pointed_Accessor.reset();
    }
    if (accessorImpl.lOS_Option_Accessor) {
      setLOS_Option(*(accessorImpl.lOS_Option_Accessor));
    } else {
      lOS_Option_Accessor.reset();
    }
    if (accessorImpl.volume_Accessor) {
      setVolume(*(accessorImpl.volume_Accessor));
    } else {
      volume_Accessor.reset();
    }
    if (accessorImpl.turretSlaved_Accessor) {
      setTurretSlaved(*(accessorImpl.turretSlaved_Accessor));
    } else {
      turretSlaved_Accessor.reset();
    }
    if (accessorImpl.activitySlavedID_Accessor) {
      setActivitySlavedID(*(accessorImpl.activitySlavedID_Accessor));
    } else {
      activitySlavedID_Accessor.reset();
    }
    if (accessorImpl.fixedPointing_Accessor) {
      setFixedPointing(*(accessorImpl.fixedPointing_Accessor));
    } else {
      fixedPointing_Accessor.reset();
    }
  }
}

void PO_TargetType::reset() noexcept {
  geospatial_Accessor.reset();
  pointed_Accessor.reset();
  lOS_Option_Accessor.reset();
  volume_Accessor.reset();
  turretSlaved_Accessor.reset();
  activitySlavedID_Accessor.reset();
  fixedPointing_Accessor.reset();
}

uci::type::PO_TargetType::PO_TargetTypeChoice PO_TargetType::getPO_TargetTypeChoiceOrdinal() const noexcept {
  if (geospatial_Accessor) {
    return PO_TARGETTYPE_CHOICE_GEOSPATIAL;
  }
  if (pointed_Accessor) {
    return PO_TARGETTYPE_CHOICE_POINTED;
  }
  if (lOS_Option_Accessor) {
    return PO_TARGETTYPE_CHOICE_LOS_OPTION;
  }
  if (volume_Accessor) {
    return PO_TARGETTYPE_CHOICE_VOLUME;
  }
  if (turretSlaved_Accessor) {
    return PO_TARGETTYPE_CHOICE_TURRETSLAVED;
  }
  if (activitySlavedID_Accessor) {
    return PO_TARGETTYPE_CHOICE_ACTIVITYSLAVEDID;
  }
  if (fixedPointing_Accessor) {
    return PO_TARGETTYPE_CHOICE_FIXEDPOINTING;
  }
  return PO_TARGETTYPE_CHOICE_NONE;
}

uci::type::PO_TargetType& PO_TargetType::setPO_TargetTypeChoiceOrdinal(uci::type::PO_TargetType::PO_TargetTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case PO_TARGETTYPE_CHOICE_GEOSPATIAL:
      chooseGeospatial();
      break;
    case PO_TARGETTYPE_CHOICE_POINTED:
      choosePointed("setPO_TargetTypeChoiceOrdinal", type);
      break;
    case PO_TARGETTYPE_CHOICE_LOS_OPTION:
      chooseLOS_Option("setPO_TargetTypeChoiceOrdinal", type);
      break;
    case PO_TARGETTYPE_CHOICE_VOLUME:
      chooseVolume();
      break;
    case PO_TARGETTYPE_CHOICE_TURRETSLAVED:
      chooseTurretSlaved("setPO_TargetTypeChoiceOrdinal", type);
      break;
    case PO_TARGETTYPE_CHOICE_ACTIVITYSLAVEDID:
      chooseActivitySlavedID("setPO_TargetTypeChoiceOrdinal", type);
      break;
    case PO_TARGETTYPE_CHOICE_FIXEDPOINTING:
      chooseFixedPointing("setPO_TargetTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setPO_TargetTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::PO_TargetType::Geospatial& PO_TargetType::getGeospatial_() const {
  if (geospatial_Accessor) {
    return *geospatial_Accessor;
  }
  throw uci::base::UCIException("Error in getGeospatial(): Unable to get Geospatial, field not selected");
}

const uci::type::PO_TargetType::Geospatial& PO_TargetType::getGeospatial() const {
  return getGeospatial_();
}

uci::type::PO_TargetType::Geospatial& PO_TargetType::getGeospatial() {
  return getGeospatial_();
}

uci::type::PO_TargetType& PO_TargetType::setGeospatial(const uci::type::PO_TargetType::Geospatial& accessor) {
  chooseGeospatial();
  if (&accessor != geospatial_Accessor.get()) {
    geospatial_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PO_TargetType::isGeospatial() const noexcept {
  return static_cast<bool>(geospatial_Accessor);
}

uci::type::PO_TargetType::Geospatial& PO_TargetType::chooseGeospatial() {
  pointed_Accessor.reset();
  lOS_Option_Accessor.reset();
  volume_Accessor.reset();
  turretSlaved_Accessor.reset();
  activitySlavedID_Accessor.reset();
  fixedPointing_Accessor.reset();
  if (!geospatial_Accessor) {
    geospatial_Accessor = boost::make_unique<Geospatial>(1, SIZE_MAX);
  }
  return *geospatial_Accessor;
}

uci::type::TurretCommandPositionType& PO_TargetType::getPointed_() const {
  if (pointed_Accessor) {
    return *pointed_Accessor;
  }
  throw uci::base::UCIException("Error in getPointed(): Unable to get Pointed, field not selected");
}

const uci::type::TurretCommandPositionType& PO_TargetType::getPointed() const {
  return getPointed_();
}

uci::type::TurretCommandPositionType& PO_TargetType::getPointed() {
  return getPointed_();
}

uci::type::PO_TargetType& PO_TargetType::setPointed(const uci::type::TurretCommandPositionType& accessor) {
  choosePointed();
  if (&accessor != pointed_Accessor.get()) {
    pointed_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PO_TargetType::isPointed() const noexcept {
  return static_cast<bool>(pointed_Accessor);
}

uci::type::TurretCommandPositionType& PO_TargetType::choosePointed(const std::string& method, uci::base::accessorType::AccessorType type) {
  geospatial_Accessor.reset();
  lOS_Option_Accessor.reset();
  volume_Accessor.reset();
  turretSlaved_Accessor.reset();
  activitySlavedID_Accessor.reset();
  fixedPointing_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::turretCommandPositionType : type};
  if ((!pointed_Accessor) || (pointed_Accessor->getAccessorType() != requestedType)) {
    pointed_Accessor = TurretCommandPositionType::create(type);
    if (!pointed_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *pointed_Accessor;
}

uci::type::TurretCommandPositionType& PO_TargetType::choosePointed(uci::base::accessorType::AccessorType type) {
  return choosePointed("choosePointed", type);
}

uci::type::LOS_D_Type& PO_TargetType::getLOS_Option_() const {
  if (lOS_Option_Accessor) {
    return *lOS_Option_Accessor;
  }
  throw uci::base::UCIException("Error in getLOS_Option(): Unable to get LOS_Option, field not selected");
}

const uci::type::LOS_D_Type& PO_TargetType::getLOS_Option() const {
  return getLOS_Option_();
}

uci::type::LOS_D_Type& PO_TargetType::getLOS_Option() {
  return getLOS_Option_();
}

uci::type::PO_TargetType& PO_TargetType::setLOS_Option(const uci::type::LOS_D_Type& accessor) {
  chooseLOS_Option(accessor.getAccessorType());
  if (&accessor != lOS_Option_Accessor.get()) {
    lOS_Option_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PO_TargetType::isLOS_Option() const noexcept {
  return static_cast<bool>(lOS_Option_Accessor);
}

uci::type::LOS_D_Type& PO_TargetType::chooseLOS_Option(const std::string& method, uci::base::accessorType::AccessorType type) {
  geospatial_Accessor.reset();
  pointed_Accessor.reset();
  volume_Accessor.reset();
  turretSlaved_Accessor.reset();
  activitySlavedID_Accessor.reset();
  fixedPointing_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::lOS_D_Type : type};
  if ((!lOS_Option_Accessor) || (lOS_Option_Accessor->getAccessorType() != requestedType)) {
    lOS_Option_Accessor = LOS_D_Type::create(type);
    if (!lOS_Option_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *lOS_Option_Accessor;
}

uci::type::LOS_D_Type& PO_TargetType::chooseLOS_Option(uci::base::accessorType::AccessorType type) {
  return chooseLOS_Option("chooseLOS_Option", type);
}

uci::type::PO_TargetType::Volume& PO_TargetType::getVolume_() const {
  if (volume_Accessor) {
    return *volume_Accessor;
  }
  throw uci::base::UCIException("Error in getVolume(): Unable to get Volume, field not selected");
}

const uci::type::PO_TargetType::Volume& PO_TargetType::getVolume() const {
  return getVolume_();
}

uci::type::PO_TargetType::Volume& PO_TargetType::getVolume() {
  return getVolume_();
}

uci::type::PO_TargetType& PO_TargetType::setVolume(const uci::type::PO_TargetType::Volume& accessor) {
  chooseVolume();
  if (&accessor != volume_Accessor.get()) {
    volume_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PO_TargetType::isVolume() const noexcept {
  return static_cast<bool>(volume_Accessor);
}

uci::type::PO_TargetType::Volume& PO_TargetType::chooseVolume() {
  geospatial_Accessor.reset();
  pointed_Accessor.reset();
  lOS_Option_Accessor.reset();
  turretSlaved_Accessor.reset();
  activitySlavedID_Accessor.reset();
  fixedPointing_Accessor.reset();
  if (!volume_Accessor) {
    volume_Accessor = boost::make_unique<Volume>(1, SIZE_MAX);
  }
  return *volume_Accessor;
}

uci::type::EmptyType& PO_TargetType::getTurretSlaved_() const {
  if (turretSlaved_Accessor) {
    return *turretSlaved_Accessor;
  }
  throw uci::base::UCIException("Error in getTurretSlaved(): An attempt was made to get an optional field that was not enabled, call hasTurretSlaved() to determine if it is safe to call getTurretSlaved()");
}

const uci::type::EmptyType& PO_TargetType::getTurretSlaved() const {
  return getTurretSlaved_();
}

uci::type::EmptyType& PO_TargetType::getTurretSlaved() {
  return getTurretSlaved_();
}

uci::type::PO_TargetType& PO_TargetType::setTurretSlaved(const uci::type::EmptyType& value) {
  return setTurretSlaved(value.c_str());
}

uci::type::PO_TargetType& PO_TargetType::setTurretSlaved(const std::string& value) {
  return setTurretSlaved(value.c_str());
}

uci::type::PO_TargetType& PO_TargetType::setTurretSlaved(const char * value) {
  chooseTurretSlaved().setStringValue(value);
  return *this;
}

bool PO_TargetType::isTurretSlaved() const noexcept {
  return static_cast<bool>(turretSlaved_Accessor);
}

uci::type::EmptyType& PO_TargetType::chooseTurretSlaved(const std::string& /*method*/, uci::base::accessorType::AccessorType type) {
  geospatial_Accessor.reset();
  pointed_Accessor.reset();
  lOS_Option_Accessor.reset();
  volume_Accessor.reset();
  activitySlavedID_Accessor.reset();
  fixedPointing_Accessor.reset();
  if (!turretSlaved_Accessor) {
    turretSlaved_Accessor = EmptyType::create(type);
  }
  return *turretSlaved_Accessor;
}

uci::type::EmptyType& PO_TargetType::chooseTurretSlaved(uci::base::accessorType::AccessorType type) {
  return chooseTurretSlaved("chooseTurretSlaved", type);
}

uci::type::ActivityID_Type& PO_TargetType::getActivitySlavedID_() const {
  if (activitySlavedID_Accessor) {
    return *activitySlavedID_Accessor;
  }
  throw uci::base::UCIException("Error in getActivitySlavedID(): Unable to get ActivitySlavedID, field not selected");
}

const uci::type::ActivityID_Type& PO_TargetType::getActivitySlavedID() const {
  return getActivitySlavedID_();
}

uci::type::ActivityID_Type& PO_TargetType::getActivitySlavedID() {
  return getActivitySlavedID_();
}

uci::type::PO_TargetType& PO_TargetType::setActivitySlavedID(const uci::type::ActivityID_Type& accessor) {
  chooseActivitySlavedID();
  if (&accessor != activitySlavedID_Accessor.get()) {
    activitySlavedID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PO_TargetType::isActivitySlavedID() const noexcept {
  return static_cast<bool>(activitySlavedID_Accessor);
}

uci::type::ActivityID_Type& PO_TargetType::chooseActivitySlavedID(const std::string& method, uci::base::accessorType::AccessorType type) {
  geospatial_Accessor.reset();
  pointed_Accessor.reset();
  lOS_Option_Accessor.reset();
  volume_Accessor.reset();
  turretSlaved_Accessor.reset();
  fixedPointing_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::activityID_Type : type};
  if ((!activitySlavedID_Accessor) || (activitySlavedID_Accessor->getAccessorType() != requestedType)) {
    activitySlavedID_Accessor = ActivityID_Type::create(type);
    if (!activitySlavedID_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *activitySlavedID_Accessor;
}

uci::type::ActivityID_Type& PO_TargetType::chooseActivitySlavedID(uci::base::accessorType::AccessorType type) {
  return chooseActivitySlavedID("chooseActivitySlavedID", type);
}

uci::type::FixedPointingEnum& PO_TargetType::getFixedPointing_() const {
  if (fixedPointing_Accessor) {
    return *fixedPointing_Accessor;
  }
  throw uci::base::UCIException("Error in getFixedPointing(): Unable to get FixedPointing, field not selected");
}

const uci::type::FixedPointingEnum& PO_TargetType::getFixedPointing() const {
  return getFixedPointing_();
}

uci::type::FixedPointingEnum& PO_TargetType::getFixedPointing() {
  return getFixedPointing_();
}

uci::type::PO_TargetType& PO_TargetType::setFixedPointing(const uci::type::FixedPointingEnum& accessor) {
  chooseFixedPointing();
  if (&accessor != fixedPointing_Accessor.get()) {
    fixedPointing_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::PO_TargetType& PO_TargetType::setFixedPointing(uci::type::FixedPointingEnum::EnumerationItem value) {
  chooseFixedPointing().setValue(value);
  return *this;
}

bool PO_TargetType::isFixedPointing() const noexcept {
  return static_cast<bool>(fixedPointing_Accessor);
}

uci::type::FixedPointingEnum& PO_TargetType::chooseFixedPointing(const std::string& method, uci::base::accessorType::AccessorType type) {
  geospatial_Accessor.reset();
  pointed_Accessor.reset();
  lOS_Option_Accessor.reset();
  volume_Accessor.reset();
  turretSlaved_Accessor.reset();
  activitySlavedID_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::fixedPointingEnum : type};
  if ((!fixedPointing_Accessor) || (fixedPointing_Accessor->getAccessorType() != requestedType)) {
    fixedPointing_Accessor = FixedPointingEnum::create(type);
    if (!fixedPointing_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *fixedPointing_Accessor;
}

uci::type::FixedPointingEnum& PO_TargetType::chooseFixedPointing(uci::base::accessorType::AccessorType type) {
  return chooseFixedPointing("chooseFixedPointing", type);
}

std::unique_ptr<PO_TargetType> PO_TargetType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pO_TargetType : type};
  return (requestedType == uci::type::accessorType::pO_TargetType) ? boost::make_unique<PO_TargetType>() : nullptr;
}

/**  */
namespace PO_TargetType_Names {

constexpr const char* Extern_Type_Name{"PO_TargetType"};
constexpr const char* Geospatial_Name{"Geospatial"};
constexpr const char* Pointed_Name{"Pointed"};
constexpr const char* LOS_Option_Name{"LOS_Option"};
constexpr const char* Volume_Name{"Volume"};
constexpr const char* TurretSlaved_Name{"TurretSlaved"};
constexpr const char* ActivitySlavedID_Name{"ActivitySlavedID"};
constexpr const char* FixedPointing_Name{"FixedPointing"};

} // namespace PO_TargetType_Names

void PO_TargetType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_TargetType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PO_TargetType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PO_TargetType_Names::Geospatial_Name) {
      uci::type::PO_TargetType::Geospatial& boundedList = accessor.chooseGeospatial();
      const uci::type::PO_TargetType::Geospatial::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::TargetType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_TargetType_Names::Pointed_Name) {
      TurretCommandPositionType::deserialize(valueType.second, accessor.choosePointed(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_TargetType_Names::LOS_Option_Name) {
      LOS_D_Type::deserialize(valueType.second, accessor.chooseLOS_Option(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_TargetType_Names::Volume_Name) {
      uci::type::PO_TargetType::Volume& boundedList = accessor.chooseVolume();
      const uci::type::PO_TargetType::Volume::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::PO_AirTargetVolumeCommandType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_TargetType_Names::TurretSlaved_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.chooseTurretSlaved().setStringValue(*value);
      }
    } else if (valueType.first == nsPrefix + PO_TargetType_Names::ActivitySlavedID_Name) {
      ActivityID_Type::deserialize(valueType.second, accessor.chooseActivitySlavedID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_TargetType_Names::FixedPointing_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.chooseFixedPointing().setValueFromName(*value);
      }
    }
  }
}

std::string PO_TargetType::serialize(const uci::type::PO_TargetType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PO_TargetType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PO_TargetType_Names::Extern_Type_Name);
  }
  if (accessor.isGeospatial()) {
    {
      const uci::type::PO_TargetType::Geospatial& boundedList = accessor.getGeospatial();
      for (uci::type::PO_TargetType::Geospatial::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::TargetType::serialize(boundedList.at(i), node, PO_TargetType_Names::Geospatial_Name);
      }
    }
  } else if (accessor.isPointed()) {
    TurretCommandPositionType::serialize(accessor.getPointed(), node, PO_TargetType_Names::Pointed_Name);
  } else if (accessor.isLOS_Option()) {
    LOS_D_Type::serialize(accessor.getLOS_Option(), node, PO_TargetType_Names::LOS_Option_Name);
  } else if (accessor.isVolume()) {
    {
      const uci::type::PO_TargetType::Volume& boundedList = accessor.getVolume();
      for (uci::type::PO_TargetType::Volume::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::PO_AirTargetVolumeCommandType::serialize(boundedList.at(i), node, PO_TargetType_Names::Volume_Name);
      }
    }
  } else if (accessor.isTurretSlaved()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getTurretSlaved(), node, PO_TargetType_Names::TurretSlaved_Name);
  } else if (accessor.isActivitySlavedID()) {
    ActivityID_Type::serialize(accessor.getActivitySlavedID(), node, PO_TargetType_Names::ActivitySlavedID_Name);
  } else if (accessor.isFixedPointing()) {
    FixedPointingEnum::serialize(accessor.getFixedPointing(), node, PO_TargetType_Names::FixedPointing_Name, false);
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

uci::type::PO_TargetType& PO_TargetType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PO_TargetType>().release());
}

uci::type::PO_TargetType& PO_TargetType::create(const uci::type::PO_TargetType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PO_TargetType> newAccessor{boost::make_unique<asb_uci::type::PO_TargetType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PO_TargetType::destroy(uci::type::PO_TargetType& accessor) {
  delete dynamic_cast<asb_uci::type::PO_TargetType*>(&accessor);
}

} // namespace type

} // namespace uci

