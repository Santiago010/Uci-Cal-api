/** @file PositionAndVelocityCovarianceType.cpp
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

#include "../../../include/asb_uci/type/PositionAndVelocityCovarianceType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/PositionPositionCovarianceType.h"
#include "../../../include/asb_uci/type/PositionVelocityCovarianceType.h"
#include "../../../include/asb_uci/type/VelocityVelocityCovarianceType.h"
#include "../../../include/asb_uci/util/DerivedTypesCopier.h"
#include "../../../include/asb_uci/util/DerivedTypesCreator.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/DerivedTypesSerializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PositionAndVelocityCovarianceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PositionPositionCovarianceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PositionVelocityCovarianceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VelocityVelocityCovarianceType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PositionAndVelocityCovarianceType::PositionAndVelocityCovarianceType()
  : positionPosition_Accessor{boost::make_unique<PositionPositionCovarianceType>()} {
}

PositionAndVelocityCovarianceType::~PositionAndVelocityCovarianceType() = default;

void PositionAndVelocityCovarianceType::copy(const uci::type::PositionAndVelocityCovarianceType& accessor) {
  copyImpl(accessor, false);
}

void PositionAndVelocityCovarianceType::copyImpl(const uci::type::PositionAndVelocityCovarianceType& accessor, const bool checkIfDerivation) {
  if (&accessor != this) {
    if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::positionAndVelocityCovarianceType)) {
      const auto& accessorImpl = dynamic_cast<const PositionAndVelocityCovarianceType&>(accessor);
      setPositionPosition(*(accessorImpl.positionPosition_Accessor));
      if (accessorImpl.positionVelocity_Accessor) {
        setPositionVelocity(*(accessorImpl.positionVelocity_Accessor));
      } else {
        positionVelocity_Accessor.reset();
      }
      if (accessorImpl.velocityVelocity_Accessor) {
        setVelocityVelocity(*(accessorImpl.velocityVelocity_Accessor));
      } else {
        velocityVelocity_Accessor.reset();
      }
    } else {
      asb_uci::util::DerivedTypesCopier::copy(accessor, *this);
    }
  }
}

void PositionAndVelocityCovarianceType::reset() noexcept {
  positionPosition_Accessor->reset();
  positionVelocity_Accessor.reset();
  velocityVelocity_Accessor.reset();
}

const uci::type::PositionPositionCovarianceType& PositionAndVelocityCovarianceType::getPositionPosition() const {
  return *positionPosition_Accessor;
}

uci::type::PositionPositionCovarianceType& PositionAndVelocityCovarianceType::getPositionPosition() {
  return *positionPosition_Accessor;
}

uci::type::PositionAndVelocityCovarianceType& PositionAndVelocityCovarianceType::setPositionPosition(const uci::type::PositionPositionCovarianceType& accessor) {
  if (&accessor != positionPosition_Accessor.get()) {
    positionPosition_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::PositionVelocityCovarianceType& PositionAndVelocityCovarianceType::getPositionVelocity_() const {
  if (positionVelocity_Accessor) {
    return *positionVelocity_Accessor;
  }
  throw uci::base::UCIException("Error in getPositionVelocity(): An attempt was made to get an optional field that was not enabled, call hasPositionVelocity() to determine if it is safe to call getPositionVelocity()");
}

const uci::type::PositionVelocityCovarianceType& PositionAndVelocityCovarianceType::getPositionVelocity() const {
  return getPositionVelocity_();
}

uci::type::PositionVelocityCovarianceType& PositionAndVelocityCovarianceType::getPositionVelocity() {
  return getPositionVelocity_();
}

uci::type::PositionAndVelocityCovarianceType& PositionAndVelocityCovarianceType::setPositionVelocity(const uci::type::PositionVelocityCovarianceType& accessor) {
  enablePositionVelocity();
  if (&accessor != positionVelocity_Accessor.get()) {
    positionVelocity_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PositionAndVelocityCovarianceType::hasPositionVelocity() const noexcept {
  return static_cast<bool>(positionVelocity_Accessor);
}

uci::type::PositionVelocityCovarianceType& PositionAndVelocityCovarianceType::enablePositionVelocity(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::positionVelocityCovarianceType : type};
  if ((!positionVelocity_Accessor) || (positionVelocity_Accessor->getAccessorType() != requestedType)) {
    positionVelocity_Accessor = PositionVelocityCovarianceType::create(requestedType);
    if (!positionVelocity_Accessor) {
      throw uci::base::UCIException("Error in enablePositionVelocity(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *positionVelocity_Accessor;
}

uci::type::PositionAndVelocityCovarianceType& PositionAndVelocityCovarianceType::clearPositionVelocity() noexcept {
  positionVelocity_Accessor.reset();
  return *this;
}

uci::type::VelocityVelocityCovarianceType& PositionAndVelocityCovarianceType::getVelocityVelocity_() const {
  if (velocityVelocity_Accessor) {
    return *velocityVelocity_Accessor;
  }
  throw uci::base::UCIException("Error in getVelocityVelocity(): An attempt was made to get an optional field that was not enabled, call hasVelocityVelocity() to determine if it is safe to call getVelocityVelocity()");
}

const uci::type::VelocityVelocityCovarianceType& PositionAndVelocityCovarianceType::getVelocityVelocity() const {
  return getVelocityVelocity_();
}

uci::type::VelocityVelocityCovarianceType& PositionAndVelocityCovarianceType::getVelocityVelocity() {
  return getVelocityVelocity_();
}

uci::type::PositionAndVelocityCovarianceType& PositionAndVelocityCovarianceType::setVelocityVelocity(const uci::type::VelocityVelocityCovarianceType& accessor) {
  enableVelocityVelocity();
  if (&accessor != velocityVelocity_Accessor.get()) {
    velocityVelocity_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PositionAndVelocityCovarianceType::hasVelocityVelocity() const noexcept {
  return static_cast<bool>(velocityVelocity_Accessor);
}

uci::type::VelocityVelocityCovarianceType& PositionAndVelocityCovarianceType::enableVelocityVelocity(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::velocityVelocityCovarianceType : type};
  if ((!velocityVelocity_Accessor) || (velocityVelocity_Accessor->getAccessorType() != requestedType)) {
    velocityVelocity_Accessor = VelocityVelocityCovarianceType::create(requestedType);
    if (!velocityVelocity_Accessor) {
      throw uci::base::UCIException("Error in enableVelocityVelocity(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *velocityVelocity_Accessor;
}

uci::type::PositionAndVelocityCovarianceType& PositionAndVelocityCovarianceType::clearVelocityVelocity() noexcept {
  velocityVelocity_Accessor.reset();
  return *this;
}

std::unique_ptr<PositionAndVelocityCovarianceType> PositionAndVelocityCovarianceType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::positionAndVelocityCovarianceType : type};
  return std::unique_ptr<PositionAndVelocityCovarianceType>(dynamic_cast<PositionAndVelocityCovarianceType*>(asb_uci::util::DerivedTypesCreator::create(requestedType)));
}

/**  */
namespace PositionAndVelocityCovarianceType_Names {

constexpr const char* Extern_Type_Name{"PositionAndVelocityCovarianceType"};
constexpr const char* PositionPosition_Name{"PositionPosition"};
constexpr const char* PositionVelocity_Name{"PositionVelocity"};
constexpr const char* VelocityVelocity_Name{"VelocityVelocity"};

} // namespace PositionAndVelocityCovarianceType_Names

void PositionAndVelocityCovarianceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PositionAndVelocityCovarianceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PositionAndVelocityCovarianceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PositionAndVelocityCovarianceType_Names::PositionPosition_Name) {
      PositionPositionCovarianceType::deserialize(valueType.second, accessor.getPositionPosition(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PositionAndVelocityCovarianceType_Names::PositionVelocity_Name) {
      PositionVelocityCovarianceType::deserialize(valueType.second, accessor.enablePositionVelocity(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PositionAndVelocityCovarianceType_Names::VelocityVelocity_Name) {
      VelocityVelocityCovarianceType::deserialize(valueType.second, accessor.enableVelocityVelocity(), nodeName, nsPrefix);
    }
  }
}

std::string PositionAndVelocityCovarianceType::serialize(const uci::type::PositionAndVelocityCovarianceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PositionAndVelocityCovarianceType_Names::Extern_Type_Name : nodeName)};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::positionAndVelocityCovarianceType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      asb_uci::util::SerializationHelpers::addTypeAttribute(node, PositionAndVelocityCovarianceType_Names::Extern_Type_Name);
    }
    PositionPositionCovarianceType::serialize(accessor.getPositionPosition(), node, PositionAndVelocityCovarianceType_Names::PositionPosition_Name);
    if (accessor.hasPositionVelocity()) {
      PositionVelocityCovarianceType::serialize(accessor.getPositionVelocity(), node, PositionAndVelocityCovarianceType_Names::PositionVelocity_Name);
    }
    if (accessor.hasVelocityVelocity()) {
      VelocityVelocityCovarianceType::serialize(accessor.getVelocityVelocity(), node, PositionAndVelocityCovarianceType_Names::VelocityVelocity_Name);
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

uci::type::PositionAndVelocityCovarianceType& PositionAndVelocityCovarianceType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PositionAndVelocityCovarianceType>().release());
}

uci::type::PositionAndVelocityCovarianceType& PositionAndVelocityCovarianceType::create(const uci::type::PositionAndVelocityCovarianceType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PositionAndVelocityCovarianceType> newAccessor{boost::make_unique<asb_uci::type::PositionAndVelocityCovarianceType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PositionAndVelocityCovarianceType::destroy(uci::type::PositionAndVelocityCovarianceType& accessor) {
  delete dynamic_cast<asb_uci::type::PositionAndVelocityCovarianceType*>(&accessor);
}

} // namespace type

} // namespace uci

