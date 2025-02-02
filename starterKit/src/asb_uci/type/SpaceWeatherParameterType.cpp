/** @file SpaceWeatherParameterType.cpp
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

#include "../../../include/asb_uci/type/SpaceWeatherParameterType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/SpaceWeatherKpApChoiceType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SolarFluxF10_7IndexType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SpaceWeatherKpApChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SpaceWeatherParameterType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SpaceWeatherParameterType::SpaceWeatherParameterType()
  : geomagneticIndex_Accessor{boost::make_unique<SpaceWeatherKpApChoiceType>()} {
}

SpaceWeatherParameterType::~SpaceWeatherParameterType() = default;

void SpaceWeatherParameterType::copy(const uci::type::SpaceWeatherParameterType& accessor) {
  copyImpl(accessor, false);
}

void SpaceWeatherParameterType::copyImpl(const uci::type::SpaceWeatherParameterType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const SpaceWeatherParameterType&>(accessor);
    setSolarFlux(accessorImpl.solarFlux_Accessor);
    setAverageSolarFlux(accessorImpl.averageSolarFlux_Accessor);
    setGeomagneticIndex(*(accessorImpl.geomagneticIndex_Accessor));
  }
}

void SpaceWeatherParameterType::reset() noexcept {
  solarFlux_Accessor = 0;
  averageSolarFlux_Accessor = 0;
  geomagneticIndex_Accessor->reset();
}

uci::type::SolarFluxF10_7IndexTypeValue SpaceWeatherParameterType::getSolarFlux() const {
  return solarFlux_Accessor;
}

uci::type::SpaceWeatherParameterType& SpaceWeatherParameterType::setSolarFlux(uci::type::SolarFluxF10_7IndexTypeValue value) {
  solarFlux_Accessor = value;
  return *this;
}


uci::type::SolarFluxF10_7IndexTypeValue SpaceWeatherParameterType::getAverageSolarFlux() const {
  return averageSolarFlux_Accessor;
}

uci::type::SpaceWeatherParameterType& SpaceWeatherParameterType::setAverageSolarFlux(uci::type::SolarFluxF10_7IndexTypeValue value) {
  averageSolarFlux_Accessor = value;
  return *this;
}


const uci::type::SpaceWeatherKpApChoiceType& SpaceWeatherParameterType::getGeomagneticIndex() const {
  return *geomagneticIndex_Accessor;
}

uci::type::SpaceWeatherKpApChoiceType& SpaceWeatherParameterType::getGeomagneticIndex() {
  return *geomagneticIndex_Accessor;
}

uci::type::SpaceWeatherParameterType& SpaceWeatherParameterType::setGeomagneticIndex(const uci::type::SpaceWeatherKpApChoiceType& accessor) {
  if (&accessor != geomagneticIndex_Accessor.get()) {
    geomagneticIndex_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<SpaceWeatherParameterType> SpaceWeatherParameterType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::spaceWeatherParameterType : type};
  return (requestedType == uci::type::accessorType::spaceWeatherParameterType) ? boost::make_unique<SpaceWeatherParameterType>() : nullptr;
}

/**  */
namespace SpaceWeatherParameterType_Names {

constexpr const char* Extern_Type_Name{"SpaceWeatherParameterType"};
constexpr const char* SolarFlux_Name{"SolarFlux"};
constexpr const char* AverageSolarFlux_Name{"AverageSolarFlux"};
constexpr const char* GeomagneticIndex_Name{"GeomagneticIndex"};

} // namespace SpaceWeatherParameterType_Names

void SpaceWeatherParameterType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SpaceWeatherParameterType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SpaceWeatherParameterType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SpaceWeatherParameterType_Names::SolarFlux_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSolarFlux(asb_uci::util::SerializationHelpers::deserializeUnsignedShort(*value));
      }
    } else if (valueType.first == nsPrefix + SpaceWeatherParameterType_Names::AverageSolarFlux_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAverageSolarFlux(asb_uci::util::SerializationHelpers::deserializeUnsignedShort(*value));
      }
    } else if (valueType.first == nsPrefix + SpaceWeatherParameterType_Names::GeomagneticIndex_Name) {
      SpaceWeatherKpApChoiceType::deserialize(valueType.second, accessor.getGeomagneticIndex(), nodeName, nsPrefix);
    }
  }
}

std::string SpaceWeatherParameterType::serialize(const uci::type::SpaceWeatherParameterType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SpaceWeatherParameterType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SpaceWeatherParameterType_Names::Extern_Type_Name);
  }
  asb_uci::util::SerializationHelpers::serializeUnsignedShort(accessor.getSolarFlux(), node, SpaceWeatherParameterType_Names::SolarFlux_Name);
  asb_uci::util::SerializationHelpers::serializeUnsignedShort(accessor.getAverageSolarFlux(), node, SpaceWeatherParameterType_Names::AverageSolarFlux_Name);
  SpaceWeatherKpApChoiceType::serialize(accessor.getGeomagneticIndex(), node, SpaceWeatherParameterType_Names::GeomagneticIndex_Name);
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

uci::type::SpaceWeatherParameterType& SpaceWeatherParameterType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SpaceWeatherParameterType>().release());
}

uci::type::SpaceWeatherParameterType& SpaceWeatherParameterType::create(const uci::type::SpaceWeatherParameterType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SpaceWeatherParameterType> newAccessor{boost::make_unique<asb_uci::type::SpaceWeatherParameterType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SpaceWeatherParameterType::destroy(uci::type::SpaceWeatherParameterType& accessor) {
  delete dynamic_cast<asb_uci::type::SpaceWeatherParameterType*>(&accessor);
}

} // namespace type

} // namespace uci

