/** @file RadarAltimeterReportMDT.cpp
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

#include "../../../include/asb_uci/type/RadarAltimeterReportMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ActivityID_Type.h"
#include "../../../include/asb_uci/type/CapabilityID_Type.h"
#include "../../../include/asb_uci/type/RadarAltimeterReportID_Type.h"
#include "../../../include/asb_uci/type/RadarAltimeterReportMeasurementType.h"
#include "../../../include/asb_uci/type/SignalNavDataType.h"
#include "../../../include/asb_uci/type/SystemID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActivityID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RadarAltimeterReportID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RadarAltimeterReportMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RadarAltimeterReportMeasurementType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SignalNavDataType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

RadarAltimeterReportMDT::RadarAltimeterReportMDT()
  : radarAltimeterReportID_Accessor{boost::make_unique<RadarAltimeterReportID_Type>()},
    observingSystemID_Accessor{boost::make_unique<SystemID_Type>()},
    capabilityID_Accessor{boost::make_unique<CapabilityID_Type>()},
    collectorKinematics_Accessor{boost::make_unique<SignalNavDataType>()},
    measurement_Accessor{boost::make_unique<RadarAltimeterReportMeasurementType>()} {
}

RadarAltimeterReportMDT::~RadarAltimeterReportMDT() = default;

void RadarAltimeterReportMDT::copy(const uci::type::RadarAltimeterReportMDT& accessor) {
  copyImpl(accessor, false);
}

void RadarAltimeterReportMDT::copyImpl(const uci::type::RadarAltimeterReportMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const RadarAltimeterReportMDT&>(accessor);
    setRadarAltimeterReportID(*(accessorImpl.radarAltimeterReportID_Accessor));
    setObservingSystemID(*(accessorImpl.observingSystemID_Accessor));
    setCapabilityID(*(accessorImpl.capabilityID_Accessor));
    if (accessorImpl.activityID_Accessor) {
      setActivityID(*(accessorImpl.activityID_Accessor));
    } else {
      activityID_Accessor.reset();
    }
    setCollectorKinematics(*(accessorImpl.collectorKinematics_Accessor));
    setMeasurement(*(accessorImpl.measurement_Accessor));
  }
}

void RadarAltimeterReportMDT::reset() noexcept {
  radarAltimeterReportID_Accessor->reset();
  observingSystemID_Accessor->reset();
  capabilityID_Accessor->reset();
  activityID_Accessor.reset();
  collectorKinematics_Accessor->reset();
  measurement_Accessor->reset();
}

const uci::type::RadarAltimeterReportID_Type& RadarAltimeterReportMDT::getRadarAltimeterReportID() const {
  return *radarAltimeterReportID_Accessor;
}

uci::type::RadarAltimeterReportID_Type& RadarAltimeterReportMDT::getRadarAltimeterReportID() {
  return *radarAltimeterReportID_Accessor;
}

uci::type::RadarAltimeterReportMDT& RadarAltimeterReportMDT::setRadarAltimeterReportID(const uci::type::RadarAltimeterReportID_Type& accessor) {
  if (&accessor != radarAltimeterReportID_Accessor.get()) {
    radarAltimeterReportID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SystemID_Type& RadarAltimeterReportMDT::getObservingSystemID() const {
  return *observingSystemID_Accessor;
}

uci::type::SystemID_Type& RadarAltimeterReportMDT::getObservingSystemID() {
  return *observingSystemID_Accessor;
}

uci::type::RadarAltimeterReportMDT& RadarAltimeterReportMDT::setObservingSystemID(const uci::type::SystemID_Type& accessor) {
  if (&accessor != observingSystemID_Accessor.get()) {
    observingSystemID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::CapabilityID_Type& RadarAltimeterReportMDT::getCapabilityID() const {
  return *capabilityID_Accessor;
}

uci::type::CapabilityID_Type& RadarAltimeterReportMDT::getCapabilityID() {
  return *capabilityID_Accessor;
}

uci::type::RadarAltimeterReportMDT& RadarAltimeterReportMDT::setCapabilityID(const uci::type::CapabilityID_Type& accessor) {
  if (&accessor != capabilityID_Accessor.get()) {
    capabilityID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ActivityID_Type& RadarAltimeterReportMDT::getActivityID_() const {
  if (activityID_Accessor) {
    return *activityID_Accessor;
  }
  throw uci::base::UCIException("Error in getActivityID(): An attempt was made to get an optional field that was not enabled, call hasActivityID() to determine if it is safe to call getActivityID()");
}

const uci::type::ActivityID_Type& RadarAltimeterReportMDT::getActivityID() const {
  return getActivityID_();
}

uci::type::ActivityID_Type& RadarAltimeterReportMDT::getActivityID() {
  return getActivityID_();
}

uci::type::RadarAltimeterReportMDT& RadarAltimeterReportMDT::setActivityID(const uci::type::ActivityID_Type& accessor) {
  enableActivityID();
  if (&accessor != activityID_Accessor.get()) {
    activityID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RadarAltimeterReportMDT::hasActivityID() const noexcept {
  return static_cast<bool>(activityID_Accessor);
}

uci::type::ActivityID_Type& RadarAltimeterReportMDT::enableActivityID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::activityID_Type : type};
  if ((!activityID_Accessor) || (activityID_Accessor->getAccessorType() != requestedType)) {
    activityID_Accessor = ActivityID_Type::create(requestedType);
    if (!activityID_Accessor) {
      throw uci::base::UCIException("Error in enableActivityID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *activityID_Accessor;
}

uci::type::RadarAltimeterReportMDT& RadarAltimeterReportMDT::clearActivityID() noexcept {
  activityID_Accessor.reset();
  return *this;
}

const uci::type::SignalNavDataType& RadarAltimeterReportMDT::getCollectorKinematics() const {
  return *collectorKinematics_Accessor;
}

uci::type::SignalNavDataType& RadarAltimeterReportMDT::getCollectorKinematics() {
  return *collectorKinematics_Accessor;
}

uci::type::RadarAltimeterReportMDT& RadarAltimeterReportMDT::setCollectorKinematics(const uci::type::SignalNavDataType& accessor) {
  if (&accessor != collectorKinematics_Accessor.get()) {
    collectorKinematics_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::RadarAltimeterReportMeasurementType& RadarAltimeterReportMDT::getMeasurement() const {
  return *measurement_Accessor;
}

uci::type::RadarAltimeterReportMeasurementType& RadarAltimeterReportMDT::getMeasurement() {
  return *measurement_Accessor;
}

uci::type::RadarAltimeterReportMDT& RadarAltimeterReportMDT::setMeasurement(const uci::type::RadarAltimeterReportMeasurementType& accessor) {
  if (&accessor != measurement_Accessor.get()) {
    measurement_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<RadarAltimeterReportMDT> RadarAltimeterReportMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::radarAltimeterReportMDT : type};
  return (requestedType == uci::type::accessorType::radarAltimeterReportMDT) ? boost::make_unique<RadarAltimeterReportMDT>() : nullptr;
}

/**  */
namespace RadarAltimeterReportMDT_Names {

constexpr const char* Extern_Type_Name{"RadarAltimeterReportMDT"};
constexpr const char* RadarAltimeterReportID_Name{"RadarAltimeterReportID"};
constexpr const char* ObservingSystemID_Name{"ObservingSystemID"};
constexpr const char* CapabilityID_Name{"CapabilityID"};
constexpr const char* ActivityID_Name{"ActivityID"};
constexpr const char* CollectorKinematics_Name{"CollectorKinematics"};
constexpr const char* Measurement_Name{"Measurement"};

} // namespace RadarAltimeterReportMDT_Names

void RadarAltimeterReportMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::RadarAltimeterReportMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RadarAltimeterReportMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RadarAltimeterReportMDT_Names::RadarAltimeterReportID_Name) {
      RadarAltimeterReportID_Type::deserialize(valueType.second, accessor.getRadarAltimeterReportID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RadarAltimeterReportMDT_Names::ObservingSystemID_Name) {
      SystemID_Type::deserialize(valueType.second, accessor.getObservingSystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RadarAltimeterReportMDT_Names::CapabilityID_Name) {
      CapabilityID_Type::deserialize(valueType.second, accessor.getCapabilityID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RadarAltimeterReportMDT_Names::ActivityID_Name) {
      ActivityID_Type::deserialize(valueType.second, accessor.enableActivityID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RadarAltimeterReportMDT_Names::CollectorKinematics_Name) {
      SignalNavDataType::deserialize(valueType.second, accessor.getCollectorKinematics(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RadarAltimeterReportMDT_Names::Measurement_Name) {
      RadarAltimeterReportMeasurementType::deserialize(valueType.second, accessor.getMeasurement(), nodeName, nsPrefix);
    }
  }
}

std::string RadarAltimeterReportMDT::serialize(const uci::type::RadarAltimeterReportMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? RadarAltimeterReportMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, RadarAltimeterReportMDT_Names::Extern_Type_Name);
  }
  RadarAltimeterReportID_Type::serialize(accessor.getRadarAltimeterReportID(), node, RadarAltimeterReportMDT_Names::RadarAltimeterReportID_Name);
  SystemID_Type::serialize(accessor.getObservingSystemID(), node, RadarAltimeterReportMDT_Names::ObservingSystemID_Name);
  CapabilityID_Type::serialize(accessor.getCapabilityID(), node, RadarAltimeterReportMDT_Names::CapabilityID_Name);
  if (accessor.hasActivityID()) {
    ActivityID_Type::serialize(accessor.getActivityID(), node, RadarAltimeterReportMDT_Names::ActivityID_Name);
  }
  SignalNavDataType::serialize(accessor.getCollectorKinematics(), node, RadarAltimeterReportMDT_Names::CollectorKinematics_Name);
  RadarAltimeterReportMeasurementType::serialize(accessor.getMeasurement(), node, RadarAltimeterReportMDT_Names::Measurement_Name);
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

uci::type::RadarAltimeterReportMDT& RadarAltimeterReportMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::RadarAltimeterReportMDT>().release());
}

uci::type::RadarAltimeterReportMDT& RadarAltimeterReportMDT::create(const uci::type::RadarAltimeterReportMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::RadarAltimeterReportMDT> newAccessor{boost::make_unique<asb_uci::type::RadarAltimeterReportMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void RadarAltimeterReportMDT::destroy(uci::type::RadarAltimeterReportMDT& accessor) {
  delete dynamic_cast<asb_uci::type::RadarAltimeterReportMDT*>(&accessor);
}

} // namespace type

} // namespace uci

