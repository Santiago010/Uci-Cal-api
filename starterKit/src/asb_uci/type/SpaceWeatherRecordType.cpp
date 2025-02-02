/** @file SpaceWeatherRecordType.cpp
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

#include "../../../include/asb_uci/type/SpaceWeatherRecordType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/GeomagneticStormApType.h"
#include "../../../include/asb_uci/type/GeomagneticStormKpType.h"
#include "../../../include/asb_uci/type/SolarFluxType.h"
#include "../../../include/asb_uci/type/SolarWindRecordType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/GeomagneticStormApType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/GeomagneticStormKpType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SolarFluxType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SolarWindRecordType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SpaceWeatherRecordType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SpaceWeatherRecordType::SpaceWeatherRecordType()
  : solarFlux_Accessor{boost::make_unique<SolarFlux>(0, SIZE_MAX)},
    geomagneticStormAp_Accessor{boost::make_unique<GeomagneticStormAp>(0, SIZE_MAX)},
    geomagneticStormKp_Accessor{boost::make_unique<GeomagneticStormKp>(0, SIZE_MAX)},
    solarWind_Accessor{boost::make_unique<SolarWind>(0, SIZE_MAX)} {
}

SpaceWeatherRecordType::~SpaceWeatherRecordType() = default;

void SpaceWeatherRecordType::copy(const uci::type::SpaceWeatherRecordType& accessor) {
  copyImpl(accessor, false);
}

void SpaceWeatherRecordType::copyImpl(const uci::type::SpaceWeatherRecordType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const SpaceWeatherRecordType&>(accessor);
    setSolarFlux(*(accessorImpl.solarFlux_Accessor));
    setGeomagneticStormAp(*(accessorImpl.geomagneticStormAp_Accessor));
    setGeomagneticStormKp(*(accessorImpl.geomagneticStormKp_Accessor));
    setSolarWind(*(accessorImpl.solarWind_Accessor));
  }
}

void SpaceWeatherRecordType::reset() noexcept {
  solarFlux_Accessor->reset();
  geomagneticStormAp_Accessor->reset();
  geomagneticStormKp_Accessor->reset();
  solarWind_Accessor->reset();
}

const uci::type::SpaceWeatherRecordType::SolarFlux& SpaceWeatherRecordType::getSolarFlux() const {
  return *solarFlux_Accessor;
}

uci::type::SpaceWeatherRecordType::SolarFlux& SpaceWeatherRecordType::getSolarFlux() {
  return *solarFlux_Accessor;
}

uci::type::SpaceWeatherRecordType& SpaceWeatherRecordType::setSolarFlux(const uci::type::SpaceWeatherRecordType::SolarFlux& accessor) {
  if (&accessor != solarFlux_Accessor.get()) {
    solarFlux_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SpaceWeatherRecordType::GeomagneticStormAp& SpaceWeatherRecordType::getGeomagneticStormAp() const {
  return *geomagneticStormAp_Accessor;
}

uci::type::SpaceWeatherRecordType::GeomagneticStormAp& SpaceWeatherRecordType::getGeomagneticStormAp() {
  return *geomagneticStormAp_Accessor;
}

uci::type::SpaceWeatherRecordType& SpaceWeatherRecordType::setGeomagneticStormAp(const uci::type::SpaceWeatherRecordType::GeomagneticStormAp& accessor) {
  if (&accessor != geomagneticStormAp_Accessor.get()) {
    geomagneticStormAp_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SpaceWeatherRecordType::GeomagneticStormKp& SpaceWeatherRecordType::getGeomagneticStormKp() const {
  return *geomagneticStormKp_Accessor;
}

uci::type::SpaceWeatherRecordType::GeomagneticStormKp& SpaceWeatherRecordType::getGeomagneticStormKp() {
  return *geomagneticStormKp_Accessor;
}

uci::type::SpaceWeatherRecordType& SpaceWeatherRecordType::setGeomagneticStormKp(const uci::type::SpaceWeatherRecordType::GeomagneticStormKp& accessor) {
  if (&accessor != geomagneticStormKp_Accessor.get()) {
    geomagneticStormKp_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SpaceWeatherRecordType::SolarWind& SpaceWeatherRecordType::getSolarWind() const {
  return *solarWind_Accessor;
}

uci::type::SpaceWeatherRecordType::SolarWind& SpaceWeatherRecordType::getSolarWind() {
  return *solarWind_Accessor;
}

uci::type::SpaceWeatherRecordType& SpaceWeatherRecordType::setSolarWind(const uci::type::SpaceWeatherRecordType::SolarWind& accessor) {
  if (&accessor != solarWind_Accessor.get()) {
    solarWind_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<SpaceWeatherRecordType> SpaceWeatherRecordType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::spaceWeatherRecordType : type};
  return (requestedType == uci::type::accessorType::spaceWeatherRecordType) ? boost::make_unique<SpaceWeatherRecordType>() : nullptr;
}

/**  */
namespace SpaceWeatherRecordType_Names {

constexpr const char* Extern_Type_Name{"SpaceWeatherRecordType"};
constexpr const char* SolarFlux_Name{"SolarFlux"};
constexpr const char* GeomagneticStormAp_Name{"GeomagneticStormAp"};
constexpr const char* GeomagneticStormKp_Name{"GeomagneticStormKp"};
constexpr const char* SolarWind_Name{"SolarWind"};

} // namespace SpaceWeatherRecordType_Names

