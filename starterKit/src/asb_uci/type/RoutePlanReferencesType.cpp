/** @file RoutePlanReferencesType.cpp
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

#include "../../../include/asb_uci/type/RoutePlanReferencesType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/MissionPlanID_Type.h"
#include "../../../include/asb_uci/type/PathConstraintsType.h"
#include "../../../include/asb_uci/type/PathID_Type.h"
#include "../../../include/asb_uci/type/RoutePlanID_Type.h"
#include "../../../include/asb_uci/type/SegmentID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MissionPlanID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PathConstraintsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PathID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RoutePlanID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RoutePlanReferencesType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SegmentID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

RoutePlanReferencesType::RoutePlanReferencesType()
  : routePlanID_Accessor{boost::make_unique<RoutePlanID_Type>()},
    pathID_Accessor{boost::make_unique<PathID>(0, SIZE_MAX)},
    segmentID_Accessor{boost::make_unique<SegmentID>(0, SIZE_MAX)},
    constraints_Accessor{boost::make_unique<Constraints>(0, SIZE_MAX)} {
}

RoutePlanReferencesType::~RoutePlanReferencesType() = default;

void RoutePlanReferencesType::copy(const uci::type::RoutePlanReferencesType& accessor) {
  copyImpl(accessor, false);
}

void RoutePlanReferencesType::copyImpl(const uci::type::RoutePlanReferencesType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const RoutePlanReferencesType&>(accessor);
    setRoutePlanID(*(accessorImpl.routePlanID_Accessor));
    if (accessorImpl.missionPlanID_Accessor) {
      setMissionPlanID(*(accessorImpl.missionPlanID_Accessor));
    } else {
      missionPlanID_Accessor.reset();
    }
    setPathID(*(accessorImpl.pathID_Accessor));
    setSegmentID(*(accessorImpl.segmentID_Accessor));
    setConstraints(*(accessorImpl.constraints_Accessor));
  }
}

void RoutePlanReferencesType::reset() noexcept {
  routePlanID_Accessor->reset();
  missionPlanID_Accessor.reset();
  pathID_Accessor->reset();
  segmentID_Accessor->reset();
  constraints_Accessor->reset();
}

const uci::type::RoutePlanID_Type& RoutePlanReferencesType::getRoutePlanID() const {
  return *routePlanID_Accessor;
}

uci::type::RoutePlanID_Type& RoutePlanReferencesType::getRoutePlanID() {
  return *routePlanID_Accessor;
}

uci::type::RoutePlanReferencesType& RoutePlanReferencesType::setRoutePlanID(const uci::type::RoutePlanID_Type& accessor) {
  if (&accessor != routePlanID_Accessor.get()) {
    routePlanID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::MissionPlanID_Type& RoutePlanReferencesType::getMissionPlanID_() const {
  if (missionPlanID_Accessor) {
    return *missionPlanID_Accessor;
  }
  throw uci::base::UCIException("Error in getMissionPlanID(): An attempt was made to get an optional field that was not enabled, call hasMissionPlanID() to determine if it is safe to call getMissionPlanID()");
}

const uci::type::MissionPlanID_Type& RoutePlanReferencesType::getMissionPlanID() const {
  return getMissionPlanID_();
}

uci::type::MissionPlanID_Type& RoutePlanReferencesType::getMissionPlanID() {
  return getMissionPlanID_();
}

uci::type::RoutePlanReferencesType& RoutePlanReferencesType::setMissionPlanID(const uci::type::MissionPlanID_Type& accessor) {
  enableMissionPlanID();
  if (&accessor != missionPlanID_Accessor.get()) {
    missionPlanID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RoutePlanReferencesType::hasMissionPlanID() const noexcept {
  return static_cast<bool>(missionPlanID_Accessor);
}

uci::type::MissionPlanID_Type& RoutePlanReferencesType::enableMissionPlanID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::missionPlanID_Type : type};
  if ((!missionPlanID_Accessor) || (missionPlanID_Accessor->getAccessorType() != requestedType)) {
    missionPlanID_Accessor = MissionPlanID_Type::create(requestedType);
    if (!missionPlanID_Accessor) {
      throw uci::base::UCIException("Error in enableMissionPlanID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *missionPlanID_Accessor;
}

uci::type::RoutePlanReferencesType& RoutePlanReferencesType::clearMissionPlanID() noexcept {
  missionPlanID_Accessor.reset();
  return *this;
}

const uci::type::RoutePlanReferencesType::PathID& RoutePlanReferencesType::getPathID() const {
  return *pathID_Accessor;
}

uci::type::RoutePlanReferencesType::PathID& RoutePlanReferencesType::getPathID() {
  return *pathID_Accessor;
}

uci::type::RoutePlanReferencesType& RoutePlanReferencesType::setPathID(const uci::type::RoutePlanReferencesType::PathID& accessor) {
  if (&accessor != pathID_Accessor.get()) {
    pathID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::RoutePlanReferencesType::SegmentID& RoutePlanReferencesType::getSegmentID() const {
  return *segmentID_Accessor;
}

uci::type::RoutePlanReferencesType::SegmentID& RoutePlanReferencesType::getSegmentID() {
  return *segmentID_Accessor;
}

uci::type::RoutePlanReferencesType& RoutePlanReferencesType::setSegmentID(const uci::type::RoutePlanReferencesType::SegmentID& accessor) {
  if (&accessor != segmentID_Accessor.get()) {
    segmentID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::RoutePlanReferencesType::Constraints& RoutePlanReferencesType::getConstraints() const {
  return *constraints_Accessor;
}

uci::type::RoutePlanReferencesType::Constraints& RoutePlanReferencesType::getConstraints() {
  return *constraints_Accessor;
}

uci::type::RoutePlanReferencesType& RoutePlanReferencesType::setConstraints(const uci::type::RoutePlanReferencesType::Constraints& accessor) {
  if (&accessor != constraints_Accessor.get()) {
    constraints_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<RoutePlanReferencesType> RoutePlanReferencesType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::routePlanReferencesType : type};
  return (requestedType == uci::type::accessorType::routePlanReferencesType) ? boost::make_unique<RoutePlanReferencesType>() : nullptr;
}

/**  */
namespace RoutePlanReferencesType_Names {

constexpr const char* Extern_Type_Name{"RoutePlanReferencesType"};
constexpr const char* RoutePlanID_Name{"RoutePlanID"};
constexpr const char* MissionPlanID_Name{"MissionPlanID"};
constexpr const char* PathID_Name{"PathID"};
constexpr const char* SegmentID_Name{"SegmentID"};
constexpr const char* Constraints_Name{"Constraints"};

} // namespace RoutePlanReferencesType_Names

