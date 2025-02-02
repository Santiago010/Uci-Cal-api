/** @file AirDataType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:11 PM
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

#include "../../../include/asb_uci/type/AirDataType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AirDataType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AltitudeBarometricType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AngleHalfType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SpeedType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

AirDataType::AirDataType() = default;

AirDataType::~AirDataType() = default;

void AirDataType::copy(const uci::type::AirDataType& accessor) {
  copyImpl(accessor, false);
}

void AirDataType::copyImpl(const uci::type::AirDataType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const AirDataType&>(accessor);
    setIndicatedBaroAltitude(accessorImpl.indicatedBaroAltitude_Accessor);
    if (accessorImpl.hasBarometricAltitudeRate()) {
      setBarometricAltitudeRate(accessorImpl.getBarometricAltitudeRate());
    } else {
      clearBarometricAltitudeRate();
    }
    setKollsman(accessorImpl.kollsman_Accessor);
    setTrueAirspeed(accessorImpl.trueAirspeed_Accessor);
    if (accessorImpl.hasAlpha()) {
      setAlpha(accessorImpl.getAlpha());
    } else {
      clearAlpha();
    }
    if (accessorImpl.hasBeta()) {
      setBeta(accessorImpl.getBeta());
    } else {
      clearBeta();
    }
    if (accessorImpl.hasTimestamp()) {
      setTimestamp(accessorImpl.getTimestamp());
    } else {
      clearTimestamp();
    }
  }
}

void AirDataType::reset() noexcept {
  indicatedBaroAltitude_Accessor = 0.0;
  clearBarometricAltitudeRate();
  kollsman_Accessor = 0.0;
  trueAirspeed_Accessor = 0.0;
  clearAlpha();
  clearBeta();
  clearTimestamp();
}

uci::type::AltitudeBarometricTypeValue AirDataType::getIndicatedBaroAltitude() const {
  return indicatedBaroAltitude_Accessor;
}

uci::type::AirDataType& AirDataType::setIndicatedBaroAltitude(uci::type::AltitudeBarometricTypeValue value) {
  indicatedBaroAltitude_Accessor = value;
  return *this;
}


xs::Float AirDataType::getBarometricAltitudeRate() const {
  if (barometricAltitudeRate_Accessor) {
    return *barometricAltitudeRate_Accessor;
  }
  throw uci::base::UCIException("Error in getBarometricAltitudeRate(): An attempt was made to get an optional field that was not enabled, call hasBarometricAltitudeRate() to determine if it is safe to call getBarometricAltitudeRate()");
}

uci::type::AirDataType& AirDataType::setBarometricAltitudeRate(xs::Float value) {
  barometricAltitudeRate_Accessor = value;
  return *this;
}

bool AirDataType::hasBarometricAltitudeRate() const noexcept {
  return barometricAltitudeRate_Accessor.has_value();
}

uci::type::AirDataType& AirDataType::clearBarometricAltitudeRate() noexcept {
  barometricAltitudeRate_Accessor.reset();
  return *this;
}

xs::Double AirDataType::getKollsman() const {
  return kollsman_Accessor;
}

uci::type::AirDataType& AirDataType::setKollsman(xs::Double value) {
  kollsman_Accessor = value;
  return *this;
}


uci::type::SpeedTypeValue AirDataType::getTrueAirspeed() const {
  return trueAirspeed_Accessor;
}

uci::type::AirDataType& AirDataType::setTrueAirspeed(uci::type::SpeedTypeValue value) {
  trueAirspeed_Accessor = value;
  return *this;
}


uci::type::AngleHalfTypeValue AirDataType::getAlpha() const {
  if (alpha_Accessor) {
    return *alpha_Accessor;
  }
  throw uci::base::UCIException("Error in getAlpha(): An attempt was made to get an optional field that was not enabled, call hasAlpha() to determine if it is safe to call getAlpha()");
}

uci::type::AirDataType& AirDataType::setAlpha(uci::type::AngleHalfTypeValue value) {
  alpha_Accessor = value;
  return *this;
}

bool AirDataType::hasAlpha() const noexcept {
  return alpha_Accessor.has_value();
}

uci::type::AirDataType& AirDataType::clearAlpha() noexcept {
  alpha_Accessor.reset();
  return *this;
}

uci::type::AngleHalfTypeValue AirDataType::getBeta() const {
  if (beta_Accessor) {
    return *beta_Accessor;
  }
  throw uci::base::UCIException("Error in getBeta(): An attempt was made to get an optional field that was not enabled, call hasBeta() to determine if it is safe to call getBeta()");
}

uci::type::AirDataType& AirDataType::setBeta(uci::type::AngleHalfTypeValue value) {
  beta_Accessor = value;
  return *this;
}

bool AirDataType::hasBeta() const noexcept {
  return beta_Accessor.has_value();
}

uci::type::AirDataType& AirDataType::clearBeta() noexcept {
  beta_Accessor.reset();
  return *this;
}

uci::type::DateTimeTypeValue AirDataType::getTimestamp() const {
  if (timestamp_Accessor) {
    return *timestamp_Accessor;
  }
  throw uci::base::UCIException("Error in getTimestamp(): An attempt was made to get an optional field that was not enabled, call hasTimestamp() to determine if it is safe to call getTimestamp()");
}

uci::type::AirDataType& AirDataType::setTimestamp(uci::type::DateTimeTypeValue value) {
  timestamp_Accessor = value;
  return *this;
}

bool AirDataType::hasTimestamp() const noexcept {
  return timestamp_Accessor.has_value();
}

uci::type::AirDataType& AirDataType::clearTimestamp() noexcept {
  timestamp_Accessor.reset();
  return *this;
}

std::unique_ptr<AirDataType> AirDataType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::airDataType : type};
  return (requestedType == uci::type::accessorType::airDataType) ? boost::make_unique<AirDataType>() : nullptr;
}

/**  */
namespace AirDataType_Names {

constexpr const char* Extern_Type_Name{"AirDataType"};
constexpr const char* IndicatedBaroAltitude_Name{"IndicatedBaroAltitude"};
constexpr const char* BarometricAltitudeRate_Name{"BarometricAltitudeRate"};
constexpr const char* Kollsman_Name{"Kollsman"};
constexpr const char* TrueAirspeed_Name{"TrueAirspeed"};
constexpr const char* Alpha_Name{"Alpha"};
constexpr const char* Beta_Name{"Beta"};
constexpr const char* Timestamp_Name{"Timestamp"};

} // namespace AirDataType_Names

