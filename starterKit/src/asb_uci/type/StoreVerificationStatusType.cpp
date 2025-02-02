/** @file StoreVerificationStatusType.cpp
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

#include "../../../include/asb_uci/type/StoreVerificationStatusType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CannotComplyType.h"
#include "../../../include/asb_uci/type/MessageDataVerificationEnum.h"
#include "../../../include/asb_uci/type/VisibleString256Type.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CannotComplyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MessageDataVerificationEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/StoreVerificationStatusType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString256Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

StoreVerificationStatusType::StoreVerificationStatusType()
  : verificationState_Accessor{boost::make_unique<MessageDataVerificationEnum>()} {
}

StoreVerificationStatusType::~StoreVerificationStatusType() = default;

void StoreVerificationStatusType::copy(const uci::type::StoreVerificationStatusType& accessor) {
  copyImpl(accessor, false);
}

void StoreVerificationStatusType::copyImpl(const uci::type::StoreVerificationStatusType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const StoreVerificationStatusType&>(accessor);
    setVerificationState(*(accessorImpl.verificationState_Accessor));
    if (accessorImpl.verificationStateReason_Accessor) {
      setVerificationStateReason(*(accessorImpl.verificationStateReason_Accessor));
    } else {
      verificationStateReason_Accessor.reset();
    }
    if (accessorImpl.mnemonic_Accessor) {
      setMnemonic(*(accessorImpl.mnemonic_Accessor));
    } else {
      mnemonic_Accessor.reset();
    }
  }
}

void StoreVerificationStatusType::reset() noexcept {
  verificationState_Accessor->reset();
  verificationStateReason_Accessor.reset();
  mnemonic_Accessor.reset();
}

const uci::type::MessageDataVerificationEnum& StoreVerificationStatusType::getVerificationState() const {
  return *verificationState_Accessor;
}

uci::type::MessageDataVerificationEnum& StoreVerificationStatusType::getVerificationState() {
  return *verificationState_Accessor;
}

uci::type::StoreVerificationStatusType& StoreVerificationStatusType::setVerificationState(const uci::type::MessageDataVerificationEnum& accessor) {
  if (&accessor != verificationState_Accessor.get()) {
    verificationState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::StoreVerificationStatusType& StoreVerificationStatusType::setVerificationState(uci::type::MessageDataVerificationEnum::EnumerationItem value) {
  verificationState_Accessor->setValue(value);
  return *this;
}


uci::type::CannotComplyType& StoreVerificationStatusType::getVerificationStateReason_() const {
  if (verificationStateReason_Accessor) {
    return *verificationStateReason_Accessor;
  }
  throw uci::base::UCIException("Error in getVerificationStateReason(): An attempt was made to get an optional field that was not enabled, call hasVerificationStateReason() to determine if it is safe to call getVerificationStateReason()");
}

const uci::type::CannotComplyType& StoreVerificationStatusType::getVerificationStateReason() const {
  return getVerificationStateReason_();
}

uci::type::CannotComplyType& StoreVerificationStatusType::getVerificationStateReason() {
  return getVerificationStateReason_();
}

uci::type::StoreVerificationStatusType& StoreVerificationStatusType::setVerificationStateReason(const uci::type::CannotComplyType& accessor) {
  enableVerificationStateReason(accessor.getAccessorType());
  if (&accessor != verificationStateReason_Accessor.get()) {
    verificationStateReason_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool StoreVerificationStatusType::hasVerificationStateReason() const noexcept {
  return static_cast<bool>(verificationStateReason_Accessor);
}

uci::type::CannotComplyType& StoreVerificationStatusType::enableVerificationStateReason(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::cannotComplyType : type};
  if ((!verificationStateReason_Accessor) || (verificationStateReason_Accessor->getAccessorType() != requestedType)) {
    verificationStateReason_Accessor = CannotComplyType::create(requestedType);
    if (!verificationStateReason_Accessor) {
      throw uci::base::UCIException("Error in enableVerificationStateReason(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *verificationStateReason_Accessor;
}

uci::type::StoreVerificationStatusType& StoreVerificationStatusType::clearVerificationStateReason() noexcept {
  verificationStateReason_Accessor.reset();
  return *this;
}

asb_uci::type::VisibleString256Type& StoreVerificationStatusType::getMnemonic_() const {
  if (mnemonic_Accessor) {
    return *mnemonic_Accessor;
  }
  throw uci::base::UCIException("Error in getMnemonic(): An attempt was made to get an optional field that was not enabled, call hasMnemonic() to determine if it is safe to call getMnemonic()");
}

const asb_uci::type::VisibleString256Type& StoreVerificationStatusType::getMnemonic() const {
  return getMnemonic_();
}

asb_uci::type::VisibleString256Type& StoreVerificationStatusType::getMnemonic() {
  return getMnemonic_();
}

uci::type::StoreVerificationStatusType& StoreVerificationStatusType::setMnemonic(const asb_uci::type::VisibleString256Type& value) {
  return setMnemonic(value.c_str());
}

uci::type::StoreVerificationStatusType& StoreVerificationStatusType::setMnemonic(const std::string& value) {
  return setMnemonic(value.c_str());
}

uci::type::StoreVerificationStatusType& StoreVerificationStatusType::setMnemonic(const char* value) {
  enableMnemonic().setStringValue(value);
  return *this;
}

bool StoreVerificationStatusType::hasMnemonic() const noexcept {
  return static_cast<bool>(mnemonic_Accessor);
}

asb_uci::type::VisibleString256Type& StoreVerificationStatusType::enableMnemonic(uci::base::accessorType::AccessorType type) {
  if (!mnemonic_Accessor) {
    mnemonic_Accessor =  asb_uci::type::VisibleString256Type::create(type);
  }
  return *mnemonic_Accessor;
}

uci::type::StoreVerificationStatusType& StoreVerificationStatusType::clearMnemonic() noexcept {
  mnemonic_Accessor.reset();
  return *this;
}

std::unique_ptr<StoreVerificationStatusType> StoreVerificationStatusType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::storeVerificationStatusType : type};
  return (requestedType == uci::type::accessorType::storeVerificationStatusType) ? boost::make_unique<StoreVerificationStatusType>() : nullptr;
}

/**  */
namespace StoreVerificationStatusType_Names {

constexpr const char* Extern_Type_Name{"StoreVerificationStatusType"};
constexpr const char* VerificationState_Name{"VerificationState"};
constexpr const char* VerificationStateReason_Name{"VerificationStateReason"};
constexpr const char* Mnemonic_Name{"Mnemonic"};

} // namespace StoreVerificationStatusType_Names

