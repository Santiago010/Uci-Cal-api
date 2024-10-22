/** @file DLZ_MDT.cpp
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

#include "../../../include/asb_uci/type/DLZ_MDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CapabilityID_Type.h"
#include "../../../include/asb_uci/type/DLZ_DataType.h"
#include "../../../include/asb_uci/type/DLZ_ID_Type.h"
#include "../../../include/asb_uci/type/DLZ_RelationEnum.h"
#include "../../../include/asb_uci/type/RequestID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DLZ_DataType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DLZ_ID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DLZ_MDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DLZ_RelationEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequestID_Type.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

DLZ_MDT::DLZ_MDT()
  : dLZ_ID_Accessor{boost::make_unique<DLZ_ID_Type>()},
    capabilityID_Accessor{boost::make_unique<CapabilityID_Type>()},
    dLZ_Type_Accessor{boost::make_unique<DLZ_RelationEnum>()},
    dLZ_Data_Accessor{boost::make_unique<DLZ_DataType>()} {
}

DLZ_MDT::~DLZ_MDT() = default;

void DLZ_MDT::copy(const uci::type::DLZ_MDT& accessor) {
  copyImpl(accessor, false);
}

void DLZ_MDT::copyImpl(const uci::type::DLZ_MDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const DLZ_MDT&>(accessor);
    setDLZ_ID(*(accessorImpl.dLZ_ID_Accessor));
    if (accessorImpl.dLZ_RequestID_Accessor) {
      setDLZ_RequestID(*(accessorImpl.dLZ_RequestID_Accessor));
    } else {
      dLZ_RequestID_Accessor.reset();
    }
    setCapabilityID(*(accessorImpl.capabilityID_Accessor));
    setDLZ_Type(*(accessorImpl.dLZ_Type_Accessor));
    setGeneratedByWeapon(accessorImpl.generatedByWeapon_Accessor);
    setDLZ_Data(*(accessorImpl.dLZ_Data_Accessor));
  }
}

void DLZ_MDT::reset() noexcept {
  dLZ_ID_Accessor->reset();
  dLZ_RequestID_Accessor.reset();
  capabilityID_Accessor->reset();
  dLZ_Type_Accessor->reset();
  generatedByWeapon_Accessor = false;
  dLZ_Data_Accessor->reset();
}

const uci::type::DLZ_ID_Type& DLZ_MDT::getDLZ_ID() const {
  return *dLZ_ID_Accessor;
}

uci::type::DLZ_ID_Type& DLZ_MDT::getDLZ_ID() {
  return *dLZ_ID_Accessor;
}

uci::type::DLZ_MDT& DLZ_MDT::setDLZ_ID(const uci::type::DLZ_ID_Type& accessor) {
  if (&accessor != dLZ_ID_Accessor.get()) {
    dLZ_ID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::RequestID_Type& DLZ_MDT::getDLZ_RequestID_() const {
  if (dLZ_RequestID_Accessor) {
    return *dLZ_RequestID_Accessor;
  }
  throw uci::base::UCIException("Error in getDLZ_RequestID(): An attempt was made to get an optional field that was not enabled, call hasDLZ_RequestID() to determine if it is safe to call getDLZ_RequestID()");
}

const uci::type::RequestID_Type& DLZ_MDT::getDLZ_RequestID() const {
  return getDLZ_RequestID_();
}

uci::type::RequestID_Type& DLZ_MDT::getDLZ_RequestID() {
  return getDLZ_RequestID_();
}

uci::type::DLZ_MDT& DLZ_MDT::setDLZ_RequestID(const uci::type::RequestID_Type& accessor) {
  enableDLZ_RequestID();
  if (&accessor != dLZ_RequestID_Accessor.get()) {
    dLZ_RequestID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool DLZ_MDT::hasDLZ_RequestID() const noexcept {
  return static_cast<bool>(dLZ_RequestID_Accessor);
}

uci::type::RequestID_Type& DLZ_MDT::enableDLZ_RequestID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::requestID_Type : type};
  if ((!dLZ_RequestID_Accessor) || (dLZ_RequestID_Accessor->getAccessorType() != requestedType)) {
    dLZ_RequestID_Accessor = RequestID_Type::create(requestedType);
    if (!dLZ_RequestID_Accessor) {
      throw uci::base::UCIException("Error in enableDLZ_RequestID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *dLZ_RequestID_Accessor;
}

uci::type::DLZ_MDT& DLZ_MDT::clearDLZ_RequestID() noexcept {
  dLZ_RequestID_Accessor.reset();
  return *this;
}

const uci::type::CapabilityID_Type& DLZ_MDT::getCapabilityID() const {
  return *capabilityID_Accessor;
}

uci::type::CapabilityID_Type& DLZ_MDT::getCapabilityID() {
  return *capabilityID_Accessor;
}

uci::type::DLZ_MDT& DLZ_MDT::setCapabilityID(const uci::type::CapabilityID_Type& accessor) {
  if (&accessor != capabilityID_Accessor.get()) {
    capabilityID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::DLZ_RelationEnum& DLZ_MDT::getDLZ_Type() const {
  return *dLZ_Type_Accessor;
}

uci::type::DLZ_RelationEnum& DLZ_MDT::getDLZ_Type() {
  return *dLZ_Type_Accessor;
}

uci::type::DLZ_MDT& DLZ_MDT::setDLZ_Type(const uci::type::DLZ_RelationEnum& accessor) {
  if (&accessor != dLZ_Type_Accessor.get()) {
    dLZ_Type_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::DLZ_MDT& DLZ_MDT::setDLZ_Type(uci::type::DLZ_RelationEnum::EnumerationItem value) {
  dLZ_Type_Accessor->setValue(value);
  return *this;
}


xs::Boolean DLZ_MDT::getGeneratedByWeapon() const {
  return generatedByWeapon_Accessor;
}

uci::type::DLZ_MDT& DLZ_MDT::setGeneratedByWeapon(xs::Boolean value) {
  generatedByWeapon_Accessor = value;
  return *this;
}


const uci::type::DLZ_DataType& DLZ_MDT::getDLZ_Data() const {
  return *dLZ_Data_Accessor;
}

uci::type::DLZ_DataType& DLZ_MDT::getDLZ_Data() {
  return *dLZ_Data_Accessor;
}

uci::type::DLZ_MDT& DLZ_MDT::setDLZ_Data(const uci::type::DLZ_DataType& accessor) {
  if (&accessor != dLZ_Data_Accessor.get()) {
    dLZ_Data_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<DLZ_MDT> DLZ_MDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::dLZ_MDT : type};
  return (requestedType == uci::type::accessorType::dLZ_MDT) ? boost::make_unique<DLZ_MDT>() : nullptr;
}

/**  */
namespace DLZ_MDT_Names {

constexpr const char* Extern_Type_Name{"DLZ_MDT"};
constexpr const char* DLZ_ID_Name{"DLZ_ID"};
constexpr const char* DLZ_RequestID_Name{"DLZ_RequestID"};
constexpr const char* CapabilityID_Name{"CapabilityID"};
constexpr const char* DLZ_Type_Name{"DLZ_Type"};
constexpr const char* GeneratedByWeapon_Name{"GeneratedByWeapon"};
constexpr const char* DLZ_Data_Name{"DLZ_Data"};

} // namespace DLZ_MDT_Names

