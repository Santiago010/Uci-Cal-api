/** @file CapabilityCommandBaseType.cpp
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

#include "../../../include/asb_uci/type/CapabilityCommandBaseType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CapabilityCommandRankingType.h"
#include "../../../include/asb_uci/type/CapabilityCommandTemporalConstraintsType.h"
#include "../../../include/asb_uci/type/CapabilityID_Type.h"
#include "../../../include/asb_uci/type/CommandBaseType.h"
#include "../../../include/asb_uci/type/SecurityInformationType.h"
#include "../../../include/asb_uci/type/TraceabilityType.h"
#include "../../../include/asb_uci/util/DerivedTypesCopier.h"
#include "../../../include/asb_uci/util/DerivedTypesCreator.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/DerivedTypesSerializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityCommandBaseType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityCommandRankingType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityCommandTemporalConstraintsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SecurityInformationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TraceabilityType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

CapabilityCommandBaseType::CapabilityCommandBaseType()
  : capabilityID_Accessor{boost::make_unique<CapabilityID_Type>()},
    ranking_Accessor{boost::make_unique<CapabilityCommandRankingType>()} {
}

CapabilityCommandBaseType::~CapabilityCommandBaseType() = default;

void CapabilityCommandBaseType::copy(const uci::type::CapabilityCommandBaseType& accessor) {
  copyImpl(accessor, false);
}

void CapabilityCommandBaseType::copyImpl(const uci::type::CapabilityCommandBaseType& accessor, const bool checkIfDerivation) {
  if (&accessor != this) {
    if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::capabilityCommandBaseType)) {
      CommandBaseType::copyImpl(accessor, false);
      const auto& accessorImpl = dynamic_cast<const CapabilityCommandBaseType&>(accessor);
      setCapabilityID(*(accessorImpl.capabilityID_Accessor));
      setRanking(*(accessorImpl.ranking_Accessor));
      if (accessorImpl.temporalConstraints_Accessor) {
        setTemporalConstraints(*(accessorImpl.temporalConstraints_Accessor));
      } else {
        temporalConstraints_Accessor.reset();
      }
      if (accessorImpl.hasOverrideRejection()) {
        setOverrideRejection(accessorImpl.getOverrideRejection());
      } else {
        clearOverrideRejection();
      }
      if (accessorImpl.traceability_Accessor) {
        setTraceability(*(accessorImpl.traceability_Accessor));
      } else {
        traceability_Accessor.reset();
      }
      if (accessorImpl.classification_Accessor) {
        setClassification(*(accessorImpl.classification_Accessor));
      } else {
        classification_Accessor.reset();
      }
    } else {
      asb_uci::util::DerivedTypesCopier::copy(accessor, *this);
    }
  }
}

void CapabilityCommandBaseType::reset() noexcept {
  CommandBaseType::reset();
  capabilityID_Accessor->reset();
  ranking_Accessor->reset();
  temporalConstraints_Accessor.reset();
  clearOverrideRejection();
  traceability_Accessor.reset();
  classification_Accessor.reset();
}

const uci::type::CapabilityID_Type& CapabilityCommandBaseType::getCapabilityID() const {
  return *capabilityID_Accessor;
}

uci::type::CapabilityID_Type& CapabilityCommandBaseType::getCapabilityID() {
  return *capabilityID_Accessor;
}

uci::type::CapabilityCommandBaseType& CapabilityCommandBaseType::setCapabilityID(const uci::type::CapabilityID_Type& accessor) {
  if (&accessor != capabilityID_Accessor.get()) {
    capabilityID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::CapabilityCommandRankingType& CapabilityCommandBaseType::getRanking() const {
  return *ranking_Accessor;
}

uci::type::CapabilityCommandRankingType& CapabilityCommandBaseType::getRanking() {
  return *ranking_Accessor;
}

uci::type::CapabilityCommandBaseType& CapabilityCommandBaseType::setRanking(const uci::type::CapabilityCommandRankingType& accessor) {
  if (&accessor != ranking_Accessor.get()) {
    ranking_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::CapabilityCommandTemporalConstraintsType& CapabilityCommandBaseType::getTemporalConstraints_() const {
  if (temporalConstraints_Accessor) {
    return *temporalConstraints_Accessor;
  }
  throw uci::base::UCIException("Error in getTemporalConstraints(): An attempt was made to get an optional field that was not enabled, call hasTemporalConstraints() to determine if it is safe to call getTemporalConstraints()");
}

const uci::type::CapabilityCommandTemporalConstraintsType& CapabilityCommandBaseType::getTemporalConstraints() const {
  return getTemporalConstraints_();
}

uci::type::CapabilityCommandTemporalConstraintsType& CapabilityCommandBaseType::getTemporalConstraints() {
  return getTemporalConstraints_();
}

uci::type::CapabilityCommandBaseType& CapabilityCommandBaseType::setTemporalConstraints(const uci::type::CapabilityCommandTemporalConstraintsType& accessor) {
  enableTemporalConstraints();
  if (&accessor != temporalConstraints_Accessor.get()) {
    temporalConstraints_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool CapabilityCommandBaseType::hasTemporalConstraints() const noexcept {
  return static_cast<bool>(temporalConstraints_Accessor);
}

uci::type::CapabilityCommandTemporalConstraintsType& CapabilityCommandBaseType::enableTemporalConstraints(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::capabilityCommandTemporalConstraintsType : type};
  if ((!temporalConstraints_Accessor) || (temporalConstraints_Accessor->getAccessorType() != requestedType)) {
    temporalConstraints_Accessor = CapabilityCommandTemporalConstraintsType::create(requestedType);
    if (!temporalConstraints_Accessor) {
      throw uci::base::UCIException("Error in enableTemporalConstraints(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *temporalConstraints_Accessor;
}

uci::type::CapabilityCommandBaseType& CapabilityCommandBaseType::clearTemporalConstraints() noexcept {
  temporalConstraints_Accessor.reset();
  return *this;
}

xs::Boolean CapabilityCommandBaseType::getOverrideRejection() const {
  if (overrideRejection_Accessor) {
    return *overrideRejection_Accessor;
  }
  throw uci::base::UCIException("Error in getOverrideRejection(): An attempt was made to get an optional field that was not enabled, call hasOverrideRejection() to determine if it is safe to call getOverrideRejection()");
}

uci::type::CapabilityCommandBaseType& CapabilityCommandBaseType::setOverrideRejection(xs::Boolean value) {
  overrideRejection_Accessor = value;
  return *this;
}

bool CapabilityCommandBaseType::hasOverrideRejection() const noexcept {
  return overrideRejection_Accessor.has_value();
}

uci::type::CapabilityCommandBaseType& CapabilityCommandBaseType::clearOverrideRejection() noexcept {
  overrideRejection_Accessor.reset();
  return *this;
}

uci::type::TraceabilityType& CapabilityCommandBaseType::getTraceability_() const {
  if (traceability_Accessor) {
    return *traceability_Accessor;
  }
  throw uci::base::UCIException("Error in getTraceability(): An attempt was made to get an optional field that was not enabled, call hasTraceability() to determine if it is safe to call getTraceability()");
}

const uci::type::TraceabilityType& CapabilityCommandBaseType::getTraceability() const {
  return getTraceability_();
}

uci::type::TraceabilityType& CapabilityCommandBaseType::getTraceability() {
  return getTraceability_();
}

uci::type::CapabilityCommandBaseType& CapabilityCommandBaseType::setTraceability(const uci::type::TraceabilityType& accessor) {
  enableTraceability();
  if (&accessor != traceability_Accessor.get()) {
    traceability_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool CapabilityCommandBaseType::hasTraceability() const noexcept {
  return static_cast<bool>(traceability_Accessor);
}

uci::type::TraceabilityType& CapabilityCommandBaseType::enableTraceability(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::traceabilityType : type};
  if ((!traceability_Accessor) || (traceability_Accessor->getAccessorType() != requestedType)) {
    traceability_Accessor = TraceabilityType::create(requestedType);
    if (!traceability_Accessor) {
      throw uci::base::UCIException("Error in enableTraceability(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *traceability_Accessor;
}

uci::type::CapabilityCommandBaseType& CapabilityCommandBaseType::clearTraceability() noexcept {
  traceability_Accessor.reset();
  return *this;
}

uci::type::SecurityInformationType& CapabilityCommandBaseType::getClassification_() const {
  if (classification_Accessor) {
    return *classification_Accessor;
  }
  throw uci::base::UCIException("Error in getClassification(): An attempt was made to get an optional field that was not enabled, call hasClassification() to determine if it is safe to call getClassification()");
}

const uci::type::SecurityInformationType& CapabilityCommandBaseType::getClassification() const {
  return getClassification_();
}

uci::type::SecurityInformationType& CapabilityCommandBaseType::getClassification() {
  return getClassification_();
}

uci::type::CapabilityCommandBaseType& CapabilityCommandBaseType::setClassification(const uci::type::SecurityInformationType& accessor) {
  enableClassification();
  if (&accessor != classification_Accessor.get()) {
    classification_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool CapabilityCommandBaseType::hasClassification() const noexcept {
  return static_cast<bool>(classification_Accessor);
}

uci::type::SecurityInformationType& CapabilityCommandBaseType::enableClassification(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::securityInformationType : type};
  if ((!classification_Accessor) || (classification_Accessor->getAccessorType() != requestedType)) {
    classification_Accessor = SecurityInformationType::create(requestedType);
    if (!classification_Accessor) {
      throw uci::base::UCIException("Error in enableClassification(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *classification_Accessor;
}

uci::type::CapabilityCommandBaseType& CapabilityCommandBaseType::clearClassification() noexcept {
  classification_Accessor.reset();
  return *this;
}

std::unique_ptr<CapabilityCommandBaseType> CapabilityCommandBaseType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::capabilityCommandBaseType : type};
  return std::unique_ptr<CapabilityCommandBaseType>(dynamic_cast<CapabilityCommandBaseType*>(asb_uci::util::DerivedTypesCreator::create(requestedType)));
}

uci::type::CapabilityCommandBaseType& CapabilityCommandBaseType::setTrackingRange(uci::type::DistanceTypeValue value){
  // trackingRange_Accessor = value;
  return *this;
} 

/**  */
namespace CapabilityCommandBaseType_Names {

constexpr const char* Extern_Type_Name{"CapabilityCommandBaseType"};
constexpr const char* CapabilityID_Name{"CapabilityID"};
constexpr const char* Ranking_Name{"Ranking"};
constexpr const char* TemporalConstraints_Name{"TemporalConstraints"};
constexpr const char* OverrideRejection_Name{"OverrideRejection"};
constexpr const char* Traceability_Name{"Traceability"};
constexpr const char* Classification_Name{"Classification"};

} // namespace CapabilityCommandBaseType_Names

