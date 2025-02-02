/** @file SpaceWeatherDataChoiceType.cpp
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

#include "../../../include/asb_uci/type/SpaceWeatherDataChoiceType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/SpaceWeatherID_Type.h"
#include "../../../include/asb_uci/type/SpaceWeatherParameterType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SpaceWeatherDataChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SpaceWeatherID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SpaceWeatherParameterType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SpaceWeatherDataChoiceType::SpaceWeatherDataChoiceType() = default;

SpaceWeatherDataChoiceType::~SpaceWeatherDataChoiceType() = default;

void SpaceWeatherDataChoiceType::copy(const uci::type::SpaceWeatherDataChoiceType& accessor) {
  copyImpl(accessor, false);
}

void SpaceWeatherDataChoiceType::copyImpl(const uci::type::SpaceWeatherDataChoiceType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const SpaceWeatherDataChoiceType&>(accessor);
    if (accessorImpl.spaceWeatherValuesID_Accessor) {
      setSpaceWeatherValuesID(*(accessorImpl.spaceWeatherValuesID_Accessor));
    } else {
      spaceWeatherValuesID_Accessor.reset();
    }
    if (accessorImpl.staticValues_Accessor) {
      setStaticValues(*(accessorImpl.staticValues_Accessor));
    } else {
      staticValues_Accessor.reset();
    }
  }
}

void SpaceWeatherDataChoiceType::reset() noexcept {
  spaceWeatherValuesID_Accessor.reset();
  staticValues_Accessor.reset();
}

uci::type::SpaceWeatherDataChoiceType::SpaceWeatherDataChoiceTypeChoice SpaceWeatherDataChoiceType::getSpaceWeatherDataChoiceTypeChoiceOrdinal() const noexcept {
  if (spaceWeatherValuesID_Accessor) {
    return SPACEWEATHERDATACHOICETYPE_CHOICE_SPACEWEATHERVALUESID;
  }
  if (staticValues_Accessor) {
    return SPACEWEATHERDATACHOICETYPE_CHOICE_STATICVALUES;
  }
  return SPACEWEATHERDATACHOICETYPE_CHOICE_NONE;
}

uci::type::SpaceWeatherDataChoiceType& SpaceWeatherDataChoiceType::setSpaceWeatherDataChoiceTypeChoiceOrdinal(uci::type::SpaceWeatherDataChoiceType::SpaceWeatherDataChoiceTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case SPACEWEATHERDATACHOICETYPE_CHOICE_SPACEWEATHERVALUESID:
      chooseSpaceWeatherValuesID("setSpaceWeatherDataChoiceTypeChoiceOrdinal", type);
      break;
    case SPACEWEATHERDATACHOICETYPE_CHOICE_STATICVALUES:
      chooseStaticValues("setSpaceWeatherDataChoiceTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setSpaceWeatherDataChoiceTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::SpaceWeatherID_Type& SpaceWeatherDataChoiceType::getSpaceWeatherValuesID_() const {
  if (spaceWeatherValuesID_Accessor) {
    return *spaceWeatherValuesID_Accessor;
  }
  throw uci::base::UCIException("Error in getSpaceWeatherValuesID(): Unable to get SpaceWeatherValuesID, field not selected");
}

const uci::type::SpaceWeatherID_Type& SpaceWeatherDataChoiceType::getSpaceWeatherValuesID() const {
  return getSpaceWeatherValuesID_();
}

uci::type::SpaceWeatherID_Type& SpaceWeatherDataChoiceType::getSpaceWeatherValuesID() {
  return getSpaceWeatherValuesID_();
}

uci::type::SpaceWeatherDataChoiceType& SpaceWeatherDataChoiceType::setSpaceWeatherValuesID(const uci::type::SpaceWeatherID_Type& accessor) {
  chooseSpaceWeatherValuesID();
  if (&accessor != spaceWeatherValuesID_Accessor.get()) {
    spaceWeatherValuesID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool SpaceWeatherDataChoiceType::isSpaceWeatherValuesID() const noexcept {
  return static_cast<bool>(spaceWeatherValuesID_Accessor);
}

uci::type::SpaceWeatherID_Type& SpaceWeatherDataChoiceType::chooseSpaceWeatherValuesID(const std::string& method, uci::base::accessorType::AccessorType type) {
  staticValues_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::spaceWeatherID_Type : type};
  if ((!spaceWeatherValuesID_Accessor) || (spaceWeatherValuesID_Accessor->getAccessorType() != requestedType)) {
    spaceWeatherValuesID_Accessor = SpaceWeatherID_Type::create(type);
    if (!spaceWeatherValuesID_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *spaceWeatherValuesID_Accessor;
}

uci::type::SpaceWeatherID_Type& SpaceWeatherDataChoiceType::chooseSpaceWeatherValuesID(uci::base::accessorType::AccessorType type) {
  return chooseSpaceWeatherValuesID("chooseSpaceWeatherValuesID", type);
}

uci::type::SpaceWeatherParameterType& SpaceWeatherDataChoiceType::getStaticValues_() const {
  if (staticValues_Accessor) {
    return *staticValues_Accessor;
  }
  throw uci::base::UCIException("Error in getStaticValues(): Unable to get StaticValues, field not selected");
}

const uci::type::SpaceWeatherParameterType& SpaceWeatherDataChoiceType::getStaticValues() const {
  return getStaticValues_();
}

uci::type::SpaceWeatherParameterType& SpaceWeatherDataChoiceType::getStaticValues() {
  return getStaticValues_();
}

uci::type::SpaceWeatherDataChoiceType& SpaceWeatherDataChoiceType::setStaticValues(const uci::type::SpaceWeatherParameterType& accessor) {
  chooseStaticValues();
  if (&accessor != staticValues_Accessor.get()) {
    staticValues_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool SpaceWeatherDataChoiceType::isStaticValues() const noexcept {
  return static_cast<bool>(staticValues_Accessor);
}

uci::type::SpaceWeatherParameterType& SpaceWeatherDataChoiceType::chooseStaticValues(const std::string& method, uci::base::accessorType::AccessorType type) {
  spaceWeatherValuesID_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::spaceWeatherParameterType : type};
  if ((!staticValues_Accessor) || (staticValues_Accessor->getAccessorType() != requestedType)) {
    staticValues_Accessor = SpaceWeatherParameterType::create(type);
    if (!staticValues_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *staticValues_Accessor;
}

uci::type::SpaceWeatherParameterType& SpaceWeatherDataChoiceType::chooseStaticValues(uci::base::accessorType::AccessorType type) {
  return chooseStaticValues("chooseStaticValues", type);
}

std::unique_ptr<SpaceWeatherDataChoiceType> SpaceWeatherDataChoiceType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::spaceWeatherDataChoiceType : type};
  return (requestedType == uci::type::accessorType::spaceWeatherDataChoiceType) ? boost::make_unique<SpaceWeatherDataChoiceType>() : nullptr;
}

/**  */
namespace SpaceWeatherDataChoiceType_Names {

constexpr const char* Extern_Type_Name{"SpaceWeatherDataChoiceType"};
constexpr const char* SpaceWeatherValuesID_Name{"SpaceWeatherValuesID"};
constexpr const char* StaticValues_Name{"StaticValues"};

} // namespace SpaceWeatherDataChoiceType_Names

void SpaceWeatherDataChoiceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SpaceWeatherDataChoiceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SpaceWeatherDataChoiceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SpaceWeatherDataChoiceType_Names::SpaceWeatherValuesID_Name) {
      SpaceWeatherID_Type::deserialize(valueType.second, accessor.chooseSpaceWeatherValuesID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SpaceWeatherDataChoiceType_Names::StaticValues_Name) {
      SpaceWeatherParameterType::deserialize(valueType.second, accessor.chooseStaticValues(), nodeName, nsPrefix);
    }
  }
}

std::string SpaceWeatherDataChoiceType::serialize(const uci::type::SpaceWeatherDataChoiceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SpaceWeatherDataChoiceType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SpaceWeatherDataChoiceType_Names::Extern_Type_Name);
  }
  if (accessor.isSpaceWeatherValuesID()) {
    SpaceWeatherID_Type::serialize(accessor.getSpaceWeatherValuesID(), node, SpaceWeatherDataChoiceType_Names::SpaceWeatherValuesID_Name);
  } else if (accessor.isStaticValues()) {
    SpaceWeatherParameterType::serialize(accessor.getStaticValues(), node, SpaceWeatherDataChoiceType_Names::StaticValues_Name);
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

uci::type::SpaceWeatherDataChoiceType& SpaceWeatherDataChoiceType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SpaceWeatherDataChoiceType>().release());
}

uci::type::SpaceWeatherDataChoiceType& SpaceWeatherDataChoiceType::create(const uci::type::SpaceWeatherDataChoiceType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SpaceWeatherDataChoiceType> newAccessor{boost::make_unique<asb_uci::type::SpaceWeatherDataChoiceType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SpaceWeatherDataChoiceType::destroy(uci::type::SpaceWeatherDataChoiceType& accessor) {
  delete dynamic_cast<asb_uci::type::SpaceWeatherDataChoiceType*>(&accessor);
}

} // namespace type

} // namespace uci

