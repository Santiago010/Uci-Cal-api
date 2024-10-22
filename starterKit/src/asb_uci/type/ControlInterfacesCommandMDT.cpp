/** @file ControlInterfacesCommandMDT.cpp
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

#include "../../../include/asb_uci/type/ControlInterfacesCommandMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CommandBaseType.h"
#include "../../../include/asb_uci/type/ControlInterfacesControlType.h"
#include "../../../include/asb_uci/type/SystemID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ControlInterfacesCommandMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ControlInterfacesControlType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ControlInterfacesCommandMDT::ControlInterfacesCommandMDT()
  : systemID_Accessor{boost::make_unique<SystemID_Type>()},
    controlType_Accessor{boost::make_unique<ControlInterfacesControlType>()} {
}

ControlInterfacesCommandMDT::~ControlInterfacesCommandMDT() = default;

void ControlInterfacesCommandMDT::copy(const uci::type::ControlInterfacesCommandMDT& accessor) {
  copyImpl(accessor, false);
}

void ControlInterfacesCommandMDT::copyImpl(const uci::type::ControlInterfacesCommandMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    CommandBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const ControlInterfacesCommandMDT&>(accessor);
    setSystemID(*(accessorImpl.systemID_Accessor));
    setControlType(*(accessorImpl.controlType_Accessor));
  }
}

void ControlInterfacesCommandMDT::reset() noexcept {
  CommandBaseType::reset();
  systemID_Accessor->reset();
  controlType_Accessor->reset();
}

const uci::type::SystemID_Type& ControlInterfacesCommandMDT::getSystemID() const {
  return *systemID_Accessor;
}

uci::type::SystemID_Type& ControlInterfacesCommandMDT::getSystemID() {
  return *systemID_Accessor;
}

uci::type::ControlInterfacesCommandMDT& ControlInterfacesCommandMDT::setSystemID(const uci::type::SystemID_Type& accessor) {
  if (&accessor != systemID_Accessor.get()) {
    systemID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ControlInterfacesControlType& ControlInterfacesCommandMDT::getControlType() const {
  return *controlType_Accessor;
}

uci::type::ControlInterfacesControlType& ControlInterfacesCommandMDT::getControlType() {
  return *controlType_Accessor;
}

uci::type::ControlInterfacesCommandMDT& ControlInterfacesCommandMDT::setControlType(const uci::type::ControlInterfacesControlType& accessor) {
  if (&accessor != controlType_Accessor.get()) {
    controlType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<ControlInterfacesCommandMDT> ControlInterfacesCommandMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::controlInterfacesCommandMDT : type};
  return (requestedType == uci::type::accessorType::controlInterfacesCommandMDT) ? boost::make_unique<ControlInterfacesCommandMDT>() : nullptr;
}

/**  */
namespace ControlInterfacesCommandMDT_Names {

constexpr const char* Extern_Type_Name{"ControlInterfacesCommandMDT"};
constexpr const char* SystemID_Name{"SystemID"};
constexpr const char* ControlType_Name{"ControlType"};

} // namespace ControlInterfacesCommandMDT_Names

void ControlInterfacesCommandMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ControlInterfacesCommandMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ControlInterfacesCommandMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ControlInterfacesCommandMDT_Names::SystemID_Name) {
      SystemID_Type::deserialize(valueType.second, accessor.getSystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ControlInterfacesCommandMDT_Names::ControlType_Name) {
      ControlInterfacesControlType::deserialize(valueType.second, accessor.getControlType(), nodeName, nsPrefix);
    }
  }
  CommandBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string ControlInterfacesCommandMDT::serialize(const uci::type::ControlInterfacesCommandMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ControlInterfacesCommandMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ControlInterfacesCommandMDT_Names::Extern_Type_Name);
  }
  CommandBaseType::serialize(accessor, node, "", false, false, false);
  SystemID_Type::serialize(accessor.getSystemID(), node, ControlInterfacesCommandMDT_Names::SystemID_Name);
  ControlInterfacesControlType::serialize(accessor.getControlType(), node, ControlInterfacesCommandMDT_Names::ControlType_Name);
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

uci::type::ControlInterfacesCommandMDT& ControlInterfacesCommandMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ControlInterfacesCommandMDT>().release());
}

uci::type::ControlInterfacesCommandMDT& ControlInterfacesCommandMDT::create(const uci::type::ControlInterfacesCommandMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ControlInterfacesCommandMDT> newAccessor{boost::make_unique<asb_uci::type::ControlInterfacesCommandMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ControlInterfacesCommandMDT::destroy(uci::type::ControlInterfacesCommandMDT& accessor) {
  delete dynamic_cast<asb_uci::type::ControlInterfacesCommandMDT*>(&accessor);
}

} // namespace type

} // namespace uci

