/** @file RTN_AccelerationType.cpp
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

#include "../../../include/asb_uci/type/RTN_AccelerationType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AccelerationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RTN_AccelerationType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

RTN_AccelerationType::RTN_AccelerationType() = default;

RTN_AccelerationType::~RTN_AccelerationType() = default;

void RTN_AccelerationType::copy(const uci::type::RTN_AccelerationType& accessor) {
  copyImpl(accessor, false);
}

void RTN_AccelerationType::copyImpl(const uci::type::RTN_AccelerationType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const RTN_AccelerationType&>(accessor);
    setRadial(accessorImpl.radial_Accessor);
    setTransverse(accessorImpl.transverse_Accessor);
    setNormal(accessorImpl.normal_Accessor);
  }
}

void RTN_AccelerationType::reset() noexcept {
  radial_Accessor = 0.0;
  transverse_Accessor = 0.0;
  normal_Accessor = 0.0;
}

uci::type::AccelerationTypeValue RTN_AccelerationType::getRadial() const {
  return radial_Accessor;
}

uci::type::RTN_AccelerationType& RTN_AccelerationType::setRadial(uci::type::AccelerationTypeValue value) {
  radial_Accessor = value;
  return *this;
}


uci::type::AccelerationTypeValue RTN_AccelerationType::getTransverse() const {
  return transverse_Accessor;
}

uci::type::RTN_AccelerationType& RTN_AccelerationType::setTransverse(uci::type::AccelerationTypeValue value) {
  transverse_Accessor = value;
  return *this;
}


uci::type::AccelerationTypeValue RTN_AccelerationType::getNormal() const {
  return normal_Accessor;
}

uci::type::RTN_AccelerationType& RTN_AccelerationType::setNormal(uci::type::AccelerationTypeValue value) {
  normal_Accessor = value;
  return *this;
}


std::unique_ptr<RTN_AccelerationType> RTN_AccelerationType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::rTN_AccelerationType : type};
  return (requestedType == uci::type::accessorType::rTN_AccelerationType) ? boost::make_unique<RTN_AccelerationType>() : nullptr;
}

/**  */
namespace RTN_AccelerationType_Names {

constexpr const char* Extern_Type_Name{"RTN_AccelerationType"};
constexpr const char* Radial_Name{"Radial"};
constexpr const char* Transverse_Name{"Transverse"};
constexpr const char* Normal_Name{"Normal"};

} // namespace RTN_AccelerationType_Names

void RTN_AccelerationType::deserialize(const boost::property_tree::ptree& propTree, uci::type::RTN_AccelerationType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RTN_AccelerationType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RTN_AccelerationType_Names::Radial_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRadial(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + RTN_AccelerationType_Names::Transverse_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTransverse(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + RTN_AccelerationType_Names::Normal_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setNormal(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    }
  }
}

std::string RTN_AccelerationType::serialize(const uci::type::RTN_AccelerationType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? RTN_AccelerationType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, RTN_AccelerationType_Names::Extern_Type_Name);
  }
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getRadial(), node, RTN_AccelerationType_Names::Radial_Name);
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getTransverse(), node, RTN_AccelerationType_Names::Transverse_Name);
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getNormal(), node, RTN_AccelerationType_Names::Normal_Name);
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

uci::type::RTN_AccelerationType& RTN_AccelerationType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::RTN_AccelerationType>().release());
}

uci::type::RTN_AccelerationType& RTN_AccelerationType::create(const uci::type::RTN_AccelerationType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::RTN_AccelerationType> newAccessor{boost::make_unique<asb_uci::type::RTN_AccelerationType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void RTN_AccelerationType::destroy(uci::type::RTN_AccelerationType& accessor) {
  delete dynamic_cast<asb_uci::type::RTN_AccelerationType*>(&accessor);
}

} // namespace type

} // namespace uci

