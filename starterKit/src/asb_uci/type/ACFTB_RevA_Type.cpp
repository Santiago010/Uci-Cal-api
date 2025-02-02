/** @file ACFTB_RevA_Type.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:11 PM
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

#include "../../../include/asb_uci/type/ACFTB_RevA_Type.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/VisibleString20Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ACFTB_RevA_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString20Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ACFTB_RevA_Type::ACFTB_RevA_Type() = default;

ACFTB_RevA_Type::~ACFTB_RevA_Type() = default;

void ACFTB_RevA_Type::copy(const uci::type::ACFTB_RevA_Type& accessor) {
  copyImpl(accessor, false);
}

void ACFTB_RevA_Type::copyImpl(const uci::type::ACFTB_RevA_Type& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const ACFTB_RevA_Type&>(accessor);
    if (accessorImpl.aC_MSN_Identifier_Accessor) {
      setAC_MSN_Identifier(*(accessorImpl.aC_MSN_Identifier_Accessor));
    } else {
      aC_MSN_Identifier_Accessor.reset();
    }
  }
}

void ACFTB_RevA_Type::reset() noexcept {
  aC_MSN_Identifier_Accessor.reset();
}

uci::type::VisibleString20Type& ACFTB_RevA_Type::getAC_MSN_Identifier_() const {
  if (aC_MSN_Identifier_Accessor) {
    return *aC_MSN_Identifier_Accessor;
  }
  throw uci::base::UCIException("Error in getAC_MSN_Identifier(): An attempt was made to get an optional field that was not enabled, call hasAC_MSN_Identifier() to determine if it is safe to call getAC_MSN_Identifier()");
}

const uci::type::VisibleString20Type& ACFTB_RevA_Type::getAC_MSN_Identifier() const {
  return getAC_MSN_Identifier_();
}

uci::type::VisibleString20Type& ACFTB_RevA_Type::getAC_MSN_Identifier() {
  return getAC_MSN_Identifier_();
}

uci::type::ACFTB_RevA_Type& ACFTB_RevA_Type::setAC_MSN_Identifier(const uci::type::VisibleString20Type& value) {
  return setAC_MSN_Identifier(value.c_str());
}

uci::type::ACFTB_RevA_Type& ACFTB_RevA_Type::setAC_MSN_Identifier(const std::string& value) {
  return setAC_MSN_Identifier(value.c_str());
}

uci::type::ACFTB_RevA_Type& ACFTB_RevA_Type::setAC_MSN_Identifier(const char* value) {
  enableAC_MSN_Identifier().setStringValue(value);
  return *this;
}

bool ACFTB_RevA_Type::hasAC_MSN_Identifier() const noexcept {
  return static_cast<bool>(aC_MSN_Identifier_Accessor);
}

uci::type::VisibleString20Type& ACFTB_RevA_Type::enableAC_MSN_Identifier(uci::base::accessorType::AccessorType type) {
  if (!aC_MSN_Identifier_Accessor) {
    aC_MSN_Identifier_Accessor = VisibleString20Type::create(type);
  }
  return *aC_MSN_Identifier_Accessor;
}

uci::type::ACFTB_RevA_Type& ACFTB_RevA_Type::clearAC_MSN_Identifier() noexcept {
  aC_MSN_Identifier_Accessor.reset();
  return *this;
}

std::unique_ptr<ACFTB_RevA_Type> ACFTB_RevA_Type::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::aCFTB_RevA_Type : type};
  return (requestedType == uci::type::accessorType::aCFTB_RevA_Type) ? boost::make_unique<ACFTB_RevA_Type>() : nullptr;
}

/**  */
namespace ACFTB_RevA_Type_Names {

constexpr const char* Extern_Type_Name{"ACFTB_RevA_Type"};
constexpr const char* AC_MSN_Identifier_Name{"AC_MSN_Identifier"};

} // namespace ACFTB_RevA_Type_Names

void ACFTB_RevA_Type::deserialize(const boost::property_tree::ptree& propTree, uci::type::ACFTB_RevA_Type& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ACFTB_RevA_Type_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ACFTB_RevA_Type_Names::AC_MSN_Identifier_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAC_MSN_Identifier(*value);
      }
    }
  }
}

std::string ACFTB_RevA_Type::serialize(const uci::type::ACFTB_RevA_Type& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ACFTB_RevA_Type_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ACFTB_RevA_Type_Names::Extern_Type_Name);
  }
  if (accessor.hasAC_MSN_Identifier()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getAC_MSN_Identifier(), node, ACFTB_RevA_Type_Names::AC_MSN_Identifier_Name);
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

uci::type::ACFTB_RevA_Type& ACFTB_RevA_Type::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ACFTB_RevA_Type>().release());
}

uci::type::ACFTB_RevA_Type& ACFTB_RevA_Type::create(const uci::type::ACFTB_RevA_Type& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ACFTB_RevA_Type> newAccessor{boost::make_unique<asb_uci::type::ACFTB_RevA_Type>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ACFTB_RevA_Type::destroy(uci::type::ACFTB_RevA_Type& accessor) {
  delete dynamic_cast<asb_uci::type::ACFTB_RevA_Type*>(&accessor);
}

} // namespace type

} // namespace uci

