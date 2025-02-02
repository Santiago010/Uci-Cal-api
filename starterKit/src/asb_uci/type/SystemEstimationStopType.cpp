/** @file SystemEstimationStopType.cpp
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

#include "../../../include/asb_uci/type/SystemEstimationStopType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/OrbitManeuverSegmentID_Type.h"
#include "../../../include/asb_uci/type/SegmentID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitManeuverSegmentID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SegmentID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemEstimationStopType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SystemEstimationStopType::SystemEstimationStopType() = default;

SystemEstimationStopType::~SystemEstimationStopType() = default;

void SystemEstimationStopType::copy(const uci::type::SystemEstimationStopType& accessor) {
  copyImpl(accessor, false);
}

void SystemEstimationStopType::copyImpl(const uci::type::SystemEstimationStopType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const SystemEstimationStopType&>(accessor);
    time_Accessor = (accessorImpl.time_Accessor ? accessorImpl.time_Accessor : boost::none);
    if (accessorImpl.routeSegmentID_Accessor) {
      setRouteSegmentID(*(accessorImpl.routeSegmentID_Accessor));
    } else {
      routeSegmentID_Accessor.reset();
    }
    if (accessorImpl.orbitManeuverSegmentID_Accessor) {
      setOrbitManeuverSegmentID(*(accessorImpl.orbitManeuverSegmentID_Accessor));
    } else {
      orbitManeuverSegmentID_Accessor.reset();
    }
  }
}

void SystemEstimationStopType::reset() noexcept {
  time_Accessor.reset();
  routeSegmentID_Accessor.reset();
  orbitManeuverSegmentID_Accessor.reset();
}

uci::type::SystemEstimationStopType::SystemEstimationStopTypeChoice SystemEstimationStopType::getSystemEstimationStopTypeChoiceOrdinal() const noexcept {
  if (time_Accessor) {
    return SYSTEMESTIMATIONSTOPTYPE_CHOICE_TIME;
  }
  if (routeSegmentID_Accessor) {
    return SYSTEMESTIMATIONSTOPTYPE_CHOICE_ROUTESEGMENTID;
  }
  if (orbitManeuverSegmentID_Accessor) {
    return SYSTEMESTIMATIONSTOPTYPE_CHOICE_ORBITMANEUVERSEGMENTID;
  }
  return SYSTEMESTIMATIONSTOPTYPE_CHOICE_NONE;
}

uci::type::SystemEstimationStopType& SystemEstimationStopType::setSystemEstimationStopTypeChoiceOrdinal(uci::type::SystemEstimationStopType::SystemEstimationStopTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case SYSTEMESTIMATIONSTOPTYPE_CHOICE_TIME:
      chooseTime();
      break;
    case SYSTEMESTIMATIONSTOPTYPE_CHOICE_ROUTESEGMENTID:
      chooseRouteSegmentID("setSystemEstimationStopTypeChoiceOrdinal", type);
      break;
    case SYSTEMESTIMATIONSTOPTYPE_CHOICE_ORBITMANEUVERSEGMENTID:
      chooseOrbitManeuverSegmentID("setSystemEstimationStopTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setSystemEstimationStopTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::DateTimeTypeValue SystemEstimationStopType::getTime() const {
  if (time_Accessor) {
    return *time_Accessor;
  }
  throw uci::base::UCIException("Error in getTime(): Unable to get Time, field not selected");
}

uci::type::SystemEstimationStopType& SystemEstimationStopType::setTime(uci::type::DateTimeTypeValue value) {
  chooseTime();
  time_Accessor = value;
  return *this;
}

bool SystemEstimationStopType::isTime() const noexcept {
  return static_cast<bool>(time_Accessor);
}

void SystemEstimationStopType::chooseTime() {
  routeSegmentID_Accessor.reset();
  orbitManeuverSegmentID_Accessor.reset();
  if (!time_Accessor) {
    time_Accessor = boost::optional<asb_xs::DateTime>();
  }
}

uci::type::SegmentID_Type& SystemEstimationStopType::getRouteSegmentID_() const {
  if (routeSegmentID_Accessor) {
    return *routeSegmentID_Accessor;
  }
  throw uci::base::UCIException("Error in getRouteSegmentID(): Unable to get RouteSegmentID, field not selected");
}

const uci::type::SegmentID_Type& SystemEstimationStopType::getRouteSegmentID() const {
  return getRouteSegmentID_();
}

uci::type::SegmentID_Type& SystemEstimationStopType::getRouteSegmentID() {
  return getRouteSegmentID_();
}

uci::type::SystemEstimationStopType& SystemEstimationStopType::setRouteSegmentID(const uci::type::SegmentID_Type& accessor) {
  chooseRouteSegmentID();
  if (&accessor != routeSegmentID_Accessor.get()) {
    routeSegmentID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool SystemEstimationStopType::isRouteSegmentID() const noexcept {
  return static_cast<bool>(routeSegmentID_Accessor);
}

uci::type::SegmentID_Type& SystemEstimationStopType::chooseRouteSegmentID(const std::string& method, uci::base::accessorType::AccessorType type) {
  time_Accessor.reset();
  orbitManeuverSegmentID_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::segmentID_Type : type};
  if ((!routeSegmentID_Accessor) || (routeSegmentID_Accessor->getAccessorType() != requestedType)) {
    routeSegmentID_Accessor = SegmentID_Type::create(type);
    if (!routeSegmentID_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *routeSegmentID_Accessor;
}

uci::type::SegmentID_Type& SystemEstimationStopType::chooseRouteSegmentID(uci::base::accessorType::AccessorType type) {
  return chooseRouteSegmentID("chooseRouteSegmentID", type);
}

uci::type::OrbitManeuverSegmentID_Type& SystemEstimationStopType::getOrbitManeuverSegmentID_() const {
  if (orbitManeuverSegmentID_Accessor) {
    return *orbitManeuverSegmentID_Accessor;
  }
  throw uci::base::UCIException("Error in getOrbitManeuverSegmentID(): Unable to get OrbitManeuverSegmentID, field not selected");
}

const uci::type::OrbitManeuverSegmentID_Type& SystemEstimationStopType::getOrbitManeuverSegmentID() const {
  return getOrbitManeuverSegmentID_();
}

uci::type::OrbitManeuverSegmentID_Type& SystemEstimationStopType::getOrbitManeuverSegmentID() {
  return getOrbitManeuverSegmentID_();
}

uci::type::SystemEstimationStopType& SystemEstimationStopType::setOrbitManeuverSegmentID(const uci::type::OrbitManeuverSegmentID_Type& accessor) {
  chooseOrbitManeuverSegmentID();
  if (&accessor != orbitManeuverSegmentID_Accessor.get()) {
    orbitManeuverSegmentID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool SystemEstimationStopType::isOrbitManeuverSegmentID() const noexcept {
  return static_cast<bool>(orbitManeuverSegmentID_Accessor);
}

uci::type::OrbitManeuverSegmentID_Type& SystemEstimationStopType::chooseOrbitManeuverSegmentID(const std::string& method, uci::base::accessorType::AccessorType type) {
  time_Accessor.reset();
  routeSegmentID_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitManeuverSegmentID_Type : type};
  if ((!orbitManeuverSegmentID_Accessor) || (orbitManeuverSegmentID_Accessor->getAccessorType() != requestedType)) {
    orbitManeuverSegmentID_Accessor = OrbitManeuverSegmentID_Type::create(type);
    if (!orbitManeuverSegmentID_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *orbitManeuverSegmentID_Accessor;
}

uci::type::OrbitManeuverSegmentID_Type& SystemEstimationStopType::chooseOrbitManeuverSegmentID(uci::base::accessorType::AccessorType type) {
  return chooseOrbitManeuverSegmentID("chooseOrbitManeuverSegmentID", type);
}

std::unique_ptr<SystemEstimationStopType> SystemEstimationStopType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::systemEstimationStopType : type};
  return (requestedType == uci::type::accessorType::systemEstimationStopType) ? boost::make_unique<SystemEstimationStopType>() : nullptr;
}

/**  */
namespace SystemEstimationStopType_Names {

constexpr const char* Extern_Type_Name{"SystemEstimationStopType"};
constexpr const char* Time_Name{"Time"};
constexpr const char* RouteSegmentID_Name{"RouteSegmentID"};
constexpr const char* OrbitManeuverSegmentID_Name{"OrbitManeuverSegmentID"};

} // namespace SystemEstimationStopType_Names

