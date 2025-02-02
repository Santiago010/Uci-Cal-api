/** @file FrequencyParamsType.cpp
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

#include "../../../include/asb_uci/type/FrequencyParamsType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/FrequencyRangeType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DurationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/FrequencyParamsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/FrequencyRangeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MilliwattPowerRatioType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

FrequencyParamsType::FrequencyParamsType() = default;

FrequencyParamsType::~FrequencyParamsType() = default;

void FrequencyParamsType::copy(const uci::type::FrequencyParamsType& accessor) {
  copyImpl(accessor, false);
}

void FrequencyParamsType::copyImpl(const uci::type::FrequencyParamsType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const FrequencyParamsType&>(accessor);
    if (accessorImpl.frequencyRange_Accessor) {
      setFrequencyRange(*(accessorImpl.frequencyRange_Accessor));
    } else {
      frequencyRange_Accessor.reset();
    }
    if (accessorImpl.hasMinSignalStrength()) {
      setMinSignalStrength(accessorImpl.getMinSignalStrength());
    } else {
      clearMinSignalStrength();
    }
    if (accessorImpl.hasRF_FrequencyResolution()) {
      setRF_FrequencyResolution(accessorImpl.getRF_FrequencyResolution());
    } else {
      clearRF_FrequencyResolution();
    }
    if (accessorImpl.hasProductResolutionTime()) {
      setProductResolutionTime(accessorImpl.getProductResolutionTime());
    } else {
      clearProductResolutionTime();
    }
  }
}

void FrequencyParamsType::reset() noexcept {
  frequencyRange_Accessor.reset();
  clearMinSignalStrength();
  clearRF_FrequencyResolution();
  clearProductResolutionTime();
}

uci::type::FrequencyRangeType& FrequencyParamsType::getFrequencyRange_() const {
  if (frequencyRange_Accessor) {
    return *frequencyRange_Accessor;
  }
  throw uci::base::UCIException("Error in getFrequencyRange(): An attempt was made to get an optional field that was not enabled, call hasFrequencyRange() to determine if it is safe to call getFrequencyRange()");
}

const uci::type::FrequencyRangeType& FrequencyParamsType::getFrequencyRange() const {
  return getFrequencyRange_();
}

uci::type::FrequencyRangeType& FrequencyParamsType::getFrequencyRange() {
  return getFrequencyRange_();
}

uci::type::FrequencyParamsType& FrequencyParamsType::setFrequencyRange(const uci::type::FrequencyRangeType& accessor) {
  enableFrequencyRange();
  if (&accessor != frequencyRange_Accessor.get()) {
    frequencyRange_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool FrequencyParamsType::hasFrequencyRange() const noexcept {
  return static_cast<bool>(frequencyRange_Accessor);
}

uci::type::FrequencyRangeType& FrequencyParamsType::enableFrequencyRange(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::frequencyRangeType : type};
  if ((!frequencyRange_Accessor) || (frequencyRange_Accessor->getAccessorType() != requestedType)) {
    frequencyRange_Accessor = FrequencyRangeType::create(requestedType);
    if (!frequencyRange_Accessor) {
      throw uci::base::UCIException("Error in enableFrequencyRange(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *frequencyRange_Accessor;
}

uci::type::FrequencyParamsType& FrequencyParamsType::clearFrequencyRange() noexcept {
  frequencyRange_Accessor.reset();
  return *this;
}

uci::type::MilliwattPowerRatioTypeValue FrequencyParamsType::getMinSignalStrength() const {
  if (minSignalStrength_Accessor) {
    return *minSignalStrength_Accessor;
  }
  throw uci::base::UCIException("Error in getMinSignalStrength(): An attempt was made to get an optional field that was not enabled, call hasMinSignalStrength() to determine if it is safe to call getMinSignalStrength()");
}

uci::type::FrequencyParamsType& FrequencyParamsType::setMinSignalStrength(uci::type::MilliwattPowerRatioTypeValue value) {
  minSignalStrength_Accessor = value;
  return *this;
}

bool FrequencyParamsType::hasMinSignalStrength() const noexcept {
  return minSignalStrength_Accessor.has_value();
}

uci::type::FrequencyParamsType& FrequencyParamsType::clearMinSignalStrength() noexcept {
  minSignalStrength_Accessor.reset();
  return *this;
}

xs::Double FrequencyParamsType::getRF_FrequencyResolution() const {
  if (rF_FrequencyResolution_Accessor) {
    return *rF_FrequencyResolution_Accessor;
  }
  throw uci::base::UCIException("Error in getRF_FrequencyResolution(): An attempt was made to get an optional field that was not enabled, call hasRF_FrequencyResolution() to determine if it is safe to call getRF_FrequencyResolution()");
}

uci::type::FrequencyParamsType& FrequencyParamsType::setRF_FrequencyResolution(xs::Double value) {
  rF_FrequencyResolution_Accessor = value;
  return *this;
}

bool FrequencyParamsType::hasRF_FrequencyResolution() const noexcept {
  return rF_FrequencyResolution_Accessor.has_value();
}

uci::type::FrequencyParamsType& FrequencyParamsType::clearRF_FrequencyResolution() noexcept {
  rF_FrequencyResolution_Accessor.reset();
  return *this;
}

uci::type::DurationTypeValue FrequencyParamsType::getProductResolutionTime() const {
  if (productResolutionTime_Accessor) {
    return *productResolutionTime_Accessor;
  }
  throw uci::base::UCIException("Error in getProductResolutionTime(): An attempt was made to get an optional field that was not enabled, call hasProductResolutionTime() to determine if it is safe to call getProductResolutionTime()");
}

uci::type::FrequencyParamsType& FrequencyParamsType::setProductResolutionTime(uci::type::DurationTypeValue value) {
  productResolutionTime_Accessor = value;
  return *this;
}

bool FrequencyParamsType::hasProductResolutionTime() const noexcept {
  return productResolutionTime_Accessor.has_value();
}

uci::type::FrequencyParamsType& FrequencyParamsType::clearProductResolutionTime() noexcept {
  productResolutionTime_Accessor.reset();
  return *this;
}

std::unique_ptr<FrequencyParamsType> FrequencyParamsType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::frequencyParamsType : type};
  return (requestedType == uci::type::accessorType::frequencyParamsType) ? boost::make_unique<FrequencyParamsType>() : nullptr;
}

/**  */
namespace FrequencyParamsType_Names {

constexpr const char* Extern_Type_Name{"FrequencyParamsType"};
constexpr const char* FrequencyRange_Name{"FrequencyRange"};
constexpr const char* MinSignalStrength_Name{"MinSignalStrength"};
constexpr const char* RF_FrequencyResolution_Name{"RF_FrequencyResolution"};
constexpr const char* ProductResolutionTime_Name{"ProductResolutionTime"};

} // namespace FrequencyParamsType_Names

void FrequencyParamsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::FrequencyParamsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = FrequencyParamsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + FrequencyParamsType_Names::FrequencyRange_Name) {
      FrequencyRangeType::deserialize(valueType.second, accessor.enableFrequencyRange(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + FrequencyParamsType_Names::MinSignalStrength_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMinSignalStrength(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + FrequencyParamsType_Names::RF_FrequencyResolution_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRF_FrequencyResolution(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + FrequencyParamsType_Names::ProductResolutionTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setProductResolutionTime(asb_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    }
  }
}

std::string FrequencyParamsType::serialize(const uci::type::FrequencyParamsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? FrequencyParamsType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, FrequencyParamsType_Names::Extern_Type_Name);
  }
  if (accessor.hasFrequencyRange()) {
    FrequencyRangeType::serialize(accessor.getFrequencyRange(), node, FrequencyParamsType_Names::FrequencyRange_Name);
  }
  if (accessor.hasMinSignalStrength()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getMinSignalStrength(), node, FrequencyParamsType_Names::MinSignalStrength_Name);
  }
  if (accessor.hasRF_FrequencyResolution()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getRF_FrequencyResolution(), node, FrequencyParamsType_Names::RF_FrequencyResolution_Name);
  }
  if (accessor.hasProductResolutionTime()) {
    asb_uci::util::SerializationHelpers::serializeDuration(accessor.getProductResolutionTime(), node, FrequencyParamsType_Names::ProductResolutionTime_Name);
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

uci::type::FrequencyParamsType& FrequencyParamsType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::FrequencyParamsType>().release());
}

uci::type::FrequencyParamsType& FrequencyParamsType::create(const uci::type::FrequencyParamsType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::FrequencyParamsType> newAccessor{boost::make_unique<asb_uci::type::FrequencyParamsType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void FrequencyParamsType::destroy(uci::type::FrequencyParamsType& accessor) {
  delete dynamic_cast<asb_uci::type::FrequencyParamsType*>(&accessor);
}

} // namespace type

} // namespace uci

