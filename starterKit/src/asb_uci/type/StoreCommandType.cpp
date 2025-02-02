/** @file StoreCommandType.cpp
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

#include "../../../include/asb_uci/type/StoreCommandType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/EmptyType.h"
#include "../../../include/asb_uci/type/ForeignKeyType.h"
#include "../../../include/asb_uci/type/ReleaseConsentType.h"
#include "../../../include/asb_uci/type/StoreType.h"
#include "../../../include/asb_uci/type/Velocity2D_Type.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EmptyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ForeignKeyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ReleaseConsentType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/StoreCommandType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/StoreType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Velocity2D_Type.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

StoreCommandType::StoreCommandType() = default;

StoreCommandType::~StoreCommandType() = default;

void StoreCommandType::copy(const uci::type::StoreCommandType& accessor) {
  copyImpl(accessor, false);
}

void StoreCommandType::copyImpl(const uci::type::StoreCommandType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const StoreCommandType&>(accessor);
    if (accessorImpl.nextStoreStation_Accessor) {
      setNextStoreStation(*(accessorImpl.nextStoreStation_Accessor));
    } else {
      nextStoreStation_Accessor.reset();
    }
    if (accessorImpl.nextStoreType_Accessor) {
      setNextStoreType(*(accessorImpl.nextStoreType_Accessor));
    } else {
      nextStoreType_Accessor.reset();
    }
    overrideLAR_Accessor = (accessorImpl.overrideLAR_Accessor ? accessorImpl.overrideLAR_Accessor : boost::none);
    overrideAttitudeConstraints_Accessor = (accessorImpl.overrideAttitudeConstraints_Accessor ? accessorImpl.overrideAttitudeConstraints_Accessor : boost::none);
    masterArm_Accessor = (accessorImpl.masterArm_Accessor ? accessorImpl.masterArm_Accessor : boost::none);
    if (accessorImpl.releaseConsent_Accessor) {
      setReleaseConsent(*(accessorImpl.releaseConsent_Accessor));
    } else {
      releaseConsent_Accessor.reset();
    }
    lAR_CalculationWindHold_Accessor = (accessorImpl.lAR_CalculationWindHold_Accessor ? accessorImpl.lAR_CalculationWindHold_Accessor : boost::none);
    if (accessorImpl.lAR_CalculationWindOverride_Accessor) {
      setLAR_CalculationWindOverride(*(accessorImpl.lAR_CalculationWindOverride_Accessor));
    } else {
      lAR_CalculationWindOverride_Accessor.reset();
    }
    if (accessorImpl.verifyInventory_Accessor) {
      setVerifyInventory(*(accessorImpl.verifyInventory_Accessor));
    } else {
      verifyInventory_Accessor.reset();
    }
  }
}

void StoreCommandType::reset() noexcept {
  nextStoreStation_Accessor.reset();
  nextStoreType_Accessor.reset();
  overrideLAR_Accessor.reset();
  overrideAttitudeConstraints_Accessor.reset();
  masterArm_Accessor.reset();
  releaseConsent_Accessor.reset();
  lAR_CalculationWindHold_Accessor.reset();
  lAR_CalculationWindOverride_Accessor.reset();
  verifyInventory_Accessor.reset();
}

uci::type::StoreCommandType::StoreCommandTypeChoice StoreCommandType::getStoreCommandTypeChoiceOrdinal() const noexcept {
  if (nextStoreStation_Accessor) {
    return STORECOMMANDTYPE_CHOICE_NEXTSTORESTATION;
  }
  if (nextStoreType_Accessor) {
    return STORECOMMANDTYPE_CHOICE_NEXTSTORETYPE;
  }
  if (overrideLAR_Accessor) {
    return STORECOMMANDTYPE_CHOICE_OVERRIDELAR;
  }
  if (overrideAttitudeConstraints_Accessor) {
    return STORECOMMANDTYPE_CHOICE_OVERRIDEATTITUDECONSTRAINTS;
  }
  if (masterArm_Accessor) {
    return STORECOMMANDTYPE_CHOICE_MASTERARM;
  }
  if (releaseConsent_Accessor) {
    return STORECOMMANDTYPE_CHOICE_RELEASECONSENT;
  }
  if (lAR_CalculationWindHold_Accessor) {
    return STORECOMMANDTYPE_CHOICE_LAR_CALCULATIONWINDHOLD;
  }
  if (lAR_CalculationWindOverride_Accessor) {
    return STORECOMMANDTYPE_CHOICE_LAR_CALCULATIONWINDOVERRIDE;
  }
  if (verifyInventory_Accessor) {
    return STORECOMMANDTYPE_CHOICE_VERIFYINVENTORY;
  }
  return STORECOMMANDTYPE_CHOICE_NONE;
}

uci::type::StoreCommandType& StoreCommandType::setStoreCommandTypeChoiceOrdinal(uci::type::StoreCommandType::StoreCommandTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case STORECOMMANDTYPE_CHOICE_NEXTSTORESTATION:
      chooseNextStoreStation("setStoreCommandTypeChoiceOrdinal", type);
      break;
    case STORECOMMANDTYPE_CHOICE_NEXTSTORETYPE:
      chooseNextStoreType("setStoreCommandTypeChoiceOrdinal", type);
      break;
    case STORECOMMANDTYPE_CHOICE_OVERRIDELAR:
      chooseOverrideLAR();
      break;
    case STORECOMMANDTYPE_CHOICE_OVERRIDEATTITUDECONSTRAINTS:
      chooseOverrideAttitudeConstraints();
      break;
    case STORECOMMANDTYPE_CHOICE_MASTERARM:
      chooseMasterArm();
      break;
    case STORECOMMANDTYPE_CHOICE_RELEASECONSENT:
      chooseReleaseConsent("setStoreCommandTypeChoiceOrdinal", type);
      break;
    case STORECOMMANDTYPE_CHOICE_LAR_CALCULATIONWINDHOLD:
      chooseLAR_CalculationWindHold();
      break;
    case STORECOMMANDTYPE_CHOICE_LAR_CALCULATIONWINDOVERRIDE:
      chooseLAR_CalculationWindOverride("setStoreCommandTypeChoiceOrdinal", type);
      break;
    case STORECOMMANDTYPE_CHOICE_VERIFYINVENTORY:
      chooseVerifyInventory("setStoreCommandTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setStoreCommandTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::ForeignKeyType& StoreCommandType::getNextStoreStation_() const {
  if (nextStoreStation_Accessor) {
    return *nextStoreStation_Accessor;
  }
  throw uci::base::UCIException("Error in getNextStoreStation(): Unable to get NextStoreStation, field not selected");
}

const uci::type::ForeignKeyType& StoreCommandType::getNextStoreStation() const {
  return getNextStoreStation_();
}

uci::type::ForeignKeyType& StoreCommandType::getNextStoreStation() {
  return getNextStoreStation_();
}

uci::type::StoreCommandType& StoreCommandType::setNextStoreStation(const uci::type::ForeignKeyType& accessor) {
  chooseNextStoreStation("setNextStoreStation", accessor.getAccessorType());
  if (&accessor != nextStoreStation_Accessor.get()) {
    nextStoreStation_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool StoreCommandType::isNextStoreStation() const noexcept {
  return static_cast<bool>(nextStoreStation_Accessor);
}

uci::type::ForeignKeyType& StoreCommandType::chooseNextStoreStation(const std::string& method, uci::base::accessorType::AccessorType type) {
  nextStoreType_Accessor.reset();
  overrideLAR_Accessor.reset();
  overrideAttitudeConstraints_Accessor.reset();
  masterArm_Accessor.reset();
  releaseConsent_Accessor.reset();
  lAR_CalculationWindHold_Accessor.reset();
  lAR_CalculationWindOverride_Accessor.reset();
  verifyInventory_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::foreignKeyType : type};
  if ((!nextStoreStation_Accessor) || (nextStoreStation_Accessor->getAccessorType() != requestedType)) {
    nextStoreStation_Accessor = ForeignKeyType::create(type);
    if (!nextStoreStation_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *nextStoreStation_Accessor;
}

uci::type::ForeignKeyType& StoreCommandType::chooseNextStoreStation(uci::base::accessorType::AccessorType type) {
  return chooseNextStoreStation("chooseNextStoreStation", type);
}

uci::type::StoreType& StoreCommandType::getNextStoreType_() const {
  if (nextStoreType_Accessor) {
    return *nextStoreType_Accessor;
  }
  throw uci::base::UCIException("Error in getNextStoreType(): Unable to get NextStoreType, field not selected");
}

const uci::type::StoreType& StoreCommandType::getNextStoreType() const {
  return getNextStoreType_();
}

uci::type::StoreType& StoreCommandType::getNextStoreType() {
  return getNextStoreType_();
}

uci::type::StoreCommandType& StoreCommandType::setNextStoreType(const uci::type::StoreType& accessor) {
  chooseNextStoreType("setNextStoreType", accessor.getAccessorType());
  if (&accessor != nextStoreType_Accessor.get()) {
    nextStoreType_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool StoreCommandType::isNextStoreType() const noexcept {
  return static_cast<bool>(nextStoreType_Accessor);
}

uci::type::StoreType& StoreCommandType::chooseNextStoreType(const std::string& method, uci::base::accessorType::AccessorType type) {
  nextStoreStation_Accessor.reset();
  overrideLAR_Accessor.reset();
  overrideAttitudeConstraints_Accessor.reset();
  masterArm_Accessor.reset();
  releaseConsent_Accessor.reset();
  lAR_CalculationWindHold_Accessor.reset();
  lAR_CalculationWindOverride_Accessor.reset();
  verifyInventory_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::storeType : type};
  if ((!nextStoreType_Accessor) || (nextStoreType_Accessor->getAccessorType() != requestedType)) {
    nextStoreType_Accessor = StoreType::create(type);
    if (!nextStoreType_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *nextStoreType_Accessor;
}

uci::type::StoreType& StoreCommandType::chooseNextStoreType(uci::base::accessorType::AccessorType type) {
  return chooseNextStoreType("chooseNextStoreType", type);
}

xs::Boolean StoreCommandType::getOverrideLAR() const {
  if (overrideLAR_Accessor) {
    return *overrideLAR_Accessor;
  }
  throw uci::base::UCIException("Error in getOverrideLAR(): Unable to get OverrideLAR, field not selected");
}

uci::type::StoreCommandType& StoreCommandType::setOverrideLAR(xs::Boolean value) {
  chooseOverrideLAR();
  overrideLAR_Accessor = value;
  return *this;
}

bool StoreCommandType::isOverrideLAR() const noexcept {
  return static_cast<bool>(overrideLAR_Accessor);
}

void StoreCommandType::chooseOverrideLAR() {
  nextStoreStation_Accessor.reset();
  nextStoreType_Accessor.reset();
  overrideAttitudeConstraints_Accessor.reset();
  masterArm_Accessor.reset();
  releaseConsent_Accessor.reset();
  lAR_CalculationWindHold_Accessor.reset();
  lAR_CalculationWindOverride_Accessor.reset();
  verifyInventory_Accessor.reset();
  if (!overrideLAR_Accessor) {
    overrideLAR_Accessor = boost::optional<asb_xs::Boolean>();
  }
}

xs::Boolean StoreCommandType::getOverrideAttitudeConstraints() const {
  if (overrideAttitudeConstraints_Accessor) {
    return *overrideAttitudeConstraints_Accessor;
  }
  throw uci::base::UCIException("Error in getOverrideAttitudeConstraints(): Unable to get OverrideAttitudeConstraints, field not selected");
}

uci::type::StoreCommandType& StoreCommandType::setOverrideAttitudeConstraints(xs::Boolean value) {
  chooseOverrideAttitudeConstraints();
  overrideAttitudeConstraints_Accessor = value;
  return *this;
}

bool StoreCommandType::isOverrideAttitudeConstraints() const noexcept {
  return static_cast<bool>(overrideAttitudeConstraints_Accessor);
}

void StoreCommandType::chooseOverrideAttitudeConstraints() {
  nextStoreStation_Accessor.reset();
  nextStoreType_Accessor.reset();
  overrideLAR_Accessor.reset();
  masterArm_Accessor.reset();
  releaseConsent_Accessor.reset();
  lAR_CalculationWindHold_Accessor.reset();
  lAR_CalculationWindOverride_Accessor.reset();
  verifyInventory_Accessor.reset();
  if (!overrideAttitudeConstraints_Accessor) {
    overrideAttitudeConstraints_Accessor = boost::optional<asb_xs::Boolean>();
  }
}

xs::Boolean StoreCommandType::getMasterArm() const {
  if (masterArm_Accessor) {
    return *masterArm_Accessor;
  }
  throw uci::base::UCIException("Error in getMasterArm(): Unable to get MasterArm, field not selected");
}

uci::type::StoreCommandType& StoreCommandType::setMasterArm(xs::Boolean value) {
  chooseMasterArm();
  masterArm_Accessor = value;
  return *this;
}

bool StoreCommandType::isMasterArm() const noexcept {
  return static_cast<bool>(masterArm_Accessor);
}

void StoreCommandType::chooseMasterArm() {
  nextStoreStation_Accessor.reset();
  nextStoreType_Accessor.reset();
  overrideLAR_Accessor.reset();
  overrideAttitudeConstraints_Accessor.reset();
  releaseConsent_Accessor.reset();
  lAR_CalculationWindHold_Accessor.reset();
  lAR_CalculationWindOverride_Accessor.reset();
  verifyInventory_Accessor.reset();
  if (!masterArm_Accessor) {
    masterArm_Accessor = boost::optional<asb_xs::Boolean>();
  }
}

uci::type::ReleaseConsentType& StoreCommandType::getReleaseConsent_() const {
  if (releaseConsent_Accessor) {
    return *releaseConsent_Accessor;
  }
  throw uci::base::UCIException("Error in getReleaseConsent(): Unable to get ReleaseConsent, field not selected");
}

const uci::type::ReleaseConsentType& StoreCommandType::getReleaseConsent() const {
  return getReleaseConsent_();
}

uci::type::ReleaseConsentType& StoreCommandType::getReleaseConsent() {
  return getReleaseConsent_();
}

uci::type::StoreCommandType& StoreCommandType::setReleaseConsent(const uci::type::ReleaseConsentType& accessor) {
  chooseReleaseConsent();
  if (&accessor != releaseConsent_Accessor.get()) {
    releaseConsent_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool StoreCommandType::isReleaseConsent() const noexcept {
  return static_cast<bool>(releaseConsent_Accessor);
}

uci::type::ReleaseConsentType& StoreCommandType::chooseReleaseConsent(const std::string& method, uci::base::accessorType::AccessorType type) {
  nextStoreStation_Accessor.reset();
  nextStoreType_Accessor.reset();
  overrideLAR_Accessor.reset();
  overrideAttitudeConstraints_Accessor.reset();
  masterArm_Accessor.reset();
  lAR_CalculationWindHold_Accessor.reset();
  lAR_CalculationWindOverride_Accessor.reset();
  verifyInventory_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::releaseConsentType : type};
  if ((!releaseConsent_Accessor) || (releaseConsent_Accessor->getAccessorType() != requestedType)) {
    releaseConsent_Accessor = ReleaseConsentType::create(type);
    if (!releaseConsent_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *releaseConsent_Accessor;
}

uci::type::ReleaseConsentType& StoreCommandType::chooseReleaseConsent(uci::base::accessorType::AccessorType type) {
  return chooseReleaseConsent("chooseReleaseConsent", type);
}

xs::Boolean StoreCommandType::getLAR_CalculationWindHold() const {
  if (lAR_CalculationWindHold_Accessor) {
    return *lAR_CalculationWindHold_Accessor;
  }
  throw uci::base::UCIException("Error in getLAR_CalculationWindHold(): Unable to get LAR_CalculationWindHold, field not selected");
}

uci::type::StoreCommandType& StoreCommandType::setLAR_CalculationWindHold(xs::Boolean value) {
  chooseLAR_CalculationWindHold();
  lAR_CalculationWindHold_Accessor = value;
  return *this;
}

bool StoreCommandType::isLAR_CalculationWindHold() const noexcept {
  return static_cast<bool>(lAR_CalculationWindHold_Accessor);
}

void StoreCommandType::chooseLAR_CalculationWindHold() {
  nextStoreStation_Accessor.reset();
  nextStoreType_Accessor.reset();
  overrideLAR_Accessor.reset();
  overrideAttitudeConstraints_Accessor.reset();
  masterArm_Accessor.reset();
  releaseConsent_Accessor.reset();
  lAR_CalculationWindOverride_Accessor.reset();
  verifyInventory_Accessor.reset();
  if (!lAR_CalculationWindHold_Accessor) {
    lAR_CalculationWindHold_Accessor = boost::optional<asb_xs::Boolean>();
  }
}

uci::type::Velocity2D_Type& StoreCommandType::getLAR_CalculationWindOverride_() const {
  if (lAR_CalculationWindOverride_Accessor) {
    return *lAR_CalculationWindOverride_Accessor;
  }
  throw uci::base::UCIException("Error in getLAR_CalculationWindOverride(): Unable to get LAR_CalculationWindOverride, field not selected");
}

const uci::type::Velocity2D_Type& StoreCommandType::getLAR_CalculationWindOverride() const {
  return getLAR_CalculationWindOverride_();
}

uci::type::Velocity2D_Type& StoreCommandType::getLAR_CalculationWindOverride() {
  return getLAR_CalculationWindOverride_();
}

uci::type::StoreCommandType& StoreCommandType::setLAR_CalculationWindOverride(const uci::type::Velocity2D_Type& accessor) {
  chooseLAR_CalculationWindOverride("setLAR_CalculationWindOverride", accessor.getAccessorType());
  if (&accessor != lAR_CalculationWindOverride_Accessor.get()) {
    lAR_CalculationWindOverride_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool StoreCommandType::isLAR_CalculationWindOverride() const noexcept {
  return static_cast<bool>(lAR_CalculationWindOverride_Accessor);
}

uci::type::Velocity2D_Type& StoreCommandType::chooseLAR_CalculationWindOverride(const std::string& method, uci::base::accessorType::AccessorType type) {
  nextStoreStation_Accessor.reset();
  nextStoreType_Accessor.reset();
  overrideLAR_Accessor.reset();
  overrideAttitudeConstraints_Accessor.reset();
  masterArm_Accessor.reset();
  releaseConsent_Accessor.reset();
  lAR_CalculationWindHold_Accessor.reset();
  verifyInventory_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::velocity2D_Type : type};
  if ((!lAR_CalculationWindOverride_Accessor) || (lAR_CalculationWindOverride_Accessor->getAccessorType() != requestedType)) {
    lAR_CalculationWindOverride_Accessor = Velocity2D_Type::create(type);
    if (!lAR_CalculationWindOverride_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *lAR_CalculationWindOverride_Accessor;
}

uci::type::Velocity2D_Type& StoreCommandType::chooseLAR_CalculationWindOverride(uci::base::accessorType::AccessorType type) {
  return chooseLAR_CalculationWindOverride("chooseLAR_CalculationWindOverride", type);
}

uci::type::EmptyType& StoreCommandType::getVerifyInventory_() const {
  if (verifyInventory_Accessor) {
    return *verifyInventory_Accessor;
  }
  throw uci::base::UCIException("Error in getVerifyInventory(): An attempt was made to get an optional field that was not enabled, call hasVerifyInventory() to determine if it is safe to call getVerifyInventory()");
}

const uci::type::EmptyType& StoreCommandType::getVerifyInventory() const {
  return getVerifyInventory_();
}

uci::type::EmptyType& StoreCommandType::getVerifyInventory() {
  return getVerifyInventory_();
}

uci::type::StoreCommandType& StoreCommandType::setVerifyInventory(const uci::type::EmptyType& value) {
  return setVerifyInventory(value.c_str());
}

uci::type::StoreCommandType& StoreCommandType::setVerifyInventory(const std::string& value) {
  return setVerifyInventory(value.c_str());
}

uci::type::StoreCommandType& StoreCommandType::setVerifyInventory(const char * value) {
  chooseVerifyInventory().setStringValue(value);
  return *this;
}

bool StoreCommandType::isVerifyInventory() const noexcept {
  return static_cast<bool>(verifyInventory_Accessor);
}

uci::type::EmptyType& StoreCommandType::chooseVerifyInventory(const std::string& /*method*/, uci::base::accessorType::AccessorType type) {
  nextStoreStation_Accessor.reset();
  nextStoreType_Accessor.reset();
  overrideLAR_Accessor.reset();
  overrideAttitudeConstraints_Accessor.reset();
  masterArm_Accessor.reset();
  releaseConsent_Accessor.reset();
  lAR_CalculationWindHold_Accessor.reset();
  lAR_CalculationWindOverride_Accessor.reset();
  if (!verifyInventory_Accessor) {
    verifyInventory_Accessor = EmptyType::create(type);
  }
  return *verifyInventory_Accessor;
}

