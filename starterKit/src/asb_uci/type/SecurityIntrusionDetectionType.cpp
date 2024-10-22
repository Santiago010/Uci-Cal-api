/** @file SecurityIntrusionDetectionType.cpp
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

#include "../../../include/asb_uci/type/SecurityIntrusionDetectionType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/SecurityIntrusionDetectionEnum.h"
#include "../../../include/asb_uci/type/VisibleString1024Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SecurityIntrusionDetectionEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SecurityIntrusionDetectionType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString1024Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SecurityIntrusionDetectionType::SecurityIntrusionDetectionType()
  : category_Accessor{boost::make_unique<SecurityIntrusionDetectionEnum>()} {
}

SecurityIntrusionDetectionType::~SecurityIntrusionDetectionType() = default;

void SecurityIntrusionDetectionType::copy(const uci::type::SecurityIntrusionDetectionType& accessor) {
  copyImpl(accessor, false);
}

void SecurityIntrusionDetectionType::copyImpl(const uci::type::SecurityIntrusionDetectionType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const SecurityIntrusionDetectionType&>(accessor);
    setCategory(*(accessorImpl.category_Accessor));
    if (accessorImpl.details_Accessor) {
      setDetails(*(accessorImpl.details_Accessor));
    } else {
      details_Accessor.reset();
    }
  }
}

void SecurityIntrusionDetectionType::reset() noexcept {
  category_Accessor->reset();
  details_Accessor.reset();
}

const uci::type::SecurityIntrusionDetectionEnum& SecurityIntrusionDetectionType::getCategory() const {
  return *category_Accessor;
}

uci::type::SecurityIntrusionDetectionEnum& SecurityIntrusionDetectionType::getCategory() {
  return *category_Accessor;
}

uci::type::SecurityIntrusionDetectionType& SecurityIntrusionDetectionType::setCategory(const uci::type::SecurityIntrusionDetectionEnum& accessor) {
  if (&accessor != category_Accessor.get()) {
    category_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::SecurityIntrusionDetectionType& SecurityIntrusionDetectionType::setCategory(uci::type::SecurityIntrusionDetectionEnum::EnumerationItem value) {
  category_Accessor->setValue(value);
  return *this;
}


uci::type::VisibleString1024Type& SecurityIntrusionDetectionType::getDetails_() const {
  if (details_Accessor) {
    return *details_Accessor;
  }
  throw uci::base::UCIException("Error in getDetails(): An attempt was made to get an optional field that was not enabled, call hasDetails() to determine if it is safe to call getDetails()");
}

const uci::type::VisibleString1024Type& SecurityIntrusionDetectionType::getDetails() const {
  return getDetails_();
}

uci::type::VisibleString1024Type& SecurityIntrusionDetectionType::getDetails() {
  return getDetails_();
}

uci::type::SecurityIntrusionDetectionType& SecurityIntrusionDetectionType::setDetails(const uci::type::VisibleString1024Type& value) {
  return setDetails(value.c_str());
}

uci::type::SecurityIntrusionDetectionType& SecurityIntrusionDetectionType::setDetails(const std::string& value) {
  return setDetails(value.c_str());
}

uci::type::SecurityIntrusionDetectionType& SecurityIntrusionDetectionType::setDetails(const char* value) {
  enableDetails().setStringValue(value);
  return *this;
}

bool SecurityIntrusionDetectionType::hasDetails() const noexcept {
  return static_cast<bool>(details_Accessor);
}

uci::type::VisibleString1024Type& SecurityIntrusionDetectionType::enableDetails(uci::base::accessorType::AccessorType type) {
  if (!details_Accessor) {
    details_Accessor = VisibleString1024Type::create(type);
  }
  return *details_Accessor;
}

uci::type::SecurityIntrusionDetectionType& SecurityIntrusionDetectionType::clearDetails() noexcept {
  details_Accessor.reset();
  return *this;
}

std::unique_ptr<SecurityIntrusionDetectionType> SecurityIntrusionDetectionType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::securityIntrusionDetectionType : type};
  return (requestedType == uci::type::accessorType::securityIntrusionDetectionType) ? boost::make_unique<SecurityIntrusionDetectionType>() : nullptr;
}

/**  */
namespace SecurityIntrusionDetectionType_Names {

constexpr const char* Extern_Type_Name{"SecurityIntrusionDetectionType"};
constexpr const char* Category_Name{"Category"};
constexpr const char* Details_Name{"Details"};

} // namespace SecurityIntrusionDetectionType_Names

void SecurityIntrusionDetectionType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SecurityIntrusionDetectionType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SecurityIntrusionDetectionType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SecurityIntrusionDetectionType_Names::Category_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getCategory().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + SecurityIntrusionDetectionType_Names::Details_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setDetails(*value);
      }
    }
  }
}

std::string SecurityIntrusionDetectionType::serialize(const uci::type::SecurityIntrusionDetectionType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SecurityIntrusionDetectionType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SecurityIntrusionDetectionType_Names::Extern_Type_Name);
  }
  SecurityIntrusionDetectionEnum::serialize(accessor.getCategory(), node, SecurityIntrusionDetectionType_Names::Category_Name, false);
  if (accessor.hasDetails()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getDetails(), node, SecurityIntrusionDetectionType_Names::Details_Name);
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

uci::type::SecurityIntrusionDetectionType& SecurityIntrusionDetectionType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SecurityIntrusionDetectionType>().release());
}

uci::type::SecurityIntrusionDetectionType& SecurityIntrusionDetectionType::create(const uci::type::SecurityIntrusionDetectionType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SecurityIntrusionDetectionType> newAccessor{boost::make_unique<asb_uci::type::SecurityIntrusionDetectionType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SecurityIntrusionDetectionType::destroy(uci::type::SecurityIntrusionDetectionType& accessor) {
  delete dynamic_cast<asb_uci::type::SecurityIntrusionDetectionType*>(&accessor);
}

} // namespace type

} // namespace uci

