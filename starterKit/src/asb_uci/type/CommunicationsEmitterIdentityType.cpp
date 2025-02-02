/** @file CommunicationsEmitterIdentityType.cpp
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

#include "../../../include/asb_uci/type/CommunicationsEmitterIdentityType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CommModeEnum.h"
#include "../../../include/asb_uci/type/ForeignKeyType.h"
#include "../../../include/asb_uci/type/NotationType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommModeEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommunicationsEmitterIdentityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ForeignKeyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/NotationType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

CommunicationsEmitterIdentityType::CommunicationsEmitterIdentityType() = default;

CommunicationsEmitterIdentityType::~CommunicationsEmitterIdentityType() = default;

void CommunicationsEmitterIdentityType::copy(const uci::type::CommunicationsEmitterIdentityType& accessor) {
  copyImpl(accessor, false);
}

void CommunicationsEmitterIdentityType::copyImpl(const uci::type::CommunicationsEmitterIdentityType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const CommunicationsEmitterIdentityType&>(accessor);
    if (accessorImpl.cENOT_Identifier_Accessor) {
      setCENOT_Identifier(*(accessorImpl.cENOT_Identifier_Accessor));
    } else {
      cENOT_Identifier_Accessor.reset();
    }
    if (accessorImpl.commMode_Accessor) {
      setCommMode(*(accessorImpl.commMode_Accessor));
    } else {
      commMode_Accessor.reset();
    }
    if (accessorImpl.emitterIndex_Accessor) {
      setEmitterIndex(*(accessorImpl.emitterIndex_Accessor));
    } else {
      emitterIndex_Accessor.reset();
    }
  }
}

void CommunicationsEmitterIdentityType::reset() noexcept {
  cENOT_Identifier_Accessor.reset();
  commMode_Accessor.reset();
  emitterIndex_Accessor.reset();
}

uci::type::NotationType& CommunicationsEmitterIdentityType::getCENOT_Identifier_() const {
  if (cENOT_Identifier_Accessor) {
    return *cENOT_Identifier_Accessor;
  }
  throw uci::base::UCIException("Error in getCENOT_Identifier(): An attempt was made to get an optional field that was not enabled, call hasCENOT_Identifier() to determine if it is safe to call getCENOT_Identifier()");
}

const uci::type::NotationType& CommunicationsEmitterIdentityType::getCENOT_Identifier() const {
  return getCENOT_Identifier_();
}

uci::type::NotationType& CommunicationsEmitterIdentityType::getCENOT_Identifier() {
  return getCENOT_Identifier_();
}

uci::type::CommunicationsEmitterIdentityType& CommunicationsEmitterIdentityType::setCENOT_Identifier(const uci::type::NotationType& value) {
  return setCENOT_Identifier(value.c_str());
}

uci::type::CommunicationsEmitterIdentityType& CommunicationsEmitterIdentityType::setCENOT_Identifier(const std::string& value) {
  return setCENOT_Identifier(value.c_str());
}

uci::type::CommunicationsEmitterIdentityType& CommunicationsEmitterIdentityType::setCENOT_Identifier(const char* value) {
  enableCENOT_Identifier().setStringValue(value);
  return *this;
}

bool CommunicationsEmitterIdentityType::hasCENOT_Identifier() const noexcept {
  return static_cast<bool>(cENOT_Identifier_Accessor);
}

uci::type::NotationType& CommunicationsEmitterIdentityType::enableCENOT_Identifier(uci::base::accessorType::AccessorType type) {
  if (!cENOT_Identifier_Accessor) {
    cENOT_Identifier_Accessor = NotationType::create(type);
  }
  return *cENOT_Identifier_Accessor;
}

uci::type::CommunicationsEmitterIdentityType& CommunicationsEmitterIdentityType::clearCENOT_Identifier() noexcept {
  cENOT_Identifier_Accessor.reset();
  return *this;
}

uci::type::CommModeEnum& CommunicationsEmitterIdentityType::getCommMode_() const {
  if (commMode_Accessor) {
    return *commMode_Accessor;
  }
  throw uci::base::UCIException("Error in getCommMode(): An attempt was made to get an optional field that was not enabled, call hasCommMode() to determine if it is safe to call getCommMode()");
}

const uci::type::CommModeEnum& CommunicationsEmitterIdentityType::getCommMode() const {
  return getCommMode_();
}

uci::type::CommModeEnum& CommunicationsEmitterIdentityType::getCommMode() {
  return getCommMode_();
}

uci::type::CommunicationsEmitterIdentityType& CommunicationsEmitterIdentityType::setCommMode(const uci::type::CommModeEnum& accessor) {
  enableCommMode();
  if (&accessor != commMode_Accessor.get()) {
    commMode_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::CommunicationsEmitterIdentityType& CommunicationsEmitterIdentityType::setCommMode(const uci::type::CommModeEnum::EnumerationItem value) {
  enableCommMode().setValue(value);
  return *this;
}

bool CommunicationsEmitterIdentityType::hasCommMode() const noexcept {
  return static_cast<bool>(commMode_Accessor);
}

uci::type::CommModeEnum& CommunicationsEmitterIdentityType::enableCommMode(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commModeEnum : type};
  if ((!commMode_Accessor) || (commMode_Accessor->getAccessorType() != requestedType)) {
    commMode_Accessor = CommModeEnum::create(requestedType);
    if (!commMode_Accessor) {
      throw uci::base::UCIException("Error in enableCommMode(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *commMode_Accessor;
}

uci::type::CommunicationsEmitterIdentityType& CommunicationsEmitterIdentityType::clearCommMode() noexcept {
  commMode_Accessor.reset();
  return *this;
}

uci::type::ForeignKeyType& CommunicationsEmitterIdentityType::getEmitterIndex_() const {
  if (emitterIndex_Accessor) {
    return *emitterIndex_Accessor;
  }
  throw uci::base::UCIException("Error in getEmitterIndex(): An attempt was made to get an optional field that was not enabled, call hasEmitterIndex() to determine if it is safe to call getEmitterIndex()");
}

const uci::type::ForeignKeyType& CommunicationsEmitterIdentityType::getEmitterIndex() const {
  return getEmitterIndex_();
}

uci::type::ForeignKeyType& CommunicationsEmitterIdentityType::getEmitterIndex() {
  return getEmitterIndex_();
}

uci::type::CommunicationsEmitterIdentityType& CommunicationsEmitterIdentityType::setEmitterIndex(const uci::type::ForeignKeyType& accessor) {
  enableEmitterIndex(accessor.getAccessorType());
  if (&accessor != emitterIndex_Accessor.get()) {
    emitterIndex_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool CommunicationsEmitterIdentityType::hasEmitterIndex() const noexcept {
  return static_cast<bool>(emitterIndex_Accessor);
}

uci::type::ForeignKeyType& CommunicationsEmitterIdentityType::enableEmitterIndex(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::foreignKeyType : type};
  if ((!emitterIndex_Accessor) || (emitterIndex_Accessor->getAccessorType() != requestedType)) {
    emitterIndex_Accessor = ForeignKeyType::create(requestedType);
    if (!emitterIndex_Accessor) {
      throw uci::base::UCIException("Error in enableEmitterIndex(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *emitterIndex_Accessor;
}

uci::type::CommunicationsEmitterIdentityType& CommunicationsEmitterIdentityType::clearEmitterIndex() noexcept {
  emitterIndex_Accessor.reset();
  return *this;
}

std::unique_ptr<CommunicationsEmitterIdentityType> CommunicationsEmitterIdentityType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::communicationsEmitterIdentityType : type};
  return (requestedType == uci::type::accessorType::communicationsEmitterIdentityType) ? boost::make_unique<CommunicationsEmitterIdentityType>() : nullptr;
}

/**  */
namespace CommunicationsEmitterIdentityType_Names {

constexpr const char* Extern_Type_Name{"CommunicationsEmitterIdentityType"};
constexpr const char* CENOT_Identifier_Name{"CENOT_Identifier"};
constexpr const char* CommMode_Name{"CommMode"};
constexpr const char* EmitterIndex_Name{"EmitterIndex"};

} // namespace CommunicationsEmitterIdentityType_Names

void CommunicationsEmitterIdentityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CommunicationsEmitterIdentityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CommunicationsEmitterIdentityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CommunicationsEmitterIdentityType_Names::CENOT_Identifier_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setCENOT_Identifier(*value);
      }
    } else if (valueType.first == nsPrefix + CommunicationsEmitterIdentityType_Names::CommMode_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableCommMode().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + CommunicationsEmitterIdentityType_Names::EmitterIndex_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableEmitterIndex(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    }
  }
}

std::string CommunicationsEmitterIdentityType::serialize(const uci::type::CommunicationsEmitterIdentityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? CommunicationsEmitterIdentityType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, CommunicationsEmitterIdentityType_Names::Extern_Type_Name);
  }
  if (accessor.hasCENOT_Identifier()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getCENOT_Identifier(), node, CommunicationsEmitterIdentityType_Names::CENOT_Identifier_Name);
  }
  if (accessor.hasCommMode()) {
    CommModeEnum::serialize(accessor.getCommMode(), node, CommunicationsEmitterIdentityType_Names::CommMode_Name, false);
  }
  if (accessor.hasEmitterIndex()) {
    ForeignKeyType::serialize(accessor.getEmitterIndex(), node, CommunicationsEmitterIdentityType_Names::EmitterIndex_Name);
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

uci::type::CommunicationsEmitterIdentityType& CommunicationsEmitterIdentityType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::CommunicationsEmitterIdentityType>().release());
}

uci::type::CommunicationsEmitterIdentityType& CommunicationsEmitterIdentityType::create(const uci::type::CommunicationsEmitterIdentityType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::CommunicationsEmitterIdentityType> newAccessor{boost::make_unique<asb_uci::type::CommunicationsEmitterIdentityType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void CommunicationsEmitterIdentityType::destroy(uci::type::CommunicationsEmitterIdentityType& accessor) {
  delete dynamic_cast<asb_uci::type::CommunicationsEmitterIdentityType*>(&accessor);
}

} // namespace type

} // namespace uci

