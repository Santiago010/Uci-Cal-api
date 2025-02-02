/** @file SegmentEstimateType.cpp
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

#include "../../../include/asb_uci/type/SegmentEstimateType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/LoiterProgressType.h"
#include "../../../include/asb_uci/type/PathID_Type.h"
#include "../../../include/asb_uci/type/RoutePlanID_Type.h"
#include "../../../include/asb_uci/type/SegmentID_Type.h"
#include "../../../include/asb_uci/type/SegmentKinematicsType.h"
#include "../../../include/asb_uci/util/DerivedTypesCopier.h"
#include "../../../include/asb_uci/util/DerivedTypesCreator.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/DerivedTypesSerializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DistanceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LoiterProgressType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PathID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RoutePlanID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SegmentEstimateType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SegmentID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SegmentKinematicsType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SegmentEstimateType::SegmentEstimateType()
  : planID_Accessor{boost::make_unique<RoutePlanID_Type>()},
    pathID_Accessor{boost::make_unique<PathID_Type>()},
    segmentID_Accessor{boost::make_unique<SegmentID_Type>()} {
}

SegmentEstimateType::~SegmentEstimateType() = default;

void SegmentEstimateType::copy(const uci::type::SegmentEstimateType& accessor) {
  copyImpl(accessor, false);
}

void SegmentEstimateType::copyImpl(const uci::type::SegmentEstimateType& accessor, const bool checkIfDerivation) {
  if (&accessor != this) {
    if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::segmentEstimateType)) {
      const auto& accessorImpl = dynamic_cast<const SegmentEstimateType&>(accessor);
      setPlanID(*(accessorImpl.planID_Accessor));
      setPathID(*(accessorImpl.pathID_Accessor));
      setSegmentID(*(accessorImpl.segmentID_Accessor));
      if (accessorImpl.hasEstimatedCaptureTime()) {
        setEstimatedCaptureTime(accessorImpl.getEstimatedCaptureTime());
      } else {
        clearEstimatedCaptureTime();
      }
      if (accessorImpl.hasEstimatedCaptureDistance()) {
        setEstimatedCaptureDistance(accessorImpl.getEstimatedCaptureDistance());
      } else {
        clearEstimatedCaptureDistance();
      }
      if (accessorImpl.loiterProgress_Accessor) {
        setLoiterProgress(*(accessorImpl.loiterProgress_Accessor));
      } else {
        loiterProgress_Accessor.reset();
      }
      if (accessorImpl.segmentKinematics_Accessor) {
        setSegmentKinematics(*(accessorImpl.segmentKinematics_Accessor));
      } else {
        segmentKinematics_Accessor.reset();
      }
    } else {
      asb_uci::util::DerivedTypesCopier::copy(accessor, *this);
    }
  }
}

void SegmentEstimateType::reset() noexcept {
  planID_Accessor->reset();
  pathID_Accessor->reset();
  segmentID_Accessor->reset();
  clearEstimatedCaptureTime();
  clearEstimatedCaptureDistance();
  loiterProgress_Accessor.reset();
  segmentKinematics_Accessor.reset();
}

const uci::type::RoutePlanID_Type& SegmentEstimateType::getPlanID() const {
  return *planID_Accessor;
}

uci::type::RoutePlanID_Type& SegmentEstimateType::getPlanID() {
  return *planID_Accessor;
}

uci::type::SegmentEstimateType& SegmentEstimateType::setPlanID(const uci::type::RoutePlanID_Type& accessor) {
  if (&accessor != planID_Accessor.get()) {
    planID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PathID_Type& SegmentEstimateType::getPathID() const {
  return *pathID_Accessor;
}

uci::type::PathID_Type& SegmentEstimateType::getPathID() {
  return *pathID_Accessor;
}

uci::type::SegmentEstimateType& SegmentEstimateType::setPathID(const uci::type::PathID_Type& accessor) {
  if (&accessor != pathID_Accessor.get()) {
    pathID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SegmentID_Type& SegmentEstimateType::getSegmentID() const {
  return *segmentID_Accessor;
}

uci::type::SegmentID_Type& SegmentEstimateType::getSegmentID() {
  return *segmentID_Accessor;
}

uci::type::SegmentEstimateType& SegmentEstimateType::setSegmentID(const uci::type::SegmentID_Type& accessor) {
  if (&accessor != segmentID_Accessor.get()) {
    segmentID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::DateTimeTypeValue SegmentEstimateType::getEstimatedCaptureTime() const {
  if (estimatedCaptureTime_Accessor) {
    return *estimatedCaptureTime_Accessor;
  }
  throw uci::base::UCIException("Error in getEstimatedCaptureTime(): An attempt was made to get an optional field that was not enabled, call hasEstimatedCaptureTime() to determine if it is safe to call getEstimatedCaptureTime()");
}

uci::type::SegmentEstimateType& SegmentEstimateType::setEstimatedCaptureTime(uci::type::DateTimeTypeValue value) {
  estimatedCaptureTime_Accessor = value;
  return *this;
}

bool SegmentEstimateType::hasEstimatedCaptureTime() const noexcept {
  return estimatedCaptureTime_Accessor.has_value();
}

uci::type::SegmentEstimateType& SegmentEstimateType::clearEstimatedCaptureTime() noexcept {
  estimatedCaptureTime_Accessor.reset();
  return *this;
}

uci::type::DistanceTypeValue SegmentEstimateType::getEstimatedCaptureDistance() const {
  if (estimatedCaptureDistance_Accessor) {
    return *estimatedCaptureDistance_Accessor;
  }
  throw uci::base::UCIException("Error in getEstimatedCaptureDistance(): An attempt was made to get an optional field that was not enabled, call hasEstimatedCaptureDistance() to determine if it is safe to call getEstimatedCaptureDistance()");
}

uci::type::SegmentEstimateType& SegmentEstimateType::setEstimatedCaptureDistance(uci::type::DistanceTypeValue value) {
  estimatedCaptureDistance_Accessor = value;
  return *this;
}

bool SegmentEstimateType::hasEstimatedCaptureDistance() const noexcept {
  return estimatedCaptureDistance_Accessor.has_value();
}

uci::type::SegmentEstimateType& SegmentEstimateType::clearEstimatedCaptureDistance() noexcept {
  estimatedCaptureDistance_Accessor.reset();
  return *this;
}

uci::type::LoiterProgressType& SegmentEstimateType::getLoiterProgress_() const {
  if (loiterProgress_Accessor) {
    return *loiterProgress_Accessor;
  }
  throw uci::base::UCIException("Error in getLoiterProgress(): An attempt was made to get an optional field that was not enabled, call hasLoiterProgress() to determine if it is safe to call getLoiterProgress()");
}

const uci::type::LoiterProgressType& SegmentEstimateType::getLoiterProgress() const {
  return getLoiterProgress_();
}

uci::type::LoiterProgressType& SegmentEstimateType::getLoiterProgress() {
  return getLoiterProgress_();
}

uci::type::SegmentEstimateType& SegmentEstimateType::setLoiterProgress(const uci::type::LoiterProgressType& accessor) {
  enableLoiterProgress();
  if (&accessor != loiterProgress_Accessor.get()) {
    loiterProgress_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool SegmentEstimateType::hasLoiterProgress() const noexcept {
  return static_cast<bool>(loiterProgress_Accessor);
}

uci::type::LoiterProgressType& SegmentEstimateType::enableLoiterProgress(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::loiterProgressType : type};
  if ((!loiterProgress_Accessor) || (loiterProgress_Accessor->getAccessorType() != requestedType)) {
    loiterProgress_Accessor = LoiterProgressType::create(requestedType);
    if (!loiterProgress_Accessor) {
      throw uci::base::UCIException("Error in enableLoiterProgress(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *loiterProgress_Accessor;
}

uci::type::SegmentEstimateType& SegmentEstimateType::clearLoiterProgress() noexcept {
  loiterProgress_Accessor.reset();
  return *this;
}

uci::type::SegmentKinematicsType& SegmentEstimateType::getSegmentKinematics_() const {
  if (segmentKinematics_Accessor) {
    return *segmentKinematics_Accessor;
  }
  throw uci::base::UCIException("Error in getSegmentKinematics(): An attempt was made to get an optional field that was not enabled, call hasSegmentKinematics() to determine if it is safe to call getSegmentKinematics()");
}

const uci::type::SegmentKinematicsType& SegmentEstimateType::getSegmentKinematics() const {
  return getSegmentKinematics_();
}

uci::type::SegmentKinematicsType& SegmentEstimateType::getSegmentKinematics() {
  return getSegmentKinematics_();
}

uci::type::SegmentEstimateType& SegmentEstimateType::setSegmentKinematics(const uci::type::SegmentKinematicsType& accessor) {
  enableSegmentKinematics();
  if (&accessor != segmentKinematics_Accessor.get()) {
    segmentKinematics_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool SegmentEstimateType::hasSegmentKinematics() const noexcept {
  return static_cast<bool>(segmentKinematics_Accessor);
}

uci::type::SegmentKinematicsType& SegmentEstimateType::enableSegmentKinematics(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::segmentKinematicsType : type};
  if ((!segmentKinematics_Accessor) || (segmentKinematics_Accessor->getAccessorType() != requestedType)) {
    segmentKinematics_Accessor = SegmentKinematicsType::create(requestedType);
    if (!segmentKinematics_Accessor) {
      throw uci::base::UCIException("Error in enableSegmentKinematics(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *segmentKinematics_Accessor;
}

uci::type::SegmentEstimateType& SegmentEstimateType::clearSegmentKinematics() noexcept {
  segmentKinematics_Accessor.reset();
  return *this;
}

std::unique_ptr<SegmentEstimateType> SegmentEstimateType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::segmentEstimateType : type};
  return std::unique_ptr<SegmentEstimateType>(dynamic_cast<SegmentEstimateType*>(asb_uci::util::DerivedTypesCreator::create(requestedType)));
}

/**  */
namespace SegmentEstimateType_Names {

constexpr const char* Extern_Type_Name{"SegmentEstimateType"};
constexpr const char* PlanID_Name{"PlanID"};
constexpr const char* PathID_Name{"PathID"};
constexpr const char* SegmentID_Name{"SegmentID"};
constexpr const char* EstimatedCaptureTime_Name{"EstimatedCaptureTime"};
constexpr const char* EstimatedCaptureDistance_Name{"EstimatedCaptureDistance"};
constexpr const char* LoiterProgress_Name{"LoiterProgress"};
constexpr const char* SegmentKinematics_Name{"SegmentKinematics"};

} // namespace SegmentEstimateType_Names

