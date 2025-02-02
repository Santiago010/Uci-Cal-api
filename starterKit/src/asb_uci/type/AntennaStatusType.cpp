/** @file AntennaStatusType.cpp
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

#include "../../../include/asb_uci/type/AntennaStatusType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/AntennaPerformanceProfileType.h"
#include "../../../include/asb_uci/type/AntennaResourceInstanceStatusType.h"
#include "../../../include/asb_uci/type/CapabilityID_Type.h"
#include "../../../include/asb_uci/type/ResourceAllocatorSupportedActivitiesType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AntennaPerformanceProfileType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AntennaResourceInstanceStatusType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AntennaStatusType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ResourceAllocatorSupportedActivitiesType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

AntennaStatusType::AntennaStatusType()
  : capabilityID_Accessor{boost::make_unique<CapabilityID>(1, SIZE_MAX)},
    antennaResourceInstanceStatus_Accessor{boost::make_unique<AntennaResourceInstanceStatus>(0, SIZE_MAX)},
    supportedActivities_Accessor{boost::make_unique<SupportedActivities>(0, SIZE_MAX)} {
}

AntennaStatusType::~AntennaStatusType() = default;

void AntennaStatusType::copy(const uci::type::AntennaStatusType& accessor) {
  copyImpl(accessor, false);
}

void AntennaStatusType::copyImpl(const uci::type::AntennaStatusType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const AntennaStatusType&>(accessor);
    if (accessorImpl.hasBeamConfigurationSupport()) {
      setBeamConfigurationSupport(accessorImpl.getBeamConfigurationSupport());
    } else {
      clearBeamConfigurationSupport();
    }
    setCapabilityID(*(accessorImpl.capabilityID_Accessor));
    if (accessorImpl.antennaPerformanceProfile_Accessor) {
      setAntennaPerformanceProfile(*(accessorImpl.antennaPerformanceProfile_Accessor));
    } else {
      antennaPerformanceProfile_Accessor.reset();
    }
    setAntennaResourceInstanceStatus(*(accessorImpl.antennaResourceInstanceStatus_Accessor));
    setSupportedActivities(*(accessorImpl.supportedActivities_Accessor));
  }
}

void AntennaStatusType::reset() noexcept {
  clearBeamConfigurationSupport();
  capabilityID_Accessor->reset();
  antennaPerformanceProfile_Accessor.reset();
  antennaResourceInstanceStatus_Accessor->reset();
  supportedActivities_Accessor->reset();
}

xs::Boolean AntennaStatusType::getBeamConfigurationSupport() const {
  if (beamConfigurationSupport_Accessor) {
    return *beamConfigurationSupport_Accessor;
  }
  throw uci::base::UCIException("Error in getBeamConfigurationSupport(): An attempt was made to get an optional field that was not enabled, call hasBeamConfigurationSupport() to determine if it is safe to call getBeamConfigurationSupport()");
}

uci::type::AntennaStatusType& AntennaStatusType::setBeamConfigurationSupport(xs::Boolean value) {
  beamConfigurationSupport_Accessor = value;
  return *this;
}

bool AntennaStatusType::hasBeamConfigurationSupport() const noexcept {
  return beamConfigurationSupport_Accessor.has_value();
}

uci::type::AntennaStatusType& AntennaStatusType::clearBeamConfigurationSupport() noexcept {
  beamConfigurationSupport_Accessor.reset();
  return *this;
}

const uci::type::AntennaStatusType::CapabilityID& AntennaStatusType::getCapabilityID() const {
  return *capabilityID_Accessor;
}

uci::type::AntennaStatusType::CapabilityID& AntennaStatusType::getCapabilityID() {
  return *capabilityID_Accessor;
}

uci::type::AntennaStatusType& AntennaStatusType::setCapabilityID(const uci::type::AntennaStatusType::CapabilityID& accessor) {
  if (&accessor != capabilityID_Accessor.get()) {
    capabilityID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::AntennaPerformanceProfileType& AntennaStatusType::getAntennaPerformanceProfile_() const {
  if (antennaPerformanceProfile_Accessor) {
    return *antennaPerformanceProfile_Accessor;
  }
  throw uci::base::UCIException("Error in getAntennaPerformanceProfile(): An attempt was made to get an optional field that was not enabled, call hasAntennaPerformanceProfile() to determine if it is safe to call getAntennaPerformanceProfile()");
}

const uci::type::AntennaPerformanceProfileType& AntennaStatusType::getAntennaPerformanceProfile() const {
  return getAntennaPerformanceProfile_();
}

uci::type::AntennaPerformanceProfileType& AntennaStatusType::getAntennaPerformanceProfile() {
  return getAntennaPerformanceProfile_();
}

uci::type::AntennaStatusType& AntennaStatusType::setAntennaPerformanceProfile(const uci::type::AntennaPerformanceProfileType& accessor) {
  enableAntennaPerformanceProfile();
  if (&accessor != antennaPerformanceProfile_Accessor.get()) {
    antennaPerformanceProfile_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool AntennaStatusType::hasAntennaPerformanceProfile() const noexcept {
  return static_cast<bool>(antennaPerformanceProfile_Accessor);
}

uci::type::AntennaPerformanceProfileType& AntennaStatusType::enableAntennaPerformanceProfile(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::antennaPerformanceProfileType : type};
  if ((!antennaPerformanceProfile_Accessor) || (antennaPerformanceProfile_Accessor->getAccessorType() != requestedType)) {
    antennaPerformanceProfile_Accessor = AntennaPerformanceProfileType::create(requestedType);
    if (!antennaPerformanceProfile_Accessor) {
      throw uci::base::UCIException("Error in enableAntennaPerformanceProfile(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *antennaPerformanceProfile_Accessor;
}

uci::type::AntennaStatusType& AntennaStatusType::clearAntennaPerformanceProfile() noexcept {
  antennaPerformanceProfile_Accessor.reset();
  return *this;
}

const uci::type::AntennaStatusType::AntennaResourceInstanceStatus& AntennaStatusType::getAntennaResourceInstanceStatus() const {
  return *antennaResourceInstanceStatus_Accessor;
}

uci::type::AntennaStatusType::AntennaResourceInstanceStatus& AntennaStatusType::getAntennaResourceInstanceStatus() {
  return *antennaResourceInstanceStatus_Accessor;
}

uci::type::AntennaStatusType& AntennaStatusType::setAntennaResourceInstanceStatus(const uci::type::AntennaStatusType::AntennaResourceInstanceStatus& accessor) {
  if (&accessor != antennaResourceInstanceStatus_Accessor.get()) {
    antennaResourceInstanceStatus_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::AntennaStatusType::SupportedActivities& AntennaStatusType::getSupportedActivities() const {
  return *supportedActivities_Accessor;
}

uci::type::AntennaStatusType::SupportedActivities& AntennaStatusType::getSupportedActivities() {
  return *supportedActivities_Accessor;
}

uci::type::AntennaStatusType& AntennaStatusType::setSupportedActivities(const uci::type::AntennaStatusType::SupportedActivities& accessor) {
  if (&accessor != supportedActivities_Accessor.get()) {
    supportedActivities_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<AntennaStatusType> AntennaStatusType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::antennaStatusType : type};
  return (requestedType == uci::type::accessorType::antennaStatusType) ? boost::make_unique<AntennaStatusType>() : nullptr;
}

/**  */
namespace AntennaStatusType_Names {

constexpr const char* Extern_Type_Name{"AntennaStatusType"};
constexpr const char* BeamConfigurationSupport_Name{"BeamConfigurationSupport"};
constexpr const char* CapabilityID_Name{"CapabilityID"};
constexpr const char* AntennaPerformanceProfile_Name{"AntennaPerformanceProfile"};
constexpr const char* AntennaResourceInstanceStatus_Name{"AntennaResourceInstanceStatus"};
constexpr const char* SupportedActivities_Name{"SupportedActivities"};

} // namespace AntennaStatusType_Names

