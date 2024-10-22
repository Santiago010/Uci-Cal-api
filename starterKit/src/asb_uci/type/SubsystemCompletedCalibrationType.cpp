/** @file SubsystemCompletedCalibrationType.cpp
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

#include "../../../include/asb_uci/type/SubsystemCompletedCalibrationType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CalibrationID_Type.h"
#include "../../../include/asb_uci/type/SubsystemCalibrationResultEnum.h"
#include "../../../include/asb_uci/type/SubsystemCompletedCalibrationItemType.h"
#include "../../../include/asb_uci/type/VisibleString256Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CalibrationID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemCalibrationResultEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemCompletedCalibrationItemType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemCompletedCalibrationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString256Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SubsystemCompletedCalibrationType::SubsystemCompletedCalibrationType()
  : calibrationID_Accessor{boost::make_unique<CalibrationID_Type>()},
    result_Accessor{boost::make_unique<SubsystemCalibrationResultEnum>()},
    calibrationItem_Accessor{boost::make_unique<CalibrationItem>(0, SIZE_MAX)} {
}

SubsystemCompletedCalibrationType::~SubsystemCompletedCalibrationType() = default;

void SubsystemCompletedCalibrationType::copy(const uci::type::SubsystemCompletedCalibrationType& accessor) {
  copyImpl(accessor, false);
}

void SubsystemCompletedCalibrationType::copyImpl(const uci::type::SubsystemCompletedCalibrationType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const SubsystemCompletedCalibrationType&>(accessor);
    setCalibrationID(*(accessorImpl.calibrationID_Accessor));
    setTimetag(accessorImpl.timetag_Accessor);
    setResult(*(accessorImpl.result_Accessor));
    if (accessorImpl.failReason_Accessor) {
      setFailReason(*(accessorImpl.failReason_Accessor));
    } else {
      failReason_Accessor.reset();
    }
    setCalibrationItem(*(accessorImpl.calibrationItem_Accessor));
  }
}

void SubsystemCompletedCalibrationType::reset() noexcept {
  calibrationID_Accessor->reset();
  timetag_Accessor = 0;
  result_Accessor->reset();
  failReason_Accessor.reset();
  calibrationItem_Accessor->reset();
}

const uci::type::CalibrationID_Type& SubsystemCompletedCalibrationType::getCalibrationID() const {
  return *calibrationID_Accessor;
}

uci::type::CalibrationID_Type& SubsystemCompletedCalibrationType::getCalibrationID() {
  return *calibrationID_Accessor;
}

uci::type::SubsystemCompletedCalibrationType& SubsystemCompletedCalibrationType::setCalibrationID(const uci::type::CalibrationID_Type& accessor) {
  if (&accessor != calibrationID_Accessor.get()) {
    calibrationID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::DateTimeTypeValue SubsystemCompletedCalibrationType::getTimetag() const {
  return timetag_Accessor;
}

uci::type::SubsystemCompletedCalibrationType& SubsystemCompletedCalibrationType::setTimetag(uci::type::DateTimeTypeValue value) {
  timetag_Accessor = value;
  return *this;
}


const uci::type::SubsystemCalibrationResultEnum& SubsystemCompletedCalibrationType::getResult() const {
  return *result_Accessor;
}

uci::type::SubsystemCalibrationResultEnum& SubsystemCompletedCalibrationType::getResult() {
  return *result_Accessor;
}

uci::type::SubsystemCompletedCalibrationType& SubsystemCompletedCalibrationType::setResult(const uci::type::SubsystemCalibrationResultEnum& accessor) {
  if (&accessor != result_Accessor.get()) {
    result_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::SubsystemCompletedCalibrationType& SubsystemCompletedCalibrationType::setResult(uci::type::SubsystemCalibrationResultEnum::EnumerationItem value) {
  result_Accessor->setValue(value);
  return *this;
}


asb_uci::type::VisibleString256Type& SubsystemCompletedCalibrationType::getFailReason_() const {
  if (failReason_Accessor) {
    return *failReason_Accessor;
  }
  throw uci::base::UCIException("Error in getFailReason(): An attempt was made to get an optional field that was not enabled, call hasFailReason() to determine if it is safe to call getFailReason()");
}

const asb_uci::type::VisibleString256Type& SubsystemCompletedCalibrationType::getFailReason() const {
  return getFailReason_();
}

asb_uci::type::VisibleString256Type& SubsystemCompletedCalibrationType::getFailReason() {
  return getFailReason_();
}

uci::type::SubsystemCompletedCalibrationType& SubsystemCompletedCalibrationType::setFailReason(const asb_uci::type::VisibleString256Type& value) {
  return setFailReason(value.c_str());
}

uci::type::SubsystemCompletedCalibrationType& SubsystemCompletedCalibrationType::setFailReason(const std::string& value) {
  return setFailReason(value.c_str());
}

uci::type::SubsystemCompletedCalibrationType& SubsystemCompletedCalibrationType::setFailReason(const char* value) {
  enableFailReason().setStringValue(value);
  return *this;
}

bool SubsystemCompletedCalibrationType::hasFailReason() const noexcept {
  return static_cast<bool>(failReason_Accessor);
}

asb_uci::type::VisibleString256Type& SubsystemCompletedCalibrationType::enableFailReason(uci::base::accessorType::AccessorType type) {
  if (!failReason_Accessor) {
    failReason_Accessor =  asb_uci::type::VisibleString256Type::create(type);
  }
  return *failReason_Accessor;
}

uci::type::SubsystemCompletedCalibrationType& SubsystemCompletedCalibrationType::clearFailReason() noexcept {
  failReason_Accessor.reset();
  return *this;
}

const uci::type::SubsystemCompletedCalibrationType::CalibrationItem& SubsystemCompletedCalibrationType::getCalibrationItem() const {
  return *calibrationItem_Accessor;
}

uci::type::SubsystemCompletedCalibrationType::CalibrationItem& SubsystemCompletedCalibrationType::getCalibrationItem() {
  return *calibrationItem_Accessor;
}

uci::type::SubsystemCompletedCalibrationType& SubsystemCompletedCalibrationType::setCalibrationItem(const uci::type::SubsystemCompletedCalibrationType::CalibrationItem& accessor) {
  if (&accessor != calibrationItem_Accessor.get()) {
    calibrationItem_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<SubsystemCompletedCalibrationType> SubsystemCompletedCalibrationType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::subsystemCompletedCalibrationType : type};
  return (requestedType == uci::type::accessorType::subsystemCompletedCalibrationType) ? boost::make_unique<SubsystemCompletedCalibrationType>() : nullptr;
}

/**  */
namespace SubsystemCompletedCalibrationType_Names {

constexpr const char* Extern_Type_Name{"SubsystemCompletedCalibrationType"};
constexpr const char* CalibrationID_Name{"CalibrationID"};
constexpr const char* Timetag_Name{"Timetag"};
constexpr const char* Result_Name{"Result"};
constexpr const char* FailReason_Name{"FailReason"};
constexpr const char* CalibrationItem_Name{"CalibrationItem"};

} // namespace SubsystemCompletedCalibrationType_Names

