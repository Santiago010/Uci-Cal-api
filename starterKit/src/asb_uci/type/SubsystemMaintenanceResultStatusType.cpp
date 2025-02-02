/** @file SubsystemMaintenanceResultStatusType.cpp
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

#include "../../../include/asb_uci/type/SubsystemMaintenanceResultStatusType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CompletionStatusType.h"
#include "../../../include/asb_uci/type/SubsystemMaintenanceResultStatusEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CompletionStatusType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemMaintenanceResultStatusEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemMaintenanceResultStatusType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SubsystemMaintenanceResultStatusType::SubsystemMaintenanceResultStatusType()
  : completionStatus_Accessor{boost::make_unique<CompletionStatusType>()},
    resultsStatus_Accessor{boost::make_unique<SubsystemMaintenanceResultStatusEnum>()} {
}

SubsystemMaintenanceResultStatusType::~SubsystemMaintenanceResultStatusType() = default;

void SubsystemMaintenanceResultStatusType::copy(const uci::type::SubsystemMaintenanceResultStatusType& accessor) {
  copyImpl(accessor, false);
}

void SubsystemMaintenanceResultStatusType::copyImpl(const uci::type::SubsystemMaintenanceResultStatusType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const SubsystemMaintenanceResultStatusType&>(accessor);
    setCompletionStatus(*(accessorImpl.completionStatus_Accessor));
    setResultsStatus(*(accessorImpl.resultsStatus_Accessor));
  }
}

void SubsystemMaintenanceResultStatusType::reset() noexcept {
  completionStatus_Accessor->reset();
  resultsStatus_Accessor->reset();
}

const uci::type::CompletionStatusType& SubsystemMaintenanceResultStatusType::getCompletionStatus() const {
  return *completionStatus_Accessor;
}

uci::type::CompletionStatusType& SubsystemMaintenanceResultStatusType::getCompletionStatus() {
  return *completionStatus_Accessor;
}

uci::type::SubsystemMaintenanceResultStatusType& SubsystemMaintenanceResultStatusType::setCompletionStatus(const uci::type::CompletionStatusType& accessor) {
  if (&accessor != completionStatus_Accessor.get()) {
    completionStatus_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SubsystemMaintenanceResultStatusEnum& SubsystemMaintenanceResultStatusType::getResultsStatus() const {
  return *resultsStatus_Accessor;
}

uci::type::SubsystemMaintenanceResultStatusEnum& SubsystemMaintenanceResultStatusType::getResultsStatus() {
  return *resultsStatus_Accessor;
}

uci::type::SubsystemMaintenanceResultStatusType& SubsystemMaintenanceResultStatusType::setResultsStatus(const uci::type::SubsystemMaintenanceResultStatusEnum& accessor) {
  if (&accessor != resultsStatus_Accessor.get()) {
    resultsStatus_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::SubsystemMaintenanceResultStatusType& SubsystemMaintenanceResultStatusType::setResultsStatus(uci::type::SubsystemMaintenanceResultStatusEnum::EnumerationItem value) {
  resultsStatus_Accessor->setValue(value);
  return *this;
}


std::unique_ptr<SubsystemMaintenanceResultStatusType> SubsystemMaintenanceResultStatusType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::subsystemMaintenanceResultStatusType : type};
  return (requestedType == uci::type::accessorType::subsystemMaintenanceResultStatusType) ? boost::make_unique<SubsystemMaintenanceResultStatusType>() : nullptr;
}

/**  */
namespace SubsystemMaintenanceResultStatusType_Names {

constexpr const char* Extern_Type_Name{"SubsystemMaintenanceResultStatusType"};
constexpr const char* CompletionStatus_Name{"CompletionStatus"};
constexpr const char* ResultsStatus_Name{"ResultsStatus"};

} // namespace SubsystemMaintenanceResultStatusType_Names

void SubsystemMaintenanceResultStatusType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SubsystemMaintenanceResultStatusType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SubsystemMaintenanceResultStatusType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SubsystemMaintenanceResultStatusType_Names::CompletionStatus_Name) {
      CompletionStatusType::deserialize(valueType.second, accessor.getCompletionStatus(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SubsystemMaintenanceResultStatusType_Names::ResultsStatus_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getResultsStatus().setValueFromName(*value);
      }
    }
  }
}

std::string SubsystemMaintenanceResultStatusType::serialize(const uci::type::SubsystemMaintenanceResultStatusType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SubsystemMaintenanceResultStatusType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SubsystemMaintenanceResultStatusType_Names::Extern_Type_Name);
  }
  CompletionStatusType::serialize(accessor.getCompletionStatus(), node, SubsystemMaintenanceResultStatusType_Names::CompletionStatus_Name);
  SubsystemMaintenanceResultStatusEnum::serialize(accessor.getResultsStatus(), node, SubsystemMaintenanceResultStatusType_Names::ResultsStatus_Name, false);
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

uci::type::SubsystemMaintenanceResultStatusType& SubsystemMaintenanceResultStatusType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SubsystemMaintenanceResultStatusType>().release());
}

uci::type::SubsystemMaintenanceResultStatusType& SubsystemMaintenanceResultStatusType::create(const uci::type::SubsystemMaintenanceResultStatusType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SubsystemMaintenanceResultStatusType> newAccessor{boost::make_unique<asb_uci::type::SubsystemMaintenanceResultStatusType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SubsystemMaintenanceResultStatusType::destroy(uci::type::SubsystemMaintenanceResultStatusType& accessor) {
  delete dynamic_cast<asb_uci::type::SubsystemMaintenanceResultStatusType*>(&accessor);
}

} // namespace type

} // namespace uci

