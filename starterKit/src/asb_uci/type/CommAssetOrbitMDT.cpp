/** @file CommAssetOrbitMDT.cpp
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

#include "../../../include/asb_uci/type/CommAssetOrbitMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CommAssetID_Type.h"
#include "../../../include/asb_uci/type/CommAssetOrbitID_Type.h"
#include "../../../include/asb_uci/type/TLE_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommAssetID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommAssetOrbitID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommAssetOrbitMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TLE_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

CommAssetOrbitMDT::CommAssetOrbitMDT()
  : commAssetOrbitID_Accessor{boost::make_unique<CommAssetOrbitID_Type>()},
    commAssetID_Accessor{boost::make_unique<CommAssetID_Type>()},
    tLE_Accessor{boost::make_unique<TLE_Type>()} {
}

CommAssetOrbitMDT::~CommAssetOrbitMDT() = default;

void CommAssetOrbitMDT::copy(const uci::type::CommAssetOrbitMDT& accessor) {
  copyImpl(accessor, false);
}

void CommAssetOrbitMDT::copyImpl(const uci::type::CommAssetOrbitMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const CommAssetOrbitMDT&>(accessor);
    setCommAssetOrbitID(*(accessorImpl.commAssetOrbitID_Accessor));
    setCommAssetID(*(accessorImpl.commAssetID_Accessor));
    setTLE(*(accessorImpl.tLE_Accessor));
  }
}

void CommAssetOrbitMDT::reset() noexcept {
  commAssetOrbitID_Accessor->reset();
  commAssetID_Accessor->reset();
  tLE_Accessor->reset();
}

const uci::type::CommAssetOrbitID_Type& CommAssetOrbitMDT::getCommAssetOrbitID() const {
  return *commAssetOrbitID_Accessor;
}

uci::type::CommAssetOrbitID_Type& CommAssetOrbitMDT::getCommAssetOrbitID() {
  return *commAssetOrbitID_Accessor;
}

uci::type::CommAssetOrbitMDT& CommAssetOrbitMDT::setCommAssetOrbitID(const uci::type::CommAssetOrbitID_Type& accessor) {
  if (&accessor != commAssetOrbitID_Accessor.get()) {
    commAssetOrbitID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::CommAssetID_Type& CommAssetOrbitMDT::getCommAssetID() const {
  return *commAssetID_Accessor;
}

uci::type::CommAssetID_Type& CommAssetOrbitMDT::getCommAssetID() {
  return *commAssetID_Accessor;
}

uci::type::CommAssetOrbitMDT& CommAssetOrbitMDT::setCommAssetID(const uci::type::CommAssetID_Type& accessor) {
  if (&accessor != commAssetID_Accessor.get()) {
    commAssetID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::TLE_Type& CommAssetOrbitMDT::getTLE() const {
  return *tLE_Accessor;
}

uci::type::TLE_Type& CommAssetOrbitMDT::getTLE() {
  return *tLE_Accessor;
}

uci::type::CommAssetOrbitMDT& CommAssetOrbitMDT::setTLE(const uci::type::TLE_Type& accessor) {
  if (&accessor != tLE_Accessor.get()) {
    tLE_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<CommAssetOrbitMDT> CommAssetOrbitMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commAssetOrbitMDT : type};
  return (requestedType == uci::type::accessorType::commAssetOrbitMDT) ? boost::make_unique<CommAssetOrbitMDT>() : nullptr;
}

/**  */
namespace CommAssetOrbitMDT_Names {

constexpr const char* Extern_Type_Name{"CommAssetOrbitMDT"};
constexpr const char* CommAssetOrbitID_Name{"CommAssetOrbitID"};
constexpr const char* CommAssetID_Name{"CommAssetID"};
constexpr const char* TLE_Name{"TLE"};

} // namespace CommAssetOrbitMDT_Names

void CommAssetOrbitMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::CommAssetOrbitMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CommAssetOrbitMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CommAssetOrbitMDT_Names::CommAssetOrbitID_Name) {
      CommAssetOrbitID_Type::deserialize(valueType.second, accessor.getCommAssetOrbitID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CommAssetOrbitMDT_Names::CommAssetID_Name) {
      CommAssetID_Type::deserialize(valueType.second, accessor.getCommAssetID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CommAssetOrbitMDT_Names::TLE_Name) {
      TLE_Type::deserialize(valueType.second, accessor.getTLE(), nodeName, nsPrefix);
    }
  }
}

std::string CommAssetOrbitMDT::serialize(const uci::type::CommAssetOrbitMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? CommAssetOrbitMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, CommAssetOrbitMDT_Names::Extern_Type_Name);
  }
  CommAssetOrbitID_Type::serialize(accessor.getCommAssetOrbitID(), node, CommAssetOrbitMDT_Names::CommAssetOrbitID_Name);
  CommAssetID_Type::serialize(accessor.getCommAssetID(), node, CommAssetOrbitMDT_Names::CommAssetID_Name);
  TLE_Type::serialize(accessor.getTLE(), node, CommAssetOrbitMDT_Names::TLE_Name);
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

uci::type::CommAssetOrbitMDT& CommAssetOrbitMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::CommAssetOrbitMDT>().release());
}

uci::type::CommAssetOrbitMDT& CommAssetOrbitMDT::create(const uci::type::CommAssetOrbitMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::CommAssetOrbitMDT> newAccessor{boost::make_unique<asb_uci::type::CommAssetOrbitMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void CommAssetOrbitMDT::destroy(uci::type::CommAssetOrbitMDT& accessor) {
  delete dynamic_cast<asb_uci::type::CommAssetOrbitMDT*>(&accessor);
}

} // namespace type

} // namespace uci

