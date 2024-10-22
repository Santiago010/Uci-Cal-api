/** @file StoreLoadoutConfigurationMDT.cpp
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

#include "../../../include/asb_uci/type/StoreLoadoutConfigurationMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/StoreLoadoutConfigurationID_Type.h"
#include "../../../include/asb_uci/type/StoreLoadoutConfigurationType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/StoreLoadoutConfigurationID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/StoreLoadoutConfigurationMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/StoreLoadoutConfigurationType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

StoreLoadoutConfigurationMDT::StoreLoadoutConfigurationMDT()
  : storeLoadoutConfigurationID_Accessor{boost::make_unique<StoreLoadoutConfigurationID_Type>()},
    loadout_Accessor{boost::make_unique<Loadout>(0, SIZE_MAX)} {
}

StoreLoadoutConfigurationMDT::~StoreLoadoutConfigurationMDT() = default;

void StoreLoadoutConfigurationMDT::copy(const uci::type::StoreLoadoutConfigurationMDT& accessor) {
  copyImpl(accessor, false);
}

void StoreLoadoutConfigurationMDT::copyImpl(const uci::type::StoreLoadoutConfigurationMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const StoreLoadoutConfigurationMDT&>(accessor);
    setStoreLoadoutConfigurationID(*(accessorImpl.storeLoadoutConfigurationID_Accessor));
    setLoadout(*(accessorImpl.loadout_Accessor));
  }
}

void StoreLoadoutConfigurationMDT::reset() noexcept {
  storeLoadoutConfigurationID_Accessor->reset();
  loadout_Accessor->reset();
}

const uci::type::StoreLoadoutConfigurationID_Type& StoreLoadoutConfigurationMDT::getStoreLoadoutConfigurationID() const {
  return *storeLoadoutConfigurationID_Accessor;
}

uci::type::StoreLoadoutConfigurationID_Type& StoreLoadoutConfigurationMDT::getStoreLoadoutConfigurationID() {
  return *storeLoadoutConfigurationID_Accessor;
}

uci::type::StoreLoadoutConfigurationMDT& StoreLoadoutConfigurationMDT::setStoreLoadoutConfigurationID(const uci::type::StoreLoadoutConfigurationID_Type& accessor) {
  if (&accessor != storeLoadoutConfigurationID_Accessor.get()) {
    storeLoadoutConfigurationID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::StoreLoadoutConfigurationMDT::Loadout& StoreLoadoutConfigurationMDT::getLoadout() const {
  return *loadout_Accessor;
}

uci::type::StoreLoadoutConfigurationMDT::Loadout& StoreLoadoutConfigurationMDT::getLoadout() {
  return *loadout_Accessor;
}

uci::type::StoreLoadoutConfigurationMDT& StoreLoadoutConfigurationMDT::setLoadout(const uci::type::StoreLoadoutConfigurationMDT::Loadout& accessor) {
  if (&accessor != loadout_Accessor.get()) {
    loadout_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<StoreLoadoutConfigurationMDT> StoreLoadoutConfigurationMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::storeLoadoutConfigurationMDT : type};
  return (requestedType == uci::type::accessorType::storeLoadoutConfigurationMDT) ? boost::make_unique<StoreLoadoutConfigurationMDT>() : nullptr;
}

/**  */
namespace StoreLoadoutConfigurationMDT_Names {

constexpr const char* Extern_Type_Name{"StoreLoadoutConfigurationMDT"};
constexpr const char* StoreLoadoutConfigurationID_Name{"StoreLoadoutConfigurationID"};
constexpr const char* Loadout_Name{"Loadout"};

} // namespace StoreLoadoutConfigurationMDT_Names

void StoreLoadoutConfigurationMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::StoreLoadoutConfigurationMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = StoreLoadoutConfigurationMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + StoreLoadoutConfigurationMDT_Names::StoreLoadoutConfigurationID_Name) {
      StoreLoadoutConfigurationID_Type::deserialize(valueType.second, accessor.getStoreLoadoutConfigurationID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + StoreLoadoutConfigurationMDT_Names::Loadout_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::StoreLoadoutConfigurationMDT::Loadout& boundedList = accessor.getLoadout();
        const uci::type::StoreLoadoutConfigurationMDT::Loadout::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::StoreLoadoutConfigurationType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string StoreLoadoutConfigurationMDT::serialize(const uci::type::StoreLoadoutConfigurationMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? StoreLoadoutConfigurationMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, StoreLoadoutConfigurationMDT_Names::Extern_Type_Name);
  }
  StoreLoadoutConfigurationID_Type::serialize(accessor.getStoreLoadoutConfigurationID(), node, StoreLoadoutConfigurationMDT_Names::StoreLoadoutConfigurationID_Name);
  {
    const uci::type::StoreLoadoutConfigurationMDT::Loadout& boundedList = accessor.getLoadout();
    for (uci::type::StoreLoadoutConfigurationMDT::Loadout::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::StoreLoadoutConfigurationType::serialize(boundedList.at(i), node, StoreLoadoutConfigurationMDT_Names::Loadout_Name);
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

uci::type::StoreLoadoutConfigurationMDT& StoreLoadoutConfigurationMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::StoreLoadoutConfigurationMDT>().release());
}

uci::type::StoreLoadoutConfigurationMDT& StoreLoadoutConfigurationMDT::create(const uci::type::StoreLoadoutConfigurationMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::StoreLoadoutConfigurationMDT> newAccessor{boost::make_unique<asb_uci::type::StoreLoadoutConfigurationMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void StoreLoadoutConfigurationMDT::destroy(uci::type::StoreLoadoutConfigurationMDT& accessor) {
  delete dynamic_cast<asb_uci::type::StoreLoadoutConfigurationMDT*>(&accessor);
}

} // namespace type

} // namespace uci

