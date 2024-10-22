/** @file CommSystemUsageType.cpp
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

#include "../../../include/asb_uci/type/CommSystemUsageType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CommModeUsageType.h"
#include "../../../include/asb_uci/type/CommSystemID_Type.h"
#include "../../../include/asb_uci/type/VisibleString256Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommModeUsageType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommSystemID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommSystemUsageType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString256Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

CommSystemUsageType::CommSystemUsageType()
  : commSystemID_Accessor{boost::make_unique<CommSystemID_Type>()},
    userIdentifier_Accessor{boost::make_unique<UserIdentifier>(0, SIZE_MAX)},
    usage_Accessor{boost::make_unique<Usage>(1, SIZE_MAX)} {
}

CommSystemUsageType::~CommSystemUsageType() = default;

void CommSystemUsageType::copy(const uci::type::CommSystemUsageType& accessor) {
  copyImpl(accessor, false);
}

void CommSystemUsageType::copyImpl(const uci::type::CommSystemUsageType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const CommSystemUsageType&>(accessor);
    setCommSystemID(*(accessorImpl.commSystemID_Accessor));
    setUserIdentifier(*(accessorImpl.userIdentifier_Accessor));
    setUsage(*(accessorImpl.usage_Accessor));
  }
}

void CommSystemUsageType::reset() noexcept {
  commSystemID_Accessor->reset();
  userIdentifier_Accessor->reset();
  usage_Accessor->reset();
}

const uci::type::CommSystemID_Type& CommSystemUsageType::getCommSystemID() const {
  return *commSystemID_Accessor;
}

uci::type::CommSystemID_Type& CommSystemUsageType::getCommSystemID() {
  return *commSystemID_Accessor;
}

uci::type::CommSystemUsageType& CommSystemUsageType::setCommSystemID(const uci::type::CommSystemID_Type& accessor) {
  if (&accessor != commSystemID_Accessor.get()) {
    commSystemID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::CommSystemUsageType::UserIdentifier& CommSystemUsageType::getUserIdentifier() const {
  return *userIdentifier_Accessor;
}

uci::type::CommSystemUsageType::UserIdentifier& CommSystemUsageType::getUserIdentifier() {
  return *userIdentifier_Accessor;
}

uci::type::CommSystemUsageType& CommSystemUsageType::setUserIdentifier(const uci::type::CommSystemUsageType::UserIdentifier& accessor) {
  if (&accessor != userIdentifier_Accessor.get()) {
    userIdentifier_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::CommSystemUsageType::Usage& CommSystemUsageType::getUsage() const {
  return *usage_Accessor;
}

uci::type::CommSystemUsageType::Usage& CommSystemUsageType::getUsage() {
  return *usage_Accessor;
}

uci::type::CommSystemUsageType& CommSystemUsageType::setUsage(const uci::type::CommSystemUsageType::Usage& accessor) {
  if (&accessor != usage_Accessor.get()) {
    usage_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<CommSystemUsageType> CommSystemUsageType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commSystemUsageType : type};
  return (requestedType == uci::type::accessorType::commSystemUsageType) ? boost::make_unique<CommSystemUsageType>() : nullptr;
}

/**  */
namespace CommSystemUsageType_Names {

constexpr const char* Extern_Type_Name{"CommSystemUsageType"};
constexpr const char* CommSystemID_Name{"CommSystemID"};
constexpr const char* UserIdentifier_Name{"UserIdentifier"};
constexpr const char* Usage_Name{"Usage"};

} // namespace CommSystemUsageType_Names

void CommSystemUsageType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CommSystemUsageType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CommSystemUsageType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CommSystemUsageType_Names::CommSystemID_Name) {
      CommSystemID_Type::deserialize(valueType.second, accessor.getCommSystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CommSystemUsageType_Names::UserIdentifier_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::CommSystemUsageType::UserIdentifier& boundedList = accessor.getUserIdentifier();
        const uci::type::CommSystemUsageType::UserIdentifier::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setStringValue(*value);
      }
    } else if (valueType.first == nsPrefix + CommSystemUsageType_Names::Usage_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::CommSystemUsageType::Usage& boundedList = accessor.getUsage();
        const uci::type::CommSystemUsageType::Usage::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::CommModeUsageType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string CommSystemUsageType::serialize(const uci::type::CommSystemUsageType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? CommSystemUsageType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, CommSystemUsageType_Names::Extern_Type_Name);
  }
  CommSystemID_Type::serialize(accessor.getCommSystemID(), node, CommSystemUsageType_Names::CommSystemID_Name);
  {
    const uci::type::CommSystemUsageType::UserIdentifier& boundedList = accessor.getUserIdentifier();
    for (uci::type::CommSystemUsageType::UserIdentifier::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::util::SerializationHelpers::serializeString(boundedList.at(i), node, CommSystemUsageType_Names::UserIdentifier_Name);
    }
  }
  {
    const uci::type::CommSystemUsageType::Usage& boundedList = accessor.getUsage();
    for (uci::type::CommSystemUsageType::Usage::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::CommModeUsageType::serialize(boundedList.at(i), node, CommSystemUsageType_Names::Usage_Name);
    }
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

uci::type::CommSystemUsageType& CommSystemUsageType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::CommSystemUsageType>().release());
}

uci::type::CommSystemUsageType& CommSystemUsageType::create(const uci::type::CommSystemUsageType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::CommSystemUsageType> newAccessor{boost::make_unique<asb_uci::type::CommSystemUsageType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void CommSystemUsageType::destroy(uci::type::CommSystemUsageType& accessor) {
  delete dynamic_cast<asb_uci::type::CommSystemUsageType*>(&accessor);
}

} // namespace type

} // namespace uci

