/** @file COMINT_ActivityType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:12 PM
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

#include "../../../include/asb_uci/type/COMINT_ActivityType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/COMINT_ReceiveDwellType.h"
#include "../../../include/asb_uci/type/COMINT_SubCapabilityDetailsType.h"
#include "../../../include/asb_uci/type/COMINT_SubCapabilityEnum.h"
#include "../../../include/asb_uci/type/ConsentEnum.h"
#include "../../../include/asb_uci/type/SharedRF_ApertureActivityBaseType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/COMINT_ActivityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/COMINT_ReceiveDwellType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/COMINT_SubCapabilityDetailsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/COMINT_SubCapabilityEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ConsentEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

COMINT_ActivityType::COMINT_ActivityType()
  : subCapability_Accessor{boost::make_unique<SubCapability>(0, 16)},
    receiveDwell_Accessor{boost::make_unique<ReceiveDwell>(0, SIZE_MAX)},
    subCapabilityDetails_Accessor{boost::make_unique<SubCapabilityDetails>(0, 5)} {
}

COMINT_ActivityType::~COMINT_ActivityType() = default;

void COMINT_ActivityType::copy(const uci::type::COMINT_ActivityType& accessor) {
  copyImpl(accessor, false);
}

void COMINT_ActivityType::copyImpl(const uci::type::COMINT_ActivityType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    SharedRF_ApertureActivityBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const COMINT_ActivityType&>(accessor);
    setSubCapability(*(accessorImpl.subCapability_Accessor));
    setReceiveDwell(*(accessorImpl.receiveDwell_Accessor));
    setSubCapabilityDetails(*(accessorImpl.subCapabilityDetails_Accessor));
    if (accessorImpl.hasConsentRequired()) {
      setConsentRequired(accessorImpl.getConsentRequired());
    } else {
      clearConsentRequired();
    }
    if (accessorImpl.consentState_Accessor) {
      setConsentState(*(accessorImpl.consentState_Accessor));
    } else {
      consentState_Accessor.reset();
    }
    if (accessorImpl.hasActualStartTime()) {
      setActualStartTime(accessorImpl.getActualStartTime());
    } else {
      clearActualStartTime();
    }
    if (accessorImpl.hasActualEndTime()) {
      setActualEndTime(accessorImpl.getActualEndTime());
    } else {
      clearActualEndTime();
    }
    if (accessorImpl.hasSpectralDensityReporting()) {
      setSpectralDensityReporting(accessorImpl.getSpectralDensityReporting());
    } else {
      clearSpectralDensityReporting();
    }
  }
}

void COMINT_ActivityType::reset() noexcept {
  SharedRF_ApertureActivityBaseType::reset();
  subCapability_Accessor->reset();
  receiveDwell_Accessor->reset();
  subCapabilityDetails_Accessor->reset();
  clearConsentRequired();
  consentState_Accessor.reset();
  clearActualStartTime();
  clearActualEndTime();
  clearSpectralDensityReporting();
}

const uci::type::COMINT_ActivityType::SubCapability& COMINT_ActivityType::getSubCapability() const {
  return *subCapability_Accessor;
}

uci::type::COMINT_ActivityType::SubCapability& COMINT_ActivityType::getSubCapability() {
  return *subCapability_Accessor;
}

uci::type::COMINT_ActivityType& COMINT_ActivityType::setSubCapability(const uci::type::COMINT_ActivityType::SubCapability& accessor) {
  if (&accessor != subCapability_Accessor.get()) {
    subCapability_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::COMINT_ActivityType::ReceiveDwell& COMINT_ActivityType::getReceiveDwell() const {
  return *receiveDwell_Accessor;
}

uci::type::COMINT_ActivityType::ReceiveDwell& COMINT_ActivityType::getReceiveDwell() {
  return *receiveDwell_Accessor;
}

uci::type::COMINT_ActivityType& COMINT_ActivityType::setReceiveDwell(const uci::type::COMINT_ActivityType::ReceiveDwell& accessor) {
  if (&accessor != receiveDwell_Accessor.get()) {
    receiveDwell_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::COMINT_ActivityType::SubCapabilityDetails& COMINT_ActivityType::getSubCapabilityDetails() const {
  return *subCapabilityDetails_Accessor;
}

uci::type::COMINT_ActivityType::SubCapabilityDetails& COMINT_ActivityType::getSubCapabilityDetails() {
  return *subCapabilityDetails_Accessor;
}

uci::type::COMINT_ActivityType& COMINT_ActivityType::setSubCapabilityDetails(const uci::type::COMINT_ActivityType::SubCapabilityDetails& accessor) {
  if (&accessor != subCapabilityDetails_Accessor.get()) {
    subCapabilityDetails_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

xs::Boolean COMINT_ActivityType::getConsentRequired() const {
  if (consentRequired_Accessor) {
    return *consentRequired_Accessor;
  }
  throw uci::base::UCIException("Error in getConsentRequired(): An attempt was made to get an optional field that was not enabled, call hasConsentRequired() to determine if it is safe to call getConsentRequired()");
}

uci::type::COMINT_ActivityType& COMINT_ActivityType::setConsentRequired(xs::Boolean value) {
  consentRequired_Accessor = value;
  return *this;
}

bool COMINT_ActivityType::hasConsentRequired() const noexcept {
  return consentRequired_Accessor.has_value();
}

uci::type::COMINT_ActivityType& COMINT_ActivityType::clearConsentRequired() noexcept {
  consentRequired_Accessor.reset();
  return *this;
}

uci::type::ConsentEnum& COMINT_ActivityType::getConsentState_() const {
  if (consentState_Accessor) {
    return *consentState_Accessor;
  }
  throw uci::base::UCIException("Error in getConsentState(): An attempt was made to get an optional field that was not enabled, call hasConsentState() to determine if it is safe to call getConsentState()");
}

const uci::type::ConsentEnum& COMINT_ActivityType::getConsentState() const {
  return getConsentState_();
}

uci::type::ConsentEnum& COMINT_ActivityType::getConsentState() {
  return getConsentState_();
}

uci::type::COMINT_ActivityType& COMINT_ActivityType::setConsentState(const uci::type::ConsentEnum& accessor) {
  enableConsentState();
  if (&accessor != consentState_Accessor.get()) {
    consentState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::COMINT_ActivityType& COMINT_ActivityType::setConsentState(const uci::type::ConsentEnum::EnumerationItem value) {
  enableConsentState().setValue(value);
  return *this;
}

bool COMINT_ActivityType::hasConsentState() const noexcept {
  return static_cast<bool>(consentState_Accessor);
}

uci::type::ConsentEnum& COMINT_ActivityType::enableConsentState(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::consentEnum : type};
  if ((!consentState_Accessor) || (consentState_Accessor->getAccessorType() != requestedType)) {
    consentState_Accessor = ConsentEnum::create(requestedType);
    if (!consentState_Accessor) {
      throw uci::base::UCIException("Error in enableConsentState(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *consentState_Accessor;
}

uci::type::COMINT_ActivityType& COMINT_ActivityType::clearConsentState() noexcept {
  consentState_Accessor.reset();
  return *this;
}

uci::type::DateTimeTypeValue COMINT_ActivityType::getActualStartTime() const {
  if (actualStartTime_Accessor) {
    return *actualStartTime_Accessor;
  }
  throw uci::base::UCIException("Error in getActualStartTime(): An attempt was made to get an optional field that was not enabled, call hasActualStartTime() to determine if it is safe to call getActualStartTime()");
}

uci::type::COMINT_ActivityType& COMINT_ActivityType::setActualStartTime(uci::type::DateTimeTypeValue value) {
  actualStartTime_Accessor = value;
  return *this;
}

bool COMINT_ActivityType::hasActualStartTime() const noexcept {
  return actualStartTime_Accessor.has_value();
}

uci::type::COMINT_ActivityType& COMINT_ActivityType::clearActualStartTime() noexcept {
  actualStartTime_Accessor.reset();
  return *this;
}

uci::type::DateTimeTypeValue COMINT_ActivityType::getActualEndTime() const {
  if (actualEndTime_Accessor) {
    return *actualEndTime_Accessor;
  }
  throw uci::base::UCIException("Error in getActualEndTime(): An attempt was made to get an optional field that was not enabled, call hasActualEndTime() to determine if it is safe to call getActualEndTime()");
}

uci::type::COMINT_ActivityType& COMINT_ActivityType::setActualEndTime(uci::type::DateTimeTypeValue value) {
  actualEndTime_Accessor = value;
  return *this;
}

bool COMINT_ActivityType::hasActualEndTime() const noexcept {
  return actualEndTime_Accessor.has_value();
}

uci::type::COMINT_ActivityType& COMINT_ActivityType::clearActualEndTime() noexcept {
  actualEndTime_Accessor.reset();
  return *this;
}

xs::Boolean COMINT_ActivityType::getSpectralDensityReporting() const {
  if (spectralDensityReporting_Accessor) {
    return *spectralDensityReporting_Accessor;
  }
  throw uci::base::UCIException("Error in getSpectralDensityReporting(): An attempt was made to get an optional field that was not enabled, call hasSpectralDensityReporting() to determine if it is safe to call getSpectralDensityReporting()");
}

uci::type::COMINT_ActivityType& COMINT_ActivityType::setSpectralDensityReporting(xs::Boolean value) {
  spectralDensityReporting_Accessor = value;
  return *this;
}

bool COMINT_ActivityType::hasSpectralDensityReporting() const noexcept {
  return spectralDensityReporting_Accessor.has_value();
}

uci::type::COMINT_ActivityType& COMINT_ActivityType::clearSpectralDensityReporting() noexcept {
  spectralDensityReporting_Accessor.reset();
  return *this;
}

std::unique_ptr<COMINT_ActivityType> COMINT_ActivityType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::cOMINT_ActivityType : type};
  return (requestedType == uci::type::accessorType::cOMINT_ActivityType) ? boost::make_unique<COMINT_ActivityType>() : nullptr;
}

/**  */
namespace COMINT_ActivityType_Names {

constexpr const char* Extern_Type_Name{"COMINT_ActivityType"};
constexpr const char* SubCapability_Name{"SubCapability"};
constexpr const char* ReceiveDwell_Name{"ReceiveDwell"};
constexpr const char* SubCapabilityDetails_Name{"SubCapabilityDetails"};
constexpr const char* ConsentRequired_Name{"ConsentRequired"};
constexpr const char* ConsentState_Name{"ConsentState"};
constexpr const char* ActualStartTime_Name{"ActualStartTime"};
constexpr const char* ActualEndTime_Name{"ActualEndTime"};
constexpr const char* SpectralDensityReporting_Name{"SpectralDensityReporting"};

} // namespace COMINT_ActivityType_Names

