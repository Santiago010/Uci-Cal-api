/** @file GatewayCapabilitySettingsCommandBaseType.cpp
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

#include "../../../include/asb_uci/type/GatewayCapabilitySettingsCommandBaseType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CapabilityPrecedenceType.h"
#include "../../../include/asb_uci/type/CapabilityStateType.h"
#include "../../../include/asb_uci/type/CommandBaseType.h"
#include "../../../include/asb_uci/type/MDF_CommandType.h"
#include "../../../include/asb_uci/type/ServiceID_Type.h"
#include "../../../include/asb_uci/util/DerivedTypesCopier.h"
#include "../../../include/asb_uci/util/DerivedTypesCreator.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/DerivedTypesSerializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityPrecedenceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityStateType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/GatewayCapabilitySettingsCommandBaseType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MDF_CommandType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ServiceID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

GatewayCapabilitySettingsCommandBaseType::GatewayCapabilitySettingsCommandBaseType()
  : gatewayServiceID_Accessor{boost::make_unique<ServiceID_Type>()},
    capabilityPrecedence_Accessor{boost::make_unique<CapabilityPrecedence>(0, SIZE_MAX)},
    capabilityState_Accessor{boost::make_unique<CapabilityState>(0, SIZE_MAX)} {
}

GatewayCapabilitySettingsCommandBaseType::~GatewayCapabilitySettingsCommandBaseType() = default;

void GatewayCapabilitySettingsCommandBaseType::copy(const uci::type::GatewayCapabilitySettingsCommandBaseType& accessor) {
  copyImpl(accessor, false);
}

void GatewayCapabilitySettingsCommandBaseType::copyImpl(const uci::type::GatewayCapabilitySettingsCommandBaseType& accessor, const bool checkIfDerivation) {
  if (&accessor != this) {
    if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::gatewayCapabilitySettingsCommandBaseType)) {
      CommandBaseType::copyImpl(accessor, false);
      const auto& accessorImpl = dynamic_cast<const GatewayCapabilitySettingsCommandBaseType&>(accessor);
      setGatewayServiceID(*(accessorImpl.gatewayServiceID_Accessor));
      if (accessorImpl.activateMDF_Accessor) {
        setActivateMDF(*(accessorImpl.activateMDF_Accessor));
      } else {
        activateMDF_Accessor.reset();
      }
      setCapabilityPrecedence(*(accessorImpl.capabilityPrecedence_Accessor));
      setCapabilityState(*(accessorImpl.capabilityState_Accessor));
    } else {
      asb_uci::util::DerivedTypesCopier::copy(accessor, *this);
    }
  }
}

void GatewayCapabilitySettingsCommandBaseType::reset() noexcept {
  CommandBaseType::reset();
  gatewayServiceID_Accessor->reset();
  activateMDF_Accessor.reset();
  capabilityPrecedence_Accessor->reset();
  capabilityState_Accessor->reset();
}

const uci::type::ServiceID_Type& GatewayCapabilitySettingsCommandBaseType::getGatewayServiceID() const {
  return *gatewayServiceID_Accessor;
}

uci::type::ServiceID_Type& GatewayCapabilitySettingsCommandBaseType::getGatewayServiceID() {
  return *gatewayServiceID_Accessor;
}

uci::type::GatewayCapabilitySettingsCommandBaseType& GatewayCapabilitySettingsCommandBaseType::setGatewayServiceID(const uci::type::ServiceID_Type& accessor) {
  if (&accessor != gatewayServiceID_Accessor.get()) {
    gatewayServiceID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::MDF_CommandType& GatewayCapabilitySettingsCommandBaseType::getActivateMDF_() const {
  if (activateMDF_Accessor) {
    return *activateMDF_Accessor;
  }
  throw uci::base::UCIException("Error in getActivateMDF(): An attempt was made to get an optional field that was not enabled, call hasActivateMDF() to determine if it is safe to call getActivateMDF()");
}

const uci::type::MDF_CommandType& GatewayCapabilitySettingsCommandBaseType::getActivateMDF() const {
  return getActivateMDF_();
}

uci::type::MDF_CommandType& GatewayCapabilitySettingsCommandBaseType::getActivateMDF() {
  return getActivateMDF_();
}

uci::type::GatewayCapabilitySettingsCommandBaseType& GatewayCapabilitySettingsCommandBaseType::setActivateMDF(const uci::type::MDF_CommandType& accessor) {
  enableActivateMDF();
  if (&accessor != activateMDF_Accessor.get()) {
    activateMDF_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool GatewayCapabilitySettingsCommandBaseType::hasActivateMDF() const noexcept {
  return static_cast<bool>(activateMDF_Accessor);
}

uci::type::MDF_CommandType& GatewayCapabilitySettingsCommandBaseType::enableActivateMDF(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::mDF_CommandType : type};
  if ((!activateMDF_Accessor) || (activateMDF_Accessor->getAccessorType() != requestedType)) {
    activateMDF_Accessor = MDF_CommandType::create(requestedType);
    if (!activateMDF_Accessor) {
      throw uci::base::UCIException("Error in enableActivateMDF(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *activateMDF_Accessor;
}

uci::type::GatewayCapabilitySettingsCommandBaseType& GatewayCapabilitySettingsCommandBaseType::clearActivateMDF() noexcept {
  activateMDF_Accessor.reset();
  return *this;
}

const uci::type::GatewayCapabilitySettingsCommandBaseType::CapabilityPrecedence& GatewayCapabilitySettingsCommandBaseType::getCapabilityPrecedence() const {
  return *capabilityPrecedence_Accessor;
}

uci::type::GatewayCapabilitySettingsCommandBaseType::CapabilityPrecedence& GatewayCapabilitySettingsCommandBaseType::getCapabilityPrecedence() {
  return *capabilityPrecedence_Accessor;
}

uci::type::GatewayCapabilitySettingsCommandBaseType& GatewayCapabilitySettingsCommandBaseType::setCapabilityPrecedence(const uci::type::GatewayCapabilitySettingsCommandBaseType::CapabilityPrecedence& accessor) {
  if (&accessor != capabilityPrecedence_Accessor.get()) {
    capabilityPrecedence_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::GatewayCapabilitySettingsCommandBaseType::CapabilityState& GatewayCapabilitySettingsCommandBaseType::getCapabilityState() const {
  return *capabilityState_Accessor;
}

uci::type::GatewayCapabilitySettingsCommandBaseType::CapabilityState& GatewayCapabilitySettingsCommandBaseType::getCapabilityState() {
  return *capabilityState_Accessor;
}

uci::type::GatewayCapabilitySettingsCommandBaseType& GatewayCapabilitySettingsCommandBaseType::setCapabilityState(const uci::type::GatewayCapabilitySettingsCommandBaseType::CapabilityState& accessor) {
  if (&accessor != capabilityState_Accessor.get()) {
    capabilityState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<GatewayCapabilitySettingsCommandBaseType> GatewayCapabilitySettingsCommandBaseType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::gatewayCapabilitySettingsCommandBaseType : type};
  return std::unique_ptr<GatewayCapabilitySettingsCommandBaseType>(dynamic_cast<GatewayCapabilitySettingsCommandBaseType*>(asb_uci::util::DerivedTypesCreator::create(requestedType)));
}

/**  */
namespace GatewayCapabilitySettingsCommandBaseType_Names {

constexpr const char* Extern_Type_Name{"GatewayCapabilitySettingsCommandBaseType"};
constexpr const char* GatewayServiceID_Name{"GatewayServiceID"};
constexpr const char* ActivateMDF_Name{"ActivateMDF"};
constexpr const char* CapabilityPrecedence_Name{"CapabilityPrecedence"};
constexpr const char* CapabilityState_Name{"CapabilityState"};

} // namespace GatewayCapabilitySettingsCommandBaseType_Names

