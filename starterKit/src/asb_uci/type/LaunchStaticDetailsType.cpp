/** @file LaunchStaticDetailsType.cpp
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

#include "../../../include/asb_uci/type/LaunchStaticDetailsType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/AssetType.h"
#include "../../../include/asb_uci/type/EOB_SiteIdentityType.h"
#include "../../../include/asb_uci/type/EnvironmentEnum.h"
#include "../../../include/asb_uci/type/OpPointID_Type.h"
#include "../../../include/asb_uci/type/Point2D_ReportedType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AnglePositiveType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AssetType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EOB_SiteIdentityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EnvironmentEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LaunchStaticDetailsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OpPointID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Point2D_ReportedType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

LaunchStaticDetailsType::LaunchStaticDetailsType()
  : sourceLaunchedFrom_Accessor{boost::make_unique<SourceLaunchedFrom>(0, SIZE_MAX)} {
}

LaunchStaticDetailsType::~LaunchStaticDetailsType() = default;

void LaunchStaticDetailsType::copy(const uci::type::LaunchStaticDetailsType& accessor) {
  copyImpl(accessor, false);
}

void LaunchStaticDetailsType::copyImpl(const uci::type::LaunchStaticDetailsType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const LaunchStaticDetailsType&>(accessor);
    if (accessorImpl.hasLaunchTime()) {
      setLaunchTime(accessorImpl.getLaunchTime());
    } else {
      clearLaunchTime();
    }
    if (accessorImpl.launchSite_Accessor) {
      setLaunchSite(*(accessorImpl.launchSite_Accessor));
    } else {
      launchSite_Accessor.reset();
    }
    if (accessorImpl.launchLocation_Accessor) {
      setLaunchLocation(*(accessorImpl.launchLocation_Accessor));
    } else {
      launchLocation_Accessor.reset();
    }
    if (accessorImpl.hasLaunchAzimuth()) {
      setLaunchAzimuth(accessorImpl.getLaunchAzimuth());
    } else {
      clearLaunchAzimuth();
    }
    if (accessorImpl.launchOpPointID_Accessor) {
      setLaunchOpPointID(*(accessorImpl.launchOpPointID_Accessor));
    } else {
      launchOpPointID_Accessor.reset();
    }
    setSourceLaunchedFrom(*(accessorImpl.sourceLaunchedFrom_Accessor));
    if (accessorImpl.domainLaunchedFrom_Accessor) {
      setDomainLaunchedFrom(*(accessorImpl.domainLaunchedFrom_Accessor));
    } else {
      domainLaunchedFrom_Accessor.reset();
    }
  }
}

void LaunchStaticDetailsType::reset() noexcept {
  clearLaunchTime();
  launchSite_Accessor.reset();
  launchLocation_Accessor.reset();
  clearLaunchAzimuth();
  launchOpPointID_Accessor.reset();
  sourceLaunchedFrom_Accessor->reset();
  domainLaunchedFrom_Accessor.reset();
}

uci::type::DateTimeTypeValue LaunchStaticDetailsType::getLaunchTime() const {
  if (launchTime_Accessor) {
    return *launchTime_Accessor;
  }
  throw uci::base::UCIException("Error in getLaunchTime(): An attempt was made to get an optional field that was not enabled, call hasLaunchTime() to determine if it is safe to call getLaunchTime()");
}

uci::type::LaunchStaticDetailsType& LaunchStaticDetailsType::setLaunchTime(uci::type::DateTimeTypeValue value) {
  launchTime_Accessor = value;
  return *this;
}

bool LaunchStaticDetailsType::hasLaunchTime() const noexcept {
  return launchTime_Accessor.has_value();
}

uci::type::LaunchStaticDetailsType& LaunchStaticDetailsType::clearLaunchTime() noexcept {
  launchTime_Accessor.reset();
  return *this;
}

uci::type::EOB_SiteIdentityType& LaunchStaticDetailsType::getLaunchSite_() const {
  if (launchSite_Accessor) {
    return *launchSite_Accessor;
  }
  throw uci::base::UCIException("Error in getLaunchSite(): An attempt was made to get an optional field that was not enabled, call hasLaunchSite() to determine if it is safe to call getLaunchSite()");
}

const uci::type::EOB_SiteIdentityType& LaunchStaticDetailsType::getLaunchSite() const {
  return getLaunchSite_();
}

uci::type::EOB_SiteIdentityType& LaunchStaticDetailsType::getLaunchSite() {
  return getLaunchSite_();
}

uci::type::LaunchStaticDetailsType& LaunchStaticDetailsType::setLaunchSite(const uci::type::EOB_SiteIdentityType& accessor) {
  enableLaunchSite();
  if (&accessor != launchSite_Accessor.get()) {
    launchSite_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool LaunchStaticDetailsType::hasLaunchSite() const noexcept {
  return static_cast<bool>(launchSite_Accessor);
}

uci::type::EOB_SiteIdentityType& LaunchStaticDetailsType::enableLaunchSite(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::eOB_SiteIdentityType : type};
  if ((!launchSite_Accessor) || (launchSite_Accessor->getAccessorType() != requestedType)) {
    launchSite_Accessor = EOB_SiteIdentityType::create(requestedType);
    if (!launchSite_Accessor) {
      throw uci::base::UCIException("Error in enableLaunchSite(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *launchSite_Accessor;
}

uci::type::LaunchStaticDetailsType& LaunchStaticDetailsType::clearLaunchSite() noexcept {
  launchSite_Accessor.reset();
  return *this;
}

uci::type::Point2D_ReportedType& LaunchStaticDetailsType::getLaunchLocation_() const {
  if (launchLocation_Accessor) {
    return *launchLocation_Accessor;
  }
  throw uci::base::UCIException("Error in getLaunchLocation(): An attempt was made to get an optional field that was not enabled, call hasLaunchLocation() to determine if it is safe to call getLaunchLocation()");
}

const uci::type::Point2D_ReportedType& LaunchStaticDetailsType::getLaunchLocation() const {
  return getLaunchLocation_();
}

uci::type::Point2D_ReportedType& LaunchStaticDetailsType::getLaunchLocation() {
  return getLaunchLocation_();
}

uci::type::LaunchStaticDetailsType& LaunchStaticDetailsType::setLaunchLocation(const uci::type::Point2D_ReportedType& accessor) {
  enableLaunchLocation();
  if (&accessor != launchLocation_Accessor.get()) {
    launchLocation_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool LaunchStaticDetailsType::hasLaunchLocation() const noexcept {
  return static_cast<bool>(launchLocation_Accessor);
}

uci::type::Point2D_ReportedType& LaunchStaticDetailsType::enableLaunchLocation(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::point2D_ReportedType : type};
  if ((!launchLocation_Accessor) || (launchLocation_Accessor->getAccessorType() != requestedType)) {
    launchLocation_Accessor = Point2D_ReportedType::create(requestedType);
    if (!launchLocation_Accessor) {
      throw uci::base::UCIException("Error in enableLaunchLocation(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *launchLocation_Accessor;
}

uci::type::LaunchStaticDetailsType& LaunchStaticDetailsType::clearLaunchLocation() noexcept {
  launchLocation_Accessor.reset();
  return *this;
}

uci::type::AnglePositiveTypeValue LaunchStaticDetailsType::getLaunchAzimuth() const {
  if (launchAzimuth_Accessor) {
    return *launchAzimuth_Accessor;
  }
  throw uci::base::UCIException("Error in getLaunchAzimuth(): An attempt was made to get an optional field that was not enabled, call hasLaunchAzimuth() to determine if it is safe to call getLaunchAzimuth()");
}

uci::type::LaunchStaticDetailsType& LaunchStaticDetailsType::setLaunchAzimuth(uci::type::AnglePositiveTypeValue value) {
  launchAzimuth_Accessor = value;
  return *this;
}

bool LaunchStaticDetailsType::hasLaunchAzimuth() const noexcept {
  return launchAzimuth_Accessor.has_value();
}

uci::type::LaunchStaticDetailsType& LaunchStaticDetailsType::clearLaunchAzimuth() noexcept {
  launchAzimuth_Accessor.reset();
  return *this;
}

uci::type::OpPointID_Type& LaunchStaticDetailsType::getLaunchOpPointID_() const {
  if (launchOpPointID_Accessor) {
    return *launchOpPointID_Accessor;
  }
  throw uci::base::UCIException("Error in getLaunchOpPointID(): An attempt was made to get an optional field that was not enabled, call hasLaunchOpPointID() to determine if it is safe to call getLaunchOpPointID()");
}

const uci::type::OpPointID_Type& LaunchStaticDetailsType::getLaunchOpPointID() const {
  return getLaunchOpPointID_();
}

uci::type::OpPointID_Type& LaunchStaticDetailsType::getLaunchOpPointID() {
  return getLaunchOpPointID_();
}

uci::type::LaunchStaticDetailsType& LaunchStaticDetailsType::setLaunchOpPointID(const uci::type::OpPointID_Type& accessor) {
  enableLaunchOpPointID();
  if (&accessor != launchOpPointID_Accessor.get()) {
    launchOpPointID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool LaunchStaticDetailsType::hasLaunchOpPointID() const noexcept {
  return static_cast<bool>(launchOpPointID_Accessor);
}

uci::type::OpPointID_Type& LaunchStaticDetailsType::enableLaunchOpPointID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::opPointID_Type : type};
  if ((!launchOpPointID_Accessor) || (launchOpPointID_Accessor->getAccessorType() != requestedType)) {
    launchOpPointID_Accessor = OpPointID_Type::create(requestedType);
    if (!launchOpPointID_Accessor) {
      throw uci::base::UCIException("Error in enableLaunchOpPointID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *launchOpPointID_Accessor;
}

uci::type::LaunchStaticDetailsType& LaunchStaticDetailsType::clearLaunchOpPointID() noexcept {
  launchOpPointID_Accessor.reset();
  return *this;
}

const uci::type::LaunchStaticDetailsType::SourceLaunchedFrom& LaunchStaticDetailsType::getSourceLaunchedFrom() const {
  return *sourceLaunchedFrom_Accessor;
}

uci::type::LaunchStaticDetailsType::SourceLaunchedFrom& LaunchStaticDetailsType::getSourceLaunchedFrom() {
  return *sourceLaunchedFrom_Accessor;
}

uci::type::LaunchStaticDetailsType& LaunchStaticDetailsType::setSourceLaunchedFrom(const uci::type::LaunchStaticDetailsType::SourceLaunchedFrom& accessor) {
  if (&accessor != sourceLaunchedFrom_Accessor.get()) {
    sourceLaunchedFrom_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::EnvironmentEnum& LaunchStaticDetailsType::getDomainLaunchedFrom_() const {
  if (domainLaunchedFrom_Accessor) {
    return *domainLaunchedFrom_Accessor;
  }
  throw uci::base::UCIException("Error in getDomainLaunchedFrom(): An attempt was made to get an optional field that was not enabled, call hasDomainLaunchedFrom() to determine if it is safe to call getDomainLaunchedFrom()");
}

const uci::type::EnvironmentEnum& LaunchStaticDetailsType::getDomainLaunchedFrom() const {
  return getDomainLaunchedFrom_();
}

uci::type::EnvironmentEnum& LaunchStaticDetailsType::getDomainLaunchedFrom() {
  return getDomainLaunchedFrom_();
}

uci::type::LaunchStaticDetailsType& LaunchStaticDetailsType::setDomainLaunchedFrom(const uci::type::EnvironmentEnum& accessor) {
  enableDomainLaunchedFrom();
  if (&accessor != domainLaunchedFrom_Accessor.get()) {
    domainLaunchedFrom_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::LaunchStaticDetailsType& LaunchStaticDetailsType::setDomainLaunchedFrom(const uci::type::EnvironmentEnum::EnumerationItem value) {
  enableDomainLaunchedFrom().setValue(value);
  return *this;
}

bool LaunchStaticDetailsType::hasDomainLaunchedFrom() const noexcept {
  return static_cast<bool>(domainLaunchedFrom_Accessor);
}

uci::type::EnvironmentEnum& LaunchStaticDetailsType::enableDomainLaunchedFrom(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::environmentEnum : type};
  if ((!domainLaunchedFrom_Accessor) || (domainLaunchedFrom_Accessor->getAccessorType() != requestedType)) {
    domainLaunchedFrom_Accessor = EnvironmentEnum::create(requestedType);
    if (!domainLaunchedFrom_Accessor) {
      throw uci::base::UCIException("Error in enableDomainLaunchedFrom(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *domainLaunchedFrom_Accessor;
}

uci::type::LaunchStaticDetailsType& LaunchStaticDetailsType::clearDomainLaunchedFrom() noexcept {
  domainLaunchedFrom_Accessor.reset();
  return *this;
}

std::unique_ptr<LaunchStaticDetailsType> LaunchStaticDetailsType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::launchStaticDetailsType : type};
  return (requestedType == uci::type::accessorType::launchStaticDetailsType) ? boost::make_unique<LaunchStaticDetailsType>() : nullptr;
}

/**  */
namespace LaunchStaticDetailsType_Names {

constexpr const char* Extern_Type_Name{"LaunchStaticDetailsType"};
constexpr const char* LaunchTime_Name{"LaunchTime"};
constexpr const char* LaunchSite_Name{"LaunchSite"};
constexpr const char* LaunchLocation_Name{"LaunchLocation"};
constexpr const char* LaunchAzimuth_Name{"LaunchAzimuth"};
constexpr const char* LaunchOpPointID_Name{"LaunchOpPointID"};
constexpr const char* SourceLaunchedFrom_Name{"SourceLaunchedFrom"};
constexpr const char* DomainLaunchedFrom_Name{"DomainLaunchedFrom"};

} // namespace LaunchStaticDetailsType_Names

void LaunchStaticDetailsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::LaunchStaticDetailsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = LaunchStaticDetailsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + LaunchStaticDetailsType_Names::LaunchTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setLaunchTime(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + LaunchStaticDetailsType_Names::LaunchSite_Name) {
      EOB_SiteIdentityType::deserialize(valueType.second, accessor.enableLaunchSite(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + LaunchStaticDetailsType_Names::LaunchLocation_Name) {
      Point2D_ReportedType::deserialize(valueType.second, accessor.enableLaunchLocation(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + LaunchStaticDetailsType_Names::LaunchAzimuth_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setLaunchAzimuth(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + LaunchStaticDetailsType_Names::LaunchOpPointID_Name) {
      OpPointID_Type::deserialize(valueType.second, accessor.enableLaunchOpPointID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + LaunchStaticDetailsType_Names::SourceLaunchedFrom_Name) {
      uci::type::LaunchStaticDetailsType::SourceLaunchedFrom& boundedList = accessor.getSourceLaunchedFrom();
      const uci::type::LaunchStaticDetailsType::SourceLaunchedFrom::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::AssetType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + LaunchStaticDetailsType_Names::DomainLaunchedFrom_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableDomainLaunchedFrom().setValueFromName(*value);
      }
    }
  }
}

std::string LaunchStaticDetailsType::serialize(const uci::type::LaunchStaticDetailsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? LaunchStaticDetailsType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, LaunchStaticDetailsType_Names::Extern_Type_Name);
  }
  if (accessor.hasLaunchTime()) {
    asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getLaunchTime(), node, LaunchStaticDetailsType_Names::LaunchTime_Name);
  }
  if (accessor.hasLaunchSite()) {
    EOB_SiteIdentityType::serialize(accessor.getLaunchSite(), node, LaunchStaticDetailsType_Names::LaunchSite_Name);
  }
  if (accessor.hasLaunchLocation()) {
    Point2D_ReportedType::serialize(accessor.getLaunchLocation(), node, LaunchStaticDetailsType_Names::LaunchLocation_Name);
  }
  if (accessor.hasLaunchAzimuth()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getLaunchAzimuth(), node, LaunchStaticDetailsType_Names::LaunchAzimuth_Name);
  }
  if (accessor.hasLaunchOpPointID()) {
    OpPointID_Type::serialize(accessor.getLaunchOpPointID(), node, LaunchStaticDetailsType_Names::LaunchOpPointID_Name);
  }
  {
    const uci::type::LaunchStaticDetailsType::SourceLaunchedFrom& boundedList = accessor.getSourceLaunchedFrom();
    for (uci::type::LaunchStaticDetailsType::SourceLaunchedFrom::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::AssetType::serialize(boundedList.at(i), node, LaunchStaticDetailsType_Names::SourceLaunchedFrom_Name);
    }
  }
  if (accessor.hasDomainLaunchedFrom()) {
    EnvironmentEnum::serialize(accessor.getDomainLaunchedFrom(), node, LaunchStaticDetailsType_Names::DomainLaunchedFrom_Name, false);
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

uci::type::LaunchStaticDetailsType& LaunchStaticDetailsType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::LaunchStaticDetailsType>().release());
}

uci::type::LaunchStaticDetailsType& LaunchStaticDetailsType::create(const uci::type::LaunchStaticDetailsType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::LaunchStaticDetailsType> newAccessor{boost::make_unique<asb_uci::type::LaunchStaticDetailsType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void LaunchStaticDetailsType::destroy(uci::type::LaunchStaticDetailsType& accessor) {
  delete dynamic_cast<asb_uci::type::LaunchStaticDetailsType*>(&accessor);
}

} // namespace type

} // namespace uci