void AntennaStatusType::deserialize(const boost::property_tree::ptree& propTree, uci::type::AntennaStatusType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = AntennaStatusType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + AntennaStatusType_Names::BeamConfigurationSupport_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setBeamConfigurationSupport(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + AntennaStatusType_Names::CapabilityID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::AntennaStatusType::CapabilityID& boundedList = accessor.getCapabilityID();
        const uci::type::AntennaStatusType::CapabilityID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::CapabilityID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + AntennaStatusType_Names::AntennaPerformanceProfile_Name) {
      AntennaPerformanceProfileType::deserialize(valueType.second, accessor.enableAntennaPerformanceProfile(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + AntennaStatusType_Names::AntennaResourceInstanceStatus_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::AntennaStatusType::AntennaResourceInstanceStatus& boundedList = accessor.getAntennaResourceInstanceStatus();
        const uci::type::AntennaStatusType::AntennaResourceInstanceStatus::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::AntennaResourceInstanceStatusType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + AntennaStatusType_Names::SupportedActivities_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::AntennaStatusType::SupportedActivities& boundedList = accessor.getSupportedActivities();
        const uci::type::AntennaStatusType::SupportedActivities::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::ResourceAllocatorSupportedActivitiesType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string AntennaStatusType::serialize(const uci::type::AntennaStatusType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? AntennaStatusType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, AntennaStatusType_Names::Extern_Type_Name);
  }
  if (accessor.hasBeamConfigurationSupport()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getBeamConfigurationSupport(), node, AntennaStatusType_Names::BeamConfigurationSupport_Name);
  }
  {
    const uci::type::AntennaStatusType::CapabilityID& boundedList = accessor.getCapabilityID();
    for (uci::type::AntennaStatusType::CapabilityID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::CapabilityID_Type::serialize(boundedList.at(i), node, AntennaStatusType_Names::CapabilityID_Name);
    }
  }
  if (accessor.hasAntennaPerformanceProfile()) {
    AntennaPerformanceProfileType::serialize(accessor.getAntennaPerformanceProfile(), node, AntennaStatusType_Names::AntennaPerformanceProfile_Name);
  }
  {
    const uci::type::AntennaStatusType::AntennaResourceInstanceStatus& boundedList = accessor.getAntennaResourceInstanceStatus();
    for (uci::type::AntennaStatusType::AntennaResourceInstanceStatus::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::AntennaResourceInstanceStatusType::serialize(boundedList.at(i), node, AntennaStatusType_Names::AntennaResourceInstanceStatus_Name);
    }
  }
  {
    const uci::type::AntennaStatusType::SupportedActivities& boundedList = accessor.getSupportedActivities();
    for (uci::type::AntennaStatusType::SupportedActivities::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ResourceAllocatorSupportedActivitiesType::serialize(boundedList.at(i), node, AntennaStatusType_Names::SupportedActivities_Name);
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

uci::type::AntennaStatusType& AntennaStatusType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::AntennaStatusType>().release());
}

uci::type::AntennaStatusType& AntennaStatusType::create(const uci::type::AntennaStatusType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::AntennaStatusType> newAccessor{boost::make_unique<asb_uci::type::AntennaStatusType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void AntennaStatusType::destroy(uci::type::AntennaStatusType& accessor) {
  delete dynamic_cast<asb_uci::type::AntennaStatusType*>(&accessor);
}

} // namespace type

} // namespace uci

