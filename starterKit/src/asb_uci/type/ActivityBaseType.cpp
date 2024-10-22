/** @file ActivityBaseType.cpp
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

#include "../../../include/asb_uci/type/ActivityBaseType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ActivityBasisEnum.h"
#include "../../../include/asb_uci/type/ActivityID_Type.h"
#include "../../../include/asb_uci/type/ActivitySourceType.h"
#include "../../../include/asb_uci/type/ActivityStateEnum.h"
#include "../../../include/asb_uci/type/CannotComplyType.h"
#include "../../../include/asb_uci/type/CapabilityID_Type.h"
#include "../../../include/asb_uci/type/ComparableRankingType.h"
#include "../../../include/asb_uci/util/DerivedTypesCopier.h"
#include "../../../include/asb_uci/util/DerivedTypesCreator.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/DerivedTypesSerializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActivityBaseType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActivityBasisEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActivityID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActivitySourceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActivityStateEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CannotComplyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ComparableRankingType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PercentType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ActivityBaseType& ActivityBaseType::addCapabilityID(std::vector<asb_uci::type::CapabilityID_Type> vargs) {
  for (const auto& capabilityID : vargs){
    this->capabilityID.push_back(capabilityID);
  }

  return *this;  
}

ActivityBaseType::ActivityBaseType()
  : activityID_Accessor{boost::make_unique<ActivityID_Type>()},
    capabilityID_Accessor{boost::make_unique<CapabilityID>(1, SIZE_MAX)},
    activityState_Accessor{boost::make_unique<ActivityStateEnum>()},
    source_Accessor{boost::make_unique<Source>(0, SIZE_MAX)},
    capabilityID(1, SIZE_MAX){
}

ActivityBaseType::~ActivityBaseType() = default;

void ActivityBaseType::copy(const uci::type::ActivityBaseType& accessor) {
  copyImpl(accessor, false);
}

void ActivityBaseType::copyImpl(const uci::type::ActivityBaseType& accessor, const bool checkIfDerivation) {
  if (&accessor != this) {
    if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::activityBaseType)) {
      const auto& accessorImpl = dynamic_cast<const ActivityBaseType&>(accessor);
      setActivityID(*(accessorImpl.activityID_Accessor));
      setCapabilityID(*(accessorImpl.capabilityID_Accessor));
      setInteractive(accessorImpl.interactive_Accessor);
      setActivityState(*(accessorImpl.activityState_Accessor));
      if (accessorImpl.basis_Accessor) {
        setBasis(*(accessorImpl.basis_Accessor));
      } else {
        basis_Accessor.reset();
      }
      if (accessorImpl.activityRank_Accessor) {
        setActivityRank(*(accessorImpl.activityRank_Accessor));
      } else {
        activityRank_Accessor.reset();
      }
      if (accessorImpl.activityReason_Accessor) {
        setActivityReason(*(accessorImpl.activityReason_Accessor));
      } else {
        activityReason_Accessor.reset();
      }
      setSource(*(accessorImpl.source_Accessor));
      if (accessorImpl.hasEstimatedStartTime()) {
        setEstimatedStartTime(accessorImpl.getEstimatedStartTime());
      } else {
        clearEstimatedStartTime();
      }
      if (accessorImpl.hasEstimatedCompletionTime()) {
        setEstimatedCompletionTime(accessorImpl.getEstimatedCompletionTime());
      } else {
        clearEstimatedCompletionTime();
      }
      if (accessorImpl.hasEstimatedPercentComplete()) {
        setEstimatedPercentComplete(accessorImpl.getEstimatedPercentComplete());
      } else {
        clearEstimatedPercentComplete();
      }
    } else {
      asb_uci::util::DerivedTypesCopier::copy(accessor, *this);
    }
  }
}

void ActivityBaseType::reset() noexcept {
  activityID_Accessor->reset();
  capabilityID_Accessor->reset();
  interactive_Accessor = false;
  activityState_Accessor->reset();
  basis_Accessor.reset();
  activityRank_Accessor.reset();
  activityReason_Accessor.reset();
  source_Accessor->reset();
  clearEstimatedStartTime();
  clearEstimatedCompletionTime();
  clearEstimatedPercentComplete();
}

const uci::type::ActivityID_Type& ActivityBaseType::getActivityID() const {
  return *activityID_Accessor;
}

uci::type::ActivityID_Type& ActivityBaseType::getActivityID() {
  return *activityID_Accessor;
}

uci::type::ActivityBaseType& ActivityBaseType::setActivityID(const uci::type::ActivityID_Type& accessor) {
  if (&accessor != activityID_Accessor.get()) {
    activityID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ActivityBaseType::CapabilityID& ActivityBaseType::getCapabilityID() const {
  return *capabilityID_Accessor;
}

uci::type::ActivityBaseType::CapabilityID& ActivityBaseType::getCapabilityID() {
  return *capabilityID_Accessor;
}

uci::type::ActivityBaseType& ActivityBaseType::setCapabilityID(const uci::type::ActivityBaseType::CapabilityID& accessor) {
  if (&accessor != capabilityID_Accessor.get()) {
    

  }
  return *this;
}

xs::Boolean ActivityBaseType::getInteractive() const {
  return interactive_Accessor;
}

uci::type::ActivityBaseType& ActivityBaseType::setInteractive(xs::Boolean value) {
  interactive_Accessor = value;
  return *this;
}


const uci::type::ActivityStateEnum& ActivityBaseType::getActivityState() const {
  return *activityState_Accessor;
}

uci::type::ActivityStateEnum& ActivityBaseType::getActivityState() {
  return *activityState_Accessor;
}

uci::type::ActivityBaseType& ActivityBaseType::setActivityState(const uci::type::ActivityStateEnum& accessor) {
  if (&accessor != activityState_Accessor.get()) {
    activityState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ActivityBaseType& ActivityBaseType::setActivityState(uci::type::ActivityStateEnum::EnumerationItem value) {
  activityState_Accessor->setValue(value);
  return *this;
}


uci::type::ActivityBasisEnum& ActivityBaseType::getBasis_() const {
  if (basis_Accessor) {
    return *basis_Accessor;
  }
  throw uci::base::UCIException("Error in getBasis(): An attempt was made to get an optional field that was not enabled, call hasBasis() to determine if it is safe to call getBasis()");
}

const uci::type::ActivityBasisEnum& ActivityBaseType::getBasis() const {
  return getBasis_();
}

uci::type::ActivityBasisEnum& ActivityBaseType::getBasis() {
  return getBasis_();
}

uci::type::ActivityBaseType& ActivityBaseType::setBasis(const uci::type::ActivityBasisEnum& accessor) {
  enableBasis();
  if (&accessor != basis_Accessor.get()) {
    basis_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ActivityBaseType& ActivityBaseType::setBasis(const uci::type::ActivityBasisEnum::EnumerationItem value) {
  enableBasis().setValue(value);
  return *this;
}

bool ActivityBaseType::hasBasis() const noexcept {
  return static_cast<bool>(basis_Accessor);
}

uci::type::ActivityBasisEnum& ActivityBaseType::enableBasis(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::activityBasisEnum : type};
  if ((!basis_Accessor) || (basis_Accessor->getAccessorType() != requestedType)) {
    basis_Accessor = ActivityBasisEnum::create(requestedType);
    if (!basis_Accessor) {
      throw uci::base::UCIException("Error in enableBasis(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *basis_Accessor;
}

uci::type::ActivityBaseType& ActivityBaseType::clearBasis() noexcept {
  basis_Accessor.reset();
  return *this;
}

uci::type::ComparableRankingType& ActivityBaseType::getActivityRank_() const {
  if (activityRank_Accessor) {
    return *activityRank_Accessor;
  }
  throw uci::base::UCIException("Error in getActivityRank(): An attempt was made to get an optional field that was not enabled, call hasActivityRank() to determine if it is safe to call getActivityRank()");
}

const uci::type::ComparableRankingType& ActivityBaseType::getActivityRank() const {
  return getActivityRank_();
}

uci::type::ComparableRankingType& ActivityBaseType::getActivityRank() {
  return getActivityRank_();
}

uci::type::ActivityBaseType& ActivityBaseType::setActivityRank(const uci::type::ComparableRankingType& accessor) {
  enableActivityRank();
  if (&accessor != activityRank_Accessor.get()) {
    activityRank_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool ActivityBaseType::hasActivityRank() const noexcept {
  return static_cast<bool>(activityRank_Accessor);
}

uci::type::ComparableRankingType& ActivityBaseType::enableActivityRank(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::comparableRankingType : type};
  if ((!activityRank_Accessor) || (activityRank_Accessor->getAccessorType() != requestedType)) {
    activityRank_Accessor = ComparableRankingType::create(requestedType);
    if (!activityRank_Accessor) {
      throw uci::base::UCIException("Error in enableActivityRank(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *activityRank_Accessor;
}

uci::type::ActivityBaseType& ActivityBaseType::clearActivityRank() noexcept {
  activityRank_Accessor.reset();
  return *this;
}

uci::type::CannotComplyType& ActivityBaseType::getActivityReason_() const {
  if (activityReason_Accessor) {
    return *activityReason_Accessor;
  }
  throw uci::base::UCIException("Error in getActivityReason(): An attempt was made to get an optional field that was not enabled, call hasActivityReason() to determine if it is safe to call getActivityReason()");
}

const uci::type::CannotComplyType& ActivityBaseType::getActivityReason() const {
  return getActivityReason_();
}

uci::type::CannotComplyType& ActivityBaseType::getActivityReason() {
  return getActivityReason_();
}

uci::type::ActivityBaseType& ActivityBaseType::setActivityReason(const uci::type::CannotComplyType& accessor) {
  enableActivityReason(accessor.getAccessorType());
  if (&accessor != activityReason_Accessor.get()) {
    activityReason_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool ActivityBaseType::hasActivityReason() const noexcept {
  return static_cast<bool>(activityReason_Accessor);
}

uci::type::CannotComplyType& ActivityBaseType::enableActivityReason(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::cannotComplyType : type};
  if ((!activityReason_Accessor) || (activityReason_Accessor->getAccessorType() != requestedType)) {
    activityReason_Accessor = CannotComplyType::create(requestedType);
    if (!activityReason_Accessor) {
      throw uci::base::UCIException("Error in enableActivityReason(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *activityReason_Accessor;
}

uci::type::ActivityBaseType& ActivityBaseType::clearActivityReason() noexcept {
  activityReason_Accessor.reset();
  return *this;
}

const uci::type::ActivityBaseType::Source& ActivityBaseType::getSource() const {
  return *source_Accessor;
}

uci::type::ActivityBaseType::Source& ActivityBaseType::getSource() {
  return *source_Accessor;
}

uci::type::ActivityBaseType& ActivityBaseType::setSource(const uci::type::ActivityBaseType::Source& accessor) {
  if (&accessor != source_Accessor.get()) {
    source_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::DateTimeTypeValue ActivityBaseType::getEstimatedStartTime() const {
  if (estimatedStartTime_Accessor) {
    return *estimatedStartTime_Accessor;
  }
  throw uci::base::UCIException("Error in getEstimatedStartTime(): An attempt was made to get an optional field that was not enabled, call hasEstimatedStartTime() to determine if it is safe to call getEstimatedStartTime()");
}

uci::type::ActivityBaseType& ActivityBaseType::setEstimatedStartTime(uci::type::DateTimeTypeValue value) {
  estimatedStartTime_Accessor = value;
  return *this;
}

bool ActivityBaseType::hasEstimatedStartTime() const noexcept {
  return estimatedStartTime_Accessor.has_value();
}

uci::type::ActivityBaseType& ActivityBaseType::clearEstimatedStartTime() noexcept {
  estimatedStartTime_Accessor.reset();
  return *this;
}

uci::type::DateTimeTypeValue ActivityBaseType::getEstimatedCompletionTime() const {
  if (estimatedCompletionTime_Accessor) {
    return *estimatedCompletionTime_Accessor;
  }
  throw uci::base::UCIException("Error in getEstimatedCompletionTime(): An attempt was made to get an optional field that was not enabled, call hasEstimatedCompletionTime() to determine if it is safe to call getEstimatedCompletionTime()");
}

uci::type::ActivityBaseType& ActivityBaseType::setEstimatedCompletionTime(uci::type::DateTimeTypeValue value) {
  estimatedCompletionTime_Accessor = value;
  return *this;
}

bool ActivityBaseType::hasEstimatedCompletionTime() const noexcept {
  return estimatedCompletionTime_Accessor.has_value();
}

uci::type::ActivityBaseType& ActivityBaseType::clearEstimatedCompletionTime() noexcept {
  estimatedCompletionTime_Accessor.reset();
  return *this;
}

uci::type::PercentTypeValue ActivityBaseType::getEstimatedPercentComplete() const {
  if (estimatedPercentComplete_Accessor) {
    return *estimatedPercentComplete_Accessor;
  }
  throw uci::base::UCIException("Error in getEstimatedPercentComplete(): An attempt was made to get an optional field that was not enabled, call hasEstimatedPercentComplete() to determine if it is safe to call getEstimatedPercentComplete()");
}

uci::type::ActivityBaseType& ActivityBaseType::setEstimatedPercentComplete(uci::type::PercentTypeValue value) {
  estimatedPercentComplete_Accessor = value;
  return *this;
}

bool ActivityBaseType::hasEstimatedPercentComplete() const noexcept {
  return estimatedPercentComplete_Accessor.has_value();
}

uci::type::ActivityBaseType& ActivityBaseType::clearEstimatedPercentComplete() noexcept {
  estimatedPercentComplete_Accessor.reset();
  return *this;
}

std::unique_ptr<ActivityBaseType> ActivityBaseType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::activityBaseType : type};
  return std::unique_ptr<ActivityBaseType>(dynamic_cast<ActivityBaseType*>(asb_uci::util::DerivedTypesCreator::create(requestedType)));
}

/**  */
namespace ActivityBaseType_Names {

constexpr const char* Extern_Type_Name{"ActivityBaseType"};
constexpr const char* ActivityID_Name{"ActivityID"};
constexpr const char* CapabilityID_Name{"CapabilityID"};
constexpr const char* Interactive_Name{"Interactive"};
constexpr const char* ActivityState_Name{"ActivityState"};
constexpr const char* Basis_Name{"Basis"};
constexpr const char* ActivityRank_Name{"ActivityRank"};
constexpr const char* ActivityReason_Name{"ActivityReason"};
constexpr const char* Source_Name{"Source"};
constexpr const char* EstimatedStartTime_Name{"EstimatedStartTime"};
constexpr const char* EstimatedCompletionTime_Name{"EstimatedCompletionTime"};
constexpr const char* EstimatedPercentComplete_Name{"EstimatedPercentComplete"};

} // namespace ActivityBaseType_Names

