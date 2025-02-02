/** @file RangeElevationExtentChoiceType.cpp
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

#include "../../../include/asb_uci/type/RangeElevationExtentChoiceType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/AnglePairType.h"
#include "../../../include/asb_uci/type/RangeExtentType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AnglePairType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RangeElevationExtentChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RangeExtentType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

RangeElevationExtentChoiceType::RangeElevationExtentChoiceType() = default;

RangeElevationExtentChoiceType::~RangeElevationExtentChoiceType() = default;

void RangeElevationExtentChoiceType::copy(const uci::type::RangeElevationExtentChoiceType& accessor) {
  copyImpl(accessor, false);
}

void RangeElevationExtentChoiceType::copyImpl(const uci::type::RangeElevationExtentChoiceType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const RangeElevationExtentChoiceType&>(accessor);
    if (accessorImpl.elevation_Accessor) {
      setElevation(*(accessorImpl.elevation_Accessor));
    } else {
      elevation_Accessor.reset();
    }
    if (accessorImpl.range_Accessor) {
      setRange(*(accessorImpl.range_Accessor));
    } else {
      range_Accessor.reset();
    }
  }
}

void RangeElevationExtentChoiceType::reset() noexcept {
  elevation_Accessor.reset();
  range_Accessor.reset();
}

uci::type::RangeElevationExtentChoiceType::RangeElevationExtentChoiceTypeChoice RangeElevationExtentChoiceType::getRangeElevationExtentChoiceTypeChoiceOrdinal() const noexcept {
  if (elevation_Accessor) {
    return RANGEELEVATIONEXTENTCHOICETYPE_CHOICE_ELEVATION;
  }
  if (range_Accessor) {
    return RANGEELEVATIONEXTENTCHOICETYPE_CHOICE_RANGE;
  }
  return RANGEELEVATIONEXTENTCHOICETYPE_CHOICE_NONE;
}

uci::type::RangeElevationExtentChoiceType& RangeElevationExtentChoiceType::setRangeElevationExtentChoiceTypeChoiceOrdinal(uci::type::RangeElevationExtentChoiceType::RangeElevationExtentChoiceTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case RANGEELEVATIONEXTENTCHOICETYPE_CHOICE_ELEVATION:
      chooseElevation("setRangeElevationExtentChoiceTypeChoiceOrdinal", type);
      break;
    case RANGEELEVATIONEXTENTCHOICETYPE_CHOICE_RANGE:
      chooseRange("setRangeElevationExtentChoiceTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setRangeElevationExtentChoiceTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::AnglePairType& RangeElevationExtentChoiceType::getElevation_() const {
  if (elevation_Accessor) {
    return *elevation_Accessor;
  }
  throw uci::base::UCIException("Error in getElevation(): Unable to get Elevation, field not selected");
}

const uci::type::AnglePairType& RangeElevationExtentChoiceType::getElevation() const {
  return getElevation_();
}

uci::type::AnglePairType& RangeElevationExtentChoiceType::getElevation() {
  return getElevation_();
}

uci::type::RangeElevationExtentChoiceType& RangeElevationExtentChoiceType::setElevation(const uci::type::AnglePairType& accessor) {
  chooseElevation("setElevation", accessor.getAccessorType());
  if (&accessor != elevation_Accessor.get()) {
    elevation_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool RangeElevationExtentChoiceType::isElevation() const noexcept {
  return static_cast<bool>(elevation_Accessor);
}

uci::type::AnglePairType& RangeElevationExtentChoiceType::chooseElevation(const std::string& method, uci::base::accessorType::AccessorType type) {
  range_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::anglePairType : type};
  if ((!elevation_Accessor) || (elevation_Accessor->getAccessorType() != requestedType)) {
    elevation_Accessor = AnglePairType::create(type);
    if (!elevation_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *elevation_Accessor;
}

uci::type::AnglePairType& RangeElevationExtentChoiceType::chooseElevation(uci::base::accessorType::AccessorType type) {
  return chooseElevation("chooseElevation", type);
}

uci::type::RangeExtentType& RangeElevationExtentChoiceType::getRange_() const {
  if (range_Accessor) {
    return *range_Accessor;
  }
  throw uci::base::UCIException("Error in getRange(): Unable to get Range, field not selected");
}

const uci::type::RangeExtentType& RangeElevationExtentChoiceType::getRange() const {
  return getRange_();
}

uci::type::RangeExtentType& RangeElevationExtentChoiceType::getRange() {
  return getRange_();
}

uci::type::RangeElevationExtentChoiceType& RangeElevationExtentChoiceType::setRange(const uci::type::RangeExtentType& accessor) {
  chooseRange();
  if (&accessor != range_Accessor.get()) {
    range_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RangeElevationExtentChoiceType::isRange() const noexcept {
  return static_cast<bool>(range_Accessor);
}

uci::type::RangeExtentType& RangeElevationExtentChoiceType::chooseRange(const std::string& method, uci::base::accessorType::AccessorType type) {
  elevation_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::rangeExtentType : type};
  if ((!range_Accessor) || (range_Accessor->getAccessorType() != requestedType)) {
    range_Accessor = RangeExtentType::create(type);
    if (!range_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *range_Accessor;
}

uci::type::RangeExtentType& RangeElevationExtentChoiceType::chooseRange(uci::base::accessorType::AccessorType type) {
  return chooseRange("chooseRange", type);
}

std::unique_ptr<RangeElevationExtentChoiceType> RangeElevationExtentChoiceType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::rangeElevationExtentChoiceType : type};
  return (requestedType == uci::type::accessorType::rangeElevationExtentChoiceType) ? boost::make_unique<RangeElevationExtentChoiceType>() : nullptr;
}

/**  */
namespace RangeElevationExtentChoiceType_Names {

constexpr const char* Extern_Type_Name{"RangeElevationExtentChoiceType"};
constexpr const char* Elevation_Name{"Elevation"};
constexpr const char* Range_Name{"Range"};

} // namespace RangeElevationExtentChoiceType_Names

void RangeElevationExtentChoiceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::RangeElevationExtentChoiceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RangeElevationExtentChoiceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RangeElevationExtentChoiceType_Names::Elevation_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.chooseElevation(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RangeElevationExtentChoiceType_Names::Range_Name) {
      RangeExtentType::deserialize(valueType.second, accessor.chooseRange(), nodeName, nsPrefix);
    }
  }
}

std::string RangeElevationExtentChoiceType::serialize(const uci::type::RangeElevationExtentChoiceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? RangeElevationExtentChoiceType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, RangeElevationExtentChoiceType_Names::Extern_Type_Name);
  }
  if (accessor.isElevation()) {
    AnglePairType::serialize(accessor.getElevation(), node, RangeElevationExtentChoiceType_Names::Elevation_Name);
  } else if (accessor.isRange()) {
    RangeExtentType::serialize(accessor.getRange(), node, RangeElevationExtentChoiceType_Names::Range_Name);
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

uci::type::RangeElevationExtentChoiceType& RangeElevationExtentChoiceType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::RangeElevationExtentChoiceType>().release());
}

uci::type::RangeElevationExtentChoiceType& RangeElevationExtentChoiceType::create(const uci::type::RangeElevationExtentChoiceType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::RangeElevationExtentChoiceType> newAccessor{boost::make_unique<asb_uci::type::RangeElevationExtentChoiceType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void RangeElevationExtentChoiceType::destroy(uci::type::RangeElevationExtentChoiceType& accessor) {
  delete dynamic_cast<asb_uci::type::RangeElevationExtentChoiceType*>(&accessor);
}

} // namespace type

} // namespace uci

