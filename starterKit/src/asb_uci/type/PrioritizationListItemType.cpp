/** @file PrioritizationListItemType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:14 PM
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

#include "../../../include/asb_uci/type/PrioritizationListItemType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/IdentityKindInstanceType.h"
#include "../../../include/asb_uci/type/ObjectCorrelationType.h"
#include "../../../include/asb_uci/type/PrioritizationType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IdentityKindInstanceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ObjectCorrelationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PrioritizationListItemType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PrioritizationType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PrioritizationListItemType::PrioritizationListItemType()
  : subject_Accessor{boost::make_unique<IdentityKindInstanceType>()},
    priority_Accessor{boost::make_unique<Priority>(1, SIZE_MAX)} {
}

PrioritizationListItemType::~PrioritizationListItemType() = default;

void PrioritizationListItemType::copy(const uci::type::PrioritizationListItemType& accessor) {
  copyImpl(accessor, false);
}

void PrioritizationListItemType::copyImpl(const uci::type::PrioritizationListItemType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PrioritizationListItemType&>(accessor);
    setSubject(*(accessorImpl.subject_Accessor));
    setPriority(*(accessorImpl.priority_Accessor));
    if (accessorImpl.objectCorrelation_Accessor) {
      setObjectCorrelation(*(accessorImpl.objectCorrelation_Accessor));
    } else {
      objectCorrelation_Accessor.reset();
    }
  }
}

void PrioritizationListItemType::reset() noexcept {
  subject_Accessor->reset();
  priority_Accessor->reset();
  objectCorrelation_Accessor.reset();
}

const uci::type::IdentityKindInstanceType& PrioritizationListItemType::getSubject() const {
  return *subject_Accessor;
}

uci::type::IdentityKindInstanceType& PrioritizationListItemType::getSubject() {
  return *subject_Accessor;
}

uci::type::PrioritizationListItemType& PrioritizationListItemType::setSubject(const uci::type::IdentityKindInstanceType& accessor) {
  if (&accessor != subject_Accessor.get()) {
    subject_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PrioritizationListItemType::Priority& PrioritizationListItemType::getPriority() const {
  return *priority_Accessor;
}

uci::type::PrioritizationListItemType::Priority& PrioritizationListItemType::getPriority() {
  return *priority_Accessor;
}

uci::type::PrioritizationListItemType& PrioritizationListItemType::setPriority(const uci::type::PrioritizationListItemType::Priority& accessor) {
  if (&accessor != priority_Accessor.get()) {
    priority_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ObjectCorrelationType& PrioritizationListItemType::getObjectCorrelation_() const {
  if (objectCorrelation_Accessor) {
    return *objectCorrelation_Accessor;
  }
  throw uci::base::UCIException("Error in getObjectCorrelation(): An attempt was made to get an optional field that was not enabled, call hasObjectCorrelation() to determine if it is safe to call getObjectCorrelation()");
}

const uci::type::ObjectCorrelationType& PrioritizationListItemType::getObjectCorrelation() const {
  return getObjectCorrelation_();
}

uci::type::ObjectCorrelationType& PrioritizationListItemType::getObjectCorrelation() {
  return getObjectCorrelation_();
}

uci::type::PrioritizationListItemType& PrioritizationListItemType::setObjectCorrelation(const uci::type::ObjectCorrelationType& accessor) {
  enableObjectCorrelation();
  if (&accessor != objectCorrelation_Accessor.get()) {
    objectCorrelation_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PrioritizationListItemType::hasObjectCorrelation() const noexcept {
  return static_cast<bool>(objectCorrelation_Accessor);
}

uci::type::ObjectCorrelationType& PrioritizationListItemType::enableObjectCorrelation(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::objectCorrelationType : type};
  if ((!objectCorrelation_Accessor) || (objectCorrelation_Accessor->getAccessorType() != requestedType)) {
    objectCorrelation_Accessor = ObjectCorrelationType::create(requestedType);
    if (!objectCorrelation_Accessor) {
      throw uci::base::UCIException("Error in enableObjectCorrelation(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *objectCorrelation_Accessor;
}

uci::type::PrioritizationListItemType& PrioritizationListItemType::clearObjectCorrelation() noexcept {
  objectCorrelation_Accessor.reset();
  return *this;
}

std::unique_ptr<PrioritizationListItemType> PrioritizationListItemType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::prioritizationListItemType : type};
  return (requestedType == uci::type::accessorType::prioritizationListItemType) ? boost::make_unique<PrioritizationListItemType>() : nullptr;
}

/**  */
namespace PrioritizationListItemType_Names {

constexpr const char* Extern_Type_Name{"PrioritizationListItemType"};
constexpr const char* Subject_Name{"Subject"};
constexpr const char* Priority_Name{"Priority"};
constexpr const char* ObjectCorrelation_Name{"ObjectCorrelation"};

} // namespace PrioritizationListItemType_Names

void PrioritizationListItemType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PrioritizationListItemType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PrioritizationListItemType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PrioritizationListItemType_Names::Subject_Name) {
      IdentityKindInstanceType::deserialize(valueType.second, accessor.getSubject(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PrioritizationListItemType_Names::Priority_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PrioritizationListItemType::Priority& boundedList = accessor.getPriority();
        const uci::type::PrioritizationListItemType::Priority::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::PrioritizationType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + PrioritizationListItemType_Names::ObjectCorrelation_Name) {
      ObjectCorrelationType::deserialize(valueType.second, accessor.enableObjectCorrelation(), nodeName, nsPrefix);
    }
  }
}

std::string PrioritizationListItemType::serialize(const uci::type::PrioritizationListItemType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PrioritizationListItemType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PrioritizationListItemType_Names::Extern_Type_Name);
  }
  IdentityKindInstanceType::serialize(accessor.getSubject(), node, PrioritizationListItemType_Names::Subject_Name);
  {
    const uci::type::PrioritizationListItemType::Priority& boundedList = accessor.getPriority();
    for (uci::type::PrioritizationListItemType::Priority::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::PrioritizationType::serialize(boundedList.at(i), node, PrioritizationListItemType_Names::Priority_Name);
    }
  }
  if (accessor.hasObjectCorrelation()) {
    ObjectCorrelationType::serialize(accessor.getObjectCorrelation(), node, PrioritizationListItemType_Names::ObjectCorrelation_Name);
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

uci::type::PrioritizationListItemType& PrioritizationListItemType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PrioritizationListItemType>().release());
}

uci::type::PrioritizationListItemType& PrioritizationListItemType::create(const uci::type::PrioritizationListItemType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PrioritizationListItemType> newAccessor{boost::make_unique<asb_uci::type::PrioritizationListItemType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PrioritizationListItemType::destroy(uci::type::PrioritizationListItemType& accessor) {
  delete dynamic_cast<asb_uci::type::PrioritizationListItemType*>(&accessor);
}

} // namespace type

} // namespace uci

