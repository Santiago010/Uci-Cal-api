/** @file OrbitKinematicsSequenceTrimType.cpp
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

#include "../../../include/asb_uci/type/OrbitKinematicsSequenceTrimType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/OrbitKinematicsSequenceID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitKinematicsSequenceID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitKinematicsSequenceTrimType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OrbitKinematicsSequenceTrimType::OrbitKinematicsSequenceTrimType()
  : startID_Accessor{boost::make_unique<OrbitKinematicsSequenceID_Type>()} {
}

OrbitKinematicsSequenceTrimType::~OrbitKinematicsSequenceTrimType() = default;

void OrbitKinematicsSequenceTrimType::copy(const uci::type::OrbitKinematicsSequenceTrimType& accessor) {
  copyImpl(accessor, false);
}

void OrbitKinematicsSequenceTrimType::copyImpl(const uci::type::OrbitKinematicsSequenceTrimType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const OrbitKinematicsSequenceTrimType&>(accessor);
    setStartID(*(accessorImpl.startID_Accessor));
    if (accessorImpl.trimUntilID_Accessor) {
      setTrimUntilID(*(accessorImpl.trimUntilID_Accessor));
    } else {
      trimUntilID_Accessor.reset();
    }
  }
}

void OrbitKinematicsSequenceTrimType::reset() noexcept {
  startID_Accessor->reset();
  trimUntilID_Accessor.reset();
}

const uci::type::OrbitKinematicsSequenceID_Type& OrbitKinematicsSequenceTrimType::getStartID() const {
  return *startID_Accessor;
}

uci::type::OrbitKinematicsSequenceID_Type& OrbitKinematicsSequenceTrimType::getStartID() {
  return *startID_Accessor;
}

uci::type::OrbitKinematicsSequenceTrimType& OrbitKinematicsSequenceTrimType::setStartID(const uci::type::OrbitKinematicsSequenceID_Type& accessor) {
  if (&accessor != startID_Accessor.get()) {
    startID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::OrbitKinematicsSequenceID_Type& OrbitKinematicsSequenceTrimType::getTrimUntilID_() const {
  if (trimUntilID_Accessor) {
    return *trimUntilID_Accessor;
  }
  throw uci::base::UCIException("Error in getTrimUntilID(): An attempt was made to get an optional field that was not enabled, call hasTrimUntilID() to determine if it is safe to call getTrimUntilID()");
}

const uci::type::OrbitKinematicsSequenceID_Type& OrbitKinematicsSequenceTrimType::getTrimUntilID() const {
  return getTrimUntilID_();
}

uci::type::OrbitKinematicsSequenceID_Type& OrbitKinematicsSequenceTrimType::getTrimUntilID() {
  return getTrimUntilID_();
}

uci::type::OrbitKinematicsSequenceTrimType& OrbitKinematicsSequenceTrimType::setTrimUntilID(const uci::type::OrbitKinematicsSequenceID_Type& accessor) {
  enableTrimUntilID();
  if (&accessor != trimUntilID_Accessor.get()) {
    trimUntilID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OrbitKinematicsSequenceTrimType::hasTrimUntilID() const noexcept {
  return static_cast<bool>(trimUntilID_Accessor);
}

uci::type::OrbitKinematicsSequenceID_Type& OrbitKinematicsSequenceTrimType::enableTrimUntilID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitKinematicsSequenceID_Type : type};
  if ((!trimUntilID_Accessor) || (trimUntilID_Accessor->getAccessorType() != requestedType)) {
    trimUntilID_Accessor = OrbitKinematicsSequenceID_Type::create(requestedType);
    if (!trimUntilID_Accessor) {
      throw uci::base::UCIException("Error in enableTrimUntilID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *trimUntilID_Accessor;
}

uci::type::OrbitKinematicsSequenceTrimType& OrbitKinematicsSequenceTrimType::clearTrimUntilID() noexcept {
  trimUntilID_Accessor.reset();
  return *this;
}

std::unique_ptr<OrbitKinematicsSequenceTrimType> OrbitKinematicsSequenceTrimType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitKinematicsSequenceTrimType : type};
  return (requestedType == uci::type::accessorType::orbitKinematicsSequenceTrimType) ? boost::make_unique<OrbitKinematicsSequenceTrimType>() : nullptr;
}

/**  */
namespace OrbitKinematicsSequenceTrimType_Names {

constexpr const char* Extern_Type_Name{"OrbitKinematicsSequenceTrimType"};
constexpr const char* StartID_Name{"StartID"};
constexpr const char* TrimUntilID_Name{"TrimUntilID"};

} // namespace OrbitKinematicsSequenceTrimType_Names

void OrbitKinematicsSequenceTrimType::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitKinematicsSequenceTrimType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitKinematicsSequenceTrimType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitKinematicsSequenceTrimType_Names::StartID_Name) {
      OrbitKinematicsSequenceID_Type::deserialize(valueType.second, accessor.getStartID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitKinematicsSequenceTrimType_Names::TrimUntilID_Name) {
      OrbitKinematicsSequenceID_Type::deserialize(valueType.second, accessor.enableTrimUntilID(), nodeName, nsPrefix);
    }
  }
}

std::string OrbitKinematicsSequenceTrimType::serialize(const uci::type::OrbitKinematicsSequenceTrimType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? OrbitKinematicsSequenceTrimType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitKinematicsSequenceTrimType_Names::Extern_Type_Name);
  }
  OrbitKinematicsSequenceID_Type::serialize(accessor.getStartID(), node, OrbitKinematicsSequenceTrimType_Names::StartID_Name);
  if (accessor.hasTrimUntilID()) {
    OrbitKinematicsSequenceID_Type::serialize(accessor.getTrimUntilID(), node, OrbitKinematicsSequenceTrimType_Names::TrimUntilID_Name);
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

uci::type::OrbitKinematicsSequenceTrimType& OrbitKinematicsSequenceTrimType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OrbitKinematicsSequenceTrimType>().release());
}

uci::type::OrbitKinematicsSequenceTrimType& OrbitKinematicsSequenceTrimType::create(const uci::type::OrbitKinematicsSequenceTrimType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OrbitKinematicsSequenceTrimType> newAccessor{boost::make_unique<asb_uci::type::OrbitKinematicsSequenceTrimType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OrbitKinematicsSequenceTrimType::destroy(uci::type::OrbitKinematicsSequenceTrimType& accessor) {
  delete dynamic_cast<asb_uci::type::OrbitKinematicsSequenceTrimType*>(&accessor);
}

} // namespace type

} // namespace uci

