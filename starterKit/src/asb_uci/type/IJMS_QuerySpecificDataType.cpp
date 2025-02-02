/** @file IJMS_QuerySpecificDataType.cpp
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

#include "../../../include/asb_uci/type/IJMS_QuerySpecificDataType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/GeoLocatedObjectType.h"
#include "../../../include/asb_uci/type/QuerySpecificDataPET.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/GeoLocatedObjectType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IJMS_QuerySpecificDataType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

IJMS_QuerySpecificDataType::IJMS_QuerySpecificDataType()
  : referenceObject_Accessor{boost::make_unique<GeoLocatedObjectType>()} {
}

IJMS_QuerySpecificDataType::~IJMS_QuerySpecificDataType() = default;

void IJMS_QuerySpecificDataType::copy(const uci::type::IJMS_QuerySpecificDataType& accessor) {
  copyImpl(accessor, false);
}

void IJMS_QuerySpecificDataType::copyImpl(const uci::type::IJMS_QuerySpecificDataType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    QuerySpecificDataPET::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const IJMS_QuerySpecificDataType&>(accessor);
    setReferenceObject(*(accessorImpl.referenceObject_Accessor));
    setIJMS(accessorImpl.iJMS_Accessor);
  }
}

void IJMS_QuerySpecificDataType::reset() noexcept {
  QuerySpecificDataPET::reset();
  referenceObject_Accessor->reset();
  iJMS_Accessor = false;
}

const uci::type::GeoLocatedObjectType& IJMS_QuerySpecificDataType::getReferenceObject() const {
  return *referenceObject_Accessor;
}

uci::type::GeoLocatedObjectType& IJMS_QuerySpecificDataType::getReferenceObject() {
  return *referenceObject_Accessor;
}

uci::type::IJMS_QuerySpecificDataType& IJMS_QuerySpecificDataType::setReferenceObject(const uci::type::GeoLocatedObjectType& accessor) {
  if (&accessor != referenceObject_Accessor.get()) {
    referenceObject_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

xs::Boolean IJMS_QuerySpecificDataType::getIJMS() const {
  return iJMS_Accessor;
}

uci::type::IJMS_QuerySpecificDataType& IJMS_QuerySpecificDataType::setIJMS(xs::Boolean value) {
  iJMS_Accessor = value;
  return *this;
}


std::unique_ptr<IJMS_QuerySpecificDataType> IJMS_QuerySpecificDataType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::iJMS_QuerySpecificDataType : type};
  return (requestedType == uci::type::accessorType::iJMS_QuerySpecificDataType) ? boost::make_unique<IJMS_QuerySpecificDataType>() : nullptr;
}

/**  */
namespace IJMS_QuerySpecificDataType_Names {

constexpr const char* Extern_Type_Name{"IJMS_QuerySpecificDataType"};
constexpr const char* ReferenceObject_Name{"ReferenceObject"};
constexpr const char* IJMS_Name{"IJMS"};

} // namespace IJMS_QuerySpecificDataType_Names

void IJMS_QuerySpecificDataType::deserialize(const boost::property_tree::ptree& propTree, uci::type::IJMS_QuerySpecificDataType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = IJMS_QuerySpecificDataType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + IJMS_QuerySpecificDataType_Names::ReferenceObject_Name) {
      GeoLocatedObjectType::deserialize(valueType.second, accessor.getReferenceObject(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + IJMS_QuerySpecificDataType_Names::IJMS_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setIJMS(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    }
  }
  QuerySpecificDataPET::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string IJMS_QuerySpecificDataType::serialize(const uci::type::IJMS_QuerySpecificDataType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? IJMS_QuerySpecificDataType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, IJMS_QuerySpecificDataType_Names::Extern_Type_Name);
  }
  QuerySpecificDataPET::serialize(accessor, node, "", false, false, false);
  GeoLocatedObjectType::serialize(accessor.getReferenceObject(), node, IJMS_QuerySpecificDataType_Names::ReferenceObject_Name);
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getIJMS(), node, IJMS_QuerySpecificDataType_Names::IJMS_Name);
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

uci::type::IJMS_QuerySpecificDataType& IJMS_QuerySpecificDataType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::IJMS_QuerySpecificDataType>().release());
}

uci::type::IJMS_QuerySpecificDataType& IJMS_QuerySpecificDataType::create(const uci::type::IJMS_QuerySpecificDataType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::IJMS_QuerySpecificDataType> newAccessor{boost::make_unique<asb_uci::type::IJMS_QuerySpecificDataType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void IJMS_QuerySpecificDataType::destroy(uci::type::IJMS_QuerySpecificDataType& accessor) {
  delete dynamic_cast<asb_uci::type::IJMS_QuerySpecificDataType*>(&accessor);
}

} // namespace type

} // namespace uci

