/** @file EnduranceFootprintType.cpp
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

#include "../../../include/asb_uci/type/EnduranceFootprintType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/BoundaryType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AltitudeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/BoundaryType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DurationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EnduranceFootprintType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

EnduranceFootprintType::EnduranceFootprintType()
  : boundary_Accessor{boost::make_unique<BoundaryType>()} {
}

EnduranceFootprintType::~EnduranceFootprintType() = default;

void EnduranceFootprintType::copy(const uci::type::EnduranceFootprintType& accessor) {
  copyImpl(accessor, false);
}

void EnduranceFootprintType::copyImpl(const uci::type::EnduranceFootprintType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const EnduranceFootprintType&>(accessor);
    setBoundary(*(accessorImpl.boundary_Accessor));
    if (accessorImpl.hasReferenceAltitude()) {
      setReferenceAltitude(accessorImpl.getReferenceAltitude());
    } else {
      clearReferenceAltitude();
    }
    if (accessorImpl.hasDuration()) {
      setDuration(accessorImpl.getDuration());
    } else {
      clearDuration();
    }
  }
}

void EnduranceFootprintType::reset() noexcept {
  boundary_Accessor->reset();
  clearReferenceAltitude();
  clearDuration();
}

const uci::type::BoundaryType& EnduranceFootprintType::getBoundary() const {
  return *boundary_Accessor;
}

uci::type::BoundaryType& EnduranceFootprintType::getBoundary() {
  return *boundary_Accessor;
}

uci::type::EnduranceFootprintType& EnduranceFootprintType::setBoundary(const uci::type::BoundaryType& accessor) {
  if (&accessor != boundary_Accessor.get()) {
    boundary_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::AltitudeTypeValue EnduranceFootprintType::getReferenceAltitude() const {
  if (referenceAltitude_Accessor) {
    return *referenceAltitude_Accessor;
  }
  throw uci::base::UCIException("Error in getReferenceAltitude(): An attempt was made to get an optional field that was not enabled, call hasReferenceAltitude() to determine if it is safe to call getReferenceAltitude()");
}

uci::type::EnduranceFootprintType& EnduranceFootprintType::setReferenceAltitude(uci::type::AltitudeTypeValue value) {
  referenceAltitude_Accessor = value;
  return *this;
}

bool EnduranceFootprintType::hasReferenceAltitude() const noexcept {
  return referenceAltitude_Accessor.has_value();
}

uci::type::EnduranceFootprintType& EnduranceFootprintType::clearReferenceAltitude() noexcept {
  referenceAltitude_Accessor.reset();
  return *this;
}

uci::type::DurationTypeValue EnduranceFootprintType::getDuration() const {
  if (duration_Accessor) {
    return *duration_Accessor;
  }
  throw uci::base::UCIException("Error in getDuration(): An attempt was made to get an optional field that was not enabled, call hasDuration() to determine if it is safe to call getDuration()");
}

uci::type::EnduranceFootprintType& EnduranceFootprintType::setDuration(uci::type::DurationTypeValue value) {
  duration_Accessor = value;
  return *this;
}

bool EnduranceFootprintType::hasDuration() const noexcept {
  return duration_Accessor.has_value();
}

uci::type::EnduranceFootprintType& EnduranceFootprintType::clearDuration() noexcept {
  duration_Accessor.reset();
  return *this;
}

std::unique_ptr<EnduranceFootprintType> EnduranceFootprintType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::enduranceFootprintType : type};
  return (requestedType == uci::type::accessorType::enduranceFootprintType) ? boost::make_unique<EnduranceFootprintType>() : nullptr;
}

/**  */
namespace EnduranceFootprintType_Names {

constexpr const char* Extern_Type_Name{"EnduranceFootprintType"};
constexpr const char* Boundary_Name{"Boundary"};
constexpr const char* ReferenceAltitude_Name{"ReferenceAltitude"};
constexpr const char* Duration_Name{"Duration"};

} // namespace EnduranceFootprintType_Names

void EnduranceFootprintType::deserialize(const boost::property_tree::ptree& propTree, uci::type::EnduranceFootprintType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EnduranceFootprintType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + EnduranceFootprintType_Names::Boundary_Name) {
      BoundaryType::deserialize(valueType.second, accessor.getBoundary(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EnduranceFootprintType_Names::ReferenceAltitude_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setReferenceAltitude(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + EnduranceFootprintType_Names::Duration_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setDuration(asb_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    }
  }
}

std::string EnduranceFootprintType::serialize(const uci::type::EnduranceFootprintType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? EnduranceFootprintType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, EnduranceFootprintType_Names::Extern_Type_Name);
  }
  BoundaryType::serialize(accessor.getBoundary(), node, EnduranceFootprintType_Names::Boundary_Name);
  if (accessor.hasReferenceAltitude()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getReferenceAltitude(), node, EnduranceFootprintType_Names::ReferenceAltitude_Name);
  }
  if (accessor.hasDuration()) {
    asb_uci::util::SerializationHelpers::serializeDuration(accessor.getDuration(), node, EnduranceFootprintType_Names::Duration_Name);
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

uci::type::EnduranceFootprintType& EnduranceFootprintType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::EnduranceFootprintType>().release());
}

uci::type::EnduranceFootprintType& EnduranceFootprintType::create(const uci::type::EnduranceFootprintType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::EnduranceFootprintType> newAccessor{boost::make_unique<asb_uci::type::EnduranceFootprintType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void EnduranceFootprintType::destroy(uci::type::EnduranceFootprintType& accessor) {
  delete dynamic_cast<asb_uci::type::EnduranceFootprintType*>(&accessor);
}

} // namespace type

} // namespace uci

