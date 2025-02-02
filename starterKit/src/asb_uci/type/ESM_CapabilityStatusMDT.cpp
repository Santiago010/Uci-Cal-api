/** @file ESM_CapabilityStatusMDT.cpp
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

#include "../../../include/asb_uci/type/ESM_CapabilityStatusMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/AmbiguityOrderingEnum.h"
#include "../../../include/asb_uci/type/CapabilityStatusBaseType.h"
#include "../../../include/asb_uci/type/CapabilityStatusType.h"
#include "../../../include/asb_uci/type/ESM_MessageOutputsEnum.h"
#include "../../../include/asb_uci/type/RF_ProfileType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AmbiguityOrderingEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityStatusType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ESM_CapabilityStatusMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ESM_MessageOutputsEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RF_ProfileType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ESM_CapabilityStatusMDT::ESM_CapabilityStatusMDT()
  : capabilityStatus_Accessor{boost::make_unique<CapabilityStatus>(1, SIZE_MAX)},
    rF_Profile_Accessor{boost::make_unique<RF_Profile>(0, SIZE_MAX)},
    currentMessageOutput_Accessor{boost::make_unique<CurrentMessageOutput>(0, 6)} {
}

ESM_CapabilityStatusMDT::~ESM_CapabilityStatusMDT() = default;

void ESM_CapabilityStatusMDT::copy(const uci::type::ESM_CapabilityStatusMDT& accessor) {
  copyImpl(accessor, false);
}

void ESM_CapabilityStatusMDT::copyImpl(const uci::type::ESM_CapabilityStatusMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    CapabilityStatusBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const ESM_CapabilityStatusMDT&>(accessor);
    setCapabilityStatus(*(accessorImpl.capabilityStatus_Accessor));
    setRF_Profile(*(accessorImpl.rF_Profile_Accessor));
    if (accessorImpl.ambiguityOrdering_Accessor) {
      setAmbiguityOrdering(*(accessorImpl.ambiguityOrdering_Accessor));
    } else {
      ambiguityOrdering_Accessor.reset();
    }
    if (accessorImpl.hasRWR_AudioEnable()) {
      setRWR_AudioEnable(accessorImpl.getRWR_AudioEnable());
    } else {
      clearRWR_AudioEnable();
    }
    if (accessorImpl.hasSpectralDensityReporting()) {
      setSpectralDensityReporting(accessorImpl.getSpectralDensityReporting());
    } else {
      clearSpectralDensityReporting();
    }
    setCurrentMessageOutput(*(accessorImpl.currentMessageOutput_Accessor));
  }
}

void ESM_CapabilityStatusMDT::reset() noexcept {
  CapabilityStatusBaseType::reset();
  capabilityStatus_Accessor->reset();
  rF_Profile_Accessor->reset();
  ambiguityOrdering_Accessor.reset();
  clearRWR_AudioEnable();
  clearSpectralDensityReporting();
  currentMessageOutput_Accessor->reset();
}

const uci::type::ESM_CapabilityStatusMDT::CapabilityStatus& ESM_CapabilityStatusMDT::getCapabilityStatus() const {
  return *capabilityStatus_Accessor;
}

uci::type::ESM_CapabilityStatusMDT::CapabilityStatus& ESM_CapabilityStatusMDT::getCapabilityStatus() {
  return *capabilityStatus_Accessor;
}

uci::type::ESM_CapabilityStatusMDT& ESM_CapabilityStatusMDT::setCapabilityStatus(const uci::type::ESM_CapabilityStatusMDT::CapabilityStatus& accessor) {
  if (&accessor != capabilityStatus_Accessor.get()) {
    capabilityStatus_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ESM_CapabilityStatusMDT::RF_Profile& ESM_CapabilityStatusMDT::getRF_Profile() const {
  return *rF_Profile_Accessor;
}

uci::type::ESM_CapabilityStatusMDT::RF_Profile& ESM_CapabilityStatusMDT::getRF_Profile() {
  return *rF_Profile_Accessor;
}

uci::type::ESM_CapabilityStatusMDT& ESM_CapabilityStatusMDT::setRF_Profile(const uci::type::ESM_CapabilityStatusMDT::RF_Profile& accessor) {
  if (&accessor != rF_Profile_Accessor.get()) {
    rF_Profile_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::AmbiguityOrderingEnum& ESM_CapabilityStatusMDT::getAmbiguityOrdering_() const {
  if (ambiguityOrdering_Accessor) {
    return *ambiguityOrdering_Accessor;
  }
  throw uci::base::UCIException("Error in getAmbiguityOrdering(): An attempt was made to get an optional field that was not enabled, call hasAmbiguityOrdering() to determine if it is safe to call getAmbiguityOrdering()");
}

const uci::type::AmbiguityOrderingEnum& ESM_CapabilityStatusMDT::getAmbiguityOrdering() const {
  return getAmbiguityOrdering_();
}

uci::type::AmbiguityOrderingEnum& ESM_CapabilityStatusMDT::getAmbiguityOrdering() {
  return getAmbiguityOrdering_();
}

uci::type::ESM_CapabilityStatusMDT& ESM_CapabilityStatusMDT::setAmbiguityOrdering(const uci::type::AmbiguityOrderingEnum& accessor) {
  enableAmbiguityOrdering();
  if (&accessor != ambiguityOrdering_Accessor.get()) {
    ambiguityOrdering_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ESM_CapabilityStatusMDT& ESM_CapabilityStatusMDT::setAmbiguityOrdering(const uci::type::AmbiguityOrderingEnum::EnumerationItem value) {
  enableAmbiguityOrdering().setValue(value);
  return *this;
}

bool ESM_CapabilityStatusMDT::hasAmbiguityOrdering() const noexcept {
  return static_cast<bool>(ambiguityOrdering_Accessor);
}

uci::type::AmbiguityOrderingEnum& ESM_CapabilityStatusMDT::enableAmbiguityOrdering(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::ambiguityOrderingEnum : type};
  if ((!ambiguityOrdering_Accessor) || (ambiguityOrdering_Accessor->getAccessorType() != requestedType)) {
    ambiguityOrdering_Accessor = AmbiguityOrderingEnum::create(requestedType);
    if (!ambiguityOrdering_Accessor) {
      throw uci::base::UCIException("Error in enableAmbiguityOrdering(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *ambiguityOrdering_Accessor;
}

uci::type::ESM_CapabilityStatusMDT& ESM_CapabilityStatusMDT::clearAmbiguityOrdering() noexcept {
  ambiguityOrdering_Accessor.reset();
  return *this;
}

xs::Boolean ESM_CapabilityStatusMDT::getRWR_AudioEnable() const {
  if (rWR_AudioEnable_Accessor) {
    return *rWR_AudioEnable_Accessor;
  }
  throw uci::base::UCIException("Error in getRWR_AudioEnable(): An attempt was made to get an optional field that was not enabled, call hasRWR_AudioEnable() to determine if it is safe to call getRWR_AudioEnable()");
}

uci::type::ESM_CapabilityStatusMDT& ESM_CapabilityStatusMDT::setRWR_AudioEnable(xs::Boolean value) {
  rWR_AudioEnable_Accessor = value;
  return *this;
}

bool ESM_CapabilityStatusMDT::hasRWR_AudioEnable() const noexcept {
  return rWR_AudioEnable_Accessor.has_value();
}

uci::type::ESM_CapabilityStatusMDT& ESM_CapabilityStatusMDT::clearRWR_AudioEnable() noexcept {
  rWR_AudioEnable_Accessor.reset();
  return *this;
}

xs::Boolean ESM_CapabilityStatusMDT::getSpectralDensityReporting() const {
  if (spectralDensityReporting_Accessor) {
    return *spectralDensityReporting_Accessor;
  }
  throw uci::base::UCIException("Error in getSpectralDensityReporting(): An attempt was made to get an optional field that was not enabled, call hasSpectralDensityReporting() to determine if it is safe to call getSpectralDensityReporting()");
}

uci::type::ESM_CapabilityStatusMDT& ESM_CapabilityStatusMDT::setSpectralDensityReporting(xs::Boolean value) {
  spectralDensityReporting_Accessor = value;
  return *this;
}

bool ESM_CapabilityStatusMDT::hasSpectralDensityReporting() const noexcept {
  return spectralDensityReporting_Accessor.has_value();
}

uci::type::ESM_CapabilityStatusMDT& ESM_CapabilityStatusMDT::clearSpectralDensityReporting() noexcept {
  spectralDensityReporting_Accessor.reset();
  return *this;
}

const uci::type::ESM_CapabilityStatusMDT::CurrentMessageOutput& ESM_CapabilityStatusMDT::getCurrentMessageOutput() const {
  return *currentMessageOutput_Accessor;
}

uci::type::ESM_CapabilityStatusMDT::CurrentMessageOutput& ESM_CapabilityStatusMDT::getCurrentMessageOutput() {
  return *currentMessageOutput_Accessor;
}

uci::type::ESM_CapabilityStatusMDT& ESM_CapabilityStatusMDT::setCurrentMessageOutput(const uci::type::ESM_CapabilityStatusMDT::CurrentMessageOutput& accessor) {
  if (&accessor != currentMessageOutput_Accessor.get()) {
    currentMessageOutput_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<ESM_CapabilityStatusMDT> ESM_CapabilityStatusMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::eSM_CapabilityStatusMDT : type};
  return (requestedType == uci::type::accessorType::eSM_CapabilityStatusMDT) ? boost::make_unique<ESM_CapabilityStatusMDT>() : nullptr;
}

/**  */
namespace ESM_CapabilityStatusMDT_Names {

constexpr const char* Extern_Type_Name{"ESM_CapabilityStatusMDT"};
constexpr const char* CapabilityStatus_Name{"CapabilityStatus"};
constexpr const char* RF_Profile_Name{"RF_Profile"};
constexpr const char* AmbiguityOrdering_Name{"AmbiguityOrdering"};
constexpr const char* RWR_AudioEnable_Name{"RWR_AudioEnable"};
constexpr const char* SpectralDensityReporting_Name{"SpectralDensityReporting"};
constexpr const char* CurrentMessageOutput_Name{"CurrentMessageOutput"};

} // namespace ESM_CapabilityStatusMDT_Names

