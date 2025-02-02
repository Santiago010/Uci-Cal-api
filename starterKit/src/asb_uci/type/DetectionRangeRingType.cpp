/** @file DetectionRangeRingType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:12 PM
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

#include "../../../include/asb_uci/type/DetectionRangeRingType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AltitudeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AnglePositiveType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DetectionRangeRingType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DistanceType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

DetectionRangeRingType::DetectionRangeRingType()
  : detectionRange_Accessor{boost::make_unique<DetectionRange>(1, SIZE_MAX)} {
}

DetectionRangeRingType::~DetectionRangeRingType() = default;

void DetectionRangeRingType::copy(const uci::type::DetectionRangeRingType& accessor) {
  copyImpl(accessor, false);
}

void DetectionRangeRingType::copyImpl(const uci::type::DetectionRangeRingType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const DetectionRangeRingType&>(accessor);
    setAltitudeOffset(accessorImpl.altitudeOffset_Accessor);
    if (accessorImpl.hasStartAzimuth()) {
      setStartAzimuth(accessorImpl.getStartAzimuth());
    } else {
      clearStartAzimuth();
    }
    if (accessorImpl.hasEndAzimuth()) {
      setEndAzimuth(accessorImpl.getEndAzimuth());
    } else {
      clearEndAzimuth();
    }
    setDetectionRange(*(accessorImpl.detectionRange_Accessor));
  }
}

void DetectionRangeRingType::reset() noexcept {
  altitudeOffset_Accessor = 0.0;
  clearStartAzimuth();
  clearEndAzimuth();
  detectionRange_Accessor->reset();
}

uci::type::AltitudeTypeValue DetectionRangeRingType::getAltitudeOffset() const {
  return altitudeOffset_Accessor;
}

uci::type::DetectionRangeRingType& DetectionRangeRingType::setAltitudeOffset(uci::type::AltitudeTypeValue value) {
  altitudeOffset_Accessor = value;
  return *this;
}


uci::type::AnglePositiveTypeValue DetectionRangeRingType::getStartAzimuth() const {
  if (startAzimuth_Accessor) {
    return *startAzimuth_Accessor;
  }
  throw uci::base::UCIException("Error in getStartAzimuth(): An attempt was made to get an optional field that was not enabled, call hasStartAzimuth() to determine if it is safe to call getStartAzimuth()");
}

uci::type::DetectionRangeRingType& DetectionRangeRingType::setStartAzimuth(uci::type::AnglePositiveTypeValue value) {
  startAzimuth_Accessor = value;
  return *this;
}

bool DetectionRangeRingType::hasStartAzimuth() const noexcept {
  return startAzimuth_Accessor.has_value();
}

uci::type::DetectionRangeRingType& DetectionRangeRingType::clearStartAzimuth() noexcept {
  startAzimuth_Accessor.reset();
  return *this;
}

uci::type::AnglePositiveTypeValue DetectionRangeRingType::getEndAzimuth() const {
  if (endAzimuth_Accessor) {
    return *endAzimuth_Accessor;
  }
  throw uci::base::UCIException("Error in getEndAzimuth(): An attempt was made to get an optional field that was not enabled, call hasEndAzimuth() to determine if it is safe to call getEndAzimuth()");
}

uci::type::DetectionRangeRingType& DetectionRangeRingType::setEndAzimuth(uci::type::AnglePositiveTypeValue value) {
  endAzimuth_Accessor = value;
  return *this;
}

bool DetectionRangeRingType::hasEndAzimuth() const noexcept {
  return endAzimuth_Accessor.has_value();
}

uci::type::DetectionRangeRingType& DetectionRangeRingType::clearEndAzimuth() noexcept {
  endAzimuth_Accessor.reset();
  return *this;
}

const uci::type::DetectionRangeRingType::DetectionRange& DetectionRangeRingType::getDetectionRange() const {
  return *detectionRange_Accessor;
}

uci::type::DetectionRangeRingType::DetectionRange& DetectionRangeRingType::getDetectionRange() {
  return *detectionRange_Accessor;
}

uci::type::DetectionRangeRingType& DetectionRangeRingType::setDetectionRange(const uci::type::DetectionRangeRingType::DetectionRange& accessor) {
  if (&accessor != detectionRange_Accessor.get()) {
    detectionRange_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<DetectionRangeRingType> DetectionRangeRingType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::detectionRangeRingType : type};
  return (requestedType == uci::type::accessorType::detectionRangeRingType) ? boost::make_unique<DetectionRangeRingType>() : nullptr;
}

/**  */
namespace DetectionRangeRingType_Names {

constexpr const char* Extern_Type_Name{"DetectionRangeRingType"};
constexpr const char* AltitudeOffset_Name{"AltitudeOffset"};
constexpr const char* StartAzimuth_Name{"StartAzimuth"};
constexpr const char* EndAzimuth_Name{"EndAzimuth"};
constexpr const char* DetectionRange_Name{"DetectionRange"};

} // namespace DetectionRangeRingType_Names

void DetectionRangeRingType::deserialize(const boost::property_tree::ptree& propTree, uci::type::DetectionRangeRingType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = DetectionRangeRingType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + DetectionRangeRingType_Names::AltitudeOffset_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAltitudeOffset(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DetectionRangeRingType_Names::StartAzimuth_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setStartAzimuth(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DetectionRangeRingType_Names::EndAzimuth_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEndAzimuth(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DetectionRangeRingType_Names::DetectionRange_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::DetectionRangeRingType::DetectionRange& boundedList = accessor.getDetectionRange();
        const uci::type::DetectionRangeRingType::DetectionRange::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setDoubleValue(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    }
  }
}

std::string DetectionRangeRingType::serialize(const uci::type::DetectionRangeRingType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? DetectionRangeRingType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, DetectionRangeRingType_Names::Extern_Type_Name);
  }
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getAltitudeOffset(), node, DetectionRangeRingType_Names::AltitudeOffset_Name);
  if (accessor.hasStartAzimuth()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getStartAzimuth(), node, DetectionRangeRingType_Names::StartAzimuth_Name);
  }
  if (accessor.hasEndAzimuth()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getEndAzimuth(), node, DetectionRangeRingType_Names::EndAzimuth_Name);
  }
  {
    const uci::type::DetectionRangeRingType::DetectionRange& boundedList = accessor.getDetectionRange();
    for (uci::type::DetectionRangeRingType::DetectionRange::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::util::SerializationHelpers::serializeDouble(boundedList.at(i), node, DetectionRangeRingType_Names::DetectionRange_Name);
    }
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

uci::type::DetectionRangeRingType& DetectionRangeRingType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::DetectionRangeRingType>().release());
}

uci::type::DetectionRangeRingType& DetectionRangeRingType::create(const uci::type::DetectionRangeRingType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::DetectionRangeRingType> newAccessor{boost::make_unique<asb_uci::type::DetectionRangeRingType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void DetectionRangeRingType::destroy(uci::type::DetectionRangeRingType& accessor) {
  delete dynamic_cast<asb_uci::type::DetectionRangeRingType*>(&accessor);
}

} // namespace type

} // namespace uci

