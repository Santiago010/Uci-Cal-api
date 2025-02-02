/** @file CommProfileID_Type.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:12 PM
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

#include "../../../include/asb_uci/type/CommProfileID_Type.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommProfileID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

CommProfileID_Type::CommProfileID_Type() = default;

CommProfileID_Type::~CommProfileID_Type() = default;

void CommProfileID_Type::copy(const uci::type::CommProfileID_Type& accessor) {
  copyImpl(accessor, false);
}

void CommProfileID_Type::copyImpl(const uci::type::CommProfileID_Type& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    ID_Type::copyImpl(accessor, false);
  }
}

void CommProfileID_Type::reset() noexcept {
  ID_Type::reset();
}

std::unique_ptr<CommProfileID_Type> CommProfileID_Type::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commProfileID_Type : type};
  return (requestedType == uci::type::accessorType::commProfileID_Type) ? boost::make_unique<CommProfileID_Type>() : nullptr;
}

/**  */
namespace CommProfileID_Type_Names {

constexpr const char* Extern_Type_Name{"CommProfileID_Type"};

} // namespace CommProfileID_Type_Names

void CommProfileID_Type::deserialize(const boost::property_tree::ptree& propTree, uci::type::CommProfileID_Type& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CommProfileID_Type_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    }
  }
  ID_Type::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string CommProfileID_Type::serialize(const uci::type::CommProfileID_Type& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? CommProfileID_Type_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, CommProfileID_Type_Names::Extern_Type_Name);
  }
  ID_Type::serialize(accessor, node, "", false, false, false);
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

uci::type::CommProfileID_Type& CommProfileID_Type::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::CommProfileID_Type>().release());
}

uci::type::CommProfileID_Type& CommProfileID_Type::create(const uci::type::CommProfileID_Type& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::CommProfileID_Type> newAccessor{boost::make_unique<asb_uci::type::CommProfileID_Type>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void CommProfileID_Type::destroy(uci::type::CommProfileID_Type& accessor) {
  delete dynamic_cast<asb_uci::type::CommProfileID_Type*>(&accessor);
}

} // namespace type

} // namespace uci

