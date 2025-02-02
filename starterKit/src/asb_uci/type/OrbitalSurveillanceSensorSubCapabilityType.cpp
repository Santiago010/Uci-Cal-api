/** @file OrbitalSurveillanceSensorSubCapabilityType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:13 PM
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

#include "../../../include/asb_uci/type/OrbitalSurveillanceSensorSubCapabilityType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/SensorFunctionalityType.h"
#include "../../../include/asb_uci/type/SensorTrackingAltitudesEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitalSurveillanceSensorSubCapabilityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SensorFunctionalityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SensorTrackingAltitudesEnum.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OrbitalSurveillanceSensorSubCapabilityType::OrbitalSurveillanceSensorSubCapabilityType()
  : trackingAltitude_Accessor{boost::make_unique<SensorTrackingAltitudesEnum>()},
    functionalCapability_Accessor{boost::make_unique<SensorFunctionalityType>()} {
}

OrbitalSurveillanceSensorSubCapabilityType::~OrbitalSurveillanceSensorSubCapabilityType() = default;

void OrbitalSurveillanceSensorSubCapabilityType::copy(const uci::type::OrbitalSurveillanceSensorSubCapabilityType& accessor) {
  copyImpl(accessor, false);
}

void OrbitalSurveillanceSensorSubCapabilityType::copyImpl(const uci::type::OrbitalSurveillanceSensorSubCapabilityType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const OrbitalSurveillanceSensorSubCapabilityType&>(accessor);
    setTrackingAltitude(*(accessorImpl.trackingAltitude_Accessor));
    setFunctionalCapability(*(accessorImpl.functionalCapability_Accessor));
  }
}

void OrbitalSurveillanceSensorSubCapabilityType::reset() noexcept {
  trackingAltitude_Accessor->reset();
  functionalCapability_Accessor->reset();
}

const uci::type::SensorTrackingAltitudesEnum& OrbitalSurveillanceSensorSubCapabilityType::getTrackingAltitude() const {
  return *trackingAltitude_Accessor;
}

uci::type::SensorTrackingAltitudesEnum& OrbitalSurveillanceSensorSubCapabilityType::getTrackingAltitude() {
  return *trackingAltitude_Accessor;
}

uci::type::OrbitalSurveillanceSensorSubCapabilityType& OrbitalSurveillanceSensorSubCapabilityType::setTrackingAltitude(const uci::type::SensorTrackingAltitudesEnum& accessor) {
  if (&accessor != trackingAltitude_Accessor.get()) {
    trackingAltitude_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::OrbitalSurveillanceSensorSubCapabilityType& OrbitalSurveillanceSensorSubCapabilityType::setTrackingAltitude(uci::type::SensorTrackingAltitudesEnum::EnumerationItem value) {
  trackingAltitude_Accessor->setValue(value);
  return *this;
}


const uci::type::SensorFunctionalityType& OrbitalSurveillanceSensorSubCapabilityType::getFunctionalCapability() const {
  return *functionalCapability_Accessor;
}

uci::type::SensorFunctionalityType& OrbitalSurveillanceSensorSubCapabilityType::getFunctionalCapability() {
  return *functionalCapability_Accessor;
}

uci::type::OrbitalSurveillanceSensorSubCapabilityType& OrbitalSurveillanceSensorSubCapabilityType::setFunctionalCapability(const uci::type::SensorFunctionalityType& accessor) {
  if (&accessor != functionalCapability_Accessor.get()) {
    functionalCapability_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<OrbitalSurveillanceSensorSubCapabilityType> OrbitalSurveillanceSensorSubCapabilityType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitalSurveillanceSensorSubCapabilityType : type};
  return (requestedType == uci::type::accessorType::orbitalSurveillanceSensorSubCapabilityType) ? boost::make_unique<OrbitalSurveillanceSensorSubCapabilityType>() : nullptr;
}

/**  */
namespace OrbitalSurveillanceSensorSubCapabilityType_Names {

constexpr const char* Extern_Type_Name{"OrbitalSurveillanceSensorSubCapabilityType"};
constexpr const char* TrackingAltitude_Name{"TrackingAltitude"};
constexpr const char* FunctionalCapability_Name{"FunctionalCapability"};

} // namespace OrbitalSurveillanceSensorSubCapabilityType_Names

void OrbitalSurveillanceSensorSubCapabilityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitalSurveillanceSensorSubCapabilityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitalSurveillanceSensorSubCapabilityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitalSurveillanceSensorSubCapabilityType_Names::TrackingAltitude_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getTrackingAltitude().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + OrbitalSurveillanceSensorSubCapabilityType_Names::FunctionalCapability_Name) {
      SensorFunctionalityType::deserialize(valueType.second, accessor.getFunctionalCapability(), nodeName, nsPrefix);
    }
  }
}

std::string OrbitalSurveillanceSensorSubCapabilityType::serialize(const uci::type::OrbitalSurveillanceSensorSubCapabilityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? OrbitalSurveillanceSensorSubCapabilityType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitalSurveillanceSensorSubCapabilityType_Names::Extern_Type_Name);
  }
  SensorTrackingAltitudesEnum::serialize(accessor.getTrackingAltitude(), node, OrbitalSurveillanceSensorSubCapabilityType_Names::TrackingAltitude_Name, false);
  SensorFunctionalityType::serialize(accessor.getFunctionalCapability(), node, OrbitalSurveillanceSensorSubCapabilityType_Names::FunctionalCapability_Name);
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

uci::type::OrbitalSurveillanceSensorSubCapabilityType& OrbitalSurveillanceSensorSubCapabilityType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OrbitalSurveillanceSensorSubCapabilityType>().release());
}

uci::type::OrbitalSurveillanceSensorSubCapabilityType& OrbitalSurveillanceSensorSubCapabilityType::create(const uci::type::OrbitalSurveillanceSensorSubCapabilityType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OrbitalSurveillanceSensorSubCapabilityType> newAccessor{boost::make_unique<asb_uci::type::OrbitalSurveillanceSensorSubCapabilityType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OrbitalSurveillanceSensorSubCapabilityType::destroy(uci::type::OrbitalSurveillanceSensorSubCapabilityType& accessor) {
  delete dynamic_cast<asb_uci::type::OrbitalSurveillanceSensorSubCapabilityType*>(&accessor);
}

} // namespace type

} // namespace uci

