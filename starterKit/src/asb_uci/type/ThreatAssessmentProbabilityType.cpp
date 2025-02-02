/** @file ThreatAssessmentProbabilityType.cpp
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

#include "../../../include/asb_uci/type/ThreatAssessmentProbabilityType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DurationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PercentType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ThreatAssessmentProbabilityType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ThreatAssessmentProbabilityType::ThreatAssessmentProbabilityType() = default;

ThreatAssessmentProbabilityType::~ThreatAssessmentProbabilityType() = default;

void ThreatAssessmentProbabilityType::copy(const uci::type::ThreatAssessmentProbabilityType& accessor) {
  copyImpl(accessor, false);
}

void ThreatAssessmentProbabilityType::copyImpl(const uci::type::ThreatAssessmentProbabilityType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const ThreatAssessmentProbabilityType&>(accessor);
    if (accessorImpl.hasEffectiveProbability()) {
      setEffectiveProbability(accessorImpl.getEffectiveProbability());
    } else {
      clearEffectiveProbability();
    }
    if (accessorImpl.hasExposureTime()) {
      setExposureTime(accessorImpl.getExposureTime());
    } else {
      clearExposureTime();
    }
  }
}

void ThreatAssessmentProbabilityType::reset() noexcept {
  clearEffectiveProbability();
  clearExposureTime();
}

uci::type::PercentTypeValue ThreatAssessmentProbabilityType::getEffectiveProbability() const {
  if (effectiveProbability_Accessor) {
    return *effectiveProbability_Accessor;
  }
  throw uci::base::UCIException("Error in getEffectiveProbability(): An attempt was made to get an optional field that was not enabled, call hasEffectiveProbability() to determine if it is safe to call getEffectiveProbability()");
}

uci::type::ThreatAssessmentProbabilityType& ThreatAssessmentProbabilityType::setEffectiveProbability(uci::type::PercentTypeValue value) {
  effectiveProbability_Accessor = value;
  return *this;
}

bool ThreatAssessmentProbabilityType::hasEffectiveProbability() const noexcept {
  return effectiveProbability_Accessor.has_value();
}

uci::type::ThreatAssessmentProbabilityType& ThreatAssessmentProbabilityType::clearEffectiveProbability() noexcept {
  effectiveProbability_Accessor.reset();
  return *this;
}

uci::type::DurationTypeValue ThreatAssessmentProbabilityType::getExposureTime() const {
  if (exposureTime_Accessor) {
    return *exposureTime_Accessor;
  }
  throw uci::base::UCIException("Error in getExposureTime(): An attempt was made to get an optional field that was not enabled, call hasExposureTime() to determine if it is safe to call getExposureTime()");
}

uci::type::ThreatAssessmentProbabilityType& ThreatAssessmentProbabilityType::setExposureTime(uci::type::DurationTypeValue value) {
  exposureTime_Accessor = value;
  return *this;
}

bool ThreatAssessmentProbabilityType::hasExposureTime() const noexcept {
  return exposureTime_Accessor.has_value();
}

uci::type::ThreatAssessmentProbabilityType& ThreatAssessmentProbabilityType::clearExposureTime() noexcept {
  exposureTime_Accessor.reset();
  return *this;
}

std::unique_ptr<ThreatAssessmentProbabilityType> ThreatAssessmentProbabilityType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::threatAssessmentProbabilityType : type};
  return (requestedType == uci::type::accessorType::threatAssessmentProbabilityType) ? boost::make_unique<ThreatAssessmentProbabilityType>() : nullptr;
}

/**  */
namespace ThreatAssessmentProbabilityType_Names {

constexpr const char* Extern_Type_Name{"ThreatAssessmentProbabilityType"};
constexpr const char* EffectiveProbability_Name{"EffectiveProbability"};
constexpr const char* ExposureTime_Name{"ExposureTime"};

} // namespace ThreatAssessmentProbabilityType_Names

void ThreatAssessmentProbabilityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ThreatAssessmentProbabilityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ThreatAssessmentProbabilityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ThreatAssessmentProbabilityType_Names::EffectiveProbability_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEffectiveProbability(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ThreatAssessmentProbabilityType_Names::ExposureTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setExposureTime(asb_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    }
  }
}

std::string ThreatAssessmentProbabilityType::serialize(const uci::type::ThreatAssessmentProbabilityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ThreatAssessmentProbabilityType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ThreatAssessmentProbabilityType_Names::Extern_Type_Name);
  }
  if (accessor.hasEffectiveProbability()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getEffectiveProbability(), node, ThreatAssessmentProbabilityType_Names::EffectiveProbability_Name);
  }
  if (accessor.hasExposureTime()) {
    asb_uci::util::SerializationHelpers::serializeDuration(accessor.getExposureTime(), node, ThreatAssessmentProbabilityType_Names::ExposureTime_Name);
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

uci::type::ThreatAssessmentProbabilityType& ThreatAssessmentProbabilityType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ThreatAssessmentProbabilityType>().release());
}

uci::type::ThreatAssessmentProbabilityType& ThreatAssessmentProbabilityType::create(const uci::type::ThreatAssessmentProbabilityType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ThreatAssessmentProbabilityType> newAccessor{boost::make_unique<asb_uci::type::ThreatAssessmentProbabilityType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ThreatAssessmentProbabilityType::destroy(uci::type::ThreatAssessmentProbabilityType& accessor) {
  delete dynamic_cast<asb_uci::type::ThreatAssessmentProbabilityType*>(&accessor);
}

} // namespace type

} // namespace uci

