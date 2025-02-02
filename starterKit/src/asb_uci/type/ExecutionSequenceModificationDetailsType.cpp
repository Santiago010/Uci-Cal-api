/** @file ExecutionSequenceModificationDetailsType.cpp
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

#include "../../../include/asb_uci/type/ExecutionSequenceModificationDetailsType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ExecutionSequenceInsertionType.h"
#include "../../../include/asb_uci/type/ExecutionSequenceTrimType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ExecutionSequenceInsertionType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ExecutionSequenceModificationDetailsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ExecutionSequenceTrimType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ExecutionSequenceModificationDetailsType::ExecutionSequenceModificationDetailsType() = default;

ExecutionSequenceModificationDetailsType::~ExecutionSequenceModificationDetailsType() = default;

void ExecutionSequenceModificationDetailsType::copy(const uci::type::ExecutionSequenceModificationDetailsType& accessor) {
  copyImpl(accessor, false);
}

void ExecutionSequenceModificationDetailsType::copyImpl(const uci::type::ExecutionSequenceModificationDetailsType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const ExecutionSequenceModificationDetailsType&>(accessor);
    if (accessorImpl.insertExecutionSequence_Accessor) {
      setInsertExecutionSequence(*(accessorImpl.insertExecutionSequence_Accessor));
    } else {
      insertExecutionSequence_Accessor.reset();
    }
    if (accessorImpl.trimExecutionSequence_Accessor) {
      setTrimExecutionSequence(*(accessorImpl.trimExecutionSequence_Accessor));
    } else {
      trimExecutionSequence_Accessor.reset();
    }
  }
}

void ExecutionSequenceModificationDetailsType::reset() noexcept {
  insertExecutionSequence_Accessor.reset();
  trimExecutionSequence_Accessor.reset();
}

uci::type::ExecutionSequenceInsertionType& ExecutionSequenceModificationDetailsType::getInsertExecutionSequence_() const {
  if (insertExecutionSequence_Accessor) {
    return *insertExecutionSequence_Accessor;
  }
  throw uci::base::UCIException("Error in getInsertExecutionSequence(): An attempt was made to get an optional field that was not enabled, call hasInsertExecutionSequence() to determine if it is safe to call getInsertExecutionSequence()");
}

const uci::type::ExecutionSequenceInsertionType& ExecutionSequenceModificationDetailsType::getInsertExecutionSequence() const {
  return getInsertExecutionSequence_();
}

uci::type::ExecutionSequenceInsertionType& ExecutionSequenceModificationDetailsType::getInsertExecutionSequence() {
  return getInsertExecutionSequence_();
}

uci::type::ExecutionSequenceModificationDetailsType& ExecutionSequenceModificationDetailsType::setInsertExecutionSequence(const uci::type::ExecutionSequenceInsertionType& accessor) {
  enableInsertExecutionSequence();
  if (&accessor != insertExecutionSequence_Accessor.get()) {
    insertExecutionSequence_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool ExecutionSequenceModificationDetailsType::hasInsertExecutionSequence() const noexcept {
  return static_cast<bool>(insertExecutionSequence_Accessor);
}

uci::type::ExecutionSequenceInsertionType& ExecutionSequenceModificationDetailsType::enableInsertExecutionSequence(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::executionSequenceInsertionType : type};
  if ((!insertExecutionSequence_Accessor) || (insertExecutionSequence_Accessor->getAccessorType() != requestedType)) {
    insertExecutionSequence_Accessor = ExecutionSequenceInsertionType::create(requestedType);
    if (!insertExecutionSequence_Accessor) {
      throw uci::base::UCIException("Error in enableInsertExecutionSequence(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *insertExecutionSequence_Accessor;
}

uci::type::ExecutionSequenceModificationDetailsType& ExecutionSequenceModificationDetailsType::clearInsertExecutionSequence() noexcept {
  insertExecutionSequence_Accessor.reset();
  return *this;
}

uci::type::ExecutionSequenceTrimType& ExecutionSequenceModificationDetailsType::getTrimExecutionSequence_() const {
  if (trimExecutionSequence_Accessor) {
    return *trimExecutionSequence_Accessor;
  }
  throw uci::base::UCIException("Error in getTrimExecutionSequence(): An attempt was made to get an optional field that was not enabled, call hasTrimExecutionSequence() to determine if it is safe to call getTrimExecutionSequence()");
}

const uci::type::ExecutionSequenceTrimType& ExecutionSequenceModificationDetailsType::getTrimExecutionSequence() const {
  return getTrimExecutionSequence_();
}

uci::type::ExecutionSequenceTrimType& ExecutionSequenceModificationDetailsType::getTrimExecutionSequence() {
  return getTrimExecutionSequence_();
}

uci::type::ExecutionSequenceModificationDetailsType& ExecutionSequenceModificationDetailsType::setTrimExecutionSequence(const uci::type::ExecutionSequenceTrimType& accessor) {
  enableTrimExecutionSequence();
  if (&accessor != trimExecutionSequence_Accessor.get()) {
    trimExecutionSequence_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool ExecutionSequenceModificationDetailsType::hasTrimExecutionSequence() const noexcept {
  return static_cast<bool>(trimExecutionSequence_Accessor);
}

uci::type::ExecutionSequenceTrimType& ExecutionSequenceModificationDetailsType::enableTrimExecutionSequence(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::executionSequenceTrimType : type};
  if ((!trimExecutionSequence_Accessor) || (trimExecutionSequence_Accessor->getAccessorType() != requestedType)) {
    trimExecutionSequence_Accessor = ExecutionSequenceTrimType::create(requestedType);
    if (!trimExecutionSequence_Accessor) {
      throw uci::base::UCIException("Error in enableTrimExecutionSequence(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *trimExecutionSequence_Accessor;
}

uci::type::ExecutionSequenceModificationDetailsType& ExecutionSequenceModificationDetailsType::clearTrimExecutionSequence() noexcept {
  trimExecutionSequence_Accessor.reset();
  return *this;
}

std::unique_ptr<ExecutionSequenceModificationDetailsType> ExecutionSequenceModificationDetailsType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::executionSequenceModificationDetailsType : type};
  return (requestedType == uci::type::accessorType::executionSequenceModificationDetailsType) ? boost::make_unique<ExecutionSequenceModificationDetailsType>() : nullptr;
}

/**  */
namespace ExecutionSequenceModificationDetailsType_Names {

constexpr const char* Extern_Type_Name{"ExecutionSequenceModificationDetailsType"};
constexpr const char* InsertExecutionSequence_Name{"InsertExecutionSequence"};
constexpr const char* TrimExecutionSequence_Name{"TrimExecutionSequence"};

} // namespace ExecutionSequenceModificationDetailsType_Names

void ExecutionSequenceModificationDetailsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ExecutionSequenceModificationDetailsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ExecutionSequenceModificationDetailsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ExecutionSequenceModificationDetailsType_Names::InsertExecutionSequence_Name) {
      ExecutionSequenceInsertionType::deserialize(valueType.second, accessor.enableInsertExecutionSequence(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ExecutionSequenceModificationDetailsType_Names::TrimExecutionSequence_Name) {
      ExecutionSequenceTrimType::deserialize(valueType.second, accessor.enableTrimExecutionSequence(), nodeName, nsPrefix);
    }
  }
}

std::string ExecutionSequenceModificationDetailsType::serialize(const uci::type::ExecutionSequenceModificationDetailsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ExecutionSequenceModificationDetailsType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ExecutionSequenceModificationDetailsType_Names::Extern_Type_Name);
  }
  if (accessor.hasInsertExecutionSequence()) {
    ExecutionSequenceInsertionType::serialize(accessor.getInsertExecutionSequence(), node, ExecutionSequenceModificationDetailsType_Names::InsertExecutionSequence_Name);
  }
  if (accessor.hasTrimExecutionSequence()) {
    ExecutionSequenceTrimType::serialize(accessor.getTrimExecutionSequence(), node, ExecutionSequenceModificationDetailsType_Names::TrimExecutionSequence_Name);
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

uci::type::ExecutionSequenceModificationDetailsType& ExecutionSequenceModificationDetailsType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ExecutionSequenceModificationDetailsType>().release());
}

uci::type::ExecutionSequenceModificationDetailsType& ExecutionSequenceModificationDetailsType::create(const uci::type::ExecutionSequenceModificationDetailsType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ExecutionSequenceModificationDetailsType> newAccessor{boost::make_unique<asb_uci::type::ExecutionSequenceModificationDetailsType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ExecutionSequenceModificationDetailsType::destroy(uci::type::ExecutionSequenceModificationDetailsType& accessor) {
  delete dynamic_cast<asb_uci::type::ExecutionSequenceModificationDetailsType*>(&accessor);
}

} // namespace type

} // namespace uci

