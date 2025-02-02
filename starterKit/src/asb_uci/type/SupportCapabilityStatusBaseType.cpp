/** @file SupportCapabilityStatusBaseType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:15 PM
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

#include "../../../include/asb_uci/type/SupportCapabilityStatusBaseType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/AvailabilityInfoType.h"
#include "../../../include/asb_uci/type/SupportCapabilityID_Type.h"
#include "../../../include/asb_uci/util/DerivedTypesCopier.h"
#include "../../../include/asb_uci/util/DerivedTypesCreator.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/DerivedTypesSerializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AvailabilityInfoType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SupportCapabilityID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SupportCapabilityStatusBaseType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SupportCapabilityStatusBaseType::SupportCapabilityStatusBaseType()
  : supportCapabilityID_Accessor{boost::make_unique<SupportCapabilityID_Type>()},
    availabilityInfo_Accessor{boost::make_unique<AvailabilityInfoType>()} {
}

SupportCapabilityStatusBaseType::~SupportCapabilityStatusBaseType() = default;

void SupportCapabilityStatusBaseType::copy(const uci::type::SupportCapabilityStatusBaseType& accessor) {
  copyImpl(accessor, false);
}

void SupportCapabilityStatusBaseType::copyImpl(const uci::type::SupportCapabilityStatusBaseType& accessor, const bool checkIfDerivation) {
  if (&accessor != this) {
    if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::supportCapabilityStatusBaseType)) {
      const auto& accessorImpl = dynamic_cast<const SupportCapabilityStatusBaseType&>(accessor);
      setSupportCapabilityID(*(accessorImpl.supportCapabilityID_Accessor));
      setAvailabilityInfo(*(accessorImpl.availabilityInfo_Accessor));
    } else {
      asb_uci::util::DerivedTypesCopier::copy(accessor, *this);
    }
  }
}

void SupportCapabilityStatusBaseType::reset() noexcept {
  supportCapabilityID_Accessor->reset();
  availabilityInfo_Accessor->reset();
}

const uci::type::SupportCapabilityID_Type& SupportCapabilityStatusBaseType::getSupportCapabilityID() const {
  return *supportCapabilityID_Accessor;
}

uci::type::SupportCapabilityID_Type& SupportCapabilityStatusBaseType::getSupportCapabilityID() {
  return *supportCapabilityID_Accessor;
}

uci::type::SupportCapabilityStatusBaseType& SupportCapabilityStatusBaseType::setSupportCapabilityID(const uci::type::SupportCapabilityID_Type& accessor) {
  if (&accessor != supportCapabilityID_Accessor.get()) {
    supportCapabilityID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::AvailabilityInfoType& SupportCapabilityStatusBaseType::getAvailabilityInfo() const {
  return *availabilityInfo_Accessor;
}

uci::type::AvailabilityInfoType& SupportCapabilityStatusBaseType::getAvailabilityInfo() {
  return *availabilityInfo_Accessor;
}

uci::type::SupportCapabilityStatusBaseType& SupportCapabilityStatusBaseType::setAvailabilityInfo(const uci::type::AvailabilityInfoType& accessor) {
  if (&accessor != availabilityInfo_Accessor.get()) {
    availabilityInfo_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<SupportCapabilityStatusBaseType> SupportCapabilityStatusBaseType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::supportCapabilityStatusBaseType : type};
  return std::unique_ptr<SupportCapabilityStatusBaseType>(dynamic_cast<SupportCapabilityStatusBaseType*>(asb_uci::util::DerivedTypesCreator::create(requestedType)));
}

/**  */
namespace SupportCapabilityStatusBaseType_Names {

constexpr const char* Extern_Type_Name{"SupportCapabilityStatusBaseType"};
constexpr const char* SupportCapabilityID_Name{"SupportCapabilityID"};
constexpr const char* AvailabilityInfo_Name{"AvailabilityInfo"};

} // namespace SupportCapabilityStatusBaseType_Names

void SupportCapabilityStatusBaseType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SupportCapabilityStatusBaseType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SupportCapabilityStatusBaseType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SupportCapabilityStatusBaseType_Names::SupportCapabilityID_Name) {
      SupportCapabilityID_Type::deserialize(valueType.second, accessor.getSupportCapabilityID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SupportCapabilityStatusBaseType_Names::AvailabilityInfo_Name) {
      AvailabilityInfoType::deserialize(valueType.second, accessor.getAvailabilityInfo(), nodeName, nsPrefix);
    }
  }
}

std::string SupportCapabilityStatusBaseType::serialize(const uci::type::SupportCapabilityStatusBaseType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SupportCapabilityStatusBaseType_Names::Extern_Type_Name : nodeName)};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::supportCapabilityStatusBaseType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      asb_uci::util::SerializationHelpers::addTypeAttribute(node, SupportCapabilityStatusBaseType_Names::Extern_Type_Name);
    }
    SupportCapabilityID_Type::serialize(accessor.getSupportCapabilityID(), node, SupportCapabilityStatusBaseType_Names::SupportCapabilityID_Name);
    AvailabilityInfoType::serialize(accessor.getAvailabilityInfo(), node, SupportCapabilityStatusBaseType_Names::AvailabilityInfo_Name);
    if (createNode) {
      propTree.add_child(generatedNodeName, node);
    }
  } else {
    asb_uci::util::DerivedTypesSerializer::serialize(accessor, propTree, nodeName, createNode);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace asb_uci

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

uci::type::SupportCapabilityStatusBaseType& SupportCapabilityStatusBaseType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SupportCapabilityStatusBaseType>().release());
}

uci::type::SupportCapabilityStatusBaseType& SupportCapabilityStatusBaseType::create(const uci::type::SupportCapabilityStatusBaseType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SupportCapabilityStatusBaseType> newAccessor{boost::make_unique<asb_uci::type::SupportCapabilityStatusBaseType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SupportCapabilityStatusBaseType::destroy(uci::type::SupportCapabilityStatusBaseType& accessor) {
  delete dynamic_cast<asb_uci::type::SupportCapabilityStatusBaseType*>(&accessor);
}

} // namespace type

} // namespace uci

