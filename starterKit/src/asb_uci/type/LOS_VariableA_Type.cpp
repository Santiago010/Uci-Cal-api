/** @file LOS_VariableA_Type.cpp
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

#include "../../../include/asb_uci/type/LOS_VariableA_Type.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/LOS_ReferenceEnum.h"
#include "../../../include/asb_uci/util/DerivedTypesCopier.h"
#include "../../../include/asb_uci/util/DerivedTypesCreator.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/DerivedTypesSerializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AnglePositiveType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AngleType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LOS_ReferenceEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LOS_VariableA_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

LOS_VariableA_Type::LOS_VariableA_Type()
  : reference_Accessor{boost::make_unique<LOS_ReferenceEnum>()} {
}

LOS_VariableA_Type::~LOS_VariableA_Type() = default;

void LOS_VariableA_Type::copy(const uci::type::LOS_VariableA_Type& accessor) {
  copyImpl(accessor, false);
}

void LOS_VariableA_Type::copyImpl(const uci::type::LOS_VariableA_Type& accessor, const bool checkIfDerivation) {
  if (&accessor != this) {
    if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::lOS_VariableA_Type)) {
      const auto& accessorImpl = dynamic_cast<const LOS_VariableA_Type&>(accessor);
      setReference(*(accessorImpl.reference_Accessor));
      setAzimuth(accessorImpl.azimuth_Accessor);
      setElevation(accessorImpl.elevation_Accessor);
    } else {
      asb_uci::util::DerivedTypesCopier::copy(accessor, *this);
    }
  }
}

void LOS_VariableA_Type::reset() noexcept {
  reference_Accessor->reset();
  azimuth_Accessor = 0.0;
  elevation_Accessor = 0.0;
}

const uci::type::LOS_ReferenceEnum& LOS_VariableA_Type::getReference() const {
  return *reference_Accessor;
}

uci::type::LOS_ReferenceEnum& LOS_VariableA_Type::getReference() {
  return *reference_Accessor;
}

uci::type::LOS_VariableA_Type& LOS_VariableA_Type::setReference(const uci::type::LOS_ReferenceEnum& accessor) {
  if (&accessor != reference_Accessor.get()) {
    reference_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::LOS_VariableA_Type& LOS_VariableA_Type::setReference(uci::type::LOS_ReferenceEnum::EnumerationItem value) {
  reference_Accessor->setValue(value);
  return *this;
}


uci::type::AnglePositiveTypeValue LOS_VariableA_Type::getAzimuth() const {
  return azimuth_Accessor;
}

uci::type::LOS_VariableA_Type& LOS_VariableA_Type::setAzimuth(uci::type::AnglePositiveTypeValue value) {
  azimuth_Accessor = value;
  return *this;
}


uci::type::AngleTypeValue LOS_VariableA_Type::getElevation() const {
  return elevation_Accessor;
}

uci::type::LOS_VariableA_Type& LOS_VariableA_Type::setElevation(uci::type::AngleTypeValue value) {
  elevation_Accessor = value;
  return *this;
}


std::unique_ptr<LOS_VariableA_Type> LOS_VariableA_Type::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::lOS_VariableA_Type : type};
  return std::unique_ptr<LOS_VariableA_Type>(dynamic_cast<LOS_VariableA_Type*>(asb_uci::util::DerivedTypesCreator::create(requestedType)));
}

/**  */
namespace LOS_VariableA_Type_Names {

constexpr const char* Extern_Type_Name{"LOS_VariableA_Type"};
constexpr const char* Reference_Name{"Reference"};
constexpr const char* Azimuth_Name{"Azimuth"};
constexpr const char* Elevation_Name{"Elevation"};

} // namespace LOS_VariableA_Type_Names

void LOS_VariableA_Type::deserialize(const boost::property_tree::ptree& propTree, uci::type::LOS_VariableA_Type& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = LOS_VariableA_Type_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + LOS_VariableA_Type_Names::Reference_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getReference().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + LOS_VariableA_Type_Names::Azimuth_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAzimuth(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + LOS_VariableA_Type_Names::Elevation_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setElevation(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    }
  }
}

std::string LOS_VariableA_Type::serialize(const uci::type::LOS_VariableA_Type& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? LOS_VariableA_Type_Names::Extern_Type_Name : nodeName)};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::lOS_VariableA_Type)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      asb_uci::util::SerializationHelpers::addTypeAttribute(node, LOS_VariableA_Type_Names::Extern_Type_Name);
    }
    LOS_ReferenceEnum::serialize(accessor.getReference(), node, LOS_VariableA_Type_Names::Reference_Name, false);
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getAzimuth(), node, LOS_VariableA_Type_Names::Azimuth_Name);
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getElevation(), node, LOS_VariableA_Type_Names::Elevation_Name);
    if (createNode) {
      propTree.add_child(generatedNodeName, node);
    }
  } else {
    asb_uci::util::DerivedTypesSerializer::serialize(accessor, propTree, nodeName, createNode);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace asb_uci

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

uci::type::LOS_VariableA_Type& LOS_VariableA_Type::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::LOS_VariableA_Type>().release());
}

uci::type::LOS_VariableA_Type& LOS_VariableA_Type::create(const uci::type::LOS_VariableA_Type& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::LOS_VariableA_Type> newAccessor{boost::make_unique<asb_uci::type::LOS_VariableA_Type>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void LOS_VariableA_Type::destroy(uci::type::LOS_VariableA_Type& accessor) {
  delete dynamic_cast<asb_uci::type::LOS_VariableA_Type*>(&accessor);
}

} // namespace type

} // namespace uci

