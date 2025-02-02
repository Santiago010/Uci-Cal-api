/** @file EmconOverrideType.cpp
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

#include "../../../include/asb_uci/type/EmconOverrideType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/EmconLevelEnum.h"
#include "../../../include/asb_uci/type/ForeignKeyType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EmconLevelEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EmconOverrideType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ForeignKeyType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

EmconOverrideType::EmconOverrideType() = default;

EmconOverrideType::~EmconOverrideType() = default;

void EmconOverrideType::copy(const uci::type::EmconOverrideType& accessor) {
  copyImpl(accessor, false);
}

void EmconOverrideType::copyImpl(const uci::type::EmconOverrideType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const EmconOverrideType&>(accessor);
    if (accessorImpl.emconLevel_Accessor) {
      setEmconLevel(*(accessorImpl.emconLevel_Accessor));
    } else {
      emconLevel_Accessor.reset();
    }
    if (accessorImpl.foreignLevel_Accessor) {
      setForeignLevel(*(accessorImpl.foreignLevel_Accessor));
    } else {
      foreignLevel_Accessor.reset();
    }
  }
}

void EmconOverrideType::reset() noexcept {
  emconLevel_Accessor.reset();
  foreignLevel_Accessor.reset();
}

uci::type::EmconOverrideType::EmconOverrideTypeChoice EmconOverrideType::getEmconOverrideTypeChoiceOrdinal() const noexcept {
  if (emconLevel_Accessor) {
    return EMCONOVERRIDETYPE_CHOICE_EMCONLEVEL;
  }
  if (foreignLevel_Accessor) {
    return EMCONOVERRIDETYPE_CHOICE_FOREIGNLEVEL;
  }
  return EMCONOVERRIDETYPE_CHOICE_NONE;
}

uci::type::EmconOverrideType& EmconOverrideType::setEmconOverrideTypeChoiceOrdinal(uci::type::EmconOverrideType::EmconOverrideTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case EMCONOVERRIDETYPE_CHOICE_EMCONLEVEL:
      chooseEmconLevel("setEmconOverrideTypeChoiceOrdinal", type);
      break;
    case EMCONOVERRIDETYPE_CHOICE_FOREIGNLEVEL:
      chooseForeignLevel("setEmconOverrideTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setEmconOverrideTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::EmconLevelEnum& EmconOverrideType::getEmconLevel_() const {
  if (emconLevel_Accessor) {
    return *emconLevel_Accessor;
  }
  throw uci::base::UCIException("Error in getEmconLevel(): Unable to get EmconLevel, field not selected");
}

const uci::type::EmconLevelEnum& EmconOverrideType::getEmconLevel() const {
  return getEmconLevel_();
}

uci::type::EmconLevelEnum& EmconOverrideType::getEmconLevel() {
  return getEmconLevel_();
}

uci::type::EmconOverrideType& EmconOverrideType::setEmconLevel(const uci::type::EmconLevelEnum& accessor) {
  chooseEmconLevel();
  if (&accessor != emconLevel_Accessor.get()) {
    emconLevel_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::EmconOverrideType& EmconOverrideType::setEmconLevel(uci::type::EmconLevelEnum::EnumerationItem value) {
  chooseEmconLevel().setValue(value);
  return *this;
}

bool EmconOverrideType::isEmconLevel() const noexcept {
  return static_cast<bool>(emconLevel_Accessor);
}

uci::type::EmconLevelEnum& EmconOverrideType::chooseEmconLevel(const std::string& method, uci::base::accessorType::AccessorType type) {
  foreignLevel_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::emconLevelEnum : type};
  if ((!emconLevel_Accessor) || (emconLevel_Accessor->getAccessorType() != requestedType)) {
    emconLevel_Accessor = EmconLevelEnum::create(type);
    if (!emconLevel_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *emconLevel_Accessor;
}

uci::type::EmconLevelEnum& EmconOverrideType::chooseEmconLevel(uci::base::accessorType::AccessorType type) {
  return chooseEmconLevel("chooseEmconLevel", type);
}

uci::type::ForeignKeyType& EmconOverrideType::getForeignLevel_() const {
  if (foreignLevel_Accessor) {
    return *foreignLevel_Accessor;
  }
  throw uci::base::UCIException("Error in getForeignLevel(): Unable to get ForeignLevel, field not selected");
}

const uci::type::ForeignKeyType& EmconOverrideType::getForeignLevel() const {
  return getForeignLevel_();
}

uci::type::ForeignKeyType& EmconOverrideType::getForeignLevel() {
  return getForeignLevel_();
}

uci::type::EmconOverrideType& EmconOverrideType::setForeignLevel(const uci::type::ForeignKeyType& accessor) {
  chooseForeignLevel("setForeignLevel", accessor.getAccessorType());
  if (&accessor != foreignLevel_Accessor.get()) {
    foreignLevel_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool EmconOverrideType::isForeignLevel() const noexcept {
  return static_cast<bool>(foreignLevel_Accessor);
}

uci::type::ForeignKeyType& EmconOverrideType::chooseForeignLevel(const std::string& method, uci::base::accessorType::AccessorType type) {
  emconLevel_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::foreignKeyType : type};
  if ((!foreignLevel_Accessor) || (foreignLevel_Accessor->getAccessorType() != requestedType)) {
    foreignLevel_Accessor = ForeignKeyType::create(type);
    if (!foreignLevel_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *foreignLevel_Accessor;
}

uci::type::ForeignKeyType& EmconOverrideType::chooseForeignLevel(uci::base::accessorType::AccessorType type) {
  return chooseForeignLevel("chooseForeignLevel", type);
}

std::unique_ptr<EmconOverrideType> EmconOverrideType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::emconOverrideType : type};
  return (requestedType == uci::type::accessorType::emconOverrideType) ? boost::make_unique<EmconOverrideType>() : nullptr;
}

/**  */
namespace EmconOverrideType_Names {

constexpr const char* Extern_Type_Name{"EmconOverrideType"};
constexpr const char* EmconLevel_Name{"EmconLevel"};
constexpr const char* ForeignLevel_Name{"ForeignLevel"};

} // namespace EmconOverrideType_Names

void EmconOverrideType::deserialize(const boost::property_tree::ptree& propTree, uci::type::EmconOverrideType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EmconOverrideType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + EmconOverrideType_Names::EmconLevel_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.chooseEmconLevel().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + EmconOverrideType_Names::ForeignLevel_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.chooseForeignLevel(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    }
  }
}

std::string EmconOverrideType::serialize(const uci::type::EmconOverrideType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? EmconOverrideType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, EmconOverrideType_Names::Extern_Type_Name);
  }
  if (accessor.isEmconLevel()) {
    EmconLevelEnum::serialize(accessor.getEmconLevel(), node, EmconOverrideType_Names::EmconLevel_Name, false);
  } else if (accessor.isForeignLevel()) {
    ForeignKeyType::serialize(accessor.getForeignLevel(), node, EmconOverrideType_Names::ForeignLevel_Name);
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

uci::type::EmconOverrideType& EmconOverrideType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::EmconOverrideType>().release());
}

uci::type::EmconOverrideType& EmconOverrideType::create(const uci::type::EmconOverrideType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::EmconOverrideType> newAccessor{boost::make_unique<asb_uci::type::EmconOverrideType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void EmconOverrideType::destroy(uci::type::EmconOverrideType& accessor) {
  delete dynamic_cast<asb_uci::type::EmconOverrideType*>(&accessor);
}

} // namespace type

} // namespace uci

