/** @file PlanningAllowedEscalationType.cpp
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

#include "../../../include/asb_uci/type/PlanningAllowedEscalationType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/AutonomousPlanningActionID_Type.h"
#include "../../../include/asb_uci/type/MissionPlanningAutonomySettingByResultType.h"
#include "../../../include/asb_uci/type/PlanningAllowedType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AutonomousPlanningActionID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MissionPlanningAutonomySettingByResultType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanningAllowedEscalationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanningAllowedType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PlanningAllowedEscalationType::PlanningAllowedEscalationType()
  : autonomousPlanningActionID_Accessor{boost::make_unique<AutonomousPlanningActionID_Type>()},
    byResultSetting_Accessor{boost::make_unique<ByResultSetting>(0, SIZE_MAX)},
    allowedType_Accessor{boost::make_unique<PlanningAllowedType>()} {
}

PlanningAllowedEscalationType::~PlanningAllowedEscalationType() = default;

void PlanningAllowedEscalationType::copy(const uci::type::PlanningAllowedEscalationType& accessor) {
  copyImpl(accessor, false);
}

void PlanningAllowedEscalationType::copyImpl(const uci::type::PlanningAllowedEscalationType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PlanningAllowedEscalationType&>(accessor);
    setAutonomousPlanningActionID(*(accessorImpl.autonomousPlanningActionID_Accessor));
    setByResultSetting(*(accessorImpl.byResultSetting_Accessor));
    setAllowedType(*(accessorImpl.allowedType_Accessor));
  }
}

void PlanningAllowedEscalationType::reset() noexcept {
  autonomousPlanningActionID_Accessor->reset();
  byResultSetting_Accessor->reset();
  allowedType_Accessor->reset();
}

const uci::type::AutonomousPlanningActionID_Type& PlanningAllowedEscalationType::getAutonomousPlanningActionID() const {
  return *autonomousPlanningActionID_Accessor;
}

uci::type::AutonomousPlanningActionID_Type& PlanningAllowedEscalationType::getAutonomousPlanningActionID() {
  return *autonomousPlanningActionID_Accessor;
}

uci::type::PlanningAllowedEscalationType& PlanningAllowedEscalationType::setAutonomousPlanningActionID(const uci::type::AutonomousPlanningActionID_Type& accessor) {
  if (&accessor != autonomousPlanningActionID_Accessor.get()) {
    autonomousPlanningActionID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PlanningAllowedEscalationType::ByResultSetting& PlanningAllowedEscalationType::getByResultSetting() const {
  return *byResultSetting_Accessor;
}

uci::type::PlanningAllowedEscalationType::ByResultSetting& PlanningAllowedEscalationType::getByResultSetting() {
  return *byResultSetting_Accessor;
}

uci::type::PlanningAllowedEscalationType& PlanningAllowedEscalationType::setByResultSetting(const uci::type::PlanningAllowedEscalationType::ByResultSetting& accessor) {
  if (&accessor != byResultSetting_Accessor.get()) {
    byResultSetting_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PlanningAllowedType& PlanningAllowedEscalationType::getAllowedType() const {
  return *allowedType_Accessor;
}

uci::type::PlanningAllowedType& PlanningAllowedEscalationType::getAllowedType() {
  return *allowedType_Accessor;
}

uci::type::PlanningAllowedEscalationType& PlanningAllowedEscalationType::setAllowedType(const uci::type::PlanningAllowedType& accessor) {
  if (&accessor != allowedType_Accessor.get()) {
    allowedType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<PlanningAllowedEscalationType> PlanningAllowedEscalationType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::planningAllowedEscalationType : type};
  return (requestedType == uci::type::accessorType::planningAllowedEscalationType) ? boost::make_unique<PlanningAllowedEscalationType>() : nullptr;
}

/**  */
namespace PlanningAllowedEscalationType_Names {

constexpr const char* Extern_Type_Name{"PlanningAllowedEscalationType"};
constexpr const char* AutonomousPlanningActionID_Name{"AutonomousPlanningActionID"};
constexpr const char* ByResultSetting_Name{"ByResultSetting"};
constexpr const char* AllowedType_Name{"AllowedType"};

} // namespace PlanningAllowedEscalationType_Names

void PlanningAllowedEscalationType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PlanningAllowedEscalationType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PlanningAllowedEscalationType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PlanningAllowedEscalationType_Names::AutonomousPlanningActionID_Name) {
      AutonomousPlanningActionID_Type::deserialize(valueType.second, accessor.getAutonomousPlanningActionID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PlanningAllowedEscalationType_Names::ByResultSetting_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PlanningAllowedEscalationType::ByResultSetting& boundedList = accessor.getByResultSetting();
        const uci::type::PlanningAllowedEscalationType::ByResultSetting::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::MissionPlanningAutonomySettingByResultType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + PlanningAllowedEscalationType_Names::AllowedType_Name) {
      PlanningAllowedType::deserialize(valueType.second, accessor.getAllowedType(), nodeName, nsPrefix);
    }
  }
}

std::string PlanningAllowedEscalationType::serialize(const uci::type::PlanningAllowedEscalationType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PlanningAllowedEscalationType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PlanningAllowedEscalationType_Names::Extern_Type_Name);
  }
  AutonomousPlanningActionID_Type::serialize(accessor.getAutonomousPlanningActionID(), node, PlanningAllowedEscalationType_Names::AutonomousPlanningActionID_Name);
  {
    const uci::type::PlanningAllowedEscalationType::ByResultSetting& boundedList = accessor.getByResultSetting();
    for (uci::type::PlanningAllowedEscalationType::ByResultSetting::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::MissionPlanningAutonomySettingByResultType::serialize(boundedList.at(i), node, PlanningAllowedEscalationType_Names::ByResultSetting_Name);
    }
  }
  PlanningAllowedType::serialize(accessor.getAllowedType(), node, PlanningAllowedEscalationType_Names::AllowedType_Name);
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

uci::type::PlanningAllowedEscalationType& PlanningAllowedEscalationType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PlanningAllowedEscalationType>().release());
}

uci::type::PlanningAllowedEscalationType& PlanningAllowedEscalationType::create(const uci::type::PlanningAllowedEscalationType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PlanningAllowedEscalationType> newAccessor{boost::make_unique<asb_uci::type::PlanningAllowedEscalationType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PlanningAllowedEscalationType::destroy(uci::type::PlanningAllowedEscalationType& accessor) {
  delete dynamic_cast<asb_uci::type::PlanningAllowedEscalationType*>(&accessor);
}

} // namespace type

} // namespace uci

