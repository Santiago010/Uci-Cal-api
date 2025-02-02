/** @file ExerciseIdentityType.cpp
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

#include "../../../include/asb_uci/type/ExerciseIdentityType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CountryCodeType.h"
#include "../../../include/asb_uci/type/ExerciseIdentityEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CountryCodeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ExerciseIdentityEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ExerciseIdentityType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ExerciseIdentityType::ExerciseIdentityType() = default;

ExerciseIdentityType::~ExerciseIdentityType() = default;

void ExerciseIdentityType::copy(const uci::type::ExerciseIdentityType& accessor) {
  copyImpl(accessor, false);
}

void ExerciseIdentityType::copyImpl(const uci::type::ExerciseIdentityType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const ExerciseIdentityType&>(accessor);
    if (accessorImpl.exerciseIdentity_Accessor) {
      setExerciseIdentity(*(accessorImpl.exerciseIdentity_Accessor));
    } else {
      exerciseIdentity_Accessor.reset();
    }
    if (accessorImpl.allegiance_Accessor) {
      setAllegiance(*(accessorImpl.allegiance_Accessor));
    } else {
      allegiance_Accessor.reset();
    }
  }
}

void ExerciseIdentityType::reset() noexcept {
  exerciseIdentity_Accessor.reset();
  allegiance_Accessor.reset();
}

uci::type::ExerciseIdentityEnum& ExerciseIdentityType::getExerciseIdentity_() const {
  if (exerciseIdentity_Accessor) {
    return *exerciseIdentity_Accessor;
  }
  throw uci::base::UCIException("Error in getExerciseIdentity(): An attempt was made to get an optional field that was not enabled, call hasExerciseIdentity() to determine if it is safe to call getExerciseIdentity()");
}

const uci::type::ExerciseIdentityEnum& ExerciseIdentityType::getExerciseIdentity() const {
  return getExerciseIdentity_();
}

uci::type::ExerciseIdentityEnum& ExerciseIdentityType::getExerciseIdentity() {
  return getExerciseIdentity_();
}

uci::type::ExerciseIdentityType& ExerciseIdentityType::setExerciseIdentity(const uci::type::ExerciseIdentityEnum& accessor) {
  enableExerciseIdentity();
  if (&accessor != exerciseIdentity_Accessor.get()) {
    exerciseIdentity_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ExerciseIdentityType& ExerciseIdentityType::setExerciseIdentity(const uci::type::ExerciseIdentityEnum::EnumerationItem value) {
  enableExerciseIdentity().setValue(value);
  return *this;
}

bool ExerciseIdentityType::hasExerciseIdentity() const noexcept {
  return static_cast<bool>(exerciseIdentity_Accessor);
}

uci::type::ExerciseIdentityEnum& ExerciseIdentityType::enableExerciseIdentity(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::exerciseIdentityEnum : type};
  if ((!exerciseIdentity_Accessor) || (exerciseIdentity_Accessor->getAccessorType() != requestedType)) {
    exerciseIdentity_Accessor = ExerciseIdentityEnum::create(requestedType);
    if (!exerciseIdentity_Accessor) {
      throw uci::base::UCIException("Error in enableExerciseIdentity(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *exerciseIdentity_Accessor;
}

uci::type::ExerciseIdentityType& ExerciseIdentityType::clearExerciseIdentity() noexcept {
  exerciseIdentity_Accessor.reset();
  return *this;
}

uci::type::CountryCodeType& ExerciseIdentityType::getAllegiance_() const {
  if (allegiance_Accessor) {
    return *allegiance_Accessor;
  }
  throw uci::base::UCIException("Error in getAllegiance(): An attempt was made to get an optional field that was not enabled, call hasAllegiance() to determine if it is safe to call getAllegiance()");
}

const uci::type::CountryCodeType& ExerciseIdentityType::getAllegiance() const {
  return getAllegiance_();
}

uci::type::CountryCodeType& ExerciseIdentityType::getAllegiance() {
  return getAllegiance_();
}

uci::type::ExerciseIdentityType& ExerciseIdentityType::setAllegiance(const uci::type::CountryCodeType& accessor) {
  enableAllegiance();
  if (&accessor != allegiance_Accessor.get()) {
    allegiance_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool ExerciseIdentityType::hasAllegiance() const noexcept {
  return static_cast<bool>(allegiance_Accessor);
}

uci::type::CountryCodeType& ExerciseIdentityType::enableAllegiance(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::countryCodeType : type};
  if ((!allegiance_Accessor) || (allegiance_Accessor->getAccessorType() != requestedType)) {
    allegiance_Accessor = CountryCodeType::create(requestedType);
    if (!allegiance_Accessor) {
      throw uci::base::UCIException("Error in enableAllegiance(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *allegiance_Accessor;
}

uci::type::ExerciseIdentityType& ExerciseIdentityType::clearAllegiance() noexcept {
  allegiance_Accessor.reset();
  return *this;
}

std::unique_ptr<ExerciseIdentityType> ExerciseIdentityType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::exerciseIdentityType : type};
  return (requestedType == uci::type::accessorType::exerciseIdentityType) ? boost::make_unique<ExerciseIdentityType>() : nullptr;
}

/**  */
namespace ExerciseIdentityType_Names {

constexpr const char* Extern_Type_Name{"ExerciseIdentityType"};
constexpr const char* ExerciseIdentity_Name{"ExerciseIdentity"};
constexpr const char* Allegiance_Name{"Allegiance"};

} // namespace ExerciseIdentityType_Names

void ExerciseIdentityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ExerciseIdentityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ExerciseIdentityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ExerciseIdentityType_Names::ExerciseIdentity_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableExerciseIdentity().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ExerciseIdentityType_Names::Allegiance_Name) {
      CountryCodeType::deserialize(valueType.second, accessor.enableAllegiance(), nodeName, nsPrefix);
    }
  }
}

std::string ExerciseIdentityType::serialize(const uci::type::ExerciseIdentityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ExerciseIdentityType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ExerciseIdentityType_Names::Extern_Type_Name);
  }
  if (accessor.hasExerciseIdentity()) {
    ExerciseIdentityEnum::serialize(accessor.getExerciseIdentity(), node, ExerciseIdentityType_Names::ExerciseIdentity_Name, false);
  }
  if (accessor.hasAllegiance()) {
    CountryCodeType::serialize(accessor.getAllegiance(), node, ExerciseIdentityType_Names::Allegiance_Name);
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

uci::type::ExerciseIdentityType& ExerciseIdentityType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ExerciseIdentityType>().release());
}

uci::type::ExerciseIdentityType& ExerciseIdentityType::create(const uci::type::ExerciseIdentityType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ExerciseIdentityType> newAccessor{boost::make_unique<asb_uci::type::ExerciseIdentityType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ExerciseIdentityType::destroy(uci::type::ExerciseIdentityType& accessor) {
  delete dynamic_cast<asb_uci::type::ExerciseIdentityType*>(&accessor);
}

} // namespace type

} // namespace uci

