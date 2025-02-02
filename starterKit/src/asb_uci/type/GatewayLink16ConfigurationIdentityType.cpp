/** @file GatewayLink16ConfigurationIdentityType.cpp
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

#include "../../../include/asb_uci/type/GatewayLink16ConfigurationIdentityType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/GatewayLink16ConfigurationIdentityType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

GatewayLink16ConfigurationIdentityType::GatewayLink16ConfigurationIdentityType() = default;

GatewayLink16ConfigurationIdentityType::~GatewayLink16ConfigurationIdentityType() = default;

void GatewayLink16ConfigurationIdentityType::copy(const uci::type::GatewayLink16ConfigurationIdentityType& accessor) {
  copyImpl(accessor, false);
}

void GatewayLink16ConfigurationIdentityType::copyImpl(const uci::type::GatewayLink16ConfigurationIdentityType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const GatewayLink16ConfigurationIdentityType&>(accessor);
    setPending(accessorImpl.pending_Accessor);
    setUnknown(accessorImpl.unknown_Accessor);
    setAssumedFriend(accessorImpl.assumedFriend_Accessor);
    setFriend(accessorImpl.friend_Accessor);
    setNeutral(accessorImpl.neutral_Accessor);
    setSuspect(accessorImpl.suspect_Accessor);
    setHostile(accessorImpl.hostile_Accessor);
  }
}

void GatewayLink16ConfigurationIdentityType::reset() noexcept {
  pending_Accessor = false;
  unknown_Accessor = false;
  assumedFriend_Accessor = false;
  friend_Accessor = false;
  neutral_Accessor = false;
  suspect_Accessor = false;
  hostile_Accessor = false;
}

xs::Boolean GatewayLink16ConfigurationIdentityType::getPending() const {
  return pending_Accessor;
}

uci::type::GatewayLink16ConfigurationIdentityType& GatewayLink16ConfigurationIdentityType::setPending(xs::Boolean value) {
  pending_Accessor = value;
  return *this;
}


xs::Boolean GatewayLink16ConfigurationIdentityType::getUnknown() const {
  return unknown_Accessor;
}

uci::type::GatewayLink16ConfigurationIdentityType& GatewayLink16ConfigurationIdentityType::setUnknown(xs::Boolean value) {
  unknown_Accessor = value;
  return *this;
}


xs::Boolean GatewayLink16ConfigurationIdentityType::getAssumedFriend() const {
  return assumedFriend_Accessor;
}

uci::type::GatewayLink16ConfigurationIdentityType& GatewayLink16ConfigurationIdentityType::setAssumedFriend(xs::Boolean value) {
  assumedFriend_Accessor = value;
  return *this;
}


xs::Boolean GatewayLink16ConfigurationIdentityType::getFriend() const {
  return friend_Accessor;
}

uci::type::GatewayLink16ConfigurationIdentityType& GatewayLink16ConfigurationIdentityType::setFriend(xs::Boolean value) {
  friend_Accessor = value;
  return *this;
}


xs::Boolean GatewayLink16ConfigurationIdentityType::getNeutral() const {
  return neutral_Accessor;
}

uci::type::GatewayLink16ConfigurationIdentityType& GatewayLink16ConfigurationIdentityType::setNeutral(xs::Boolean value) {
  neutral_Accessor = value;
  return *this;
}


xs::Boolean GatewayLink16ConfigurationIdentityType::getSuspect() const {
  return suspect_Accessor;
}

uci::type::GatewayLink16ConfigurationIdentityType& GatewayLink16ConfigurationIdentityType::setSuspect(xs::Boolean value) {
  suspect_Accessor = value;
  return *this;
}


xs::Boolean GatewayLink16ConfigurationIdentityType::getHostile() const {
  return hostile_Accessor;
}

uci::type::GatewayLink16ConfigurationIdentityType& GatewayLink16ConfigurationIdentityType::setHostile(xs::Boolean value) {
  hostile_Accessor = value;
  return *this;
}


std::unique_ptr<GatewayLink16ConfigurationIdentityType> GatewayLink16ConfigurationIdentityType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::gatewayLink16ConfigurationIdentityType : type};
  return (requestedType == uci::type::accessorType::gatewayLink16ConfigurationIdentityType) ? boost::make_unique<GatewayLink16ConfigurationIdentityType>() : nullptr;
}

/**  */
namespace GatewayLink16ConfigurationIdentityType_Names {

constexpr const char* Extern_Type_Name{"GatewayLink16ConfigurationIdentityType"};
constexpr const char* Pending_Name{"Pending"};
constexpr const char* Unknown_Name{"Unknown"};
constexpr const char* AssumedFriend_Name{"AssumedFriend"};
constexpr const char* Friend_Name{"Friend"};
constexpr const char* Neutral_Name{"Neutral"};
constexpr const char* Suspect_Name{"Suspect"};
constexpr const char* Hostile_Name{"Hostile"};

} // namespace GatewayLink16ConfigurationIdentityType_Names

void GatewayLink16ConfigurationIdentityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::GatewayLink16ConfigurationIdentityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = GatewayLink16ConfigurationIdentityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + GatewayLink16ConfigurationIdentityType_Names::Pending_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPending(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + GatewayLink16ConfigurationIdentityType_Names::Unknown_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setUnknown(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + GatewayLink16ConfigurationIdentityType_Names::AssumedFriend_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAssumedFriend(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + GatewayLink16ConfigurationIdentityType_Names::Friend_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setFriend(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + GatewayLink16ConfigurationIdentityType_Names::Neutral_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setNeutral(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + GatewayLink16ConfigurationIdentityType_Names::Suspect_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSuspect(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + GatewayLink16ConfigurationIdentityType_Names::Hostile_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setHostile(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    }
  }
}

std::string GatewayLink16ConfigurationIdentityType::serialize(const uci::type::GatewayLink16ConfigurationIdentityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? GatewayLink16ConfigurationIdentityType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, GatewayLink16ConfigurationIdentityType_Names::Extern_Type_Name);
  }
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getPending(), node, GatewayLink16ConfigurationIdentityType_Names::Pending_Name);
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getUnknown(), node, GatewayLink16ConfigurationIdentityType_Names::Unknown_Name);
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getAssumedFriend(), node, GatewayLink16ConfigurationIdentityType_Names::AssumedFriend_Name);
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getFriend(), node, GatewayLink16ConfigurationIdentityType_Names::Friend_Name);
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getNeutral(), node, GatewayLink16ConfigurationIdentityType_Names::Neutral_Name);
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getSuspect(), node, GatewayLink16ConfigurationIdentityType_Names::Suspect_Name);
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getHostile(), node, GatewayLink16ConfigurationIdentityType_Names::Hostile_Name);
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

uci::type::GatewayLink16ConfigurationIdentityType& GatewayLink16ConfigurationIdentityType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::GatewayLink16ConfigurationIdentityType>().release());
}

uci::type::GatewayLink16ConfigurationIdentityType& GatewayLink16ConfigurationIdentityType::create(const uci::type::GatewayLink16ConfigurationIdentityType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::GatewayLink16ConfigurationIdentityType> newAccessor{boost::make_unique<asb_uci::type::GatewayLink16ConfigurationIdentityType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void GatewayLink16ConfigurationIdentityType::destroy(uci::type::GatewayLink16ConfigurationIdentityType& accessor) {
  delete dynamic_cast<asb_uci::type::GatewayLink16ConfigurationIdentityType*>(&accessor);
}

} // namespace type

} // namespace uci

