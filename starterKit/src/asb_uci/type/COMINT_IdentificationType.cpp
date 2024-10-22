/** @file COMINT_IdentificationType.cpp
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

#include "../../../include/asb_uci/type/COMINT_IdentificationType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/EntityID_Type.h"
#include "../../../include/asb_uci/type/IdentityConfidenceType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/COMINT_IdentificationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EntityID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IdentityConfidenceType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

COMINT_IdentificationType::COMINT_IdentificationType()
  : entityID_Accessor{boost::make_unique<EntityID_Type>()} {
}

COMINT_IdentificationType::~COMINT_IdentificationType() = default;

void COMINT_IdentificationType::copy(const uci::type::COMINT_IdentificationType& accessor) {
  copyImpl(accessor, false);
}

void COMINT_IdentificationType::copyImpl(const uci::type::COMINT_IdentificationType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const COMINT_IdentificationType&>(accessor);
    setEntityID(*(accessorImpl.entityID_Accessor));
    if (accessorImpl.identificationResults_Accessor) {
      setIdentificationResults(*(accessorImpl.identificationResults_Accessor));
    } else {
      identificationResults_Accessor.reset();
    }
  }
}

void COMINT_IdentificationType::reset() noexcept {
  if (entityID_Accessor->getAccessorType() != uci::type::accessorType::entityID_Type) {
    entityID_Accessor = boost::make_unique<EntityID_Type>();
  } else {
    entityID_Accessor->reset();
  }
  identificationResults_Accessor.reset();
}

const uci::type::EntityID_Type& COMINT_IdentificationType::getEntityID() const {
  return *entityID_Accessor;
}

uci::type::EntityID_Type& COMINT_IdentificationType::getEntityID() {
  return *entityID_Accessor;
}

uci::type::COMINT_IdentificationType& COMINT_IdentificationType::setEntityID(const uci::type::EntityID_Type& accessor) {
  enableEntityID(accessor.getAccessorType());
  if (&accessor != entityID_Accessor.get()) {
    entityID_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

uci::type::EntityID_Type& COMINT_IdentificationType::enableEntityID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::entityID_Type : type};
  if ((!entityID_Accessor) || (entityID_Accessor->getAccessorType() != requestedType)) {
    entityID_Accessor = EntityID_Type::create(requestedType);
    if (!entityID_Accessor) {
      throw uci::base::UCIException("Error in enableEntityID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *entityID_Accessor;
}

uci::type::IdentityConfidenceType& COMINT_IdentificationType::getIdentificationResults_() const {
  if (identificationResults_Accessor) {
    return *identificationResults_Accessor;
  }
  throw uci::base::UCIException("Error in getIdentificationResults(): An attempt was made to get an optional field that was not enabled, call hasIdentificationResults() to determine if it is safe to call getIdentificationResults()");
}

const uci::type::IdentityConfidenceType& COMINT_IdentificationType::getIdentificationResults() const {
  return getIdentificationResults_();
}

uci::type::IdentityConfidenceType& COMINT_IdentificationType::getIdentificationResults() {
  return getIdentificationResults_();
}

uci::type::COMINT_IdentificationType& COMINT_IdentificationType::setIdentificationResults(const uci::type::IdentityConfidenceType& accessor) {
  enableIdentificationResults(accessor.getAccessorType());
  if (&accessor != identificationResults_Accessor.get()) {
    identificationResults_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool COMINT_IdentificationType::hasIdentificationResults() const noexcept {
  return static_cast<bool>(identificationResults_Accessor);
}

uci::type::IdentityConfidenceType& COMINT_IdentificationType::enableIdentificationResults(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::identityConfidenceType : type};
  if ((!identificationResults_Accessor) || (identificationResults_Accessor->getAccessorType() != requestedType)) {
    identificationResults_Accessor = IdentityConfidenceType::create(requestedType);
    if (!identificationResults_Accessor) {
      throw uci::base::UCIException("Error in enableIdentificationResults(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *identificationResults_Accessor;
}

uci::type::COMINT_IdentificationType& COMINT_IdentificationType::clearIdentificationResults() noexcept {
  identificationResults_Accessor.reset();
  return *this;
}

std::unique_ptr<COMINT_IdentificationType> COMINT_IdentificationType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::cOMINT_IdentificationType : type};
  return (requestedType == uci::type::accessorType::cOMINT_IdentificationType) ? boost::make_unique<COMINT_IdentificationType>() : nullptr;
}

/**  */
namespace COMINT_IdentificationType_Names {

constexpr const char* Extern_Type_Name{"COMINT_IdentificationType"};
constexpr const char* EntityID_Name{"EntityID"};
constexpr const char* IdentificationResults_Name{"IdentificationResults"};

} // namespace COMINT_IdentificationType_Names

void COMINT_IdentificationType::deserialize(const boost::property_tree::ptree& propTree, uci::type::COMINT_IdentificationType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = COMINT_IdentificationType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + COMINT_IdentificationType_Names::EntityID_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableEntityID(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + COMINT_IdentificationType_Names::IdentificationResults_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableIdentificationResults(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    }
  }
}

std::string COMINT_IdentificationType::serialize(const uci::type::COMINT_IdentificationType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? COMINT_IdentificationType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, COMINT_IdentificationType_Names::Extern_Type_Name);
  }
  EntityID_Type::serialize(accessor.getEntityID(), node, COMINT_IdentificationType_Names::EntityID_Name);
  if (accessor.hasIdentificationResults()) {
    IdentityConfidenceType::serialize(accessor.getIdentificationResults(), node, COMINT_IdentificationType_Names::IdentificationResults_Name);
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

uci::type::COMINT_IdentificationType& COMINT_IdentificationType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::COMINT_IdentificationType>().release());
}

uci::type::COMINT_IdentificationType& COMINT_IdentificationType::create(const uci::type::COMINT_IdentificationType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::COMINT_IdentificationType> newAccessor{boost::make_unique<asb_uci::type::COMINT_IdentificationType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void COMINT_IdentificationType::destroy(uci::type::COMINT_IdentificationType& accessor) {
  delete dynamic_cast<asb_uci::type::COMINT_IdentificationType*>(&accessor);
}

} // namespace type

} // namespace uci

