/** @file RF_ThreadInstanceSetupCommandStatusMDT.cpp
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

#include "../../../include/asb_uci/type/RF_ThreadInstanceSetupCommandStatusMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/SupportCapabilityCommandStatusBaseType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RF_ThreadInstanceSetupCommandStatusMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

RF_ThreadInstanceSetupCommandStatusMDT::RF_ThreadInstanceSetupCommandStatusMDT() = default;

RF_ThreadInstanceSetupCommandStatusMDT::~RF_ThreadInstanceSetupCommandStatusMDT() = default;

void RF_ThreadInstanceSetupCommandStatusMDT::copy(const uci::type::RF_ThreadInstanceSetupCommandStatusMDT& accessor) {
  copyImpl(accessor, false);
}

void RF_ThreadInstanceSetupCommandStatusMDT::copyImpl(const uci::type::RF_ThreadInstanceSetupCommandStatusMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    SupportCapabilityCommandStatusBaseType::copyImpl(accessor, false);
  }
}

void RF_ThreadInstanceSetupCommandStatusMDT::reset() noexcept {
  SupportCapabilityCommandStatusBaseType::reset();
}

std::unique_ptr<RF_ThreadInstanceSetupCommandStatusMDT> RF_ThreadInstanceSetupCommandStatusMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::rF_ThreadInstanceSetupCommandStatusMDT : type};
  return (requestedType == uci::type::accessorType::rF_ThreadInstanceSetupCommandStatusMDT) ? boost::make_unique<RF_ThreadInstanceSetupCommandStatusMDT>() : nullptr;
}

/**  */
namespace RF_ThreadInstanceSetupCommandStatusMDT_Names {

constexpr const char* Extern_Type_Name{"RF_ThreadInstanceSetupCommandStatusMDT"};

} // namespace RF_ThreadInstanceSetupCommandStatusMDT_Names

void RF_ThreadInstanceSetupCommandStatusMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::RF_ThreadInstanceSetupCommandStatusMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RF_ThreadInstanceSetupCommandStatusMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    }
  }
  SupportCapabilityCommandStatusBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string RF_ThreadInstanceSetupCommandStatusMDT::serialize(const uci::type::RF_ThreadInstanceSetupCommandStatusMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? RF_ThreadInstanceSetupCommandStatusMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, RF_ThreadInstanceSetupCommandStatusMDT_Names::Extern_Type_Name);
  }
  SupportCapabilityCommandStatusBaseType::serialize(accessor, node, "", false, false, false);
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

uci::type::RF_ThreadInstanceSetupCommandStatusMDT& RF_ThreadInstanceSetupCommandStatusMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::RF_ThreadInstanceSetupCommandStatusMDT>().release());
}

uci::type::RF_ThreadInstanceSetupCommandStatusMDT& RF_ThreadInstanceSetupCommandStatusMDT::create(const uci::type::RF_ThreadInstanceSetupCommandStatusMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::RF_ThreadInstanceSetupCommandStatusMDT> newAccessor{boost::make_unique<asb_uci::type::RF_ThreadInstanceSetupCommandStatusMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void RF_ThreadInstanceSetupCommandStatusMDT::destroy(uci::type::RF_ThreadInstanceSetupCommandStatusMDT& accessor) {
  delete dynamic_cast<asb_uci::type::RF_ThreadInstanceSetupCommandStatusMDT*>(&accessor);
}

} // namespace type

} // namespace uci

