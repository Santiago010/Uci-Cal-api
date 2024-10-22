/** @file TimingConstraintsType.cpp
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

#include "../../../include/asb_uci/type/TimingConstraintsType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/EmptyType.h"
#include "../../../include/asb_uci/type/RepetitionConstraintsType.h"
#include "../../../include/asb_uci/type/TimeWindowType.h"
#include "../../../include/asb_uci/type/WeekdayIntervalType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EmptyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RepetitionConstraintsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TimeWindowType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TimingConstraintsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/WeekdayIntervalType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

TimingConstraintsType::TimingConstraintsType() = default;

TimingConstraintsType::~TimingConstraintsType() = default;

void TimingConstraintsType::copy(const uci::type::TimingConstraintsType& accessor) {
  copyImpl(accessor, false);
}

void TimingConstraintsType::copyImpl(const uci::type::TimingConstraintsType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const TimingConstraintsType&>(accessor);
    if (accessorImpl.asSoonAsPossible_Accessor) {
      setAsSoonAsPossible(*(accessorImpl.asSoonAsPossible_Accessor));
    } else {
      asSoonAsPossible_Accessor.reset();
    }
    if (accessorImpl.timeWindow_Accessor) {
      setTimeWindow(*(accessorImpl.timeWindow_Accessor));
    } else {
      timeWindow_Accessor.reset();
    }
    if (accessorImpl.weekdayInterval_Accessor) {
      setWeekdayInterval(*(accessorImpl.weekdayInterval_Accessor));
    } else {
      weekdayInterval_Accessor.reset();
    }
    if (accessorImpl.repetitive_Accessor) {
      setRepetitive(*(accessorImpl.repetitive_Accessor));
    } else {
      repetitive_Accessor.reset();
    }
  }
}

void TimingConstraintsType::reset() noexcept {
  asSoonAsPossible_Accessor.reset();
  timeWindow_Accessor.reset();
  weekdayInterval_Accessor.reset();
  repetitive_Accessor.reset();
}

uci::type::TimingConstraintsType::TimingConstraintsTypeChoice TimingConstraintsType::getTimingConstraintsTypeChoiceOrdinal() const noexcept {
  if (asSoonAsPossible_Accessor) {
    return TIMINGCONSTRAINTSTYPE_CHOICE_ASSOONASPOSSIBLE;
  }
  if (timeWindow_Accessor) {
    return TIMINGCONSTRAINTSTYPE_CHOICE_TIMEWINDOW;
  }
  if (weekdayInterval_Accessor) {
    return TIMINGCONSTRAINTSTYPE_CHOICE_WEEKDAYINTERVAL;
  }
  if (repetitive_Accessor) {
    return TIMINGCONSTRAINTSTYPE_CHOICE_REPETITIVE;
  }
  return TIMINGCONSTRAINTSTYPE_CHOICE_NONE;
}

uci::type::TimingConstraintsType& TimingConstraintsType::setTimingConstraintsTypeChoiceOrdinal(uci::type::TimingConstraintsType::TimingConstraintsTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case TIMINGCONSTRAINTSTYPE_CHOICE_ASSOONASPOSSIBLE:
      chooseAsSoonAsPossible("setTimingConstraintsTypeChoiceOrdinal", type);
      break;
    case TIMINGCONSTRAINTSTYPE_CHOICE_TIMEWINDOW:
      chooseTimeWindow("setTimingConstraintsTypeChoiceOrdinal", type);
      break;
    case TIMINGCONSTRAINTSTYPE_CHOICE_WEEKDAYINTERVAL:
      chooseWeekdayInterval("setTimingConstraintsTypeChoiceOrdinal", type);
      break;
    case TIMINGCONSTRAINTSTYPE_CHOICE_REPETITIVE:
      chooseRepetitive("setTimingConstraintsTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setTimingConstraintsTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::EmptyType& TimingConstraintsType::getAsSoonAsPossible_() const {
  if (asSoonAsPossible_Accessor) {
    return *asSoonAsPossible_Accessor;
  }
  throw uci::base::UCIException("Error in getAsSoonAsPossible(): An attempt was made to get an optional field that was not enabled, call hasAsSoonAsPossible() to determine if it is safe to call getAsSoonAsPossible()");
}

const uci::type::EmptyType& TimingConstraintsType::getAsSoonAsPossible() const {
  return getAsSoonAsPossible_();
}

uci::type::EmptyType& TimingConstraintsType::getAsSoonAsPossible() {
  return getAsSoonAsPossible_();
}

uci::type::TimingConstraintsType& TimingConstraintsType::setAsSoonAsPossible(const uci::type::EmptyType& value) {
  return setAsSoonAsPossible(value.c_str());
}

uci::type::TimingConstraintsType& TimingConstraintsType::setAsSoonAsPossible(const std::string& value) {
  return setAsSoonAsPossible(value.c_str());
}

uci::type::TimingConstraintsType& TimingConstraintsType::setAsSoonAsPossible(const char * value) {
  chooseAsSoonAsPossible().setStringValue(value);
  return *this;
}

bool TimingConstraintsType::isAsSoonAsPossible() const noexcept {
  return static_cast<bool>(asSoonAsPossible_Accessor);
}

uci::type::EmptyType& TimingConstraintsType::chooseAsSoonAsPossible(const std::string& /*method*/, uci::base::accessorType::AccessorType type) {
  timeWindow_Accessor.reset();
  weekdayInterval_Accessor.reset();
  repetitive_Accessor.reset();
  if (!asSoonAsPossible_Accessor) {
    asSoonAsPossible_Accessor = EmptyType::create(type);
  }
  return *asSoonAsPossible_Accessor;
}

