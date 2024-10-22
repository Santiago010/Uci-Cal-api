/** @file EnvironmentIdentityType.cpp
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

#include "../../../include/asb_uci/type/EnvironmentIdentityType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/EnvironmentEnum.h"
#include "../../../include/asb_uci/type/OrbitRegimeType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EnvironmentEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EnvironmentIdentityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitRegimeType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

EnvironmentIdentityType::EnvironmentIdentityType()
  : environment_Accessor{boost::make_unique<EnvironmentEnum>()} {
}

EnvironmentIdentityType::~EnvironmentIdentityType() = default;

void EnvironmentIdentityType::copy(const uci::type::EnvironmentIdentityType& accessor) {
  copyImpl(accessor, false);
}

void EnvironmentIdentityType::copyImpl(const uci::type::EnvironmentIdentityType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const EnvironmentIdentityType&>(accessor);
    setEnvironment(*(accessorImpl.environment_Accessor));
    if (accessorImpl.orbitRegime_Accessor) {
      setOrbitRegime(*(accessorImpl.orbitRegime_Accessor));
    } else {
      orbitRegime_Accessor.reset();
    }
  }
}

void EnvironmentIdentityType::reset() noexcept {
  environment_Accessor->reset();
  orbitRegime_Accessor.reset();
}

const uci::type::EnvironmentEnum& EnvironmentIdentityType::getEnvironment() const {
  return *environment_Accessor;
}

uci::type::EnvironmentEnum& EnvironmentIdentityType::getEnvironment() {
  return *environment_Accessor;
}

uci::type::EnvironmentIdentityType& EnvironmentIdentityType::setEnvironment(const uci::type::EnvironmentEnum& accessor) {
  if (&accessor != environment_Accessor.get()) {
    environment_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::EnvironmentIdentityType& EnvironmentIdentityType::setEnvironment(uci::type::EnvironmentEnum::EnumerationItem value) {
  environment_Accessor->setValue(value);
  return *this;
}


uci::type::OrbitRegimeType& EnvironmentIdentityType::getOrbitRegime_() const {
  if (orbitRegime_Accessor) {
    return *orbitRegime_Accessor;
  }
  throw uci::base::UCIException("Error in getOrbitRegime(): An attempt was made to get an optional field that was not enabled, call hasOrbitRegime() to determine if it is safe to call getOrbitRegime()");
}

const uci::type::OrbitRegimeType& EnvironmentIdentityType::getOrbitRegime() const {
  return getOrbitRegime_();
}

uci::type::OrbitRegimeType& EnvironmentIdentityType::getOrbitRegime() {
  return getOrbitRegime_();
}

uci::type::EnvironmentIdentityType& EnvironmentIdentityType::setOrbitRegime(const uci::type::OrbitRegimeType& accessor) {
  enableOrbitRegime();
  if (&accessor != orbitRegime_Accessor.get()) {
    orbitRegime_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool EnvironmentIdentityType::hasOrbitRegime() const noexcept {
  return static_cast<bool>(orbitRegime_Accessor);
}

uci::type::OrbitRegimeType& EnvironmentIdentityType::enableOrbitRegime(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitRegimeType : type};
  if ((!orbitRegime_Accessor) || (orbitRegime_Accessor->getAccessorType() != requestedType)) {
    orbitRegime_Accessor = OrbitRegimeType::create(requestedType);
    if (!orbitRegime_Accessor) {
      throw uci::base::UCIException("Error in enableOrbitRegime(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *orbitRegime_Accessor;
}

uci::type::EnvironmentIdentityType& EnvironmentIdentityType::clearOrbitRegime() noexcept {
  orbitRegime_Accessor.reset();
  return *this;
}

std::unique_ptr<EnvironmentIdentityType> EnvironmentIdentityType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::environmentIdentityType : type};
  return (requestedType == uci::type::accessorType::environmentIdentityType) ? boost::make_unique<EnvironmentIdentityType>() : nullptr;
}

/**  */
namespace EnvironmentIdentityType_Names {

constexpr const char* Extern_Type_Name{"EnvironmentIdentityType"};
constexpr const char* Environment_Name{"Environment"};
constexpr const char* OrbitRegime_Name{"OrbitRegime"};

} // namespace EnvironmentIdentityType_Names

void EnvironmentIdentityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::EnvironmentIdentityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EnvironmentIdentityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + EnvironmentIdentityType_Names::Environment_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getEnvironment().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + EnvironmentIdentityType_Names::OrbitRegime_Name) {
      OrbitRegimeType::deserialize(valueType.second, accessor.enableOrbitRegime(), nodeName, nsPrefix);
    }
  }
}

std::string EnvironmentIdentityType::serialize(const uci::type::EnvironmentIdentityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? EnvironmentIdentityType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, EnvironmentIdentityType_Names::Extern_Type_Name);
  }
  EnvironmentEnum::serialize(accessor.getEnvironment(), node, EnvironmentIdentityType_Names::Environment_Name, false);
  if (accessor.hasOrbitRegime()) {
    OrbitRegimeType::serialize(accessor.getOrbitRegime(), node, EnvironmentIdentityType_Names::OrbitRegime_Name);
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

uci::type::EnvironmentIdentityType& EnvironmentIdentityType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::EnvironmentIdentityType>().release());
}

uci::type::EnvironmentIdentityType& EnvironmentIdentityType::create(const uci::type::EnvironmentIdentityType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::EnvironmentIdentityType> newAccessor{boost::make_unique<asb_uci::type::EnvironmentIdentityType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void EnvironmentIdentityType::destroy(uci::type::EnvironmentIdentityType& accessor) {
  delete dynamic_cast<asb_uci::type::EnvironmentIdentityType*>(&accessor);
}

} // namespace type

} // namespace uci

