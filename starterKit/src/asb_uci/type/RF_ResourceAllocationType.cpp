/** @file RF_ResourceAllocationType.cpp
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

#include "../../../include/asb_uci/type/RF_ResourceAllocationType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/DateTimeRangeType.h"
#include "../../../include/asb_uci/type/RequestID_Type.h"
#include "../../../include/asb_uci/type/RequestingFunctionID_ChoiceType.h"
#include "../../../include/asb_uci/type/ResourceAllocationStateEnum.h"
#include "../../../include/asb_uci/type/ResourceDefinitionChoiceType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeRangeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RF_ResourceAllocationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequestID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequestingFunctionID_ChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ResourceAllocationStateEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ResourceDefinitionChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

RF_ResourceAllocationType::RF_ResourceAllocationType()
  : resourceRequestID_Accessor{boost::make_unique<RequestID_Type>()},
    requestingFunction_Accessor{boost::make_unique<RequestingFunctionID_ChoiceType>()},
    resourceAllocationState_Accessor{boost::make_unique<ResourceAllocationStateEnum>()},
    resourceDefinitions_Accessor{boost::make_unique<ResourceDefinitions>(0, SIZE_MAX)} {
}

RF_ResourceAllocationType::~RF_ResourceAllocationType() = default;

void RF_ResourceAllocationType::copy(const uci::type::RF_ResourceAllocationType& accessor) {
  copyImpl(accessor, false);
}

void RF_ResourceAllocationType::copyImpl(const uci::type::RF_ResourceAllocationType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const RF_ResourceAllocationType&>(accessor);
    setResourceRequestID(*(accessorImpl.resourceRequestID_Accessor));
    setRequestingFunction(*(accessorImpl.requestingFunction_Accessor));
    setResourceAllocationState(*(accessorImpl.resourceAllocationState_Accessor));
    if (accessorImpl.durationRange_Accessor) {
      setDurationRange(*(accessorImpl.durationRange_Accessor));
    } else {
      durationRange_Accessor.reset();
    }
    if (accessorImpl.hasConfigureInteroperabilityReportIndex()) {
      setConfigureInteroperabilityReportIndex(accessorImpl.getConfigureInteroperabilityReportIndex());
    } else {
      clearConfigureInteroperabilityReportIndex();
    }
    setResourceDefinitions(*(accessorImpl.resourceDefinitions_Accessor));
  }
}

void RF_ResourceAllocationType::reset() noexcept {
  resourceRequestID_Accessor->reset();
  requestingFunction_Accessor->reset();
  resourceAllocationState_Accessor->reset();
  durationRange_Accessor.reset();
  clearConfigureInteroperabilityReportIndex();
  resourceDefinitions_Accessor->reset();
}

const uci::type::RequestID_Type& RF_ResourceAllocationType::getResourceRequestID() const {
  return *resourceRequestID_Accessor;
}

uci::type::RequestID_Type& RF_ResourceAllocationType::getResourceRequestID() {
  return *resourceRequestID_Accessor;
}

uci::type::RF_ResourceAllocationType& RF_ResourceAllocationType::setResourceRequestID(const uci::type::RequestID_Type& accessor) {
  if (&accessor != resourceRequestID_Accessor.get()) {
    resourceRequestID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::RequestingFunctionID_ChoiceType& RF_ResourceAllocationType::getRequestingFunction() const {
  return *requestingFunction_Accessor;
}

uci::type::RequestingFunctionID_ChoiceType& RF_ResourceAllocationType::getRequestingFunction() {
  return *requestingFunction_Accessor;
}

uci::type::RF_ResourceAllocationType& RF_ResourceAllocationType::setRequestingFunction(const uci::type::RequestingFunctionID_ChoiceType& accessor) {
  if (&accessor != requestingFunction_Accessor.get()) {
    requestingFunction_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ResourceAllocationStateEnum& RF_ResourceAllocationType::getResourceAllocationState() const {
  return *resourceAllocationState_Accessor;
}

uci::type::ResourceAllocationStateEnum& RF_ResourceAllocationType::getResourceAllocationState() {
  return *resourceAllocationState_Accessor;
}

uci::type::RF_ResourceAllocationType& RF_ResourceAllocationType::setResourceAllocationState(const uci::type::ResourceAllocationStateEnum& accessor) {
  if (&accessor != resourceAllocationState_Accessor.get()) {
    resourceAllocationState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::RF_ResourceAllocationType& RF_ResourceAllocationType::setResourceAllocationState(uci::type::ResourceAllocationStateEnum::EnumerationItem value) {
  resourceAllocationState_Accessor->setValue(value);
  return *this;
}


uci::type::DateTimeRangeType& RF_ResourceAllocationType::getDurationRange_() const {
  if (durationRange_Accessor) {
    return *durationRange_Accessor;
  }
  throw uci::base::UCIException("Error in getDurationRange(): An attempt was made to get an optional field that was not enabled, call hasDurationRange() to determine if it is safe to call getDurationRange()");
}

const uci::type::DateTimeRangeType& RF_ResourceAllocationType::getDurationRange() const {
  return getDurationRange_();
}

uci::type::DateTimeRangeType& RF_ResourceAllocationType::getDurationRange() {
  return getDurationRange_();
}

uci::type::RF_ResourceAllocationType& RF_ResourceAllocationType::setDurationRange(const uci::type::DateTimeRangeType& accessor) {
  enableDurationRange();
  if (&accessor != durationRange_Accessor.get()) {
    durationRange_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RF_ResourceAllocationType::hasDurationRange() const noexcept {
  return static_cast<bool>(durationRange_Accessor);
}

uci::type::DateTimeRangeType& RF_ResourceAllocationType::enableDurationRange(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::dateTimeRangeType : type};
  if ((!durationRange_Accessor) || (durationRange_Accessor->getAccessorType() != requestedType)) {
    durationRange_Accessor = DateTimeRangeType::create(requestedType);
    if (!durationRange_Accessor) {
      throw uci::base::UCIException("Error in enableDurationRange(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *durationRange_Accessor;
}

uci::type::RF_ResourceAllocationType& RF_ResourceAllocationType::clearDurationRange() noexcept {
  durationRange_Accessor.reset();
  return *this;
}

xs::UnsignedInt RF_ResourceAllocationType::getConfigureInteroperabilityReportIndex() const {
  if (configureInteroperabilityReportIndex_Accessor) {
    return *configureInteroperabilityReportIndex_Accessor;
  }
  throw uci::base::UCIException("Error in getConfigureInteroperabilityReportIndex(): An attempt was made to get an optional field that was not enabled, call hasConfigureInteroperabilityReportIndex() to determine if it is safe to call getConfigureInteroperabilityReportIndex()");
}

uci::type::RF_ResourceAllocationType& RF_ResourceAllocationType::setConfigureInteroperabilityReportIndex(xs::UnsignedInt value) {
  configureInteroperabilityReportIndex_Accessor = value;
  return *this;
}

bool RF_ResourceAllocationType::hasConfigureInteroperabilityReportIndex() const noexcept {
  return configureInteroperabilityReportIndex_Accessor.has_value();
}

uci::type::RF_ResourceAllocationType& RF_ResourceAllocationType::clearConfigureInteroperabilityReportIndex() noexcept {
  configureInteroperabilityReportIndex_Accessor.reset();
  return *this;
}

const uci::type::RF_ResourceAllocationType::ResourceDefinitions& RF_ResourceAllocationType::getResourceDefinitions() const {
  return *resourceDefinitions_Accessor;
}

uci::type::RF_ResourceAllocationType::ResourceDefinitions& RF_ResourceAllocationType::getResourceDefinitions() {
  return *resourceDefinitions_Accessor;
}

uci::type::RF_ResourceAllocationType& RF_ResourceAllocationType::setResourceDefinitions(const uci::type::RF_ResourceAllocationType::ResourceDefinitions& accessor) {
  if (&accessor != resourceDefinitions_Accessor.get()) {
    resourceDefinitions_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<RF_ResourceAllocationType> RF_ResourceAllocationType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::rF_ResourceAllocationType : type};
  return (requestedType == uci::type::accessorType::rF_ResourceAllocationType) ? boost::make_unique<RF_ResourceAllocationType>() : nullptr;
}

/**  */
namespace RF_ResourceAllocationType_Names {

constexpr const char* Extern_Type_Name{"RF_ResourceAllocationType"};
constexpr const char* ResourceRequestID_Name{"ResourceRequestID"};
constexpr const char* RequestingFunction_Name{"RequestingFunction"};
constexpr const char* ResourceAllocationState_Name{"ResourceAllocationState"};
constexpr const char* DurationRange_Name{"DurationRange"};
constexpr const char* ConfigureInteroperabilityReportIndex_Name{"ConfigureInteroperabilityReportIndex"};
constexpr const char* ResourceDefinitions_Name{"ResourceDefinitions"};

} // namespace RF_ResourceAllocationType_Names

