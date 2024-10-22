/** @file OrbitConjunctionAssessmentRequestStatusMDT.cpp
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

#include "../../../include/asb_uci/type/OrbitConjunctionAssessmentRequestStatusMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CompletionStatusType.h"
#include "../../../include/asb_uci/type/OrbitConjunctionAssessmentID_Type.h"
#include "../../../include/asb_uci/type/RequestStatusBaseType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CompletionStatusType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitConjunctionAssessmentID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitConjunctionAssessmentRequestStatusMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OrbitConjunctionAssessmentRequestStatusMDT::OrbitConjunctionAssessmentRequestStatusMDT() = default;

OrbitConjunctionAssessmentRequestStatusMDT::~OrbitConjunctionAssessmentRequestStatusMDT() = default;

void OrbitConjunctionAssessmentRequestStatusMDT::copy(const uci::type::OrbitConjunctionAssessmentRequestStatusMDT& accessor) {
  copyImpl(accessor, false);
}

void OrbitConjunctionAssessmentRequestStatusMDT::copyImpl(const uci::type::OrbitConjunctionAssessmentRequestStatusMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    RequestStatusBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const OrbitConjunctionAssessmentRequestStatusMDT&>(accessor);
    if (accessorImpl.completionStatus_Accessor) {
      setCompletionStatus(*(accessorImpl.completionStatus_Accessor));
    } else {
      completionStatus_Accessor.reset();
    }
    if (accessorImpl.orbitConjunctionAssessmentID_Accessor) {
      setOrbitConjunctionAssessmentID(*(accessorImpl.orbitConjunctionAssessmentID_Accessor));
    } else {
      orbitConjunctionAssessmentID_Accessor.reset();
    }
  }
}

void OrbitConjunctionAssessmentRequestStatusMDT::reset() noexcept {
  RequestStatusBaseType::reset();
  completionStatus_Accessor.reset();
  orbitConjunctionAssessmentID_Accessor.reset();
}

uci::type::CompletionStatusType& OrbitConjunctionAssessmentRequestStatusMDT::getCompletionStatus_() const {
  if (completionStatus_Accessor) {
    return *completionStatus_Accessor;
  }
  throw uci::base::UCIException("Error in getCompletionStatus(): An attempt was made to get an optional field that was not enabled, call hasCompletionStatus() to determine if it is safe to call getCompletionStatus()");
}

const uci::type::CompletionStatusType& OrbitConjunctionAssessmentRequestStatusMDT::getCompletionStatus() const {
  return getCompletionStatus_();
}

uci::type::CompletionStatusType& OrbitConjunctionAssessmentRequestStatusMDT::getCompletionStatus() {
  return getCompletionStatus_();
}

uci::type::OrbitConjunctionAssessmentRequestStatusMDT& OrbitConjunctionAssessmentRequestStatusMDT::setCompletionStatus(const uci::type::CompletionStatusType& accessor) {
  enableCompletionStatus();
  if (&accessor != completionStatus_Accessor.get()) {
    completionStatus_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OrbitConjunctionAssessmentRequestStatusMDT::hasCompletionStatus() const noexcept {
  return static_cast<bool>(completionStatus_Accessor);
}

uci::type::CompletionStatusType& OrbitConjunctionAssessmentRequestStatusMDT::enableCompletionStatus(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::completionStatusType : type};
  if ((!completionStatus_Accessor) || (completionStatus_Accessor->getAccessorType() != requestedType)) {
    completionStatus_Accessor = CompletionStatusType::create(requestedType);
    if (!completionStatus_Accessor) {
      throw uci::base::UCIException("Error in enableCompletionStatus(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *completionStatus_Accessor;
}

uci::type::OrbitConjunctionAssessmentRequestStatusMDT& OrbitConjunctionAssessmentRequestStatusMDT::clearCompletionStatus() noexcept {
  completionStatus_Accessor.reset();
  return *this;
}

uci::type::OrbitConjunctionAssessmentID_Type& OrbitConjunctionAssessmentRequestStatusMDT::getOrbitConjunctionAssessmentID_() const {
  if (orbitConjunctionAssessmentID_Accessor) {
    return *orbitConjunctionAssessmentID_Accessor;
  }
  throw uci::base::UCIException("Error in getOrbitConjunctionAssessmentID(): An attempt was made to get an optional field that was not enabled, call hasOrbitConjunctionAssessmentID() to determine if it is safe to call getOrbitConjunctionAssessmentID()");
}

const uci::type::OrbitConjunctionAssessmentID_Type& OrbitConjunctionAssessmentRequestStatusMDT::getOrbitConjunctionAssessmentID() const {
  return getOrbitConjunctionAssessmentID_();
}

uci::type::OrbitConjunctionAssessmentID_Type& OrbitConjunctionAssessmentRequestStatusMDT::getOrbitConjunctionAssessmentID() {
  return getOrbitConjunctionAssessmentID_();
}

uci::type::OrbitConjunctionAssessmentRequestStatusMDT& OrbitConjunctionAssessmentRequestStatusMDT::setOrbitConjunctionAssessmentID(const uci::type::OrbitConjunctionAssessmentID_Type& accessor) {
  enableOrbitConjunctionAssessmentID();
  if (&accessor != orbitConjunctionAssessmentID_Accessor.get()) {
    orbitConjunctionAssessmentID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OrbitConjunctionAssessmentRequestStatusMDT::hasOrbitConjunctionAssessmentID() const noexcept {
  return static_cast<bool>(orbitConjunctionAssessmentID_Accessor);
}

uci::type::OrbitConjunctionAssessmentID_Type& OrbitConjunctionAssessmentRequestStatusMDT::enableOrbitConjunctionAssessmentID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitConjunctionAssessmentID_Type : type};
  if ((!orbitConjunctionAssessmentID_Accessor) || (orbitConjunctionAssessmentID_Accessor->getAccessorType() != requestedType)) {
    orbitConjunctionAssessmentID_Accessor = OrbitConjunctionAssessmentID_Type::create(requestedType);
    if (!orbitConjunctionAssessmentID_Accessor) {
      throw uci::base::UCIException("Error in enableOrbitConjunctionAssessmentID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *orbitConjunctionAssessmentID_Accessor;
}

uci::type::OrbitConjunctionAssessmentRequestStatusMDT& OrbitConjunctionAssessmentRequestStatusMDT::clearOrbitConjunctionAssessmentID() noexcept {
  orbitConjunctionAssessmentID_Accessor.reset();
  return *this;
}

std::unique_ptr<OrbitConjunctionAssessmentRequestStatusMDT> OrbitConjunctionAssessmentRequestStatusMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitConjunctionAssessmentRequestStatusMDT : type};
  return (requestedType == uci::type::accessorType::orbitConjunctionAssessmentRequestStatusMDT) ? boost::make_unique<OrbitConjunctionAssessmentRequestStatusMDT>() : nullptr;
}

/**  */
namespace OrbitConjunctionAssessmentRequestStatusMDT_Names {

constexpr const char* Extern_Type_Name{"OrbitConjunctionAssessmentRequestStatusMDT"};
constexpr const char* CompletionStatus_Name{"CompletionStatus"};
constexpr const char* OrbitConjunctionAssessmentID_Name{"OrbitConjunctionAssessmentID"};

} // namespace OrbitConjunctionAssessmentRequestStatusMDT_Names

void OrbitConjunctionAssessmentRequestStatusMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitConjunctionAssessmentRequestStatusMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitConjunctionAssessmentRequestStatusMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitConjunctionAssessmentRequestStatusMDT_Names::CompletionStatus_Name) {
      CompletionStatusType::deserialize(valueType.second, accessor.enableCompletionStatus(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitConjunctionAssessmentRequestStatusMDT_Names::OrbitConjunctionAssessmentID_Name) {
      OrbitConjunctionAssessmentID_Type::deserialize(valueType.second, accessor.enableOrbitConjunctionAssessmentID(), nodeName, nsPrefix);
    }
  }
  RequestStatusBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string OrbitConjunctionAssessmentRequestStatusMDT::serialize(const uci::type::OrbitConjunctionAssessmentRequestStatusMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? OrbitConjunctionAssessmentRequestStatusMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitConjunctionAssessmentRequestStatusMDT_Names::Extern_Type_Name);
  }
  RequestStatusBaseType::serialize(accessor, node, "", false, false, false);
  if (accessor.hasCompletionStatus()) {
    CompletionStatusType::serialize(accessor.getCompletionStatus(), node, OrbitConjunctionAssessmentRequestStatusMDT_Names::CompletionStatus_Name);
  }
  if (accessor.hasOrbitConjunctionAssessmentID()) {
    OrbitConjunctionAssessmentID_Type::serialize(accessor.getOrbitConjunctionAssessmentID(), node, OrbitConjunctionAssessmentRequestStatusMDT_Names::OrbitConjunctionAssessmentID_Name);
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

uci::type::OrbitConjunctionAssessmentRequestStatusMDT& OrbitConjunctionAssessmentRequestStatusMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OrbitConjunctionAssessmentRequestStatusMDT>().release());
}

uci::type::OrbitConjunctionAssessmentRequestStatusMDT& OrbitConjunctionAssessmentRequestStatusMDT::create(const uci::type::OrbitConjunctionAssessmentRequestStatusMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OrbitConjunctionAssessmentRequestStatusMDT> newAccessor{boost::make_unique<asb_uci::type::OrbitConjunctionAssessmentRequestStatusMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OrbitConjunctionAssessmentRequestStatusMDT::destroy(uci::type::OrbitConjunctionAssessmentRequestStatusMDT& accessor) {
  delete dynamic_cast<asb_uci::type::OrbitConjunctionAssessmentRequestStatusMDT*>(&accessor);
}

} // namespace type

} // namespace uci

