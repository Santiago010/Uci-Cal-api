/** @file IJMS_DataLinkIdentifierType.cpp
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

#include "../../../include/asb_uci/type/IJMS_DataLinkIdentifierType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/DataLinkIdentifierPET.h"
#include "../../../include/asb_uci/type/IJMS_TrackNumberType.h"
#include "../../../include/asb_uci/type/NetworkLinkID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IJMS_DataLinkIdentifierType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IJMS_TrackNumberType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/NetworkLinkID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

IJMS_DataLinkIdentifierType::IJMS_DataLinkIdentifierType()
  : trackNumber_Accessor{boost::make_unique<IJMS_TrackNumberType>()} {
}

IJMS_DataLinkIdentifierType::~IJMS_DataLinkIdentifierType() = default;

void IJMS_DataLinkIdentifierType::copy(const uci::type::IJMS_DataLinkIdentifierType& accessor) {
  copyImpl(accessor, false);
}

void IJMS_DataLinkIdentifierType::copyImpl(const uci::type::IJMS_DataLinkIdentifierType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    DataLinkIdentifierPET::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const IJMS_DataLinkIdentifierType&>(accessor);
    setTrackNumber(*(accessorImpl.trackNumber_Accessor));
    if (accessorImpl.externalInterfaceID_Accessor) {
      setExternalInterfaceID(*(accessorImpl.externalInterfaceID_Accessor));
    } else {
      externalInterfaceID_Accessor.reset();
    }
  }
}

void IJMS_DataLinkIdentifierType::reset() noexcept {
  DataLinkIdentifierPET::reset();
  trackNumber_Accessor->reset();
  externalInterfaceID_Accessor.reset();
}

const uci::type::IJMS_TrackNumberType& IJMS_DataLinkIdentifierType::getTrackNumber() const noexcept {
  return *trackNumber_Accessor;
}

uci::type::IJMS_TrackNumberType& IJMS_DataLinkIdentifierType::getTrackNumber() noexcept {
  return *trackNumber_Accessor;
}

uci::type::IJMS_DataLinkIdentifierType& IJMS_DataLinkIdentifierType::setTrackNumber(const uci::type::IJMS_TrackNumberType& value) {
  return setTrackNumber(value.c_str());
}

uci::type::IJMS_DataLinkIdentifierType& IJMS_DataLinkIdentifierType::setTrackNumber(const std::string& value) {
  return setTrackNumber(value.c_str());
}

uci::type::IJMS_DataLinkIdentifierType& IJMS_DataLinkIdentifierType::setTrackNumber(const char* value) {
  trackNumber_Accessor->setStringValue(value);
  return *this;
}

uci::type::NetworkLinkID_Type& IJMS_DataLinkIdentifierType::getExternalInterfaceID_() const {
  if (externalInterfaceID_Accessor) {
    return *externalInterfaceID_Accessor;
  }
  throw uci::base::UCIException("Error in getExternalInterfaceID(): An attempt was made to get an optional field that was not enabled, call hasExternalInterfaceID() to determine if it is safe to call getExternalInterfaceID()");
}

const uci::type::NetworkLinkID_Type& IJMS_DataLinkIdentifierType::getExternalInterfaceID() const {
  return getExternalInterfaceID_();
}

uci::type::NetworkLinkID_Type& IJMS_DataLinkIdentifierType::getExternalInterfaceID() {
  return getExternalInterfaceID_();
}

uci::type::IJMS_DataLinkIdentifierType& IJMS_DataLinkIdentifierType::setExternalInterfaceID(const uci::type::NetworkLinkID_Type& accessor) {
  enableExternalInterfaceID();
  if (&accessor != externalInterfaceID_Accessor.get()) {
    externalInterfaceID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool IJMS_DataLinkIdentifierType::hasExternalInterfaceID() const noexcept {
  return static_cast<bool>(externalInterfaceID_Accessor);
}

uci::type::NetworkLinkID_Type& IJMS_DataLinkIdentifierType::enableExternalInterfaceID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::networkLinkID_Type : type};
  if ((!externalInterfaceID_Accessor) || (externalInterfaceID_Accessor->getAccessorType() != requestedType)) {
    externalInterfaceID_Accessor = NetworkLinkID_Type::create(requestedType);
    if (!externalInterfaceID_Accessor) {
      throw uci::base::UCIException("Error in enableExternalInterfaceID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *externalInterfaceID_Accessor;
}

uci::type::IJMS_DataLinkIdentifierType& IJMS_DataLinkIdentifierType::clearExternalInterfaceID() noexcept {
  externalInterfaceID_Accessor.reset();
  return *this;
}

std::unique_ptr<IJMS_DataLinkIdentifierType> IJMS_DataLinkIdentifierType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::iJMS_DataLinkIdentifierType : type};
  return (requestedType == uci::type::accessorType::iJMS_DataLinkIdentifierType) ? boost::make_unique<IJMS_DataLinkIdentifierType>() : nullptr;
}

/**  */
namespace IJMS_DataLinkIdentifierType_Names {

constexpr const char* Extern_Type_Name{"IJMS_DataLinkIdentifierType"};
constexpr const char* TrackNumber_Name{"TrackNumber"};
constexpr const char* ExternalInterfaceID_Name{"ExternalInterfaceID"};

} // namespace IJMS_DataLinkIdentifierType_Names

void IJMS_DataLinkIdentifierType::deserialize(const boost::property_tree::ptree& propTree, uci::type::IJMS_DataLinkIdentifierType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = IJMS_DataLinkIdentifierType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + IJMS_DataLinkIdentifierType_Names::TrackNumber_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTrackNumber(*value);
      }
    } else if (valueType.first == nsPrefix + IJMS_DataLinkIdentifierType_Names::ExternalInterfaceID_Name) {
      NetworkLinkID_Type::deserialize(valueType.second, accessor.enableExternalInterfaceID(), nodeName, nsPrefix);
    }
  }
  DataLinkIdentifierPET::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string IJMS_DataLinkIdentifierType::serialize(const uci::type::IJMS_DataLinkIdentifierType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? IJMS_DataLinkIdentifierType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, IJMS_DataLinkIdentifierType_Names::Extern_Type_Name);
  }
  DataLinkIdentifierPET::serialize(accessor, node, "", false, false, false);
  asb_uci::util::SerializationHelpers::serializeString(accessor.getTrackNumber(), node, IJMS_DataLinkIdentifierType_Names::TrackNumber_Name);
  if (accessor.hasExternalInterfaceID()) {
    NetworkLinkID_Type::serialize(accessor.getExternalInterfaceID(), node, IJMS_DataLinkIdentifierType_Names::ExternalInterfaceID_Name);
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

uci::type::IJMS_DataLinkIdentifierType& IJMS_DataLinkIdentifierType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::IJMS_DataLinkIdentifierType>().release());
}

uci::type::IJMS_DataLinkIdentifierType& IJMS_DataLinkIdentifierType::create(const uci::type::IJMS_DataLinkIdentifierType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::IJMS_DataLinkIdentifierType> newAccessor{boost::make_unique<asb_uci::type::IJMS_DataLinkIdentifierType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void IJMS_DataLinkIdentifierType::destroy(uci::type::IJMS_DataLinkIdentifierType& accessor) {
  delete dynamic_cast<asb_uci::type::IJMS_DataLinkIdentifierType*>(&accessor);
}

} // namespace type

} // namespace uci

