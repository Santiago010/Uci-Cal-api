/** @file TimedZoneType.cpp
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

#include "../../../include/asb_uci/type/TimedZoneType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ScheduleType.h"
#include "../../../include/asb_uci/type/ZoneType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ScheduleType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TimedZoneType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

TimedZoneType::TimedZoneType()
  : schedule_Accessor{boost::make_unique<ScheduleType>()} {
}

TimedZoneType::~TimedZoneType() = default;

void TimedZoneType::copy(const uci::type::TimedZoneType& accessor) {
  copyImpl(accessor, false);
}

void TimedZoneType::copyImpl(const uci::type::TimedZoneType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    ZoneType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const TimedZoneType&>(accessor);
    setSchedule(*(accessorImpl.schedule_Accessor));
  }
}

void TimedZoneType::reset() noexcept {
  ZoneType::reset();
  schedule_Accessor->reset();
}

const uci::type::ScheduleType& TimedZoneType::getSchedule() const {
  return *schedule_Accessor;
}

uci::type::ScheduleType& TimedZoneType::getSchedule() {
  return *schedule_Accessor;
}

uci::type::TimedZoneType& TimedZoneType::setSchedule(const uci::type::ScheduleType& accessor) {
  if (&accessor != schedule_Accessor.get()) {
    schedule_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<TimedZoneType> TimedZoneType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::timedZoneType : type};
  return (requestedType == uci::type::accessorType::timedZoneType) ? boost::make_unique<TimedZoneType>() : nullptr;
}

/**  */
namespace TimedZoneType_Names {

constexpr const char* Extern_Type_Name{"TimedZoneType"};
constexpr const char* Schedule_Name{"Schedule"};

} // namespace TimedZoneType_Names

void TimedZoneType::deserialize(const boost::property_tree::ptree& propTree, uci::type::TimedZoneType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = TimedZoneType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + TimedZoneType_Names::Schedule_Name) {
      ScheduleType::deserialize(valueType.second, accessor.getSchedule(), nodeName, nsPrefix);
    }
  }
  ZoneType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string TimedZoneType::serialize(const uci::type::TimedZoneType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? TimedZoneType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, TimedZoneType_Names::Extern_Type_Name);
  }
  ZoneType::serialize(accessor, node, "", false, false, false);
  ScheduleType::serialize(accessor.getSchedule(), node, TimedZoneType_Names::Schedule_Name);
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

uci::type::TimedZoneType& TimedZoneType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::TimedZoneType>().release());
}

uci::type::TimedZoneType& TimedZoneType::create(const uci::type::TimedZoneType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::TimedZoneType> newAccessor{boost::make_unique<asb_uci::type::TimedZoneType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void TimedZoneType::destroy(uci::type::TimedZoneType& accessor) {
  delete dynamic_cast<asb_uci::type::TimedZoneType*>(&accessor);
}

} // namespace type

} // namespace uci

