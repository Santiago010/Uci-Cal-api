/** @file RadarPointingTargetType.cpp
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

#include "../../../include/asb_uci/type/RadarPointingTargetType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/SensorReferencedCoverageAreaType.h"
#include "../../../include/asb_uci/type/TargetType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RadarPointingTargetType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SensorReferencedCoverageAreaType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TargetType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

RadarPointingTargetType::RadarPointingTargetType() = default;

RadarPointingTargetType::~RadarPointingTargetType() = default;

void RadarPointingTargetType::copy(const uci::type::RadarPointingTargetType& accessor) {
  copyImpl(accessor, false);
}

void RadarPointingTargetType::copyImpl(const uci::type::RadarPointingTargetType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const RadarPointingTargetType&>(accessor);
    if (accessorImpl.geospatialTarget_Accessor) {
      setGeospatialTarget(*(accessorImpl.geospatialTarget_Accessor));
    } else {
      geospatialTarget_Accessor.reset();
    }
    if (accessorImpl.sensorReferencedCoverageArea_Accessor) {
      setSensorReferencedCoverageArea(*(accessorImpl.sensorReferencedCoverageArea_Accessor));
    } else {
      sensorReferencedCoverageArea_Accessor.reset();
    }
  }
}

void RadarPointingTargetType::reset() noexcept {
  geospatialTarget_Accessor.reset();
  sensorReferencedCoverageArea_Accessor.reset();
}

uci::type::RadarPointingTargetType::RadarPointingTargetTypeChoice RadarPointingTargetType::getRadarPointingTargetTypeChoiceOrdinal() const noexcept {
  if (geospatialTarget_Accessor) {
    return RADARPOINTINGTARGETTYPE_CHOICE_GEOSPATIALTARGET;
  }
  if (sensorReferencedCoverageArea_Accessor) {
    return RADARPOINTINGTARGETTYPE_CHOICE_SENSORREFERENCEDCOVERAGEAREA;
  }
  return RADARPOINTINGTARGETTYPE_CHOICE_NONE;
}

uci::type::RadarPointingTargetType& RadarPointingTargetType::setRadarPointingTargetTypeChoiceOrdinal(uci::type::RadarPointingTargetType::RadarPointingTargetTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case RADARPOINTINGTARGETTYPE_CHOICE_GEOSPATIALTARGET:
      chooseGeospatialTarget("setRadarPointingTargetTypeChoiceOrdinal", type);
      break;
    case RADARPOINTINGTARGETTYPE_CHOICE_SENSORREFERENCEDCOVERAGEAREA:
      chooseSensorReferencedCoverageArea("setRadarPointingTargetTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setRadarPointingTargetTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::TargetType& RadarPointingTargetType::getGeospatialTarget_() const {
  if (geospatialTarget_Accessor) {
    return *geospatialTarget_Accessor;
  }
  throw uci::base::UCIException("Error in getGeospatialTarget(): Unable to get GeospatialTarget, field not selected");
}

const uci::type::TargetType& RadarPointingTargetType::getGeospatialTarget() const {
  return getGeospatialTarget_();
}

uci::type::TargetType& RadarPointingTargetType::getGeospatialTarget() {
  return getGeospatialTarget_();
}

uci::type::RadarPointingTargetType& RadarPointingTargetType::setGeospatialTarget(const uci::type::TargetType& accessor) {
  chooseGeospatialTarget(accessor.getAccessorType());
  if (&accessor != geospatialTarget_Accessor.get()) {
    geospatialTarget_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RadarPointingTargetType::isGeospatialTarget() const noexcept {
  return static_cast<bool>(geospatialTarget_Accessor);
}

uci::type::TargetType& RadarPointingTargetType::chooseGeospatialTarget(const std::string& method, uci::base::accessorType::AccessorType type) {
  sensorReferencedCoverageArea_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::targetType : type};
  if ((!geospatialTarget_Accessor) || (geospatialTarget_Accessor->getAccessorType() != requestedType)) {
    geospatialTarget_Accessor = TargetType::create(type);
    if (!geospatialTarget_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *geospatialTarget_Accessor;
}

uci::type::TargetType& RadarPointingTargetType::chooseGeospatialTarget(uci::base::accessorType::AccessorType type) {
  return chooseGeospatialTarget("chooseGeospatialTarget", type);
}

uci::type::SensorReferencedCoverageAreaType& RadarPointingTargetType::getSensorReferencedCoverageArea_() const {
  if (sensorReferencedCoverageArea_Accessor) {
    return *sensorReferencedCoverageArea_Accessor;
  }
  throw uci::base::UCIException("Error in getSensorReferencedCoverageArea(): Unable to get SensorReferencedCoverageArea, field not selected");
}

const uci::type::SensorReferencedCoverageAreaType& RadarPointingTargetType::getSensorReferencedCoverageArea() const {
  return getSensorReferencedCoverageArea_();
}

uci::type::SensorReferencedCoverageAreaType& RadarPointingTargetType::getSensorReferencedCoverageArea() {
  return getSensorReferencedCoverageArea_();
}

uci::type::RadarPointingTargetType& RadarPointingTargetType::setSensorReferencedCoverageArea(const uci::type::SensorReferencedCoverageAreaType& accessor) {
  chooseSensorReferencedCoverageArea();
  if (&accessor != sensorReferencedCoverageArea_Accessor.get()) {
    sensorReferencedCoverageArea_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RadarPointingTargetType::isSensorReferencedCoverageArea() const noexcept {
  return static_cast<bool>(sensorReferencedCoverageArea_Accessor);
}

uci::type::SensorReferencedCoverageAreaType& RadarPointingTargetType::chooseSensorReferencedCoverageArea(const std::string& method, uci::base::accessorType::AccessorType type) {
  geospatialTarget_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::sensorReferencedCoverageAreaType : type};
  if ((!sensorReferencedCoverageArea_Accessor) || (sensorReferencedCoverageArea_Accessor->getAccessorType() != requestedType)) {
    sensorReferencedCoverageArea_Accessor = SensorReferencedCoverageAreaType::create(type);
    if (!sensorReferencedCoverageArea_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *sensorReferencedCoverageArea_Accessor;
}

uci::type::SensorReferencedCoverageAreaType& RadarPointingTargetType::chooseSensorReferencedCoverageArea(uci::base::accessorType::AccessorType type) {
  return chooseSensorReferencedCoverageArea("chooseSensorReferencedCoverageArea", type);
}

std::unique_ptr<RadarPointingTargetType> RadarPointingTargetType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::radarPointingTargetType : type};
  return (requestedType == uci::type::accessorType::radarPointingTargetType) ? boost::make_unique<RadarPointingTargetType>() : nullptr;
}

/**  */
namespace RadarPointingTargetType_Names {

constexpr const char* Extern_Type_Name{"RadarPointingTargetType"};
constexpr const char* GeospatialTarget_Name{"GeospatialTarget"};
constexpr const char* SensorReferencedCoverageArea_Name{"SensorReferencedCoverageArea"};

} // namespace RadarPointingTargetType_Names

