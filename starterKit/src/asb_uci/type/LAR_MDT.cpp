/** @file LAR_MDT.cpp
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

#include "../../../include/asb_uci/type/LAR_MDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CapabilityID_Type.h"
#include "../../../include/asb_uci/type/LAR_BasisEnum.h"
#include "../../../include/asb_uci/type/LAR_DetailsType.h"
#include "../../../include/asb_uci/type/LAR_ID_Type.h"
#include "../../../include/asb_uci/type/LAR_RelationEnum.h"
#include "../../../include/asb_uci/type/RequestID_Type.h"
#include "../../../include/asb_uci/type/ZoneType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LAR_BasisEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LAR_DetailsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LAR_ID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LAR_MDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LAR_RelationEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequestID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ZoneType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

LAR_MDT::LAR_MDT()
  : lAR_ID_Accessor{boost::make_unique<LAR_ID_Type>()},
    capabilityID_Accessor{boost::make_unique<CapabilityID>(0, SIZE_MAX)},
    lAR_Type_Accessor{boost::make_unique<LAR_RelationEnum>()},
    basis_Accessor{boost::make_unique<LAR_BasisEnum>()},
    region_Accessor{boost::make_unique<ZoneType>()},
    lAR_Details_Accessor{boost::make_unique<LAR_DetailsType>()} {
}

LAR_MDT::~LAR_MDT() = default;

void LAR_MDT::copy(const uci::type::LAR_MDT& accessor) {
  copyImpl(accessor, false);
}

void LAR_MDT::copyImpl(const uci::type::LAR_MDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const LAR_MDT&>(accessor);
    setLAR_ID(*(accessorImpl.lAR_ID_Accessor));
    if (accessorImpl.requestID_Accessor) {
      setRequestID(*(accessorImpl.requestID_Accessor));
    } else {
      requestID_Accessor.reset();
    }
    setCapabilityID(*(accessorImpl.capabilityID_Accessor));
    setLAR_Type(*(accessorImpl.lAR_Type_Accessor));
    setBasis(*(accessorImpl.basis_Accessor));
    setGeneratedByWeapon(accessorImpl.generatedByWeapon_Accessor);
    setRegion(*(accessorImpl.region_Accessor));
    setLAR_Details(*(accessorImpl.lAR_Details_Accessor));
  }
}

void LAR_MDT::reset() noexcept {
  lAR_ID_Accessor->reset();
  requestID_Accessor.reset();
  capabilityID_Accessor->reset();
  lAR_Type_Accessor->reset();
  basis_Accessor->reset();
  generatedByWeapon_Accessor = false;
  if (region_Accessor->getAccessorType() != uci::type::accessorType::zoneType) {
    region_Accessor = boost::make_unique<ZoneType>();
  } else {
    region_Accessor->reset();
  }
  lAR_Details_Accessor->reset();
}

const uci::type::LAR_ID_Type& LAR_MDT::getLAR_ID() const {
  return *lAR_ID_Accessor;
}

uci::type::LAR_ID_Type& LAR_MDT::getLAR_ID() {
  return *lAR_ID_Accessor;
}

uci::type::LAR_MDT& LAR_MDT::setLAR_ID(const uci::type::LAR_ID_Type& accessor) {
  if (&accessor != lAR_ID_Accessor.get()) {
    lAR_ID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::RequestID_Type& LAR_MDT::getRequestID_() const {
  if (requestID_Accessor) {
    return *requestID_Accessor;
  }
  throw uci::base::UCIException("Error in getRequestID(): An attempt was made to get an optional field that was not enabled, call hasRequestID() to determine if it is safe to call getRequestID()");
}

const uci::type::RequestID_Type& LAR_MDT::getRequestID() const {
  return getRequestID_();
}

uci::type::RequestID_Type& LAR_MDT::getRequestID() {
  return getRequestID_();
}

uci::type::LAR_MDT& LAR_MDT::setRequestID(const uci::type::RequestID_Type& accessor) {
  enableRequestID();
  if (&accessor != requestID_Accessor.get()) {
    requestID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool LAR_MDT::hasRequestID() const noexcept {
  return static_cast<bool>(requestID_Accessor);
}

uci::type::RequestID_Type& LAR_MDT::enableRequestID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::requestID_Type : type};
  if ((!requestID_Accessor) || (requestID_Accessor->getAccessorType() != requestedType)) {
    requestID_Accessor = RequestID_Type::create(requestedType);
    if (!requestID_Accessor) {
      throw uci::base::UCIException("Error in enableRequestID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *requestID_Accessor;
}

uci::type::LAR_MDT& LAR_MDT::clearRequestID() noexcept {
  requestID_Accessor.reset();
  return *this;
}

const uci::type::LAR_MDT::CapabilityID& LAR_MDT::getCapabilityID() const {
  return *capabilityID_Accessor;
}

uci::type::LAR_MDT::CapabilityID& LAR_MDT::getCapabilityID() {
  return *capabilityID_Accessor;
}

uci::type::LAR_MDT& LAR_MDT::setCapabilityID(const uci::type::LAR_MDT::CapabilityID& accessor) {
  if (&accessor != capabilityID_Accessor.get()) {
    capabilityID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::LAR_RelationEnum& LAR_MDT::getLAR_Type() const {
  return *lAR_Type_Accessor;
}

uci::type::LAR_RelationEnum& LAR_MDT::getLAR_Type() {
  return *lAR_Type_Accessor;
}

uci::type::LAR_MDT& LAR_MDT::setLAR_Type(const uci::type::LAR_RelationEnum& accessor) {
  if (&accessor != lAR_Type_Accessor.get()) {
    lAR_Type_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::LAR_MDT& LAR_MDT::setLAR_Type(uci::type::LAR_RelationEnum::EnumerationItem value) {
  lAR_Type_Accessor->setValue(value);
  return *this;
}


const uci::type::LAR_BasisEnum& LAR_MDT::getBasis() const {
  return *basis_Accessor;
}

uci::type::LAR_BasisEnum& LAR_MDT::getBasis() {
  return *basis_Accessor;
}

uci::type::LAR_MDT& LAR_MDT::setBasis(const uci::type::LAR_BasisEnum& accessor) {
  if (&accessor != basis_Accessor.get()) {
    basis_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::LAR_MDT& LAR_MDT::setBasis(uci::type::LAR_BasisEnum::EnumerationItem value) {
  basis_Accessor->setValue(value);
  return *this;
}


xs::Boolean LAR_MDT::getGeneratedByWeapon() const {
  return generatedByWeapon_Accessor;
}

uci::type::LAR_MDT& LAR_MDT::setGeneratedByWeapon(xs::Boolean value) {
  generatedByWeapon_Accessor = value;
  return *this;
}


const uci::type::ZoneType& LAR_MDT::getRegion() const {
  return *region_Accessor;
}

uci::type::ZoneType& LAR_MDT::getRegion() {
  return *region_Accessor;
}

uci::type::LAR_MDT& LAR_MDT::setRegion(const uci::type::ZoneType& accessor) {
  enableRegion(accessor.getAccessorType());
  if (&accessor != region_Accessor.get()) {
    region_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

uci::type::ZoneType& LAR_MDT::enableRegion(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::zoneType : type};
  if ((!region_Accessor) || (region_Accessor->getAccessorType() != requestedType)) {
    region_Accessor = ZoneType::create(requestedType);
    if (!region_Accessor) {
      throw uci::base::UCIException("Error in enableRegion(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *region_Accessor;
}

const uci::type::LAR_DetailsType& LAR_MDT::getLAR_Details() const {
  return *lAR_Details_Accessor;
}

uci::type::LAR_DetailsType& LAR_MDT::getLAR_Details() {
  return *lAR_Details_Accessor;
}

uci::type::LAR_MDT& LAR_MDT::setLAR_Details(const uci::type::LAR_DetailsType& accessor) {
  if (&accessor != lAR_Details_Accessor.get()) {
    lAR_Details_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<LAR_MDT> LAR_MDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::lAR_MDT : type};
  return (requestedType == uci::type::accessorType::lAR_MDT) ? boost::make_unique<LAR_MDT>() : nullptr;
}

/**  */
namespace LAR_MDT_Names {

constexpr const char* Extern_Type_Name{"LAR_MDT"};
constexpr const char* LAR_ID_Name{"LAR_ID"};
constexpr const char* RequestID_Name{"RequestID"};
constexpr const char* CapabilityID_Name{"CapabilityID"};
constexpr const char* LAR_Type_Name{"LAR_Type"};
constexpr const char* Basis_Name{"Basis"};
constexpr const char* GeneratedByWeapon_Name{"GeneratedByWeapon"};
constexpr const char* Region_Name{"Region"};
constexpr const char* LAR_Details_Name{"LAR_Details"};

} // namespace LAR_MDT_Names

