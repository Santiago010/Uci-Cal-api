/** @file VehicleConfigurationType.cpp
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

#include "../../../include/asb_uci/type/VehicleConfigurationType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/EnduranceType.h"
#include "../../../include/asb_uci/type/InertialStateRelativeType.h"
#include "../../../include/asb_uci/util/DerivedTypesCopier.h"
#include "../../../include/asb_uci/util/DerivedTypesCreator.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/DerivedTypesSerializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EnduranceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/InertialStateRelativeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MassType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VehicleConfigurationType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

VehicleConfigurationType::VehicleConfigurationType()
  : inertialState_Accessor{boost::make_unique<InertialStateRelativeType>()} {
}

VehicleConfigurationType::~VehicleConfigurationType() = default;

void VehicleConfigurationType::copy(const uci::type::VehicleConfigurationType& accessor) {
  copyImpl(accessor, false);
}

void VehicleConfigurationType::copyImpl(const uci::type::VehicleConfigurationType& accessor, const bool checkIfDerivation) {
  if (&accessor != this) {
    if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::vehicleConfigurationType)) {
      const auto& accessorImpl = dynamic_cast<const VehicleConfigurationType&>(accessor);
      setInertialState(*(accessorImpl.inertialState_Accessor));
      if (accessorImpl.endurance_Accessor) {
        setEndurance(*(accessorImpl.endurance_Accessor));
      } else {
        endurance_Accessor.reset();
      }
      if (accessorImpl.hasGrossWeight()) {
        setGrossWeight(accessorImpl.getGrossWeight());
      } else {
        clearGrossWeight();
      }
    } else {
      asb_uci::util::DerivedTypesCopier::copy(accessor, *this);
    }
  }
}

void VehicleConfigurationType::reset() noexcept {
  if (inertialState_Accessor->getAccessorType() != uci::type::accessorType::inertialStateRelativeType) {
    inertialState_Accessor = boost::make_unique<InertialStateRelativeType>();
  } else {
    inertialState_Accessor->reset();
  }
  endurance_Accessor.reset();
  clearGrossWeight();
}

const uci::type::InertialStateRelativeType& VehicleConfigurationType::getInertialState() const {
  return *inertialState_Accessor;
}

uci::type::InertialStateRelativeType& VehicleConfigurationType::getInertialState() {
  return *inertialState_Accessor;
}

uci::type::VehicleConfigurationType& VehicleConfigurationType::setInertialState(const uci::type::InertialStateRelativeType& accessor) {
  enableInertialState(accessor.getAccessorType());
  if (&accessor != inertialState_Accessor.get()) {
    inertialState_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

uci::type::InertialStateRelativeType& VehicleConfigurationType::enableInertialState(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::inertialStateRelativeType : type};
  if ((!inertialState_Accessor) || (inertialState_Accessor->getAccessorType() != requestedType)) {
    inertialState_Accessor = InertialStateRelativeType::create(requestedType);
    if (!inertialState_Accessor) {
      throw uci::base::UCIException("Error in enableInertialState(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *inertialState_Accessor;
}

uci::type::EnduranceType& VehicleConfigurationType::getEndurance_() const {
  if (endurance_Accessor) {
    return *endurance_Accessor;
  }
  throw uci::base::UCIException("Error in getEndurance(): An attempt was made to get an optional field that was not enabled, call hasEndurance() to determine if it is safe to call getEndurance()");
}

const uci::type::EnduranceType& VehicleConfigurationType::getEndurance() const {
  return getEndurance_();
}

uci::type::EnduranceType& VehicleConfigurationType::getEndurance() {
  return getEndurance_();
}

uci::type::VehicleConfigurationType& VehicleConfigurationType::setEndurance(const uci::type::EnduranceType& accessor) {
  enableEndurance();
  if (&accessor != endurance_Accessor.get()) {
    endurance_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool VehicleConfigurationType::hasEndurance() const noexcept {
  return static_cast<bool>(endurance_Accessor);
}

uci::type::EnduranceType& VehicleConfigurationType::enableEndurance(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::enduranceType : type};
  if ((!endurance_Accessor) || (endurance_Accessor->getAccessorType() != requestedType)) {
    endurance_Accessor = EnduranceType::create(requestedType);
    if (!endurance_Accessor) {
      throw uci::base::UCIException("Error in enableEndurance(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *endurance_Accessor;
}

uci::type::VehicleConfigurationType& VehicleConfigurationType::clearEndurance() noexcept {
  endurance_Accessor.reset();
  return *this;
}

uci::type::MassTypeValue VehicleConfigurationType::getGrossWeight() const {
  if (grossWeight_Accessor) {
    return *grossWeight_Accessor;
  }
  throw uci::base::UCIException("Error in getGrossWeight(): An attempt was made to get an optional field that was not enabled, call hasGrossWeight() to determine if it is safe to call getGrossWeight()");
}

uci::type::VehicleConfigurationType& VehicleConfigurationType::setGrossWeight(uci::type::MassTypeValue value) {
  grossWeight_Accessor = value;
  return *this;
}

bool VehicleConfigurationType::hasGrossWeight() const noexcept {
  return grossWeight_Accessor.has_value();
}

uci::type::VehicleConfigurationType& VehicleConfigurationType::clearGrossWeight() noexcept {
  grossWeight_Accessor.reset();
  return *this;
}

std::unique_ptr<VehicleConfigurationType> VehicleConfigurationType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::vehicleConfigurationType : type};
  return std::unique_ptr<VehicleConfigurationType>(dynamic_cast<VehicleConfigurationType*>(asb_uci::util::DerivedTypesCreator::create(requestedType)));
}

/**  */
namespace VehicleConfigurationType_Names {

constexpr const char* Extern_Type_Name{"VehicleConfigurationType"};
constexpr const char* InertialState_Name{"InertialState"};
constexpr const char* Endurance_Name{"Endurance"};
constexpr const char* GrossWeight_Name{"GrossWeight"};

} // namespace VehicleConfigurationType_Names

