/** @file Level2Type.cpp
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

#include "../../../include/asb_uci/type/Level2Type.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Level2Type.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

Level2Type::Level2Type() = default;

Level2Type::~Level2Type() = default;

void Level2Type::copy(const uci::type::Level2Type& accessor) {
  copyImpl(accessor, false);
}

void Level2Type::copyImpl(const uci::type::Level2Type& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const Level2Type&>(accessor);
    setResponseEnabled(accessorImpl.responseEnabled_Accessor);
    setSquitterEnabled(accessorImpl.squitterEnabled_Accessor);
  }
}

void Level2Type::reset() noexcept {
  responseEnabled_Accessor = false;
  squitterEnabled_Accessor = false;
}

xs::Boolean Level2Type::getResponseEnabled() const {
  return responseEnabled_Accessor;
}

uci::type::Level2Type& Level2Type::setResponseEnabled(xs::Boolean value) {
  responseEnabled_Accessor = value;
  return *this;
}


xs::Boolean Level2Type::getSquitterEnabled() const {
  return squitterEnabled_Accessor;
}

uci::type::Level2Type& Level2Type::setSquitterEnabled(xs::Boolean value) {
  squitterEnabled_Accessor = value;
  return *this;
}


std::unique_ptr<Level2Type> Level2Type::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::level2Type : type};
  return (requestedType == uci::type::accessorType::level2Type) ? boost::make_unique<Level2Type>() : nullptr;
}

/**  */
namespace Level2Type_Names {

constexpr const char* Extern_Type_Name{"Level2Type"};
constexpr const char* ResponseEnabled_Name{"ResponseEnabled"};
constexpr const char* SquitterEnabled_Name{"SquitterEnabled"};

} // namespace Level2Type_Names

void Level2Type::deserialize(const boost::property_tree::ptree& propTree, uci::type::Level2Type& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = Level2Type_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + Level2Type_Names::ResponseEnabled_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setResponseEnabled(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + Level2Type_Names::SquitterEnabled_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSquitterEnabled(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    }
  }
}

std::string Level2Type::serialize(const uci::type::Level2Type& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? Level2Type_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, Level2Type_Names::Extern_Type_Name);
  }
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getResponseEnabled(), node, Level2Type_Names::ResponseEnabled_Name);
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getSquitterEnabled(), node, Level2Type_Names::SquitterEnabled_Name);
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

uci::type::Level2Type& Level2Type::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::Level2Type>().release());
}

uci::type::Level2Type& Level2Type::create(const uci::type::Level2Type& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::Level2Type> newAccessor{boost::make_unique<asb_uci::type::Level2Type>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void Level2Type::destroy(uci::type::Level2Type& accessor) {
  delete dynamic_cast<asb_uci::type::Level2Type*>(&accessor);
}

} // namespace type

} // namespace uci

