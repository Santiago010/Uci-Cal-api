/** @file QueryCountValueType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:14 PM
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

#include "../../../include/asb_uci/type/QueryCountValueType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/QueryCountValueType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

QueryCountValueType::QueryCountValueType() = default;

QueryCountValueType::~QueryCountValueType() = default;

void QueryCountValueType::copy(const uci::type::QueryCountValueType& accessor) {
  copyImpl(accessor, false);
}

void QueryCountValueType::copyImpl(const uci::type::QueryCountValueType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const QueryCountValueType&>(accessor);
    equals_Accessor = (accessorImpl.equals_Accessor ? accessorImpl.equals_Accessor : boost::none);
    lessThan_Accessor = (accessorImpl.lessThan_Accessor ? accessorImpl.lessThan_Accessor : boost::none);
    lessThanOrEqualTo_Accessor = (accessorImpl.lessThanOrEqualTo_Accessor ? accessorImpl.lessThanOrEqualTo_Accessor : boost::none);
    greaterThan_Accessor = (accessorImpl.greaterThan_Accessor ? accessorImpl.greaterThan_Accessor : boost::none);
    greaterThanOrEqualTo_Accessor = (accessorImpl.greaterThanOrEqualTo_Accessor ? accessorImpl.greaterThanOrEqualTo_Accessor : boost::none);
  }
}

void QueryCountValueType::reset() noexcept {
  equals_Accessor.reset();
  lessThan_Accessor.reset();
  lessThanOrEqualTo_Accessor.reset();
  greaterThan_Accessor.reset();
  greaterThanOrEqualTo_Accessor.reset();
}

uci::type::QueryCountValueType::QueryCountValueTypeChoice QueryCountValueType::getQueryCountValueTypeChoiceOrdinal() const noexcept {
  if (equals_Accessor) {
    return QUERYCOUNTVALUETYPE_CHOICE_EQUALS;
  }
  if (lessThan_Accessor) {
    return QUERYCOUNTVALUETYPE_CHOICE_LESSTHAN;
  }
  if (lessThanOrEqualTo_Accessor) {
    return QUERYCOUNTVALUETYPE_CHOICE_LESSTHANOREQUALTO;
  }
  if (greaterThan_Accessor) {
    return QUERYCOUNTVALUETYPE_CHOICE_GREATERTHAN;
  }
  if (greaterThanOrEqualTo_Accessor) {
    return QUERYCOUNTVALUETYPE_CHOICE_GREATERTHANOREQUALTO;
  }
  return QUERYCOUNTVALUETYPE_CHOICE_NONE;
}

uci::type::QueryCountValueType& QueryCountValueType::setQueryCountValueTypeChoiceOrdinal(uci::type::QueryCountValueType::QueryCountValueTypeChoice ordinal, uci::base::accessorType::AccessorType /*type*/) {
  switch (ordinal) {
    case QUERYCOUNTVALUETYPE_CHOICE_EQUALS:
      chooseEquals();
      break;
    case QUERYCOUNTVALUETYPE_CHOICE_LESSTHAN:
      chooseLessThan();
      break;
    case QUERYCOUNTVALUETYPE_CHOICE_LESSTHANOREQUALTO:
      chooseLessThanOrEqualTo();
      break;
    case QUERYCOUNTVALUETYPE_CHOICE_GREATERTHAN:
      chooseGreaterThan();
      break;
    case QUERYCOUNTVALUETYPE_CHOICE_GREATERTHANOREQUALTO:
      chooseGreaterThanOrEqualTo();
      break;
    default:
      throw uci::base::UCIException("Error in setQueryCountValueTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

xs::UnsignedInt QueryCountValueType::getEquals() const {
  if (equals_Accessor) {
    return *equals_Accessor;
  }
  throw uci::base::UCIException("Error in getEquals(): Unable to get Equals, field not selected");
}

uci::type::QueryCountValueType& QueryCountValueType::setEquals(xs::UnsignedInt value) {
  chooseEquals();
  equals_Accessor = value;
  return *this;
}

bool QueryCountValueType::isEquals() const noexcept {
  return static_cast<bool>(equals_Accessor);
}

void QueryCountValueType::chooseEquals() {
  lessThan_Accessor.reset();
  lessThanOrEqualTo_Accessor.reset();
  greaterThan_Accessor.reset();
  greaterThanOrEqualTo_Accessor.reset();
  if (!equals_Accessor) {
    equals_Accessor = boost::optional<asb_xs::UnsignedInt>();
  }
}

xs::UnsignedInt QueryCountValueType::getLessThan() const {
  if (lessThan_Accessor) {
    return *lessThan_Accessor;
  }
  throw uci::base::UCIException("Error in getLessThan(): Unable to get LessThan, field not selected");
}

uci::type::QueryCountValueType& QueryCountValueType::setLessThan(xs::UnsignedInt value) {
  chooseLessThan();
  lessThan_Accessor = value;
  return *this;
}

bool QueryCountValueType::isLessThan() const noexcept {
  return static_cast<bool>(lessThan_Accessor);
}

void QueryCountValueType::chooseLessThan() {
  equals_Accessor.reset();
  lessThanOrEqualTo_Accessor.reset();
  greaterThan_Accessor.reset();
  greaterThanOrEqualTo_Accessor.reset();
  if (!lessThan_Accessor) {
    lessThan_Accessor = boost::optional<asb_xs::UnsignedInt>();
  }
}

xs::UnsignedInt QueryCountValueType::getLessThanOrEqualTo() const {
  if (lessThanOrEqualTo_Accessor) {
    return *lessThanOrEqualTo_Accessor;
  }
  throw uci::base::UCIException("Error in getLessThanOrEqualTo(): Unable to get LessThanOrEqualTo, field not selected");
}

uci::type::QueryCountValueType& QueryCountValueType::setLessThanOrEqualTo(xs::UnsignedInt value) {
  chooseLessThanOrEqualTo();
  lessThanOrEqualTo_Accessor = value;
  return *this;
}

bool QueryCountValueType::isLessThanOrEqualTo() const noexcept {
  return static_cast<bool>(lessThanOrEqualTo_Accessor);
}

void QueryCountValueType::chooseLessThanOrEqualTo() {
  equals_Accessor.reset();
  lessThan_Accessor.reset();
  greaterThan_Accessor.reset();
  greaterThanOrEqualTo_Accessor.reset();
  if (!lessThanOrEqualTo_Accessor) {
    lessThanOrEqualTo_Accessor = boost::optional<asb_xs::UnsignedInt>();
  }
}

xs::UnsignedInt QueryCountValueType::getGreaterThan() const {
  if (greaterThan_Accessor) {
    return *greaterThan_Accessor;
  }
  throw uci::base::UCIException("Error in getGreaterThan(): Unable to get GreaterThan, field not selected");
}

uci::type::QueryCountValueType& QueryCountValueType::setGreaterThan(xs::UnsignedInt value) {
  chooseGreaterThan();
  greaterThan_Accessor = value;
  return *this;
}

bool QueryCountValueType::isGreaterThan() const noexcept {
  return static_cast<bool>(greaterThan_Accessor);
}

void QueryCountValueType::chooseGreaterThan() {
  equals_Accessor.reset();
  lessThan_Accessor.reset();
  lessThanOrEqualTo_Accessor.reset();
  greaterThanOrEqualTo_Accessor.reset();
  if (!greaterThan_Accessor) {
    greaterThan_Accessor = boost::optional<asb_xs::UnsignedInt>();
  }
}

xs::UnsignedInt QueryCountValueType::getGreaterThanOrEqualTo() const {
  if (greaterThanOrEqualTo_Accessor) {
    return *greaterThanOrEqualTo_Accessor;
  }
  throw uci::base::UCIException("Error in getGreaterThanOrEqualTo(): Unable to get GreaterThanOrEqualTo, field not selected");
}

uci::type::QueryCountValueType& QueryCountValueType::setGreaterThanOrEqualTo(xs::UnsignedInt value) {
  chooseGreaterThanOrEqualTo();
  greaterThanOrEqualTo_Accessor = value;
  return *this;
}

bool QueryCountValueType::isGreaterThanOrEqualTo() const noexcept {
  return static_cast<bool>(greaterThanOrEqualTo_Accessor);
}

void QueryCountValueType::chooseGreaterThanOrEqualTo() {
  equals_Accessor.reset();
  lessThan_Accessor.reset();
  lessThanOrEqualTo_Accessor.reset();
  greaterThan_Accessor.reset();
  if (!greaterThanOrEqualTo_Accessor) {
    greaterThanOrEqualTo_Accessor = boost::optional<asb_xs::UnsignedInt>();
  }
}

std::unique_ptr<QueryCountValueType> QueryCountValueType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::queryCountValueType : type};
  return (requestedType == uci::type::accessorType::queryCountValueType) ? boost::make_unique<QueryCountValueType>() : nullptr;
}

/**  */
namespace QueryCountValueType_Names {

constexpr const char* Extern_Type_Name{"QueryCountValueType"};
constexpr const char* Equals_Name{"Equals"};
constexpr const char* LessThan_Name{"LessThan"};
constexpr const char* LessThanOrEqualTo_Name{"LessThanOrEqualTo"};
constexpr const char* GreaterThan_Name{"GreaterThan"};
constexpr const char* GreaterThanOrEqualTo_Name{"GreaterThanOrEqualTo"};

} // namespace QueryCountValueType_Names

void QueryCountValueType::deserialize(const boost::property_tree::ptree& propTree, uci::type::QueryCountValueType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = QueryCountValueType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + QueryCountValueType_Names::Equals_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEquals(asb_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    } else if (valueType.first == nsPrefix + QueryCountValueType_Names::LessThan_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setLessThan(asb_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    } else if (valueType.first == nsPrefix + QueryCountValueType_Names::LessThanOrEqualTo_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setLessThanOrEqualTo(asb_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    } else if (valueType.first == nsPrefix + QueryCountValueType_Names::GreaterThan_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setGreaterThan(asb_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    } else if (valueType.first == nsPrefix + QueryCountValueType_Names::GreaterThanOrEqualTo_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setGreaterThanOrEqualTo(asb_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    }
  }
}

std::string QueryCountValueType::serialize(const uci::type::QueryCountValueType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? QueryCountValueType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, QueryCountValueType_Names::Extern_Type_Name);
  }
  if (accessor.isEquals()) {
    asb_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getEquals(), node, QueryCountValueType_Names::Equals_Name);
  } else if (accessor.isLessThan()) {
    asb_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getLessThan(), node, QueryCountValueType_Names::LessThan_Name);
  } else if (accessor.isLessThanOrEqualTo()) {
    asb_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getLessThanOrEqualTo(), node, QueryCountValueType_Names::LessThanOrEqualTo_Name);
  } else if (accessor.isGreaterThan()) {
    asb_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getGreaterThan(), node, QueryCountValueType_Names::GreaterThan_Name);
  } else if (accessor.isGreaterThanOrEqualTo()) {
    asb_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getGreaterThanOrEqualTo(), node, QueryCountValueType_Names::GreaterThanOrEqualTo_Name);
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

uci::type::QueryCountValueType& QueryCountValueType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::QueryCountValueType>().release());
}

uci::type::QueryCountValueType& QueryCountValueType::create(const uci::type::QueryCountValueType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::QueryCountValueType> newAccessor{boost::make_unique<asb_uci::type::QueryCountValueType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void QueryCountValueType::destroy(uci::type::QueryCountValueType& accessor) {
  delete dynamic_cast<asb_uci::type::QueryCountValueType*>(&accessor);
}

} // namespace type

} // namespace uci

