/** @file EndPointType.cpp
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

#include "../../../include/asb_uci/type/EndPointType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/LoiterPointType.h"
#include "../../../include/asb_uci/type/TurnPointType.h"
#include "../../../include/asb_uci/type/WayPointType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EndPointType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LoiterPointType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TurnPointType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/WayPointType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

EndPointType::EndPointType() = default;

EndPointType::~EndPointType() = default;

void EndPointType::copy(const uci::type::EndPointType& accessor) {
  copyImpl(accessor, false);
}

void EndPointType::copyImpl(const uci::type::EndPointType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const EndPointType&>(accessor);
    if (accessorImpl.wayPoint_Accessor) {
      setWayPoint(*(accessorImpl.wayPoint_Accessor));
    } else {
      wayPoint_Accessor.reset();
    }
    if (accessorImpl.turnPoint_Accessor) {
      setTurnPoint(*(accessorImpl.turnPoint_Accessor));
    } else {
      turnPoint_Accessor.reset();
    }
    if (accessorImpl.loiterPoint_Accessor) {
      setLoiterPoint(*(accessorImpl.loiterPoint_Accessor));
    } else {
      loiterPoint_Accessor.reset();
    }
  }
}

void EndPointType::reset() noexcept {
  wayPoint_Accessor.reset();
  turnPoint_Accessor.reset();
  loiterPoint_Accessor.reset();
}

uci::type::EndPointType::EndPointTypeChoice EndPointType::getEndPointTypeChoiceOrdinal() const noexcept {
  if (wayPoint_Accessor) {
    return ENDPOINTTYPE_CHOICE_WAYPOINT;
  }
  if (turnPoint_Accessor) {
    return ENDPOINTTYPE_CHOICE_TURNPOINT;
  }
  if (loiterPoint_Accessor) {
    return ENDPOINTTYPE_CHOICE_LOITERPOINT;
  }
  return ENDPOINTTYPE_CHOICE_NONE;
}

uci::type::EndPointType& EndPointType::setEndPointTypeChoiceOrdinal(uci::type::EndPointType::EndPointTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case ENDPOINTTYPE_CHOICE_WAYPOINT:
      chooseWayPoint("setEndPointTypeChoiceOrdinal", type);
      break;
    case ENDPOINTTYPE_CHOICE_TURNPOINT:
      chooseTurnPoint("setEndPointTypeChoiceOrdinal", type);
      break;
    case ENDPOINTTYPE_CHOICE_LOITERPOINT:
      chooseLoiterPoint("setEndPointTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setEndPointTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::WayPointType& EndPointType::getWayPoint_() const {
  if (wayPoint_Accessor) {
    return *wayPoint_Accessor;
  }
  throw uci::base::UCIException("Error in getWayPoint(): Unable to get WayPoint, field not selected");
}

const uci::type::WayPointType& EndPointType::getWayPoint() const {
  return getWayPoint_();
}

uci::type::WayPointType& EndPointType::getWayPoint() {
  return getWayPoint_();
}

uci::type::EndPointType& EndPointType::setWayPoint(const uci::type::WayPointType& accessor) {
  chooseWayPoint();
  if (&accessor != wayPoint_Accessor.get()) {
    wayPoint_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool EndPointType::isWayPoint() const noexcept {
  return static_cast<bool>(wayPoint_Accessor);
}

uci::type::WayPointType& EndPointType::chooseWayPoint(const std::string& method, uci::base::accessorType::AccessorType type) {
  turnPoint_Accessor.reset();
  loiterPoint_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::wayPointType : type};
  if ((!wayPoint_Accessor) || (wayPoint_Accessor->getAccessorType() != requestedType)) {
    wayPoint_Accessor = WayPointType::create(type);
    if (!wayPoint_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *wayPoint_Accessor;
}

uci::type::WayPointType& EndPointType::chooseWayPoint(uci::base::accessorType::AccessorType type) {
  return chooseWayPoint("chooseWayPoint", type);
}

uci::type::TurnPointType& EndPointType::getTurnPoint_() const {
  if (turnPoint_Accessor) {
    return *turnPoint_Accessor;
  }
  throw uci::base::UCIException("Error in getTurnPoint(): Unable to get TurnPoint, field not selected");
}

const uci::type::TurnPointType& EndPointType::getTurnPoint() const {
  return getTurnPoint_();
}

uci::type::TurnPointType& EndPointType::getTurnPoint() {
  return getTurnPoint_();
}

uci::type::EndPointType& EndPointType::setTurnPoint(const uci::type::TurnPointType& accessor) {
  chooseTurnPoint();
  if (&accessor != turnPoint_Accessor.get()) {
    turnPoint_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool EndPointType::isTurnPoint() const noexcept {
  return static_cast<bool>(turnPoint_Accessor);
}

uci::type::TurnPointType& EndPointType::chooseTurnPoint(const std::string& method, uci::base::accessorType::AccessorType type) {
  wayPoint_Accessor.reset();
  loiterPoint_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::turnPointType : type};
  if ((!turnPoint_Accessor) || (turnPoint_Accessor->getAccessorType() != requestedType)) {
    turnPoint_Accessor = TurnPointType::create(type);
    if (!turnPoint_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *turnPoint_Accessor;
}

uci::type::TurnPointType& EndPointType::chooseTurnPoint(uci::base::accessorType::AccessorType type) {
  return chooseTurnPoint("chooseTurnPoint", type);
}

uci::type::LoiterPointType& EndPointType::getLoiterPoint_() const {
  if (loiterPoint_Accessor) {
    return *loiterPoint_Accessor;
  }
  throw uci::base::UCIException("Error in getLoiterPoint(): Unable to get LoiterPoint, field not selected");
}

const uci::type::LoiterPointType& EndPointType::getLoiterPoint() const {
  return getLoiterPoint_();
}

uci::type::LoiterPointType& EndPointType::getLoiterPoint() {
  return getLoiterPoint_();
}

uci::type::EndPointType& EndPointType::setLoiterPoint(const uci::type::LoiterPointType& accessor) {
  chooseLoiterPoint();
  if (&accessor != loiterPoint_Accessor.get()) {
    loiterPoint_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool EndPointType::isLoiterPoint() const noexcept {
  return static_cast<bool>(loiterPoint_Accessor);
}

uci::type::LoiterPointType& EndPointType::chooseLoiterPoint(const std::string& method, uci::base::accessorType::AccessorType type) {
  wayPoint_Accessor.reset();
  turnPoint_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::loiterPointType : type};
  if ((!loiterPoint_Accessor) || (loiterPoint_Accessor->getAccessorType() != requestedType)) {
    loiterPoint_Accessor = LoiterPointType::create(type);
    if (!loiterPoint_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *loiterPoint_Accessor;
}

uci::type::LoiterPointType& EndPointType::chooseLoiterPoint(uci::base::accessorType::AccessorType type) {
  return chooseLoiterPoint("chooseLoiterPoint", type);
}

std::unique_ptr<EndPointType> EndPointType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::endPointType : type};
  return (requestedType == uci::type::accessorType::endPointType) ? boost::make_unique<EndPointType>() : nullptr;
}

/**  */
namespace EndPointType_Names {

constexpr const char* Extern_Type_Name{"EndPointType"};
constexpr const char* WayPoint_Name{"WayPoint"};
constexpr const char* TurnPoint_Name{"TurnPoint"};
constexpr const char* LoiterPoint_Name{"LoiterPoint"};

} // namespace EndPointType_Names

