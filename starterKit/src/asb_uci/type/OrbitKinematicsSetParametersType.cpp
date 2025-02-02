/** @file OrbitKinematicsSetParametersType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:14 PM
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

#include "../../../include/asb_uci/type/OrbitKinematicsSetParametersType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/OrbitalElementSetParametersType.h"
#include "../../../include/asb_uci/type/OrbitalEphemerisParametersType.h"
#include "../../../include/asb_uci/type/OrbitalVCM_ParametersType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitKinematicsSetParametersType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitalElementSetParametersType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitalEphemerisParametersType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitalVCM_ParametersType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OrbitKinematicsSetParametersType::OrbitKinematicsSetParametersType() = default;

OrbitKinematicsSetParametersType::~OrbitKinematicsSetParametersType() = default;

void OrbitKinematicsSetParametersType::copy(const uci::type::OrbitKinematicsSetParametersType& accessor) {
  copyImpl(accessor, false);
}

void OrbitKinematicsSetParametersType::copyImpl(const uci::type::OrbitKinematicsSetParametersType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const OrbitKinematicsSetParametersType&>(accessor);
    if (accessorImpl.elementSetParameters_Accessor) {
      setElementSetParameters(*(accessorImpl.elementSetParameters_Accessor));
    } else {
      elementSetParameters_Accessor.reset();
    }
    if (accessorImpl.ephemerisParameters_Accessor) {
      setEphemerisParameters(*(accessorImpl.ephemerisParameters_Accessor));
    } else {
      ephemerisParameters_Accessor.reset();
    }
    if (accessorImpl.vCM_Parameters_Accessor) {
      setVCM_Parameters(*(accessorImpl.vCM_Parameters_Accessor));
    } else {
      vCM_Parameters_Accessor.reset();
    }
  }
}

void OrbitKinematicsSetParametersType::reset() noexcept {
  elementSetParameters_Accessor.reset();
  ephemerisParameters_Accessor.reset();
  vCM_Parameters_Accessor.reset();
}

uci::type::OrbitalElementSetParametersType& OrbitKinematicsSetParametersType::getElementSetParameters_() const {
  if (elementSetParameters_Accessor) {
    return *elementSetParameters_Accessor;
  }
  throw uci::base::UCIException("Error in getElementSetParameters(): An attempt was made to get an optional field that was not enabled, call hasElementSetParameters() to determine if it is safe to call getElementSetParameters()");
}

const uci::type::OrbitalElementSetParametersType& OrbitKinematicsSetParametersType::getElementSetParameters() const {
  return getElementSetParameters_();
}

uci::type::OrbitalElementSetParametersType& OrbitKinematicsSetParametersType::getElementSetParameters() {
  return getElementSetParameters_();
}

uci::type::OrbitKinematicsSetParametersType& OrbitKinematicsSetParametersType::setElementSetParameters(const uci::type::OrbitalElementSetParametersType& accessor) {
  enableElementSetParameters();
  if (&accessor != elementSetParameters_Accessor.get()) {
    elementSetParameters_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OrbitKinematicsSetParametersType::hasElementSetParameters() const noexcept {
  return static_cast<bool>(elementSetParameters_Accessor);
}

uci::type::OrbitalElementSetParametersType& OrbitKinematicsSetParametersType::enableElementSetParameters(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitalElementSetParametersType : type};
  if ((!elementSetParameters_Accessor) || (elementSetParameters_Accessor->getAccessorType() != requestedType)) {
    elementSetParameters_Accessor = OrbitalElementSetParametersType::create(requestedType);
    if (!elementSetParameters_Accessor) {
      throw uci::base::UCIException("Error in enableElementSetParameters(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *elementSetParameters_Accessor;
}

uci::type::OrbitKinematicsSetParametersType& OrbitKinematicsSetParametersType::clearElementSetParameters() noexcept {
  elementSetParameters_Accessor.reset();
  return *this;
}

uci::type::OrbitalEphemerisParametersType& OrbitKinematicsSetParametersType::getEphemerisParameters_() const {
  if (ephemerisParameters_Accessor) {
    return *ephemerisParameters_Accessor;
  }
  throw uci::base::UCIException("Error in getEphemerisParameters(): An attempt was made to get an optional field that was not enabled, call hasEphemerisParameters() to determine if it is safe to call getEphemerisParameters()");
}

const uci::type::OrbitalEphemerisParametersType& OrbitKinematicsSetParametersType::getEphemerisParameters() const {
  return getEphemerisParameters_();
}

uci::type::OrbitalEphemerisParametersType& OrbitKinematicsSetParametersType::getEphemerisParameters() {
  return getEphemerisParameters_();
}

uci::type::OrbitKinematicsSetParametersType& OrbitKinematicsSetParametersType::setEphemerisParameters(const uci::type::OrbitalEphemerisParametersType& accessor) {
  enableEphemerisParameters();
  if (&accessor != ephemerisParameters_Accessor.get()) {
    ephemerisParameters_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OrbitKinematicsSetParametersType::hasEphemerisParameters() const noexcept {
  return static_cast<bool>(ephemerisParameters_Accessor);
}

uci::type::OrbitalEphemerisParametersType& OrbitKinematicsSetParametersType::enableEphemerisParameters(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitalEphemerisParametersType : type};
  if ((!ephemerisParameters_Accessor) || (ephemerisParameters_Accessor->getAccessorType() != requestedType)) {
    ephemerisParameters_Accessor = OrbitalEphemerisParametersType::create(requestedType);
    if (!ephemerisParameters_Accessor) {
      throw uci::base::UCIException("Error in enableEphemerisParameters(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *ephemerisParameters_Accessor;
}

uci::type::OrbitKinematicsSetParametersType& OrbitKinematicsSetParametersType::clearEphemerisParameters() noexcept {
  ephemerisParameters_Accessor.reset();
  return *this;
}

uci::type::OrbitalVCM_ParametersType& OrbitKinematicsSetParametersType::getVCM_Parameters_() const {
  if (vCM_Parameters_Accessor) {
    return *vCM_Parameters_Accessor;
  }
  throw uci::base::UCIException("Error in getVCM_Parameters(): An attempt was made to get an optional field that was not enabled, call hasVCM_Parameters() to determine if it is safe to call getVCM_Parameters()");
}

const uci::type::OrbitalVCM_ParametersType& OrbitKinematicsSetParametersType::getVCM_Parameters() const {
  return getVCM_Parameters_();
}

uci::type::OrbitalVCM_ParametersType& OrbitKinematicsSetParametersType::getVCM_Parameters() {
  return getVCM_Parameters_();
}

uci::type::OrbitKinematicsSetParametersType& OrbitKinematicsSetParametersType::setVCM_Parameters(const uci::type::OrbitalVCM_ParametersType& accessor) {
  enableVCM_Parameters();
  if (&accessor != vCM_Parameters_Accessor.get()) {
    vCM_Parameters_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OrbitKinematicsSetParametersType::hasVCM_Parameters() const noexcept {
  return static_cast<bool>(vCM_Parameters_Accessor);
}

uci::type::OrbitalVCM_ParametersType& OrbitKinematicsSetParametersType::enableVCM_Parameters(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitalVCM_ParametersType : type};
  if ((!vCM_Parameters_Accessor) || (vCM_Parameters_Accessor->getAccessorType() != requestedType)) {
    vCM_Parameters_Accessor = OrbitalVCM_ParametersType::create(requestedType);
    if (!vCM_Parameters_Accessor) {
      throw uci::base::UCIException("Error in enableVCM_Parameters(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *vCM_Parameters_Accessor;
}

uci::type::OrbitKinematicsSetParametersType& OrbitKinematicsSetParametersType::clearVCM_Parameters() noexcept {
  vCM_Parameters_Accessor.reset();
  return *this;
}

std::unique_ptr<OrbitKinematicsSetParametersType> OrbitKinematicsSetParametersType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitKinematicsSetParametersType : type};
  return (requestedType == uci::type::accessorType::orbitKinematicsSetParametersType) ? boost::make_unique<OrbitKinematicsSetParametersType>() : nullptr;
}

/**  */
namespace OrbitKinematicsSetParametersType_Names {

constexpr const char* Extern_Type_Name{"OrbitKinematicsSetParametersType"};
constexpr const char* ElementSetParameters_Name{"ElementSetParameters"};
constexpr const char* EphemerisParameters_Name{"EphemerisParameters"};
constexpr const char* VCM_Parameters_Name{"VCM_Parameters"};

} // namespace OrbitKinematicsSetParametersType_Names

