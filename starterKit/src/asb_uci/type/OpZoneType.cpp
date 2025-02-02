/** @file OpZoneType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:13 PM
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

#include "../../../include/asb_uci/type/OpZoneType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/Velocity2D_Type.h"
#include "../../../include/asb_uci/type/ZoneType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OpZoneType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Velocity2D_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OpZoneType::OpZoneType() = default;

OpZoneType::~OpZoneType() = default;

void OpZoneType::copy(const uci::type::OpZoneType& accessor) {
  copyImpl(accessor, false);
}

void OpZoneType::copyImpl(const uci::type::OpZoneType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    ZoneType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const OpZoneType&>(accessor);
    if (accessorImpl.velocity_Accessor) {
      setVelocity(*(accessorImpl.velocity_Accessor));
    } else {
      velocity_Accessor.reset();
    }
  }
}

void OpZoneType::reset() noexcept {
  ZoneType::reset();
  velocity_Accessor.reset();
}

uci::type::Velocity2D_Type& OpZoneType::getVelocity_() const {
  if (velocity_Accessor) {
    return *velocity_Accessor;
  }
  throw uci::base::UCIException("Error in getVelocity(): An attempt was made to get an optional field that was not enabled, call hasVelocity() to determine if it is safe to call getVelocity()");
}

const uci::type::Velocity2D_Type& OpZoneType::getVelocity() const {
  return getVelocity_();
}

uci::type::Velocity2D_Type& OpZoneType::getVelocity() {
  return getVelocity_();
}

uci::type::OpZoneType& OpZoneType::setVelocity(const uci::type::Velocity2D_Type& accessor) {
  enableVelocity(accessor.getAccessorType());
  if (&accessor != velocity_Accessor.get()) {
    velocity_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool OpZoneType::hasVelocity() const noexcept {
  return static_cast<bool>(velocity_Accessor);
}

uci::type::Velocity2D_Type& OpZoneType::enableVelocity(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::velocity2D_Type : type};
  if ((!velocity_Accessor) || (velocity_Accessor->getAccessorType() != requestedType)) {
    velocity_Accessor = Velocity2D_Type::create(requestedType);
    if (!velocity_Accessor) {
      throw uci::base::UCIException("Error in enableVelocity(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *velocity_Accessor;
}

uci::type::OpZoneType& OpZoneType::clearVelocity() noexcept {
  velocity_Accessor.reset();
  return *this;
}

std::unique_ptr<OpZoneType> OpZoneType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::opZoneType : type};
  return (requestedType == uci::type::accessorType::opZoneType) ? boost::make_unique<OpZoneType>() : nullptr;
}

/**  */
namespace OpZoneType_Names {

constexpr const char* Extern_Type_Name{"OpZoneType"};
constexpr const char* Velocity_Name{"Velocity"};

} // namespace OpZoneType_Names

void OpZoneType::deserialize(const boost::property_tree::ptree& propTree, uci::type::OpZoneType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OpZoneType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OpZoneType_Names::Velocity_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableVelocity(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    }
  }
  ZoneType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string OpZoneType::serialize(const uci::type::OpZoneType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? OpZoneType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, OpZoneType_Names::Extern_Type_Name);
  }
  ZoneType::serialize(accessor, node, "", false, false, false);
  if (accessor.hasVelocity()) {
    Velocity2D_Type::serialize(accessor.getVelocity(), node, OpZoneType_Names::Velocity_Name);
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

uci::type::OpZoneType& OpZoneType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OpZoneType>().release());
}

uci::type::OpZoneType& OpZoneType::create(const uci::type::OpZoneType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OpZoneType> newAccessor{boost::make_unique<asb_uci::type::OpZoneType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OpZoneType::destroy(uci::type::OpZoneType& accessor) {
  delete dynamic_cast<asb_uci::type::OpZoneType*>(&accessor);
}

} // namespace type

} // namespace uci

