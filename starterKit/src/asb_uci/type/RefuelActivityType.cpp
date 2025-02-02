/** @file RefuelActivityType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:14 PM
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

#include "../../../include/asb_uci/type/RefuelActivityType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ActivityBaseType.h"
#include "../../../include/asb_uci/type/RefuelActivityStatusType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RefuelActivityStatusType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RefuelActivityType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

RefuelActivityType::RefuelActivityType() = default;

RefuelActivityType::~RefuelActivityType() = default;

void RefuelActivityType::copy(const uci::type::RefuelActivityType& accessor) {
  copyImpl(accessor, false);
}

void RefuelActivityType::copyImpl(const uci::type::RefuelActivityType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    ActivityBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const RefuelActivityType&>(accessor);
    if (accessorImpl.dispenserActivity_Accessor) {
      setDispenserActivity(*(accessorImpl.dispenserActivity_Accessor));
    } else {
      dispenserActivity_Accessor.reset();
    }
  }
}

void RefuelActivityType::reset() noexcept {
  ActivityBaseType::reset();
  dispenserActivity_Accessor.reset();
}

uci::type::RefuelActivityStatusType& RefuelActivityType::getDispenserActivity_() const {
  if (dispenserActivity_Accessor) {
    return *dispenserActivity_Accessor;
  }
  throw uci::base::UCIException("Error in getDispenserActivity(): An attempt was made to get an optional field that was not enabled, call hasDispenserActivity() to determine if it is safe to call getDispenserActivity()");
}

const uci::type::RefuelActivityStatusType& RefuelActivityType::getDispenserActivity() const {
  return getDispenserActivity_();
}

uci::type::RefuelActivityStatusType& RefuelActivityType::getDispenserActivity() {
  return getDispenserActivity_();
}

uci::type::RefuelActivityType& RefuelActivityType::setDispenserActivity(const uci::type::RefuelActivityStatusType& accessor) {
  enableDispenserActivity();
  if (&accessor != dispenserActivity_Accessor.get()) {
    dispenserActivity_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RefuelActivityType::hasDispenserActivity() const noexcept {
  return static_cast<bool>(dispenserActivity_Accessor);
}

uci::type::RefuelActivityStatusType& RefuelActivityType::enableDispenserActivity(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::refuelActivityStatusType : type};
  if ((!dispenserActivity_Accessor) || (dispenserActivity_Accessor->getAccessorType() != requestedType)) {
    dispenserActivity_Accessor = RefuelActivityStatusType::create(requestedType);
    if (!dispenserActivity_Accessor) {
      throw uci::base::UCIException("Error in enableDispenserActivity(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *dispenserActivity_Accessor;
}

uci::type::RefuelActivityType& RefuelActivityType::clearDispenserActivity() noexcept {
  dispenserActivity_Accessor.reset();
  return *this;
}

std::unique_ptr<RefuelActivityType> RefuelActivityType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::refuelActivityType : type};
  return (requestedType == uci::type::accessorType::refuelActivityType) ? boost::make_unique<RefuelActivityType>() : nullptr;
}

/**  */
namespace RefuelActivityType_Names {

constexpr const char* Extern_Type_Name{"RefuelActivityType"};
constexpr const char* DispenserActivity_Name{"DispenserActivity"};

} // namespace RefuelActivityType_Names

void RefuelActivityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::RefuelActivityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RefuelActivityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RefuelActivityType_Names::DispenserActivity_Name) {
      RefuelActivityStatusType::deserialize(valueType.second, accessor.enableDispenserActivity(), nodeName, nsPrefix);
    }
  }
  ActivityBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string RefuelActivityType::serialize(const uci::type::RefuelActivityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? RefuelActivityType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, RefuelActivityType_Names::Extern_Type_Name);
  }
  ActivityBaseType::serialize(accessor, node, "", false, false, false);
  if (accessor.hasDispenserActivity()) {
    RefuelActivityStatusType::serialize(accessor.getDispenserActivity(), node, RefuelActivityType_Names::DispenserActivity_Name);
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

uci::type::RefuelActivityType& RefuelActivityType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::RefuelActivityType>().release());
}

uci::type::RefuelActivityType& RefuelActivityType::create(const uci::type::RefuelActivityType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::RefuelActivityType> newAccessor{boost::make_unique<asb_uci::type::RefuelActivityType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void RefuelActivityType::destroy(uci::type::RefuelActivityType& accessor) {
  delete dynamic_cast<asb_uci::type::RefuelActivityType*>(&accessor);
}

} // namespace type

} // namespace uci