void SpaceWeatherRecordType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SpaceWeatherRecordType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SpaceWeatherRecordType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SpaceWeatherRecordType_Names::SolarFlux_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SpaceWeatherRecordType::SolarFlux& boundedList = accessor.getSolarFlux();
        const uci::type::SpaceWeatherRecordType::SolarFlux::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::SolarFluxType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + SpaceWeatherRecordType_Names::GeomagneticStormAp_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SpaceWeatherRecordType::GeomagneticStormAp& boundedList = accessor.getGeomagneticStormAp();
        const uci::type::SpaceWeatherRecordType::GeomagneticStormAp::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::GeomagneticStormApType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + SpaceWeatherRecordType_Names::GeomagneticStormKp_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SpaceWeatherRecordType::GeomagneticStormKp& boundedList = accessor.getGeomagneticStormKp();
        const uci::type::SpaceWeatherRecordType::GeomagneticStormKp::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::GeomagneticStormKpType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + SpaceWeatherRecordType_Names::SolarWind_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SpaceWeatherRecordType::SolarWind& boundedList = accessor.getSolarWind();
        const uci::type::SpaceWeatherRecordType::SolarWind::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::SolarWindRecordType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string SpaceWeatherRecordType::serialize(const uci::type::SpaceWeatherRecordType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SpaceWeatherRecordType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SpaceWeatherRecordType_Names::Extern_Type_Name);
  }
  {
    const uci::type::SpaceWeatherRecordType::SolarFlux& boundedList = accessor.getSolarFlux();
    for (uci::type::SpaceWeatherRecordType::SolarFlux::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::SolarFluxType::serialize(boundedList.at(i), node, SpaceWeatherRecordType_Names::SolarFlux_Name);
    }
  }
  {
    const uci::type::SpaceWeatherRecordType::GeomagneticStormAp& boundedList = accessor.getGeomagneticStormAp();
    for (uci::type::SpaceWeatherRecordType::GeomagneticStormAp::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::GeomagneticStormApType::serialize(boundedList.at(i), node, SpaceWeatherRecordType_Names::GeomagneticStormAp_Name);
    }
  }
  {
    const uci::type::SpaceWeatherRecordType::GeomagneticStormKp& boundedList = accessor.getGeomagneticStormKp();
    for (uci::type::SpaceWeatherRecordType::GeomagneticStormKp::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::GeomagneticStormKpType::serialize(boundedList.at(i), node, SpaceWeatherRecordType_Names::GeomagneticStormKp_Name);
    }
  }
  {
    const uci::type::SpaceWeatherRecordType::SolarWind& boundedList = accessor.getSolarWind();
    for (uci::type::SpaceWeatherRecordType::SolarWind::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::SolarWindRecordType::serialize(boundedList.at(i), node, SpaceWeatherRecordType_Names::SolarWind_Name);
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

uci::type::SpaceWeatherRecordType& SpaceWeatherRecordType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SpaceWeatherRecordType>().release());
}

uci::type::SpaceWeatherRecordType& SpaceWeatherRecordType::create(const uci::type::SpaceWeatherRecordType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SpaceWeatherRecordType> newAccessor{boost::make_unique<asb_uci::type::SpaceWeatherRecordType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SpaceWeatherRecordType::destroy(uci::type::SpaceWeatherRecordType& accessor) {
  delete dynamic_cast<asb_uci::type::SpaceWeatherRecordType*>(&accessor);
}

} // namespace type

} // namespace uci

