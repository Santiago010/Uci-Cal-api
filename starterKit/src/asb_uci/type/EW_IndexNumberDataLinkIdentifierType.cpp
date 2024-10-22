/** @file EW_IndexNumberDataLinkIdentifierType.cpp
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

#include "../../../include/asb_uci/type/EW_IndexNumberDataLinkIdentifierType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/DataLinkIdentifierPET.h"
#include "../../../include/asb_uci/type/NetworkLinkID_Type.h"
#include "../../../include/asb_uci/type/SystemID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EW_IndexNumberDataLinkIdentifierType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/NetworkLinkID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemID_Type.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

EW_IndexNumberDataLinkIdentifierType::EW_IndexNumberDataLinkIdentifierType()
  : systemID_Accessor{boost::make_unique<SystemID_Type>()} {
}

EW_IndexNumberDataLinkIdentifierType::~EW_IndexNumberDataLinkIdentifierType() = default;

void EW_IndexNumberDataLinkIdentifierType::copy(const uci::type::EW_IndexNumberDataLinkIdentifierType& accessor) {
  copyImpl(accessor, false);
}

void EW_IndexNumberDataLinkIdentifierType::copyImpl(const uci::type::EW_IndexNumberDataLinkIdentifierType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    DataLinkIdentifierPET::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const EW_IndexNumberDataLinkIdentifierType&>(accessor);
    setIndexNumber(accessorImpl.indexNumber_Accessor);
    setSystemID(*(accessorImpl.systemID_Accessor));
    if (accessorImpl.networkLinkID_Accessor) {
      setNetworkLinkID(*(accessorImpl.networkLinkID_Accessor));
    } else {
      networkLinkID_Accessor.reset();
    }
  }
}

void EW_IndexNumberDataLinkIdentifierType::reset() noexcept {
  DataLinkIdentifierPET::reset();
  indexNumber_Accessor = 0;
  systemID_Accessor->reset();
  networkLinkID_Accessor.reset();
}

xs::UnsignedInt EW_IndexNumberDataLinkIdentifierType::getIndexNumber() const {
  return indexNumber_Accessor;
}

uci::type::EW_IndexNumberDataLinkIdentifierType& EW_IndexNumberDataLinkIdentifierType::setIndexNumber(xs::UnsignedInt value) {
  indexNumber_Accessor = value;
  return *this;
}


const uci::type::SystemID_Type& EW_IndexNumberDataLinkIdentifierType::getSystemID() const {
  return *systemID_Accessor;
}

uci::type::SystemID_Type& EW_IndexNumberDataLinkIdentifierType::getSystemID() {
  return *systemID_Accessor;
}

uci::type::EW_IndexNumberDataLinkIdentifierType& EW_IndexNumberDataLinkIdentifierType::setSystemID(const uci::type::SystemID_Type& accessor) {
  if (&accessor != systemID_Accessor.get()) {
    systemID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::NetworkLinkID_Type& EW_IndexNumberDataLinkIdentifierType::getNetworkLinkID_() const {
  if (networkLinkID_Accessor) {
    return *networkLinkID_Accessor;
  }
  throw uci::base::UCIException("Error in getNetworkLinkID(): An attempt was made to get an optional field that was not enabled, call hasNetworkLinkID() to determine if it is safe to call getNetworkLinkID()");
}

const uci::type::NetworkLinkID_Type& EW_IndexNumberDataLinkIdentifierType::getNetworkLinkID() const {
  return getNetworkLinkID_();
}

uci::type::NetworkLinkID_Type& EW_IndexNumberDataLinkIdentifierType::getNetworkLinkID() {
  return getNetworkLinkID_();
}

uci::type::EW_IndexNumberDataLinkIdentifierType& EW_IndexNumberDataLinkIdentifierType::setNetworkLinkID(const uci::type::NetworkLinkID_Type& accessor) {
  enableNetworkLinkID();
  if (&accessor != networkLinkID_Accessor.get()) {
    networkLinkID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool EW_IndexNumberDataLinkIdentifierType::hasNetworkLinkID() const noexcept {
  return static_cast<bool>(networkLinkID_Accessor);
}

uci::type::NetworkLinkID_Type& EW_IndexNumberDataLinkIdentifierType::enableNetworkLinkID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::networkLinkID_Type : type};
  if ((!networkLinkID_Accessor) || (networkLinkID_Accessor->getAccessorType() != requestedType)) {
    networkLinkID_Accessor = NetworkLinkID_Type::create(requestedType);
    if (!networkLinkID_Accessor) {
      throw uci::base::UCIException("Error in enableNetworkLinkID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *networkLinkID_Accessor;
}

uci::type::EW_IndexNumberDataLinkIdentifierType& EW_IndexNumberDataLinkIdentifierType::clearNetworkLinkID() noexcept {
  networkLinkID_Accessor.reset();
  return *this;
}

std::unique_ptr<EW_IndexNumberDataLinkIdentifierType> EW_IndexNumberDataLinkIdentifierType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::eW_IndexNumberDataLinkIdentifierType : type};
  return (requestedType == uci::type::accessorType::eW_IndexNumberDataLinkIdentifierType) ? boost::make_unique<EW_IndexNumberDataLinkIdentifierType>() : nullptr;
}

/**  */
namespace EW_IndexNumberDataLinkIdentifierType_Names {

constexpr const char* Extern_Type_Name{"EW_IndexNumberDataLinkIdentifierType"};
constexpr const char* IndexNumber_Name{"IndexNumber"};
constexpr const char* SystemID_Name{"SystemID"};
constexpr const char* NetworkLinkID_Name{"NetworkLinkID"};

} // namespace EW_IndexNumberDataLinkIdentifierType_Names

