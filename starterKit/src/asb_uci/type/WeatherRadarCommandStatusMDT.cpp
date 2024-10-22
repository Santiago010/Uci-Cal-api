/** @file WeatherRadarCommandStatusMDT.cpp
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

#include "../../../include/asb_uci/type/WeatherRadarCommandStatusMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CapabilityCommandStatusBaseType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/WeatherRadarCommandStatusMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

WeatherRadarCommandStatusMDT::WeatherRadarCommandStatusMDT() = default;

WeatherRadarCommandStatusMDT::~WeatherRadarCommandStatusMDT() = default;

void WeatherRadarCommandStatusMDT::copy(const uci::type::WeatherRadarCommandStatusMDT& accessor) {
  copyImpl(accessor, false);
}

void WeatherRadarCommandStatusMDT::copyImpl(const uci::type::WeatherRadarCommandStatusMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    CapabilityCommandStatusBaseType::copyImpl(accessor, false);
  }
}

void WeatherRadarCommandStatusMDT::reset() noexcept {
  CapabilityCommandStatusBaseType::reset();
}

std::unique_ptr<WeatherRadarCommandStatusMDT> WeatherRadarCommandStatusMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::weatherRadarCommandStatusMDT : type};
  return (requestedType == uci::type::accessorType::weatherRadarCommandStatusMDT) ? boost::make_unique<WeatherRadarCommandStatusMDT>() : nullptr;
}

/**  */
namespace WeatherRadarCommandStatusMDT_Names {

constexpr const char* Extern_Type_Name{"WeatherRadarCommandStatusMDT"};

} // namespace WeatherRadarCommandStatusMDT_Names

void WeatherRadarCommandStatusMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::WeatherRadarCommandStatusMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = WeatherRadarCommandStatusMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    }
  }
  CapabilityCommandStatusBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string WeatherRadarCommandStatusMDT::serialize(const uci::type::WeatherRadarCommandStatusMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? WeatherRadarCommandStatusMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, WeatherRadarCommandStatusMDT_Names::Extern_Type_Name);
  }
  CapabilityCommandStatusBaseType::serialize(accessor, node, "", false, false, false);
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

uci::type::WeatherRadarCommandStatusMDT& WeatherRadarCommandStatusMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::WeatherRadarCommandStatusMDT>().release());
}

uci::type::WeatherRadarCommandStatusMDT& WeatherRadarCommandStatusMDT::create(const uci::type::WeatherRadarCommandStatusMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::WeatherRadarCommandStatusMDT> newAccessor{boost::make_unique<asb_uci::type::WeatherRadarCommandStatusMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void WeatherRadarCommandStatusMDT::destroy(uci::type::WeatherRadarCommandStatusMDT& accessor) {
  delete dynamic_cast<asb_uci::type::WeatherRadarCommandStatusMDT*>(&accessor);
}

} // namespace type

} // namespace uci

