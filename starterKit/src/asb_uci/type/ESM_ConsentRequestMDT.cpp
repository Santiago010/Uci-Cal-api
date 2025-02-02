/** @file ESM_ConsentRequestMDT.cpp
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

#include "../../../include/asb_uci/type/ESM_ConsentRequestMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ESM_ConsentRequestType.h"
#include "../../../include/asb_uci/type/SubsystemID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ESM_ConsentRequestMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ESM_ConsentRequestType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ESM_ConsentRequestMDT::ESM_ConsentRequestMDT()
  : subsystemID_Accessor{boost::make_unique<SubsystemID_Type>()},
    consentRequest_Accessor{boost::make_unique<ConsentRequest>(1, SIZE_MAX)} {
}

ESM_ConsentRequestMDT::~ESM_ConsentRequestMDT() = default;

void ESM_ConsentRequestMDT::copy(const uci::type::ESM_ConsentRequestMDT& accessor) {
  copyImpl(accessor, false);
}

void ESM_ConsentRequestMDT::copyImpl(const uci::type::ESM_ConsentRequestMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const ESM_ConsentRequestMDT&>(accessor);
    setSubsystemID(*(accessorImpl.subsystemID_Accessor));
    setConsentRequest(*(accessorImpl.consentRequest_Accessor));
  }
}

void ESM_ConsentRequestMDT::reset() noexcept {
  subsystemID_Accessor->reset();
  consentRequest_Accessor->reset();
}

const uci::type::SubsystemID_Type& ESM_ConsentRequestMDT::getSubsystemID() const {
  return *subsystemID_Accessor;
}

uci::type::SubsystemID_Type& ESM_ConsentRequestMDT::getSubsystemID() {
  return *subsystemID_Accessor;
}

uci::type::ESM_ConsentRequestMDT& ESM_ConsentRequestMDT::setSubsystemID(const uci::type::SubsystemID_Type& accessor) {
  if (&accessor != subsystemID_Accessor.get()) {
    subsystemID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ESM_ConsentRequestMDT::ConsentRequest& ESM_ConsentRequestMDT::getConsentRequest() const {
  return *consentRequest_Accessor;
}

uci::type::ESM_ConsentRequestMDT::ConsentRequest& ESM_ConsentRequestMDT::getConsentRequest() {
  return *consentRequest_Accessor;
}

uci::type::ESM_ConsentRequestMDT& ESM_ConsentRequestMDT::setConsentRequest(const uci::type::ESM_ConsentRequestMDT::ConsentRequest& accessor) {
  if (&accessor != consentRequest_Accessor.get()) {
    consentRequest_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<ESM_ConsentRequestMDT> ESM_ConsentRequestMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::eSM_ConsentRequestMDT : type};
  return (requestedType == uci::type::accessorType::eSM_ConsentRequestMDT) ? boost::make_unique<ESM_ConsentRequestMDT>() : nullptr;
}

/**  */
namespace ESM_ConsentRequestMDT_Names {

constexpr const char* Extern_Type_Name{"ESM_ConsentRequestMDT"};
constexpr const char* SubsystemID_Name{"SubsystemID"};
constexpr const char* ConsentRequest_Name{"ConsentRequest"};

} // namespace ESM_ConsentRequestMDT_Names

void ESM_ConsentRequestMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ESM_ConsentRequestMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ESM_ConsentRequestMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ESM_ConsentRequestMDT_Names::SubsystemID_Name) {
      SubsystemID_Type::deserialize(valueType.second, accessor.getSubsystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ESM_ConsentRequestMDT_Names::ConsentRequest_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ESM_ConsentRequestMDT::ConsentRequest& boundedList = accessor.getConsentRequest();
        const uci::type::ESM_ConsentRequestMDT::ConsentRequest::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::ESM_ConsentRequestType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string ESM_ConsentRequestMDT::serialize(const uci::type::ESM_ConsentRequestMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ESM_ConsentRequestMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ESM_ConsentRequestMDT_Names::Extern_Type_Name);
  }
  SubsystemID_Type::serialize(accessor.getSubsystemID(), node, ESM_ConsentRequestMDT_Names::SubsystemID_Name);
  {
    const uci::type::ESM_ConsentRequestMDT::ConsentRequest& boundedList = accessor.getConsentRequest();
    for (uci::type::ESM_ConsentRequestMDT::ConsentRequest::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ESM_ConsentRequestType::serialize(boundedList.at(i), node, ESM_ConsentRequestMDT_Names::ConsentRequest_Name);
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

uci::type::ESM_ConsentRequestMDT& ESM_ConsentRequestMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ESM_ConsentRequestMDT>().release());
}

uci::type::ESM_ConsentRequestMDT& ESM_ConsentRequestMDT::create(const uci::type::ESM_ConsentRequestMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ESM_ConsentRequestMDT> newAccessor{boost::make_unique<asb_uci::type::ESM_ConsentRequestMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ESM_ConsentRequestMDT::destroy(uci::type::ESM_ConsentRequestMDT& accessor) {
  delete dynamic_cast<asb_uci::type::ESM_ConsentRequestMDT*>(&accessor);
}

} // namespace type

} // namespace uci

