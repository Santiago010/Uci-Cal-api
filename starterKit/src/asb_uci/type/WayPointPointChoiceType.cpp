/** @file WayPointPointChoiceType.cpp
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

#include "../../../include/asb_uci/type/WayPointPointChoiceType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/Point2D_RelativeType.h"
#include "../../../include/asb_uci/type/Point2D_Type.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Point2D_RelativeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Point2D_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/WayPointPointChoiceType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

WayPointPointChoiceType::WayPointPointChoiceType() = default;

WayPointPointChoiceType::~WayPointPointChoiceType() = default;

void WayPointPointChoiceType::copy(const uci::type::WayPointPointChoiceType& accessor) {
  copyImpl(accessor, false);
}

void WayPointPointChoiceType::copyImpl(const uci::type::WayPointPointChoiceType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const WayPointPointChoiceType&>(accessor);
    if (accessorImpl.point2D_Accessor) {
      setPoint2D(*(accessorImpl.point2D_Accessor));
    } else {
      point2D_Accessor.reset();
    }
    if (accessorImpl.relativePoint_Accessor) {
      setRelativePoint(*(accessorImpl.relativePoint_Accessor));
    } else {
      relativePoint_Accessor.reset();
    }
  }
}

void WayPointPointChoiceType::reset() noexcept {
  point2D_Accessor.reset();
  relativePoint_Accessor.reset();
}

uci::type::WayPointPointChoiceType::WayPointPointChoiceTypeChoice WayPointPointChoiceType::getWayPointPointChoiceTypeChoiceOrdinal() const noexcept {
  if (point2D_Accessor) {
    return WAYPOINTPOINTCHOICETYPE_CHOICE_POINT2D;
  }
  if (relativePoint_Accessor) {
    return WAYPOINTPOINTCHOICETYPE_CHOICE_RELATIVEPOINT;
  }
  return WAYPOINTPOINTCHOICETYPE_CHOICE_NONE;
}

uci::type::WayPointPointChoiceType& WayPointPointChoiceType::setWayPointPointChoiceTypeChoiceOrdinal(uci::type::WayPointPointChoiceType::WayPointPointChoiceTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case WAYPOINTPOINTCHOICETYPE_CHOICE_POINT2D:
      choosePoint2D("setWayPointPointChoiceTypeChoiceOrdinal", type);
      break;
    case WAYPOINTPOINTCHOICETYPE_CHOICE_RELATIVEPOINT:
      chooseRelativePoint("setWayPointPointChoiceTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setWayPointPointChoiceTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::Point2D_Type& WayPointPointChoiceType::getPoint2D_() const {
  if (point2D_Accessor) {
    return *point2D_Accessor;
  }
  throw uci::base::UCIException("Error in getPoint2D(): Unable to get Point2D, field not selected");
}

const uci::type::Point2D_Type& WayPointPointChoiceType::getPoint2D() const {
  return getPoint2D_();
}

uci::type::Point2D_Type& WayPointPointChoiceType::getPoint2D() {
  return getPoint2D_();
}

uci::type::WayPointPointChoiceType& WayPointPointChoiceType::setPoint2D(const uci::type::Point2D_Type& accessor) {
  choosePoint2D("setPoint2D", accessor.getAccessorType());
  if (&accessor != point2D_Accessor.get()) {
    point2D_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool WayPointPointChoiceType::isPoint2D() const noexcept {
  return static_cast<bool>(point2D_Accessor);
}

uci::type::Point2D_Type& WayPointPointChoiceType::choosePoint2D(const std::string& method, uci::base::accessorType::AccessorType type) {
  relativePoint_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::point2D_Type : type};
  if ((!point2D_Accessor) || (point2D_Accessor->getAccessorType() != requestedType)) {
    point2D_Accessor = Point2D_Type::create(type);
    if (!point2D_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *point2D_Accessor;
}

uci::type::Point2D_Type& WayPointPointChoiceType::choosePoint2D(uci::base::accessorType::AccessorType type) {
  return choosePoint2D("choosePoint2D", type);
}

uci::type::Point2D_RelativeType& WayPointPointChoiceType::getRelativePoint_() const {
  if (relativePoint_Accessor) {
    return *relativePoint_Accessor;
  }
  throw uci::base::UCIException("Error in getRelativePoint(): Unable to get RelativePoint, field not selected");
}

const uci::type::Point2D_RelativeType& WayPointPointChoiceType::getRelativePoint() const {
  return getRelativePoint_();
}

uci::type::Point2D_RelativeType& WayPointPointChoiceType::getRelativePoint() {
  return getRelativePoint_();
}

uci::type::WayPointPointChoiceType& WayPointPointChoiceType::setRelativePoint(const uci::type::Point2D_RelativeType& accessor) {
  chooseRelativePoint();
  if (&accessor != relativePoint_Accessor.get()) {
    relativePoint_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool WayPointPointChoiceType::isRelativePoint() const noexcept {
  return static_cast<bool>(relativePoint_Accessor);
}

uci::type::Point2D_RelativeType& WayPointPointChoiceType::chooseRelativePoint(const std::string& method, uci::base::accessorType::AccessorType type) {
  point2D_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::point2D_RelativeType : type};
  if ((!relativePoint_Accessor) || (relativePoint_Accessor->getAccessorType() != requestedType)) {
    relativePoint_Accessor = Point2D_RelativeType::create(type);
    if (!relativePoint_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *relativePoint_Accessor;
}

uci::type::Point2D_RelativeType& WayPointPointChoiceType::chooseRelativePoint(uci::base::accessorType::AccessorType type) {
  return chooseRelativePoint("chooseRelativePoint", type);
}

std::unique_ptr<WayPointPointChoiceType> WayPointPointChoiceType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::wayPointPointChoiceType : type};
  return (requestedType == uci::type::accessorType::wayPointPointChoiceType) ? boost::make_unique<WayPointPointChoiceType>() : nullptr;
}

/**  */
namespace WayPointPointChoiceType_Names {

constexpr const char* Extern_Type_Name{"WayPointPointChoiceType"};
constexpr const char* Point2D_Name{"Point2D"};
constexpr const char* RelativePoint_Name{"RelativePoint"};

} // namespace WayPointPointChoiceType_Names

void WayPointPointChoiceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::WayPointPointChoiceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = WayPointPointChoiceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + WayPointPointChoiceType_Names::Point2D_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.choosePoint2D(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + WayPointPointChoiceType_Names::RelativePoint_Name) {
      Point2D_RelativeType::deserialize(valueType.second, accessor.chooseRelativePoint(), nodeName, nsPrefix);
    }
  }
}

std::string WayPointPointChoiceType::serialize(const uci::type::WayPointPointChoiceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? WayPointPointChoiceType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, WayPointPointChoiceType_Names::Extern_Type_Name);
  }
  if (accessor.isPoint2D()) {
    Point2D_Type::serialize(accessor.getPoint2D(), node, WayPointPointChoiceType_Names::Point2D_Name);
  } else if (accessor.isRelativePoint()) {
    Point2D_RelativeType::serialize(accessor.getRelativePoint(), node, WayPointPointChoiceType_Names::RelativePoint_Name);
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

uci::type::WayPointPointChoiceType& WayPointPointChoiceType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::WayPointPointChoiceType>().release());
}

uci::type::WayPointPointChoiceType& WayPointPointChoiceType::create(const uci::type::WayPointPointChoiceType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::WayPointPointChoiceType> newAccessor{boost::make_unique<asb_uci::type::WayPointPointChoiceType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void WayPointPointChoiceType::destroy(uci::type::WayPointPointChoiceType& accessor) {
  delete dynamic_cast<asb_uci::type::WayPointPointChoiceType*>(&accessor);
}

} // namespace type

} // namespace uci

