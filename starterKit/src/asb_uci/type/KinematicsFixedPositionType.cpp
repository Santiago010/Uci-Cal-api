/** @file KinematicsFixedPositionType.cpp
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

#include "../../../include/asb_uci/type/KinematicsFixedPositionType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/Point2D_Type.h"
#include "../../../include/asb_uci/type/UncertaintyType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/KinematicsFixedPositionType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Point2D_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/UncertaintyType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

KinematicsFixedPositionType::KinematicsFixedPositionType()
  : fixedPoint_Accessor{boost::make_unique<Point2D_Type>()} {
}

KinematicsFixedPositionType::~KinematicsFixedPositionType() = default;

void KinematicsFixedPositionType::copy(const uci::type::KinematicsFixedPositionType& accessor) {
  copyImpl(accessor, false);
}

void KinematicsFixedPositionType::copyImpl(const uci::type::KinematicsFixedPositionType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const KinematicsFixedPositionType&>(accessor);
    setFixedPoint(*(accessorImpl.fixedPoint_Accessor));
    if (accessorImpl.uncertainty_Accessor) {
      setUncertainty(*(accessorImpl.uncertainty_Accessor));
    } else {
      uncertainty_Accessor.reset();
    }
  }
}

void KinematicsFixedPositionType::reset() noexcept {
  if (fixedPoint_Accessor->getAccessorType() != uci::type::accessorType::point2D_Type) {
    fixedPoint_Accessor = boost::make_unique<Point2D_Type>();
  } else {
    fixedPoint_Accessor->reset();
  }
  uncertainty_Accessor.reset();
}

const uci::type::Point2D_Type& KinematicsFixedPositionType::getFixedPoint() const {
  return *fixedPoint_Accessor;
}

uci::type::Point2D_Type& KinematicsFixedPositionType::getFixedPoint() {
  return *fixedPoint_Accessor;
}

uci::type::KinematicsFixedPositionType& KinematicsFixedPositionType::setFixedPoint(const uci::type::Point2D_Type& accessor) {
  enableFixedPoint(accessor.getAccessorType());
  if (&accessor != fixedPoint_Accessor.get()) {
    fixedPoint_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

uci::type::Point2D_Type& KinematicsFixedPositionType::enableFixedPoint(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::point2D_Type : type};
  if ((!fixedPoint_Accessor) || (fixedPoint_Accessor->getAccessorType() != requestedType)) {
    fixedPoint_Accessor = Point2D_Type::create(requestedType);
    if (!fixedPoint_Accessor) {
      throw uci::base::UCIException("Error in enableFixedPoint(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *fixedPoint_Accessor;
}

uci::type::UncertaintyType& KinematicsFixedPositionType::getUncertainty_() const {
  if (uncertainty_Accessor) {
    return *uncertainty_Accessor;
  }
  throw uci::base::UCIException("Error in getUncertainty(): An attempt was made to get an optional field that was not enabled, call hasUncertainty() to determine if it is safe to call getUncertainty()");
}

const uci::type::UncertaintyType& KinematicsFixedPositionType::getUncertainty() const {
  return getUncertainty_();
}

uci::type::UncertaintyType& KinematicsFixedPositionType::getUncertainty() {
  return getUncertainty_();
}

uci::type::KinematicsFixedPositionType& KinematicsFixedPositionType::setUncertainty(const uci::type::UncertaintyType& accessor) {
  enableUncertainty();
  if (&accessor != uncertainty_Accessor.get()) {
    uncertainty_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool KinematicsFixedPositionType::hasUncertainty() const noexcept {
  return static_cast<bool>(uncertainty_Accessor);
}

uci::type::UncertaintyType& KinematicsFixedPositionType::enableUncertainty(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::uncertaintyType : type};
  if ((!uncertainty_Accessor) || (uncertainty_Accessor->getAccessorType() != requestedType)) {
    uncertainty_Accessor = UncertaintyType::create(requestedType);
    if (!uncertainty_Accessor) {
      throw uci::base::UCIException("Error in enableUncertainty(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *uncertainty_Accessor;
}

uci::type::KinematicsFixedPositionType& KinematicsFixedPositionType::clearUncertainty() noexcept {
  uncertainty_Accessor.reset();
  return *this;
}

std::unique_ptr<KinematicsFixedPositionType> KinematicsFixedPositionType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::kinematicsFixedPositionType : type};
  return (requestedType == uci::type::accessorType::kinematicsFixedPositionType) ? boost::make_unique<KinematicsFixedPositionType>() : nullptr;
}

/**  */
namespace KinematicsFixedPositionType_Names {

constexpr const char* Extern_Type_Name{"KinematicsFixedPositionType"};
constexpr const char* FixedPoint_Name{"FixedPoint"};
constexpr const char* Uncertainty_Name{"Uncertainty"};

} // namespace KinematicsFixedPositionType_Names

void KinematicsFixedPositionType::deserialize(const boost::property_tree::ptree& propTree, uci::type::KinematicsFixedPositionType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = KinematicsFixedPositionType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + KinematicsFixedPositionType_Names::FixedPoint_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableFixedPoint(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + KinematicsFixedPositionType_Names::Uncertainty_Name) {
      UncertaintyType::deserialize(valueType.second, accessor.enableUncertainty(), nodeName, nsPrefix);
    }
  }
}

std::string KinematicsFixedPositionType::serialize(const uci::type::KinematicsFixedPositionType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? KinematicsFixedPositionType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, KinematicsFixedPositionType_Names::Extern_Type_Name);
  }
  Point2D_Type::serialize(accessor.getFixedPoint(), node, KinematicsFixedPositionType_Names::FixedPoint_Name);
  if (accessor.hasUncertainty()) {
    UncertaintyType::serialize(accessor.getUncertainty(), node, KinematicsFixedPositionType_Names::Uncertainty_Name);
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

uci::type::KinematicsFixedPositionType& KinematicsFixedPositionType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::KinematicsFixedPositionType>().release());
}

uci::type::KinematicsFixedPositionType& KinematicsFixedPositionType::create(const uci::type::KinematicsFixedPositionType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::KinematicsFixedPositionType> newAccessor{boost::make_unique<asb_uci::type::KinematicsFixedPositionType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void KinematicsFixedPositionType::destroy(uci::type::KinematicsFixedPositionType& accessor) {
  delete dynamic_cast<asb_uci::type::KinematicsFixedPositionType*>(&accessor);
}

} // namespace type

} // namespace uci

