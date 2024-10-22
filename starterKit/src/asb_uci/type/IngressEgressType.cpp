/** @file IngressEgressType.cpp
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

#include "../../../include/asb_uci/type/IngressEgressType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/Point3D_Type.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IngressEgressType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Point3D_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

IngressEgressType::IngressEgressType() = default;

IngressEgressType::~IngressEgressType() = default;

void IngressEgressType::copy(const uci::type::IngressEgressType& accessor) {
  copyImpl(accessor, false);
}

void IngressEgressType::copyImpl(const uci::type::IngressEgressType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const IngressEgressType&>(accessor);
    if (accessorImpl.entryPoint_Accessor) {
      setEntryPoint(*(accessorImpl.entryPoint_Accessor));
    } else {
      entryPoint_Accessor.reset();
    }
    if (accessorImpl.exitPoint_Accessor) {
      setExitPoint(*(accessorImpl.exitPoint_Accessor));
    } else {
      exitPoint_Accessor.reset();
    }
  }
}

void IngressEgressType::reset() noexcept {
  entryPoint_Accessor.reset();
  exitPoint_Accessor.reset();
}

uci::type::Point3D_Type& IngressEgressType::getEntryPoint_() const {
  if (entryPoint_Accessor) {
    return *entryPoint_Accessor;
  }
  throw uci::base::UCIException("Error in getEntryPoint(): An attempt was made to get an optional field that was not enabled, call hasEntryPoint() to determine if it is safe to call getEntryPoint()");
}

const uci::type::Point3D_Type& IngressEgressType::getEntryPoint() const {
  return getEntryPoint_();
}

uci::type::Point3D_Type& IngressEgressType::getEntryPoint() {
  return getEntryPoint_();
}

uci::type::IngressEgressType& IngressEgressType::setEntryPoint(const uci::type::Point3D_Type& accessor) {
  enableEntryPoint(accessor.getAccessorType());
  if (&accessor != entryPoint_Accessor.get()) {
    entryPoint_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool IngressEgressType::hasEntryPoint() const noexcept {
  return static_cast<bool>(entryPoint_Accessor);
}

uci::type::Point3D_Type& IngressEgressType::enableEntryPoint(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::point3D_Type : type};
  if ((!entryPoint_Accessor) || (entryPoint_Accessor->getAccessorType() != requestedType)) {
    entryPoint_Accessor = Point3D_Type::create(requestedType);
    if (!entryPoint_Accessor) {
      throw uci::base::UCIException("Error in enableEntryPoint(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *entryPoint_Accessor;
}

uci::type::IngressEgressType& IngressEgressType::clearEntryPoint() noexcept {
  entryPoint_Accessor.reset();
  return *this;
}

uci::type::Point3D_Type& IngressEgressType::getExitPoint_() const {
  if (exitPoint_Accessor) {
    return *exitPoint_Accessor;
  }
  throw uci::base::UCIException("Error in getExitPoint(): An attempt was made to get an optional field that was not enabled, call hasExitPoint() to determine if it is safe to call getExitPoint()");
}

const uci::type::Point3D_Type& IngressEgressType::getExitPoint() const {
  return getExitPoint_();
}

uci::type::Point3D_Type& IngressEgressType::getExitPoint() {
  return getExitPoint_();
}

uci::type::IngressEgressType& IngressEgressType::setExitPoint(const uci::type::Point3D_Type& accessor) {
  enableExitPoint(accessor.getAccessorType());
  if (&accessor != exitPoint_Accessor.get()) {
    exitPoint_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool IngressEgressType::hasExitPoint() const noexcept {
  return static_cast<bool>(exitPoint_Accessor);
}

uci::type::Point3D_Type& IngressEgressType::enableExitPoint(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::point3D_Type : type};
  if ((!exitPoint_Accessor) || (exitPoint_Accessor->getAccessorType() != requestedType)) {
    exitPoint_Accessor = Point3D_Type::create(requestedType);
    if (!exitPoint_Accessor) {
      throw uci::base::UCIException("Error in enableExitPoint(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *exitPoint_Accessor;
}

uci::type::IngressEgressType& IngressEgressType::clearExitPoint() noexcept {
  exitPoint_Accessor.reset();
  return *this;
}

std::unique_ptr<IngressEgressType> IngressEgressType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::ingressEgressType : type};
  return (requestedType == uci::type::accessorType::ingressEgressType) ? boost::make_unique<IngressEgressType>() : nullptr;
}

/**  */
namespace IngressEgressType_Names {

constexpr const char* Extern_Type_Name{"IngressEgressType"};
constexpr const char* EntryPoint_Name{"EntryPoint"};
constexpr const char* ExitPoint_Name{"ExitPoint"};

} // namespace IngressEgressType_Names

void IngressEgressType::deserialize(const boost::property_tree::ptree& propTree, uci::type::IngressEgressType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = IngressEgressType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + IngressEgressType_Names::EntryPoint_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableEntryPoint(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + IngressEgressType_Names::ExitPoint_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableExitPoint(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    }
  }
}

std::string IngressEgressType::serialize(const uci::type::IngressEgressType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? IngressEgressType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, IngressEgressType_Names::Extern_Type_Name);
  }
  if (accessor.hasEntryPoint()) {
    Point3D_Type::serialize(accessor.getEntryPoint(), node, IngressEgressType_Names::EntryPoint_Name);
  }
  if (accessor.hasExitPoint()) {
    Point3D_Type::serialize(accessor.getExitPoint(), node, IngressEgressType_Names::ExitPoint_Name);
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

uci::type::IngressEgressType& IngressEgressType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::IngressEgressType>().release());
}

uci::type::IngressEgressType& IngressEgressType::create(const uci::type::IngressEgressType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::IngressEgressType> newAccessor{boost::make_unique<asb_uci::type::IngressEgressType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void IngressEgressType::destroy(uci::type::IngressEgressType& accessor) {
  delete dynamic_cast<asb_uci::type::IngressEgressType*>(&accessor);
}

} // namespace type

} // namespace uci

