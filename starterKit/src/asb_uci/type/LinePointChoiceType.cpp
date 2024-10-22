/** @file LinePointChoiceType.cpp
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

#include "../../../include/asb_uci/type/LinePointChoiceType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/LinePoint2D_Type.h"
#include "../../../include/asb_uci/type/LineRelativeType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LinePoint2D_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LinePointChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LineRelativeType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

LinePointChoiceType::LinePointChoiceType() = default;

LinePointChoiceType::~LinePointChoiceType() = default;

void LinePointChoiceType::copy(const uci::type::LinePointChoiceType& accessor) {
  copyImpl(accessor, false);
}

void LinePointChoiceType::copyImpl(const uci::type::LinePointChoiceType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const LinePointChoiceType&>(accessor);
    if (accessorImpl.point_Accessor) {
      setPoint(*(accessorImpl.point_Accessor));
    } else {
      point_Accessor.reset();
    }
    if (accessorImpl.relativePoint_Accessor) {
      setRelativePoint(*(accessorImpl.relativePoint_Accessor));
    } else {
      relativePoint_Accessor.reset();
    }
  }
}

void LinePointChoiceType::reset() noexcept {
  point_Accessor.reset();
  relativePoint_Accessor.reset();
}

uci::type::LinePointChoiceType::LinePointChoiceTypeChoice LinePointChoiceType::getLinePointChoiceTypeChoiceOrdinal() const noexcept {
  if (point_Accessor) {
    return LINEPOINTCHOICETYPE_CHOICE_POINT;
  }
  if (relativePoint_Accessor) {
    return LINEPOINTCHOICETYPE_CHOICE_RELATIVEPOINT;
  }
  return LINEPOINTCHOICETYPE_CHOICE_NONE;
}

uci::type::LinePointChoiceType& LinePointChoiceType::setLinePointChoiceTypeChoiceOrdinal(uci::type::LinePointChoiceType::LinePointChoiceTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case LINEPOINTCHOICETYPE_CHOICE_POINT:
      choosePoint();
      break;
    case LINEPOINTCHOICETYPE_CHOICE_RELATIVEPOINT:
      chooseRelativePoint("setLinePointChoiceTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setLinePointChoiceTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::LinePointChoiceType::Point& LinePointChoiceType::getPoint_() const {
  if (point_Accessor) {
    return *point_Accessor;
  }
  throw uci::base::UCIException("Error in getPoint(): Unable to get Point, field not selected");
}

const uci::type::LinePointChoiceType::Point& LinePointChoiceType::getPoint() const {
  return getPoint_();
}

uci::type::LinePointChoiceType::Point& LinePointChoiceType::getPoint() {
  return getPoint_();
}

uci::type::LinePointChoiceType& LinePointChoiceType::setPoint(const uci::type::LinePointChoiceType::Point& accessor) {
  choosePoint();
  if (&accessor != point_Accessor.get()) {
    point_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool LinePointChoiceType::isPoint() const noexcept {
  return static_cast<bool>(point_Accessor);
}

uci::type::LinePointChoiceType::Point& LinePointChoiceType::choosePoint() {
  relativePoint_Accessor.reset();
  if (!point_Accessor) {
    point_Accessor = boost::make_unique<Point>(2, SIZE_MAX);
  }
  return *point_Accessor;
}

uci::type::LineRelativeType& LinePointChoiceType::getRelativePoint_() const {
  if (relativePoint_Accessor) {
    return *relativePoint_Accessor;
  }
  throw uci::base::UCIException("Error in getRelativePoint(): Unable to get RelativePoint, field not selected");
}

const uci::type::LineRelativeType& LinePointChoiceType::getRelativePoint() const {
  return getRelativePoint_();
}

uci::type::LineRelativeType& LinePointChoiceType::getRelativePoint() {
  return getRelativePoint_();
}

uci::type::LinePointChoiceType& LinePointChoiceType::setRelativePoint(const uci::type::LineRelativeType& accessor) {
  chooseRelativePoint();
  if (&accessor != relativePoint_Accessor.get()) {
    relativePoint_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool LinePointChoiceType::isRelativePoint() const noexcept {
  return static_cast<bool>(relativePoint_Accessor);
}

uci::type::LineRelativeType& LinePointChoiceType::chooseRelativePoint(const std::string& method, uci::base::accessorType::AccessorType type) {
  point_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::lineRelativeType : type};
  if ((!relativePoint_Accessor) || (relativePoint_Accessor->getAccessorType() != requestedType)) {
    relativePoint_Accessor = LineRelativeType::create(type);
    if (!relativePoint_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *relativePoint_Accessor;
}

uci::type::LineRelativeType& LinePointChoiceType::chooseRelativePoint(uci::base::accessorType::AccessorType type) {
  return chooseRelativePoint("chooseRelativePoint", type);
}

std::unique_ptr<LinePointChoiceType> LinePointChoiceType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::linePointChoiceType : type};
  return (requestedType == uci::type::accessorType::linePointChoiceType) ? boost::make_unique<LinePointChoiceType>() : nullptr;
}

/**  */
namespace LinePointChoiceType_Names {

constexpr const char* Extern_Type_Name{"LinePointChoiceType"};
constexpr const char* Point_Name{"Point"};
constexpr const char* RelativePoint_Name{"RelativePoint"};

} // namespace LinePointChoiceType_Names

void LinePointChoiceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::LinePointChoiceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = LinePointChoiceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + LinePointChoiceType_Names::Point_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::LinePointChoiceType::Point& boundedList = accessor.choosePoint();
        const uci::type::LinePointChoiceType::Point::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::LinePoint2D_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + LinePointChoiceType_Names::RelativePoint_Name) {
      LineRelativeType::deserialize(valueType.second, accessor.chooseRelativePoint(), nodeName, nsPrefix);
    }
  }
}

std::string LinePointChoiceType::serialize(const uci::type::LinePointChoiceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? LinePointChoiceType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, LinePointChoiceType_Names::Extern_Type_Name);
  }
  if (accessor.isPoint()) {
    {
      const uci::type::LinePointChoiceType::Point& boundedList = accessor.getPoint();
      for (uci::type::LinePointChoiceType::Point::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::LinePoint2D_Type::serialize(boundedList.at(i), node, LinePointChoiceType_Names::Point_Name);
      }
    }
  } else if (accessor.isRelativePoint()) {
    LineRelativeType::serialize(accessor.getRelativePoint(), node, LinePointChoiceType_Names::RelativePoint_Name);
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

uci::type::LinePointChoiceType& LinePointChoiceType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::LinePointChoiceType>().release());
}

uci::type::LinePointChoiceType& LinePointChoiceType::create(const uci::type::LinePointChoiceType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::LinePointChoiceType> newAccessor{boost::make_unique<asb_uci::type::LinePointChoiceType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void LinePointChoiceType::destroy(uci::type::LinePointChoiceType& accessor) {
  delete dynamic_cast<asb_uci::type::LinePointChoiceType*>(&accessor);
}

} // namespace type

} // namespace uci

