/** @file DMPI_DamageEstimateType.cpp
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

#include "../../../include/asb_uci/type/DMPI_DamageEstimateType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/DMPI_ID_Type.h"
#include "../../../include/asb_uci/type/DMPI_LocationType.h"
#include "../../../include/asb_uci/type/WeaponeeringType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DMPI_DamageEstimateType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DMPI_ID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DMPI_LocationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DistanceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/WeaponeeringType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

DMPI_DamageEstimateType::DMPI_DamageEstimateType()
  : dMPI_ID_Accessor{boost::make_unique<DMPI_ID_Type>()} {
}

DMPI_DamageEstimateType::~DMPI_DamageEstimateType() = default;

void DMPI_DamageEstimateType::copy(const uci::type::DMPI_DamageEstimateType& accessor) {
  copyImpl(accessor, false);
}

void DMPI_DamageEstimateType::copyImpl(const uci::type::DMPI_DamageEstimateType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const DMPI_DamageEstimateType&>(accessor);
    setDMPI_ID(*(accessorImpl.dMPI_ID_Accessor));
    if (accessorImpl.dMPI_Location_Accessor) {
      setDMPI_Location(*(accessorImpl.dMPI_Location_Accessor));
    } else {
      dMPI_Location_Accessor.reset();
    }
    if (accessorImpl.weaponeering_Accessor) {
      setWeaponeering(*(accessorImpl.weaponeering_Accessor));
    } else {
      weaponeering_Accessor.reset();
    }
    if (accessorImpl.hasEstimatedBlastRadius()) {
      setEstimatedBlastRadius(accessorImpl.getEstimatedBlastRadius());
    } else {
      clearEstimatedBlastRadius();
    }
  }
}

void DMPI_DamageEstimateType::reset() noexcept {
  dMPI_ID_Accessor->reset();
  dMPI_Location_Accessor.reset();
  weaponeering_Accessor.reset();
  clearEstimatedBlastRadius();
}

const uci::type::DMPI_ID_Type& DMPI_DamageEstimateType::getDMPI_ID() const {
  return *dMPI_ID_Accessor;
}

uci::type::DMPI_ID_Type& DMPI_DamageEstimateType::getDMPI_ID() {
  return *dMPI_ID_Accessor;
}

uci::type::DMPI_DamageEstimateType& DMPI_DamageEstimateType::setDMPI_ID(const uci::type::DMPI_ID_Type& accessor) {
  if (&accessor != dMPI_ID_Accessor.get()) {
    dMPI_ID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::DMPI_LocationType& DMPI_DamageEstimateType::getDMPI_Location_() const {
  if (dMPI_Location_Accessor) {
    return *dMPI_Location_Accessor;
  }
  throw uci::base::UCIException("Error in getDMPI_Location(): An attempt was made to get an optional field that was not enabled, call hasDMPI_Location() to determine if it is safe to call getDMPI_Location()");
}

const uci::type::DMPI_LocationType& DMPI_DamageEstimateType::getDMPI_Location() const {
  return getDMPI_Location_();
}

uci::type::DMPI_LocationType& DMPI_DamageEstimateType::getDMPI_Location() {
  return getDMPI_Location_();
}

uci::type::DMPI_DamageEstimateType& DMPI_DamageEstimateType::setDMPI_Location(const uci::type::DMPI_LocationType& accessor) {
  enableDMPI_Location();
  if (&accessor != dMPI_Location_Accessor.get()) {
    dMPI_Location_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool DMPI_DamageEstimateType::hasDMPI_Location() const noexcept {
  return static_cast<bool>(dMPI_Location_Accessor);
}

uci::type::DMPI_LocationType& DMPI_DamageEstimateType::enableDMPI_Location(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::dMPI_LocationType : type};
  if ((!dMPI_Location_Accessor) || (dMPI_Location_Accessor->getAccessorType() != requestedType)) {
    dMPI_Location_Accessor = DMPI_LocationType::create(requestedType);
    if (!dMPI_Location_Accessor) {
      throw uci::base::UCIException("Error in enableDMPI_Location(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *dMPI_Location_Accessor;
}

uci::type::DMPI_DamageEstimateType& DMPI_DamageEstimateType::clearDMPI_Location() noexcept {
  dMPI_Location_Accessor.reset();
  return *this;
}

uci::type::WeaponeeringType& DMPI_DamageEstimateType::getWeaponeering_() const {
  if (weaponeering_Accessor) {
    return *weaponeering_Accessor;
  }
  throw uci::base::UCIException("Error in getWeaponeering(): An attempt was made to get an optional field that was not enabled, call hasWeaponeering() to determine if it is safe to call getWeaponeering()");
}

const uci::type::WeaponeeringType& DMPI_DamageEstimateType::getWeaponeering() const {
  return getWeaponeering_();
}

uci::type::WeaponeeringType& DMPI_DamageEstimateType::getWeaponeering() {
  return getWeaponeering_();
}

uci::type::DMPI_DamageEstimateType& DMPI_DamageEstimateType::setWeaponeering(const uci::type::WeaponeeringType& accessor) {
  enableWeaponeering(accessor.getAccessorType());
  if (&accessor != weaponeering_Accessor.get()) {
    weaponeering_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool DMPI_DamageEstimateType::hasWeaponeering() const noexcept {
  return static_cast<bool>(weaponeering_Accessor);
}

uci::type::WeaponeeringType& DMPI_DamageEstimateType::enableWeaponeering(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::weaponeeringType : type};
  if ((!weaponeering_Accessor) || (weaponeering_Accessor->getAccessorType() != requestedType)) {
    weaponeering_Accessor = WeaponeeringType::create(requestedType);
    if (!weaponeering_Accessor) {
      throw uci::base::UCIException("Error in enableWeaponeering(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *weaponeering_Accessor;
}

uci::type::DMPI_DamageEstimateType& DMPI_DamageEstimateType::clearWeaponeering() noexcept {
  weaponeering_Accessor.reset();
  return *this;
}

uci::type::DistanceTypeValue DMPI_DamageEstimateType::getEstimatedBlastRadius() const {
  if (estimatedBlastRadius_Accessor) {
    return *estimatedBlastRadius_Accessor;
  }
  throw uci::base::UCIException("Error in getEstimatedBlastRadius(): An attempt was made to get an optional field that was not enabled, call hasEstimatedBlastRadius() to determine if it is safe to call getEstimatedBlastRadius()");
}

uci::type::DMPI_DamageEstimateType& DMPI_DamageEstimateType::setEstimatedBlastRadius(uci::type::DistanceTypeValue value) {
  estimatedBlastRadius_Accessor = value;
  return *this;
}

bool DMPI_DamageEstimateType::hasEstimatedBlastRadius() const noexcept {
  return estimatedBlastRadius_Accessor.has_value();
}

uci::type::DMPI_DamageEstimateType& DMPI_DamageEstimateType::clearEstimatedBlastRadius() noexcept {
  estimatedBlastRadius_Accessor.reset();
  return *this;
}

std::unique_ptr<DMPI_DamageEstimateType> DMPI_DamageEstimateType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::dMPI_DamageEstimateType : type};
  return (requestedType == uci::type::accessorType::dMPI_DamageEstimateType) ? boost::make_unique<DMPI_DamageEstimateType>() : nullptr;
}

/**  */
namespace DMPI_DamageEstimateType_Names {

constexpr const char* Extern_Type_Name{"DMPI_DamageEstimateType"};
constexpr const char* DMPI_ID_Name{"DMPI_ID"};
constexpr const char* DMPI_Location_Name{"DMPI_Location"};
constexpr const char* Weaponeering_Name{"Weaponeering"};
constexpr const char* EstimatedBlastRadius_Name{"EstimatedBlastRadius"};

} // namespace DMPI_DamageEstimateType_Names