void SegmentEstimateType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SegmentEstimateType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SegmentEstimateType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SegmentEstimateType_Names::PlanID_Name) {
      RoutePlanID_Type::deserialize(valueType.second, accessor.getPlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SegmentEstimateType_Names::PathID_Name) {
      PathID_Type::deserialize(valueType.second, accessor.getPathID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SegmentEstimateType_Names::SegmentID_Name) {
      SegmentID_Type::deserialize(valueType.second, accessor.getSegmentID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SegmentEstimateType_Names::EstimatedCaptureTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEstimatedCaptureTime(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + SegmentEstimateType_Names::EstimatedCaptureDistance_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEstimatedCaptureDistance(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + SegmentEstimateType_Names::LoiterProgress_Name) {
      LoiterProgressType::deserialize(valueType.second, accessor.enableLoiterProgress(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SegmentEstimateType_Names::SegmentKinematics_Name) {
      SegmentKinematicsType::deserialize(valueType.second, accessor.enableSegmentKinematics(), nodeName, nsPrefix);
    }
  }
}

std::string SegmentEstimateType::serialize(const uci::type::SegmentEstimateType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SegmentEstimateType_Names::Extern_Type_Name : nodeName)};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::segmentEstimateType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      asb_uci::util::SerializationHelpers::addTypeAttribute(node, SegmentEstimateType_Names::Extern_Type_Name);
    }
    RoutePlanID_Type::serialize(accessor.getPlanID(), node, SegmentEstimateType_Names::PlanID_Name);
    PathID_Type::serialize(accessor.getPathID(), node, SegmentEstimateType_Names::PathID_Name);
    SegmentID_Type::serialize(accessor.getSegmentID(), node, SegmentEstimateType_Names::SegmentID_Name);
    if (accessor.hasEstimatedCaptureTime()) {
      asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getEstimatedCaptureTime(), node, SegmentEstimateType_Names::EstimatedCaptureTime_Name);
    }
    if (accessor.hasEstimatedCaptureDistance()) {
      asb_uci::util::SerializationHelpers::serializeDouble(accessor.getEstimatedCaptureDistance(), node, SegmentEstimateType_Names::EstimatedCaptureDistance_Name);
    }
    if (accessor.hasLoiterProgress()) {
      LoiterProgressType::serialize(accessor.getLoiterProgress(), node, SegmentEstimateType_Names::LoiterProgress_Name);
    }
    if (accessor.hasSegmentKinematics()) {
      SegmentKinematicsType::serialize(accessor.getSegmentKinematics(), node, SegmentEstimateType_Names::SegmentKinematics_Name);
    }
    if (createNode) {
      propTree.add_child(generatedNodeName, node);
    }
  } else {
    asb_uci::util::DerivedTypesSerializer::serialize(accessor, propTree, nodeName, createNode);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace asb_uci

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

uci::type::SegmentEstimateType& SegmentEstimateType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SegmentEstimateType>().release());
}

uci::type::SegmentEstimateType& SegmentEstimateType::create(const uci::type::SegmentEstimateType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SegmentEstimateType> newAccessor{boost::make_unique<asb_uci::type::SegmentEstimateType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SegmentEstimateType::destroy(uci::type::SegmentEstimateType& accessor) {
  delete dynamic_cast<asb_uci::type::SegmentEstimateType*>(&accessor);
}

} // namespace type

} // namespace uci