void RF_ResourceAllocationType::deserialize(const boost::property_tree::ptree& propTree, uci::type::RF_ResourceAllocationType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RF_ResourceAllocationType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RF_ResourceAllocationType_Names::ResourceRequestID_Name) {
      RequestID_Type::deserialize(valueType.second, accessor.getResourceRequestID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RF_ResourceAllocationType_Names::RequestingFunction_Name) {
      RequestingFunctionID_ChoiceType::deserialize(valueType.second, accessor.getRequestingFunction(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RF_ResourceAllocationType_Names::ResourceAllocationState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getResourceAllocationState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + RF_ResourceAllocationType_Names::DurationRange_Name) {
      DateTimeRangeType::deserialize(valueType.second, accessor.enableDurationRange(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RF_ResourceAllocationType_Names::ConfigureInteroperabilityReportIndex_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setConfigureInteroperabilityReportIndex(asb_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    } else if (valueType.first == nsPrefix + RF_ResourceAllocationType_Names::ResourceDefinitions_Name) {
      uci::type::RF_ResourceAllocationType::ResourceDefinitions& boundedList = accessor.getResourceDefinitions();
      const uci::type::RF_ResourceAllocationType::ResourceDefinitions::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::ResourceDefinitionChoiceType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    }
  }
}

std::string RF_ResourceAllocationType::serialize(const uci::type::RF_ResourceAllocationType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? RF_ResourceAllocationType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, RF_ResourceAllocationType_Names::Extern_Type_Name);
  }
  RequestID_Type::serialize(accessor.getResourceRequestID(), node, RF_ResourceAllocationType_Names::ResourceRequestID_Name);
  RequestingFunctionID_ChoiceType::serialize(accessor.getRequestingFunction(), node, RF_ResourceAllocationType_Names::RequestingFunction_Name);
  ResourceAllocationStateEnum::serialize(accessor.getResourceAllocationState(), node, RF_ResourceAllocationType_Names::ResourceAllocationState_Name, false);
  if (accessor.hasDurationRange()) {
    DateTimeRangeType::serialize(accessor.getDurationRange(), node, RF_ResourceAllocationType_Names::DurationRange_Name);
  }
  if (accessor.hasConfigureInteroperabilityReportIndex()) {
    asb_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getConfigureInteroperabilityReportIndex(), node, RF_ResourceAllocationType_Names::ConfigureInteroperabilityReportIndex_Name);
  }
  {
    const uci::type::RF_ResourceAllocationType::ResourceDefinitions& boundedList = accessor.getResourceDefinitions();
    for (uci::type::RF_ResourceAllocationType::ResourceDefinitions::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ResourceDefinitionChoiceType::serialize(boundedList.at(i), node, RF_ResourceAllocationType_Names::ResourceDefinitions_Name);
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

uci::type::RF_ResourceAllocationType& RF_ResourceAllocationType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::RF_ResourceAllocationType>().release());
}

uci::type::RF_ResourceAllocationType& RF_ResourceAllocationType::create(const uci::type::RF_ResourceAllocationType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::RF_ResourceAllocationType> newAccessor{boost::make_unique<asb_uci::type::RF_ResourceAllocationType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void RF_ResourceAllocationType::destroy(uci::type::RF_ResourceAllocationType& accessor) {
  delete dynamic_cast<asb_uci::type::RF_ResourceAllocationType*>(&accessor);
}

} // namespace type

} // namespace uci

