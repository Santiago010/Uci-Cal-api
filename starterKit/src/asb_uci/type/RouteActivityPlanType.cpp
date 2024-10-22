/** @file RouteActivityPlanType.cpp
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

#include "../../../include/asb_uci/type/RouteActivityPlanType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ActivityPlanPartsType.h"
#include "../../../include/asb_uci/type/DateTimeRangeType.h"
#include "../../../include/asb_uci/type/PlanApplicabilityType.h"
#include "../../../include/asb_uci/type/RouteActivityType.h"
#include "../../../include/asb_uci/type/RoutePlanID_Type.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActivityPlanPartsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeRangeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanApplicabilityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RouteActivityPlanType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RouteActivityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RoutePlanID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

RouteActivityPlanType::RouteActivityPlanType()
  : applicability_Accessor{boost::make_unique<PlanApplicabilityType>()},
    associatedRoutePlanID_Accessor{boost::make_unique<RoutePlanID_Type>()},
    parts_Accessor{boost::make_unique<ActivityPlanPartsType>()},
    plannedActivity_Accessor{boost::make_unique<PlannedActivity>(1, SIZE_MAX)} {
}

RouteActivityPlanType::~RouteActivityPlanType() = default;

void RouteActivityPlanType::copy(const uci::type::RouteActivityPlanType& accessor) {
  copyImpl(accessor, false);
}

void RouteActivityPlanType::copyImpl(const uci::type::RouteActivityPlanType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const RouteActivityPlanType&>(accessor);
    setApplicability(*(accessorImpl.applicability_Accessor));
    setAssociatedRoutePlanID(*(accessorImpl.associatedRoutePlanID_Accessor));
    if (accessorImpl.window_Accessor) {
      setWindow(*(accessorImpl.window_Accessor));
    } else {
      window_Accessor.reset();
    }
    setParts(*(accessorImpl.parts_Accessor));
    setPlannedActivity(*(accessorImpl.plannedActivity_Accessor));
  }
}

void RouteActivityPlanType::reset() noexcept {
  applicability_Accessor->reset();
  associatedRoutePlanID_Accessor->reset();
  window_Accessor.reset();
  if (parts_Accessor->getAccessorType() != uci::type::accessorType::activityPlanPartsType) {
    parts_Accessor = boost::make_unique<ActivityPlanPartsType>();
  } else {
    parts_Accessor->reset();
  }
  plannedActivity_Accessor->reset();
}

const uci::type::PlanApplicabilityType& RouteActivityPlanType::getApplicability() const {
  return *applicability_Accessor;
}

uci::type::PlanApplicabilityType& RouteActivityPlanType::getApplicability() {
  return *applicability_Accessor;
}

uci::type::RouteActivityPlanType& RouteActivityPlanType::setApplicability(const uci::type::PlanApplicabilityType& accessor) {
  if (&accessor != applicability_Accessor.get()) {
    applicability_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::RoutePlanID_Type& RouteActivityPlanType::getAssociatedRoutePlanID() const {
  return *associatedRoutePlanID_Accessor;
}

uci::type::RoutePlanID_Type& RouteActivityPlanType::getAssociatedRoutePlanID() {
  return *associatedRoutePlanID_Accessor;
}

uci::type::RouteActivityPlanType& RouteActivityPlanType::setAssociatedRoutePlanID(const uci::type::RoutePlanID_Type& accessor) {
  if (&accessor != associatedRoutePlanID_Accessor.get()) {
    associatedRoutePlanID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::DateTimeRangeType& RouteActivityPlanType::getWindow_() const {
  if (window_Accessor) {
    return *window_Accessor;
  }
  throw uci::base::UCIException("Error in getWindow(): An attempt was made to get an optional field that was not enabled, call hasWindow() to determine if it is safe to call getWindow()");
}

const uci::type::DateTimeRangeType& RouteActivityPlanType::getWindow() const {
  return getWindow_();
}

uci::type::DateTimeRangeType& RouteActivityPlanType::getWindow() {
  return getWindow_();
}

uci::type::RouteActivityPlanType& RouteActivityPlanType::setWindow(const uci::type::DateTimeRangeType& accessor) {
  enableWindow();
  if (&accessor != window_Accessor.get()) {
    window_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RouteActivityPlanType::hasWindow() const noexcept {
  return static_cast<bool>(window_Accessor);
}

uci::type::DateTimeRangeType& RouteActivityPlanType::enableWindow(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::dateTimeRangeType : type};
  if ((!window_Accessor) || (window_Accessor->getAccessorType() != requestedType)) {
    window_Accessor = DateTimeRangeType::create(requestedType);
    if (!window_Accessor) {
      throw uci::base::UCIException("Error in enableWindow(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *window_Accessor;
}

uci::type::RouteActivityPlanType& RouteActivityPlanType::clearWindow() noexcept {
  window_Accessor.reset();
  return *this;
}

const uci::type::ActivityPlanPartsType& RouteActivityPlanType::getParts() const {
  return *parts_Accessor;
}

uci::type::ActivityPlanPartsType& RouteActivityPlanType::getParts() {
  return *parts_Accessor;
}

uci::type::RouteActivityPlanType& RouteActivityPlanType::setParts(const uci::type::ActivityPlanPartsType& accessor) {
  enableParts(accessor.getAccessorType());
  if (&accessor != parts_Accessor.get()) {
    parts_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

uci::type::ActivityPlanPartsType& RouteActivityPlanType::enableParts(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::activityPlanPartsType : type};
  if ((!parts_Accessor) || (parts_Accessor->getAccessorType() != requestedType)) {
    parts_Accessor = ActivityPlanPartsType::create(requestedType);
    if (!parts_Accessor) {
      throw uci::base::UCIException("Error in enableParts(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *parts_Accessor;
}

const uci::type::RouteActivityPlanType::PlannedActivity& RouteActivityPlanType::getPlannedActivity() const {
  return *plannedActivity_Accessor;
}

uci::type::RouteActivityPlanType::PlannedActivity& RouteActivityPlanType::getPlannedActivity() {
  return *plannedActivity_Accessor;
}

uci::type::RouteActivityPlanType& RouteActivityPlanType::setPlannedActivity(const uci::type::RouteActivityPlanType::PlannedActivity& accessor) {
  if (&accessor != plannedActivity_Accessor.get()) {
    plannedActivity_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<RouteActivityPlanType> RouteActivityPlanType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::routeActivityPlanType : type};
  return (requestedType == uci::type::accessorType::routeActivityPlanType) ? boost::make_unique<RouteActivityPlanType>() : nullptr;
}

/**  */
namespace RouteActivityPlanType_Names {

constexpr const char* Extern_Type_Name{"RouteActivityPlanType"};
constexpr const char* Applicability_Name{"Applicability"};
constexpr const char* AssociatedRoutePlanID_Name{"AssociatedRoutePlanID"};
constexpr const char* Window_Name{"Window"};
constexpr const char* Parts_Name{"Parts"};
constexpr const char* PlannedActivity_Name{"PlannedActivity"};

} // namespace RouteActivityPlanType_Names

