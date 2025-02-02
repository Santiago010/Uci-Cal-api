/** @file OpDescriptionType.cpp
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

#include "../../../include/asb_uci/type/OpDescriptionType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/VisibleString1024Type.h"
#include "../../../include/asb_uci/type/VisibleString256Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OpDescriptionType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString1024Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString256Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OpDescriptionType::OpDescriptionType() = default;

OpDescriptionType::~OpDescriptionType() = default;

void OpDescriptionType::copy(const uci::type::OpDescriptionType& accessor) {
  copyImpl(accessor, false);
}

void OpDescriptionType::copyImpl(const uci::type::OpDescriptionType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const OpDescriptionType&>(accessor);
    if (accessorImpl.name_Accessor) {
      setName(*(accessorImpl.name_Accessor));
    } else {
      name_Accessor.reset();
    }
    if (accessorImpl.remarks_Accessor) {
      setRemarks(*(accessorImpl.remarks_Accessor));
    } else {
      remarks_Accessor.reset();
    }
  }
}

void OpDescriptionType::reset() noexcept {
  name_Accessor.reset();
  remarks_Accessor.reset();
}

asb_uci::type::VisibleString256Type& OpDescriptionType::getName_() const {
  if (name_Accessor) {
    return *name_Accessor;
  }
  throw uci::base::UCIException("Error in getName(): An attempt was made to get an optional field that was not enabled, call hasName() to determine if it is safe to call getName()");
}

const asb_uci::type::VisibleString256Type& OpDescriptionType::getName() const {
  return getName_();
}

asb_uci::type::VisibleString256Type& OpDescriptionType::getName() {
  return getName_();
}

uci::type::OpDescriptionType& OpDescriptionType::setName(const asb_uci::type::VisibleString256Type& value) {
  return setName(value.c_str());
}

uci::type::OpDescriptionType& OpDescriptionType::setName(const std::string& value) {
  return setName(value.c_str());
}

uci::type::OpDescriptionType& OpDescriptionType::setName(const char* value) {
  enableName().setStringValue(value);
  return *this;
}

bool OpDescriptionType::hasName() const noexcept {
  return static_cast<bool>(name_Accessor);
}

asb_uci::type::VisibleString256Type& OpDescriptionType::enableName(uci::base::accessorType::AccessorType type) {
  if (!name_Accessor) {
    name_Accessor =  asb_uci::type::VisibleString256Type::create(type);
  }
  return *name_Accessor;
}

uci::type::OpDescriptionType& OpDescriptionType::clearName() noexcept {
  name_Accessor.reset();
  return *this;
}

uci::type::VisibleString1024Type& OpDescriptionType::getRemarks_() const {
  if (remarks_Accessor) {
    return *remarks_Accessor;
  }
  throw uci::base::UCIException("Error in getRemarks(): An attempt was made to get an optional field that was not enabled, call hasRemarks() to determine if it is safe to call getRemarks()");
}

const uci::type::VisibleString1024Type& OpDescriptionType::getRemarks() const {
  return getRemarks_();
}

uci::type::VisibleString1024Type& OpDescriptionType::getRemarks() {
  return getRemarks_();
}

uci::type::OpDescriptionType& OpDescriptionType::setRemarks(const uci::type::VisibleString1024Type& value) {
  return setRemarks(value.c_str());
}

uci::type::OpDescriptionType& OpDescriptionType::setRemarks(const std::string& value) {
  return setRemarks(value.c_str());
}

uci::type::OpDescriptionType& OpDescriptionType::setRemarks(const char* value) {
  enableRemarks().setStringValue(value);
  return *this;
}

bool OpDescriptionType::hasRemarks() const noexcept {
  return static_cast<bool>(remarks_Accessor);
}

uci::type::VisibleString1024Type& OpDescriptionType::enableRemarks(uci::base::accessorType::AccessorType type) {
  if (!remarks_Accessor) {
    remarks_Accessor = VisibleString1024Type::create(type);
  }
  return *remarks_Accessor;
}

uci::type::OpDescriptionType& OpDescriptionType::clearRemarks() noexcept {
  remarks_Accessor.reset();
  return *this;
}

std::unique_ptr<OpDescriptionType> OpDescriptionType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::opDescriptionType : type};
  return (requestedType == uci::type::accessorType::opDescriptionType) ? boost::make_unique<OpDescriptionType>() : nullptr;
}

/**  */
namespace OpDescriptionType_Names {

constexpr const char* Extern_Type_Name{"OpDescriptionType"};
constexpr const char* Name_Name{"Name"};
constexpr const char* Remarks_Name{"Remarks"};

} // namespace OpDescriptionType_Names

void OpDescriptionType::deserialize(const boost::property_tree::ptree& propTree, uci::type::OpDescriptionType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OpDescriptionType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OpDescriptionType_Names::Name_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setName(*value);
      }
    } else if (valueType.first == nsPrefix + OpDescriptionType_Names::Remarks_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRemarks(*value);
      }
    }
  }
}

std::string OpDescriptionType::serialize(const uci::type::OpDescriptionType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? OpDescriptionType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, OpDescriptionType_Names::Extern_Type_Name);
  }
  if (accessor.hasName()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getName(), node, OpDescriptionType_Names::Name_Name);
  }
  if (accessor.hasRemarks()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getRemarks(), node, OpDescriptionType_Names::Remarks_Name);
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

uci::type::OpDescriptionType& OpDescriptionType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OpDescriptionType>().release());
}

uci::type::OpDescriptionType& OpDescriptionType::create(const uci::type::OpDescriptionType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OpDescriptionType> newAccessor{boost::make_unique<asb_uci::type::OpDescriptionType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OpDescriptionType::destroy(uci::type::OpDescriptionType& accessor) {
  delete dynamic_cast<asb_uci::type::OpDescriptionType*>(&accessor);
}

} // namespace type

} // namespace uci