void DMPI_DamageEstimateType::deserialize(const boost::property_tree::ptree& propTree, uci::type::DMPI_DamageEstimateType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = DMPI_DamageEstimateType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + DMPI_DamageEstimateType_Names::DMPI_ID_Name) {
      DMPI_ID_Type::deserialize(valueType.second, accessor.getDMPI_ID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DMPI_DamageEstimateType_Names::DMPI_Location_Name) {
      DMPI_LocationType::deserialize(valueType.second, accessor.enableDMPI_Location(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DMPI_DamageEstimateType_Names::Weaponeering_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableWeaponeering(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DMPI_DamageEstimateType_Names::EstimatedBlastRadius_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEstimatedBlastRadius(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    }
  }
}

std::string DMPI_DamageEstimateType::serialize(const uci::type::DMPI_DamageEstimateType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? DMPI_DamageEstimateType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, DMPI_DamageEstimateType_Names::Extern_Type_Name);
  }
  DMPI_ID_Type::serialize(accessor.getDMPI_ID(), node, DMPI_DamageEstimateType_Names::DMPI_ID_Name);
  if (accessor.hasDMPI_Location()) {
    DMPI_LocationType::serialize(accessor.getDMPI_Location(), node, DMPI_DamageEstimateType_Names::DMPI_Location_Name);
  }
  if (accessor.hasWeaponeering()) {
    WeaponeeringType::serialize(accessor.getWeaponeering(), node, DMPI_DamageEstimateType_Names::Weaponeering_Name);
  }
  if (accessor.hasEstimatedBlastRadius()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getEstimatedBlastRadius(), node, DMPI_DamageEstimateType_Names::EstimatedBlastRadius_Name);
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

uci::type::DMPI_DamageEstimateType& DMPI_DamageEstimateType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::DMPI_DamageEstimateType>().release());
}

uci::type::DMPI_DamageEstimateType& DMPI_DamageEstimateType::create(const uci::type::DMPI_DamageEstimateType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::DMPI_DamageEstimateType> newAccessor{boost::make_unique<asb_uci::type::DMPI_DamageEstimateType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void DMPI_DamageEstimateType::destroy(uci::type::DMPI_DamageEstimateType& accessor) {
  delete dynamic_cast<asb_uci::type::DMPI_DamageEstimateType*>(&accessor);
}

} // namespace type

} // namespace uci