void EndPointType::deserialize(const boost::property_tree::ptree& propTree, uci::type::EndPointType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EndPointType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + EndPointType_Names::WayPoint_Name) {
      WayPointType::deserialize(valueType.second, accessor.chooseWayPoint(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EndPointType_Names::TurnPoint_Name) {
      TurnPointType::deserialize(valueType.second, accessor.chooseTurnPoint(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EndPointType_Names::LoiterPoint_Name) {
      LoiterPointType::deserialize(valueType.second, accessor.chooseLoiterPoint(), nodeName, nsPrefix);
    }
  }
}

std::string EndPointType::serialize(const uci::type::EndPointType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? EndPointType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, EndPointType_Names::Extern_Type_Name);
  }
  if (accessor.isWayPoint()) {
    WayPointType::serialize(accessor.getWayPoint(), node, EndPointType_Names::WayPoint_Name);
  } else if (accessor.isTurnPoint()) {
    TurnPointType::serialize(accessor.getTurnPoint(), node, EndPointType_Names::TurnPoint_Name);
  } else if (accessor.isLoiterPoint()) {
    LoiterPointType::serialize(accessor.getLoiterPoint(), node, EndPointType_Names::LoiterPoint_Name);
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

uci::type::EndPointType& EndPointType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::EndPointType>().release());
}

uci::type::EndPointType& EndPointType::create(const uci::type::EndPointType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::EndPointType> newAccessor{boost::make_unique<asb_uci::type::EndPointType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void EndPointType::destroy(uci::type::EndPointType& accessor) {
  delete dynamic_cast<asb_uci::type::EndPointType*>(&accessor);
}

} // namespace type

} // namespace uci

