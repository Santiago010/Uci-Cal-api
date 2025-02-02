/** @file COE_OrbitType.cpp
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

#include "../../../include/asb_uci/type/COE_OrbitType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/COE_OrbitBaseType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/COE_OrbitType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DistanceType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

COE_OrbitType::COE_OrbitType() = default;

COE_OrbitType::~COE_OrbitType() = default;

void COE_OrbitType::copy(const uci::type::COE_OrbitType& accessor) {
  copyImpl(accessor, false);
}

void COE_OrbitType::copyImpl(const uci::type::COE_OrbitType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    COE_OrbitBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const COE_OrbitType&>(accessor);
    setSemimajorAxis(accessorImpl.semimajorAxis_Accessor);
  }
}

void COE_OrbitType::reset() noexcept {
  COE_OrbitBaseType::reset();
  semimajorAxis_Accessor = 0.0;
}

uci::type::DistanceTypeValue COE_OrbitType::getSemimajorAxis() const {
  return semimajorAxis_Accessor;
}

uci::type::COE_OrbitType& COE_OrbitType::setSemimajorAxis(uci::type::DistanceTypeValue value) {
  semimajorAxis_Accessor = value;
  return *this;
}


std::unique_ptr<COE_OrbitType> COE_OrbitType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::cOE_OrbitType : type};
  return (requestedType == uci::type::accessorType::cOE_OrbitType) ? boost::make_unique<COE_OrbitType>() : nullptr;
}

/**  */
namespace COE_OrbitType_Names {

constexpr const char* Extern_Type_Name{"COE_OrbitType"};
constexpr const char* SemimajorAxis_Name{"SemimajorAxis"};

} // namespace COE_OrbitType_Names

void COE_OrbitType::deserialize(const boost::property_tree::ptree& propTree, uci::type::COE_OrbitType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = COE_OrbitType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + COE_OrbitType_Names::SemimajorAxis_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSemimajorAxis(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    }
  }
  COE_OrbitBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string COE_OrbitType::serialize(const uci::type::COE_OrbitType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? COE_OrbitType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, COE_OrbitType_Names::Extern_Type_Name);
  }
  COE_OrbitBaseType::serialize(accessor, node, "", false, false, false);
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getSemimajorAxis(), node, COE_OrbitType_Names::SemimajorAxis_Name);
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

uci::type::COE_OrbitType& COE_OrbitType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::COE_OrbitType>().release());
}

uci::type::COE_OrbitType& COE_OrbitType::create(const uci::type::COE_OrbitType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::COE_OrbitType> newAccessor{boost::make_unique<asb_uci::type::COE_OrbitType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void COE_OrbitType::destroy(uci::type::COE_OrbitType& accessor) {
  delete dynamic_cast<asb_uci::type::COE_OrbitType*>(&accessor);
}

} // namespace type

} // namespace uci