void RadarPointingTargetType::deserialize(const boost::property_tree::ptree& propTree, uci::type::RadarPointingTargetType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RadarPointingTargetType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RadarPointingTargetType_Names::GeospatialTarget_Name) {
      TargetType::deserialize(valueType.second, accessor.chooseGeospatialTarget(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RadarPointingTargetType_Names::SensorReferencedCoverageArea_Name) {
      SensorReferencedCoverageAreaType::deserialize(valueType.second, accessor.chooseSensorReferencedCoverageArea(), nodeName, nsPrefix);
    }
  }
}

std::string RadarPointingTargetType::serialize(const uci::type::RadarPointingTargetType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? RadarPointingTargetType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, RadarPointingTargetType_Names::Extern_Type_Name);
  }
  if (accessor.isGeospatialTarget()) {
    TargetType::serialize(accessor.getGeospatialTarget(), node, RadarPointingTargetType_Names::GeospatialTarget_Name);
  } else if (accessor.isSensorReferencedCoverageArea()) {
    SensorReferencedCoverageAreaType::serialize(accessor.getSensorReferencedCoverageArea(), node, RadarPointingTargetType_Names::SensorReferencedCoverageArea_Name);
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

uci::type::RadarPointingTargetType& RadarPointingTargetType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::RadarPointingTargetType>().release());
}

uci::type::RadarPointingTargetType& RadarPointingTargetType::create(const uci::type::RadarPointingTargetType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::RadarPointingTargetType> newAccessor{boost::make_unique<asb_uci::type::RadarPointingTargetType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void RadarPointingTargetType::destroy(uci::type::RadarPointingTargetType& accessor) {
  delete dynamic_cast<asb_uci::type::RadarPointingTargetType*>(&accessor);
}

} // namespace type

} // namespace uci