void DLZ_MDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::DLZ_MDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = DLZ_MDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + DLZ_MDT_Names::DLZ_ID_Name) {
      DLZ_ID_Type::deserialize(valueType.second, accessor.getDLZ_ID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DLZ_MDT_Names::DLZ_RequestID_Name) {
      RequestID_Type::deserialize(valueType.second, accessor.enableDLZ_RequestID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DLZ_MDT_Names::CapabilityID_Name) {
      CapabilityID_Type::deserialize(valueType.second, accessor.getCapabilityID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DLZ_MDT_Names::DLZ_Type_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getDLZ_Type().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + DLZ_MDT_Names::GeneratedByWeapon_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setGeneratedByWeapon(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_MDT_Names::DLZ_Data_Name) {
      DLZ_DataType::deserialize(valueType.second, accessor.getDLZ_Data(), nodeName, nsPrefix);
    }
  }
}

std::string DLZ_MDT::serialize(const uci::type::DLZ_MDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? DLZ_MDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, DLZ_MDT_Names::Extern_Type_Name);
  }
  DLZ_ID_Type::serialize(accessor.getDLZ_ID(), node, DLZ_MDT_Names::DLZ_ID_Name);
  if (accessor.hasDLZ_RequestID()) {
    RequestID_Type::serialize(accessor.getDLZ_RequestID(), node, DLZ_MDT_Names::DLZ_RequestID_Name);
  }
  CapabilityID_Type::serialize(accessor.getCapabilityID(), node, DLZ_MDT_Names::CapabilityID_Name);
  DLZ_RelationEnum::serialize(accessor.getDLZ_Type(), node, DLZ_MDT_Names::DLZ_Type_Name, false);
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getGeneratedByWeapon(), node, DLZ_MDT_Names::GeneratedByWeapon_Name);
  DLZ_DataType::serialize(accessor.getDLZ_Data(), node, DLZ_MDT_Names::DLZ_Data_Name);
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

uci::type::DLZ_MDT& DLZ_MDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::DLZ_MDT>().release());
}

uci::type::DLZ_MDT& DLZ_MDT::create(const uci::type::DLZ_MDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::DLZ_MDT> newAccessor{boost::make_unique<asb_uci::type::DLZ_MDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void DLZ_MDT::destroy(uci::type::DLZ_MDT& accessor) {
  delete dynamic_cast<asb_uci::type::DLZ_MDT*>(&accessor);
}

} // namespace type

} // namespace uci

