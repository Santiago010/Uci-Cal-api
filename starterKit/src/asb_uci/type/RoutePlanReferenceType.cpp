/** @file RoutePlanReferenceType.cpp
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

#include "../../../include/asb_uci/type/RoutePlanReferenceType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/MissionPlanID_Type.h"
#include "../../../include/asb_uci/type/PathID_Type.h"
#include "../../../include/asb_uci/type/RoutePlanID_Type.h"
#include "../../../include/asb_uci/type/SegmentID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MissionPlanID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PathID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RoutePlanID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RoutePlanReferenceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SegmentID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

RoutePlanReferenceType::RoutePlanReferenceType()
  : routePlanID_Accessor{boost::make_unique<RoutePlanID_Type>()} {
}

RoutePlanReferenceType::~RoutePlanReferenceType() = default;

void RoutePlanReferenceType::copy(const uci::type::RoutePlanReferenceType& accessor) {
  copyImpl(accessor, false);
}

void RoutePlanReferenceType::copyImpl(const uci::type::RoutePlanReferenceType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const RoutePlanReferenceType&>(accessor);
    setRoutePlanID(*(accessorImpl.routePlanID_Accessor));
    if (accessorImpl.missionPlanID_Accessor) {
      setMissionPlanID(*(accessorImpl.missionPlanID_Accessor));
    } else {
      missionPlanID_Accessor.reset();
    }
    if (accessorImpl.pathID_Accessor) {
      setPathID(*(accessorImpl.pathID_Accessor));
    } else {
      pathID_Accessor.reset();
    }
    if (accessorImpl.segmentID_Accessor) {
      setSegmentID(*(accessorImpl.segmentID_Accessor));
    } else {
      segmentID_Accessor.reset();
    }
  }
}

void RoutePlanReferenceType::reset() noexcept {
  routePlanID_Accessor->reset();
  missionPlanID_Accessor.reset();
  pathID_Accessor.reset();
  segmentID_Accessor.reset();
}

const uci::type::RoutePlanID_Type& RoutePlanReferenceType::getRoutePlanID() const {
  return *routePlanID_Accessor;
}

uci::type::RoutePlanID_Type& RoutePlanReferenceType::getRoutePlanID() {
  return *routePlanID_Accessor;
}

uci::type::RoutePlanReferenceType& RoutePlanReferenceType::setRoutePlanID(const uci::type::RoutePlanID_Type& accessor) {
  if (&accessor != routePlanID_Accessor.get()) {
    routePlanID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::MissionPlanID_Type& RoutePlanReferenceType::getMissionPlanID_() const {
  if (missionPlanID_Accessor) {
    return *missionPlanID_Accessor;
  }
  throw uci::base::UCIException("Error in getMissionPlanID(): An attempt was made to get an optional field that was not enabled, call hasMissionPlanID() to determine if it is safe to call getMissionPlanID()");
}

const uci::type::MissionPlanID_Type& RoutePlanReferenceType::getMissionPlanID() const {
  return getMissionPlanID_();
}

uci::type::MissionPlanID_Type& RoutePlanReferenceType::getMissionPlanID() {
  return getMissionPlanID_();
}

uci::type::RoutePlanReferenceType& RoutePlanReferenceType::setMissionPlanID(const uci::type::MissionPlanID_Type& accessor) {
  enableMissionPlanID();
  if (&accessor != missionPlanID_Accessor.get()) {
    missionPlanID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RoutePlanReferenceType::hasMissionPlanID() const noexcept {
  return static_cast<bool>(missionPlanID_Accessor);
}

uci::type::MissionPlanID_Type& RoutePlanReferenceType::enableMissionPlanID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::missionPlanID_Type : type};
  if ((!missionPlanID_Accessor) || (missionPlanID_Accessor->getAccessorType() != requestedType)) {
    missionPlanID_Accessor = MissionPlanID_Type::create(requestedType);
    if (!missionPlanID_Accessor) {
      throw uci::base::UCIException("Error in enableMissionPlanID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *missionPlanID_Accessor;
}

uci::type::RoutePlanReferenceType& RoutePlanReferenceType::clearMissionPlanID() noexcept {
  missionPlanID_Accessor.reset();
  return *this;
}

uci::type::PathID_Type& RoutePlanReferenceType::getPathID_() const {
  if (pathID_Accessor) {
    return *pathID_Accessor;
  }
  throw uci::base::UCIException("Error in getPathID(): An attempt was made to get an optional field that was not enabled, call hasPathID() to determine if it is safe to call getPathID()");
}

const uci::type::PathID_Type& RoutePlanReferenceType::getPathID() const {
  return getPathID_();
}

uci::type::PathID_Type& RoutePlanReferenceType::getPathID() {
  return getPathID_();
}

uci::type::RoutePlanReferenceType& RoutePlanReferenceType::setPathID(const uci::type::PathID_Type& accessor) {
  enablePathID();
  if (&accessor != pathID_Accessor.get()) {
    pathID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RoutePlanReferenceType::hasPathID() const noexcept {
  return static_cast<bool>(pathID_Accessor);
}

uci::type::PathID_Type& RoutePlanReferenceType::enablePathID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pathID_Type : type};
  if ((!pathID_Accessor) || (pathID_Accessor->getAccessorType() != requestedType)) {
    pathID_Accessor = PathID_Type::create(requestedType);
    if (!pathID_Accessor) {
      throw uci::base::UCIException("Error in enablePathID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *pathID_Accessor;
}

uci::type::RoutePlanReferenceType& RoutePlanReferenceType::clearPathID() noexcept {
  pathID_Accessor.reset();
  return *this;
}

uci::type::SegmentID_Type& RoutePlanReferenceType::getSegmentID_() const {
  if (segmentID_Accessor) {
    return *segmentID_Accessor;
  }
  throw uci::base::UCIException("Error in getSegmentID(): An attempt was made to get an optional field that was not enabled, call hasSegmentID() to determine if it is safe to call getSegmentID()");
}

const uci::type::SegmentID_Type& RoutePlanReferenceType::getSegmentID() const {
  return getSegmentID_();
}

uci::type::SegmentID_Type& RoutePlanReferenceType::getSegmentID() {
  return getSegmentID_();
}

uci::type::RoutePlanReferenceType& RoutePlanReferenceType::setSegmentID(const uci::type::SegmentID_Type& accessor) {
  enableSegmentID();
  if (&accessor != segmentID_Accessor.get()) {
    segmentID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RoutePlanReferenceType::hasSegmentID() const noexcept {
  return static_cast<bool>(segmentID_Accessor);
}

uci::type::SegmentID_Type& RoutePlanReferenceType::enableSegmentID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::segmentID_Type : type};
  if ((!segmentID_Accessor) || (segmentID_Accessor->getAccessorType() != requestedType)) {
    segmentID_Accessor = SegmentID_Type::create(requestedType);
    if (!segmentID_Accessor) {
      throw uci::base::UCIException("Error in enableSegmentID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *segmentID_Accessor;
}

uci::type::RoutePlanReferenceType& RoutePlanReferenceType::clearSegmentID() noexcept {
  segmentID_Accessor.reset();
  return *this;
}

std::unique_ptr<RoutePlanReferenceType> RoutePlanReferenceType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::routePlanReferenceType : type};
  return (requestedType == uci::type::accessorType::routePlanReferenceType) ? boost::make_unique<RoutePlanReferenceType>() : nullptr;
}

/**  */
namespace RoutePlanReferenceType_Names {

constexpr const char* Extern_Type_Name{"RoutePlanReferenceType"};
constexpr const char* RoutePlanID_Name{"RoutePlanID"};
constexpr const char* MissionPlanID_Name{"MissionPlanID"};
constexpr const char* PathID_Name{"PathID"};
constexpr const char* SegmentID_Name{"SegmentID"};

} // namespace RoutePlanReferenceType_Names

void RoutePlanReferenceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::RoutePlanReferenceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RoutePlanReferenceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RoutePlanReferenceType_Names::RoutePlanID_Name) {
      RoutePlanID_Type::deserialize(valueType.second, accessor.getRoutePlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RoutePlanReferenceType_Names::MissionPlanID_Name) {
      MissionPlanID_Type::deserialize(valueType.second, accessor.enableMissionPlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RoutePlanReferenceType_Names::PathID_Name) {
      PathID_Type::deserialize(valueType.second, accessor.enablePathID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RoutePlanReferenceType_Names::SegmentID_Name) {
      SegmentID_Type::deserialize(valueType.second, accessor.enableSegmentID(), nodeName, nsPrefix);
    }
  }
}

std::string RoutePlanReferenceType::serialize(const uci::type::RoutePlanReferenceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? RoutePlanReferenceType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, RoutePlanReferenceType_Names::Extern_Type_Name);
  }
  RoutePlanID_Type::serialize(accessor.getRoutePlanID(), node, RoutePlanReferenceType_Names::RoutePlanID_Name);
  if (accessor.hasMissionPlanID()) {
    MissionPlanID_Type::serialize(accessor.getMissionPlanID(), node, RoutePlanReferenceType_Names::MissionPlanID_Name);
  }
  if (accessor.hasPathID()) {
    PathID_Type::serialize(accessor.getPathID(), node, RoutePlanReferenceType_Names::PathID_Name);
  }
  if (accessor.hasSegmentID()) {
    SegmentID_Type::serialize(accessor.getSegmentID(), node, RoutePlanReferenceType_Names::SegmentID_Name);
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

uci::type::RoutePlanReferenceType& RoutePlanReferenceType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::RoutePlanReferenceType>().release());
}

uci::type::RoutePlanReferenceType& RoutePlanReferenceType::create(const uci::type::RoutePlanReferenceType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::RoutePlanReferenceType> newAccessor{boost::make_unique<asb_uci::type::RoutePlanReferenceType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void RoutePlanReferenceType::destroy(uci::type::RoutePlanReferenceType& accessor) {
  delete dynamic_cast<asb_uci::type::RoutePlanReferenceType*>(&accessor);
}

} // namespace type

} // namespace uci

