/** @file OrbitalSurveillanceSubCapabilityDetailsChoiceType.cpp
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

#include "../../../include/asb_uci/type/OrbitalSurveillanceSubCapabilityDetailsChoiceType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CharacterizationObjectiveType.h"
#include "../../../include/asb_uci/type/DeploymentDetectionType.h"
#include "../../../include/asb_uci/type/ManeuverDetectionType.h"
#include "../../../include/asb_uci/type/MultiObjectType.h"
#include "../../../include/asb_uci/type/OrbitAccuracyType.h"
#include "../../../include/asb_uci/type/OrbitalSurveillanceSearchType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CharacterizationObjectiveType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DeploymentDetectionType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ManeuverDetectionType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MultiObjectType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitAccuracyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitalSurveillanceSearchType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitalSurveillanceSubCapabilityDetailsChoiceType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OrbitalSurveillanceSubCapabilityDetailsChoiceType::OrbitalSurveillanceSubCapabilityDetailsChoiceType() = default;

OrbitalSurveillanceSubCapabilityDetailsChoiceType::~OrbitalSurveillanceSubCapabilityDetailsChoiceType() = default;

void OrbitalSurveillanceSubCapabilityDetailsChoiceType::copy(const uci::type::OrbitalSurveillanceSubCapabilityDetailsChoiceType& accessor) {
  copyImpl(accessor, false);
}

void OrbitalSurveillanceSubCapabilityDetailsChoiceType::copyImpl(const uci::type::OrbitalSurveillanceSubCapabilityDetailsChoiceType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const OrbitalSurveillanceSubCapabilityDetailsChoiceType&>(accessor);
    if (accessorImpl.search_Accessor) {
      setSearch(*(accessorImpl.search_Accessor));
    } else {
      search_Accessor.reset();
    }
    if (accessorImpl.orbitAccuracy_Accessor) {
      setOrbitAccuracy(*(accessorImpl.orbitAccuracy_Accessor));
    } else {
      orbitAccuracy_Accessor.reset();
    }
    if (accessorImpl.characterization_Accessor) {
      setCharacterization(*(accessorImpl.characterization_Accessor));
    } else {
      characterization_Accessor.reset();
    }
    if (accessorImpl.multiObject_Accessor) {
      setMultiObject(*(accessorImpl.multiObject_Accessor));
    } else {
      multiObject_Accessor.reset();
    }
    if (accessorImpl.maneuverDetection_Accessor) {
      setManeuverDetection(*(accessorImpl.maneuverDetection_Accessor));
    } else {
      maneuverDetection_Accessor.reset();
    }
    if (accessorImpl.deploymentDetection_Accessor) {
      setDeploymentDetection(*(accessorImpl.deploymentDetection_Accessor));
    } else {
      deploymentDetection_Accessor.reset();
    }
  }
}

void OrbitalSurveillanceSubCapabilityDetailsChoiceType::reset() noexcept {
  search_Accessor.reset();
  orbitAccuracy_Accessor.reset();
  characterization_Accessor.reset();
  multiObject_Accessor.reset();
  maneuverDetection_Accessor.reset();
  deploymentDetection_Accessor.reset();
}

uci::type::OrbitalSurveillanceSubCapabilityDetailsChoiceType::OrbitalSurveillanceSubCapabilityDetailsChoiceTypeChoice OrbitalSurveillanceSubCapabilityDetailsChoiceType::getOrbitalSurveillanceSubCapabilityDetailsChoiceTypeChoiceOrdinal() const noexcept {
  if (search_Accessor) {
    return ORBITALSURVEILLANCESUBCAPABILITYDETAILSCHOICETYPE_CHOICE_SEARCH;
  }
  if (orbitAccuracy_Accessor) {
    return ORBITALSURVEILLANCESUBCAPABILITYDETAILSCHOICETYPE_CHOICE_ORBITACCURACY;
  }
  if (characterization_Accessor) {
    return ORBITALSURVEILLANCESUBCAPABILITYDETAILSCHOICETYPE_CHOICE_CHARACTERIZATION;
  }
  if (multiObject_Accessor) {
    return ORBITALSURVEILLANCESUBCAPABILITYDETAILSCHOICETYPE_CHOICE_MULTIOBJECT;
  }
  if (maneuverDetection_Accessor) {
    return ORBITALSURVEILLANCESUBCAPABILITYDETAILSCHOICETYPE_CHOICE_MANEUVERDETECTION;
  }
  if (deploymentDetection_Accessor) {
    return ORBITALSURVEILLANCESUBCAPABILITYDETAILSCHOICETYPE_CHOICE_DEPLOYMENTDETECTION;
  }
  return ORBITALSURVEILLANCESUBCAPABILITYDETAILSCHOICETYPE_CHOICE_NONE;
}

uci::type::OrbitalSurveillanceSubCapabilityDetailsChoiceType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::setOrbitalSurveillanceSubCapabilityDetailsChoiceTypeChoiceOrdinal(uci::type::OrbitalSurveillanceSubCapabilityDetailsChoiceType::OrbitalSurveillanceSubCapabilityDetailsChoiceTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case ORBITALSURVEILLANCESUBCAPABILITYDETAILSCHOICETYPE_CHOICE_SEARCH:
      chooseSearch("setOrbitalSurveillanceSubCapabilityDetailsChoiceTypeChoiceOrdinal", type);
      break;
    case ORBITALSURVEILLANCESUBCAPABILITYDETAILSCHOICETYPE_CHOICE_ORBITACCURACY:
      chooseOrbitAccuracy("setOrbitalSurveillanceSubCapabilityDetailsChoiceTypeChoiceOrdinal", type);
      break;
    case ORBITALSURVEILLANCESUBCAPABILITYDETAILSCHOICETYPE_CHOICE_CHARACTERIZATION:
      chooseCharacterization("setOrbitalSurveillanceSubCapabilityDetailsChoiceTypeChoiceOrdinal", type);
      break;
    case ORBITALSURVEILLANCESUBCAPABILITYDETAILSCHOICETYPE_CHOICE_MULTIOBJECT:
      chooseMultiObject("setOrbitalSurveillanceSubCapabilityDetailsChoiceTypeChoiceOrdinal", type);
      break;
    case ORBITALSURVEILLANCESUBCAPABILITYDETAILSCHOICETYPE_CHOICE_MANEUVERDETECTION:
      chooseManeuverDetection("setOrbitalSurveillanceSubCapabilityDetailsChoiceTypeChoiceOrdinal", type);
      break;
    case ORBITALSURVEILLANCESUBCAPABILITYDETAILSCHOICETYPE_CHOICE_DEPLOYMENTDETECTION:
      chooseDeploymentDetection("setOrbitalSurveillanceSubCapabilityDetailsChoiceTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setOrbitalSurveillanceSubCapabilityDetailsChoiceTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::OrbitalSurveillanceSearchType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::getSearch_() const {
  if (search_Accessor) {
    return *search_Accessor;
  }
  throw uci::base::UCIException("Error in getSearch(): Unable to get Search, field not selected");
}

const uci::type::OrbitalSurveillanceSearchType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::getSearch() const {
  return getSearch_();
}

uci::type::OrbitalSurveillanceSearchType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::getSearch() {
  return getSearch_();
}

uci::type::OrbitalSurveillanceSubCapabilityDetailsChoiceType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::setSearch(const uci::type::OrbitalSurveillanceSearchType& accessor) {
  chooseSearch();
  if (&accessor != search_Accessor.get()) {
    search_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OrbitalSurveillanceSubCapabilityDetailsChoiceType::isSearch() const noexcept {
  return static_cast<bool>(search_Accessor);
}

uci::type::OrbitalSurveillanceSearchType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::chooseSearch(const std::string& method, uci::base::accessorType::AccessorType type) {
  orbitAccuracy_Accessor.reset();
  characterization_Accessor.reset();
  multiObject_Accessor.reset();
  maneuverDetection_Accessor.reset();
  deploymentDetection_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitalSurveillanceSearchType : type};
  if ((!search_Accessor) || (search_Accessor->getAccessorType() != requestedType)) {
    search_Accessor = OrbitalSurveillanceSearchType::create(type);
    if (!search_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *search_Accessor;
}

uci::type::OrbitalSurveillanceSearchType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::chooseSearch(uci::base::accessorType::AccessorType type) {
  return chooseSearch("chooseSearch", type);
}

uci::type::OrbitAccuracyType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::getOrbitAccuracy_() const {
  if (orbitAccuracy_Accessor) {
    return *orbitAccuracy_Accessor;
  }
  throw uci::base::UCIException("Error in getOrbitAccuracy(): Unable to get OrbitAccuracy, field not selected");
}

const uci::type::OrbitAccuracyType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::getOrbitAccuracy() const {
  return getOrbitAccuracy_();
}

uci::type::OrbitAccuracyType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::getOrbitAccuracy() {
  return getOrbitAccuracy_();
}

uci::type::OrbitalSurveillanceSubCapabilityDetailsChoiceType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::setOrbitAccuracy(const uci::type::OrbitAccuracyType& accessor) {
  chooseOrbitAccuracy();
  if (&accessor != orbitAccuracy_Accessor.get()) {
    orbitAccuracy_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OrbitalSurveillanceSubCapabilityDetailsChoiceType::isOrbitAccuracy() const noexcept {
  return static_cast<bool>(orbitAccuracy_Accessor);
}

uci::type::OrbitAccuracyType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::chooseOrbitAccuracy(const std::string& method, uci::base::accessorType::AccessorType type) {
  search_Accessor.reset();
  characterization_Accessor.reset();
  multiObject_Accessor.reset();
  maneuverDetection_Accessor.reset();
  deploymentDetection_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitAccuracyType : type};
  if ((!orbitAccuracy_Accessor) || (orbitAccuracy_Accessor->getAccessorType() != requestedType)) {
    orbitAccuracy_Accessor = OrbitAccuracyType::create(type);
    if (!orbitAccuracy_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *orbitAccuracy_Accessor;
}

uci::type::OrbitAccuracyType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::chooseOrbitAccuracy(uci::base::accessorType::AccessorType type) {
  return chooseOrbitAccuracy("chooseOrbitAccuracy", type);
}

uci::type::CharacterizationObjectiveType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::getCharacterization_() const {
  if (characterization_Accessor) {
    return *characterization_Accessor;
  }
  throw uci::base::UCIException("Error in getCharacterization(): Unable to get Characterization, field not selected");
}

const uci::type::CharacterizationObjectiveType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::getCharacterization() const {
  return getCharacterization_();
}

uci::type::CharacterizationObjectiveType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::getCharacterization() {
  return getCharacterization_();
}

uci::type::OrbitalSurveillanceSubCapabilityDetailsChoiceType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::setCharacterization(const uci::type::CharacterizationObjectiveType& accessor) {
  chooseCharacterization(accessor.getAccessorType());
  if (&accessor != characterization_Accessor.get()) {
    characterization_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OrbitalSurveillanceSubCapabilityDetailsChoiceType::isCharacterization() const noexcept {
  return static_cast<bool>(characterization_Accessor);
}

uci::type::CharacterizationObjectiveType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::chooseCharacterization(const std::string& method, uci::base::accessorType::AccessorType type) {
  search_Accessor.reset();
  orbitAccuracy_Accessor.reset();
  multiObject_Accessor.reset();
  maneuverDetection_Accessor.reset();
  deploymentDetection_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::characterizationObjectiveType : type};
  if ((!characterization_Accessor) || (characterization_Accessor->getAccessorType() != requestedType)) {
    characterization_Accessor = CharacterizationObjectiveType::create(type);
    if (!characterization_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *characterization_Accessor;
}

uci::type::CharacterizationObjectiveType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::chooseCharacterization(uci::base::accessorType::AccessorType type) {
  return chooseCharacterization("chooseCharacterization", type);
}

uci::type::MultiObjectType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::getMultiObject_() const {
  if (multiObject_Accessor) {
    return *multiObject_Accessor;
  }
  throw uci::base::UCIException("Error in getMultiObject(): Unable to get MultiObject, field not selected");
}

const uci::type::MultiObjectType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::getMultiObject() const {
  return getMultiObject_();
}

uci::type::MultiObjectType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::getMultiObject() {
  return getMultiObject_();
}

uci::type::OrbitalSurveillanceSubCapabilityDetailsChoiceType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::setMultiObject(const uci::type::MultiObjectType& accessor) {
  chooseMultiObject("setMultiObject", accessor.getAccessorType());
  if (&accessor != multiObject_Accessor.get()) {
    multiObject_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool OrbitalSurveillanceSubCapabilityDetailsChoiceType::isMultiObject() const noexcept {
  return static_cast<bool>(multiObject_Accessor);
}

uci::type::MultiObjectType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::chooseMultiObject(const std::string& method, uci::base::accessorType::AccessorType type) {
  search_Accessor.reset();
  orbitAccuracy_Accessor.reset();
  characterization_Accessor.reset();
  maneuverDetection_Accessor.reset();
  deploymentDetection_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::multiObjectType : type};
  if ((!multiObject_Accessor) || (multiObject_Accessor->getAccessorType() != requestedType)) {
    multiObject_Accessor = MultiObjectType::create(type);
    if (!multiObject_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *multiObject_Accessor;
}

uci::type::MultiObjectType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::chooseMultiObject(uci::base::accessorType::AccessorType type) {
  return chooseMultiObject("chooseMultiObject", type);
}

uci::type::ManeuverDetectionType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::getManeuverDetection_() const {
  if (maneuverDetection_Accessor) {
    return *maneuverDetection_Accessor;
  }
  throw uci::base::UCIException("Error in getManeuverDetection(): Unable to get ManeuverDetection, field not selected");
}

const uci::type::ManeuverDetectionType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::getManeuverDetection() const {
  return getManeuverDetection_();
}

uci::type::ManeuverDetectionType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::getManeuverDetection() {
  return getManeuverDetection_();
}

uci::type::OrbitalSurveillanceSubCapabilityDetailsChoiceType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::setManeuverDetection(const uci::type::ManeuverDetectionType& accessor) {
  chooseManeuverDetection();
  if (&accessor != maneuverDetection_Accessor.get()) {
    maneuverDetection_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OrbitalSurveillanceSubCapabilityDetailsChoiceType::isManeuverDetection() const noexcept {
  return static_cast<bool>(maneuverDetection_Accessor);
}

uci::type::ManeuverDetectionType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::chooseManeuverDetection(const std::string& method, uci::base::accessorType::AccessorType type) {
  search_Accessor.reset();
  orbitAccuracy_Accessor.reset();
  characterization_Accessor.reset();
  multiObject_Accessor.reset();
  deploymentDetection_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::maneuverDetectionType : type};
  if ((!maneuverDetection_Accessor) || (maneuverDetection_Accessor->getAccessorType() != requestedType)) {
    maneuverDetection_Accessor = ManeuverDetectionType::create(type);
    if (!maneuverDetection_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *maneuverDetection_Accessor;
}

uci::type::ManeuverDetectionType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::chooseManeuverDetection(uci::base::accessorType::AccessorType type) {
  return chooseManeuverDetection("chooseManeuverDetection", type);
}

uci::type::DeploymentDetectionType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::getDeploymentDetection_() const {
  if (deploymentDetection_Accessor) {
    return *deploymentDetection_Accessor;
  }
  throw uci::base::UCIException("Error in getDeploymentDetection(): Unable to get DeploymentDetection, field not selected");
}

const uci::type::DeploymentDetectionType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::getDeploymentDetection() const {
  return getDeploymentDetection_();
}

uci::type::DeploymentDetectionType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::getDeploymentDetection() {
  return getDeploymentDetection_();
}

uci::type::OrbitalSurveillanceSubCapabilityDetailsChoiceType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::setDeploymentDetection(const uci::type::DeploymentDetectionType& accessor) {
  chooseDeploymentDetection();
  if (&accessor != deploymentDetection_Accessor.get()) {
    deploymentDetection_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OrbitalSurveillanceSubCapabilityDetailsChoiceType::isDeploymentDetection() const noexcept {
  return static_cast<bool>(deploymentDetection_Accessor);
}

uci::type::DeploymentDetectionType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::chooseDeploymentDetection(const std::string& method, uci::base::accessorType::AccessorType type) {
  search_Accessor.reset();
  orbitAccuracy_Accessor.reset();
  characterization_Accessor.reset();
  multiObject_Accessor.reset();
  maneuverDetection_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::deploymentDetectionType : type};
  if ((!deploymentDetection_Accessor) || (deploymentDetection_Accessor->getAccessorType() != requestedType)) {
    deploymentDetection_Accessor = DeploymentDetectionType::create(type);
    if (!deploymentDetection_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *deploymentDetection_Accessor;
}

uci::type::DeploymentDetectionType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::chooseDeploymentDetection(uci::base::accessorType::AccessorType type) {
  return chooseDeploymentDetection("chooseDeploymentDetection", type);
}

std::unique_ptr<OrbitalSurveillanceSubCapabilityDetailsChoiceType> OrbitalSurveillanceSubCapabilityDetailsChoiceType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitalSurveillanceSubCapabilityDetailsChoiceType : type};
  return (requestedType == uci::type::accessorType::orbitalSurveillanceSubCapabilityDetailsChoiceType) ? boost::make_unique<OrbitalSurveillanceSubCapabilityDetailsChoiceType>() : nullptr;
}

/**  */
namespace OrbitalSurveillanceSubCapabilityDetailsChoiceType_Names {

constexpr const char* Extern_Type_Name{"OrbitalSurveillanceSubCapabilityDetailsChoiceType"};
constexpr const char* Search_Name{"Search"};
constexpr const char* OrbitAccuracy_Name{"OrbitAccuracy"};
constexpr const char* Characterization_Name{"Characterization"};
constexpr const char* MultiObject_Name{"MultiObject"};
constexpr const char* ManeuverDetection_Name{"ManeuverDetection"};
constexpr const char* DeploymentDetection_Name{"DeploymentDetection"};

} // namespace OrbitalSurveillanceSubCapabilityDetailsChoiceType_Names

