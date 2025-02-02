/** @file RouteType.cpp
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

#include "../../../include/asb_uci/type/RouteType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/LineProjectionEnum.h"
#include "../../../include/asb_uci/type/PathID_Type.h"
#include "../../../include/asb_uci/type/RemarksType.h"
#include "../../../include/asb_uci/type/RoutePathType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LineProjectionEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PathID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RemarksType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RoutePathType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RouteType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

RouteType::RouteType()
  : firstInRoutePathID_Accessor{boost::make_unique<PathID_Type>()},
    routeProjection_Accessor{boost::make_unique<LineProjectionEnum>()},
    path_Accessor{boost::make_unique<Path>(1, SIZE_MAX)} {
}

RouteType::~RouteType() = default;

void RouteType::copy(const uci::type::RouteType& accessor) {
  copyImpl(accessor, false);
}

void RouteType::copyImpl(const uci::type::RouteType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const RouteType&>(accessor);
    setDetailed(accessorImpl.detailed_Accessor);
    setFirstInRoutePathID(*(accessorImpl.firstInRoutePathID_Accessor));
    setRouteProjection(*(accessorImpl.routeProjection_Accessor));
    setPath(*(accessorImpl.path_Accessor));
    if (accessorImpl.remarks_Accessor) {
      setRemarks(*(accessorImpl.remarks_Accessor));
    } else {
      remarks_Accessor.reset();
    }
  }
}

void RouteType::reset() noexcept {
  detailed_Accessor = false;
  firstInRoutePathID_Accessor->reset();
  routeProjection_Accessor->reset();
  path_Accessor->reset();
  remarks_Accessor.reset();
}

xs::Boolean RouteType::getDetailed() const {
  return detailed_Accessor;
}

uci::type::RouteType& RouteType::setDetailed(xs::Boolean value) {
  detailed_Accessor = value;
  return *this;
}


const uci::type::PathID_Type& RouteType::getFirstInRoutePathID() const {
  return *firstInRoutePathID_Accessor;
}

uci::type::PathID_Type& RouteType::getFirstInRoutePathID() {
  return *firstInRoutePathID_Accessor;
}

uci::type::RouteType& RouteType::setFirstInRoutePathID(const uci::type::PathID_Type& accessor) {
  if (&accessor != firstInRoutePathID_Accessor.get()) {
    firstInRoutePathID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::LineProjectionEnum& RouteType::getRouteProjection() const {
  return *routeProjection_Accessor;
}

uci::type::LineProjectionEnum& RouteType::getRouteProjection() {
  return *routeProjection_Accessor;
}

uci::type::RouteType& RouteType::setRouteProjection(const uci::type::LineProjectionEnum& accessor) {
  if (&accessor != routeProjection_Accessor.get()) {
    routeProjection_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::RouteType& RouteType::setRouteProjection(uci::type::LineProjectionEnum::EnumerationItem value) {
  routeProjection_Accessor->setValue(value);
  return *this;
}


const uci::type::RouteType::Path& RouteType::getPath() const {
  return *path_Accessor;
}

uci::type::RouteType::Path& RouteType::getPath() {
  return *path_Accessor;
}

uci::type::RouteType& RouteType::setPath(const uci::type::RouteType::Path& accessor) {
  if (&accessor != path_Accessor.get()) {
    path_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::RemarksType& RouteType::getRemarks_() const {
  if (remarks_Accessor) {
    return *remarks_Accessor;
  }
  throw uci::base::UCIException("Error in getRemarks(): An attempt was made to get an optional field that was not enabled, call hasRemarks() to determine if it is safe to call getRemarks()");
}

const uci::type::RemarksType& RouteType::getRemarks() const {
  return getRemarks_();
}

uci::type::RemarksType& RouteType::getRemarks() {
  return getRemarks_();
}

uci::type::RouteType& RouteType::setRemarks(const uci::type::RemarksType& accessor) {
  enableRemarks();
  if (&accessor != remarks_Accessor.get()) {
    remarks_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool RouteType::hasRemarks() const noexcept {
  return static_cast<bool>(remarks_Accessor);
}

uci::type::RemarksType& RouteType::enableRemarks(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::remarksType : type};
  if ((!remarks_Accessor) || (remarks_Accessor->getAccessorType() != requestedType)) {
    remarks_Accessor = RemarksType::create(requestedType);
    if (!remarks_Accessor) {
      throw uci::base::UCIException("Error in enableRemarks(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *remarks_Accessor;
}

uci::type::RouteType& RouteType::clearRemarks() noexcept {
  remarks_Accessor.reset();
  return *this;
}

std::unique_ptr<RouteType> RouteType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::routeType : type};
  return (requestedType == uci::type::accessorType::routeType) ? boost::make_unique<RouteType>() : nullptr;
}

/**  */
namespace RouteType_Names {

constexpr const char* Extern_Type_Name{"RouteType"};
constexpr const char* Detailed_Name{"Detailed"};
constexpr const char* FirstInRoutePathID_Name{"FirstInRoutePathID"};
constexpr const char* RouteProjection_Name{"RouteProjection"};
constexpr const char* Path_Name{"Path"};
constexpr const char* Remarks_Name{"Remarks"};

} // namespace RouteType_Names

void RouteType::deserialize(const boost::property_tree::ptree& propTree, uci::type::RouteType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RouteType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RouteType_Names::Detailed_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setDetailed(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + RouteType_Names::FirstInRoutePathID_Name) {
      PathID_Type::deserialize(valueType.second, accessor.getFirstInRoutePathID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RouteType_Names::RouteProjection_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getRouteProjection().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + RouteType_Names::Path_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::RouteType::Path& boundedList = accessor.getPath();
        const uci::type::RouteType::Path::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::RoutePathType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + RouteType_Names::Remarks_Name) {
      RemarksType::deserialize(valueType.second, accessor.enableRemarks(), nodeName, nsPrefix);
    }
  }
}

std::string RouteType::serialize(const uci::type::RouteType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? RouteType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, RouteType_Names::Extern_Type_Name);
  }
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getDetailed(), node, RouteType_Names::Detailed_Name);
  PathID_Type::serialize(accessor.getFirstInRoutePathID(), node, RouteType_Names::FirstInRoutePathID_Name);
  LineProjectionEnum::serialize(accessor.getRouteProjection(), node, RouteType_Names::RouteProjection_Name, false);
  {
    const uci::type::RouteType::Path& boundedList = accessor.getPath();
    for (uci::type::RouteType::Path::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::RoutePathType::serialize(boundedList.at(i), node, RouteType_Names::Path_Name);
    }
  }
  if (accessor.hasRemarks()) {
    RemarksType::serialize(accessor.getRemarks(), node, RouteType_Names::Remarks_Name);
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

uci::type::RouteType& RouteType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::RouteType>().release());
}

uci::type::RouteType& RouteType::create(const uci::type::RouteType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::RouteType> newAccessor{boost::make_unique<asb_uci::type::RouteType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void RouteType::destroy(uci::type::RouteType& accessor) {
  delete dynamic_cast<asb_uci::type::RouteType*>(&accessor);
}

} // namespace type

} // namespace uci

