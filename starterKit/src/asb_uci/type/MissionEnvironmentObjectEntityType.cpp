/** @file MissionEnvironmentObjectEntityType.cpp
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

#include "../../../include/asb_uci/type/MissionEnvironmentObjectEntityType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/EntityID_Type.h"
#include "../../../include/asb_uci/type/MissionEnvironmentObjectBaseType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EntityID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MissionEnvironmentObjectEntityType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

MissionEnvironmentObjectEntityType::MissionEnvironmentObjectEntityType()
  : entityID_Accessor{boost::make_unique<EntityID_Type>()} {
}

MissionEnvironmentObjectEntityType::~MissionEnvironmentObjectEntityType() = default;

void MissionEnvironmentObjectEntityType::copy(const uci::type::MissionEnvironmentObjectEntityType& accessor) {
  copyImpl(accessor, false);
}

void MissionEnvironmentObjectEntityType::copyImpl(const uci::type::MissionEnvironmentObjectEntityType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    MissionEnvironmentObjectBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const MissionEnvironmentObjectEntityType&>(accessor);
    setEntityID(*(accessorImpl.entityID_Accessor));
  }
}

void MissionEnvironmentObjectEntityType::reset() noexcept {
  MissionEnvironmentObjectBaseType::reset();
  if (entityID_Accessor->getAccessorType() != uci::type::accessorType::entityID_Type) {
    entityID_Accessor = boost::make_unique<EntityID_Type>();
  } else {
    entityID_Accessor->reset();
  }
}

const uci::type::EntityID_Type& MissionEnvironmentObjectEntityType::getEntityID() const {
  return *entityID_Accessor;
}

uci::type::EntityID_Type& MissionEnvironmentObjectEntityType::getEntityID() {
  return *entityID_Accessor;
}

uci::type::MissionEnvironmentObjectEntityType& MissionEnvironmentObjectEntityType::setEntityID(const uci::type::EntityID_Type& accessor) {
  enableEntityID(accessor.getAccessorType());
  if (&accessor != entityID_Accessor.get()) {
    entityID_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

uci::type::EntityID_Type& MissionEnvironmentObjectEntityType::enableEntityID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::entityID_Type : type};
  if ((!entityID_Accessor) || (entityID_Accessor->getAccessorType() != requestedType)) {
    entityID_Accessor = EntityID_Type::create(requestedType);
    if (!entityID_Accessor) {
      throw uci::base::UCIException("Error in enableEntityID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *entityID_Accessor;
}

std::unique_ptr<MissionEnvironmentObjectEntityType> MissionEnvironmentObjectEntityType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::missionEnvironmentObjectEntityType : type};
  return (requestedType == uci::type::accessorType::missionEnvironmentObjectEntityType) ? boost::make_unique<MissionEnvironmentObjectEntityType>() : nullptr;
}

/**  */
namespace MissionEnvironmentObjectEntityType_Names {

constexpr const char* Extern_Type_Name{"MissionEnvironmentObjectEntityType"};
constexpr const char* EntityID_Name{"EntityID"};

} // namespace MissionEnvironmentObjectEntityType_Names

void MissionEnvironmentObjectEntityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::MissionEnvironmentObjectEntityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = MissionEnvironmentObjectEntityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + MissionEnvironmentObjectEntityType_Names::EntityID_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableEntityID(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    }
  }
  MissionEnvironmentObjectBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string MissionEnvironmentObjectEntityType::serialize(const uci::type::MissionEnvironmentObjectEntityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? MissionEnvironmentObjectEntityType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, MissionEnvironmentObjectEntityType_Names::Extern_Type_Name);
  }
  MissionEnvironmentObjectBaseType::serialize(accessor, node, "", false, false, false);
  EntityID_Type::serialize(accessor.getEntityID(), node, MissionEnvironmentObjectEntityType_Names::EntityID_Name);
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

uci::type::MissionEnvironmentObjectEntityType& MissionEnvironmentObjectEntityType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::MissionEnvironmentObjectEntityType>().release());
}

uci::type::MissionEnvironmentObjectEntityType& MissionEnvironmentObjectEntityType::create(const uci::type::MissionEnvironmentObjectEntityType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::MissionEnvironmentObjectEntityType> newAccessor{boost::make_unique<asb_uci::type::MissionEnvironmentObjectEntityType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void MissionEnvironmentObjectEntityType::destroy(uci::type::MissionEnvironmentObjectEntityType& accessor) {
  delete dynamic_cast<asb_uci::type::MissionEnvironmentObjectEntityType*>(&accessor);
}

} // namespace type

} // namespace uci

