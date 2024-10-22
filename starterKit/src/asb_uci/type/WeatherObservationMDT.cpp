/** @file WeatherObservationMDT.cpp
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

#include "../../../include/asb_uci/type/WeatherObservationMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/Point4D_Type.h"
#include "../../../include/asb_uci/type/SystemID_Type.h"
#include "../../../include/asb_uci/type/WeatherAreaDataType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Point4D_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/WeatherAreaDataType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/WeatherObservationMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

WeatherObservationMDT::WeatherObservationMDT()
  : observingSystemID_Accessor{boost::make_unique<SystemID_Type>()},
    observationPoint_Accessor{boost::make_unique<Point4D_Type>()} {
}

WeatherObservationMDT::~WeatherObservationMDT() = default;

void WeatherObservationMDT::copy(const uci::type::WeatherObservationMDT& accessor) {
  copyImpl(accessor, false);
}

void WeatherObservationMDT::copyImpl(const uci::type::WeatherObservationMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const WeatherObservationMDT&>(accessor);
    setObservingSystemID(*(accessorImpl.observingSystemID_Accessor));
    setObservationPoint(*(accessorImpl.observationPoint_Accessor));
    if (accessorImpl.weatherData_Accessor) {
      setWeatherData(*(accessorImpl.weatherData_Accessor));
    } else {
      weatherData_Accessor.reset();
    }
  }
}

void WeatherObservationMDT::reset() noexcept {
  observingSystemID_Accessor->reset();
  observationPoint_Accessor->reset();
  weatherData_Accessor.reset();
}

const uci::type::SystemID_Type& WeatherObservationMDT::getObservingSystemID() const {
  return *observingSystemID_Accessor;
}

uci::type::SystemID_Type& WeatherObservationMDT::getObservingSystemID() {
  return *observingSystemID_Accessor;
}

uci::type::WeatherObservationMDT& WeatherObservationMDT::setObservingSystemID(const uci::type::SystemID_Type& accessor) {
  if (&accessor != observingSystemID_Accessor.get()) {
    observingSystemID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::Point4D_Type& WeatherObservationMDT::getObservationPoint() const {
  return *observationPoint_Accessor;
}

uci::type::Point4D_Type& WeatherObservationMDT::getObservationPoint() {
  return *observationPoint_Accessor;
}

uci::type::WeatherObservationMDT& WeatherObservationMDT::setObservationPoint(const uci::type::Point4D_Type& accessor) {
  if (&accessor != observationPoint_Accessor.get()) {
    observationPoint_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::WeatherAreaDataType& WeatherObservationMDT::getWeatherData_() const {
  if (weatherData_Accessor) {
    return *weatherData_Accessor;
  }
  throw uci::base::UCIException("Error in getWeatherData(): An attempt was made to get an optional field that was not enabled, call hasWeatherData() to determine if it is safe to call getWeatherData()");
}

const uci::type::WeatherAreaDataType& WeatherObservationMDT::getWeatherData() const {
  return getWeatherData_();
}

uci::type::WeatherAreaDataType& WeatherObservationMDT::getWeatherData() {
  return getWeatherData_();
}

uci::type::WeatherObservationMDT& WeatherObservationMDT::setWeatherData(const uci::type::WeatherAreaDataType& accessor) {
  enableWeatherData();
  if (&accessor != weatherData_Accessor.get()) {
    weatherData_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool WeatherObservationMDT::hasWeatherData() const noexcept {
  return static_cast<bool>(weatherData_Accessor);
}

uci::type::WeatherAreaDataType& WeatherObservationMDT::enableWeatherData(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::weatherAreaDataType : type};
  if ((!weatherData_Accessor) || (weatherData_Accessor->getAccessorType() != requestedType)) {
    weatherData_Accessor = WeatherAreaDataType::create(requestedType);
    if (!weatherData_Accessor) {
      throw uci::base::UCIException("Error in enableWeatherData(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *weatherData_Accessor;
}

uci::type::WeatherObservationMDT& WeatherObservationMDT::clearWeatherData() noexcept {
  weatherData_Accessor.reset();
  return *this;
}

std::unique_ptr<WeatherObservationMDT> WeatherObservationMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::weatherObservationMDT : type};
  return (requestedType == uci::type::accessorType::weatherObservationMDT) ? boost::make_unique<WeatherObservationMDT>() : nullptr;
}

/**  */
namespace WeatherObservationMDT_Names {

constexpr const char* Extern_Type_Name{"WeatherObservationMDT"};
constexpr const char* ObservingSystemID_Name{"ObservingSystemID"};
constexpr const char* ObservationPoint_Name{"ObservationPoint"};
constexpr const char* WeatherData_Name{"WeatherData"};

} // namespace WeatherObservationMDT_Names

void WeatherObservationMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::WeatherObservationMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = WeatherObservationMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + WeatherObservationMDT_Names::ObservingSystemID_Name) {
      SystemID_Type::deserialize(valueType.second, accessor.getObservingSystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + WeatherObservationMDT_Names::ObservationPoint_Name) {
      Point4D_Type::deserialize(valueType.second, accessor.getObservationPoint(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + WeatherObservationMDT_Names::WeatherData_Name) {
      WeatherAreaDataType::deserialize(valueType.second, accessor.enableWeatherData(), nodeName, nsPrefix);
    }
  }
}

std::string WeatherObservationMDT::serialize(const uci::type::WeatherObservationMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? WeatherObservationMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, WeatherObservationMDT_Names::Extern_Type_Name);
  }
  SystemID_Type::serialize(accessor.getObservingSystemID(), node, WeatherObservationMDT_Names::ObservingSystemID_Name);
  Point4D_Type::serialize(accessor.getObservationPoint(), node, WeatherObservationMDT_Names::ObservationPoint_Name);
  if (accessor.hasWeatherData()) {
    WeatherAreaDataType::serialize(accessor.getWeatherData(), node, WeatherObservationMDT_Names::WeatherData_Name);
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

uci::type::WeatherObservationMDT& WeatherObservationMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::WeatherObservationMDT>().release());
}

uci::type::WeatherObservationMDT& WeatherObservationMDT::create(const uci::type::WeatherObservationMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::WeatherObservationMDT> newAccessor{boost::make_unique<asb_uci::type::WeatherObservationMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void WeatherObservationMDT::destroy(uci::type::WeatherObservationMDT& accessor) {
  delete dynamic_cast<asb_uci::type::WeatherObservationMDT*>(&accessor);
}

} // namespace type

} // namespace uci

