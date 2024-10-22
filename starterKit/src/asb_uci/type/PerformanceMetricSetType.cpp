/** @file PerformanceMetricSetType.cpp
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

#include "../../../include/asb_uci/type/PerformanceMetricSetType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/MetricValueType.h"
#include "../../../include/asb_uci/type/NegotiableOptionsEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MetricValueType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/NegotiableOptionsEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PerformanceMetricSetType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PerformanceMetricSetType::PerformanceMetricSetType()
  : performanceMetricSet_Accessor{boost::make_unique<PerformanceMetricSet>(1, SIZE_MAX)} {
}

PerformanceMetricSetType::~PerformanceMetricSetType() = default;

void PerformanceMetricSetType::copy(const uci::type::PerformanceMetricSetType& accessor) {
  copyImpl(accessor, false);
}

void PerformanceMetricSetType::copyImpl(const uci::type::PerformanceMetricSetType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PerformanceMetricSetType&>(accessor);
    setPerformanceConstraintIndex(accessorImpl.performanceConstraintIndex_Accessor);
    setMerit(accessorImpl.merit_Accessor);
    if (accessorImpl.negotiableOptions_Accessor) {
      setNegotiableOptions(*(accessorImpl.negotiableOptions_Accessor));
    } else {
      negotiableOptions_Accessor.reset();
    }
    setPerformanceMetricSet(*(accessorImpl.performanceMetricSet_Accessor));
  }
}

void PerformanceMetricSetType::reset() noexcept {
  performanceConstraintIndex_Accessor = 0;
  merit_Accessor = 0;
  negotiableOptions_Accessor.reset();
  performanceMetricSet_Accessor->reset();
}

xs::UnsignedInt PerformanceMetricSetType::getPerformanceConstraintIndex() const {
  return performanceConstraintIndex_Accessor;
}

uci::type::PerformanceMetricSetType& PerformanceMetricSetType::setPerformanceConstraintIndex(xs::UnsignedInt value) {
  performanceConstraintIndex_Accessor = value;
  return *this;
}


xs::Int PerformanceMetricSetType::getMerit() const {
  return merit_Accessor;
}

uci::type::PerformanceMetricSetType& PerformanceMetricSetType::setMerit(xs::Int value) {
  merit_Accessor = value;
  return *this;
}


uci::type::NegotiableOptionsEnum& PerformanceMetricSetType::getNegotiableOptions_() const {
  if (negotiableOptions_Accessor) {
    return *negotiableOptions_Accessor;
  }
  throw uci::base::UCIException("Error in getNegotiableOptions(): An attempt was made to get an optional field that was not enabled, call hasNegotiableOptions() to determine if it is safe to call getNegotiableOptions()");
}

const uci::type::NegotiableOptionsEnum& PerformanceMetricSetType::getNegotiableOptions() const {
  return getNegotiableOptions_();
}

uci::type::NegotiableOptionsEnum& PerformanceMetricSetType::getNegotiableOptions() {
  return getNegotiableOptions_();
}

uci::type::PerformanceMetricSetType& PerformanceMetricSetType::setNegotiableOptions(const uci::type::NegotiableOptionsEnum& accessor) {
  enableNegotiableOptions();
  if (&accessor != negotiableOptions_Accessor.get()) {
    negotiableOptions_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::PerformanceMetricSetType& PerformanceMetricSetType::setNegotiableOptions(const uci::type::NegotiableOptionsEnum::EnumerationItem value) {
  enableNegotiableOptions().setValue(value);
  return *this;
}

bool PerformanceMetricSetType::hasNegotiableOptions() const noexcept {
  return static_cast<bool>(negotiableOptions_Accessor);
}

uci::type::NegotiableOptionsEnum& PerformanceMetricSetType::enableNegotiableOptions(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::negotiableOptionsEnum : type};
  if ((!negotiableOptions_Accessor) || (negotiableOptions_Accessor->getAccessorType() != requestedType)) {
    negotiableOptions_Accessor = NegotiableOptionsEnum::create(requestedType);
    if (!negotiableOptions_Accessor) {
      throw uci::base::UCIException("Error in enableNegotiableOptions(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *negotiableOptions_Accessor;
}

uci::type::PerformanceMetricSetType& PerformanceMetricSetType::clearNegotiableOptions() noexcept {
  negotiableOptions_Accessor.reset();
  return *this;
}

const uci::type::PerformanceMetricSetType::PerformanceMetricSet& PerformanceMetricSetType::getPerformanceMetricSet() const {
  return *performanceMetricSet_Accessor;
}

uci::type::PerformanceMetricSetType::PerformanceMetricSet& PerformanceMetricSetType::getPerformanceMetricSet() {
  return *performanceMetricSet_Accessor;
}

uci::type::PerformanceMetricSetType& PerformanceMetricSetType::setPerformanceMetricSet(const uci::type::PerformanceMetricSetType::PerformanceMetricSet& accessor) {
  if (&accessor != performanceMetricSet_Accessor.get()) {
    performanceMetricSet_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<PerformanceMetricSetType> PerformanceMetricSetType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::performanceMetricSetType : type};
  return (requestedType == uci::type::accessorType::performanceMetricSetType) ? boost::make_unique<PerformanceMetricSetType>() : nullptr;
}

/**  */
namespace PerformanceMetricSetType_Names {

constexpr const char* Extern_Type_Name{"PerformanceMetricSetType"};
constexpr const char* PerformanceConstraintIndex_Name{"PerformanceConstraintIndex"};
constexpr const char* Merit_Name{"Merit"};
constexpr const char* NegotiableOptions_Name{"NegotiableOptions"};
constexpr const char* PerformanceMetricSet_Name{"PerformanceMetricSet"};

} // namespace PerformanceMetricSetType_Names

