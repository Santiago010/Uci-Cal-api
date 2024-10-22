/** @file StoreItemType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:15 PM
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

#include "../../../include/asb_uci/type/StoreItemType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/StoreLoadoutCarriageType.h"
#include "../../../include/asb_uci/type/StoreLoadoutMissionType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/StoreItemType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/StoreLoadoutCarriageType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/StoreLoadoutMissionType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

StoreItemType::StoreItemType() = default;

StoreItemType::~StoreItemType() = default;

void StoreItemType::copy(const uci::type::StoreItemType& accessor) {
  copyImpl(accessor, false);
}

void StoreItemType::copyImpl(const uci::type::StoreItemType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const StoreItemType&>(accessor);
    if (accessorImpl.mission_Accessor) {
      setMission(*(accessorImpl.mission_Accessor));
    } else {
      mission_Accessor.reset();
    }
    if (accessorImpl.carriage_Accessor) {
      setCarriage(*(accessorImpl.carriage_Accessor));
    } else {
      carriage_Accessor.reset();
    }
  }
}

void StoreItemType::reset() noexcept {
  mission_Accessor.reset();
  carriage_Accessor.reset();
}

uci::type::StoreItemType::StoreItemTypeChoice StoreItemType::getStoreItemTypeChoiceOrdinal() const noexcept {
  if (mission_Accessor) {
    return STOREITEMTYPE_CHOICE_MISSION;
  }
  if (carriage_Accessor) {
    return STOREITEMTYPE_CHOICE_CARRIAGE;
  }
  return STOREITEMTYPE_CHOICE_NONE;
}

uci::type::StoreItemType& StoreItemType::setStoreItemTypeChoiceOrdinal(uci::type::StoreItemType::StoreItemTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case STOREITEMTYPE_CHOICE_MISSION:
      chooseMission("setStoreItemTypeChoiceOrdinal", type);
      break;
    case STOREITEMTYPE_CHOICE_CARRIAGE:
      chooseCarriage("setStoreItemTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setStoreItemTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::StoreLoadoutMissionType& StoreItemType::getMission_() const {
  if (mission_Accessor) {
    return *mission_Accessor;
  }
  throw uci::base::UCIException("Error in getMission(): Unable to get Mission, field not selected");
}

const uci::type::StoreLoadoutMissionType& StoreItemType::getMission() const {
  return getMission_();
}

uci::type::StoreLoadoutMissionType& StoreItemType::getMission() {
  return getMission_();
}

uci::type::StoreItemType& StoreItemType::setMission(const uci::type::StoreLoadoutMissionType& accessor) {
  chooseMission();
  if (&accessor != mission_Accessor.get()) {
    mission_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool StoreItemType::isMission() const noexcept {
  return static_cast<bool>(mission_Accessor);
}

uci::type::StoreLoadoutMissionType& StoreItemType::chooseMission(const std::string& method, uci::base::accessorType::AccessorType type) {
  carriage_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::storeLoadoutMissionType : type};
  if ((!mission_Accessor) || (mission_Accessor->getAccessorType() != requestedType)) {
    mission_Accessor = StoreLoadoutMissionType::create(type);
    if (!mission_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *mission_Accessor;
}

uci::type::StoreLoadoutMissionType& StoreItemType::chooseMission(uci::base::accessorType::AccessorType type) {
  return chooseMission("chooseMission", type);
}

uci::type::StoreLoadoutCarriageType& StoreItemType::getCarriage_() const {
  if (carriage_Accessor) {
    return *carriage_Accessor;
  }
  throw uci::base::UCIException("Error in getCarriage(): Unable to get Carriage, field not selected");
}

const uci::type::StoreLoadoutCarriageType& StoreItemType::getCarriage() const {
  return getCarriage_();
}

uci::type::StoreLoadoutCarriageType& StoreItemType::getCarriage() {
  return getCarriage_();
}

uci::type::StoreItemType& StoreItemType::setCarriage(const uci::type::StoreLoadoutCarriageType& accessor) {
  chooseCarriage();
  if (&accessor != carriage_Accessor.get()) {
    carriage_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool StoreItemType::isCarriage() const noexcept {
  return static_cast<bool>(carriage_Accessor);
}

uci::type::StoreLoadoutCarriageType& StoreItemType::chooseCarriage(const std::string& method, uci::base::accessorType::AccessorType type) {
  mission_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::storeLoadoutCarriageType : type};
  if ((!carriage_Accessor) || (carriage_Accessor->getAccessorType() != requestedType)) {
    carriage_Accessor = StoreLoadoutCarriageType::create(type);
    if (!carriage_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *carriage_Accessor;
}

uci::type::StoreLoadoutCarriageType& StoreItemType::chooseCarriage(uci::base::accessorType::AccessorType type) {
  return chooseCarriage("chooseCarriage", type);
}

std::unique_ptr<StoreItemType> StoreItemType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::storeItemType : type};
  return (requestedType == uci::type::accessorType::storeItemType) ? boost::make_unique<StoreItemType>() : nullptr;
}

/**  */
namespace StoreItemType_Names {

constexpr const char* Extern_Type_Name{"StoreItemType"};
constexpr const char* Mission_Name{"Mission"};
constexpr const char* Carriage_Name{"Carriage"};

} // namespace StoreItemType_Names

void StoreItemType::deserialize(const boost::property_tree::ptree& propTree, uci::type::StoreItemType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = StoreItemType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + StoreItemType_Names::Mission_Name) {
      StoreLoadoutMissionType::deserialize(valueType.second, accessor.chooseMission(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + StoreItemType_Names::Carriage_Name) {
      StoreLoadoutCarriageType::deserialize(valueType.second, accessor.chooseCarriage(), nodeName, nsPrefix);
    }
  }
}

std::string StoreItemType::serialize(const uci::type::StoreItemType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? StoreItemType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, StoreItemType_Names::Extern_Type_Name);
  }
  if (accessor.isMission()) {
    StoreLoadoutMissionType::serialize(accessor.getMission(), node, StoreItemType_Names::Mission_Name);
  } else if (accessor.isCarriage()) {
    StoreLoadoutCarriageType::serialize(accessor.getCarriage(), node, StoreItemType_Names::Carriage_Name);
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

uci::type::StoreItemType& StoreItemType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::StoreItemType>().release());
}

uci::type::StoreItemType& StoreItemType::create(const uci::type::StoreItemType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::StoreItemType> newAccessor{boost::make_unique<asb_uci::type::StoreItemType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void StoreItemType::destroy(uci::type::StoreItemType& accessor) {
  delete dynamic_cast<asb_uci::type::StoreItemType*>(&accessor);
}

} // namespace type

} // namespace uci