void RoutePlanReferencesType::deserialize(const boost::property_tree::ptree& propTree, uci::type::RoutePlanReferencesType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RoutePlanReferencesType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RoutePlanReferencesType_Names::RoutePlanID_Name) {
      RoutePlanID_Type::deserialize(valueType.second, accessor.getRoutePlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RoutePlanReferencesType_Names::MissionPlanID_Name) {
      MissionPlanID_Type::deserialize(valueType.second, accessor.enableMissionPlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RoutePlanReferencesType_Names::PathID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::RoutePlanReferencesType::PathID& boundedList = accessor.getPathID();
        const uci::type::RoutePlanReferencesType::PathID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::PathID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + RoutePlanReferencesType_Names::SegmentID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::RoutePlanReferencesType::SegmentID& boundedList = accessor.getSegmentID();
        const uci::type::RoutePlanReferencesType::SegmentID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::SegmentID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + RoutePlanReferencesType_Names::Constraints_Name) {
      uci::type::RoutePlanReferencesType::Constraints& boundedList = accessor.getConstraints();
      const uci::type::RoutePlanReferencesType::Constraints::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::PathConstraintsType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    }
  }
}

std::string RoutePlanReferencesType::serialize(const uci::type::RoutePlanReferencesType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? RoutePlanReferencesType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, RoutePlanReferencesType_Names::Extern_Type_Name);
  }
  RoutePlanID_Type::serialize(accessor.getRoutePlanID(), node, RoutePlanReferencesType_Names::RoutePlanID_Name);
  if (accessor.hasMissionPlanID()) {
    MissionPlanID_Type::serialize(accessor.getMissionPlanID(), node, RoutePlanReferencesType_Names::MissionPlanID_Name);
  }
  {
    const uci::type::RoutePlanReferencesType::PathID& boundedList = accessor.getPathID();
    for (uci::type::RoutePlanReferencesType::PathID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::PathID_Type::serialize(boundedList.at(i), node, RoutePlanReferencesType_Names::PathID_Name);
    }
  }
  {
    const uci::type::RoutePlanReferencesType::SegmentID& boundedList = accessor.getSegmentID();
    for (uci::type::RoutePlanReferencesType::SegmentID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::SegmentID_Type::serialize(boundedList.at(i), node, RoutePlanReferencesType_Names::SegmentID_Name);
    }
  }
  {
    const uci::type::RoutePlanReferencesType::Constraints& boundedList = accessor.getConstraints();
    for (uci::type::RoutePlanReferencesType::Constraints::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::PathConstraintsType::serialize(boundedList.at(i), node, RoutePlanReferencesType_Names::Constraints_Name);
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

uci::type::RoutePlanReferencesType& RoutePlanReferencesType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::RoutePlanReferencesType>().release());
}

uci::type::RoutePlanReferencesType& RoutePlanReferencesType::create(const uci::type::RoutePlanReferencesType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::RoutePlanReferencesType> newAccessor{boost::make_unique<asb_uci::type::RoutePlanReferencesType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void RoutePlanReferencesType::destroy(uci::type::RoutePlanReferencesType& accessor) {
  delete dynamic_cast<asb_uci::type::RoutePlanReferencesType*>(&accessor);
}

} // namespace type

} // namespace uci

