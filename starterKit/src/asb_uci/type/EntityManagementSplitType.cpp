/** @file EntityManagementSplitType.cpp
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

#include "../../../include/asb_uci/type/EntityManagementSplitType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/EntityFusionEligibilityEnum.h"
#include "../../../include/asb_uci/type/EntityID_Type.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EntityFusionEligibilityEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EntityID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EntityManagementSplitType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

EntityManagementSplitType::EntityManagementSplitType()
  : splitFromID_Accessor{boost::make_unique<EntityID_Type>()},
    contributorID_Accessor{boost::make_unique<ContributorID>(0, SIZE_MAX)},
    resultingFusionEligibility_Accessor{boost::make_unique<EntityFusionEligibilityEnum>()} {
}

EntityManagementSplitType::~EntityManagementSplitType() = default;

void EntityManagementSplitType::copy(const uci::type::EntityManagementSplitType& accessor) {
  copyImpl(accessor, false);
}

void EntityManagementSplitType::copyImpl(const uci::type::EntityManagementSplitType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const EntityManagementSplitType&>(accessor);
    setSplitFromID(*(accessorImpl.splitFromID_Accessor));
    setContributorID(*(accessorImpl.contributorID_Accessor));
    setResultingFusionEligibility(*(accessorImpl.resultingFusionEligibility_Accessor));
  }
}

void EntityManagementSplitType::reset() noexcept {
  if (splitFromID_Accessor->getAccessorType() != uci::type::accessorType::entityID_Type) {
    splitFromID_Accessor = boost::make_unique<EntityID_Type>();
  } else {
    splitFromID_Accessor->reset();
  }
  contributorID_Accessor->reset();
  resultingFusionEligibility_Accessor->reset();
}

const uci::type::EntityID_Type& EntityManagementSplitType::getSplitFromID() const {
  return *splitFromID_Accessor;
}

uci::type::EntityID_Type& EntityManagementSplitType::getSplitFromID() {
  return *splitFromID_Accessor;
}

uci::type::EntityManagementSplitType& EntityManagementSplitType::setSplitFromID(const uci::type::EntityID_Type& accessor) {
  enableSplitFromID(accessor.getAccessorType());
  if (&accessor != splitFromID_Accessor.get()) {
    splitFromID_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

uci::type::EntityID_Type& EntityManagementSplitType::enableSplitFromID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::entityID_Type : type};
  if ((!splitFromID_Accessor) || (splitFromID_Accessor->getAccessorType() != requestedType)) {
    splitFromID_Accessor = EntityID_Type::create(requestedType);
    if (!splitFromID_Accessor) {
      throw uci::base::UCIException("Error in enableSplitFromID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *splitFromID_Accessor;
}

const uci::type::EntityManagementSplitType::ContributorID& EntityManagementSplitType::getContributorID() const {
  return *contributorID_Accessor;
}

uci::type::EntityManagementSplitType::ContributorID& EntityManagementSplitType::getContributorID() {
  return *contributorID_Accessor;
}

uci::type::EntityManagementSplitType& EntityManagementSplitType::setContributorID(const uci::type::EntityManagementSplitType::ContributorID& accessor) {
  if (&accessor != contributorID_Accessor.get()) {
    contributorID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::EntityFusionEligibilityEnum& EntityManagementSplitType::getResultingFusionEligibility() const {
  return *resultingFusionEligibility_Accessor;
}

uci::type::EntityFusionEligibilityEnum& EntityManagementSplitType::getResultingFusionEligibility() {
  return *resultingFusionEligibility_Accessor;
}

uci::type::EntityManagementSplitType& EntityManagementSplitType::setResultingFusionEligibility(const uci::type::EntityFusionEligibilityEnum& accessor) {
  if (&accessor != resultingFusionEligibility_Accessor.get()) {
    resultingFusionEligibility_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::EntityManagementSplitType& EntityManagementSplitType::setResultingFusionEligibility(uci::type::EntityFusionEligibilityEnum::EnumerationItem value) {
  resultingFusionEligibility_Accessor->setValue(value);
  return *this;
}


std::unique_ptr<EntityManagementSplitType> EntityManagementSplitType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::entityManagementSplitType : type};
  return (requestedType == uci::type::accessorType::entityManagementSplitType) ? boost::make_unique<EntityManagementSplitType>() : nullptr;
}

/**  */
namespace EntityManagementSplitType_Names {

constexpr const char* Extern_Type_Name{"EntityManagementSplitType"};
constexpr const char* SplitFromID_Name{"SplitFromID"};
constexpr const char* ContributorID_Name{"ContributorID"};
constexpr const char* ResultingFusionEligibility_Name{"ResultingFusionEligibility"};

} // namespace EntityManagementSplitType_Names

void EntityManagementSplitType::deserialize(const boost::property_tree::ptree& propTree, uci::type::EntityManagementSplitType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EntityManagementSplitType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + EntityManagementSplitType_Names::SplitFromID_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableSplitFromID(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityManagementSplitType_Names::ContributorID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::EntityManagementSplitType::ContributorID& boundedList = accessor.getContributorID();
        const uci::type::EntityManagementSplitType::ContributorID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1, asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix));
        asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + EntityManagementSplitType_Names::ResultingFusionEligibility_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getResultingFusionEligibility().setValueFromName(*value);
      }
    }
  }
}

std::string EntityManagementSplitType::serialize(const uci::type::EntityManagementSplitType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? EntityManagementSplitType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, EntityManagementSplitType_Names::Extern_Type_Name);
  }
  EntityID_Type::serialize(accessor.getSplitFromID(), node, EntityManagementSplitType_Names::SplitFromID_Name);
  {
    const uci::type::EntityManagementSplitType::ContributorID& boundedList = accessor.getContributorID();
    for (uci::type::EntityManagementSplitType::ContributorID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::EntityID_Type::serialize(boundedList.at(i), node, EntityManagementSplitType_Names::ContributorID_Name);
    }
  }
  EntityFusionEligibilityEnum::serialize(accessor.getResultingFusionEligibility(), node, EntityManagementSplitType_Names::ResultingFusionEligibility_Name, false);
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

uci::type::EntityManagementSplitType& EntityManagementSplitType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::EntityManagementSplitType>().release());
}

uci::type::EntityManagementSplitType& EntityManagementSplitType::create(const uci::type::EntityManagementSplitType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::EntityManagementSplitType> newAccessor{boost::make_unique<asb_uci::type::EntityManagementSplitType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void EntityManagementSplitType::destroy(uci::type::EntityManagementSplitType& accessor) {
  delete dynamic_cast<asb_uci::type::EntityManagementSplitType*>(&accessor);
}

} // namespace type

} // namespace uci

