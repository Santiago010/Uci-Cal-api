/** @file PlanActivationAutonomyType.cpp
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

#include "../../../include/asb_uci/type/PlanActivationAutonomyType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/MissionPlanActivationSettingType.h"
#include "../../../include/asb_uci/type/SubPlanActivationSettingType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MissionPlanActivationSettingType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanActivationAutonomyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubPlanActivationSettingType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PlanActivationAutonomyType::PlanActivationAutonomyType() = default;

PlanActivationAutonomyType::~PlanActivationAutonomyType() = default;

void PlanActivationAutonomyType::copy(const uci::type::PlanActivationAutonomyType& accessor) {
  copyImpl(accessor, false);
}

void PlanActivationAutonomyType::copyImpl(const uci::type::PlanActivationAutonomyType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PlanActivationAutonomyType&>(accessor);
    if (accessorImpl.byMissionPlan_Accessor) {
      setByMissionPlan(*(accessorImpl.byMissionPlan_Accessor));
    } else {
      byMissionPlan_Accessor.reset();
    }
    if (accessorImpl.bySubPlan_Accessor) {
      setBySubPlan(*(accessorImpl.bySubPlan_Accessor));
    } else {
      bySubPlan_Accessor.reset();
    }
  }
}

void PlanActivationAutonomyType::reset() noexcept {
  byMissionPlan_Accessor.reset();
  bySubPlan_Accessor.reset();
}

uci::type::PlanActivationAutonomyType::PlanActivationAutonomyTypeChoice PlanActivationAutonomyType::getPlanActivationAutonomyTypeChoiceOrdinal() const noexcept {
  if (byMissionPlan_Accessor) {
    return PLANACTIVATIONAUTONOMYTYPE_CHOICE_BYMISSIONPLAN;
  }
  if (bySubPlan_Accessor) {
    return PLANACTIVATIONAUTONOMYTYPE_CHOICE_BYSUBPLAN;
  }
  return PLANACTIVATIONAUTONOMYTYPE_CHOICE_NONE;
}

uci::type::PlanActivationAutonomyType& PlanActivationAutonomyType::setPlanActivationAutonomyTypeChoiceOrdinal(uci::type::PlanActivationAutonomyType::PlanActivationAutonomyTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case PLANACTIVATIONAUTONOMYTYPE_CHOICE_BYMISSIONPLAN:
      chooseByMissionPlan("setPlanActivationAutonomyTypeChoiceOrdinal", type);
      break;
    case PLANACTIVATIONAUTONOMYTYPE_CHOICE_BYSUBPLAN:
      chooseBySubPlan();
      break;
    default:
      throw uci::base::UCIException("Error in setPlanActivationAutonomyTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::MissionPlanActivationSettingType& PlanActivationAutonomyType::getByMissionPlan_() const {
  if (byMissionPlan_Accessor) {
    return *byMissionPlan_Accessor;
  }
  throw uci::base::UCIException("Error in getByMissionPlan(): Unable to get ByMissionPlan, field not selected");
}

const uci::type::MissionPlanActivationSettingType& PlanActivationAutonomyType::getByMissionPlan() const {
  return getByMissionPlan_();
}

uci::type::MissionPlanActivationSettingType& PlanActivationAutonomyType::getByMissionPlan() {
  return getByMissionPlan_();
}

uci::type::PlanActivationAutonomyType& PlanActivationAutonomyType::setByMissionPlan(const uci::type::MissionPlanActivationSettingType& accessor) {
  chooseByMissionPlan();
  if (&accessor != byMissionPlan_Accessor.get()) {
    byMissionPlan_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PlanActivationAutonomyType::isByMissionPlan() const noexcept {
  return static_cast<bool>(byMissionPlan_Accessor);
}

uci::type::MissionPlanActivationSettingType& PlanActivationAutonomyType::chooseByMissionPlan(const std::string& method, uci::base::accessorType::AccessorType type) {
  bySubPlan_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::missionPlanActivationSettingType : type};
  if ((!byMissionPlan_Accessor) || (byMissionPlan_Accessor->getAccessorType() != requestedType)) {
    byMissionPlan_Accessor = MissionPlanActivationSettingType::create(type);
    if (!byMissionPlan_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *byMissionPlan_Accessor;
}

uci::type::MissionPlanActivationSettingType& PlanActivationAutonomyType::chooseByMissionPlan(uci::base::accessorType::AccessorType type) {
  return chooseByMissionPlan("chooseByMissionPlan", type);
}

uci::type::PlanActivationAutonomyType::BySubPlan& PlanActivationAutonomyType::getBySubPlan_() const {
  if (bySubPlan_Accessor) {
    return *bySubPlan_Accessor;
  }
  throw uci::base::UCIException("Error in getBySubPlan(): Unable to get BySubPlan, field not selected");
}

const uci::type::PlanActivationAutonomyType::BySubPlan& PlanActivationAutonomyType::getBySubPlan() const {
  return getBySubPlan_();
}

uci::type::PlanActivationAutonomyType::BySubPlan& PlanActivationAutonomyType::getBySubPlan() {
  return getBySubPlan_();
}

uci::type::PlanActivationAutonomyType& PlanActivationAutonomyType::setBySubPlan(const uci::type::PlanActivationAutonomyType::BySubPlan& accessor) {
  chooseBySubPlan();
  if (&accessor != bySubPlan_Accessor.get()) {
    bySubPlan_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PlanActivationAutonomyType::isBySubPlan() const noexcept {
  return static_cast<bool>(bySubPlan_Accessor);
}

uci::type::PlanActivationAutonomyType::BySubPlan& PlanActivationAutonomyType::chooseBySubPlan() {
  byMissionPlan_Accessor.reset();
  if (!bySubPlan_Accessor) {
    bySubPlan_Accessor = boost::make_unique<BySubPlan>(1, 9);
  }
  return *bySubPlan_Accessor;
}

std::unique_ptr<PlanActivationAutonomyType> PlanActivationAutonomyType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::planActivationAutonomyType : type};
  return (requestedType == uci::type::accessorType::planActivationAutonomyType) ? boost::make_unique<PlanActivationAutonomyType>() : nullptr;
}

/**  */
namespace PlanActivationAutonomyType_Names {

constexpr const char* Extern_Type_Name{"PlanActivationAutonomyType"};
constexpr const char* ByMissionPlan_Name{"ByMissionPlan"};
constexpr const char* BySubPlan_Name{"BySubPlan"};

} // namespace PlanActivationAutonomyType_Names

