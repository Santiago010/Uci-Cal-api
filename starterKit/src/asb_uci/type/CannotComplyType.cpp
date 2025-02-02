/** @file CannotComplyType.cpp
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

#include "../../../include/asb_uci/type/CannotComplyType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CannotComplyEnum.h"
#include "../../../include/asb_uci/type/ID_Type.h"
#include "../../../include/asb_uci/type/VisibleString1024Type.h"
#include "../../../include/asb_uci/util/DerivedTypesCopier.h"
#include "../../../include/asb_uci/util/DerivedTypesCreator.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/DerivedTypesSerializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CannotComplyEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CannotComplyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString1024Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

CannotComplyType::CannotComplyType()
  : reason_Accessor{boost::make_unique<CannotComplyEnum>()} {
}

CannotComplyType::~CannotComplyType() = default;

void CannotComplyType::copy(const uci::type::CannotComplyType& accessor) {
  copyImpl(accessor, false);
}

void CannotComplyType::copyImpl(const uci::type::CannotComplyType& accessor, const bool checkIfDerivation) {
  if (&accessor != this) {
    if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::cannotComplyType)) {
      const auto& accessorImpl = dynamic_cast<const CannotComplyType&>(accessor);
      setReason(*(accessorImpl.reason_Accessor));
      if (accessorImpl.description_Accessor) {
        setDescription(*(accessorImpl.description_Accessor));
      } else {
        description_Accessor.reset();
      }
      if (accessorImpl.associatedID_Accessor) {
        setAssociatedID(*(accessorImpl.associatedID_Accessor));
      } else {
        associatedID_Accessor.reset();
      }
    } else {
      asb_uci::util::DerivedTypesCopier::copy(accessor, *this);
    }
  }
}

void CannotComplyType::reset() noexcept {
  reason_Accessor->reset();
  description_Accessor.reset();
  associatedID_Accessor.reset();
}

const uci::type::CannotComplyEnum& CannotComplyType::getReason() const {
  return *reason_Accessor;
}

uci::type::CannotComplyEnum& CannotComplyType::getReason() {
  return *reason_Accessor;
}

uci::type::CannotComplyType& CannotComplyType::setReason(const uci::type::CannotComplyEnum& accessor) {
  if (&accessor != reason_Accessor.get()) {
    reason_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::CannotComplyType& CannotComplyType::setReason(uci::type::CannotComplyEnum::EnumerationItem value) {
  reason_Accessor->setValue(value);
  return *this;
}


uci::type::VisibleString1024Type& CannotComplyType::getDescription_() const {
  if (description_Accessor) {
    return *description_Accessor;
  }
  throw uci::base::UCIException("Error in getDescription(): An attempt was made to get an optional field that was not enabled, call hasDescription() to determine if it is safe to call getDescription()");
}

const uci::type::VisibleString1024Type& CannotComplyType::getDescription() const {
  return getDescription_();
}

uci::type::VisibleString1024Type& CannotComplyType::getDescription() {
  return getDescription_();
}

uci::type::CannotComplyType& CannotComplyType::setDescription(const uci::type::VisibleString1024Type& value) {
  return setDescription(value.c_str());
}

uci::type::CannotComplyType& CannotComplyType::setDescription(const std::string& value) {
  return setDescription(value.c_str());
}

uci::type::CannotComplyType& CannotComplyType::setDescription(const char* value) {
  enableDescription().setStringValue(value);
  return *this;
}

bool CannotComplyType::hasDescription() const noexcept {
  return static_cast<bool>(description_Accessor);
}

uci::type::VisibleString1024Type& CannotComplyType::enableDescription(uci::base::accessorType::AccessorType type) {
  if (!description_Accessor) {
    description_Accessor = VisibleString1024Type::create(type);
  }
  return *description_Accessor;
}

uci::type::CannotComplyType& CannotComplyType::clearDescription() noexcept {
  description_Accessor.reset();
  return *this;
}

uci::type::ID_Type& CannotComplyType::getAssociatedID_() const {
  if (associatedID_Accessor) {
    return *associatedID_Accessor;
  }
  throw uci::base::UCIException("Error in getAssociatedID(): An attempt was made to get an optional field that was not enabled, call hasAssociatedID() to determine if it is safe to call getAssociatedID()");
}

const uci::type::ID_Type& CannotComplyType::getAssociatedID() const {
  return getAssociatedID_();
}

uci::type::ID_Type& CannotComplyType::getAssociatedID() {
  return getAssociatedID_();
}

uci::type::CannotComplyType& CannotComplyType::setAssociatedID(const uci::type::ID_Type& accessor) {
  enableAssociatedID(accessor.getAccessorType());
  if (&accessor != associatedID_Accessor.get()) {
    associatedID_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool CannotComplyType::hasAssociatedID() const noexcept {
  return static_cast<bool>(associatedID_Accessor);
}

uci::type::ID_Type& CannotComplyType::enableAssociatedID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::iD_Type : type};
  if ((!associatedID_Accessor) || (associatedID_Accessor->getAccessorType() != requestedType)) {
    associatedID_Accessor = ID_Type::create(requestedType);
    if (!associatedID_Accessor) {
      throw uci::base::UCIException("Error in enableAssociatedID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *associatedID_Accessor;
}

uci::type::CannotComplyType& CannotComplyType::clearAssociatedID() noexcept {
  associatedID_Accessor.reset();
  return *this;
}

std::unique_ptr<CannotComplyType> CannotComplyType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::cannotComplyType : type};
  return std::unique_ptr<CannotComplyType>(dynamic_cast<CannotComplyType*>(asb_uci::util::DerivedTypesCreator::create(requestedType)));
}

/**  */
namespace CannotComplyType_Names {

constexpr const char* Extern_Type_Name{"CannotComplyType"};
constexpr const char* Reason_Name{"Reason"};
constexpr const char* Description_Name{"Description"};
constexpr const char* AssociatedID_Name{"AssociatedID"};

} // namespace CannotComplyType_Names

void CannotComplyType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CannotComplyType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CannotComplyType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CannotComplyType_Names::Reason_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getReason().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + CannotComplyType_Names::Description_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setDescription(*value);
      }
    } else if (valueType.first == nsPrefix + CannotComplyType_Names::AssociatedID_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableAssociatedID(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    }
  }
}

std::string CannotComplyType::serialize(const uci::type::CannotComplyType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? CannotComplyType_Names::Extern_Type_Name : nodeName)};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::cannotComplyType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      asb_uci::util::SerializationHelpers::addTypeAttribute(node, CannotComplyType_Names::Extern_Type_Name);
    }
    CannotComplyEnum::serialize(accessor.getReason(), node, CannotComplyType_Names::Reason_Name, false);
    if (accessor.hasDescription()) {
      asb_uci::util::SerializationHelpers::serializeString(accessor.getDescription(), node, CannotComplyType_Names::Description_Name);
    }
    if (accessor.hasAssociatedID()) {
      ID_Type::serialize(accessor.getAssociatedID(), node, CannotComplyType_Names::AssociatedID_Name);
    }
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

uci::type::CannotComplyType& CannotComplyType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::CannotComplyType>().release());
}

uci::type::CannotComplyType& CannotComplyType::create(const uci::type::CannotComplyType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::CannotComplyType> newAccessor{boost::make_unique<asb_uci::type::CannotComplyType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void CannotComplyType::destroy(uci::type::CannotComplyType& accessor) {
  delete dynamic_cast<asb_uci::type::CannotComplyType*>(&accessor);
}

} // namespace type

} // namespace uci

