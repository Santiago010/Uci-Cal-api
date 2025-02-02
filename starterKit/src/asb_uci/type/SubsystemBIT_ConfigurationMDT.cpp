/** @file SubsystemBIT_ConfigurationMDT.cpp
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

#include "../../../include/asb_uci/type/SubsystemBIT_ConfigurationMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/SubsystemBIT_ConfigurationID_Type.h"
#include "../../../include/asb_uci/type/SubsystemBIT_Type.h"
#include "../../../include/asb_uci/type/SubsystemID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemBIT_ConfigurationID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemBIT_ConfigurationMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemBIT_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SubsystemBIT_ConfigurationMDT::SubsystemBIT_ConfigurationMDT()
  : subsystemBIT_ConfigurationID_Accessor{boost::make_unique<SubsystemBIT_ConfigurationID_Type>()},
    subsystemID_Accessor{boost::make_unique<SubsystemID_Type>()},
    bIT_Accessor{boost::make_unique<BIT>(0, SIZE_MAX)} {
}

SubsystemBIT_ConfigurationMDT::~SubsystemBIT_ConfigurationMDT() = default;

void SubsystemBIT_ConfigurationMDT::copy(const uci::type::SubsystemBIT_ConfigurationMDT& accessor) {
  copyImpl(accessor, false);
}

void SubsystemBIT_ConfigurationMDT::copyImpl(const uci::type::SubsystemBIT_ConfigurationMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const SubsystemBIT_ConfigurationMDT&>(accessor);
    setSubsystemBIT_ConfigurationID(*(accessorImpl.subsystemBIT_ConfigurationID_Accessor));
    setSubsystemID(*(accessorImpl.subsystemID_Accessor));
    setBIT(*(accessorImpl.bIT_Accessor));
  }
}

void SubsystemBIT_ConfigurationMDT::reset() noexcept {
  subsystemBIT_ConfigurationID_Accessor->reset();
  subsystemID_Accessor->reset();
  bIT_Accessor->reset();
}

const uci::type::SubsystemBIT_ConfigurationID_Type& SubsystemBIT_ConfigurationMDT::getSubsystemBIT_ConfigurationID() const {
  return *subsystemBIT_ConfigurationID_Accessor;
}

uci::type::SubsystemBIT_ConfigurationID_Type& SubsystemBIT_ConfigurationMDT::getSubsystemBIT_ConfigurationID() {
  return *subsystemBIT_ConfigurationID_Accessor;
}

uci::type::SubsystemBIT_ConfigurationMDT& SubsystemBIT_ConfigurationMDT::setSubsystemBIT_ConfigurationID(const uci::type::SubsystemBIT_ConfigurationID_Type& accessor) {
  if (&accessor != subsystemBIT_ConfigurationID_Accessor.get()) {
    subsystemBIT_ConfigurationID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SubsystemID_Type& SubsystemBIT_ConfigurationMDT::getSubsystemID() const {
  return *subsystemID_Accessor;
}

uci::type::SubsystemID_Type& SubsystemBIT_ConfigurationMDT::getSubsystemID() {
  return *subsystemID_Accessor;
}

uci::type::SubsystemBIT_ConfigurationMDT& SubsystemBIT_ConfigurationMDT::setSubsystemID(const uci::type::SubsystemID_Type& accessor) {
  if (&accessor != subsystemID_Accessor.get()) {
    subsystemID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SubsystemBIT_ConfigurationMDT::BIT& SubsystemBIT_ConfigurationMDT::getBIT() const {
  return *bIT_Accessor;
}

uci::type::SubsystemBIT_ConfigurationMDT::BIT& SubsystemBIT_ConfigurationMDT::getBIT() {
  return *bIT_Accessor;
}

uci::type::SubsystemBIT_ConfigurationMDT& SubsystemBIT_ConfigurationMDT::setBIT(const uci::type::SubsystemBIT_ConfigurationMDT::BIT& accessor) {
  if (&accessor != bIT_Accessor.get()) {
    bIT_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<SubsystemBIT_ConfigurationMDT> SubsystemBIT_ConfigurationMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::subsystemBIT_ConfigurationMDT : type};
  return (requestedType == uci::type::accessorType::subsystemBIT_ConfigurationMDT) ? boost::make_unique<SubsystemBIT_ConfigurationMDT>() : nullptr;
}

/**  */
namespace SubsystemBIT_ConfigurationMDT_Names {

constexpr const char* Extern_Type_Name{"SubsystemBIT_ConfigurationMDT"};
constexpr const char* SubsystemBIT_ConfigurationID_Name{"SubsystemBIT_ConfigurationID"};
constexpr const char* SubsystemID_Name{"SubsystemID"};
constexpr const char* BIT_Name{"BIT"};

} // namespace SubsystemBIT_ConfigurationMDT_Names

void SubsystemBIT_ConfigurationMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::SubsystemBIT_ConfigurationMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SubsystemBIT_ConfigurationMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SubsystemBIT_ConfigurationMDT_Names::SubsystemBIT_ConfigurationID_Name) {
      SubsystemBIT_ConfigurationID_Type::deserialize(valueType.second, accessor.getSubsystemBIT_ConfigurationID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SubsystemBIT_ConfigurationMDT_Names::SubsystemID_Name) {
      SubsystemID_Type::deserialize(valueType.second, accessor.getSubsystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SubsystemBIT_ConfigurationMDT_Names::BIT_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SubsystemBIT_ConfigurationMDT::BIT& boundedList = accessor.getBIT();
        const uci::type::SubsystemBIT_ConfigurationMDT::BIT::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::SubsystemBIT_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string SubsystemBIT_ConfigurationMDT::serialize(const uci::type::SubsystemBIT_ConfigurationMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SubsystemBIT_ConfigurationMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SubsystemBIT_ConfigurationMDT_Names::Extern_Type_Name);
  }
  SubsystemBIT_ConfigurationID_Type::serialize(accessor.getSubsystemBIT_ConfigurationID(), node, SubsystemBIT_ConfigurationMDT_Names::SubsystemBIT_ConfigurationID_Name);
  SubsystemID_Type::serialize(accessor.getSubsystemID(), node, SubsystemBIT_ConfigurationMDT_Names::SubsystemID_Name);
  {
    const uci::type::SubsystemBIT_ConfigurationMDT::BIT& boundedList = accessor.getBIT();
    for (uci::type::SubsystemBIT_ConfigurationMDT::BIT::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::SubsystemBIT_Type::serialize(boundedList.at(i), node, SubsystemBIT_ConfigurationMDT_Names::BIT_Name);
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

uci::type::SubsystemBIT_ConfigurationMDT& SubsystemBIT_ConfigurationMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SubsystemBIT_ConfigurationMDT>().release());
}

uci::type::SubsystemBIT_ConfigurationMDT& SubsystemBIT_ConfigurationMDT::create(const uci::type::SubsystemBIT_ConfigurationMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SubsystemBIT_ConfigurationMDT> newAccessor{boost::make_unique<asb_uci::type::SubsystemBIT_ConfigurationMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SubsystemBIT_ConfigurationMDT::destroy(uci::type::SubsystemBIT_ConfigurationMDT& accessor) {
  delete dynamic_cast<asb_uci::type::SubsystemBIT_ConfigurationMDT*>(&accessor);
}

} // namespace type

} // namespace uci

