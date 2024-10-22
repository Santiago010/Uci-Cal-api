/** @file CommLink16NetSelectionType.cpp
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

#include "../../../include/asb_uci/type/CommLink16NetSelectionType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommLink16NetSelectionType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Link16_NetNumberType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Link16_ParticipationGroupIndexType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

CommLink16NetSelectionType::CommLink16NetSelectionType() = default;

CommLink16NetSelectionType::~CommLink16NetSelectionType() = default;

void CommLink16NetSelectionType::copy(const uci::type::CommLink16NetSelectionType& accessor) {
  copyImpl(accessor, false);
}

void CommLink16NetSelectionType::copyImpl(const uci::type::CommLink16NetSelectionType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const CommLink16NetSelectionType&>(accessor);
    setNetSelectionStatusNet(accessorImpl.netSelectionStatusNet_Accessor);
    setNetSelectionStatusPG_Index(accessorImpl.netSelectionStatusPG_Index_Accessor);
  }
}

void CommLink16NetSelectionType::reset() noexcept {
  netSelectionStatusNet_Accessor = 0;
  netSelectionStatusPG_Index_Accessor = 0;
}

uci::type::Link16_NetNumberTypeValue CommLink16NetSelectionType::getNetSelectionStatusNet() const {
  return netSelectionStatusNet_Accessor;
}

uci::type::CommLink16NetSelectionType& CommLink16NetSelectionType::setNetSelectionStatusNet(uci::type::Link16_NetNumberTypeValue value) {
  netSelectionStatusNet_Accessor = value;
  return *this;
}


uci::type::Link16_ParticipationGroupIndexTypeValue CommLink16NetSelectionType::getNetSelectionStatusPG_Index() const {
  return netSelectionStatusPG_Index_Accessor;
}

uci::type::CommLink16NetSelectionType& CommLink16NetSelectionType::setNetSelectionStatusPG_Index(uci::type::Link16_ParticipationGroupIndexTypeValue value) {
  netSelectionStatusPG_Index_Accessor = value;
  return *this;
}


std::unique_ptr<CommLink16NetSelectionType> CommLink16NetSelectionType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commLink16NetSelectionType : type};
  return (requestedType == uci::type::accessorType::commLink16NetSelectionType) ? boost::make_unique<CommLink16NetSelectionType>() : nullptr;
}

/**  */
namespace CommLink16NetSelectionType_Names {

constexpr const char* Extern_Type_Name{"CommLink16NetSelectionType"};
constexpr const char* NetSelectionStatusNet_Name{"NetSelectionStatusNet"};
constexpr const char* NetSelectionStatusPG_Index_Name{"NetSelectionStatusPG_Index"};

} // namespace CommLink16NetSelectionType_Names

void CommLink16NetSelectionType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CommLink16NetSelectionType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CommLink16NetSelectionType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CommLink16NetSelectionType_Names::NetSelectionStatusNet_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setNetSelectionStatusNet(asb_uci::util::SerializationHelpers::deserializeUnsignedByte(*value));
      }
    } else if (valueType.first == nsPrefix + CommLink16NetSelectionType_Names::NetSelectionStatusPG_Index_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setNetSelectionStatusPG_Index(asb_uci::util::SerializationHelpers::deserializeUnsignedShort(*value));
      }
    }
  }
}

std::string CommLink16NetSelectionType::serialize(const uci::type::CommLink16NetSelectionType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? CommLink16NetSelectionType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, CommLink16NetSelectionType_Names::Extern_Type_Name);
  }
  asb_uci::util::SerializationHelpers::serializeUnsignedByte(accessor.getNetSelectionStatusNet(), node, CommLink16NetSelectionType_Names::NetSelectionStatusNet_Name);
  asb_uci::util::SerializationHelpers::serializeUnsignedShort(accessor.getNetSelectionStatusPG_Index(), node, CommLink16NetSelectionType_Names::NetSelectionStatusPG_Index_Name);
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

uci::type::CommLink16NetSelectionType& CommLink16NetSelectionType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::CommLink16NetSelectionType>().release());
}

uci::type::CommLink16NetSelectionType& CommLink16NetSelectionType::create(const uci::type::CommLink16NetSelectionType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::CommLink16NetSelectionType> newAccessor{boost::make_unique<asb_uci::type::CommLink16NetSelectionType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void CommLink16NetSelectionType::destroy(uci::type::CommLink16NetSelectionType& accessor) {
  delete dynamic_cast<asb_uci::type::CommLink16NetSelectionType*>(&accessor);
}

} // namespace type

} // namespace uci