void AirDataType::deserialize(const boost::property_tree::ptree& propTree, uci::type::AirDataType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = AirDataType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + AirDataType_Names::IndicatedBaroAltitude_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setIndicatedBaroAltitude(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + AirDataType_Names::BarometricAltitudeRate_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setBarometricAltitudeRate(asb_uci::util::SerializationHelpers::deserializeFloat(*value));
      }
    } else if (valueType.first == nsPrefix + AirDataType_Names::Kollsman_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setKollsman(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + AirDataType_Names::TrueAirspeed_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTrueAirspeed(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + AirDataType_Names::Alpha_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAlpha(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + AirDataType_Names::Beta_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setBeta(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + AirDataType_Names::Timestamp_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTimestamp(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    }
  }
}

std::string AirDataType::serialize(const uci::type::AirDataType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? AirDataType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, AirDataType_Names::Extern_Type_Name);
  }
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getIndicatedBaroAltitude(), node, AirDataType_Names::IndicatedBaroAltitude_Name);
  if (accessor.hasBarometricAltitudeRate()) {
    asb_uci::util::SerializationHelpers::serializeFloat(accessor.getBarometricAltitudeRate(), node, AirDataType_Names::BarometricAltitudeRate_Name);
  }
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getKollsman(), node, AirDataType_Names::Kollsman_Name);
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getTrueAirspeed(), node, AirDataType_Names::TrueAirspeed_Name);
  if (accessor.hasAlpha()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getAlpha(), node, AirDataType_Names::Alpha_Name);
  }
  if (accessor.hasBeta()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getBeta(), node, AirDataType_Names::Beta_Name);
  }
  if (accessor.hasTimestamp()) {
    asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getTimestamp(), node, AirDataType_Names::Timestamp_Name);
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

uci::type::AirDataType& AirDataType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::AirDataType>().release());
}

uci::type::AirDataType& AirDataType::create(const uci::type::AirDataType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::AirDataType> newAccessor{boost::make_unique<asb_uci::type::AirDataType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void AirDataType::destroy(uci::type::AirDataType& accessor) {
  delete dynamic_cast<asb_uci::type::AirDataType*>(&accessor);
}

} // namespace type

} // namespace uci

