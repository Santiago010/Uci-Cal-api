/** @file SensorKinematicsType.cpp
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

#include "../../../include/asb_uci/type/SensorKinematicsType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/BoresightVelocityType.h"
#include "../../../include/asb_uci/type/ComponentID_Type.h"
#include "../../../include/asb_uci/type/OrientationType.h"
#include "../../../include/asb_uci/type/VelocityVelocityCovarianceCartesianType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/BoresightVelocityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ComponentID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrientationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SensorKinematicsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VelocityVelocityCovarianceCartesianType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SensorKinematicsType::SensorKinematicsType()
  : componentID_Accessor{boost::make_unique<ComponentID_Type>()} {
}

SensorKinematicsType::~SensorKinematicsType() = default;

void SensorKinematicsType::copy(const uci::type::SensorKinematicsType& accessor) {
  copyImpl(accessor, false);
}

void SensorKinematicsType::copyImpl(const uci::type::SensorKinematicsType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const SensorKinematicsType&>(accessor);
    setComponentID(*(accessorImpl.componentID_Accessor));
    if (accessorImpl.orientation_Accessor) {
      setOrientation(*(accessorImpl.orientation_Accessor));
    } else {
      orientation_Accessor.reset();
    }
    if (accessorImpl.orientationSigma_Accessor) {
      setOrientationSigma(*(accessorImpl.orientationSigma_Accessor));
    } else {
      orientationSigma_Accessor.reset();
    }
    if (accessorImpl.sensorBoresightVelocity_Accessor) {
      setSensorBoresightVelocity(*(accessorImpl.sensorBoresightVelocity_Accessor));
    } else {
      sensorBoresightVelocity_Accessor.reset();
    }
    if (accessorImpl.sensorBoresightCovariance_Accessor) {
      setSensorBoresightCovariance(*(accessorImpl.sensorBoresightCovariance_Accessor));
    } else {
      sensorBoresightCovariance_Accessor.reset();
    }
  }
}

void SensorKinematicsType::reset() noexcept {
  componentID_Accessor->reset();
  orientation_Accessor.reset();
  orientationSigma_Accessor.reset();
  sensorBoresightVelocity_Accessor.reset();
  sensorBoresightCovariance_Accessor.reset();
}

const uci::type::ComponentID_Type& SensorKinematicsType::getComponentID() const {
  return *componentID_Accessor;
}

uci::type::ComponentID_Type& SensorKinematicsType::getComponentID() {
  return *componentID_Accessor;
}

uci::type::SensorKinematicsType& SensorKinematicsType::setComponentID(const uci::type::ComponentID_Type& accessor) {
  if (&accessor != componentID_Accessor.get()) {
    componentID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::OrientationType& SensorKinematicsType::getOrientation_() const {
  if (orientation_Accessor) {
    return *orientation_Accessor;
  }
  throw uci::base::UCIException("Error in getOrientation(): An attempt was made to get an optional field that was not enabled, call hasOrientation() to determine if it is safe to call getOrientation()");
}

const uci::type::OrientationType& SensorKinematicsType::getOrientation() const {
  return getOrientation_();
}

uci::type::OrientationType& SensorKinematicsType::getOrientation() {
  return getOrientation_();
}

uci::type::SensorKinematicsType& SensorKinematicsType::setOrientation(const uci::type::OrientationType& accessor) {
  enableOrientation();
  if (&accessor != orientation_Accessor.get()) {
    orientation_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool SensorKinematicsType::hasOrientation() const noexcept {
  return static_cast<bool>(orientation_Accessor);
}

uci::type::OrientationType& SensorKinematicsType::enableOrientation(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orientationType : type};
  if ((!orientation_Accessor) || (orientation_Accessor->getAccessorType() != requestedType)) {
    orientation_Accessor = OrientationType::create(requestedType);
    if (!orientation_Accessor) {
      throw uci::base::UCIException("Error in enableOrientation(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *orientation_Accessor;
}

uci::type::SensorKinematicsType& SensorKinematicsType::clearOrientation() noexcept {
  orientation_Accessor.reset();
  return *this;
}

uci::type::OrientationType& SensorKinematicsType::getOrientationSigma_() const {
  if (orientationSigma_Accessor) {
    return *orientationSigma_Accessor;
  }
  throw uci::base::UCIException("Error in getOrientationSigma(): An attempt was made to get an optional field that was not enabled, call hasOrientationSigma() to determine if it is safe to call getOrientationSigma()");
}

const uci::type::OrientationType& SensorKinematicsType::getOrientationSigma() const {
  return getOrientationSigma_();
}

uci::type::OrientationType& SensorKinematicsType::getOrientationSigma() {
  return getOrientationSigma_();
}

uci::type::SensorKinematicsType& SensorKinematicsType::setOrientationSigma(const uci::type::OrientationType& accessor) {
  enableOrientationSigma();
  if (&accessor != orientationSigma_Accessor.get()) {
    orientationSigma_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool SensorKinematicsType::hasOrientationSigma() const noexcept {
  return static_cast<bool>(orientationSigma_Accessor);
}

uci::type::OrientationType& SensorKinematicsType::enableOrientationSigma(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orientationType : type};
  if ((!orientationSigma_Accessor) || (orientationSigma_Accessor->getAccessorType() != requestedType)) {
    orientationSigma_Accessor = OrientationType::create(requestedType);
    if (!orientationSigma_Accessor) {
      throw uci::base::UCIException("Error in enableOrientationSigma(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *orientationSigma_Accessor;
}

uci::type::SensorKinematicsType& SensorKinematicsType::clearOrientationSigma() noexcept {
  orientationSigma_Accessor.reset();
  return *this;
}

uci::type::BoresightVelocityType& SensorKinematicsType::getSensorBoresightVelocity_() const {
  if (sensorBoresightVelocity_Accessor) {
    return *sensorBoresightVelocity_Accessor;
  }
  throw uci::base::UCIException("Error in getSensorBoresightVelocity(): An attempt was made to get an optional field that was not enabled, call hasSensorBoresightVelocity() to determine if it is safe to call getSensorBoresightVelocity()");
}

const uci::type::BoresightVelocityType& SensorKinematicsType::getSensorBoresightVelocity() const {
  return getSensorBoresightVelocity_();
}

uci::type::BoresightVelocityType& SensorKinematicsType::getSensorBoresightVelocity() {
  return getSensorBoresightVelocity_();
}

uci::type::SensorKinematicsType& SensorKinematicsType::setSensorBoresightVelocity(const uci::type::BoresightVelocityType& accessor) {
  enableSensorBoresightVelocity();
  if (&accessor != sensorBoresightVelocity_Accessor.get()) {
    sensorBoresightVelocity_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool SensorKinematicsType::hasSensorBoresightVelocity() const noexcept {
  return static_cast<bool>(sensorBoresightVelocity_Accessor);
}

uci::type::BoresightVelocityType& SensorKinematicsType::enableSensorBoresightVelocity(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::boresightVelocityType : type};
  if ((!sensorBoresightVelocity_Accessor) || (sensorBoresightVelocity_Accessor->getAccessorType() != requestedType)) {
    sensorBoresightVelocity_Accessor = BoresightVelocityType::create(requestedType);
    if (!sensorBoresightVelocity_Accessor) {
      throw uci::base::UCIException("Error in enableSensorBoresightVelocity(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *sensorBoresightVelocity_Accessor;
}

uci::type::SensorKinematicsType& SensorKinematicsType::clearSensorBoresightVelocity() noexcept {
  sensorBoresightVelocity_Accessor.reset();
  return *this;
}

uci::type::VelocityVelocityCovarianceCartesianType& SensorKinematicsType::getSensorBoresightCovariance_() const {
  if (sensorBoresightCovariance_Accessor) {
    return *sensorBoresightCovariance_Accessor;
  }
  throw uci::base::UCIException("Error in getSensorBoresightCovariance(): An attempt was made to get an optional field that was not enabled, call hasSensorBoresightCovariance() to determine if it is safe to call getSensorBoresightCovariance()");
}

const uci::type::VelocityVelocityCovarianceCartesianType& SensorKinematicsType::getSensorBoresightCovariance() const {
  return getSensorBoresightCovariance_();
}

uci::type::VelocityVelocityCovarianceCartesianType& SensorKinematicsType::getSensorBoresightCovariance() {
  return getSensorBoresightCovariance_();
}

uci::type::SensorKinematicsType& SensorKinematicsType::setSensorBoresightCovariance(const uci::type::VelocityVelocityCovarianceCartesianType& accessor) {
  enableSensorBoresightCovariance();
  if (&accessor != sensorBoresightCovariance_Accessor.get()) {
    sensorBoresightCovariance_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool SensorKinematicsType::hasSensorBoresightCovariance() const noexcept {
  return static_cast<bool>(sensorBoresightCovariance_Accessor);
}

uci::type::VelocityVelocityCovarianceCartesianType& SensorKinematicsType::enableSensorBoresightCovariance(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::velocityVelocityCovarianceCartesianType : type};
  if ((!sensorBoresightCovariance_Accessor) || (sensorBoresightCovariance_Accessor->getAccessorType() != requestedType)) {
    sensorBoresightCovariance_Accessor = VelocityVelocityCovarianceCartesianType::create(requestedType);
    if (!sensorBoresightCovariance_Accessor) {
      throw uci::base::UCIException("Error in enableSensorBoresightCovariance(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *sensorBoresightCovariance_Accessor;
}

uci::type::SensorKinematicsType& SensorKinematicsType::clearSensorBoresightCovariance() noexcept {
  sensorBoresightCovariance_Accessor.reset();
  return *this;
}

std::unique_ptr<SensorKinematicsType> SensorKinematicsType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::sensorKinematicsType : type};
  return (requestedType == uci::type::accessorType::sensorKinematicsType) ? boost::make_unique<SensorKinematicsType>() : nullptr;
}

/**  */
namespace SensorKinematicsType_Names {

constexpr const char* Extern_Type_Name{"SensorKinematicsType"};
constexpr const char* ComponentID_Name{"ComponentID"};
constexpr const char* Orientation_Name{"Orientation"};
constexpr const char* OrientationSigma_Name{"OrientationSigma"};
constexpr const char* SensorBoresightVelocity_Name{"SensorBoresightVelocity"};
constexpr const char* SensorBoresightCovariance_Name{"SensorBoresightCovariance"};

} // namespace SensorKinematicsType_Names

void SensorKinematicsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SensorKinematicsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SensorKinematicsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SensorKinematicsType_Names::ComponentID_Name) {
      ComponentID_Type::deserialize(valueType.second, accessor.getComponentID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SensorKinematicsType_Names::Orientation_Name) {
      OrientationType::deserialize(valueType.second, accessor.enableOrientation(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SensorKinematicsType_Names::OrientationSigma_Name) {
      OrientationType::deserialize(valueType.second, accessor.enableOrientationSigma(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SensorKinematicsType_Names::SensorBoresightVelocity_Name) {
      BoresightVelocityType::deserialize(valueType.second, accessor.enableSensorBoresightVelocity(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SensorKinematicsType_Names::SensorBoresightCovariance_Name) {
      VelocityVelocityCovarianceCartesianType::deserialize(valueType.second, accessor.enableSensorBoresightCovariance(), nodeName, nsPrefix);
    }
  }
}

std::string SensorKinematicsType::serialize(const uci::type::SensorKinematicsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SensorKinematicsType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SensorKinematicsType_Names::Extern_Type_Name);
  }
  ComponentID_Type::serialize(accessor.getComponentID(), node, SensorKinematicsType_Names::ComponentID_Name);
  if (accessor.hasOrientation()) {
    OrientationType::serialize(accessor.getOrientation(), node, SensorKinematicsType_Names::Orientation_Name);
  }
  if (accessor.hasOrientationSigma()) {
    OrientationType::serialize(accessor.getOrientationSigma(), node, SensorKinematicsType_Names::OrientationSigma_Name);
  }
  if (accessor.hasSensorBoresightVelocity()) {
    BoresightVelocityType::serialize(accessor.getSensorBoresightVelocity(), node, SensorKinematicsType_Names::SensorBoresightVelocity_Name);
  }
  if (accessor.hasSensorBoresightCovariance()) {
    VelocityVelocityCovarianceCartesianType::serialize(accessor.getSensorBoresightCovariance(), node, SensorKinematicsType_Names::SensorBoresightCovariance_Name);
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

uci::type::SensorKinematicsType& SensorKinematicsType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SensorKinematicsType>().release());
}

uci::type::SensorKinematicsType& SensorKinematicsType::create(const uci::type::SensorKinematicsType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SensorKinematicsType> newAccessor{boost::make_unique<asb_uci::type::SensorKinematicsType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SensorKinematicsType::destroy(uci::type::SensorKinematicsType& accessor) {
  delete dynamic_cast<asb_uci::type::SensorKinematicsType*>(&accessor);
}

} // namespace type

} // namespace uci

