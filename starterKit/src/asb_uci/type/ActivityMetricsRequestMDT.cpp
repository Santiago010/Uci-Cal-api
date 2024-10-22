/** @file ActivityMetricsRequestMDT.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:11 PM
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

#include "../../../include/asb_uci/type/ActivityMetricsRequestMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ActivityPlanID_Type.h"
#include "../../../include/asb_uci/type/ActivityPlanPartsEnum.h"
#include "../../../include/asb_uci/type/RequestBaseType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActivityMetricsRequestMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActivityPlanID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActivityPlanPartsEnum.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ActivityMetricsRequestMDT::ActivityMetricsRequestMDT()
  : activityPlanID_Accessor{boost::make_unique<ActivityPlanID_Type>()},
    activityPlanParts_Accessor{boost::make_unique<ActivityPlanParts>(0, 9)} {
}

ActivityMetricsRequestMDT::~ActivityMetricsRequestMDT() = default;

void ActivityMetricsRequestMDT::copy(const uci::type::ActivityMetricsRequestMDT& accessor) {
  copyImpl(accessor, false);
}

void ActivityMetricsRequestMDT::copyImpl(const uci::type::ActivityMetricsRequestMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    RequestBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const ActivityMetricsRequestMDT&>(accessor);
    setActivityPlanID(*(accessorImpl.activityPlanID_Accessor));
    setActivityPlanParts(*(accessorImpl.activityPlanParts_Accessor));
  }
}

void ActivityMetricsRequestMDT::reset() noexcept {
  RequestBaseType::reset();
  activityPlanID_Accessor->reset();
  activityPlanParts_Accessor->reset();
}

const uci::type::ActivityPlanID_Type& ActivityMetricsRequestMDT::getActivityPlanID() const {
  return *activityPlanID_Accessor;
}

uci::type::ActivityPlanID_Type& ActivityMetricsRequestMDT::getActivityPlanID() {
  return *activityPlanID_Accessor;
}

uci::type::ActivityMetricsRequestMDT& ActivityMetricsRequestMDT::setActivityPlanID(const uci::type::ActivityPlanID_Type& accessor) {
  if (&accessor != activityPlanID_Accessor.get()) {
    activityPlanID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ActivityMetricsRequestMDT::ActivityPlanParts& ActivityMetricsRequestMDT::getActivityPlanParts() const {
  return *activityPlanParts_Accessor;
}

uci::type::ActivityMetricsRequestMDT::ActivityPlanParts& ActivityMetricsRequestMDT::getActivityPlanParts() {
  return *activityPlanParts_Accessor;
}

uci::type::ActivityMetricsRequestMDT& ActivityMetricsRequestMDT::setActivityPlanParts(const uci::type::ActivityMetricsRequestMDT::ActivityPlanParts& accessor) {
  if (&accessor != activityPlanParts_Accessor.get()) {
    activityPlanParts_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<ActivityMetricsRequestMDT> ActivityMetricsRequestMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::activityMetricsRequestMDT : type};
  return (requestedType == uci::type::accessorType::activityMetricsRequestMDT) ? boost::make_unique<ActivityMetricsRequestMDT>() : nullptr;
}

/**  */
namespace ActivityMetricsRequestMDT_Names {

constexpr const char* Extern_Type_Name{"ActivityMetricsRequestMDT"};
constexpr const char* ActivityPlanID_Name{"ActivityPlanID"};
constexpr const char* ActivityPlanParts_Name{"ActivityPlanParts"};

} // namespace ActivityMetricsRequestMDT_Names

void ActivityMetricsRequestMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ActivityMetricsRequestMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ActivityMetricsRequestMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ActivityMetricsRequestMDT_Names::ActivityPlanID_Name) {
      ActivityPlanID_Type::deserialize(valueType.second, accessor.getActivityPlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ActivityMetricsRequestMDT_Names::ActivityPlanParts_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ActivityMetricsRequestMDT::ActivityPlanParts& boundedList = accessor.getActivityPlanParts();
        const uci::type::ActivityMetricsRequestMDT::ActivityPlanParts::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    }
  }
  RequestBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string ActivityMetricsRequestMDT::serialize(const uci::type::ActivityMetricsRequestMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ActivityMetricsRequestMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ActivityMetricsRequestMDT_Names::Extern_Type_Name);
  }
  RequestBaseType::serialize(accessor, node, "", false, false, false);
  ActivityPlanID_Type::serialize(accessor.getActivityPlanID(), node, ActivityMetricsRequestMDT_Names::ActivityPlanID_Name);
  {
    const uci::type::ActivityMetricsRequestMDT::ActivityPlanParts& boundedList = accessor.getActivityPlanParts();
    for (uci::type::ActivityMetricsRequestMDT::ActivityPlanParts::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      ActivityPlanPartsEnum::serialize(boundedList.at(i), node, ActivityMetricsRequestMDT_Names::ActivityPlanParts_Name, false);
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

uci::type::ActivityMetricsRequestMDT& ActivityMetricsRequestMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ActivityMetricsRequestMDT>().release());
}

uci::type::ActivityMetricsRequestMDT& ActivityMetricsRequestMDT::create(const uci::type::ActivityMetricsRequestMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ActivityMetricsRequestMDT> newAccessor{boost::make_unique<asb_uci::type::ActivityMetricsRequestMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ActivityMetricsRequestMDT::destroy(uci::type::ActivityMetricsRequestMDT& accessor) {
  delete dynamic_cast<asb_uci::type::ActivityMetricsRequestMDT*>(&accessor);
}

} // namespace type

} // namespace uci

