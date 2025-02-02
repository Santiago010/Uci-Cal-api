/** @file SlantRangeAreaType.cpp
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

#include "../../../include/asb_uci/type/SlantRangeAreaType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/AnglePairType.h"
#include "../../../include/asb_uci/type/PointChoiceType.h"
#include "../../../include/asb_uci/type/SlantRangeConstraintsType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AngleHalfType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AnglePairType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PointChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SlantRangeAreaType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SlantRangeConstraintsType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SlantRangeAreaType::SlantRangeAreaType()
  : radius_Accessor{boost::make_unique<SlantRangeConstraintsType>()},
    azimuthExtent_Accessor{boost::make_unique<AnglePairType>()},
    pointChoice_Accessor{boost::make_unique<PointChoiceType>()} {
}

SlantRangeAreaType::~SlantRangeAreaType() = default;

void SlantRangeAreaType::copy(const uci::type::SlantRangeAreaType& accessor) {
  copyImpl(accessor, false);
}

void SlantRangeAreaType::copyImpl(const uci::type::SlantRangeAreaType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const SlantRangeAreaType&>(accessor);
    setRadius(*(accessorImpl.radius_Accessor));
    setAzimuthExtent(*(accessorImpl.azimuthExtent_Accessor));
    setOrientation(accessorImpl.orientation_Accessor);
    setPointChoice(*(accessorImpl.pointChoice_Accessor));
  }
}

void SlantRangeAreaType::reset() noexcept {
  radius_Accessor->reset();
  if (azimuthExtent_Accessor->getAccessorType() != uci::type::accessorType::anglePairType) {
    azimuthExtent_Accessor = boost::make_unique<AnglePairType>();
  } else {
    azimuthExtent_Accessor->reset();
  }
  orientation_Accessor = 0.0;
  pointChoice_Accessor->reset();
}

const uci::type::SlantRangeConstraintsType& SlantRangeAreaType::getRadius() const {
  return *radius_Accessor;
}

uci::type::SlantRangeConstraintsType& SlantRangeAreaType::getRadius() {
  return *radius_Accessor;
}

uci::type::SlantRangeAreaType& SlantRangeAreaType::setRadius(const uci::type::SlantRangeConstraintsType& accessor) {
  if (&accessor != radius_Accessor.get()) {
    radius_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::AnglePairType& SlantRangeAreaType::getAzimuthExtent() const {
  return *azimuthExtent_Accessor;
}

uci::type::AnglePairType& SlantRangeAreaType::getAzimuthExtent() {
  return *azimuthExtent_Accessor;
}

uci::type::SlantRangeAreaType& SlantRangeAreaType::setAzimuthExtent(const uci::type::AnglePairType& accessor) {
  enableAzimuthExtent(accessor.getAccessorType());
  if (&accessor != azimuthExtent_Accessor.get()) {
    azimuthExtent_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

uci::type::AnglePairType& SlantRangeAreaType::enableAzimuthExtent(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::anglePairType : type};
  if ((!azimuthExtent_Accessor) || (azimuthExtent_Accessor->getAccessorType() != requestedType)) {
    azimuthExtent_Accessor = AnglePairType::create(requestedType);
    if (!azimuthExtent_Accessor) {
      throw uci::base::UCIException("Error in enableAzimuthExtent(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *azimuthExtent_Accessor;
}

uci::type::AngleHalfTypeValue SlantRangeAreaType::getOrientation() const {
  return orientation_Accessor;
}

uci::type::SlantRangeAreaType& SlantRangeAreaType::setOrientation(uci::type::AngleHalfTypeValue value) {
  orientation_Accessor = value;
  return *this;
}


const uci::type::PointChoiceType& SlantRangeAreaType::getPointChoice() const {
  return *pointChoice_Accessor;
}

uci::type::PointChoiceType& SlantRangeAreaType::getPointChoice() {
  return *pointChoice_Accessor;
}

uci::type::SlantRangeAreaType& SlantRangeAreaType::setPointChoice(const uci::type::PointChoiceType& accessor) {
  if (&accessor != pointChoice_Accessor.get()) {
    pointChoice_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<SlantRangeAreaType> SlantRangeAreaType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::slantRangeAreaType : type};
  return (requestedType == uci::type::accessorType::slantRangeAreaType) ? boost::make_unique<SlantRangeAreaType>() : nullptr;
}

/**  */
namespace SlantRangeAreaType_Names {

constexpr const char* Extern_Type_Name{"SlantRangeAreaType"};
constexpr const char* Radius_Name{"Radius"};
constexpr const char* AzimuthExtent_Name{"AzimuthExtent"};
constexpr const char* Orientation_Name{"Orientation"};
constexpr const char* PointChoice_Name{"PointChoice"};

} // namespace SlantRangeAreaType_Names

void SlantRangeAreaType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SlantRangeAreaType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SlantRangeAreaType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SlantRangeAreaType_Names::Radius_Name) {
      SlantRangeConstraintsType::deserialize(valueType.second, accessor.getRadius(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SlantRangeAreaType_Names::AzimuthExtent_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableAzimuthExtent(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SlantRangeAreaType_Names::Orientation_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setOrientation(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + SlantRangeAreaType_Names::PointChoice_Name) {
      PointChoiceType::deserialize(valueType.second, accessor.getPointChoice(), nodeName, nsPrefix);
    }
  }
}

std::string SlantRangeAreaType::serialize(const uci::type::SlantRangeAreaType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SlantRangeAreaType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SlantRangeAreaType_Names::Extern_Type_Name);
  }
  SlantRangeConstraintsType::serialize(accessor.getRadius(), node, SlantRangeAreaType_Names::Radius_Name);
  AnglePairType::serialize(accessor.getAzimuthExtent(), node, SlantRangeAreaType_Names::AzimuthExtent_Name);
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getOrientation(), node, SlantRangeAreaType_Names::Orientation_Name);
  PointChoiceType::serialize(accessor.getPointChoice(), node, SlantRangeAreaType_Names::PointChoice_Name);
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

uci::type::SlantRangeAreaType& SlantRangeAreaType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SlantRangeAreaType>().release());
}

uci::type::SlantRangeAreaType& SlantRangeAreaType::create(const uci::type::SlantRangeAreaType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SlantRangeAreaType> newAccessor{boost::make_unique<asb_uci::type::SlantRangeAreaType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SlantRangeAreaType::destroy(uci::type::SlantRangeAreaType& accessor) {
  delete dynamic_cast<asb_uci::type::SlantRangeAreaType*>(&accessor);
}

} // namespace type

} // namespace uci

