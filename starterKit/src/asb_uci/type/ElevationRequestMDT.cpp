/** @file ElevationRequestMDT.cpp
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

#include "../../../include/asb_uci/type/ElevationRequestMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ElevationRequestPointsType.h"
#include "../../../include/asb_uci/type/RequestBaseType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ElevationRequestMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ElevationRequestPointsType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ElevationRequestMDT::ElevationRequestMDT()
  : elevationRequested_Accessor{boost::make_unique<ElevationRequestPointsType>()} {
}

ElevationRequestMDT::~ElevationRequestMDT() = default;

void ElevationRequestMDT::copy(const uci::type::ElevationRequestMDT& accessor) {
  copyImpl(accessor, false);
}

void ElevationRequestMDT::copyImpl(const uci::type::ElevationRequestMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    RequestBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const ElevationRequestMDT&>(accessor);
    setElevationRequested(*(accessorImpl.elevationRequested_Accessor));
  }
}

void ElevationRequestMDT::reset() noexcept {
  RequestBaseType::reset();
  elevationRequested_Accessor->reset();
}

const uci::type::ElevationRequestPointsType& ElevationRequestMDT::getElevationRequested() const {
  return *elevationRequested_Accessor;
}

uci::type::ElevationRequestPointsType& ElevationRequestMDT::getElevationRequested() {
  return *elevationRequested_Accessor;
}

uci::type::ElevationRequestMDT& ElevationRequestMDT::setElevationRequested(const uci::type::ElevationRequestPointsType& accessor) {
  if (&accessor != elevationRequested_Accessor.get()) {
    elevationRequested_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<ElevationRequestMDT> ElevationRequestMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::elevationRequestMDT : type};
  return (requestedType == uci::type::accessorType::elevationRequestMDT) ? boost::make_unique<ElevationRequestMDT>() : nullptr;
}

/**  */
namespace ElevationRequestMDT_Names {

constexpr const char* Extern_Type_Name{"ElevationRequestMDT"};
constexpr const char* ElevationRequested_Name{"ElevationRequested"};

} // namespace ElevationRequestMDT_Names

void ElevationRequestMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ElevationRequestMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ElevationRequestMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ElevationRequestMDT_Names::ElevationRequested_Name) {
      ElevationRequestPointsType::deserialize(valueType.second, accessor.getElevationRequested(), nodeName, nsPrefix);
    }
  }
  RequestBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string ElevationRequestMDT::serialize(const uci::type::ElevationRequestMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ElevationRequestMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ElevationRequestMDT_Names::Extern_Type_Name);
  }
  RequestBaseType::serialize(accessor, node, "", false, false, false);
  ElevationRequestPointsType::serialize(accessor.getElevationRequested(), node, ElevationRequestMDT_Names::ElevationRequested_Name);
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

uci::type::ElevationRequestMDT& ElevationRequestMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ElevationRequestMDT>().release());
}

uci::type::ElevationRequestMDT& ElevationRequestMDT::create(const uci::type::ElevationRequestMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ElevationRequestMDT> newAccessor{boost::make_unique<asb_uci::type::ElevationRequestMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ElevationRequestMDT::destroy(uci::type::ElevationRequestMDT& accessor) {
  delete dynamic_cast<asb_uci::type::ElevationRequestMDT*>(&accessor);
}

} // namespace type

} // namespace uci

