/** @file OpticalCollectionConstraintsType.cpp
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

#include "../../../include/asb_uci/type/OpticalCollectionConstraintsType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/AngleHalfPairType.h"
#include "../../../include/asb_uci/type/AnglePairType.h"
#include "../../../include/asb_uci/type/CollectionConstraintsType.h"
#include "../../../include/asb_uci/type/GimbalOrientationPairType.h"
#include "../../../include/asb_uci/util/DerivedTypesCopier.h"
#include "../../../include/asb_uci/util/DerivedTypesCreator.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/DerivedTypesSerializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AngleHalfPairType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AnglePairType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/GimbalOrientationPairType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OpticalCollectionConstraintsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SpeedType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OpticalCollectionConstraintsType::OpticalCollectionConstraintsType() = default;

OpticalCollectionConstraintsType::~OpticalCollectionConstraintsType() = default;

void OpticalCollectionConstraintsType::copy(const uci::type::OpticalCollectionConstraintsType& accessor) {
  copyImpl(accessor, false);
}

void OpticalCollectionConstraintsType::copyImpl(const uci::type::OpticalCollectionConstraintsType& accessor, const bool checkIfDerivation) {
  if (&accessor != this) {
    if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::opticalCollectionConstraintsType)) {
      CollectionConstraintsType::copyImpl(accessor, false);
      const auto& accessorImpl = dynamic_cast<const OpticalCollectionConstraintsType&>(accessor);
      if (accessorImpl.sunElevAngles_Accessor) {
        setSunElevAngles(*(accessorImpl.sunElevAngles_Accessor));
      } else {
        sunElevAngles_Accessor.reset();
      }
      if (accessorImpl.sunAzimuthAngles_Accessor) {
        setSunAzimuthAngles(*(accessorImpl.sunAzimuthAngles_Accessor));
      } else {
        sunAzimuthAngles_Accessor.reset();
      }
      if (accessorImpl.hasSweepSpeed()) {
        setSweepSpeed(accessorImpl.getSweepSpeed());
      } else {
        clearSweepSpeed();
      }
      if (accessorImpl.gimbalOrientation_Accessor) {
        setGimbalOrientation(*(accessorImpl.gimbalOrientation_Accessor));
      } else {
        gimbalOrientation_Accessor.reset();
      }
    } else {
      asb_uci::util::DerivedTypesCopier::copy(accessor, *this);
    }
  }
}

void OpticalCollectionConstraintsType::reset() noexcept {
  CollectionConstraintsType::reset();
  sunElevAngles_Accessor.reset();
  sunAzimuthAngles_Accessor.reset();
  clearSweepSpeed();
  gimbalOrientation_Accessor.reset();
}

uci::type::AngleHalfPairType& OpticalCollectionConstraintsType::getSunElevAngles_() const {
  if (sunElevAngles_Accessor) {
    return *sunElevAngles_Accessor;
  }
  throw uci::base::UCIException("Error in getSunElevAngles(): An attempt was made to get an optional field that was not enabled, call hasSunElevAngles() to determine if it is safe to call getSunElevAngles()");
}

const uci::type::AngleHalfPairType& OpticalCollectionConstraintsType::getSunElevAngles() const {
  return getSunElevAngles_();
}

uci::type::AngleHalfPairType& OpticalCollectionConstraintsType::getSunElevAngles() {
  return getSunElevAngles_();
}

uci::type::OpticalCollectionConstraintsType& OpticalCollectionConstraintsType::setSunElevAngles(const uci::type::AngleHalfPairType& accessor) {
  enableSunElevAngles();
  if (&accessor != sunElevAngles_Accessor.get()) {
    sunElevAngles_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OpticalCollectionConstraintsType::hasSunElevAngles() const noexcept {
  return static_cast<bool>(sunElevAngles_Accessor);
}

uci::type::AngleHalfPairType& OpticalCollectionConstraintsType::enableSunElevAngles(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::angleHalfPairType : type};
  if ((!sunElevAngles_Accessor) || (sunElevAngles_Accessor->getAccessorType() != requestedType)) {
    sunElevAngles_Accessor = AngleHalfPairType::create(requestedType);
    if (!sunElevAngles_Accessor) {
      throw uci::base::UCIException("Error in enableSunElevAngles(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *sunElevAngles_Accessor;
}

uci::type::OpticalCollectionConstraintsType& OpticalCollectionConstraintsType::clearSunElevAngles() noexcept {
  sunElevAngles_Accessor.reset();
  return *this;
}

uci::type::AnglePairType& OpticalCollectionConstraintsType::getSunAzimuthAngles_() const {
  if (sunAzimuthAngles_Accessor) {
    return *sunAzimuthAngles_Accessor;
  }
  throw uci::base::UCIException("Error in getSunAzimuthAngles(): An attempt was made to get an optional field that was not enabled, call hasSunAzimuthAngles() to determine if it is safe to call getSunAzimuthAngles()");
}

const uci::type::AnglePairType& OpticalCollectionConstraintsType::getSunAzimuthAngles() const {
  return getSunAzimuthAngles_();
}

uci::type::AnglePairType& OpticalCollectionConstraintsType::getSunAzimuthAngles() {
  return getSunAzimuthAngles_();
}

uci::type::OpticalCollectionConstraintsType& OpticalCollectionConstraintsType::setSunAzimuthAngles(const uci::type::AnglePairType& accessor) {
  enableSunAzimuthAngles(accessor.getAccessorType());
  if (&accessor != sunAzimuthAngles_Accessor.get()) {
    sunAzimuthAngles_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool OpticalCollectionConstraintsType::hasSunAzimuthAngles() const noexcept {
  return static_cast<bool>(sunAzimuthAngles_Accessor);
}

uci::type::AnglePairType& OpticalCollectionConstraintsType::enableSunAzimuthAngles(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::anglePairType : type};
  if ((!sunAzimuthAngles_Accessor) || (sunAzimuthAngles_Accessor->getAccessorType() != requestedType)) {
    sunAzimuthAngles_Accessor = AnglePairType::create(requestedType);
    if (!sunAzimuthAngles_Accessor) {
      throw uci::base::UCIException("Error in enableSunAzimuthAngles(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *sunAzimuthAngles_Accessor;
}

uci::type::OpticalCollectionConstraintsType& OpticalCollectionConstraintsType::clearSunAzimuthAngles() noexcept {
  sunAzimuthAngles_Accessor.reset();
  return *this;
}

uci::type::SpeedTypeValue OpticalCollectionConstraintsType::getSweepSpeed() const {
  if (sweepSpeed_Accessor) {
    return *sweepSpeed_Accessor;
  }
  throw uci::base::UCIException("Error in getSweepSpeed(): An attempt was made to get an optional field that was not enabled, call hasSweepSpeed() to determine if it is safe to call getSweepSpeed()");
}

uci::type::OpticalCollectionConstraintsType& OpticalCollectionConstraintsType::setSweepSpeed(uci::type::SpeedTypeValue value) {
  sweepSpeed_Accessor = value;
  return *this;
}

bool OpticalCollectionConstraintsType::hasSweepSpeed() const noexcept {
  return sweepSpeed_Accessor.has_value();
}

uci::type::OpticalCollectionConstraintsType& OpticalCollectionConstraintsType::clearSweepSpeed() noexcept {
  sweepSpeed_Accessor.reset();
  return *this;
}

uci::type::GimbalOrientationPairType& OpticalCollectionConstraintsType::getGimbalOrientation_() const {
  if (gimbalOrientation_Accessor) {
    return *gimbalOrientation_Accessor;
  }
  throw uci::base::UCIException("Error in getGimbalOrientation(): An attempt was made to get an optional field that was not enabled, call hasGimbalOrientation() to determine if it is safe to call getGimbalOrientation()");
}

const uci::type::GimbalOrientationPairType& OpticalCollectionConstraintsType::getGimbalOrientation() const {
  return getGimbalOrientation_();
}

uci::type::GimbalOrientationPairType& OpticalCollectionConstraintsType::getGimbalOrientation() {
  return getGimbalOrientation_();
}

uci::type::OpticalCollectionConstraintsType& OpticalCollectionConstraintsType::setGimbalOrientation(const uci::type::GimbalOrientationPairType& accessor) {
  enableGimbalOrientation();
  if (&accessor != gimbalOrientation_Accessor.get()) {
    gimbalOrientation_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OpticalCollectionConstraintsType::hasGimbalOrientation() const noexcept {
  return static_cast<bool>(gimbalOrientation_Accessor);
}

uci::type::GimbalOrientationPairType& OpticalCollectionConstraintsType::enableGimbalOrientation(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::gimbalOrientationPairType : type};
  if ((!gimbalOrientation_Accessor) || (gimbalOrientation_Accessor->getAccessorType() != requestedType)) {
    gimbalOrientation_Accessor = GimbalOrientationPairType::create(requestedType);
    if (!gimbalOrientation_Accessor) {
      throw uci::base::UCIException("Error in enableGimbalOrientation(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *gimbalOrientation_Accessor;
}

uci::type::OpticalCollectionConstraintsType& OpticalCollectionConstraintsType::clearGimbalOrientation() noexcept {
  gimbalOrientation_Accessor.reset();
  return *this;
}

std::unique_ptr<OpticalCollectionConstraintsType> OpticalCollectionConstraintsType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::opticalCollectionConstraintsType : type};
  return std::unique_ptr<OpticalCollectionConstraintsType>(dynamic_cast<OpticalCollectionConstraintsType*>(asb_uci::util::DerivedTypesCreator::create(requestedType)));
}

/**  */
namespace OpticalCollectionConstraintsType_Names {

constexpr const char* Extern_Type_Name{"OpticalCollectionConstraintsType"};
constexpr const char* SunElevAngles_Name{"SunElevAngles"};
constexpr const char* SunAzimuthAngles_Name{"SunAzimuthAngles"};
constexpr const char* SweepSpeed_Name{"SweepSpeed"};
constexpr const char* GimbalOrientation_Name{"GimbalOrientation"};

} // namespace OpticalCollectionConstraintsType_Names

void OpticalCollectionConstraintsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::OpticalCollectionConstraintsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OpticalCollectionConstraintsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OpticalCollectionConstraintsType_Names::SunElevAngles_Name) {
      AngleHalfPairType::deserialize(valueType.second, accessor.enableSunElevAngles(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OpticalCollectionConstraintsType_Names::SunAzimuthAngles_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableSunAzimuthAngles(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OpticalCollectionConstraintsType_Names::SweepSpeed_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSweepSpeed(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + OpticalCollectionConstraintsType_Names::GimbalOrientation_Name) {
      GimbalOrientationPairType::deserialize(valueType.second, accessor.enableGimbalOrientation(), nodeName, nsPrefix);
    }
  }
  CollectionConstraintsType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string OpticalCollectionConstraintsType::serialize(const uci::type::OpticalCollectionConstraintsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? OpticalCollectionConstraintsType_Names::Extern_Type_Name : nodeName)};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::opticalCollectionConstraintsType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      asb_uci::util::SerializationHelpers::addTypeAttribute(node, OpticalCollectionConstraintsType_Names::Extern_Type_Name);
    }
    CollectionConstraintsType::serialize(accessor, node, "", false, false, false);
    if (accessor.hasSunElevAngles()) {
      AngleHalfPairType::serialize(accessor.getSunElevAngles(), node, OpticalCollectionConstraintsType_Names::SunElevAngles_Name);
    }
    if (accessor.hasSunAzimuthAngles()) {
      AnglePairType::serialize(accessor.getSunAzimuthAngles(), node, OpticalCollectionConstraintsType_Names::SunAzimuthAngles_Name);
    }
    if (accessor.hasSweepSpeed()) {
      asb_uci::util::SerializationHelpers::serializeDouble(accessor.getSweepSpeed(), node, OpticalCollectionConstraintsType_Names::SweepSpeed_Name);
    }
    if (accessor.hasGimbalOrientation()) {
      GimbalOrientationPairType::serialize(accessor.getGimbalOrientation(), node, OpticalCollectionConstraintsType_Names::GimbalOrientation_Name);
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

uci::type::OpticalCollectionConstraintsType& OpticalCollectionConstraintsType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OpticalCollectionConstraintsType>().release());
}

uci::type::OpticalCollectionConstraintsType& OpticalCollectionConstraintsType::create(const uci::type::OpticalCollectionConstraintsType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OpticalCollectionConstraintsType> newAccessor{boost::make_unique<asb_uci::type::OpticalCollectionConstraintsType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OpticalCollectionConstraintsType::destroy(uci::type::OpticalCollectionConstraintsType& accessor) {
  delete dynamic_cast<asb_uci::type::OpticalCollectionConstraintsType*>(&accessor);
}

} // namespace type

} // namespace uci

