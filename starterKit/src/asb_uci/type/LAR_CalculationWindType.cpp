/** @file LAR_CalculationWindType.cpp
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

#include "../../../include/asb_uci/type/LAR_CalculationWindType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/LAR_WindSourceEnum.h"
#include "../../../include/asb_uci/type/Velocity2D_Type.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LAR_CalculationWindType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LAR_WindSourceEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Velocity2D_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

LAR_CalculationWindType::LAR_CalculationWindType()
  : windSource_Accessor{boost::make_unique<LAR_WindSourceEnum>()},
    windVelocity_Accessor{boost::make_unique<Velocity2D_Type>()} {
}

LAR_CalculationWindType::~LAR_CalculationWindType() = default;

void LAR_CalculationWindType::copy(const uci::type::LAR_CalculationWindType& accessor) {
  copyImpl(accessor, false);
}

void LAR_CalculationWindType::copyImpl(const uci::type::LAR_CalculationWindType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const LAR_CalculationWindType&>(accessor);
    setWindSource(*(accessorImpl.windSource_Accessor));
    setWindVelocity(*(accessorImpl.windVelocity_Accessor));
  }
}

void LAR_CalculationWindType::reset() noexcept {
  windSource_Accessor->reset();
  if (windVelocity_Accessor->getAccessorType() != uci::type::accessorType::velocity2D_Type) {
    windVelocity_Accessor = boost::make_unique<Velocity2D_Type>();
  } else {
    windVelocity_Accessor->reset();
  }
}

const uci::type::LAR_WindSourceEnum& LAR_CalculationWindType::getWindSource() const {
  return *windSource_Accessor;
}

uci::type::LAR_WindSourceEnum& LAR_CalculationWindType::getWindSource() {
  return *windSource_Accessor;
}

uci::type::LAR_CalculationWindType& LAR_CalculationWindType::setWindSource(const uci::type::LAR_WindSourceEnum& accessor) {
  if (&accessor != windSource_Accessor.get()) {
    windSource_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::LAR_CalculationWindType& LAR_CalculationWindType::setWindSource(uci::type::LAR_WindSourceEnum::EnumerationItem value) {
  windSource_Accessor->setValue(value);
  return *this;
}


const uci::type::Velocity2D_Type& LAR_CalculationWindType::getWindVelocity() const {
  return *windVelocity_Accessor;
}

uci::type::Velocity2D_Type& LAR_CalculationWindType::getWindVelocity() {
  return *windVelocity_Accessor;
}

uci::type::LAR_CalculationWindType& LAR_CalculationWindType::setWindVelocity(const uci::type::Velocity2D_Type& accessor) {
  enableWindVelocity(accessor.getAccessorType());
  if (&accessor != windVelocity_Accessor.get()) {
    windVelocity_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

uci::type::Velocity2D_Type& LAR_CalculationWindType::enableWindVelocity(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::velocity2D_Type : type};
  if ((!windVelocity_Accessor) || (windVelocity_Accessor->getAccessorType() != requestedType)) {
    windVelocity_Accessor = Velocity2D_Type::create(requestedType);
    if (!windVelocity_Accessor) {
      throw uci::base::UCIException("Error in enableWindVelocity(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *windVelocity_Accessor;
}

std::unique_ptr<LAR_CalculationWindType> LAR_CalculationWindType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::lAR_CalculationWindType : type};
  return (requestedType == uci::type::accessorType::lAR_CalculationWindType) ? boost::make_unique<LAR_CalculationWindType>() : nullptr;
}

/**  */
namespace LAR_CalculationWindType_Names {

constexpr const char* Extern_Type_Name{"LAR_CalculationWindType"};
constexpr const char* WindSource_Name{"WindSource"};
constexpr const char* WindVelocity_Name{"WindVelocity"};

} // namespace LAR_CalculationWindType_Names

void LAR_CalculationWindType::deserialize(const boost::property_tree::ptree& propTree, uci::type::LAR_CalculationWindType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = LAR_CalculationWindType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + LAR_CalculationWindType_Names::WindSource_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getWindSource().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + LAR_CalculationWindType_Names::WindVelocity_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableWindVelocity(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    }
  }
}

std::string LAR_CalculationWindType::serialize(const uci::type::LAR_CalculationWindType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? LAR_CalculationWindType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, LAR_CalculationWindType_Names::Extern_Type_Name);
  }
  LAR_WindSourceEnum::serialize(accessor.getWindSource(), node, LAR_CalculationWindType_Names::WindSource_Name, false);
  Velocity2D_Type::serialize(accessor.getWindVelocity(), node, LAR_CalculationWindType_Names::WindVelocity_Name);
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

uci::type::LAR_CalculationWindType& LAR_CalculationWindType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::LAR_CalculationWindType>().release());
}

uci::type::LAR_CalculationWindType& LAR_CalculationWindType::create(const uci::type::LAR_CalculationWindType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::LAR_CalculationWindType> newAccessor{boost::make_unique<asb_uci::type::LAR_CalculationWindType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void LAR_CalculationWindType::destroy(uci::type::LAR_CalculationWindType& accessor) {
  delete dynamic_cast<asb_uci::type::LAR_CalculationWindType*>(&accessor);
}

} // namespace type

} // namespace uci

