/** @file EA_CommandMDT.cpp
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

#include "../../../include/asb_uci/type/EA_CommandMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/EA_CommandType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EA_CommandMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EA_CommandType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

EA_CommandMDT::EA_CommandMDT()
  : command_Accessor{boost::make_unique<Command>(1, SIZE_MAX)} {
}

EA_CommandMDT::~EA_CommandMDT() = default;

void EA_CommandMDT::copy(const uci::type::EA_CommandMDT& accessor) {
  copyImpl(accessor, false);
}

void EA_CommandMDT::copyImpl(const uci::type::EA_CommandMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const EA_CommandMDT&>(accessor);
    setCommand(*(accessorImpl.command_Accessor));
  }
}

void EA_CommandMDT::reset() noexcept {
  command_Accessor->reset();
}

const uci::type::EA_CommandMDT::Command& EA_CommandMDT::getCommand() const {
  return *command_Accessor;
}

uci::type::EA_CommandMDT::Command& EA_CommandMDT::getCommand() {
  return *command_Accessor;
}

uci::type::EA_CommandMDT& EA_CommandMDT::setCommand(const uci::type::EA_CommandMDT::Command& accessor) {
  if (&accessor != command_Accessor.get()) {
    command_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<EA_CommandMDT> EA_CommandMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::eA_CommandMDT : type};
  return (requestedType == uci::type::accessorType::eA_CommandMDT) ? boost::make_unique<EA_CommandMDT>() : nullptr;
}

/**  */
namespace EA_CommandMDT_Names {

constexpr const char* Extern_Type_Name{"EA_CommandMDT"};
constexpr const char* Command_Name{"Command"};

} // namespace EA_CommandMDT_Names

void EA_CommandMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::EA_CommandMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EA_CommandMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + EA_CommandMDT_Names::Command_Name) {
      uci::type::EA_CommandMDT::Command& boundedList = accessor.getCommand();
      const uci::type::EA_CommandMDT::Command::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::EA_CommandType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    }
  }
}

std::string EA_CommandMDT::serialize(const uci::type::EA_CommandMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? EA_CommandMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, EA_CommandMDT_Names::Extern_Type_Name);
  }
  {
    const uci::type::EA_CommandMDT::Command& boundedList = accessor.getCommand();
    for (uci::type::EA_CommandMDT::Command::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::EA_CommandType::serialize(boundedList.at(i), node, EA_CommandMDT_Names::Command_Name);
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

uci::type::EA_CommandMDT& EA_CommandMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::EA_CommandMDT>().release());
}

uci::type::EA_CommandMDT& EA_CommandMDT::create(const uci::type::EA_CommandMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::EA_CommandMDT> newAccessor{boost::make_unique<asb_uci::type::EA_CommandMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void EA_CommandMDT::destroy(uci::type::EA_CommandMDT& accessor) {
  delete dynamic_cast<asb_uci::type::EA_CommandMDT*>(&accessor);
}

} // namespace type

} // namespace uci