void RouteActivityPlanType::deserialize(const boost::property_tree::ptree& propTree, uci::type::RouteActivityPlanType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RouteActivityPlanType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RouteActivityPlanType_Names::Applicability_Name) {
      PlanApplicabilityType::deserialize(valueType.second, accessor.getApplicability(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RouteActivityPlanType_Names::AssociatedRoutePlanID_Name) {
      RoutePlanID_Type::deserialize(valueType.second, accessor.getAssociatedRoutePlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RouteActivityPlanType_Names::Window_Name) {
      DateTimeRangeType::deserialize(valueType.second, accessor.enableWindow(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RouteActivityPlanType_Names::Parts_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableParts(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RouteActivityPlanType_Names::PlannedActivity_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::RouteActivityPlanType::PlannedActivity& boundedList = accessor.getPlannedActivity();
        const uci::type::RouteActivityPlanType::PlannedActivity::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::RouteActivityType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string RouteActivityPlanType::serialize(const uci::type::RouteActivityPlanType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? RouteActivityPlanType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, RouteActivityPlanType_Names::Extern_Type_Name);
  }
  PlanApplicabilityType::serialize(accessor.getApplicability(), node, RouteActivityPlanType_Names::Applicability_Name);
  RoutePlanID_Type::serialize(accessor.getAssociatedRoutePlanID(), node, RouteActivityPlanType_Names::AssociatedRoutePlanID_Name);
  if (accessor.hasWindow()) {
    DateTimeRangeType::serialize(accessor.getWindow(), node, RouteActivityPlanType_Names::Window_Name);
  }
  ActivityPlanPartsType::serialize(accessor.getParts(), node, RouteActivityPlanType_Names::Parts_Name);
  {
    const uci::type::RouteActivityPlanType::PlannedActivity& boundedList = accessor.getPlannedActivity();
    for (uci::type::RouteActivityPlanType::PlannedActivity::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::RouteActivityType::serialize(boundedList.at(i), node, RouteActivityPlanType_Names::PlannedActivity_Name);
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

uci::type::RouteActivityPlanType& RouteActivityPlanType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::RouteActivityPlanType>().release());
}

uci::type::RouteActivityPlanType& RouteActivityPlanType::create(const uci::type::RouteActivityPlanType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::RouteActivityPlanType> newAccessor{boost::make_unique<asb_uci::type::RouteActivityPlanType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void RouteActivityPlanType::destroy(uci::type::RouteActivityPlanType& accessor) {
  delete dynamic_cast<asb_uci::type::RouteActivityPlanType*>(&accessor);
}

} // namespace type

} // namespace uci

