/** @file RequirementExecutionPolicyType.cpp
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

#include "../../../include/asb_uci/type/RequirementExecutionPolicyType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ByRequirementPolicyType.h"
#include "../../../include/asb_uci/type/DefaultResponseType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ByRequirementPolicyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DefaultResponseType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementExecutionPolicyType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

RequirementExecutionPolicyType::RequirementExecutionPolicyType()
  : byRequirementPolicy_Accessor{boost::make_unique<ByRequirementPolicy>(0, SIZE_MAX)} {
}

RequirementExecutionPolicyType::~RequirementExecutionPolicyType() = default;

void RequirementExecutionPolicyType::copy(const uci::type::RequirementExecutionPolicyType& accessor) {
  copyImpl(accessor, false);
}

void RequirementExecutionPolicyType::copyImpl(const uci::type::RequirementExecutionPolicyType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const RequirementExecutionPolicyType&>(accessor);
    if (accessorImpl.defaultResponse_Accessor) {
      setDefaultResponse(*(accessorImpl.defaultResponse_Accessor));
    } else {
      defaultResponse_Accessor.reset();
    }
    setByRequirementPolicy(*(accessorImpl.byRequirementPolicy_Accessor));
  }
}

void RequirementExecutionPolicyType::reset() noexcept {
  defaultResponse_Accessor.reset();
  byRequirementPolicy_Accessor->reset();
}

uci::type::DefaultResponseType& RequirementExecutionPolicyType::getDefaultResponse_() const {
  if (defaultResponse_Accessor) {
    return *defaultResponse_Accessor;
  }
  throw uci::base::UCIException("Error in getDefaultResponse(): An attempt was made to get an optional field that was not enabled, call hasDefaultResponse() to determine if it is safe to call getDefaultResponse()");
}

const uci::type::DefaultResponseType& RequirementExecutionPolicyType::getDefaultResponse() const {
  return getDefaultResponse_();
}

uci::type::DefaultResponseType& RequirementExecutionPolicyType::getDefaultResponse() {
  return getDefaultResponse_();
}

uci::type::RequirementExecutionPolicyType& RequirementExecutionPolicyType::setDefaultResponse(const uci::type::DefaultResponseType& accessor) {
  enableDefaultResponse();
  if (&accessor != defaultResponse_Accessor.get()) {
    defaultResponse_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RequirementExecutionPolicyType::hasDefaultResponse() const noexcept {
  return static_cast<bool>(defaultResponse_Accessor);
}

uci::type::DefaultResponseType& RequirementExecutionPolicyType::enableDefaultResponse(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::defaultResponseType : type};
  if ((!defaultResponse_Accessor) || (defaultResponse_Accessor->getAccessorType() != requestedType)) {
    defaultResponse_Accessor = DefaultResponseType::create(requestedType);
    if (!defaultResponse_Accessor) {
      throw uci::base::UCIException("Error in enableDefaultResponse(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *defaultResponse_Accessor;
}

uci::type::RequirementExecutionPolicyType& RequirementExecutionPolicyType::clearDefaultResponse() noexcept {
  defaultResponse_Accessor.reset();
  return *this;
}

const uci::type::RequirementExecutionPolicyType::ByRequirementPolicy& RequirementExecutionPolicyType::getByRequirementPolicy() const {
  return *byRequirementPolicy_Accessor;
}

uci::type::RequirementExecutionPolicyType::ByRequirementPolicy& RequirementExecutionPolicyType::getByRequirementPolicy() {
  return *byRequirementPolicy_Accessor;
}

uci::type::RequirementExecutionPolicyType& RequirementExecutionPolicyType::setByRequirementPolicy(const uci::type::RequirementExecutionPolicyType::ByRequirementPolicy& accessor) {
  if (&accessor != byRequirementPolicy_Accessor.get()) {
    byRequirementPolicy_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<RequirementExecutionPolicyType> RequirementExecutionPolicyType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::requirementExecutionPolicyType : type};
  return (requestedType == uci::type::accessorType::requirementExecutionPolicyType) ? boost::make_unique<RequirementExecutionPolicyType>() : nullptr;
}

/**  */
namespace RequirementExecutionPolicyType_Names {

constexpr const char* Extern_Type_Name{"RequirementExecutionPolicyType"};
constexpr const char* DefaultResponse_Name{"DefaultResponse"};
constexpr const char* ByRequirementPolicy_Name{"ByRequirementPolicy"};

} // namespace RequirementExecutionPolicyType_Names

void RequirementExecutionPolicyType::deserialize(const boost::property_tree::ptree& propTree, uci::type::RequirementExecutionPolicyType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RequirementExecutionPolicyType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RequirementExecutionPolicyType_Names::DefaultResponse_Name) {
      DefaultResponseType::deserialize(valueType.second, accessor.enableDefaultResponse(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RequirementExecutionPolicyType_Names::ByRequirementPolicy_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::RequirementExecutionPolicyType::ByRequirementPolicy& boundedList = accessor.getByRequirementPolicy();
        const uci::type::RequirementExecutionPolicyType::ByRequirementPolicy::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::ByRequirementPolicyType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string RequirementExecutionPolicyType::serialize(const uci::type::RequirementExecutionPolicyType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? RequirementExecutionPolicyType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, RequirementExecutionPolicyType_Names::Extern_Type_Name);
  }
  if (accessor.hasDefaultResponse()) {
    DefaultResponseType::serialize(accessor.getDefaultResponse(), node, RequirementExecutionPolicyType_Names::DefaultResponse_Name);
  }
  {
    const uci::type::RequirementExecutionPolicyType::ByRequirementPolicy& boundedList = accessor.getByRequirementPolicy();
    for (uci::type::RequirementExecutionPolicyType::ByRequirementPolicy::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ByRequirementPolicyType::serialize(boundedList.at(i), node, RequirementExecutionPolicyType_Names::ByRequirementPolicy_Name);
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

uci::type::RequirementExecutionPolicyType& RequirementExecutionPolicyType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::RequirementExecutionPolicyType>().release());
}

uci::type::RequirementExecutionPolicyType& RequirementExecutionPolicyType::create(const uci::type::RequirementExecutionPolicyType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::RequirementExecutionPolicyType> newAccessor{boost::make_unique<asb_uci::type::RequirementExecutionPolicyType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void RequirementExecutionPolicyType::destroy(uci::type::RequirementExecutionPolicyType& accessor) {
  delete dynamic_cast<asb_uci::type::RequirementExecutionPolicyType*>(&accessor);
}

} // namespace type

} // namespace uci

