/** @file EntityDimensionEstimateType.cpp
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

#include "../../../include/asb_uci/type/EntityDimensionEstimateType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/SizeType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DistanceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EntityDimensionEstimateType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SizeType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

EntityDimensionEstimateType::EntityDimensionEstimateType() = default;

EntityDimensionEstimateType::~EntityDimensionEstimateType() = default;

void EntityDimensionEstimateType::copy(const uci::type::EntityDimensionEstimateType& accessor) {
  copyImpl(accessor, false);
}

void EntityDimensionEstimateType::copyImpl(const uci::type::EntityDimensionEstimateType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const EntityDimensionEstimateType&>(accessor);
    if (accessorImpl.hasEntityDimension_SA_Spread()) {
      setEntityDimension_SA_Spread(accessorImpl.getEntityDimension_SA_Spread());
    } else {
      clearEntityDimension_SA_Spread();
    }
    if (accessorImpl.entityDimension_Accessor) {
      setEntityDimension(*(accessorImpl.entityDimension_Accessor));
    } else {
      entityDimension_Accessor.reset();
    }
  }
}

void EntityDimensionEstimateType::reset() noexcept {
  clearEntityDimension_SA_Spread();
  entityDimension_Accessor.reset();
}

uci::type::DistanceTypeValue EntityDimensionEstimateType::getEntityDimension_SA_Spread() const {
  if (entityDimension_SA_Spread_Accessor) {
    return *entityDimension_SA_Spread_Accessor;
  }
  throw uci::base::UCIException("Error in getEntityDimension_SA_Spread(): An attempt was made to get an optional field that was not enabled, call hasEntityDimension_SA_Spread() to determine if it is safe to call getEntityDimension_SA_Spread()");
}

uci::type::EntityDimensionEstimateType& EntityDimensionEstimateType::setEntityDimension_SA_Spread(uci::type::DistanceTypeValue value) {
  entityDimension_SA_Spread_Accessor = value;
  return *this;
}

bool EntityDimensionEstimateType::hasEntityDimension_SA_Spread() const noexcept {
  return entityDimension_SA_Spread_Accessor.has_value();
}

uci::type::EntityDimensionEstimateType& EntityDimensionEstimateType::clearEntityDimension_SA_Spread() noexcept {
  entityDimension_SA_Spread_Accessor.reset();
  return *this;
}

uci::type::SizeType& EntityDimensionEstimateType::getEntityDimension_() const {
  if (entityDimension_Accessor) {
    return *entityDimension_Accessor;
  }
  throw uci::base::UCIException("Error in getEntityDimension(): An attempt was made to get an optional field that was not enabled, call hasEntityDimension() to determine if it is safe to call getEntityDimension()");
}

const uci::type::SizeType& EntityDimensionEstimateType::getEntityDimension() const {
  return getEntityDimension_();
}

uci::type::SizeType& EntityDimensionEstimateType::getEntityDimension() {
  return getEntityDimension_();
}

uci::type::EntityDimensionEstimateType& EntityDimensionEstimateType::setEntityDimension(const uci::type::SizeType& accessor) {
  enableEntityDimension();
  if (&accessor != entityDimension_Accessor.get()) {
    entityDimension_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool EntityDimensionEstimateType::hasEntityDimension() const noexcept {
  return static_cast<bool>(entityDimension_Accessor);
}

uci::type::SizeType& EntityDimensionEstimateType::enableEntityDimension(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::sizeType : type};
  if ((!entityDimension_Accessor) || (entityDimension_Accessor->getAccessorType() != requestedType)) {
    entityDimension_Accessor = SizeType::create(requestedType);
    if (!entityDimension_Accessor) {
      throw uci::base::UCIException("Error in enableEntityDimension(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *entityDimension_Accessor;
}

uci::type::EntityDimensionEstimateType& EntityDimensionEstimateType::clearEntityDimension() noexcept {
  entityDimension_Accessor.reset();
  return *this;
}

std::unique_ptr<EntityDimensionEstimateType> EntityDimensionEstimateType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::entityDimensionEstimateType : type};
  return (requestedType == uci::type::accessorType::entityDimensionEstimateType) ? boost::make_unique<EntityDimensionEstimateType>() : nullptr;
}

/**  */
namespace EntityDimensionEstimateType_Names {

constexpr const char* Extern_Type_Name{"EntityDimensionEstimateType"};
constexpr const char* EntityDimension_SA_Spread_Name{"EntityDimension_SA_Spread"};
constexpr const char* EntityDimension_Name{"EntityDimension"};

} // namespace EntityDimensionEstimateType_Names

void EntityDimensionEstimateType::deserialize(const boost::property_tree::ptree& propTree, uci::type::EntityDimensionEstimateType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EntityDimensionEstimateType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + EntityDimensionEstimateType_Names::EntityDimension_SA_Spread_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEntityDimension_SA_Spread(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + EntityDimensionEstimateType_Names::EntityDimension_Name) {
      SizeType::deserialize(valueType.second, accessor.enableEntityDimension(), nodeName, nsPrefix);
    }
  }
}

std::string EntityDimensionEstimateType::serialize(const uci::type::EntityDimensionEstimateType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? EntityDimensionEstimateType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, EntityDimensionEstimateType_Names::Extern_Type_Name);
  }
  if (accessor.hasEntityDimension_SA_Spread()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getEntityDimension_SA_Spread(), node, EntityDimensionEstimateType_Names::EntityDimension_SA_Spread_Name);
  }
  if (accessor.hasEntityDimension()) {
    SizeType::serialize(accessor.getEntityDimension(), node, EntityDimensionEstimateType_Names::EntityDimension_Name);
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

uci::type::EntityDimensionEstimateType& EntityDimensionEstimateType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::EntityDimensionEstimateType>().release());
}

uci::type::EntityDimensionEstimateType& EntityDimensionEstimateType::create(const uci::type::EntityDimensionEstimateType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::EntityDimensionEstimateType> newAccessor{boost::make_unique<asb_uci::type::EntityDimensionEstimateType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void EntityDimensionEstimateType::destroy(uci::type::EntityDimensionEstimateType& accessor) {
  delete dynamic_cast<asb_uci::type::EntityDimensionEstimateType*>(&accessor);
}

} // namespace type

} // namespace uci

