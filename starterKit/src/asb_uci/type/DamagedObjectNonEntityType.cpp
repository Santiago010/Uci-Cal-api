/** @file DamagedObjectNonEntityType.cpp
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

#include "../../../include/asb_uci/type/DamagedObjectNonEntityType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/DamagedObjectIdentityType.h"
#include "../../../include/asb_uci/type/Point2D_Type.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DamagedObjectIdentityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DamagedObjectNonEntityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Point2D_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

DamagedObjectNonEntityType::DamagedObjectNonEntityType()
  : location_Accessor{boost::make_unique<Point2D_Type>()} {
}

DamagedObjectNonEntityType::~DamagedObjectNonEntityType() = default;

void DamagedObjectNonEntityType::copy(const uci::type::DamagedObjectNonEntityType& accessor) {
  copyImpl(accessor, false);
}

void DamagedObjectNonEntityType::copyImpl(const uci::type::DamagedObjectNonEntityType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const DamagedObjectNonEntityType&>(accessor);
    if (accessorImpl.type_Accessor) {
      setType(*(accessorImpl.type_Accessor));
    } else {
      type_Accessor.reset();
    }
    setLocation(*(accessorImpl.location_Accessor));
  }
}

void DamagedObjectNonEntityType::reset() noexcept {
  type_Accessor.reset();
  if (location_Accessor->getAccessorType() != uci::type::accessorType::point2D_Type) {
    location_Accessor = boost::make_unique<Point2D_Type>();
  } else {
    location_Accessor->reset();
  }
}

uci::type::DamagedObjectIdentityType& DamagedObjectNonEntityType::getType_() const {
  if (type_Accessor) {
    return *type_Accessor;
  }
  throw uci::base::UCIException("Error in getType(): An attempt was made to get an optional field that was not enabled, call hasType() to determine if it is safe to call getType()");
}

const uci::type::DamagedObjectIdentityType& DamagedObjectNonEntityType::getType() const {
  return getType_();
}

uci::type::DamagedObjectIdentityType& DamagedObjectNonEntityType::getType() {
  return getType_();
}

uci::type::DamagedObjectNonEntityType& DamagedObjectNonEntityType::setType(const uci::type::DamagedObjectIdentityType& accessor) {
  enableType();
  if (&accessor != type_Accessor.get()) {
    type_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool DamagedObjectNonEntityType::hasType() const noexcept {
  return static_cast<bool>(type_Accessor);
}

uci::type::DamagedObjectIdentityType& DamagedObjectNonEntityType::enableType(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::damagedObjectIdentityType : type};
  if ((!type_Accessor) || (type_Accessor->getAccessorType() != requestedType)) {
    type_Accessor = DamagedObjectIdentityType::create(requestedType);
    if (!type_Accessor) {
      throw uci::base::UCIException("Error in enableType(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *type_Accessor;
}

uci::type::DamagedObjectNonEntityType& DamagedObjectNonEntityType::clearType() noexcept {
  type_Accessor.reset();
  return *this;
}

const uci::type::Point2D_Type& DamagedObjectNonEntityType::getLocation() const {
  return *location_Accessor;
}

uci::type::Point2D_Type& DamagedObjectNonEntityType::getLocation() {
  return *location_Accessor;
}

uci::type::DamagedObjectNonEntityType& DamagedObjectNonEntityType::setLocation(const uci::type::Point2D_Type& accessor) {
  enableLocation(accessor.getAccessorType());
  if (&accessor != location_Accessor.get()) {
    location_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

uci::type::Point2D_Type& DamagedObjectNonEntityType::enableLocation(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::point2D_Type : type};
  if ((!location_Accessor) || (location_Accessor->getAccessorType() != requestedType)) {
    location_Accessor = Point2D_Type::create(requestedType);
    if (!location_Accessor) {
      throw uci::base::UCIException("Error in enableLocation(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *location_Accessor;
}

std::unique_ptr<DamagedObjectNonEntityType> DamagedObjectNonEntityType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::damagedObjectNonEntityType : type};
  return (requestedType == uci::type::accessorType::damagedObjectNonEntityType) ? boost::make_unique<DamagedObjectNonEntityType>() : nullptr;
}

/**  */
namespace DamagedObjectNonEntityType_Names {

constexpr const char* Extern_Type_Name{"DamagedObjectNonEntityType"};
constexpr const char* Type_Name{"Type"};
constexpr const char* Location_Name{"Location"};

} // namespace DamagedObjectNonEntityType_Names

void DamagedObjectNonEntityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::DamagedObjectNonEntityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = DamagedObjectNonEntityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + DamagedObjectNonEntityType_Names::Type_Name) {
      DamagedObjectIdentityType::deserialize(valueType.second, accessor.enableType(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DamagedObjectNonEntityType_Names::Location_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableLocation(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    }
  }
}

std::string DamagedObjectNonEntityType::serialize(const uci::type::DamagedObjectNonEntityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? DamagedObjectNonEntityType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, DamagedObjectNonEntityType_Names::Extern_Type_Name);
  }
  if (accessor.hasType()) {
    DamagedObjectIdentityType::serialize(accessor.getType(), node, DamagedObjectNonEntityType_Names::Type_Name);
  }
  Point2D_Type::serialize(accessor.getLocation(), node, DamagedObjectNonEntityType_Names::Location_Name);
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

uci::type::DamagedObjectNonEntityType& DamagedObjectNonEntityType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::DamagedObjectNonEntityType>().release());
}

uci::type::DamagedObjectNonEntityType& DamagedObjectNonEntityType::create(const uci::type::DamagedObjectNonEntityType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::DamagedObjectNonEntityType> newAccessor{boost::make_unique<asb_uci::type::DamagedObjectNonEntityType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void DamagedObjectNonEntityType::destroy(uci::type::DamagedObjectNonEntityType& accessor) {
  delete dynamic_cast<asb_uci::type::DamagedObjectNonEntityType*>(&accessor);
}

} // namespace type

} // namespace uci