void PlanActivationAutonomyType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PlanActivationAutonomyType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PlanActivationAutonomyType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PlanActivationAutonomyType_Names::ByMissionPlan_Name) {
      MissionPlanActivationSettingType::deserialize(valueType.second, accessor.chooseByMissionPlan(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PlanActivationAutonomyType_Names::BySubPlan_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PlanActivationAutonomyType::BySubPlan& boundedList = accessor.chooseBySubPlan();
        const uci::type::PlanActivationAutonomyType::BySubPlan::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::SubPlanActivationSettingType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string PlanActivationAutonomyType::serialize(const uci::type::PlanActivationAutonomyType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PlanActivationAutonomyType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PlanActivationAutonomyType_Names::Extern_Type_Name);
  }
  if (accessor.isByMissionPlan()) {
    MissionPlanActivationSettingType::serialize(accessor.getByMissionPlan(), node, PlanActivationAutonomyType_Names::ByMissionPlan_Name);
  } else if (accessor.isBySubPlan()) {
    {
      const uci::type::PlanActivationAutonomyType::BySubPlan& boundedList = accessor.getBySubPlan();
      for (uci::type::PlanActivationAutonomyType::BySubPlan::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::SubPlanActivationSettingType::serialize(boundedList.at(i), node, PlanActivationAutonomyType_Names::BySubPlan_Name);
      }
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

uci::type::PlanActivationAutonomyType& PlanActivationAutonomyType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PlanActivationAutonomyType>().release());
}

uci::type::PlanActivationAutonomyType& PlanActivationAutonomyType::create(const uci::type::PlanActivationAutonomyType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PlanActivationAutonomyType> newAccessor{boost::make_unique<asb_uci::type::PlanActivationAutonomyType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PlanActivationAutonomyType::destroy(uci::type::PlanActivationAutonomyType& accessor) {
  delete dynamic_cast<asb_uci::type::PlanActivationAutonomyType*>(&accessor);
}

} // namespace type

} // namespace uci

