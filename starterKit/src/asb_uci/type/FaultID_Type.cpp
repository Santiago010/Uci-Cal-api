/** @file FaultID_Type.cpp
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

#include "../../../include/asb_uci/type/FaultID_Type.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ID_Type.h"
#include "../../../include/asb_uci/type/VisibleString64Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/FaultID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString64Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

FaultID_Type::FaultID_Type() = default;

FaultID_Type::~FaultID_Type() = default;

void FaultID_Type::copy(const uci::type::FaultID_Type& accessor) {
  copyImpl(accessor, false);
}

void FaultID_Type::copyImpl(const uci::type::FaultID_Type& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    ID_Type::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const FaultID_Type&>(accessor);
    if (accessorImpl.name_Accessor) {
      setName(*(accessorImpl.name_Accessor));
    } else {
      name_Accessor.reset();
    }
  }
}

void FaultID_Type::reset() noexcept {
  ID_Type::reset();
  name_Accessor.reset();
}

uci::type::VisibleString64Type& FaultID_Type::getName_() const {
  if (name_Accessor) {
    return *name_Accessor;
  }
  throw uci::base::UCIException("Error in getName(): An attempt was made to get an optional field that was not enabled, call hasName() to determine if it is safe to call getName()");
}

const uci::type::VisibleString64Type& FaultID_Type::getName() const {
  return getName_();
}

uci::type::VisibleString64Type& FaultID_Type::getName() {
  return getName_();
}

uci::type::FaultID_Type& FaultID_Type::setName(const uci::type::VisibleString64Type& value) {
  return setName(value.c_str());
}

uci::type::FaultID_Type& FaultID_Type::setName(const std::string& value) {
  return setName(value.c_str());
}

uci::type::FaultID_Type& FaultID_Type::setName(const char* value) {
  enableName().setStringValue(value);
  return *this;
}

bool FaultID_Type::hasName() const noexcept {
  return static_cast<bool>(name_Accessor);
}

uci::type::VisibleString64Type& FaultID_Type::enableName(uci::base::accessorType::AccessorType type) {
  if (!name_Accessor) {
    name_Accessor = VisibleString64Type::create(type);
  }
  return *name_Accessor;
}

uci::type::FaultID_Type& FaultID_Type::clearName() noexcept {
  name_Accessor.reset();
  return *this;
}

std::unique_ptr<FaultID_Type> FaultID_Type::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::faultID_Type : type};
  return (requestedType == uci::type::accessorType::faultID_Type) ? boost::make_unique<FaultID_Type>() : nullptr;
}

/**  */
namespace FaultID_Type_Names {

constexpr const char* Extern_Type_Name{"FaultID_Type"};
constexpr const char* Name_Name{"Name"};

} // namespace FaultID_Type_Names

void FaultID_Type::deserialize(const boost::property_tree::ptree& propTree, uci::type::FaultID_Type& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = FaultID_Type_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + FaultID_Type_Names::Name_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setName(*value);
      }
    }
  }
  ID_Type::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string FaultID_Type::serialize(const uci::type::FaultID_Type& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? FaultID_Type_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, FaultID_Type_Names::Extern_Type_Name);
  }
  ID_Type::serialize(accessor, node, "", false, false, false);
  if (accessor.hasName()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getName(), node, FaultID_Type_Names::Name_Name);
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

uci::type::FaultID_Type& FaultID_Type::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::FaultID_Type>().release());
}

uci::type::FaultID_Type& FaultID_Type::create(const uci::type::FaultID_Type& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::FaultID_Type> newAccessor{boost::make_unique<asb_uci::type::FaultID_Type>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void FaultID_Type::destroy(uci::type::FaultID_Type& accessor) {
  delete dynamic_cast<asb_uci::type::FaultID_Type*>(&accessor);
}

} // namespace type

} // namespace uci

