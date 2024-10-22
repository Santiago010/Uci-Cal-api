/** @file ThreatExposureProbabilityType.cpp
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

#include "../../../include/asb_uci/type/ThreatExposureProbabilityType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PercentType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ThreatExposureProbabilityType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ThreatExposureProbabilityType::ThreatExposureProbabilityType() = default;

ThreatExposureProbabilityType::~ThreatExposureProbabilityType() = default;

void ThreatExposureProbabilityType::copy(const uci::type::ThreatExposureProbabilityType& accessor) {
  copyImpl(accessor, false);
}

void ThreatExposureProbabilityType::copyImpl(const uci::type::ThreatExposureProbabilityType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const ThreatExposureProbabilityType&>(accessor);
    setTimeIndex(accessorImpl.timeIndex_Accessor);
    setProbabilityOfDetection(accessorImpl.probabilityOfDetection_Accessor);
  }
}

void ThreatExposureProbabilityType::reset() noexcept {
  timeIndex_Accessor = 0;
  probabilityOfDetection_Accessor = 0.0;
}

uci::type::DateTimeTypeValue ThreatExposureProbabilityType::getTimeIndex() const {
  return timeIndex_Accessor;
}

uci::type::ThreatExposureProbabilityType& ThreatExposureProbabilityType::setTimeIndex(uci::type::DateTimeTypeValue value) {
  timeIndex_Accessor = value;
  return *this;
}


uci::type::PercentTypeValue ThreatExposureProbabilityType::getProbabilityOfDetection() const {
  return probabilityOfDetection_Accessor;
}

uci::type::ThreatExposureProbabilityType& ThreatExposureProbabilityType::setProbabilityOfDetection(uci::type::PercentTypeValue value) {
  probabilityOfDetection_Accessor = value;
  return *this;
}


std::unique_ptr<ThreatExposureProbabilityType> ThreatExposureProbabilityType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::threatExposureProbabilityType : type};
  return (requestedType == uci::type::accessorType::threatExposureProbabilityType) ? boost::make_unique<ThreatExposureProbabilityType>() : nullptr;
}

/**  */
namespace ThreatExposureProbabilityType_Names {

constexpr const char* Extern_Type_Name{"ThreatExposureProbabilityType"};
constexpr const char* TimeIndex_Name{"TimeIndex"};
constexpr const char* ProbabilityOfDetection_Name{"ProbabilityOfDetection"};

} // namespace ThreatExposureProbabilityType_Names

void ThreatExposureProbabilityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ThreatExposureProbabilityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ThreatExposureProbabilityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ThreatExposureProbabilityType_Names::TimeIndex_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTimeIndex(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + ThreatExposureProbabilityType_Names::ProbabilityOfDetection_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setProbabilityOfDetection(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    }
  }
}

std::string ThreatExposureProbabilityType::serialize(const uci::type::ThreatExposureProbabilityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ThreatExposureProbabilityType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ThreatExposureProbabilityType_Names::Extern_Type_Name);
  }
  asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getTimeIndex(), node, ThreatExposureProbabilityType_Names::TimeIndex_Name);
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getProbabilityOfDetection(), node, ThreatExposureProbabilityType_Names::ProbabilityOfDetection_Name);
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

uci::type::ThreatExposureProbabilityType& ThreatExposureProbabilityType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ThreatExposureProbabilityType>().release());
}

uci::type::ThreatExposureProbabilityType& ThreatExposureProbabilityType::create(const uci::type::ThreatExposureProbabilityType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ThreatExposureProbabilityType> newAccessor{boost::make_unique<asb_uci::type::ThreatExposureProbabilityType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ThreatExposureProbabilityType::destroy(uci::type::ThreatExposureProbabilityType& accessor) {
  delete dynamic_cast<asb_uci::type::ThreatExposureProbabilityType*>(&accessor);
}

} // namespace type

} // namespace uci

