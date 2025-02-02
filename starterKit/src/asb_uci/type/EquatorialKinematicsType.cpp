/** @file EquatorialKinematicsType.cpp
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

#include "../../../include/asb_uci/type/EquatorialKinematicsType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/EquatorialCoordinatesCovarianceType.h"
#include "../../../include/asb_uci/type/EquatorialCoordinatesType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EquatorialCoordinatesCovarianceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EquatorialCoordinatesType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EquatorialKinematicsType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

EquatorialKinematicsType::EquatorialKinematicsType()
  : equatorialCoordinates_Accessor{boost::make_unique<EquatorialCoordinatesType>()} {
}

EquatorialKinematicsType::~EquatorialKinematicsType() = default;

void EquatorialKinematicsType::copy(const uci::type::EquatorialKinematicsType& accessor) {
  copyImpl(accessor, false);
}

void EquatorialKinematicsType::copyImpl(const uci::type::EquatorialKinematicsType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const EquatorialKinematicsType&>(accessor);
    setEquatorialCoordinates(*(accessorImpl.equatorialCoordinates_Accessor));
    if (accessorImpl.equatorialCoordinatesCovariance_Accessor) {
      setEquatorialCoordinatesCovariance(*(accessorImpl.equatorialCoordinatesCovariance_Accessor));
    } else {
      equatorialCoordinatesCovariance_Accessor.reset();
    }
  }
}

void EquatorialKinematicsType::reset() noexcept {
  equatorialCoordinates_Accessor->reset();
  equatorialCoordinatesCovariance_Accessor.reset();
}

const uci::type::EquatorialCoordinatesType& EquatorialKinematicsType::getEquatorialCoordinates() const {
  return *equatorialCoordinates_Accessor;
}

uci::type::EquatorialCoordinatesType& EquatorialKinematicsType::getEquatorialCoordinates() {
  return *equatorialCoordinates_Accessor;
}

uci::type::EquatorialKinematicsType& EquatorialKinematicsType::setEquatorialCoordinates(const uci::type::EquatorialCoordinatesType& accessor) {
  if (&accessor != equatorialCoordinates_Accessor.get()) {
    equatorialCoordinates_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::EquatorialCoordinatesCovarianceType& EquatorialKinematicsType::getEquatorialCoordinatesCovariance_() const {
  if (equatorialCoordinatesCovariance_Accessor) {
    return *equatorialCoordinatesCovariance_Accessor;
  }
  throw uci::base::UCIException("Error in getEquatorialCoordinatesCovariance(): An attempt was made to get an optional field that was not enabled, call hasEquatorialCoordinatesCovariance() to determine if it is safe to call getEquatorialCoordinatesCovariance()");
}

const uci::type::EquatorialCoordinatesCovarianceType& EquatorialKinematicsType::getEquatorialCoordinatesCovariance() const {
  return getEquatorialCoordinatesCovariance_();
}

uci::type::EquatorialCoordinatesCovarianceType& EquatorialKinematicsType::getEquatorialCoordinatesCovariance() {
  return getEquatorialCoordinatesCovariance_();
}

uci::type::EquatorialKinematicsType& EquatorialKinematicsType::setEquatorialCoordinatesCovariance(const uci::type::EquatorialCoordinatesCovarianceType& accessor) {
  enableEquatorialCoordinatesCovariance();
  if (&accessor != equatorialCoordinatesCovariance_Accessor.get()) {
    equatorialCoordinatesCovariance_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool EquatorialKinematicsType::hasEquatorialCoordinatesCovariance() const noexcept {
  return static_cast<bool>(equatorialCoordinatesCovariance_Accessor);
}

uci::type::EquatorialCoordinatesCovarianceType& EquatorialKinematicsType::enableEquatorialCoordinatesCovariance(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::equatorialCoordinatesCovarianceType : type};
  if ((!equatorialCoordinatesCovariance_Accessor) || (equatorialCoordinatesCovariance_Accessor->getAccessorType() != requestedType)) {
    equatorialCoordinatesCovariance_Accessor = EquatorialCoordinatesCovarianceType::create(requestedType);
    if (!equatorialCoordinatesCovariance_Accessor) {
      throw uci::base::UCIException("Error in enableEquatorialCoordinatesCovariance(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *equatorialCoordinatesCovariance_Accessor;
}

uci::type::EquatorialKinematicsType& EquatorialKinematicsType::clearEquatorialCoordinatesCovariance() noexcept {
  equatorialCoordinatesCovariance_Accessor.reset();
  return *this;
}

std::unique_ptr<EquatorialKinematicsType> EquatorialKinematicsType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::equatorialKinematicsType : type};
  return (requestedType == uci::type::accessorType::equatorialKinematicsType) ? boost::make_unique<EquatorialKinematicsType>() : nullptr;
}

/**  */
namespace EquatorialKinematicsType_Names {

constexpr const char* Extern_Type_Name{"EquatorialKinematicsType"};
constexpr const char* EquatorialCoordinates_Name{"EquatorialCoordinates"};
constexpr const char* EquatorialCoordinatesCovariance_Name{"EquatorialCoordinatesCovariance"};

} // namespace EquatorialKinematicsType_Names

void EquatorialKinematicsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::EquatorialKinematicsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EquatorialKinematicsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + EquatorialKinematicsType_Names::EquatorialCoordinates_Name) {
      EquatorialCoordinatesType::deserialize(valueType.second, accessor.getEquatorialCoordinates(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EquatorialKinematicsType_Names::EquatorialCoordinatesCovariance_Name) {
      EquatorialCoordinatesCovarianceType::deserialize(valueType.second, accessor.enableEquatorialCoordinatesCovariance(), nodeName, nsPrefix);
    }
  }
}

std::string EquatorialKinematicsType::serialize(const uci::type::EquatorialKinematicsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? EquatorialKinematicsType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, EquatorialKinematicsType_Names::Extern_Type_Name);
  }
  EquatorialCoordinatesType::serialize(accessor.getEquatorialCoordinates(), node, EquatorialKinematicsType_Names::EquatorialCoordinates_Name);
  if (accessor.hasEquatorialCoordinatesCovariance()) {
    EquatorialCoordinatesCovarianceType::serialize(accessor.getEquatorialCoordinatesCovariance(), node, EquatorialKinematicsType_Names::EquatorialCoordinatesCovariance_Name);
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

uci::type::EquatorialKinematicsType& EquatorialKinematicsType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::EquatorialKinematicsType>().release());
}

uci::type::EquatorialKinematicsType& EquatorialKinematicsType::create(const uci::type::EquatorialKinematicsType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::EquatorialKinematicsType> newAccessor{boost::make_unique<asb_uci::type::EquatorialKinematicsType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void EquatorialKinematicsType::destroy(uci::type::EquatorialKinematicsType& accessor) {
  delete dynamic_cast<asb_uci::type::EquatorialKinematicsType*>(&accessor);
}

} // namespace type

} // namespace uci

