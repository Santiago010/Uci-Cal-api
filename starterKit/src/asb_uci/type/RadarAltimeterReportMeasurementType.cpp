/** @file RadarAltimeterReportMeasurementType.cpp
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

#include "../../../include/asb_uci/type/RadarAltimeterReportMeasurementType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/RadarAltimeterReportCharacteristicsType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DistanceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DurationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RadarAltimeterReportCharacteristicsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RadarAltimeterReportMeasurementType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SpeedType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

RadarAltimeterReportMeasurementType::RadarAltimeterReportMeasurementType() = default;

RadarAltimeterReportMeasurementType::~RadarAltimeterReportMeasurementType() = default;

void RadarAltimeterReportMeasurementType::copy(const uci::type::RadarAltimeterReportMeasurementType& accessor) {
  copyImpl(accessor, false);
}

void RadarAltimeterReportMeasurementType::copyImpl(const uci::type::RadarAltimeterReportMeasurementType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const RadarAltimeterReportMeasurementType&>(accessor);
    setTimestamp(accessorImpl.timestamp_Accessor);
    setHeight(accessorImpl.height_Accessor);
    if (accessorImpl.hasVerticalClosingVelocity()) {
      setVerticalClosingVelocity(accessorImpl.getVerticalClosingVelocity());
    } else {
      clearVerticalClosingVelocity();
    }
    if (accessorImpl.hasExpectedTimeToNextMeasurement()) {
      setExpectedTimeToNextMeasurement(accessorImpl.getExpectedTimeToNextMeasurement());
    } else {
      clearExpectedTimeToNextMeasurement();
    }
    if (accessorImpl.characteristics_Accessor) {
      setCharacteristics(*(accessorImpl.characteristics_Accessor));
    } else {
      characteristics_Accessor.reset();
    }
  }
}

void RadarAltimeterReportMeasurementType::reset() noexcept {
  timestamp_Accessor = 0;
  height_Accessor = 0.0;
  clearVerticalClosingVelocity();
  clearExpectedTimeToNextMeasurement();
  characteristics_Accessor.reset();
}

uci::type::DateTimeTypeValue RadarAltimeterReportMeasurementType::getTimestamp() const {
  return timestamp_Accessor;
}

uci::type::RadarAltimeterReportMeasurementType& RadarAltimeterReportMeasurementType::setTimestamp(uci::type::DateTimeTypeValue value) {
  timestamp_Accessor = value;
  return *this;
}


uci::type::DistanceTypeValue RadarAltimeterReportMeasurementType::getHeight() const {
  return height_Accessor;
}

uci::type::RadarAltimeterReportMeasurementType& RadarAltimeterReportMeasurementType::setHeight(uci::type::DistanceTypeValue value) {
  height_Accessor = value;
  return *this;
}


uci::type::SpeedTypeValue RadarAltimeterReportMeasurementType::getVerticalClosingVelocity() const {
  if (verticalClosingVelocity_Accessor) {
    return *verticalClosingVelocity_Accessor;
  }
  throw uci::base::UCIException("Error in getVerticalClosingVelocity(): An attempt was made to get an optional field that was not enabled, call hasVerticalClosingVelocity() to determine if it is safe to call getVerticalClosingVelocity()");
}

uci::type::RadarAltimeterReportMeasurementType& RadarAltimeterReportMeasurementType::setVerticalClosingVelocity(uci::type::SpeedTypeValue value) {
  verticalClosingVelocity_Accessor = value;
  return *this;
}

bool RadarAltimeterReportMeasurementType::hasVerticalClosingVelocity() const noexcept {
  return verticalClosingVelocity_Accessor.has_value();
}

uci::type::RadarAltimeterReportMeasurementType& RadarAltimeterReportMeasurementType::clearVerticalClosingVelocity() noexcept {
  verticalClosingVelocity_Accessor.reset();
  return *this;
}

uci::type::DurationTypeValue RadarAltimeterReportMeasurementType::getExpectedTimeToNextMeasurement() const {
  if (expectedTimeToNextMeasurement_Accessor) {
    return *expectedTimeToNextMeasurement_Accessor;
  }
  throw uci::base::UCIException("Error in getExpectedTimeToNextMeasurement(): An attempt was made to get an optional field that was not enabled, call hasExpectedTimeToNextMeasurement() to determine if it is safe to call getExpectedTimeToNextMeasurement()");
}

uci::type::RadarAltimeterReportMeasurementType& RadarAltimeterReportMeasurementType::setExpectedTimeToNextMeasurement(uci::type::DurationTypeValue value) {
  expectedTimeToNextMeasurement_Accessor = value;
  return *this;
}

bool RadarAltimeterReportMeasurementType::hasExpectedTimeToNextMeasurement() const noexcept {
  return expectedTimeToNextMeasurement_Accessor.has_value();
}

uci::type::RadarAltimeterReportMeasurementType& RadarAltimeterReportMeasurementType::clearExpectedTimeToNextMeasurement() noexcept {
  expectedTimeToNextMeasurement_Accessor.reset();
  return *this;
}

uci::type::RadarAltimeterReportCharacteristicsType& RadarAltimeterReportMeasurementType::getCharacteristics_() const {
  if (characteristics_Accessor) {
    return *characteristics_Accessor;
  }
  throw uci::base::UCIException("Error in getCharacteristics(): An attempt was made to get an optional field that was not enabled, call hasCharacteristics() to determine if it is safe to call getCharacteristics()");
}

const uci::type::RadarAltimeterReportCharacteristicsType& RadarAltimeterReportMeasurementType::getCharacteristics() const {
  return getCharacteristics_();
}

uci::type::RadarAltimeterReportCharacteristicsType& RadarAltimeterReportMeasurementType::getCharacteristics() {
  return getCharacteristics_();
}

uci::type::RadarAltimeterReportMeasurementType& RadarAltimeterReportMeasurementType::setCharacteristics(const uci::type::RadarAltimeterReportCharacteristicsType& accessor) {
  enableCharacteristics();
  if (&accessor != characteristics_Accessor.get()) {
    characteristics_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RadarAltimeterReportMeasurementType::hasCharacteristics() const noexcept {
  return static_cast<bool>(characteristics_Accessor);
}

uci::type::RadarAltimeterReportCharacteristicsType& RadarAltimeterReportMeasurementType::enableCharacteristics(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::radarAltimeterReportCharacteristicsType : type};
  if ((!characteristics_Accessor) || (characteristics_Accessor->getAccessorType() != requestedType)) {
    characteristics_Accessor = RadarAltimeterReportCharacteristicsType::create(requestedType);
    if (!characteristics_Accessor) {
      throw uci::base::UCIException("Error in enableCharacteristics(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *characteristics_Accessor;
}

uci::type::RadarAltimeterReportMeasurementType& RadarAltimeterReportMeasurementType::clearCharacteristics() noexcept {
  characteristics_Accessor.reset();
  return *this;
}

std::unique_ptr<RadarAltimeterReportMeasurementType> RadarAltimeterReportMeasurementType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::radarAltimeterReportMeasurementType : type};
  return (requestedType == uci::type::accessorType::radarAltimeterReportMeasurementType) ? boost::make_unique<RadarAltimeterReportMeasurementType>() : nullptr;
}

/**  */
namespace RadarAltimeterReportMeasurementType_Names {

constexpr const char* Extern_Type_Name{"RadarAltimeterReportMeasurementType"};
constexpr const char* Timestamp_Name{"Timestamp"};
constexpr const char* Height_Name{"Height"};
constexpr const char* VerticalClosingVelocity_Name{"VerticalClosingVelocity"};
constexpr const char* ExpectedTimeToNextMeasurement_Name{"ExpectedTimeToNextMeasurement"};
constexpr const char* Characteristics_Name{"Characteristics"};

} // namespace RadarAltimeterReportMeasurementType_Names