void SubsystemCompletedCalibrationType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SubsystemCompletedCalibrationType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SubsystemCompletedCalibrationType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SubsystemCompletedCalibrationType_Names::CalibrationID_Name) {
      CalibrationID_Type::deserialize(valueType.second, accessor.getCalibrationID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SubsystemCompletedCalibrationType_Names::Timetag_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTimetag(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + SubsystemCompletedCalibrationType_Names::Result_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getResult().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + SubsystemCompletedCalibrationType_Names::FailReason_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setFailReason(*value);
      }
    } else if (valueType.first == nsPrefix + SubsystemCompletedCalibrationType_Names::CalibrationItem_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SubsystemCompletedCalibrationType::CalibrationItem& boundedList = accessor.getCalibrationItem();
        const uci::type::SubsystemCompletedCalibrationType::CalibrationItem::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::SubsystemCompletedCalibrationItemType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string SubsystemCompletedCalibrationType::serialize(const uci::type::SubsystemCompletedCalibrationType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SubsystemCompletedCalibrationType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SubsystemCompletedCalibrationType_Names::Extern_Type_Name);
  }
  CalibrationID_Type::serialize(accessor.getCalibrationID(), node, SubsystemCompletedCalibrationType_Names::CalibrationID_Name);
  asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getTimetag(), node, SubsystemCompletedCalibrationType_Names::Timetag_Name);
  SubsystemCalibrationResultEnum::serialize(accessor.getResult(), node, SubsystemCompletedCalibrationType_Names::Result_Name, false);
  if (accessor.hasFailReason()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getFailReason(), node, SubsystemCompletedCalibrationType_Names::FailReason_Name);
  }
  {
    const uci::type::SubsystemCompletedCalibrationType::CalibrationItem& boundedList = accessor.getCalibrationItem();
    for (uci::type::SubsystemCompletedCalibrationType::CalibrationItem::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::SubsystemCompletedCalibrationItemType::serialize(boundedList.at(i), node, SubsystemCompletedCalibrationType_Names::CalibrationItem_Name);
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

uci::type::SubsystemCompletedCalibrationType& SubsystemCompletedCalibrationType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SubsystemCompletedCalibrationType>().release());
}

uci::type::SubsystemCompletedCalibrationType& SubsystemCompletedCalibrationType::create(const uci::type::SubsystemCompletedCalibrationType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SubsystemCompletedCalibrationType> newAccessor{boost::make_unique<asb_uci::type::SubsystemCompletedCalibrationType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SubsystemCompletedCalibrationType::destroy(uci::type::SubsystemCompletedCalibrationType& accessor) {
  delete dynamic_cast<asb_uci::type::SubsystemCompletedCalibrationType*>(&accessor);
}

} // namespace type

} // namespace uci

