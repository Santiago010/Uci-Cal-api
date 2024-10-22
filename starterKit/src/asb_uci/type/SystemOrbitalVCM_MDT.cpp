/** @file SystemOrbitalVCM_MDT.cpp
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

#include "../../../include/asb_uci/type/SystemOrbitalVCM_MDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/RequestID_Type.h"
#include "../../../include/asb_uci/type/SystemOrbitalVCM_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequestID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemOrbitalVCM_MDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SystemOrbitalVCM_MDT::SystemOrbitalVCM_MDT() = default;

SystemOrbitalVCM_MDT::~SystemOrbitalVCM_MDT() = default;

void SystemOrbitalVCM_MDT::copy(const uci::type::SystemOrbitalVCM_MDT& accessor) {
  copyImpl(accessor, false);
}

void SystemOrbitalVCM_MDT::copyImpl(const uci::type::SystemOrbitalVCM_MDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    SystemOrbitalVCM_Type::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const SystemOrbitalVCM_MDT&>(accessor);
    if (accessorImpl.requestID_Accessor) {
      setRequestID(*(accessorImpl.requestID_Accessor));
    } else {
      requestID_Accessor.reset();
    }
  }
}

void SystemOrbitalVCM_MDT::reset() noexcept {
  SystemOrbitalVCM_Type::reset();
  requestID_Accessor.reset();
}

uci::type::RequestID_Type& SystemOrbitalVCM_MDT::getRequestID_() const {
  if (requestID_Accessor) {
    return *requestID_Accessor;
  }
  throw uci::base::UCIException("Error in getRequestID(): An attempt was made to get an optional field that was not enabled, call hasRequestID() to determine if it is safe to call getRequestID()");
}

const uci::type::RequestID_Type& SystemOrbitalVCM_MDT::getRequestID() const {
  return getRequestID_();
}

uci::type::RequestID_Type& SystemOrbitalVCM_MDT::getRequestID() {
  return getRequestID_();
}

uci::type::SystemOrbitalVCM_MDT& SystemOrbitalVCM_MDT::setRequestID(const uci::type::RequestID_Type& accessor) {
  enableRequestID();
  if (&accessor != requestID_Accessor.get()) {
    requestID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool SystemOrbitalVCM_MDT::hasRequestID() const noexcept {
  return static_cast<bool>(requestID_Accessor);
}

uci::type::RequestID_Type& SystemOrbitalVCM_MDT::enableRequestID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::requestID_Type : type};
  if ((!requestID_Accessor) || (requestID_Accessor->getAccessorType() != requestedType)) {
    requestID_Accessor = RequestID_Type::create(requestedType);
    if (!requestID_Accessor) {
      throw uci::base::UCIException("Error in enableRequestID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *requestID_Accessor;
}

uci::type::SystemOrbitalVCM_MDT& SystemOrbitalVCM_MDT::clearRequestID() noexcept {
  requestID_Accessor.reset();
  return *this;
}

std::unique_ptr<SystemOrbitalVCM_MDT> SystemOrbitalVCM_MDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::systemOrbitalVCM_MDT : type};
  return (requestedType == uci::type::accessorType::systemOrbitalVCM_MDT) ? boost::make_unique<SystemOrbitalVCM_MDT>() : nullptr;
}

/**  */
namespace SystemOrbitalVCM_MDT_Names {

constexpr const char* Extern_Type_Name{"SystemOrbitalVCM_MDT"};
constexpr const char* RequestID_Name{"RequestID"};

} // namespace SystemOrbitalVCM_MDT_Names

void SystemOrbitalVCM_MDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::SystemOrbitalVCM_MDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SystemOrbitalVCM_MDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SystemOrbitalVCM_MDT_Names::RequestID_Name) {
      RequestID_Type::deserialize(valueType.second, accessor.enableRequestID(), nodeName, nsPrefix);
    }
  }
  SystemOrbitalVCM_Type::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string SystemOrbitalVCM_MDT::serialize(const uci::type::SystemOrbitalVCM_MDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SystemOrbitalVCM_MDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SystemOrbitalVCM_MDT_Names::Extern_Type_Name);
  }
  SystemOrbitalVCM_Type::serialize(accessor, node, "", false, false, false);
  if (accessor.hasRequestID()) {
    RequestID_Type::serialize(accessor.getRequestID(), node, SystemOrbitalVCM_MDT_Names::RequestID_Name);
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

uci::type::SystemOrbitalVCM_MDT& SystemOrbitalVCM_MDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SystemOrbitalVCM_MDT>().release());
}

uci::type::SystemOrbitalVCM_MDT& SystemOrbitalVCM_MDT::create(const uci::type::SystemOrbitalVCM_MDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SystemOrbitalVCM_MDT> newAccessor{boost::make_unique<asb_uci::type::SystemOrbitalVCM_MDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SystemOrbitalVCM_MDT::destroy(uci::type::SystemOrbitalVCM_MDT& accessor) {
  delete dynamic_cast<asb_uci::type::SystemOrbitalVCM_MDT*>(&accessor);
}

} // namespace type

} // namespace uci

