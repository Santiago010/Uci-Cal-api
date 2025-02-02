/** @file UnitVectorType.cpp
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

#include "../../../include/asb_uci/type/UnitVectorType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/util/DerivedTypesCopier.h"
#include "../../../include/asb_uci/util/DerivedTypesCreator.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/DerivedTypesSerializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/UnitBallFloatType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/UnitVectorType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

UnitVectorType::UnitVectorType() = default;

UnitVectorType::~UnitVectorType() = default;

void UnitVectorType::copy(const uci::type::UnitVectorType& accessor) {
  copyImpl(accessor, false);
}

void UnitVectorType::copyImpl(const uci::type::UnitVectorType& accessor, const bool checkIfDerivation) {
  if (&accessor != this) {
    if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::unitVectorType)) {
      const auto& accessorImpl = dynamic_cast<const UnitVectorType&>(accessor);
      setX(accessorImpl.x_Accessor);
      setY(accessorImpl.y_Accessor);
      setZ(accessorImpl.z_Accessor);
    } else {
      asb_uci::util::DerivedTypesCopier::copy(accessor, *this);
    }
  }
}

void UnitVectorType::reset() noexcept {
  x_Accessor = 0.0;
  y_Accessor = 0.0;
  z_Accessor = 0.0;
}

uci::type::UnitBallFloatTypeValue UnitVectorType::getX() const {
  return x_Accessor;
}

uci::type::UnitVectorType& UnitVectorType::setX(uci::type::UnitBallFloatTypeValue value) {
  x_Accessor = value;
  return *this;
}


uci::type::UnitBallFloatTypeValue UnitVectorType::getY() const {
  return y_Accessor;
}

uci::type::UnitVectorType& UnitVectorType::setY(uci::type::UnitBallFloatTypeValue value) {
  y_Accessor = value;
  return *this;
}


uci::type::UnitBallFloatTypeValue UnitVectorType::getZ() const {
  return z_Accessor;
}

uci::type::UnitVectorType& UnitVectorType::setZ(uci::type::UnitBallFloatTypeValue value) {
  z_Accessor = value;
  return *this;
}


std::unique_ptr<UnitVectorType> UnitVectorType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::unitVectorType : type};
  return std::unique_ptr<UnitVectorType>(dynamic_cast<UnitVectorType*>(asb_uci::util::DerivedTypesCreator::create(requestedType)));
}

/**  */
namespace UnitVectorType_Names {

constexpr const char* Extern_Type_Name{"UnitVectorType"};
constexpr const char* X_Name{"X"};
constexpr const char* Y_Name{"Y"};
constexpr const char* Z_Name{"Z"};

} // namespace UnitVectorType_Names

void UnitVectorType::deserialize(const boost::property_tree::ptree& propTree, uci::type::UnitVectorType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = UnitVectorType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + UnitVectorType_Names::X_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setX(asb_uci::util::SerializationHelpers::deserializeFloat(*value));
      }
    } else if (valueType.first == nsPrefix + UnitVectorType_Names::Y_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setY(asb_uci::util::SerializationHelpers::deserializeFloat(*value));
      }
    } else if (valueType.first == nsPrefix + UnitVectorType_Names::Z_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setZ(asb_uci::util::SerializationHelpers::deserializeFloat(*value));
      }
    }
  }
}

std::string UnitVectorType::serialize(const uci::type::UnitVectorType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? UnitVectorType_Names::Extern_Type_Name : nodeName)};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::unitVectorType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      asb_uci::util::SerializationHelpers::addTypeAttribute(node, UnitVectorType_Names::Extern_Type_Name);
    }
    asb_uci::util::SerializationHelpers::serializeFloat(accessor.getX(), node, UnitVectorType_Names::X_Name);
    asb_uci::util::SerializationHelpers::serializeFloat(accessor.getY(), node, UnitVectorType_Names::Y_Name);
    asb_uci::util::SerializationHelpers::serializeFloat(accessor.getZ(), node, UnitVectorType_Names::Z_Name);
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

uci::type::UnitVectorType& UnitVectorType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::UnitVectorType>().release());
}

uci::type::UnitVectorType& UnitVectorType::create(const uci::type::UnitVectorType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::UnitVectorType> newAccessor{boost::make_unique<asb_uci::type::UnitVectorType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void UnitVectorType::destroy(uci::type::UnitVectorType& accessor) {
  delete dynamic_cast<asb_uci::type::UnitVectorType*>(&accessor);
}

} // namespace type

} // namespace uci