void COMINT_ActivityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::COMINT_ActivityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = COMINT_ActivityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + COMINT_ActivityType_Names::SubCapability_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::COMINT_ActivityType::SubCapability& boundedList = accessor.getSubCapability();
        const uci::type::COMINT_ActivityType::SubCapability::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + COMINT_ActivityType_Names::ReceiveDwell_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::COMINT_ActivityType::ReceiveDwell& boundedList = accessor.getReceiveDwell();
        const uci::type::COMINT_ActivityType::ReceiveDwell::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::COMINT_ReceiveDwellType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + COMINT_ActivityType_Names::SubCapabilityDetails_Name) {
      uci::type::COMINT_ActivityType::SubCapabilityDetails& boundedList = accessor.getSubCapabilityDetails();
      const uci::type::COMINT_ActivityType::SubCapabilityDetails::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::COMINT_SubCapabilityDetailsType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + COMINT_ActivityType_Names::ConsentRequired_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setConsentRequired(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + COMINT_ActivityType_Names::ConsentState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableConsentState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + COMINT_ActivityType_Names::ActualStartTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setActualStartTime(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + COMINT_ActivityType_Names::ActualEndTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setActualEndTime(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + COMINT_ActivityType_Names::SpectralDensityReporting_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSpectralDensityReporting(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    }
  }
  SharedRF_ApertureActivityBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string COMINT_ActivityType::serialize(const uci::type::COMINT_ActivityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? COMINT_ActivityType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, COMINT_ActivityType_Names::Extern_Type_Name);
  }
  SharedRF_ApertureActivityBaseType::serialize(accessor, node, "", false, false, false);
  {
    const uci::type::COMINT_ActivityType::SubCapability& boundedList = accessor.getSubCapability();
    for (uci::type::COMINT_ActivityType::SubCapability::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      COMINT_SubCapabilityEnum::serialize(boundedList.at(i), node, COMINT_ActivityType_Names::SubCapability_Name, false);
    }
  }
  {
    const uci::type::COMINT_ActivityType::ReceiveDwell& boundedList = accessor.getReceiveDwell();
    for (uci::type::COMINT_ActivityType::ReceiveDwell::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::COMINT_ReceiveDwellType::serialize(boundedList.at(i), node, COMINT_ActivityType_Names::ReceiveDwell_Name);
    }
  }
  {
    const uci::type::COMINT_ActivityType::SubCapabilityDetails& boundedList = accessor.getSubCapabilityDetails();
    for (uci::type::COMINT_ActivityType::SubCapabilityDetails::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::COMINT_SubCapabilityDetailsType::serialize(boundedList.at(i), node, COMINT_ActivityType_Names::SubCapabilityDetails_Name);
    }
  }
  if (accessor.hasConsentRequired()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getConsentRequired(), node, COMINT_ActivityType_Names::ConsentRequired_Name);
  }
  if (accessor.hasConsentState()) {
    ConsentEnum::serialize(accessor.getConsentState(), node, COMINT_ActivityType_Names::ConsentState_Name, false);
  }
  if (accessor.hasActualStartTime()) {
    asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getActualStartTime(), node, COMINT_ActivityType_Names::ActualStartTime_Name);
  }
  if (accessor.hasActualEndTime()) {
    asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getActualEndTime(), node, COMINT_ActivityType_Names::ActualEndTime_Name);
  }
  if (accessor.hasSpectralDensityReporting()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getSpectralDensityReporting(), node, COMINT_ActivityType_Names::SpectralDensityReporting_Name);
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

uci::type::COMINT_ActivityType& COMINT_ActivityType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::COMINT_ActivityType>().release());
}

uci::type::COMINT_ActivityType& COMINT_ActivityType::create(const uci::type::COMINT_ActivityType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::COMINT_ActivityType> newAccessor{boost::make_unique<asb_uci::type::COMINT_ActivityType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void COMINT_ActivityType::destroy(uci::type::COMINT_ActivityType& accessor) {
  delete dynamic_cast<asb_uci::type::COMINT_ActivityType*>(&accessor);
}

} // namespace type

} // namespace uci