void VehicleConfigurationType::deserialize(const boost::property_tree::ptree& propTree, uci::type::VehicleConfigurationType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = VehicleConfigurationType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + VehicleConfigurationType_Names::InertialState_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableInertialState(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + VehicleConfigurationType_Names::Endurance_Name) {
      EnduranceType::deserialize(valueType.second, accessor.enableEndurance(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + VehicleConfigurationType_Names::GrossWeight_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setGrossWeight(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    }
  }
}

std::string VehicleConfigurationType::serialize(const uci::type::VehicleConfigurationType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? VehicleConfigurationType_Names::Extern_Type_Name : nodeName)};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::vehicleConfigurationType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      asb_uci::util::SerializationHelpers::addTypeAttribute(node, VehicleConfigurationType_Names::Extern_Type_Name);
    }
    InertialStateRelativeType::serialize(accessor.getInertialState(), node, VehicleConfigurationType_Names::InertialState_Name);
    if (accessor.hasEndurance()) {
      EnduranceType::serialize(accessor.getEndurance(), node, VehicleConfigurationType_Names::Endurance_Name);
    }
    if (accessor.hasGrossWeight()) {
      asb_uci::util::SerializationHelpers::serializeDouble(accessor.getGrossWeight(), node, VehicleConfigurationType_Names::GrossWeight_Name);
    }
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

uci::type::VehicleConfigurationType& VehicleConfigurationType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::VehicleConfigurationType>().release());
}

uci::type::VehicleConfigurationType& VehicleConfigurationType::create(const uci::type::VehicleConfigurationType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::VehicleConfigurationType> newAccessor{boost::make_unique<asb_uci::type::VehicleConfigurationType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void VehicleConfigurationType::destroy(uci::type::VehicleConfigurationType& accessor) {
  delete dynamic_cast<asb_uci::type::VehicleConfigurationType*>(&accessor);
}

} // namespace type

} // namespace uci

