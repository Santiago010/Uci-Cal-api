/** @file ActivityPlanStatusType.cpp
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

#include "../../../include/asb_uci/type/ActivityPlanStatusType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ActivityPlanPartsEnum.h"
#include "../../../include/asb_uci/type/PlanStatusType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActivityPlanPartsEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActivityPlanStatusType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ActivityPlanStatusType::ActivityPlanStatusType()
  : planPart_Accessor{boost::make_unique<PlanPart>(1, 9)} {
}

ActivityPlanStatusType::~ActivityPlanStatusType() = default;

void ActivityPlanStatusType::copy(const uci::type::ActivityPlanStatusType& accessor) {
  copyImpl(accessor, false);
}

void ActivityPlanStatusType::copyImpl(const uci::type::ActivityPlanStatusType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    PlanStatusType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const ActivityPlanStatusType&>(accessor);
    setPlanPart(*(accessorImpl.planPart_Accessor));
  }
}

void ActivityPlanStatusType::reset() noexcept {
  PlanStatusType::reset();
  planPart_Accessor->reset();
}

const uci::type::ActivityPlanStatusType::PlanPart& ActivityPlanStatusType::getPlanPart() const {
  return *planPart_Accessor;
}

uci::type::ActivityPlanStatusType::PlanPart& ActivityPlanStatusType::getPlanPart() {
  return *planPart_Accessor;
}

uci::type::ActivityPlanStatusType& ActivityPlanStatusType::setPlanPart(const uci::type::ActivityPlanStatusType::PlanPart& accessor) {
  if (&accessor != planPart_Accessor.get()) {
    planPart_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<ActivityPlanStatusType> ActivityPlanStatusType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::activityPlanStatusType : type};
  return (requestedType == uci::type::accessorType::activityPlanStatusType) ? boost::make_unique<ActivityPlanStatusType>() : nullptr;
}

/**  */
namespace ActivityPlanStatusType_Names {

constexpr const char* Extern_Type_Name{"ActivityPlanStatusType"};
constexpr const char* PlanPart_Name{"PlanPart"};

} // namespace ActivityPlanStatusType_Names

void ActivityPlanStatusType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ActivityPlanStatusType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ActivityPlanStatusType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ActivityPlanStatusType_Names::PlanPart_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ActivityPlanStatusType::PlanPart& boundedList = accessor.getPlanPart();
        const uci::type::ActivityPlanStatusType::PlanPart::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    }
  }
  PlanStatusType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string ActivityPlanStatusType::serialize(const uci::type::ActivityPlanStatusType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ActivityPlanStatusType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ActivityPlanStatusType_Names::Extern_Type_Name);
  }
  PlanStatusType::serialize(accessor, node, "", false, false, false);
  {
    const uci::type::ActivityPlanStatusType::PlanPart& boundedList = accessor.getPlanPart();
    for (uci::type::ActivityPlanStatusType::PlanPart::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      ActivityPlanPartsEnum::serialize(boundedList.at(i), node, ActivityPlanStatusType_Names::PlanPart_Name, false);
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

uci::type::ActivityPlanStatusType& ActivityPlanStatusType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ActivityPlanStatusType>().release());
}

uci::type::ActivityPlanStatusType& ActivityPlanStatusType::create(const uci::type::ActivityPlanStatusType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ActivityPlanStatusType> newAccessor{boost::make_unique<asb_uci::type::ActivityPlanStatusType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ActivityPlanStatusType::destroy(uci::type::ActivityPlanStatusType& accessor) {
  delete dynamic_cast<asb_uci::type::ActivityPlanStatusType*>(&accessor);
}

} // namespace type

} // namespace uci

