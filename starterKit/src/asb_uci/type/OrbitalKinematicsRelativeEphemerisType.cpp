/** @file OrbitalKinematicsRelativeEphemerisType.cpp
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

#include "../../../include/asb_uci/type/OrbitalKinematicsRelativeEphemerisType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/AssetType.h"
#include "../../../include/asb_uci/type/OrbitalKinematicsRelativeStateVectorType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AssetType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitalKinematicsRelativeEphemerisType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitalKinematicsRelativeStateVectorType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OrbitalKinematicsRelativeEphemerisType::OrbitalKinematicsRelativeEphemerisType()
  : relativeStateVector_Accessor{boost::make_unique<RelativeStateVector>(1, SIZE_MAX)} {
}

OrbitalKinematicsRelativeEphemerisType::~OrbitalKinematicsRelativeEphemerisType() = default;

void OrbitalKinematicsRelativeEphemerisType::copy(const uci::type::OrbitalKinematicsRelativeEphemerisType& accessor) {
  copyImpl(accessor, false);
}

void OrbitalKinematicsRelativeEphemerisType::copyImpl(const uci::type::OrbitalKinematicsRelativeEphemerisType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const OrbitalKinematicsRelativeEphemerisType&>(accessor);
    setRelativeStateVector(*(accessorImpl.relativeStateVector_Accessor));
    if (accessorImpl.referenceAsset_Accessor) {
      setReferenceAsset(*(accessorImpl.referenceAsset_Accessor));
    } else {
      referenceAsset_Accessor.reset();
    }
  }
}

void OrbitalKinematicsRelativeEphemerisType::reset() noexcept {
  relativeStateVector_Accessor->reset();
  referenceAsset_Accessor.reset();
}

const uci::type::OrbitalKinematicsRelativeEphemerisType::RelativeStateVector& OrbitalKinematicsRelativeEphemerisType::getRelativeStateVector() const {
  return *relativeStateVector_Accessor;
}

uci::type::OrbitalKinematicsRelativeEphemerisType::RelativeStateVector& OrbitalKinematicsRelativeEphemerisType::getRelativeStateVector() {
  return *relativeStateVector_Accessor;
}

uci::type::OrbitalKinematicsRelativeEphemerisType& OrbitalKinematicsRelativeEphemerisType::setRelativeStateVector(const uci::type::OrbitalKinematicsRelativeEphemerisType::RelativeStateVector& accessor) {
  if (&accessor != relativeStateVector_Accessor.get()) {
    relativeStateVector_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::AssetType& OrbitalKinematicsRelativeEphemerisType::getReferenceAsset_() const {
  if (referenceAsset_Accessor) {
    return *referenceAsset_Accessor;
  }
  throw uci::base::UCIException("Error in getReferenceAsset(): An attempt was made to get an optional field that was not enabled, call hasReferenceAsset() to determine if it is safe to call getReferenceAsset()");
}

const uci::type::AssetType& OrbitalKinematicsRelativeEphemerisType::getReferenceAsset() const {
  return getReferenceAsset_();
}

uci::type::AssetType& OrbitalKinematicsRelativeEphemerisType::getReferenceAsset() {
  return getReferenceAsset_();
}

uci::type::OrbitalKinematicsRelativeEphemerisType& OrbitalKinematicsRelativeEphemerisType::setReferenceAsset(const uci::type::AssetType& accessor) {
  enableReferenceAsset();
  if (&accessor != referenceAsset_Accessor.get()) {
    referenceAsset_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OrbitalKinematicsRelativeEphemerisType::hasReferenceAsset() const noexcept {
  return static_cast<bool>(referenceAsset_Accessor);
}

uci::type::AssetType& OrbitalKinematicsRelativeEphemerisType::enableReferenceAsset(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::assetType : type};
  if ((!referenceAsset_Accessor) || (referenceAsset_Accessor->getAccessorType() != requestedType)) {
    referenceAsset_Accessor = AssetType::create(requestedType);
    if (!referenceAsset_Accessor) {
      throw uci::base::UCIException("Error in enableReferenceAsset(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *referenceAsset_Accessor;
}

uci::type::OrbitalKinematicsRelativeEphemerisType& OrbitalKinematicsRelativeEphemerisType::clearReferenceAsset() noexcept {
  referenceAsset_Accessor.reset();
  return *this;
}

std::unique_ptr<OrbitalKinematicsRelativeEphemerisType> OrbitalKinematicsRelativeEphemerisType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitalKinematicsRelativeEphemerisType : type};
  return (requestedType == uci::type::accessorType::orbitalKinematicsRelativeEphemerisType) ? boost::make_unique<OrbitalKinematicsRelativeEphemerisType>() : nullptr;
}

/**  */
namespace OrbitalKinematicsRelativeEphemerisType_Names {

constexpr const char* Extern_Type_Name{"OrbitalKinematicsRelativeEphemerisType"};
constexpr const char* RelativeStateVector_Name{"RelativeStateVector"};
constexpr const char* ReferenceAsset_Name{"ReferenceAsset"};

} // namespace OrbitalKinematicsRelativeEphemerisType_Names

void OrbitalKinematicsRelativeEphemerisType::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitalKinematicsRelativeEphemerisType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitalKinematicsRelativeEphemerisType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitalKinematicsRelativeEphemerisType_Names::RelativeStateVector_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::OrbitalKinematicsRelativeEphemerisType::RelativeStateVector& boundedList = accessor.getRelativeStateVector();
        const uci::type::OrbitalKinematicsRelativeEphemerisType::RelativeStateVector::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::OrbitalKinematicsRelativeStateVectorType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + OrbitalKinematicsRelativeEphemerisType_Names::ReferenceAsset_Name) {
      AssetType::deserialize(valueType.second, accessor.enableReferenceAsset(), nodeName, nsPrefix);
    }
  }
}

std::string OrbitalKinematicsRelativeEphemerisType::serialize(const uci::type::OrbitalKinematicsRelativeEphemerisType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? OrbitalKinematicsRelativeEphemerisType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitalKinematicsRelativeEphemerisType_Names::Extern_Type_Name);
  }
  {
    const uci::type::OrbitalKinematicsRelativeEphemerisType::RelativeStateVector& boundedList = accessor.getRelativeStateVector();
    for (uci::type::OrbitalKinematicsRelativeEphemerisType::RelativeStateVector::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::OrbitalKinematicsRelativeStateVectorType::serialize(boundedList.at(i), node, OrbitalKinematicsRelativeEphemerisType_Names::RelativeStateVector_Name);
    }
  }
  if (accessor.hasReferenceAsset()) {
    AssetType::serialize(accessor.getReferenceAsset(), node, OrbitalKinematicsRelativeEphemerisType_Names::ReferenceAsset_Name);
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

uci::type::OrbitalKinematicsRelativeEphemerisType& OrbitalKinematicsRelativeEphemerisType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OrbitalKinematicsRelativeEphemerisType>().release());
}

uci::type::OrbitalKinematicsRelativeEphemerisType& OrbitalKinematicsRelativeEphemerisType::create(const uci::type::OrbitalKinematicsRelativeEphemerisType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OrbitalKinematicsRelativeEphemerisType> newAccessor{boost::make_unique<asb_uci::type::OrbitalKinematicsRelativeEphemerisType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OrbitalKinematicsRelativeEphemerisType::destroy(uci::type::OrbitalKinematicsRelativeEphemerisType& accessor) {
  delete dynamic_cast<asb_uci::type::OrbitalKinematicsRelativeEphemerisType*>(&accessor);
}

} // namespace type

} // namespace uci