uci::type::EmptyType& StoreCommandType::chooseVerifyInventory(uci::base::accessorType::AccessorType type) {
  return chooseVerifyInventory("chooseVerifyInventory", type);
}

std::unique_ptr<StoreCommandType> StoreCommandType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::storeCommandType : type};
  return (requestedType == uci::type::accessorType::storeCommandType) ? boost::make_unique<StoreCommandType>() : nullptr;
}

/**  */
namespace StoreCommandType_Names {

constexpr const char* Extern_Type_Name{"StoreCommandType"};
constexpr const char* NextStoreStation_Name{"NextStoreStation"};
constexpr const char* NextStoreType_Name{"NextStoreType"};
constexpr const char* OverrideLAR_Name{"OverrideLAR"};
constexpr const char* OverrideAttitudeConstraints_Name{"OverrideAttitudeConstraints"};
constexpr const char* MasterArm_Name{"MasterArm"};
constexpr const char* ReleaseConsent_Name{"ReleaseConsent"};
constexpr const char* LAR_CalculationWindHold_Name{"LAR_CalculationWindHold"};
constexpr const char* LAR_CalculationWindOverride_Name{"LAR_CalculationWindOverride"};
constexpr const char* VerifyInventory_Name{"VerifyInventory"};

} // namespace StoreCommandType_Names

