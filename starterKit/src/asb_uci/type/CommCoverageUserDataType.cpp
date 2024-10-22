/** @file CommCoverageUserDataType.cpp
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

#include "../../../include/asb_uci/type/CommCoverageUserDataType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CommCoverageDataType.h"
#include "../../../include/asb_uci/type/VisibleString256Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommCoverageUserDataType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString256Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

CommCoverageUserDataType::CommCoverageUserDataType() = default;

CommCoverageUserDataType::~CommCoverageUserDataType() = default;

void CommCoverageUserDataType::copy(const uci::type::CommCoverageUserDataType& accessor) {
  copyImpl(accessor, false);
}

void CommCoverageUserDataType::copyImpl(const uci::type::CommCoverageUserDataType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    CommCoverageDataType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const CommCoverageUserDataType&>(accessor);
    if (accessorImpl.commUserIdentifier_Accessor) {
      setCommUserIdentifier(*(accessorImpl.commUserIdentifier_Accessor));
    } else {
      commUserIdentifier_Accessor.reset();
    }
  }
}

void CommCoverageUserDataType::reset() noexcept {
  CommCoverageDataType::reset();
  commUserIdentifier_Accessor.reset();
}

asb_uci::type::VisibleString256Type& CommCoverageUserDataType::getCommUserIdentifier_() const {
  if (commUserIdentifier_Accessor) {
    return *commUserIdentifier_Accessor;
  }
  throw uci::base::UCIException("Error in getCommUserIdentifier(): An attempt was made to get an optional field that was not enabled, call hasCommUserIdentifier() to determine if it is safe to call getCommUserIdentifier()");
}

const asb_uci::type::VisibleString256Type& CommCoverageUserDataType::getCommUserIdentifier() const {
  return getCommUserIdentifier_();
}

asb_uci::type::VisibleString256Type& CommCoverageUserDataType::getCommUserIdentifier() {
  return getCommUserIdentifier_();
}

uci::type::CommCoverageUserDataType& CommCoverageUserDataType::setCommUserIdentifier(const asb_uci::type::VisibleString256Type& value) {
  return setCommUserIdentifier(value.c_str());
}

uci::type::CommCoverageUserDataType& CommCoverageUserDataType::setCommUserIdentifier(const std::string& value) {
  return setCommUserIdentifier(value.c_str());
}

uci::type::CommCoverageUserDataType& CommCoverageUserDataType::setCommUserIdentifier(const char* value) {
  enableCommUserIdentifier().setStringValue(value);
  return *this;
}

bool CommCoverageUserDataType::hasCommUserIdentifier() const noexcept {
  return static_cast<bool>(commUserIdentifier_Accessor);
}

asb_uci::type::VisibleString256Type& CommCoverageUserDataType::enableCommUserIdentifier(uci::base::accessorType::AccessorType type) {
  if (!commUserIdentifier_Accessor) {
    commUserIdentifier_Accessor =  asb_uci::type::VisibleString256Type::create(type);
  }
  return *commUserIdentifier_Accessor;
}

uci::type::CommCoverageUserDataType& CommCoverageUserDataType::clearCommUserIdentifier() noexcept {
  commUserIdentifier_Accessor.reset();
  return *this;
}

std::unique_ptr<CommCoverageUserDataType> CommCoverageUserDataType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commCoverageUserDataType : type};
  return (requestedType == uci::type::accessorType::commCoverageUserDataType) ? boost::make_unique<CommCoverageUserDataType>() : nullptr;
}

/**  */
namespace CommCoverageUserDataType_Names {

constexpr const char* Extern_Type_Name{"CommCoverageUserDataType"};
constexpr const char* CommUserIdentifier_Name{"CommUserIdentifier"};

} // namespace CommCoverageUserDataType_Names

void CommCoverageUserDataType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CommCoverageUserDataType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CommCoverageUserDataType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CommCoverageUserDataType_Names::CommUserIdentifier_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setCommUserIdentifier(*value);
      }
    }
  }
  CommCoverageDataType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string CommCoverageUserDataType::serialize(const uci::type::CommCoverageUserDataType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? CommCoverageUserDataType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, CommCoverageUserDataType_Names::Extern_Type_Name);
  }
  CommCoverageDataType::serialize(accessor, node, "", false, false, false);
  if (accessor.hasCommUserIdentifier()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getCommUserIdentifier(), node, CommCoverageUserDataType_Names::CommUserIdentifier_Name);
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

uci::type::CommCoverageUserDataType& CommCoverageUserDataType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::CommCoverageUserDataType>().release());
}

uci::type::CommCoverageUserDataType& CommCoverageUserDataType::create(const uci::type::CommCoverageUserDataType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::CommCoverageUserDataType> newAccessor{boost::make_unique<asb_uci::type::CommCoverageUserDataType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void CommCoverageUserDataType::destroy(uci::type::CommCoverageUserDataType& accessor) {
  delete dynamic_cast<asb_uci::type::CommCoverageUserDataType*>(&accessor);
}

} // namespace type

} // namespace uci