void CapabilityCommandBaseType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CapabilityCommandBaseType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CapabilityCommandBaseType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CapabilityCommandBaseType_Names::CapabilityID_Name) {
      CapabilityID_Type::deserialize(valueType.second, accessor.getCapabilityID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CapabilityCommandBaseType_Names::Ranking_Name) {
      CapabilityCommandRankingType::deserialize(valueType.second, accessor.getRanking(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CapabilityCommandBaseType_Names::TemporalConstraints_Name) {
      CapabilityCommandTemporalConstraintsType::deserialize(valueType.second, accessor.enableTemporalConstraints(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CapabilityCommandBaseType_Names::OverrideRejection_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setOverrideRejection(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + CapabilityCommandBaseType_Names::Traceability_Name) {
      TraceabilityType::deserialize(valueType.second, accessor.enableTraceability(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CapabilityCommandBaseType_Names::Classification_Name) {
      SecurityInformationType::deserialize(valueType.second, accessor.enableClassification(), nodeName, nsPrefix);
    }
  }
  CommandBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string CapabilityCommandBaseType::serialize(const uci::type::CapabilityCommandBaseType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? CapabilityCommandBaseType_Names::Extern_Type_Name : nodeName)};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::capabilityCommandBaseType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      asb_uci::util::SerializationHelpers::addTypeAttribute(node, CapabilityCommandBaseType_Names::Extern_Type_Name);
    }
    CommandBaseType::serialize(accessor, node, "", false, false, false);
    CapabilityID_Type::serialize(accessor.getCapabilityID(), node, CapabilityCommandBaseType_Names::CapabilityID_Name);
    CapabilityCommandRankingType::serialize(accessor.getRanking(), node, CapabilityCommandBaseType_Names::Ranking_Name);
    if (accessor.hasTemporalConstraints()) {
      CapabilityCommandTemporalConstraintsType::serialize(accessor.getTemporalConstraints(), node, CapabilityCommandBaseType_Names::TemporalConstraints_Name);
    }
    if (accessor.hasOverrideRejection()) {
      asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getOverrideRejection(), node, CapabilityCommandBaseType_Names::OverrideRejection_Name);
    }
    if (accessor.hasTraceability()) {
      TraceabilityType::serialize(accessor.getTraceability(), node, CapabilityCommandBaseType_Names::Traceability_Name);
    }
    if (accessor.hasClassification()) {
      SecurityInformationType::serialize(accessor.getClassification(), node, CapabilityCommandBaseType_Names::Classification_Name);
    }
    if (createNode) {
      propTree.add_child(generatedNodeName, node);
    }
  } else {
    asb_uci::util::DerivedTypesSerializer::serialize(accessor, propTree, nodeName, createNode);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace asb_uci