void StoreCommandType::deserialize(const boost::property_tree::ptree& propTree, uci::type::StoreCommandType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = StoreCommandType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + StoreCommandType_Names::NextStoreStation_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.chooseNextStoreStation(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + StoreCommandType_Names::NextStoreType_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.chooseNextStoreType(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + StoreCommandType_Names::OverrideLAR_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setOverrideLAR(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + StoreCommandType_Names::OverrideAttitudeConstraints_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setOverrideAttitudeConstraints(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + StoreCommandType_Names::MasterArm_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMasterArm(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + StoreCommandType_Names::ReleaseConsent_Name) {
      ReleaseConsentType::deserialize(valueType.second, accessor.chooseReleaseConsent(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + StoreCommandType_Names::LAR_CalculationWindHold_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setLAR_CalculationWindHold(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + StoreCommandType_Names::LAR_CalculationWindOverride_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.chooseLAR_CalculationWindOverride(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + StoreCommandType_Names::VerifyInventory_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.chooseVerifyInventory().setStringValue(*value);
      }
    }
  }
}

std::string StoreCommandType::serialize(const uci::type::StoreCommandType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? StoreCommandType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, StoreCommandType_Names::Extern_Type_Name);
  }
  if (accessor.isNextStoreStation()) {
    ForeignKeyType::serialize(accessor.getNextStoreStation(), node, StoreCommandType_Names::NextStoreStation_Name);
  } else if (accessor.isNextStoreType()) {
    StoreType::serialize(accessor.getNextStoreType(), node, StoreCommandType_Names::NextStoreType_Name);
  } else if (accessor.isOverrideLAR()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getOverrideLAR(), node, StoreCommandType_Names::OverrideLAR_Name);
  } else if (accessor.isOverrideAttitudeConstraints()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getOverrideAttitudeConstraints(), node, StoreCommandType_Names::OverrideAttitudeConstraints_Name);
  } else if (accessor.isMasterArm()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getMasterArm(), node, StoreCommandType_Names::MasterArm_Name);
  } else if (accessor.isReleaseConsent()) {
    ReleaseConsentType::serialize(accessor.getReleaseConsent(), node, StoreCommandType_Names::ReleaseConsent_Name);
  } else if (accessor.isLAR_CalculationWindHold()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getLAR_CalculationWindHold(), node, StoreCommandType_Names::LAR_CalculationWindHold_Name);
  } else if (accessor.isLAR_CalculationWindOverride()) {
    Velocity2D_Type::serialize(accessor.getLAR_CalculationWindOverride(), node, StoreCommandType_Names::LAR_CalculationWindOverride_Name);
  } else if (accessor.isVerifyInventory()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getVerifyInventory(), node, StoreCommandType_Names::VerifyInventory_Name);
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

uci::type::StoreCommandType& StoreCommandType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::StoreCommandType>().release());
}

uci::type::StoreCommandType& StoreCommandType::create(const uci::type::StoreCommandType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::StoreCommandType> newAccessor{boost::make_unique<asb_uci::type::StoreCommandType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void StoreCommandType::destroy(uci::type::StoreCommandType& accessor) {
  delete dynamic_cast<asb_uci::type::StoreCommandType*>(&accessor);
}

} // namespace type

} // namespace uci

