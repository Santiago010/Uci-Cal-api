/** @file CommUserLinkType.cpp
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

#include "../../../include/asb_uci/type/CommUserLinkType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CommLinkDetailsType.h"
#include "../../../include/asb_uci/type/CommUserLinkID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommLinkDetailsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommUserLinkID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommUserLinkType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

CommUserLinkType::CommUserLinkType()
  : userLinkID_Accessor{boost::make_unique<CommUserLinkID_Type>()},
    details_Accessor{boost::make_unique<CommLinkDetailsType>()} {
}

CommUserLinkType::~CommUserLinkType() = default;

void CommUserLinkType::copy(const uci::type::CommUserLinkType& accessor) {
  copyImpl(accessor, false);
}

void CommUserLinkType::copyImpl(const uci::type::CommUserLinkType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const CommUserLinkType&>(accessor);
    setUserLinkID(*(accessorImpl.userLinkID_Accessor));
    setDetails(*(accessorImpl.details_Accessor));
  }
}

void CommUserLinkType::reset() noexcept {
  userLinkID_Accessor->reset();
  details_Accessor->reset();
}

const uci::type::CommUserLinkID_Type& CommUserLinkType::getUserLinkID() const {
  return *userLinkID_Accessor;
}

uci::type::CommUserLinkID_Type& CommUserLinkType::getUserLinkID() {
  return *userLinkID_Accessor;
}

uci::type::CommUserLinkType& CommUserLinkType::setUserLinkID(const uci::type::CommUserLinkID_Type& accessor) {
  if (&accessor != userLinkID_Accessor.get()) {
    userLinkID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::CommLinkDetailsType& CommUserLinkType::getDetails() const {
  return *details_Accessor;
}

uci::type::CommLinkDetailsType& CommUserLinkType::getDetails() {
  return *details_Accessor;
}

uci::type::CommUserLinkType& CommUserLinkType::setDetails(const uci::type::CommLinkDetailsType& accessor) {
  if (&accessor != details_Accessor.get()) {
    details_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<CommUserLinkType> CommUserLinkType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commUserLinkType : type};
  return (requestedType == uci::type::accessorType::commUserLinkType) ? boost::make_unique<CommUserLinkType>() : nullptr;
}

/**  */
namespace CommUserLinkType_Names {

constexpr const char* Extern_Type_Name{"CommUserLinkType"};
constexpr const char* UserLinkID_Name{"UserLinkID"};
constexpr const char* Details_Name{"Details"};

} // namespace CommUserLinkType_Names

void CommUserLinkType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CommUserLinkType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CommUserLinkType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CommUserLinkType_Names::UserLinkID_Name) {
      CommUserLinkID_Type::deserialize(valueType.second, accessor.getUserLinkID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CommUserLinkType_Names::Details_Name) {
      CommLinkDetailsType::deserialize(valueType.second, accessor.getDetails(), nodeName, nsPrefix);
    }
  }
}

std::string CommUserLinkType::serialize(const uci::type::CommUserLinkType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? CommUserLinkType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, CommUserLinkType_Names::Extern_Type_Name);
  }
  CommUserLinkID_Type::serialize(accessor.getUserLinkID(), node, CommUserLinkType_Names::UserLinkID_Name);
  CommLinkDetailsType::serialize(accessor.getDetails(), node, CommUserLinkType_Names::Details_Name);
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

uci::type::CommUserLinkType& CommUserLinkType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::CommUserLinkType>().release());
}

uci::type::CommUserLinkType& CommUserLinkType::create(const uci::type::CommUserLinkType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::CommUserLinkType> newAccessor{boost::make_unique<asb_uci::type::CommUserLinkType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void CommUserLinkType::destroy(uci::type::CommUserLinkType& accessor) {
  delete dynamic_cast<asb_uci::type::CommUserLinkType*>(&accessor);
}

} // namespace type

} // namespace uci

