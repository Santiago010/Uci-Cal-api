/** @file LaunchObservationMDT.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:13 PM
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

#include "../../../include/asb_uci/type/LaunchObservationMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/DataRecordBaseType.h"
#include "../../../include/asb_uci/type/LaunchObjectType.h"
#include "../../../include/asb_uci/type/LaunchObservationID_Type.h"
#include "../../../include/asb_uci/type/LaunchStaticDetailsType.h"
#include "../../../include/asb_uci/type/SourceFiltersType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LaunchObjectType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LaunchObservationID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LaunchObservationMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LaunchStaticDetailsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SourceFiltersType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

LaunchObservationMDT::LaunchObservationMDT()
  : launchObservationID_Accessor{boost::make_unique<LaunchObservationID_Type>()},
    launchObject_Accessor{boost::make_unique<LaunchObject>(1, SIZE_MAX)},
    source_Accessor{boost::make_unique<Source>(0, SIZE_MAX)},
    relatedLaunchObservationID_Accessor{boost::make_unique<RelatedLaunchObservationID>(0, SIZE_MAX)} {
}

LaunchObservationMDT::~LaunchObservationMDT() = default;

void LaunchObservationMDT::copy(const uci::type::LaunchObservationMDT& accessor) {
  copyImpl(accessor, false);
}

void LaunchObservationMDT::copyImpl(const uci::type::LaunchObservationMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    DataRecordBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const LaunchObservationMDT&>(accessor);
    setLaunchObservationID(*(accessorImpl.launchObservationID_Accessor));
    if (accessorImpl.hasInitialCreateTime()) {
      setInitialCreateTime(accessorImpl.getInitialCreateTime());
    } else {
      clearInitialCreateTime();
    }
    if (accessorImpl.hasLastUpdateTime()) {
      setLastUpdateTime(accessorImpl.getLastUpdateTime());
    } else {
      clearLastUpdateTime();
    }
    if (accessorImpl.staticLaunchCharacteristics_Accessor) {
      setStaticLaunchCharacteristics(*(accessorImpl.staticLaunchCharacteristics_Accessor));
    } else {
      staticLaunchCharacteristics_Accessor.reset();
    }
    setLaunchObject(*(accessorImpl.launchObject_Accessor));
    setSource(*(accessorImpl.source_Accessor));
    setRelatedLaunchObservationID(*(accessorImpl.relatedLaunchObservationID_Accessor));
  }
}

void LaunchObservationMDT::reset() noexcept {
  DataRecordBaseType::reset();
  launchObservationID_Accessor->reset();
  clearInitialCreateTime();
  clearLastUpdateTime();
  staticLaunchCharacteristics_Accessor.reset();
  launchObject_Accessor->reset();
  source_Accessor->reset();
  relatedLaunchObservationID_Accessor->reset();
}

const uci::type::LaunchObservationID_Type& LaunchObservationMDT::getLaunchObservationID() const {
  return *launchObservationID_Accessor;
}

uci::type::LaunchObservationID_Type& LaunchObservationMDT::getLaunchObservationID() {
  return *launchObservationID_Accessor;
}

uci::type::LaunchObservationMDT& LaunchObservationMDT::setLaunchObservationID(const uci::type::LaunchObservationID_Type& accessor) {
  if (&accessor != launchObservationID_Accessor.get()) {
    launchObservationID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::DateTimeTypeValue LaunchObservationMDT::getInitialCreateTime() const {
  if (initialCreateTime_Accessor) {
    return *initialCreateTime_Accessor;
  }
  throw uci::base::UCIException("Error in getInitialCreateTime(): An attempt was made to get an optional field that was not enabled, call hasInitialCreateTime() to determine if it is safe to call getInitialCreateTime()");
}

uci::type::LaunchObservationMDT& LaunchObservationMDT::setInitialCreateTime(uci::type::DateTimeTypeValue value) {
  initialCreateTime_Accessor = value;
  return *this;
}

bool LaunchObservationMDT::hasInitialCreateTime() const noexcept {
  return initialCreateTime_Accessor.has_value();
}

uci::type::LaunchObservationMDT& LaunchObservationMDT::clearInitialCreateTime() noexcept {
  initialCreateTime_Accessor.reset();
  return *this;
}

uci::type::DateTimeTypeValue LaunchObservationMDT::getLastUpdateTime() const {
  if (lastUpdateTime_Accessor) {
    return *lastUpdateTime_Accessor;
  }
  throw uci::base::UCIException("Error in getLastUpdateTime(): An attempt was made to get an optional field that was not enabled, call hasLastUpdateTime() to determine if it is safe to call getLastUpdateTime()");
}

uci::type::LaunchObservationMDT& LaunchObservationMDT::setLastUpdateTime(uci::type::DateTimeTypeValue value) {
  lastUpdateTime_Accessor = value;
  return *this;
}

bool LaunchObservationMDT::hasLastUpdateTime() const noexcept {
  return lastUpdateTime_Accessor.has_value();
}

uci::type::LaunchObservationMDT& LaunchObservationMDT::clearLastUpdateTime() noexcept {
  lastUpdateTime_Accessor.reset();
  return *this;
}

uci::type::LaunchStaticDetailsType& LaunchObservationMDT::getStaticLaunchCharacteristics_() const {
  if (staticLaunchCharacteristics_Accessor) {
    return *staticLaunchCharacteristics_Accessor;
  }
  throw uci::base::UCIException("Error in getStaticLaunchCharacteristics(): An attempt was made to get an optional field that was not enabled, call hasStaticLaunchCharacteristics() to determine if it is safe to call getStaticLaunchCharacteristics()");
}

const uci::type::LaunchStaticDetailsType& LaunchObservationMDT::getStaticLaunchCharacteristics() const {
  return getStaticLaunchCharacteristics_();
}

uci::type::LaunchStaticDetailsType& LaunchObservationMDT::getStaticLaunchCharacteristics() {
  return getStaticLaunchCharacteristics_();
}

uci::type::LaunchObservationMDT& LaunchObservationMDT::setStaticLaunchCharacteristics(const uci::type::LaunchStaticDetailsType& accessor) {
  enableStaticLaunchCharacteristics();
  if (&accessor != staticLaunchCharacteristics_Accessor.get()) {
    staticLaunchCharacteristics_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool LaunchObservationMDT::hasStaticLaunchCharacteristics() const noexcept {
  return static_cast<bool>(staticLaunchCharacteristics_Accessor);
}

uci::type::LaunchStaticDetailsType& LaunchObservationMDT::enableStaticLaunchCharacteristics(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::launchStaticDetailsType : type};
  if ((!staticLaunchCharacteristics_Accessor) || (staticLaunchCharacteristics_Accessor->getAccessorType() != requestedType)) {
    staticLaunchCharacteristics_Accessor = LaunchStaticDetailsType::create(requestedType);
    if (!staticLaunchCharacteristics_Accessor) {
      throw uci::base::UCIException("Error in enableStaticLaunchCharacteristics(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *staticLaunchCharacteristics_Accessor;
}

uci::type::LaunchObservationMDT& LaunchObservationMDT::clearStaticLaunchCharacteristics() noexcept {
  staticLaunchCharacteristics_Accessor.reset();
  return *this;
}

const uci::type::LaunchObservationMDT::LaunchObject& LaunchObservationMDT::getLaunchObject() const {
  return *launchObject_Accessor;
}

uci::type::LaunchObservationMDT::LaunchObject& LaunchObservationMDT::getLaunchObject() {
  return *launchObject_Accessor;
}

uci::type::LaunchObservationMDT& LaunchObservationMDT::setLaunchObject(const uci::type::LaunchObservationMDT::LaunchObject& accessor) {
  if (&accessor != launchObject_Accessor.get()) {
    launchObject_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::LaunchObservationMDT::Source& LaunchObservationMDT::getSource() const {
  return *source_Accessor;
}

uci::type::LaunchObservationMDT::Source& LaunchObservationMDT::getSource() {
  return *source_Accessor;
}

uci::type::LaunchObservationMDT& LaunchObservationMDT::setSource(const uci::type::LaunchObservationMDT::Source& accessor) {
  if (&accessor != source_Accessor.get()) {
    source_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::LaunchObservationMDT::RelatedLaunchObservationID& LaunchObservationMDT::getRelatedLaunchObservationID() const {
  return *relatedLaunchObservationID_Accessor;
}

uci::type::LaunchObservationMDT::RelatedLaunchObservationID& LaunchObservationMDT::getRelatedLaunchObservationID() {
  return *relatedLaunchObservationID_Accessor;
}

uci::type::LaunchObservationMDT& LaunchObservationMDT::setRelatedLaunchObservationID(const uci::type::LaunchObservationMDT::RelatedLaunchObservationID& accessor) {
  if (&accessor != relatedLaunchObservationID_Accessor.get()) {
    relatedLaunchObservationID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<LaunchObservationMDT> LaunchObservationMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::launchObservationMDT : type};
  return (requestedType == uci::type::accessorType::launchObservationMDT) ? boost::make_unique<LaunchObservationMDT>() : nullptr;
}

/**  */
namespace LaunchObservationMDT_Names {

constexpr const char* Extern_Type_Name{"LaunchObservationMDT"};
constexpr const char* LaunchObservationID_Name{"LaunchObservationID"};
constexpr const char* InitialCreateTime_Name{"InitialCreateTime"};
constexpr const char* LastUpdateTime_Name{"LastUpdateTime"};
constexpr const char* StaticLaunchCharacteristics_Name{"StaticLaunchCharacteristics"};
constexpr const char* LaunchObject_Name{"LaunchObject"};
constexpr const char* Source_Name{"Source"};
constexpr const char* RelatedLaunchObservationID_Name{"RelatedLaunchObservationID"};

} // namespace LaunchObservationMDT_Names

void LaunchObservationMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::LaunchObservationMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = LaunchObservationMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + LaunchObservationMDT_Names::LaunchObservationID_Name) {
      LaunchObservationID_Type::deserialize(valueType.second, accessor.getLaunchObservationID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + LaunchObservationMDT_Names::InitialCreateTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setInitialCreateTime(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + LaunchObservationMDT_Names::LastUpdateTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setLastUpdateTime(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + LaunchObservationMDT_Names::StaticLaunchCharacteristics_Name) {
      LaunchStaticDetailsType::deserialize(valueType.second, accessor.enableStaticLaunchCharacteristics(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + LaunchObservationMDT_Names::LaunchObject_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::LaunchObservationMDT::LaunchObject& boundedList = accessor.getLaunchObject();
        const uci::type::LaunchObservationMDT::LaunchObject::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::LaunchObjectType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + LaunchObservationMDT_Names::Source_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::LaunchObservationMDT::Source& boundedList = accessor.getSource();
        const uci::type::LaunchObservationMDT::Source::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::SourceFiltersType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + LaunchObservationMDT_Names::RelatedLaunchObservationID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::LaunchObservationMDT::RelatedLaunchObservationID& boundedList = accessor.getRelatedLaunchObservationID();
        const uci::type::LaunchObservationMDT::RelatedLaunchObservationID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::LaunchObservationID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  DataRecordBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string LaunchObservationMDT::serialize(const uci::type::LaunchObservationMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? LaunchObservationMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, LaunchObservationMDT_Names::Extern_Type_Name);
  }
  DataRecordBaseType::serialize(accessor, node, "", false, false, false);
  LaunchObservationID_Type::serialize(accessor.getLaunchObservationID(), node, LaunchObservationMDT_Names::LaunchObservationID_Name);
  if (accessor.hasInitialCreateTime()) {
    asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getInitialCreateTime(), node, LaunchObservationMDT_Names::InitialCreateTime_Name);
  }
  if (accessor.hasLastUpdateTime()) {
    asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getLastUpdateTime(), node, LaunchObservationMDT_Names::LastUpdateTime_Name);
  }
  if (accessor.hasStaticLaunchCharacteristics()) {
    LaunchStaticDetailsType::serialize(accessor.getStaticLaunchCharacteristics(), node, LaunchObservationMDT_Names::StaticLaunchCharacteristics_Name);
  }
  {
    const uci::type::LaunchObservationMDT::LaunchObject& boundedList = accessor.getLaunchObject();
    for (uci::type::LaunchObservationMDT::LaunchObject::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::LaunchObjectType::serialize(boundedList.at(i), node, LaunchObservationMDT_Names::LaunchObject_Name);
    }
  }
  {
    const uci::type::LaunchObservationMDT::Source& boundedList = accessor.getSource();
    for (uci::type::LaunchObservationMDT::Source::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::SourceFiltersType::serialize(boundedList.at(i), node, LaunchObservationMDT_Names::Source_Name);
    }
  }
  {
    const uci::type::LaunchObservationMDT::RelatedLaunchObservationID& boundedList = accessor.getRelatedLaunchObservationID();
    for (uci::type::LaunchObservationMDT::RelatedLaunchObservationID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::LaunchObservationID_Type::serialize(boundedList.at(i), node, LaunchObservationMDT_Names::RelatedLaunchObservationID_Name);
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

uci::type::LaunchObservationMDT& LaunchObservationMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::LaunchObservationMDT>().release());
}

uci::type::LaunchObservationMDT& LaunchObservationMDT::create(const uci::type::LaunchObservationMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::LaunchObservationMDT> newAccessor{boost::make_unique<asb_uci::type::LaunchObservationMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void LaunchObservationMDT::destroy(uci::type::LaunchObservationMDT& accessor) {
  delete dynamic_cast<asb_uci::type::LaunchObservationMDT*>(&accessor);
}

} // namespace type

} // namespace uci