void RadarAltimeterReportMeasurementType::deserialize(const boost::property_tree::ptree& propTree, uci::type::RadarAltimeterReportMeasurementType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RadarAltimeterReportMeasurementType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RadarAltimeterReportMeasurementType_Names::Timestamp_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTimestamp(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + RadarAltimeterReportMeasurementType_Names::Height_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setHeight(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + RadarAltimeterReportMeasurementType_Names::VerticalClosingVelocity_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setVerticalClosingVelocity(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + RadarAltimeterReportMeasurementType_Names::ExpectedTimeToNextMeasurement_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setExpectedTimeToNextMeasurement(asb_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    } else if (valueType.first == nsPrefix + RadarAltimeterReportMeasurementType_Names::Characteristics_Name) {
      RadarAltimeterReportCharacteristicsType::deserialize(valueType.second, accessor.enableCharacteristics(), nodeName, nsPrefix);
    }
  }
}

std::string RadarAltimeterReportMeasurementType::serialize(const uci::type::RadarAltimeterReportMeasurementType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? RadarAltimeterReportMeasurementType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, RadarAltimeterReportMeasurementType_Names::Extern_Type_Name);
  }
  asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getTimestamp(), node, RadarAltimeterReportMeasurementType_Names::Timestamp_Name);
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getHeight(), node, RadarAltimeterReportMeasurementType_Names::Height_Name);
  if (accessor.hasVerticalClosingVelocity()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getVerticalClosingVelocity(), node, RadarAltimeterReportMeasurementType_Names::VerticalClosingVelocity_Name);
  }
  if (accessor.hasExpectedTimeToNextMeasurement()) {
    asb_uci::util::SerializationHelpers::serializeDuration(accessor.getExpectedTimeToNextMeasurement(), node, RadarAltimeterReportMeasurementType_Names::ExpectedTimeToNextMeasurement_Name);
  }
  if (accessor.hasCharacteristics()) {
    RadarAltimeterReportCharacteristicsType::serialize(accessor.getCharacteristics(), node, RadarAltimeterReportMeasurementType_Names::Characteristics_Name);
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

uci::type::RadarAltimeterReportMeasurementType& RadarAltimeterReportMeasurementType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::RadarAltimeterReportMeasurementType>().release());
}

uci::type::RadarAltimeterReportMeasurementType& RadarAltimeterReportMeasurementType::create(const uci::type::RadarAltimeterReportMeasurementType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::RadarAltimeterReportMeasurementType> newAccessor{boost::make_unique<asb_uci::type::RadarAltimeterReportMeasurementType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void RadarAltimeterReportMeasurementType::destroy(uci::type::RadarAltimeterReportMeasurementType& accessor) {
  delete dynamic_cast<asb_uci::type::RadarAltimeterReportMeasurementType*>(&accessor);
}

} // namespace type

} // namespace uci

