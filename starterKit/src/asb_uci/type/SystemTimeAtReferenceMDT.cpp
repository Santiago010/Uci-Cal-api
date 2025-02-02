/** @file SystemTimeAtReferenceMDT.cpp
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

#include "../../../include/asb_uci/type/SystemTimeAtReferenceMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemTimeAtReferenceMDT.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SystemTimeAtReferenceMDT::SystemTimeAtReferenceMDT() = default;

SystemTimeAtReferenceMDT::~SystemTimeAtReferenceMDT() = default;

void SystemTimeAtReferenceMDT::copy(const uci::type::SystemTimeAtReferenceMDT& accessor) {
  copyImpl(accessor, false);
}

void SystemTimeAtReferenceMDT::copyImpl(const uci::type::SystemTimeAtReferenceMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const SystemTimeAtReferenceMDT&>(accessor);
    setSystemTimeAtLastReference(accessorImpl.systemTimeAtLastReference_Accessor);
    if (accessorImpl.hasCurrentSystemTime()) {
      setCurrentSystemTime(accessorImpl.getCurrentSystemTime());
    } else {
      clearCurrentSystemTime();
    }
    if (accessorImpl.hasCurrentZuluTime()) {
      setCurrentZuluTime(accessorImpl.getCurrentZuluTime());
    } else {
      clearCurrentZuluTime();
    }
  }
}

void SystemTimeAtReferenceMDT::reset() noexcept {
  systemTimeAtLastReference_Accessor = 0;
  clearCurrentSystemTime();
  clearCurrentZuluTime();
}

xs::DateTime SystemTimeAtReferenceMDT::getSystemTimeAtLastReference() const {
  return systemTimeAtLastReference_Accessor;
}

uci::type::SystemTimeAtReferenceMDT& SystemTimeAtReferenceMDT::setSystemTimeAtLastReference(xs::DateTime value) {
  systemTimeAtLastReference_Accessor = value;
  return *this;
}


xs::DateTime SystemTimeAtReferenceMDT::getCurrentSystemTime() const {
  if (currentSystemTime_Accessor) {
    return *currentSystemTime_Accessor;
  }
  throw uci::base::UCIException("Error in getCurrentSystemTime(): An attempt was made to get an optional field that was not enabled, call hasCurrentSystemTime() to determine if it is safe to call getCurrentSystemTime()");
}

uci::type::SystemTimeAtReferenceMDT& SystemTimeAtReferenceMDT::setCurrentSystemTime(xs::DateTime value) {
  currentSystemTime_Accessor = value;
  return *this;
}

bool SystemTimeAtReferenceMDT::hasCurrentSystemTime() const noexcept {
  return currentSystemTime_Accessor.has_value();
}

uci::type::SystemTimeAtReferenceMDT& SystemTimeAtReferenceMDT::clearCurrentSystemTime() noexcept {
  currentSystemTime_Accessor.reset();
  return *this;
}

uci::type::DateTimeTypeValue SystemTimeAtReferenceMDT::getCurrentZuluTime() const {
  if (currentZuluTime_Accessor) {
    return *currentZuluTime_Accessor;
  }
  throw uci::base::UCIException("Error in getCurrentZuluTime(): An attempt was made to get an optional field that was not enabled, call hasCurrentZuluTime() to determine if it is safe to call getCurrentZuluTime()");
}

uci::type::SystemTimeAtReferenceMDT& SystemTimeAtReferenceMDT::setCurrentZuluTime(uci::type::DateTimeTypeValue value) {
  currentZuluTime_Accessor = value;
  return *this;
}

bool SystemTimeAtReferenceMDT::hasCurrentZuluTime() const noexcept {
  return currentZuluTime_Accessor.has_value();
}

uci::type::SystemTimeAtReferenceMDT& SystemTimeAtReferenceMDT::clearCurrentZuluTime() noexcept {
  currentZuluTime_Accessor.reset();
  return *this;
}

std::unique_ptr<SystemTimeAtReferenceMDT> SystemTimeAtReferenceMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::systemTimeAtReferenceMDT : type};
  return (requestedType == uci::type::accessorType::systemTimeAtReferenceMDT) ? boost::make_unique<SystemTimeAtReferenceMDT>() : nullptr;
}

/**  */
namespace SystemTimeAtReferenceMDT_Names {

constexpr const char* Extern_Type_Name{"SystemTimeAtReferenceMDT"};
constexpr const char* SystemTimeAtLastReference_Name{"SystemTimeAtLastReference"};
constexpr const char* CurrentSystemTime_Name{"CurrentSystemTime"};
constexpr const char* CurrentZuluTime_Name{"CurrentZuluTime"};

} // namespace SystemTimeAtReferenceMDT_Names

void SystemTimeAtReferenceMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::SystemTimeAtReferenceMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SystemTimeAtReferenceMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SystemTimeAtReferenceMDT_Names::SystemTimeAtLastReference_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSystemTimeAtLastReference(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + SystemTimeAtReferenceMDT_Names::CurrentSystemTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setCurrentSystemTime(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + SystemTimeAtReferenceMDT_Names::CurrentZuluTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setCurrentZuluTime(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    }
  }
}

std::string SystemTimeAtReferenceMDT::serialize(const uci::type::SystemTimeAtReferenceMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SystemTimeAtReferenceMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SystemTimeAtReferenceMDT_Names::Extern_Type_Name);
  }
  asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getSystemTimeAtLastReference(), node, SystemTimeAtReferenceMDT_Names::SystemTimeAtLastReference_Name);
  if (accessor.hasCurrentSystemTime()) {
    asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getCurrentSystemTime(), node, SystemTimeAtReferenceMDT_Names::CurrentSystemTime_Name);
  }
  if (accessor.hasCurrentZuluTime()) {
    asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getCurrentZuluTime(), node, SystemTimeAtReferenceMDT_Names::CurrentZuluTime_Name);
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

uci::type::SystemTimeAtReferenceMDT& SystemTimeAtReferenceMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SystemTimeAtReferenceMDT>().release());
}

uci::type::SystemTimeAtReferenceMDT& SystemTimeAtReferenceMDT::create(const uci::type::SystemTimeAtReferenceMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SystemTimeAtReferenceMDT> newAccessor{boost::make_unique<asb_uci::type::SystemTimeAtReferenceMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SystemTimeAtReferenceMDT::destroy(uci::type::SystemTimeAtReferenceMDT& accessor) {
  delete dynamic_cast<asb_uci::type::SystemTimeAtReferenceMDT*>(&accessor);
}

} // namespace type

} // namespace uci