void LAR_MDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::LAR_MDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = LAR_MDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + LAR_MDT_Names::LAR_ID_Name) {
      LAR_ID_Type::deserialize(valueType.second, accessor.getLAR_ID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + LAR_MDT_Names::RequestID_Name) {
      RequestID_Type::deserialize(valueType.second, accessor.enableRequestID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + LAR_MDT_Names::CapabilityID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::LAR_MDT::CapabilityID& boundedList = accessor.getCapabilityID();
        const uci::type::LAR_MDT::CapabilityID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::CapabilityID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + LAR_MDT_Names::LAR_Type_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getLAR_Type().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + LAR_MDT_Names::Basis_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getBasis().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + LAR_MDT_Names::GeneratedByWeapon_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setGeneratedByWeapon(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + LAR_MDT_Names::Region_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableRegion(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + LAR_MDT_Names::LAR_Details_Name) {
      LAR_DetailsType::deserialize(valueType.second, accessor.getLAR_Details(), nodeName, nsPrefix);
    }
  }
}

std::string LAR_MDT::serialize(const uci::type::LAR_MDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? LAR_MDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, LAR_MDT_Names::Extern_Type_Name);
  }
  LAR_ID_Type::serialize(accessor.getLAR_ID(), node, LAR_MDT_Names::LAR_ID_Name);
  if (accessor.hasRequestID()) {
    RequestID_Type::serialize(accessor.getRequestID(), node, LAR_MDT_Names::RequestID_Name);
  }
  {
    const uci::type::LAR_MDT::CapabilityID& boundedList = accessor.getCapabilityID();
    for (uci::type::LAR_MDT::CapabilityID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::CapabilityID_Type::serialize(boundedList.at(i), node, LAR_MDT_Names::CapabilityID_Name);
    }
  }
  LAR_RelationEnum::serialize(accessor.getLAR_Type(), node, LAR_MDT_Names::LAR_Type_Name, false);
  LAR_BasisEnum::serialize(accessor.getBasis(), node, LAR_MDT_Names::Basis_Name, false);
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getGeneratedByWeapon(), node, LAR_MDT_Names::GeneratedByWeapon_Name);
  ZoneType::serialize(accessor.getRegion(), node, LAR_MDT_Names::Region_Name);
  LAR_DetailsType::serialize(accessor.getLAR_Details(), node, LAR_MDT_Names::LAR_Details_Name);
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

uci::type::LAR_MDT& LAR_MDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::LAR_MDT>().release());
}

uci::type::LAR_MDT& LAR_MDT::create(const uci::type::LAR_MDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::LAR_MDT> newAccessor{boost::make_unique<asb_uci::type::LAR_MDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void LAR_MDT::destroy(uci::type::LAR_MDT& accessor) {
  delete dynamic_cast<asb_uci::type::LAR_MDT*>(&accessor);
}

} // namespace type

} // namespace uci

