/** @file IncrementalChangeType.cpp
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

#include "../../../include/asb_uci/type/IncrementalChangeType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/IncrementalChangeEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IncrementalChangeEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IncrementalChangeType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

IncrementalChangeType::IncrementalChangeType()
  : changeType_Accessor{boost::make_unique<IncrementalChangeEnum>()} {
}

IncrementalChangeType::~IncrementalChangeType() = default;

void IncrementalChangeType::copy(const uci::type::IncrementalChangeType& accessor) {
  copyImpl(accessor, false);
}

void IncrementalChangeType::copyImpl(const uci::type::IncrementalChangeType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const IncrementalChangeType&>(accessor);
    if (accessorImpl.hasChangeWeight()) {
      setChangeWeight(accessorImpl.getChangeWeight());
    } else {
      clearChangeWeight();
    }
    setChangeType(*(accessorImpl.changeType_Accessor));
  }
}

void IncrementalChangeType::reset() noexcept {
  clearChangeWeight();
  changeType_Accessor->reset();
}

xs::Int IncrementalChangeType::getChangeWeight() const {
  if (changeWeight_Accessor) {
    return *changeWeight_Accessor;
  }
  throw uci::base::UCIException("Error in getChangeWeight(): An attempt was made to get an optional field that was not enabled, call hasChangeWeight() to determine if it is safe to call getChangeWeight()");
}

uci::type::IncrementalChangeType& IncrementalChangeType::setChangeWeight(xs::Int value) {
  changeWeight_Accessor = value;
  return *this;
}

bool IncrementalChangeType::hasChangeWeight() const noexcept {
  return changeWeight_Accessor.has_value();
}

uci::type::IncrementalChangeType& IncrementalChangeType::clearChangeWeight() noexcept {
  changeWeight_Accessor.reset();
  return *this;
}

const uci::type::IncrementalChangeEnum& IncrementalChangeType::getChangeType() const {
  return *changeType_Accessor;
}

uci::type::IncrementalChangeEnum& IncrementalChangeType::getChangeType() {
  return *changeType_Accessor;
}

uci::type::IncrementalChangeType& IncrementalChangeType::setChangeType(const uci::type::IncrementalChangeEnum& accessor) {
  if (&accessor != changeType_Accessor.get()) {
    changeType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::IncrementalChangeType& IncrementalChangeType::setChangeType(uci::type::IncrementalChangeEnum::EnumerationItem value) {
  changeType_Accessor->setValue(value);
  return *this;
}


std::unique_ptr<IncrementalChangeType> IncrementalChangeType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::incrementalChangeType : type};
  return (requestedType == uci::type::accessorType::incrementalChangeType) ? boost::make_unique<IncrementalChangeType>() : nullptr;
}

/**  */
namespace IncrementalChangeType_Names {

constexpr const char* Extern_Type_Name{"IncrementalChangeType"};
constexpr const char* ChangeWeight_Name{"ChangeWeight"};
constexpr const char* ChangeType_Name{"ChangeType"};

} // namespace IncrementalChangeType_Names

void IncrementalChangeType::deserialize(const boost::property_tree::ptree& propTree, uci::type::IncrementalChangeType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = IncrementalChangeType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + IncrementalChangeType_Names::ChangeWeight_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setChangeWeight(asb_uci::util::SerializationHelpers::deserializeInt(*value));
      }
    } else if (valueType.first == nsPrefix + IncrementalChangeType_Names::ChangeType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getChangeType().setValueFromName(*value);
      }
    }
  }
}

std::string IncrementalChangeType::serialize(const uci::type::IncrementalChangeType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? IncrementalChangeType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, IncrementalChangeType_Names::Extern_Type_Name);
  }
  if (accessor.hasChangeWeight()) {
    asb_uci::util::SerializationHelpers::serializeInt(accessor.getChangeWeight(), node, IncrementalChangeType_Names::ChangeWeight_Name);
  }
  IncrementalChangeEnum::serialize(accessor.getChangeType(), node, IncrementalChangeType_Names::ChangeType_Name, false);
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

uci::type::IncrementalChangeType& IncrementalChangeType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::IncrementalChangeType>().release());
}

uci::type::IncrementalChangeType& IncrementalChangeType::create(const uci::type::IncrementalChangeType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::IncrementalChangeType> newAccessor{boost::make_unique<asb_uci::type::IncrementalChangeType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void IncrementalChangeType::destroy(uci::type::IncrementalChangeType& accessor) {
  delete dynamic_cast<asb_uci::type::IncrementalChangeType*>(&accessor);
}

} // namespace type

} // namespace uci