void OrbitKinematicsSetParametersType::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitKinematicsSetParametersType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitKinematicsSetParametersType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitKinematicsSetParametersType_Names::ElementSetParameters_Name) {
      OrbitalElementSetParametersType::deserialize(valueType.second, accessor.enableElementSetParameters(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitKinematicsSetParametersType_Names::EphemerisParameters_Name) {
      OrbitalEphemerisParametersType::deserialize(valueType.second, accessor.enableEphemerisParameters(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitKinematicsSetParametersType_Names::VCM_Parameters_Name) {
      OrbitalVCM_ParametersType::deserialize(valueType.second, accessor.enableVCM_Parameters(), nodeName, nsPrefix);
    }
  }
}

std::string OrbitKinematicsSetParametersType::serialize(const uci::type::OrbitKinematicsSetParametersType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? OrbitKinematicsSetParametersType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitKinematicsSetParametersType_Names::Extern_Type_Name);
  }
  if (accessor.hasElementSetParameters()) {
    OrbitalElementSetParametersType::serialize(accessor.getElementSetParameters(), node, OrbitKinematicsSetParametersType_Names::ElementSetParameters_Name);
  }
  if (accessor.hasEphemerisParameters()) {
    OrbitalEphemerisParametersType::serialize(accessor.getEphemerisParameters(), node, OrbitKinematicsSetParametersType_Names::EphemerisParameters_Name);
  }
  if (accessor.hasVCM_Parameters()) {
    OrbitalVCM_ParametersType::serialize(accessor.getVCM_Parameters(), node, OrbitKinematicsSetParametersType_Names::VCM_Parameters_Name);
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

uci::type::OrbitKinematicsSetParametersType& OrbitKinematicsSetParametersType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OrbitKinematicsSetParametersType>().release());
}

uci::type::OrbitKinematicsSetParametersType& OrbitKinematicsSetParametersType::create(const uci::type::OrbitKinematicsSetParametersType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OrbitKinematicsSetParametersType> newAccessor{boost::make_unique<asb_uci::type::OrbitKinematicsSetParametersType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OrbitKinematicsSetParametersType::destroy(uci::type::OrbitKinematicsSetParametersType& accessor) {
  delete dynamic_cast<asb_uci::type::OrbitKinematicsSetParametersType*>(&accessor);
}

} // namespace type

} // namespace uci

