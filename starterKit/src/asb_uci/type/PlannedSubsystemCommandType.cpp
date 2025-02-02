/** @file PlannedSubsystemCommandType.cpp
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

#include "../../../include/asb_uci/type/PlannedSubsystemCommandType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/MDF_CommandType.h"
#include "../../../include/asb_uci/type/SubsystemID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MDF_CommandType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlannedSubsystemCommandType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PlannedSubsystemCommandType::PlannedSubsystemCommandType()
  : subsystemID_Accessor{boost::make_unique<SubsystemID_Type>()} {
}

PlannedSubsystemCommandType::~PlannedSubsystemCommandType() = default;

void PlannedSubsystemCommandType::copy(const uci::type::PlannedSubsystemCommandType& accessor) {
  copyImpl(accessor, false);
}

void PlannedSubsystemCommandType::copyImpl(const uci::type::PlannedSubsystemCommandType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PlannedSubsystemCommandType&>(accessor);
    setSubsystemID(*(accessorImpl.subsystemID_Accessor));
    if (accessorImpl.activateMDF_Accessor) {
      setActivateMDF(*(accessorImpl.activateMDF_Accessor));
    } else {
      activateMDF_Accessor.reset();
    }
  }
}

void PlannedSubsystemCommandType::reset() noexcept {
  subsystemID_Accessor->reset();
  activateMDF_Accessor.reset();
}

const uci::type::SubsystemID_Type& PlannedSubsystemCommandType::getSubsystemID() const {
  return *subsystemID_Accessor;
}

uci::type::SubsystemID_Type& PlannedSubsystemCommandType::getSubsystemID() {
  return *subsystemID_Accessor;
}

uci::type::PlannedSubsystemCommandType& PlannedSubsystemCommandType::setSubsystemID(const uci::type::SubsystemID_Type& accessor) {
  if (&accessor != subsystemID_Accessor.get()) {
    subsystemID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::MDF_CommandType& PlannedSubsystemCommandType::getActivateMDF_() const {
  if (activateMDF_Accessor) {
    return *activateMDF_Accessor;
  }
  throw uci::base::UCIException("Error in getActivateMDF(): An attempt was made to get an optional field that was not enabled, call hasActivateMDF() to determine if it is safe to call getActivateMDF()");
}

const uci::type::MDF_CommandType& PlannedSubsystemCommandType::getActivateMDF() const {
  return getActivateMDF_();
}

uci::type::MDF_CommandType& PlannedSubsystemCommandType::getActivateMDF() {
  return getActivateMDF_();
}

uci::type::PlannedSubsystemCommandType& PlannedSubsystemCommandType::setActivateMDF(const uci::type::MDF_CommandType& accessor) {
  enableActivateMDF();
  if (&accessor != activateMDF_Accessor.get()) {
    activateMDF_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PlannedSubsystemCommandType::hasActivateMDF() const noexcept {
  return static_cast<bool>(activateMDF_Accessor);
}

uci::type::MDF_CommandType& PlannedSubsystemCommandType::enableActivateMDF(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::mDF_CommandType : type};
  if ((!activateMDF_Accessor) || (activateMDF_Accessor->getAccessorType() != requestedType)) {
    activateMDF_Accessor = MDF_CommandType::create(requestedType);
    if (!activateMDF_Accessor) {
      throw uci::base::UCIException("Error in enableActivateMDF(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *activateMDF_Accessor;
}

uci::type::PlannedSubsystemCommandType& PlannedSubsystemCommandType::clearActivateMDF() noexcept {
  activateMDF_Accessor.reset();
  return *this;
}

std::unique_ptr<PlannedSubsystemCommandType> PlannedSubsystemCommandType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::plannedSubsystemCommandType : type};
  return (requestedType == uci::type::accessorType::plannedSubsystemCommandType) ? boost::make_unique<PlannedSubsystemCommandType>() : nullptr;
}

/**  */
namespace PlannedSubsystemCommandType_Names {

constexpr const char* Extern_Type_Name{"PlannedSubsystemCommandType"};
constexpr const char* SubsystemID_Name{"SubsystemID"};
constexpr const char* ActivateMDF_Name{"ActivateMDF"};

} // namespace PlannedSubsystemCommandType_Names

void PlannedSubsystemCommandType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PlannedSubsystemCommandType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PlannedSubsystemCommandType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PlannedSubsystemCommandType_Names::SubsystemID_Name) {
      SubsystemID_Type::deserialize(valueType.second, accessor.getSubsystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PlannedSubsystemCommandType_Names::ActivateMDF_Name) {
      MDF_CommandType::deserialize(valueType.second, accessor.enableActivateMDF(), nodeName, nsPrefix);
    }
  }
}

std::string PlannedSubsystemCommandType::serialize(const uci::type::PlannedSubsystemCommandType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PlannedSubsystemCommandType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PlannedSubsystemCommandType_Names::Extern_Type_Name);
  }
  SubsystemID_Type::serialize(accessor.getSubsystemID(), node, PlannedSubsystemCommandType_Names::SubsystemID_Name);
  if (accessor.hasActivateMDF()) {
    MDF_CommandType::serialize(accessor.getActivateMDF(), node, PlannedSubsystemCommandType_Names::ActivateMDF_Name);
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

uci::type::PlannedSubsystemCommandType& PlannedSubsystemCommandType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PlannedSubsystemCommandType>().release());
}

uci::type::PlannedSubsystemCommandType& PlannedSubsystemCommandType::create(const uci::type::PlannedSubsystemCommandType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PlannedSubsystemCommandType> newAccessor{boost::make_unique<asb_uci::type::PlannedSubsystemCommandType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PlannedSubsystemCommandType::destroy(uci::type::PlannedSubsystemCommandType& accessor) {
  delete dynamic_cast<asb_uci::type::PlannedSubsystemCommandType*>(&accessor);
}

} // namespace type

} // namespace uci