void ActivityBaseType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ActivityBaseType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ActivityBaseType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ActivityBaseType_Names::ActivityID_Name) {
      ActivityID_Type::deserialize(valueType.second, accessor.getActivityID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ActivityBaseType_Names::CapabilityID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ActivityBaseType::CapabilityID& boundedList = accessor.getCapabilityID();
        const uci::type::ActivityBaseType::CapabilityID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::CapabilityID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ActivityBaseType_Names::Interactive_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setInteractive(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + ActivityBaseType_Names::ActivityState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getActivityState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ActivityBaseType_Names::Basis_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableBasis().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ActivityBaseType_Names::ActivityRank_Name) {
      ComparableRankingType::deserialize(valueType.second, accessor.enableActivityRank(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ActivityBaseType_Names::ActivityReason_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableActivityReason(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ActivityBaseType_Names::Source_Name) {
      uci::type::ActivityBaseType::Source& boundedList = accessor.getSource();
      const uci::type::ActivityBaseType::Source::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::ActivitySourceType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ActivityBaseType_Names::EstimatedStartTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEstimatedStartTime(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + ActivityBaseType_Names::EstimatedCompletionTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEstimatedCompletionTime(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + ActivityBaseType_Names::EstimatedPercentComplete_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEstimatedPercentComplete(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    }
  }
}

std::string ActivityBaseType::serialize(const uci::type::ActivityBaseType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ActivityBaseType_Names::Extern_Type_Name : nodeName)};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::activityBaseType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      asb_uci::util::SerializationHelpers::addTypeAttribute(node, ActivityBaseType_Names::Extern_Type_Name);
    }
    ActivityID_Type::serialize(accessor.getActivityID(), node, ActivityBaseType_Names::ActivityID_Name);
    {
      const uci::type::ActivityBaseType::CapabilityID& boundedList = accessor.getCapabilityID();
      for (uci::type::ActivityBaseType::CapabilityID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::CapabilityID_Type::serialize(boundedList.at(i), node, ActivityBaseType_Names::CapabilityID_Name);
      }
    }
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getInteractive(), node, ActivityBaseType_Names::Interactive_Name);
    ActivityStateEnum::serialize(accessor.getActivityState(), node, ActivityBaseType_Names::ActivityState_Name, false);
    if (accessor.hasBasis()) {
      ActivityBasisEnum::serialize(accessor.getBasis(), node, ActivityBaseType_Names::Basis_Name, false);
    }
    if (accessor.hasActivityRank()) {
      ComparableRankingType::serialize(accessor.getActivityRank(), node, ActivityBaseType_Names::ActivityRank_Name);
    }
    if (accessor.hasActivityReason()) {
      CannotComplyType::serialize(accessor.getActivityReason(), node, ActivityBaseType_Names::ActivityReason_Name);
    }
    {
      const uci::type::ActivityBaseType::Source& boundedList = accessor.getSource();
      for (uci::type::ActivityBaseType::Source::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::ActivitySourceType::serialize(boundedList.at(i), node, ActivityBaseType_Names::Source_Name);
      }
    }
    if (accessor.hasEstimatedStartTime()) {
      asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getEstimatedStartTime(), node, ActivityBaseType_Names::EstimatedStartTime_Name);
    }
    if (accessor.hasEstimatedCompletionTime()) {
      asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getEstimatedCompletionTime(), node, ActivityBaseType_Names::EstimatedCompletionTime_Name);
    }
    if (accessor.hasEstimatedPercentComplete()) {
      asb_uci::util::SerializationHelpers::serializeDouble(accessor.getEstimatedPercentComplete(), node, ActivityBaseType_Names::EstimatedPercentComplete_Name);
    }
    if (createNode) {
      propTree.add_child(generatedNodeName, node);
    }
  } else {
    asb_uci::util::DerivedTypesSerializer::serialize(accessor, propTree, nodeName, createNode);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace asb_uci

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

uci::type::ActivityBaseType& ActivityBaseType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ActivityBaseType>().release());
}

uci::type::ActivityBaseType& ActivityBaseType::create(const uci::type::ActivityBaseType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ActivityBaseType> newAccessor{boost::make_unique<asb_uci::type::ActivityBaseType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ActivityBaseType::destroy(uci::type::ActivityBaseType& accessor) {
  delete dynamic_cast<asb_uci::type::ActivityBaseType*>(&accessor);
}

} // namespace type

} // namespace uci

