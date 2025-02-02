/** @file CargoType.cpp
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

#include "../../../include/asb_uci/type/CargoType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CargoPackagingEnum.h"
#include "../../../include/asb_uci/type/CargoSizeType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CargoPackagingEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CargoSizeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CargoType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MassType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

CargoType::CargoType()
  : cargoPackaging_Accessor{boost::make_unique<CargoPackagingEnum>()} {
}

CargoType::~CargoType() = default;

void CargoType::copy(const uci::type::CargoType& accessor) {
  copyImpl(accessor, false);
}

void CargoType::copyImpl(const uci::type::CargoType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const CargoType&>(accessor);
    setCargoPackaging(*(accessorImpl.cargoPackaging_Accessor));
    if (accessorImpl.cargoSize_Accessor) {
      setCargoSize(*(accessorImpl.cargoSize_Accessor));
    } else {
      cargoSize_Accessor.reset();
    }
    if (accessorImpl.hasCargoWeight()) {
      setCargoWeight(accessorImpl.getCargoWeight());
    } else {
      clearCargoWeight();
    }
  }
}

void CargoType::reset() noexcept {
  cargoPackaging_Accessor->reset();
  cargoSize_Accessor.reset();
  clearCargoWeight();
}

const uci::type::CargoPackagingEnum& CargoType::getCargoPackaging() const {
  return *cargoPackaging_Accessor;
}

uci::type::CargoPackagingEnum& CargoType::getCargoPackaging() {
  return *cargoPackaging_Accessor;
}

uci::type::CargoType& CargoType::setCargoPackaging(const uci::type::CargoPackagingEnum& accessor) {
  if (&accessor != cargoPackaging_Accessor.get()) {
    cargoPackaging_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::CargoType& CargoType::setCargoPackaging(uci::type::CargoPackagingEnum::EnumerationItem value) {
  cargoPackaging_Accessor->setValue(value);
  return *this;
}


uci::type::CargoSizeType& CargoType::getCargoSize_() const {
  if (cargoSize_Accessor) {
    return *cargoSize_Accessor;
  }
  throw uci::base::UCIException("Error in getCargoSize(): An attempt was made to get an optional field that was not enabled, call hasCargoSize() to determine if it is safe to call getCargoSize()");
}

const uci::type::CargoSizeType& CargoType::getCargoSize() const {
  return getCargoSize_();
}

uci::type::CargoSizeType& CargoType::getCargoSize() {
  return getCargoSize_();
}

uci::type::CargoType& CargoType::setCargoSize(const uci::type::CargoSizeType& accessor) {
  enableCargoSize();
  if (&accessor != cargoSize_Accessor.get()) {
    cargoSize_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool CargoType::hasCargoSize() const noexcept {
  return static_cast<bool>(cargoSize_Accessor);
}

uci::type::CargoSizeType& CargoType::enableCargoSize(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::cargoSizeType : type};
  if ((!cargoSize_Accessor) || (cargoSize_Accessor->getAccessorType() != requestedType)) {
    cargoSize_Accessor = CargoSizeType::create(requestedType);
    if (!cargoSize_Accessor) {
      throw uci::base::UCIException("Error in enableCargoSize(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *cargoSize_Accessor;
}

uci::type::CargoType& CargoType::clearCargoSize() noexcept {
  cargoSize_Accessor.reset();
  return *this;
}

uci::type::MassTypeValue CargoType::getCargoWeight() const {
  if (cargoWeight_Accessor) {
    return *cargoWeight_Accessor;
  }
  throw uci::base::UCIException("Error in getCargoWeight(): An attempt was made to get an optional field that was not enabled, call hasCargoWeight() to determine if it is safe to call getCargoWeight()");
}

uci::type::CargoType& CargoType::setCargoWeight(uci::type::MassTypeValue value) {
  cargoWeight_Accessor = value;
  return *this;
}

bool CargoType::hasCargoWeight() const noexcept {
  return cargoWeight_Accessor.has_value();
}

uci::type::CargoType& CargoType::clearCargoWeight() noexcept {
  cargoWeight_Accessor.reset();
  return *this;
}

std::unique_ptr<CargoType> CargoType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::cargoType : type};
  return (requestedType == uci::type::accessorType::cargoType) ? boost::make_unique<CargoType>() : nullptr;
}

/**  */
namespace CargoType_Names {

constexpr const char* Extern_Type_Name{"CargoType"};
constexpr const char* CargoPackaging_Name{"CargoPackaging"};
constexpr const char* CargoSize_Name{"CargoSize"};
constexpr const char* CargoWeight_Name{"CargoWeight"};

} // namespace CargoType_Names

void CargoType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CargoType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CargoType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CargoType_Names::CargoPackaging_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getCargoPackaging().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + CargoType_Names::CargoSize_Name) {
      CargoSizeType::deserialize(valueType.second, accessor.enableCargoSize(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CargoType_Names::CargoWeight_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setCargoWeight(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    }
  }
}

std::string CargoType::serialize(const uci::type::CargoType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? CargoType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, CargoType_Names::Extern_Type_Name);
  }
  CargoPackagingEnum::serialize(accessor.getCargoPackaging(), node, CargoType_Names::CargoPackaging_Name, false);
  if (accessor.hasCargoSize()) {
    CargoSizeType::serialize(accessor.getCargoSize(), node, CargoType_Names::CargoSize_Name);
  }
  if (accessor.hasCargoWeight()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getCargoWeight(), node, CargoType_Names::CargoWeight_Name);
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

uci::type::CargoType& CargoType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::CargoType>().release());
}

uci::type::CargoType& CargoType::create(const uci::type::CargoType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::CargoType> newAccessor{boost::make_unique<asb_uci::type::CargoType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void CargoType::destroy(uci::type::CargoType& accessor) {
  delete dynamic_cast<asb_uci::type::CargoType*>(&accessor);
}

} // namespace type

} // namespace uci