void PerformanceMetricSetType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PerformanceMetricSetType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PerformanceMetricSetType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PerformanceMetricSetType_Names::PerformanceConstraintIndex_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPerformanceConstraintIndex(asb_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    } else if (valueType.first == nsPrefix + PerformanceMetricSetType_Names::Merit_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMerit(asb_uci::util::SerializationHelpers::deserializeInt(*value));
      }
    } else if (valueType.first == nsPrefix + PerformanceMetricSetType_Names::NegotiableOptions_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableNegotiableOptions().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + PerformanceMetricSetType_Names::PerformanceMetricSet_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PerformanceMetricSetType::PerformanceMetricSet& boundedList = accessor.getPerformanceMetricSet();
        const uci::type::PerformanceMetricSetType::PerformanceMetricSet::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::MetricValueType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string PerformanceMetricSetType::serialize(const uci::type::PerformanceMetricSetType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PerformanceMetricSetType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PerformanceMetricSetType_Names::Extern_Type_Name);
  }
  asb_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getPerformanceConstraintIndex(), node, PerformanceMetricSetType_Names::PerformanceConstraintIndex_Name);
  asb_uci::util::SerializationHelpers::serializeInt(accessor.getMerit(), node, PerformanceMetricSetType_Names::Merit_Name);
  if (accessor.hasNegotiableOptions()) {
    NegotiableOptionsEnum::serialize(accessor.getNegotiableOptions(), node, PerformanceMetricSetType_Names::NegotiableOptions_Name, false);
  }
  {
    const uci::type::PerformanceMetricSetType::PerformanceMetricSet& boundedList = accessor.getPerformanceMetricSet();
    for (uci::type::PerformanceMetricSetType::PerformanceMetricSet::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::MetricValueType::serialize(boundedList.at(i), node, PerformanceMetricSetType_Names::PerformanceMetricSet_Name);
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

uci::type::PerformanceMetricSetType& PerformanceMetricSetType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PerformanceMetricSetType>().release());
}

uci::type::PerformanceMetricSetType& PerformanceMetricSetType::create(const uci::type::PerformanceMetricSetType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PerformanceMetricSetType> newAccessor{boost::make_unique<asb_uci::type::PerformanceMetricSetType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PerformanceMetricSetType::destroy(uci::type::PerformanceMetricSetType& accessor) {
  delete dynamic_cast<asb_uci::type::PerformanceMetricSetType*>(&accessor);
}

} // namespace type

} // namespace uci