uci::type::EmptyType& TimingConstraintsType::chooseAsSoonAsPossible(uci::base::accessorType::AccessorType type) {
  return chooseAsSoonAsPossible("chooseAsSoonAsPossible", type);
}

uci::type::TimeWindowType& TimingConstraintsType::getTimeWindow_() const {
  if (timeWindow_Accessor) {
    return *timeWindow_Accessor;
  }
  throw uci::base::UCIException("Error in getTimeWindow(): Unable to get TimeWindow, field not selected");
}

const uci::type::TimeWindowType& TimingConstraintsType::getTimeWindow() const {
  return getTimeWindow_();
}

uci::type::TimeWindowType& TimingConstraintsType::getTimeWindow() {
  return getTimeWindow_();
}

uci::type::TimingConstraintsType& TimingConstraintsType::setTimeWindow(const uci::type::TimeWindowType& accessor) {
  chooseTimeWindow();
  if (&accessor != timeWindow_Accessor.get()) {
    timeWindow_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool TimingConstraintsType::isTimeWindow() const noexcept {
  return static_cast<bool>(timeWindow_Accessor);
}

uci::type::TimeWindowType& TimingConstraintsType::chooseTimeWindow(const std::string& method, uci::base::accessorType::AccessorType type) {
  asSoonAsPossible_Accessor.reset();
  weekdayInterval_Accessor.reset();
  repetitive_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::timeWindowType : type};
  if ((!timeWindow_Accessor) || (timeWindow_Accessor->getAccessorType() != requestedType)) {
    timeWindow_Accessor = TimeWindowType::create(type);
    if (!timeWindow_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *timeWindow_Accessor;
}

uci::type::TimeWindowType& TimingConstraintsType::chooseTimeWindow(uci::base::accessorType::AccessorType type) {
  return chooseTimeWindow("chooseTimeWindow", type);
}

uci::type::WeekdayIntervalType& TimingConstraintsType::getWeekdayInterval_() const {
  if (weekdayInterval_Accessor) {
    return *weekdayInterval_Accessor;
  }
  throw uci::base::UCIException("Error in getWeekdayInterval(): Unable to get WeekdayInterval, field not selected");
}

const uci::type::WeekdayIntervalType& TimingConstraintsType::getWeekdayInterval() const {
  return getWeekdayInterval_();
}

uci::type::WeekdayIntervalType& TimingConstraintsType::getWeekdayInterval() {
  return getWeekdayInterval_();
}

uci::type::TimingConstraintsType& TimingConstraintsType::setWeekdayInterval(const uci::type::WeekdayIntervalType& accessor) {
  chooseWeekdayInterval();
  if (&accessor != weekdayInterval_Accessor.get()) {
    weekdayInterval_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool TimingConstraintsType::isWeekdayInterval() const noexcept {
  return static_cast<bool>(weekdayInterval_Accessor);
}

uci::type::WeekdayIntervalType& TimingConstraintsType::chooseWeekdayInterval(const std::string& method, uci::base::accessorType::AccessorType type) {
  asSoonAsPossible_Accessor.reset();
  timeWindow_Accessor.reset();
  repetitive_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::weekdayIntervalType : type};
  if ((!weekdayInterval_Accessor) || (weekdayInterval_Accessor->getAccessorType() != requestedType)) {
    weekdayInterval_Accessor = WeekdayIntervalType::create(type);
    if (!weekdayInterval_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *weekdayInterval_Accessor;
}

uci::type::WeekdayIntervalType& TimingConstraintsType::chooseWeekdayInterval(uci::base::accessorType::AccessorType type) {
  return chooseWeekdayInterval("chooseWeekdayInterval", type);
}

uci::type::RepetitionConstraintsType& TimingConstraintsType::getRepetitive_() const {
  if (repetitive_Accessor) {
    return *repetitive_Accessor;
  }
  throw uci::base::UCIException("Error in getRepetitive(): Unable to get Repetitive, field not selected");
}

const uci::type::RepetitionConstraintsType& TimingConstraintsType::getRepetitive() const {
  return getRepetitive_();
}

uci::type::RepetitionConstraintsType& TimingConstraintsType::getRepetitive() {
  return getRepetitive_();
}

uci::type::TimingConstraintsType& TimingConstraintsType::setRepetitive(const uci::type::RepetitionConstraintsType& accessor) {
  chooseRepetitive();
  if (&accessor != repetitive_Accessor.get()) {
    repetitive_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool TimingConstraintsType::isRepetitive() const noexcept {
  return static_cast<bool>(repetitive_Accessor);
}

uci::type::RepetitionConstraintsType& TimingConstraintsType::chooseRepetitive(const std::string& method, uci::base::accessorType::AccessorType type) {
  asSoonAsPossible_Accessor.reset();
  timeWindow_Accessor.reset();
  weekdayInterval_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::repetitionConstraintsType : type};
  if ((!repetitive_Accessor) || (repetitive_Accessor->getAccessorType() != requestedType)) {
    repetitive_Accessor = RepetitionConstraintsType::create(type);
    if (!repetitive_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *repetitive_Accessor;
}

uci::type::RepetitionConstraintsType& TimingConstraintsType::chooseRepetitive(uci::base::accessorType::AccessorType type) {
  return chooseRepetitive("chooseRepetitive", type);
}

std::unique_ptr<TimingConstraintsType> TimingConstraintsType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::timingConstraintsType : type};
  return (requestedType == uci::type::accessorType::timingConstraintsType) ? boost::make_unique<TimingConstraintsType>() : nullptr;
}

/**  */
namespace TimingConstraintsType_Names {

constexpr const char* Extern_Type_Name{"TimingConstraintsType"};
constexpr const char* AsSoonAsPossible_Name{"AsSoonAsPossible"};
constexpr const char* TimeWindow_Name{"TimeWindow"};
constexpr const char* WeekdayInterval_Name{"WeekdayInterval"};
constexpr const char* Repetitive_Name{"Repetitive"};

} // namespace TimingConstraintsType_Names

void TimingConstraintsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::TimingConstraintsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = TimingConstraintsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + TimingConstraintsType_Names::AsSoonAsPossible_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.chooseAsSoonAsPossible().setStringValue(*value);
      }
    } else if (valueType.first == nsPrefix + TimingConstraintsType_Names::TimeWindow_Name) {
      TimeWindowType::deserialize(valueType.second, accessor.chooseTimeWindow(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + TimingConstraintsType_Names::WeekdayInterval_Name) {
      WeekdayIntervalType::deserialize(valueType.second, accessor.chooseWeekdayInterval(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + TimingConstraintsType_Names::Repetitive_Name) {
      RepetitionConstraintsType::deserialize(valueType.second, accessor.chooseRepetitive(), nodeName, nsPrefix);
    }
  }
}

std::string TimingConstraintsType::serialize(const uci::type::TimingConstraintsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? TimingConstraintsType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, TimingConstraintsType_Names::Extern_Type_Name);
  }
  if (accessor.isAsSoonAsPossible()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getAsSoonAsPossible(), node, TimingConstraintsType_Names::AsSoonAsPossible_Name);
  } else if (accessor.isTimeWindow()) {
    TimeWindowType::serialize(accessor.getTimeWindow(), node, TimingConstraintsType_Names::TimeWindow_Name);
  } else if (accessor.isWeekdayInterval()) {
    WeekdayIntervalType::serialize(accessor.getWeekdayInterval(), node, TimingConstraintsType_Names::WeekdayInterval_Name);
  } else if (accessor.isRepetitive()) {
    RepetitionConstraintsType::serialize(accessor.getRepetitive(), node, TimingConstraintsType_Names::Repetitive_Name);
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

uci::type::TimingConstraintsType& TimingConstraintsType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::TimingConstraintsType>().release());
}

uci::type::TimingConstraintsType& TimingConstraintsType::create(const uci::type::TimingConstraintsType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::TimingConstraintsType> newAccessor{boost::make_unique<asb_uci::type::TimingConstraintsType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void TimingConstraintsType::destroy(uci::type::TimingConstraintsType& accessor) {
  delete dynamic_cast<asb_uci::type::TimingConstraintsType*>(&accessor);
}

} // namespace type

} // namespace uci