void ESM_CapabilityStatusMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ESM_CapabilityStatusMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ESM_CapabilityStatusMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ESM_CapabilityStatusMDT_Names::CapabilityStatus_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ESM_CapabilityStatusMDT::CapabilityStatus& boundedList = accessor.getCapabilityStatus();
        const uci::type::ESM_CapabilityStatusMDT::CapabilityStatus::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1, asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix));
        asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ESM_CapabilityStatusMDT_Names::RF_Profile_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ESM_CapabilityStatusMDT::RF_Profile& boundedList = accessor.getRF_Profile();
        const uci::type::ESM_CapabilityStatusMDT::RF_Profile::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::RF_ProfileType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ESM_CapabilityStatusMDT_Names::AmbiguityOrdering_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableAmbiguityOrdering().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ESM_CapabilityStatusMDT_Names::RWR_AudioEnable_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRWR_AudioEnable(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + ESM_CapabilityStatusMDT_Names::SpectralDensityReporting_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSpectralDensityReporting(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + ESM_CapabilityStatusMDT_Names::CurrentMessageOutput_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ESM_CapabilityStatusMDT::CurrentMessageOutput& boundedList = accessor.getCurrentMessageOutput();
        const uci::type::ESM_CapabilityStatusMDT::CurrentMessageOutput::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    }
  }
  CapabilityStatusBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string ESM_CapabilityStatusMDT::serialize(const uci::type::ESM_CapabilityStatusMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ESM_CapabilityStatusMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ESM_CapabilityStatusMDT_Names::Extern_Type_Name);
  }
  CapabilityStatusBaseType::serialize(accessor, node, "", false, false, false);
  {
    const uci::type::ESM_CapabilityStatusMDT::CapabilityStatus& boundedList = accessor.getCapabilityStatus();
    for (uci::type::ESM_CapabilityStatusMDT::CapabilityStatus::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::CapabilityStatusType::serialize(boundedList.at(i), node, ESM_CapabilityStatusMDT_Names::CapabilityStatus_Name);
    }
  }
  {
    const uci::type::ESM_CapabilityStatusMDT::RF_Profile& boundedList = accessor.getRF_Profile();
    for (uci::type::ESM_CapabilityStatusMDT::RF_Profile::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::RF_ProfileType::serialize(boundedList.at(i), node, ESM_CapabilityStatusMDT_Names::RF_Profile_Name);
    }
  }
  if (accessor.hasAmbiguityOrdering()) {
    AmbiguityOrderingEnum::serialize(accessor.getAmbiguityOrdering(), node, ESM_CapabilityStatusMDT_Names::AmbiguityOrdering_Name, false);
  }
  if (accessor.hasRWR_AudioEnable()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getRWR_AudioEnable(), node, ESM_CapabilityStatusMDT_Names::RWR_AudioEnable_Name);
  }
  if (accessor.hasSpectralDensityReporting()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getSpectralDensityReporting(), node, ESM_CapabilityStatusMDT_Names::SpectralDensityReporting_Name);
  }
  {
    const uci::type::ESM_CapabilityStatusMDT::CurrentMessageOutput& boundedList = accessor.getCurrentMessageOutput();
    for (uci::type::ESM_CapabilityStatusMDT::CurrentMessageOutput::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      ESM_MessageOutputsEnum::serialize(boundedList.at(i), node, ESM_CapabilityStatusMDT_Names::CurrentMessageOutput_Name, false);
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

uci::type::ESM_CapabilityStatusMDT& ESM_CapabilityStatusMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ESM_CapabilityStatusMDT>().release());
}

uci::type::ESM_CapabilityStatusMDT& ESM_CapabilityStatusMDT::create(const uci::type::ESM_CapabilityStatusMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ESM_CapabilityStatusMDT> newAccessor{boost::make_unique<asb_uci::type::ESM_CapabilityStatusMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ESM_CapabilityStatusMDT::destroy(uci::type::ESM_CapabilityStatusMDT& accessor) {
  delete dynamic_cast<asb_uci::type::ESM_CapabilityStatusMDT*>(&accessor);
}

} // namespace type

} // namespace uci