void SystemEstimationStopType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SystemEstimationStopType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SystemEstimationStopType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SystemEstimationStopType_Names::Time_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTime(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + SystemEstimationStopType_Names::RouteSegmentID_Name) {
      SegmentID_Type::deserialize(valueType.second, accessor.chooseRouteSegmentID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SystemEstimationStopType_Names::OrbitManeuverSegmentID_Name) {
      OrbitManeuverSegmentID_Type::deserialize(valueType.second, accessor.chooseOrbitManeuverSegmentID(), nodeName, nsPrefix);
    }
  }
}

std::string SystemEstimationStopType::serialize(const uci::type::SystemEstimationStopType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SystemEstimationStopType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SystemEstimationStopType_Names::Extern_Type_Name);
  }
  if (accessor.isTime()) {
    asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getTime(), node, SystemEstimationStopType_Names::Time_Name);
  } else if (accessor.isRouteSegmentID()) {
    SegmentID_Type::serialize(accessor.getRouteSegmentID(), node, SystemEstimationStopType_Names::RouteSegmentID_Name);
  } else if (accessor.isOrbitManeuverSegmentID()) {
    OrbitManeuverSegmentID_Type::serialize(accessor.getOrbitManeuverSegmentID(), node, SystemEstimationStopType_Names::OrbitManeuverSegmentID_Name);
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

uci::type::SystemEstimationStopType& SystemEstimationStopType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SystemEstimationStopType>().release());
}

uci::type::SystemEstimationStopType& SystemEstimationStopType::create(const uci::type::SystemEstimationStopType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SystemEstimationStopType> newAccessor{boost::make_unique<asb_uci::type::SystemEstimationStopType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SystemEstimationStopType::destroy(uci::type::SystemEstimationStopType& accessor) {
  delete dynamic_cast<asb_uci::type::SystemEstimationStopType*>(&accessor);
}

} // namespace type

} // namespace uci

