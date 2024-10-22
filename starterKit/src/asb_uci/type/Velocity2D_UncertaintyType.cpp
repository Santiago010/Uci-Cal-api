/** @file Velocity2D_UncertaintyType.cpp
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

#include "../../../include/asb_uci/type/Velocity2D_UncertaintyType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/UncertaintyType.h"
#include "../../../include/asb_uci/type/Velocity2D_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/UncertaintyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Velocity2D_UncertaintyType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

Velocity2D_UncertaintyType::Velocity2D_UncertaintyType() = default;

Velocity2D_UncertaintyType::~Velocity2D_UncertaintyType() = default;

void Velocity2D_UncertaintyType::copy(const uci::type::Velocity2D_UncertaintyType& accessor) {
  copyImpl(accessor, false);
}

void Velocity2D_UncertaintyType::copyImpl(const uci::type::Velocity2D_UncertaintyType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    Velocity2D_Type::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const Velocity2D_UncertaintyType&>(accessor);
    if (accessorImpl.uncertainty_Accessor) {
      setUncertainty(*(accessorImpl.uncertainty_Accessor));
    } else {
      uncertainty_Accessor.reset();
    }
  }
}

void Velocity2D_UncertaintyType::reset() noexcept {
  Velocity2D_Type::reset();
  uncertainty_Accessor.reset();
}

uci::type::UncertaintyType& Velocity2D_UncertaintyType::getUncertainty_() const {
  if (uncertainty_Accessor) {
    return *uncertainty_Accessor;
  }
  throw uci::base::UCIException("Error in getUncertainty(): An attempt was made to get an optional field that was not enabled, call hasUncertainty() to determine if it is safe to call getUncertainty()");
}

const uci::type::UncertaintyType& Velocity2D_UncertaintyType::getUncertainty() const {
  return getUncertainty_();
}

uci::type::UncertaintyType& Velocity2D_UncertaintyType::getUncertainty() {
  return getUncertainty_();
}

uci::type::Velocity2D_UncertaintyType& Velocity2D_UncertaintyType::setUncertainty(const uci::type::UncertaintyType& accessor) {
  enableUncertainty();
  if (&accessor != uncertainty_Accessor.get()) {
    uncertainty_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool Velocity2D_UncertaintyType::hasUncertainty() const noexcept {
  return static_cast<bool>(uncertainty_Accessor);
}

uci::type::UncertaintyType& Velocity2D_UncertaintyType::enableUncertainty(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::uncertaintyType : type};
  if ((!uncertainty_Accessor) || (uncertainty_Accessor->getAccessorType() != requestedType)) {
    uncertainty_Accessor = UncertaintyType::create(requestedType);
    if (!uncertainty_Accessor) {
      throw uci::base::UCIException("Error in enableUncertainty(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *uncertainty_Accessor;
}

uci::type::Velocity2D_UncertaintyType& Velocity2D_UncertaintyType::clearUncertainty() noexcept {
  uncertainty_Accessor.reset();
  return *this;
}

std::unique_ptr<Velocity2D_UncertaintyType> Velocity2D_UncertaintyType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::velocity2D_UncertaintyType : type};
  return (requestedType == uci::type::accessorType::velocity2D_UncertaintyType) ? boost::make_unique<Velocity2D_UncertaintyType>() : nullptr;
}

/**  */
namespace Velocity2D_UncertaintyType_Names {

constexpr const char* Extern_Type_Name{"Velocity2D_UncertaintyType"};
constexpr const char* Uncertainty_Name{"Uncertainty"};

} // namespace Velocity2D_UncertaintyType_Names

void Velocity2D_UncertaintyType::deserialize(const boost::property_tree::ptree& propTree, uci::type::Velocity2D_UncertaintyType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = Velocity2D_UncertaintyType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + Velocity2D_UncertaintyType_Names::Uncertainty_Name) {
      UncertaintyType::deserialize(valueType.second, accessor.enableUncertainty(), nodeName, nsPrefix);
    }
  }
  Velocity2D_Type::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string Velocity2D_UncertaintyType::serialize(const uci::type::Velocity2D_UncertaintyType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? Velocity2D_UncertaintyType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, Velocity2D_UncertaintyType_Names::Extern_Type_Name);
  }
  Velocity2D_Type::serialize(accessor, node, "", false, false, false);
  if (accessor.hasUncertainty()) {
    UncertaintyType::serialize(accessor.getUncertainty(), node, Velocity2D_UncertaintyType_Names::Uncertainty_Name);
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

uci::type::Velocity2D_UncertaintyType& Velocity2D_UncertaintyType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::Velocity2D_UncertaintyType>().release());
}

uci::type::Velocity2D_UncertaintyType& Velocity2D_UncertaintyType::create(const uci::type::Velocity2D_UncertaintyType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::Velocity2D_UncertaintyType> newAccessor{boost::make_unique<asb_uci::type::Velocity2D_UncertaintyType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void Velocity2D_UncertaintyType::destroy(uci::type::Velocity2D_UncertaintyType& accessor) {
  delete dynamic_cast<asb_uci::type::Velocity2D_UncertaintyType*>(&accessor);
}

} // namespace type

} // namespace uci