void OrbitalSurveillanceSubCapabilityDetailsChoiceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitalSurveillanceSubCapabilityDetailsChoiceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitalSurveillanceSubCapabilityDetailsChoiceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitalSurveillanceSubCapabilityDetailsChoiceType_Names::Search_Name) {
      OrbitalSurveillanceSearchType::deserialize(valueType.second, accessor.chooseSearch(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitalSurveillanceSubCapabilityDetailsChoiceType_Names::OrbitAccuracy_Name) {
      OrbitAccuracyType::deserialize(valueType.second, accessor.chooseOrbitAccuracy(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitalSurveillanceSubCapabilityDetailsChoiceType_Names::Characterization_Name) {
      CharacterizationObjectiveType::deserialize(valueType.second, accessor.chooseCharacterization(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitalSurveillanceSubCapabilityDetailsChoiceType_Names::MultiObject_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.chooseMultiObject(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitalSurveillanceSubCapabilityDetailsChoiceType_Names::ManeuverDetection_Name) {
      ManeuverDetectionType::deserialize(valueType.second, accessor.chooseManeuverDetection(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitalSurveillanceSubCapabilityDetailsChoiceType_Names::DeploymentDetection_Name) {
      DeploymentDetectionType::deserialize(valueType.second, accessor.chooseDeploymentDetection(), nodeName, nsPrefix);
    }
  }
}

std::string OrbitalSurveillanceSubCapabilityDetailsChoiceType::serialize(const uci::type::OrbitalSurveillanceSubCapabilityDetailsChoiceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? OrbitalSurveillanceSubCapabilityDetailsChoiceType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitalSurveillanceSubCapabilityDetailsChoiceType_Names::Extern_Type_Name);
  }
  if (accessor.isSearch()) {
    OrbitalSurveillanceSearchType::serialize(accessor.getSearch(), node, OrbitalSurveillanceSubCapabilityDetailsChoiceType_Names::Search_Name);
  } else if (accessor.isOrbitAccuracy()) {
    OrbitAccuracyType::serialize(accessor.getOrbitAccuracy(), node, OrbitalSurveillanceSubCapabilityDetailsChoiceType_Names::OrbitAccuracy_Name);
  } else if (accessor.isCharacterization()) {
    CharacterizationObjectiveType::serialize(accessor.getCharacterization(), node, OrbitalSurveillanceSubCapabilityDetailsChoiceType_Names::Characterization_Name);
  } else if (accessor.isMultiObject()) {
    MultiObjectType::serialize(accessor.getMultiObject(), node, OrbitalSurveillanceSubCapabilityDetailsChoiceType_Names::MultiObject_Name);
  } else if (accessor.isManeuverDetection()) {
    ManeuverDetectionType::serialize(accessor.getManeuverDetection(), node, OrbitalSurveillanceSubCapabilityDetailsChoiceType_Names::ManeuverDetection_Name);
  } else if (accessor.isDeploymentDetection()) {
    DeploymentDetectionType::serialize(accessor.getDeploymentDetection(), node, OrbitalSurveillanceSubCapabilityDetailsChoiceType_Names::DeploymentDetection_Name);
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

uci::type::OrbitalSurveillanceSubCapabilityDetailsChoiceType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OrbitalSurveillanceSubCapabilityDetailsChoiceType>().release());
}

uci::type::OrbitalSurveillanceSubCapabilityDetailsChoiceType& OrbitalSurveillanceSubCapabilityDetailsChoiceType::create(const uci::type::OrbitalSurveillanceSubCapabilityDetailsChoiceType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OrbitalSurveillanceSubCapabilityDetailsChoiceType> newAccessor{boost::make_unique<asb_uci::type::OrbitalSurveillanceSubCapabilityDetailsChoiceType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OrbitalSurveillanceSubCapabilityDetailsChoiceType::destroy(uci::type::OrbitalSurveillanceSubCapabilityDetailsChoiceType& accessor) {
  delete dynamic_cast<asb_uci::type::OrbitalSurveillanceSubCapabilityDetailsChoiceType*>(&accessor);
}

} // namespace type

} // namespace uci

