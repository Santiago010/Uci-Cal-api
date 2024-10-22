/** @file PlansRequirementsReferenceType.cpp
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

#include "../../../include/asb_uci/type/PlansRequirementsReferenceType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ActionPlanID_Type.h"
#include "../../../include/asb_uci/type/EffectPlanID_Type.h"
#include "../../../include/asb_uci/type/MissionPlanID_Type.h"
#include "../../../include/asb_uci/type/ResponsePlanID_Type.h"
#include "../../../include/asb_uci/type/TaskPlanID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActionPlanID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EffectPlanID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MissionPlanID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlansRequirementsReferenceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ResponsePlanID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TaskPlanID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PlansRequirementsReferenceType::PlansRequirementsReferenceType()
  : missionPlanID_Accessor{boost::make_unique<MissionPlanID>(0, SIZE_MAX)},
    taskPlanID_Accessor{boost::make_unique<TaskPlanID>(0, SIZE_MAX)},
    effectPlanID_Accessor{boost::make_unique<EffectPlanID>(0, SIZE_MAX)},
    actionPlanID_Accessor{boost::make_unique<ActionPlanID>(0, SIZE_MAX)},
    responsePlanID_Accessor{boost::make_unique<ResponsePlanID>(0, SIZE_MAX)} {
}

PlansRequirementsReferenceType::~PlansRequirementsReferenceType() = default;

void PlansRequirementsReferenceType::copy(const uci::type::PlansRequirementsReferenceType& accessor) {
  copyImpl(accessor, false);
}

void PlansRequirementsReferenceType::copyImpl(const uci::type::PlansRequirementsReferenceType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PlansRequirementsReferenceType&>(accessor);
    setMissionPlanID(*(accessorImpl.missionPlanID_Accessor));
    setTaskPlanID(*(accessorImpl.taskPlanID_Accessor));
    setEffectPlanID(*(accessorImpl.effectPlanID_Accessor));
    setActionPlanID(*(accessorImpl.actionPlanID_Accessor));
    setResponsePlanID(*(accessorImpl.responsePlanID_Accessor));
  }
}

void PlansRequirementsReferenceType::reset() noexcept {
  missionPlanID_Accessor->reset();
  taskPlanID_Accessor->reset();
  effectPlanID_Accessor->reset();
  actionPlanID_Accessor->reset();
  responsePlanID_Accessor->reset();
}

const uci::type::PlansRequirementsReferenceType::MissionPlanID& PlansRequirementsReferenceType::getMissionPlanID() const {
  return *missionPlanID_Accessor;
}

uci::type::PlansRequirementsReferenceType::MissionPlanID& PlansRequirementsReferenceType::getMissionPlanID() {
  return *missionPlanID_Accessor;
}

uci::type::PlansRequirementsReferenceType& PlansRequirementsReferenceType::setMissionPlanID(const uci::type::PlansRequirementsReferenceType::MissionPlanID& accessor) {
  if (&accessor != missionPlanID_Accessor.get()) {
    missionPlanID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PlansRequirementsReferenceType::TaskPlanID& PlansRequirementsReferenceType::getTaskPlanID() const {
  return *taskPlanID_Accessor;
}

uci::type::PlansRequirementsReferenceType::TaskPlanID& PlansRequirementsReferenceType::getTaskPlanID() {
  return *taskPlanID_Accessor;
}

uci::type::PlansRequirementsReferenceType& PlansRequirementsReferenceType::setTaskPlanID(const uci::type::PlansRequirementsReferenceType::TaskPlanID& accessor) {
  if (&accessor != taskPlanID_Accessor.get()) {
    taskPlanID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PlansRequirementsReferenceType::EffectPlanID& PlansRequirementsReferenceType::getEffectPlanID() const {
  return *effectPlanID_Accessor;
}

uci::type::PlansRequirementsReferenceType::EffectPlanID& PlansRequirementsReferenceType::getEffectPlanID() {
  return *effectPlanID_Accessor;
}

uci::type::PlansRequirementsReferenceType& PlansRequirementsReferenceType::setEffectPlanID(const uci::type::PlansRequirementsReferenceType::EffectPlanID& accessor) {
  if (&accessor != effectPlanID_Accessor.get()) {
    effectPlanID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PlansRequirementsReferenceType::ActionPlanID& PlansRequirementsReferenceType::getActionPlanID() const {
  return *actionPlanID_Accessor;
}

uci::type::PlansRequirementsReferenceType::ActionPlanID& PlansRequirementsReferenceType::getActionPlanID() {
  return *actionPlanID_Accessor;
}

uci::type::PlansRequirementsReferenceType& PlansRequirementsReferenceType::setActionPlanID(const uci::type::PlansRequirementsReferenceType::ActionPlanID& accessor) {
  if (&accessor != actionPlanID_Accessor.get()) {
    actionPlanID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PlansRequirementsReferenceType::ResponsePlanID& PlansRequirementsReferenceType::getResponsePlanID() const {
  return *responsePlanID_Accessor;
}

uci::type::PlansRequirementsReferenceType::ResponsePlanID& PlansRequirementsReferenceType::getResponsePlanID() {
  return *responsePlanID_Accessor;
}

uci::type::PlansRequirementsReferenceType& PlansRequirementsReferenceType::setResponsePlanID(const uci::type::PlansRequirementsReferenceType::ResponsePlanID& accessor) {
  if (&accessor != responsePlanID_Accessor.get()) {
    responsePlanID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<PlansRequirementsReferenceType> PlansRequirementsReferenceType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::plansRequirementsReferenceType : type};
  return (requestedType == uci::type::accessorType::plansRequirementsReferenceType) ? boost::make_unique<PlansRequirementsReferenceType>() : nullptr;
}

/**  */
namespace PlansRequirementsReferenceType_Names {

constexpr const char* Extern_Type_Name{"PlansRequirementsReferenceType"};
constexpr const char* MissionPlanID_Name{"MissionPlanID"};
constexpr const char* TaskPlanID_Name{"TaskPlanID"};
constexpr const char* EffectPlanID_Name{"EffectPlanID"};
constexpr const char* ActionPlanID_Name{"ActionPlanID"};
constexpr const char* ResponsePlanID_Name{"ResponsePlanID"};

} // namespace PlansRequirementsReferenceType_Names

void PlansRequirementsReferenceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PlansRequirementsReferenceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PlansRequirementsReferenceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PlansRequirementsReferenceType_Names::MissionPlanID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PlansRequirementsReferenceType::MissionPlanID& boundedList = accessor.getMissionPlanID();
        const uci::type::PlansRequirementsReferenceType::MissionPlanID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::MissionPlanID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + PlansRequirementsReferenceType_Names::TaskPlanID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PlansRequirementsReferenceType::TaskPlanID& boundedList = accessor.getTaskPlanID();
        const uci::type::PlansRequirementsReferenceType::TaskPlanID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::TaskPlanID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + PlansRequirementsReferenceType_Names::EffectPlanID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PlansRequirementsReferenceType::EffectPlanID& boundedList = accessor.getEffectPlanID();
        const uci::type::PlansRequirementsReferenceType::EffectPlanID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::EffectPlanID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + PlansRequirementsReferenceType_Names::ActionPlanID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PlansRequirementsReferenceType::ActionPlanID& boundedList = accessor.getActionPlanID();
        const uci::type::PlansRequirementsReferenceType::ActionPlanID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::ActionPlanID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + PlansRequirementsReferenceType_Names::ResponsePlanID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PlansRequirementsReferenceType::ResponsePlanID& boundedList = accessor.getResponsePlanID();
        const uci::type::PlansRequirementsReferenceType::ResponsePlanID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::ResponsePlanID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string PlansRequirementsReferenceType::serialize(const uci::type::PlansRequirementsReferenceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PlansRequirementsReferenceType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PlansRequirementsReferenceType_Names::Extern_Type_Name);
  }
  {
    const uci::type::PlansRequirementsReferenceType::MissionPlanID& boundedList = accessor.getMissionPlanID();
    for (uci::type::PlansRequirementsReferenceType::MissionPlanID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::MissionPlanID_Type::serialize(boundedList.at(i), node, PlansRequirementsReferenceType_Names::MissionPlanID_Name);
    }
  }
  {
    const uci::type::PlansRequirementsReferenceType::TaskPlanID& boundedList = accessor.getTaskPlanID();
    for (uci::type::PlansRequirementsReferenceType::TaskPlanID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::TaskPlanID_Type::serialize(boundedList.at(i), node, PlansRequirementsReferenceType_Names::TaskPlanID_Name);
    }
  }
  {
    const uci::type::PlansRequirementsReferenceType::EffectPlanID& boundedList = accessor.getEffectPlanID();
    for (uci::type::PlansRequirementsReferenceType::EffectPlanID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::EffectPlanID_Type::serialize(boundedList.at(i), node, PlansRequirementsReferenceType_Names::EffectPlanID_Name);
    }
  }
  {
    const uci::type::PlansRequirementsReferenceType::ActionPlanID& boundedList = accessor.getActionPlanID();
    for (uci::type::PlansRequirementsReferenceType::ActionPlanID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ActionPlanID_Type::serialize(boundedList.at(i), node, PlansRequirementsReferenceType_Names::ActionPlanID_Name);
    }
  }
  {
    const uci::type::PlansRequirementsReferenceType::ResponsePlanID& boundedList = accessor.getResponsePlanID();
    for (uci::type::PlansRequirementsReferenceType::ResponsePlanID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ResponsePlanID_Type::serialize(boundedList.at(i), node, PlansRequirementsReferenceType_Names::ResponsePlanID_Name);
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

uci::type::PlansRequirementsReferenceType& PlansRequirementsReferenceType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PlansRequirementsReferenceType>().release());
}

uci::type::PlansRequirementsReferenceType& PlansRequirementsReferenceType::create(const uci::type::PlansRequirementsReferenceType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PlansRequirementsReferenceType> newAccessor{boost::make_unique<asb_uci::type::PlansRequirementsReferenceType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PlansRequirementsReferenceType::destroy(uci::type::PlansRequirementsReferenceType& accessor) {
  delete dynamic_cast<asb_uci::type::PlansRequirementsReferenceType*>(&accessor);
}

} // namespace type

} // namespace uci

