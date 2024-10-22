/** @file StoreManagementCommandMDT.cpp
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

#include "../../../include/asb_uci/type/StoreManagementCommandMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/StoreManagementCommandType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/StoreManagementCommandMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/StoreManagementCommandType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

StoreManagementCommandMDT::StoreManagementCommandMDT()
  : command_Accessor{boost::make_unique<Command>(1, SIZE_MAX)} {
}

StoreManagementCommandMDT::~StoreManagementCommandMDT() = default;

void StoreManagementCommandMDT::copy(const uci::type::StoreManagementCommandMDT& accessor) {
  copyImpl(accessor, false);
}

void StoreManagementCommandMDT::copyImpl(const uci::type::StoreManagementCommandMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const StoreManagementCommandMDT&>(accessor);
    setCommand(*(accessorImpl.command_Accessor));
  }
}

void StoreManagementCommandMDT::reset() noexcept {
  command_Accessor->reset();
}

const uci::type::StoreManagementCommandMDT::Command& StoreManagementCommandMDT::getCommand() const {
  return *command_Accessor;
}

uci::type::StoreManagementCommandMDT::Command& StoreManagementCommandMDT::getCommand() {
  return *command_Accessor;
}

uci::type::StoreManagementCommandMDT& StoreManagementCommandMDT::setCommand(const uci::type::StoreManagementCommandMDT::Command& accessor) {
  if (&accessor != command_Accessor.get()) {
    command_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<StoreManagementCommandMDT> StoreManagementCommandMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::storeManagementCommandMDT : type};
  return (requestedType == uci::type::accessorType::storeManagementCommandMDT) ? boost::make_unique<StoreManagementCommandMDT>() : nullptr;
}

/**  */
namespace StoreManagementCommandMDT_Names {

constexpr const char* Extern_Type_Name{"StoreManagementCommandMDT"};
constexpr const char* Command_Name{"Command"};

} // namespace StoreManagementCommandMDT_Names

void StoreManagementCommandMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::StoreManagementCommandMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = StoreManagementCommandMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + StoreManagementCommandMDT_Names::Command_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::StoreManagementCommandMDT::Command& boundedList = accessor.getCommand();
        const uci::type::StoreManagementCommandMDT::Command::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::StoreManagementCommandType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string StoreManagementCommandMDT::serialize(const uci::type::StoreManagementCommandMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? StoreManagementCommandMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, StoreManagementCommandMDT_Names::Extern_Type_Name);
  }
  {
    const uci::type::StoreManagementCommandMDT::Command& boundedList = accessor.getCommand();
    for (uci::type::StoreManagementCommandMDT::Command::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::StoreManagementCommandType::serialize(boundedList.at(i), node, StoreManagementCommandMDT_Names::Command_Name);
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

uci::type::StoreManagementCommandMDT& StoreManagementCommandMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::StoreManagementCommandMDT>().release());
}

uci::type::StoreManagementCommandMDT& StoreManagementCommandMDT::create(const uci::type::StoreManagementCommandMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::StoreManagementCommandMDT> newAccessor{boost::make_unique<asb_uci::type::StoreManagementCommandMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void StoreManagementCommandMDT::destroy(uci::type::StoreManagementCommandMDT& accessor) {
  delete dynamic_cast<asb_uci::type::StoreManagementCommandMDT*>(&accessor);
}

} // namespace type

} // namespace uci

