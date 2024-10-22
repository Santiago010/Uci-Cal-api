/** @file TimeCoverageType.cpp
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

#include "../../../include/asb_uci/type/TimeCoverageType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/DateTimeRangeType.h"
#include "../../../include/asb_uci/type/ZoneType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeRangeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TimeCoverageType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ZoneType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

TimeCoverageType::TimeCoverageType()
  : timeSpan_Accessor{boost::make_unique<DateTimeRangeType>()} {
}

TimeCoverageType::~TimeCoverageType() = default;

void TimeCoverageType::copy(const uci::type::TimeCoverageType& accessor) {
  copyImpl(accessor, false);
}

void TimeCoverageType::copyImpl(const uci::type::TimeCoverageType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const TimeCoverageType&>(accessor);
    setTimeSpan(*(accessorImpl.timeSpan_Accessor));
    if (accessorImpl.coverageArea_Accessor) {
      setCoverageArea(*(accessorImpl.coverageArea_Accessor));
    } else {
      coverageArea_Accessor.reset();
    }
  }
}

void TimeCoverageType::reset() noexcept {
  timeSpan_Accessor->reset();
  coverageArea_Accessor.reset();
}

const uci::type::DateTimeRangeType& TimeCoverageType::getTimeSpan() const {
  return *timeSpan_Accessor;
}

uci::type::DateTimeRangeType& TimeCoverageType::getTimeSpan() {
  return *timeSpan_Accessor;
}

uci::type::TimeCoverageType& TimeCoverageType::setTimeSpan(const uci::type::DateTimeRangeType& accessor) {
  if (&accessor != timeSpan_Accessor.get()) {
    timeSpan_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ZoneType& TimeCoverageType::getCoverageArea_() const {
  if (coverageArea_Accessor) {
    return *coverageArea_Accessor;
  }
  throw uci::base::UCIException("Error in getCoverageArea(): An attempt was made to get an optional field that was not enabled, call hasCoverageArea() to determine if it is safe to call getCoverageArea()");
}

const uci::type::ZoneType& TimeCoverageType::getCoverageArea() const {
  return getCoverageArea_();
}

uci::type::ZoneType& TimeCoverageType::getCoverageArea() {
  return getCoverageArea_();
}

uci::type::TimeCoverageType& TimeCoverageType::setCoverageArea(const uci::type::ZoneType& accessor) {
  enableCoverageArea(accessor.getAccessorType());
  if (&accessor != coverageArea_Accessor.get()) {
    coverageArea_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool TimeCoverageType::hasCoverageArea() const noexcept {
  return static_cast<bool>(coverageArea_Accessor);
}

uci::type::ZoneType& TimeCoverageType::enableCoverageArea(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::zoneType : type};
  if ((!coverageArea_Accessor) || (coverageArea_Accessor->getAccessorType() != requestedType)) {
    coverageArea_Accessor = ZoneType::create(requestedType);
    if (!coverageArea_Accessor) {
      throw uci::base::UCIException("Error in enableCoverageArea(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *coverageArea_Accessor;
}

uci::type::TimeCoverageType& TimeCoverageType::clearCoverageArea() noexcept {
  coverageArea_Accessor.reset();
  return *this;
}

std::unique_ptr<TimeCoverageType> TimeCoverageType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::timeCoverageType : type};
  return (requestedType == uci::type::accessorType::timeCoverageType) ? boost::make_unique<TimeCoverageType>() : nullptr;
}

/**  */
namespace TimeCoverageType_Names {

constexpr const char* Extern_Type_Name{"TimeCoverageType"};
constexpr const char* TimeSpan_Name{"TimeSpan"};
constexpr const char* CoverageArea_Name{"CoverageArea"};

} // namespace TimeCoverageType_Names

void TimeCoverageType::deserialize(const boost::property_tree::ptree& propTree, uci::type::TimeCoverageType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = TimeCoverageType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + TimeCoverageType_Names::TimeSpan_Name) {
      DateTimeRangeType::deserialize(valueType.second, accessor.getTimeSpan(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + TimeCoverageType_Names::CoverageArea_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableCoverageArea(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    }
  }
}

std::string TimeCoverageType::serialize(const uci::type::TimeCoverageType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? TimeCoverageType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, TimeCoverageType_Names::Extern_Type_Name);
  }
  DateTimeRangeType::serialize(accessor.getTimeSpan(), node, TimeCoverageType_Names::TimeSpan_Name);
  if (accessor.hasCoverageArea()) {
    ZoneType::serialize(accessor.getCoverageArea(), node, TimeCoverageType_Names::CoverageArea_Name);
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

uci::type::TimeCoverageType& TimeCoverageType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::TimeCoverageType>().release());
}

uci::type::TimeCoverageType& TimeCoverageType::create(const uci::type::TimeCoverageType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::TimeCoverageType> newAccessor{boost::make_unique<asb_uci::type::TimeCoverageType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void TimeCoverageType::destroy(uci::type::TimeCoverageType& accessor) {
  delete dynamic_cast<asb_uci::type::TimeCoverageType*>(&accessor);
}

} // namespace type

} // namespace uci

