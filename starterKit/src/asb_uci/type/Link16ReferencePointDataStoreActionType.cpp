/** @file Link16ReferencePointDataStoreActionType.cpp
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

#include "../../../include/asb_uci/type/Link16ReferencePointDataStoreActionType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/DataStoreActionEnum.h"
#include "../../../include/asb_uci/type/Link16ReferencePointDataStoreID_ChoiceType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DataStoreActionEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Link16ReferencePointDataStoreActionType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Link16ReferencePointDataStoreID_ChoiceType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

Link16ReferencePointDataStoreActionType::Link16ReferencePointDataStoreActionType()
  : dataStoreAction_Accessor{boost::make_unique<DataStoreActionEnum>()},
    referencePointDataStoreID_Accessor{boost::make_unique<Link16ReferencePointDataStoreID_ChoiceType>()} {
}

Link16ReferencePointDataStoreActionType::~Link16ReferencePointDataStoreActionType() = default;

void Link16ReferencePointDataStoreActionType::copy(const uci::type::Link16ReferencePointDataStoreActionType& accessor) {
  copyImpl(accessor, false);
}

void Link16ReferencePointDataStoreActionType::copyImpl(const uci::type::Link16ReferencePointDataStoreActionType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const Link16ReferencePointDataStoreActionType&>(accessor);
    setDataStoreAction(*(accessorImpl.dataStoreAction_Accessor));
    setReferencePointDataStoreID(*(accessorImpl.referencePointDataStoreID_Accessor));
  }
}

void Link16ReferencePointDataStoreActionType::reset() noexcept {
  dataStoreAction_Accessor->reset();
  referencePointDataStoreID_Accessor->reset();
}

const uci::type::DataStoreActionEnum& Link16ReferencePointDataStoreActionType::getDataStoreAction() const {
  return *dataStoreAction_Accessor;
}

uci::type::DataStoreActionEnum& Link16ReferencePointDataStoreActionType::getDataStoreAction() {
  return *dataStoreAction_Accessor;
}

uci::type::Link16ReferencePointDataStoreActionType& Link16ReferencePointDataStoreActionType::setDataStoreAction(const uci::type::DataStoreActionEnum& accessor) {
  if (&accessor != dataStoreAction_Accessor.get()) {
    dataStoreAction_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::Link16ReferencePointDataStoreActionType& Link16ReferencePointDataStoreActionType::setDataStoreAction(uci::type::DataStoreActionEnum::EnumerationItem value) {
  dataStoreAction_Accessor->setValue(value);
  return *this;
}


const uci::type::Link16ReferencePointDataStoreID_ChoiceType& Link16ReferencePointDataStoreActionType::getReferencePointDataStoreID() const {
  return *referencePointDataStoreID_Accessor;
}

uci::type::Link16ReferencePointDataStoreID_ChoiceType& Link16ReferencePointDataStoreActionType::getReferencePointDataStoreID() {
  return *referencePointDataStoreID_Accessor;
}

uci::type::Link16ReferencePointDataStoreActionType& Link16ReferencePointDataStoreActionType::setReferencePointDataStoreID(const uci::type::Link16ReferencePointDataStoreID_ChoiceType& accessor) {
  if (&accessor != referencePointDataStoreID_Accessor.get()) {
    referencePointDataStoreID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<Link16ReferencePointDataStoreActionType> Link16ReferencePointDataStoreActionType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::link16ReferencePointDataStoreActionType : type};
  return (requestedType == uci::type::accessorType::link16ReferencePointDataStoreActionType) ? boost::make_unique<Link16ReferencePointDataStoreActionType>() : nullptr;
}

/**  */
namespace Link16ReferencePointDataStoreActionType_Names {

constexpr const char* Extern_Type_Name{"Link16ReferencePointDataStoreActionType"};
constexpr const char* DataStoreAction_Name{"DataStoreAction"};
constexpr const char* ReferencePointDataStoreID_Name{"ReferencePointDataStoreID"};

} // namespace Link16ReferencePointDataStoreActionType_Names

void Link16ReferencePointDataStoreActionType::deserialize(const boost::property_tree::ptree& propTree, uci::type::Link16ReferencePointDataStoreActionType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = Link16ReferencePointDataStoreActionType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + Link16ReferencePointDataStoreActionType_Names::DataStoreAction_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getDataStoreAction().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + Link16ReferencePointDataStoreActionType_Names::ReferencePointDataStoreID_Name) {
      Link16ReferencePointDataStoreID_ChoiceType::deserialize(valueType.second, accessor.getReferencePointDataStoreID(), nodeName, nsPrefix);
    }
  }
}

std::string Link16ReferencePointDataStoreActionType::serialize(const uci::type::Link16ReferencePointDataStoreActionType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? Link16ReferencePointDataStoreActionType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, Link16ReferencePointDataStoreActionType_Names::Extern_Type_Name);
  }
  DataStoreActionEnum::serialize(accessor.getDataStoreAction(), node, Link16ReferencePointDataStoreActionType_Names::DataStoreAction_Name, false);
  Link16ReferencePointDataStoreID_ChoiceType::serialize(accessor.getReferencePointDataStoreID(), node, Link16ReferencePointDataStoreActionType_Names::ReferencePointDataStoreID_Name);
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

uci::type::Link16ReferencePointDataStoreActionType& Link16ReferencePointDataStoreActionType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::Link16ReferencePointDataStoreActionType>().release());
}

uci::type::Link16ReferencePointDataStoreActionType& Link16ReferencePointDataStoreActionType::create(const uci::type::Link16ReferencePointDataStoreActionType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::Link16ReferencePointDataStoreActionType> newAccessor{boost::make_unique<asb_uci::type::Link16ReferencePointDataStoreActionType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void Link16ReferencePointDataStoreActionType::destroy(uci::type::Link16ReferencePointDataStoreActionType& accessor) {
  delete dynamic_cast<asb_uci::type::Link16ReferencePointDataStoreActionType*>(&accessor);
}

} // namespace type

} // namespace uci

