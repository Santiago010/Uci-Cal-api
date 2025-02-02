/** @file AirSampleCommandType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:11 PM
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

#include "../../../include/asb_uci/type/AirSampleCommandType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ActivityCommandBaseType.h"
#include "../../../include/asb_uci/type/AirSampleCapabilityCommandType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActivityCommandBaseType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AirSampleCapabilityCommandType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AirSampleCommandType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

AirSampleCommandType::AirSampleCommandType() = default;

AirSampleCommandType::~AirSampleCommandType() = default;

void AirSampleCommandType::copy(const uci::type::AirSampleCommandType& accessor) {
  copyImpl(accessor, false);
}

void AirSampleCommandType::copyImpl(const uci::type::AirSampleCommandType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const AirSampleCommandType&>(accessor);
    if (accessorImpl.capability_Accessor) {
      setCapability(*(accessorImpl.capability_Accessor));
    } else {
      capability_Accessor.reset();
    }
    if (accessorImpl.activity_Accessor) {
      setActivity(*(accessorImpl.activity_Accessor));
    } else {
      activity_Accessor.reset();
    }
  }
}

void AirSampleCommandType::reset() noexcept {
  capability_Accessor.reset();
  activity_Accessor.reset();
}

uci::type::AirSampleCommandType::AirSampleCommandTypeChoice AirSampleCommandType::getAirSampleCommandTypeChoiceOrdinal() const noexcept {
  if (capability_Accessor) {
    return AIRSAMPLECOMMANDTYPE_CHOICE_CAPABILITY;
  }
  if (activity_Accessor) {
    return AIRSAMPLECOMMANDTYPE_CHOICE_ACTIVITY;
  }
  return AIRSAMPLECOMMANDTYPE_CHOICE_NONE;
}

uci::type::AirSampleCommandType& AirSampleCommandType::setAirSampleCommandTypeChoiceOrdinal(uci::type::AirSampleCommandType::AirSampleCommandTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case AIRSAMPLECOMMANDTYPE_CHOICE_CAPABILITY:
      chooseCapability("setAirSampleCommandTypeChoiceOrdinal", type);
      break;
    case AIRSAMPLECOMMANDTYPE_CHOICE_ACTIVITY:
      chooseActivity("setAirSampleCommandTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setAirSampleCommandTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::AirSampleCapabilityCommandType& AirSampleCommandType::getCapability_() const {
  if (capability_Accessor) {
    return *capability_Accessor;
  }
  throw uci::base::UCIException("Error in getCapability(): Unable to get Capability, field not selected");
}

const uci::type::AirSampleCapabilityCommandType& AirSampleCommandType::getCapability() const {
  return getCapability_();
}

uci::type::AirSampleCapabilityCommandType& AirSampleCommandType::getCapability() {
  return getCapability_();
}

uci::type::AirSampleCommandType& AirSampleCommandType::setCapability(const uci::type::AirSampleCapabilityCommandType& accessor) {
  chooseCapability();
  if (&accessor != capability_Accessor.get()) {
    capability_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool AirSampleCommandType::isCapability() const noexcept {
  return static_cast<bool>(capability_Accessor);
}

uci::type::AirSampleCapabilityCommandType& AirSampleCommandType::chooseCapability(const std::string& method, uci::base::accessorType::AccessorType type) {
  activity_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::airSampleCapabilityCommandType : type};
  if ((!capability_Accessor) || (capability_Accessor->getAccessorType() != requestedType)) {
    capability_Accessor = AirSampleCapabilityCommandType::create(type);
    if (!capability_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *capability_Accessor;
}

uci::type::AirSampleCapabilityCommandType& AirSampleCommandType::chooseCapability(uci::base::accessorType::AccessorType type) {
  return chooseCapability("chooseCapability", type);
}

uci::type::ActivityCommandBaseType& AirSampleCommandType::getActivity_() const {
  if (activity_Accessor) {
    return *activity_Accessor;
  }
  throw uci::base::UCIException("Error in getActivity(): Unable to get Activity, field not selected");
}

const uci::type::ActivityCommandBaseType& AirSampleCommandType::getActivity() const {
  return getActivity_();
}

uci::type::ActivityCommandBaseType& AirSampleCommandType::getActivity() {
  return getActivity_();
}

uci::type::AirSampleCommandType& AirSampleCommandType::setActivity(const uci::type::ActivityCommandBaseType& accessor) {
  chooseActivity("setActivity", accessor.getAccessorType());
  if (&accessor != activity_Accessor.get()) {
    activity_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool AirSampleCommandType::isActivity() const noexcept {
  return static_cast<bool>(activity_Accessor);
}

uci::type::ActivityCommandBaseType& AirSampleCommandType::chooseActivity(const std::string& method, uci::base::accessorType::AccessorType type) {
  capability_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::activityCommandBaseType : type};
  if ((!activity_Accessor) || (activity_Accessor->getAccessorType() != requestedType)) {
    activity_Accessor = ActivityCommandBaseType::create(type);
    if (!activity_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *activity_Accessor;
}

uci::type::ActivityCommandBaseType& AirSampleCommandType::chooseActivity(uci::base::accessorType::AccessorType type) {
  return chooseActivity("chooseActivity", type);
}

std::unique_ptr<AirSampleCommandType> AirSampleCommandType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::airSampleCommandType : type};
  return (requestedType == uci::type::accessorType::airSampleCommandType) ? boost::make_unique<AirSampleCommandType>() : nullptr;
}

/**  */
namespace AirSampleCommandType_Names {

constexpr const char* Extern_Type_Name{"AirSampleCommandType"};
constexpr const char* Capability_Name{"Capability"};
constexpr const char* Activity_Name{"Activity"};

} // namespace AirSampleCommandType_Names

void AirSampleCommandType::deserialize(const boost::property_tree::ptree& propTree, uci::type::AirSampleCommandType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = AirSampleCommandType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + AirSampleCommandType_Names::Capability_Name) {
      AirSampleCapabilityCommandType::deserialize(valueType.second, accessor.chooseCapability(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + AirSampleCommandType_Names::Activity_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.chooseActivity(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    }
  }
}

std::string AirSampleCommandType::serialize(const uci::type::AirSampleCommandType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? AirSampleCommandType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, AirSampleCommandType_Names::Extern_Type_Name);
  }
  if (accessor.isCapability()) {
    AirSampleCapabilityCommandType::serialize(accessor.getCapability(), node, AirSampleCommandType_Names::Capability_Name);
  } else if (accessor.isActivity()) {
    ActivityCommandBaseType::serialize(accessor.getActivity(), node, AirSampleCommandType_Names::Activity_Name);
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

uci::type::AirSampleCommandType& AirSampleCommandType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::AirSampleCommandType>().release());
}

uci::type::AirSampleCommandType& AirSampleCommandType::create(const uci::type::AirSampleCommandType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::AirSampleCommandType> newAccessor{boost::make_unique<asb_uci::type::AirSampleCommandType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void AirSampleCommandType::destroy(uci::type::AirSampleCommandType& accessor) {
  delete dynamic_cast<asb_uci::type::AirSampleCommandType*>(&accessor);
}

} // namespace type

} // namespace uci

