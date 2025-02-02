/** @file VersionedID_Type.cpp
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

#include "../../../include/asb_uci/type/VersionedID_Type.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ID_Type.h"
#include "../../../include/asb_uci/util/DerivedTypesCopier.h"
#include "../../../include/asb_uci/util/DerivedTypesCreator.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/DerivedTypesSerializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VersionedID_Type.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

  VersionedID_Type::VersionedID_Type(const VersionedID_Type& rhs)
    : ID_Type(rhs),  // Assuming ID_Type is the base class
      version_Accessor(rhs.version_Accessor) {
    // Perform deep copy if necessary
    // For example, if version_Accessor is a boost::optional or another type requiring deep copying
    // You can use rhs.version_Accessor.get() to access the value inside boost::optional, if applicable
}

VersionedID_Type::VersionedID_Type() = default;

VersionedID_Type::~VersionedID_Type() = default;

void VersionedID_Type::copy(const uci::type::VersionedID_Type& accessor) {
  copyImpl(accessor, false);
}

void VersionedID_Type::copyImpl(const uci::type::VersionedID_Type& accessor, const bool checkIfDerivation) {
  if (&accessor != this) {
    if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::versionedID_Type)) {
      ID_Type::copyImpl(accessor, false);
      const auto& accessorImpl = dynamic_cast<const VersionedID_Type&>(accessor);
      if (accessorImpl.hasVersion()) {
        setVersion(accessorImpl.getVersion());
      } else {
        clearVersion();
      }
    } else {
      asb_uci::util::DerivedTypesCopier::copy(accessor, *this);
    }
  }
}

void VersionedID_Type::reset() noexcept {
  ID_Type::reset();
  clearVersion();
}

xs::UnsignedInt VersionedID_Type::getVersion() const {
  if (version_Accessor) {
    return *version_Accessor;
  }
  throw uci::base::UCIException("Error in getVersion(): An attempt was made to get an optional field that was not enabled, call hasVersion() to determine if it is safe to call getVersion()");
}

uci::type::VersionedID_Type& VersionedID_Type::setVersion(xs::UnsignedInt value) {
  version_Accessor = value;
  return *this;
}

bool VersionedID_Type::hasVersion() const noexcept {
  return version_Accessor.has_value();
}

uci::type::VersionedID_Type& VersionedID_Type::clearVersion() noexcept {
  version_Accessor.reset();
  return *this;
}

std::unique_ptr<VersionedID_Type> VersionedID_Type::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::versionedID_Type : type};
  return std::unique_ptr<VersionedID_Type>(dynamic_cast<VersionedID_Type*>(asb_uci::util::DerivedTypesCreator::create(requestedType)));
}

/**  */
namespace VersionedID_Type_Names {

constexpr const char* Extern_Type_Name{"VersionedID_Type"};
constexpr const char* Version_Name{"Version"};

} // namespace VersionedID_Type_Names

void VersionedID_Type::deserialize(const boost::property_tree::ptree& propTree, uci::type::VersionedID_Type& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = VersionedID_Type_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + VersionedID_Type_Names::Version_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setVersion(asb_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    }
  }
  ID_Type::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string VersionedID_Type::serialize(const uci::type::VersionedID_Type& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? VersionedID_Type_Names::Extern_Type_Name : nodeName)};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::versionedID_Type)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      asb_uci::util::SerializationHelpers::addTypeAttribute(node, VersionedID_Type_Names::Extern_Type_Name);
    }
    ID_Type::serialize(accessor, node, "", false, false, false);
    if (accessor.hasVersion()) {
      asb_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getVersion(), node, VersionedID_Type_Names::Version_Name);
    }
    if (createNode) {
      propTree.add_child(generatedNodeName, node);
    }
  } else {
    asb_uci::util::DerivedTypesSerializer::serialize(accessor, propTree, nodeName, createNode);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace asb_uci

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

uci::type::VersionedID_Type& VersionedID_Type::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::VersionedID_Type>().release());
}

uci::type::VersionedID_Type& VersionedID_Type::create(const uci::type::VersionedID_Type& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::VersionedID_Type> newAccessor{boost::make_unique<asb_uci::type::VersionedID_Type>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void VersionedID_Type::destroy(uci::type::VersionedID_Type& accessor) {
  delete dynamic_cast<asb_uci::type::VersionedID_Type*>(&accessor);
}

} // namespace type

} // namespace uci