void StoreVerificationStatusType::deserialize(const boost::property_tree::ptree& propTree, uci::type::StoreVerificationStatusType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = StoreVerificationStatusType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + StoreVerificationStatusType_Names::VerificationState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getVerificationState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + StoreVerificationStatusType_Names::VerificationStateReason_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableVerificationStateReason(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + StoreVerificationStatusType_Names::Mnemonic_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMnemonic(*value);
      }
    }
  }
}

std::string StoreVerificationStatusType::serialize(const uci::type::StoreVerificationStatusType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? StoreVerificationStatusType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, StoreVerificationStatusType_Names::Extern_Type_Name);
  }
  MessageDataVerificationEnum::serialize(accessor.getVerificationState(), node, StoreVerificationStatusType_Names::VerificationState_Name, false);
  if (accessor.hasVerificationStateReason()) {
    CannotComplyType::serialize(accessor.getVerificationStateReason(), node, StoreVerificationStatusType_Names::VerificationStateReason_Name);
  }
  if (accessor.hasMnemonic()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getMnemonic(), node, StoreVerificationStatusType_Names::Mnemonic_Name);
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

uci::type::StoreVerificationStatusType& StoreVerificationStatusType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::StoreVerificationStatusType>().release());
}

uci::type::StoreVerificationStatusType& StoreVerificationStatusType::create(const uci::type::StoreVerificationStatusType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::StoreVerificationStatusType> newAccessor{boost::make_unique<asb_uci::type::StoreVerificationStatusType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void StoreVerificationStatusType::destroy(uci::type::StoreVerificationStatusType& accessor) {
  delete dynamic_cast<asb_uci::type::StoreVerificationStatusType*>(&accessor);
}

} // namespace type

} // namespace uci

