/** @file SpecificVehicleIdentityConfidenceType.cpp
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

#include "../../../include/asb_uci/type/SpecificVehicleIdentityConfidenceType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/VehicleIdentificationType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PercentType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SpecificVehicleIdentityConfidenceType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SpecificVehicleIdentityConfidenceType::SpecificVehicleIdentityConfidenceType() = default;

SpecificVehicleIdentityConfidenceType::~SpecificVehicleIdentityConfidenceType() = default;

void SpecificVehicleIdentityConfidenceType::copy(const uci::type::SpecificVehicleIdentityConfidenceType& accessor) {
  copyImpl(accessor, false);
}

void SpecificVehicleIdentityConfidenceType::copyImpl(const uci::type::SpecificVehicleIdentityConfidenceType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    VehicleIdentificationType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const SpecificVehicleIdentityConfidenceType&>(accessor);
    setConfidence(accessorImpl.confidence_Accessor);
  }
}

void SpecificVehicleIdentityConfidenceType::reset() noexcept {
  VehicleIdentificationType::reset();
  confidence_Accessor = 0.0;
}

uci::type::PercentTypeValue SpecificVehicleIdentityConfidenceType::getConfidence() const {
  return confidence_Accessor;
}

uci::type::SpecificVehicleIdentityConfidenceType& SpecificVehicleIdentityConfidenceType::setConfidence(uci::type::PercentTypeValue value) {
  confidence_Accessor = value;
  return *this;
}


std::unique_ptr<SpecificVehicleIdentityConfidenceType> SpecificVehicleIdentityConfidenceType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::specificVehicleIdentityConfidenceType : type};
  return (requestedType == uci::type::accessorType::specificVehicleIdentityConfidenceType) ? boost::make_unique<SpecificVehicleIdentityConfidenceType>() : nullptr;
}

/**  */
namespace SpecificVehicleIdentityConfidenceType_Names {

constexpr const char* Extern_Type_Name{"SpecificVehicleIdentityConfidenceType"};
constexpr const char* Confidence_Name{"Confidence"};

} // namespace SpecificVehicleIdentityConfidenceType_Names

void SpecificVehicleIdentityConfidenceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SpecificVehicleIdentityConfidenceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SpecificVehicleIdentityConfidenceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SpecificVehicleIdentityConfidenceType_Names::Confidence_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setConfidence(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    }
  }
  VehicleIdentificationType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string SpecificVehicleIdentityConfidenceType::serialize(const uci::type::SpecificVehicleIdentityConfidenceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SpecificVehicleIdentityConfidenceType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SpecificVehicleIdentityConfidenceType_Names::Extern_Type_Name);
  }
  VehicleIdentificationType::serialize(accessor, node, "", false, false, false);
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getConfidence(), node, SpecificVehicleIdentityConfidenceType_Names::Confidence_Name);
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

uci::type::SpecificVehicleIdentityConfidenceType& SpecificVehicleIdentityConfidenceType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SpecificVehicleIdentityConfidenceType>().release());
}

uci::type::SpecificVehicleIdentityConfidenceType& SpecificVehicleIdentityConfidenceType::create(const uci::type::SpecificVehicleIdentityConfidenceType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SpecificVehicleIdentityConfidenceType> newAccessor{boost::make_unique<asb_uci::type::SpecificVehicleIdentityConfidenceType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SpecificVehicleIdentityConfidenceType::destroy(uci::type::SpecificVehicleIdentityConfidenceType& accessor) {
  delete dynamic_cast<asb_uci::type::SpecificVehicleIdentityConfidenceType*>(&accessor);
}

} // namespace type

} // namespace uci