void EW_IndexNumberDataLinkIdentifierType::deserialize(const boost::property_tree::ptree& propTree, uci::type::EW_IndexNumberDataLinkIdentifierType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EW_IndexNumberDataLinkIdentifierType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + EW_IndexNumberDataLinkIdentifierType_Names::IndexNumber_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setIndexNumber(asb_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    } else if (valueType.first == nsPrefix + EW_IndexNumberDataLinkIdentifierType_Names::SystemID_Name) {
      SystemID_Type::deserialize(valueType.second, accessor.getSystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EW_IndexNumberDataLinkIdentifierType_Names::NetworkLinkID_Name) {
      NetworkLinkID_Type::deserialize(valueType.second, accessor.enableNetworkLinkID(), nodeName, nsPrefix);
    }
  }
  DataLinkIdentifierPET::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string EW_IndexNumberDataLinkIdentifierType::serialize(const uci::type::EW_IndexNumberDataLinkIdentifierType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? EW_IndexNumberDataLinkIdentifierType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, EW_IndexNumberDataLinkIdentifierType_Names::Extern_Type_Name);
  }
  DataLinkIdentifierPET::serialize(accessor, node, "", false, false, false);
  asb_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getIndexNumber(), node, EW_IndexNumberDataLinkIdentifierType_Names::IndexNumber_Name);
  SystemID_Type::serialize(accessor.getSystemID(), node, EW_IndexNumberDataLinkIdentifierType_Names::SystemID_Name);
  if (accessor.hasNetworkLinkID()) {
    NetworkLinkID_Type::serialize(accessor.getNetworkLinkID(), node, EW_IndexNumberDataLinkIdentifierType_Names::NetworkLinkID_Name);
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

uci::type::EW_IndexNumberDataLinkIdentifierType& EW_IndexNumberDataLinkIdentifierType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::EW_IndexNumberDataLinkIdentifierType>().release());
}

uci::type::EW_IndexNumberDataLinkIdentifierType& EW_IndexNumberDataLinkIdentifierType::create(const uci::type::EW_IndexNumberDataLinkIdentifierType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::EW_IndexNumberDataLinkIdentifierType> newAccessor{boost::make_unique<asb_uci::type::EW_IndexNumberDataLinkIdentifierType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void EW_IndexNumberDataLinkIdentifierType::destroy(uci::type::EW_IndexNumberDataLinkIdentifierType& accessor) {
  delete dynamic_cast<asb_uci::type::EW_IndexNumberDataLinkIdentifierType*>(&accessor);
}

} // namespace type

} // namespace uci