void GatewayCapabilitySettingsCommandBaseType::deserialize(const boost::property_tree::ptree& propTree, uci::type::GatewayCapabilitySettingsCommandBaseType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = GatewayCapabilitySettingsCommandBaseType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + GatewayCapabilitySettingsCommandBaseType_Names::GatewayServiceID_Name) {
      ServiceID_Type::deserialize(valueType.second, accessor.getGatewayServiceID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + GatewayCapabilitySettingsCommandBaseType_Names::ActivateMDF_Name) {
      MDF_CommandType::deserialize(valueType.second, accessor.enableActivateMDF(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + GatewayCapabilitySettingsCommandBaseType_Names::CapabilityPrecedence_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::GatewayCapabilitySettingsCommandBaseType::CapabilityPrecedence& boundedList = accessor.getCapabilityPrecedence();
        const uci::type::GatewayCapabilitySettingsCommandBaseType::CapabilityPrecedence::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::CapabilityPrecedenceType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + GatewayCapabilitySettingsCommandBaseType_Names::CapabilityState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::GatewayCapabilitySettingsCommandBaseType::CapabilityState& boundedList = accessor.getCapabilityState();
        const uci::type::GatewayCapabilitySettingsCommandBaseType::CapabilityState::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::CapabilityStateType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  CommandBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string GatewayCapabilitySettingsCommandBaseType::serialize(const uci::type::GatewayCapabilitySettingsCommandBaseType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? GatewayCapabilitySettingsCommandBaseType_Names::Extern_Type_Name : nodeName)};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::gatewayCapabilitySettingsCommandBaseType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      asb_uci::util::SerializationHelpers::addTypeAttribute(node, GatewayCapabilitySettingsCommandBaseType_Names::Extern_Type_Name);
    }
    CommandBaseType::serialize(accessor, node, "", false, false, false);
    ServiceID_Type::serialize(accessor.getGatewayServiceID(), node, GatewayCapabilitySettingsCommandBaseType_Names::GatewayServiceID_Name);
    if (accessor.hasActivateMDF()) {
      MDF_CommandType::serialize(accessor.getActivateMDF(), node, GatewayCapabilitySettingsCommandBaseType_Names::ActivateMDF_Name);
    }
    {
      const uci::type::GatewayCapabilitySettingsCommandBaseType::CapabilityPrecedence& boundedList = accessor.getCapabilityPrecedence();
      for (uci::type::GatewayCapabilitySettingsCommandBaseType::CapabilityPrecedence::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::CapabilityPrecedenceType::serialize(boundedList.at(i), node, GatewayCapabilitySettingsCommandBaseType_Names::CapabilityPrecedence_Name);
      }
    }
    {
      const uci::type::GatewayCapabilitySettingsCommandBaseType::CapabilityState& boundedList = accessor.getCapabilityState();
      for (uci::type::GatewayCapabilitySettingsCommandBaseType::CapabilityState::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::CapabilityStateType::serialize(boundedList.at(i), node, GatewayCapabilitySettingsCommandBaseType_Names::CapabilityState_Name);
      }
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

uci::type::GatewayCapabilitySettingsCommandBaseType& GatewayCapabilitySettingsCommandBaseType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::GatewayCapabilitySettingsCommandBaseType>().release());
}

uci::type::GatewayCapabilitySettingsCommandBaseType& GatewayCapabilitySettingsCommandBaseType::create(const uci::type::GatewayCapabilitySettingsCommandBaseType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::GatewayCapabilitySettingsCommandBaseType> newAccessor{boost::make_unique<asb_uci::type::GatewayCapabilitySettingsCommandBaseType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void GatewayCapabilitySettingsCommandBaseType::destroy(uci::type::GatewayCapabilitySettingsCommandBaseType& accessor) {
  delete dynamic_cast<asb_uci::type::GatewayCapabilitySettingsCommandBaseType*>(&accessor);
}

} // namespace type

} // namespace uci

