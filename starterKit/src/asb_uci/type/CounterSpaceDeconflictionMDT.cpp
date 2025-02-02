/** @file CounterSpaceDeconflictionMDT.cpp
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

#include "../../../include/asb_uci/type/CounterSpaceDeconflictionMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CS_SatBandDeconType.h"
#include "../../../include/asb_uci/type/CounterSpaceDeconflictionID_Type.h"
#include "../../../include/asb_uci/type/DataRecordBaseType.h"
#include "../../../include/asb_uci/type/DateTimeRangeType.h"
#include "../../../include/asb_uci/type/FileLocationID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CS_SatBandDeconType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CounterSpaceDeconflictionID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CounterSpaceDeconflictionMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeRangeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/FileLocationID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

CounterSpaceDeconflictionMDT::CounterSpaceDeconflictionMDT()
  : counterSpaceDeconflictionID_Accessor{boost::make_unique<CounterSpaceDeconflictionID_Type>()},
    deconflictionPeriod_Accessor{boost::make_unique<DateTimeRangeType>()},
    satBandDecon_Accessor{boost::make_unique<SatBandDecon>(1, SIZE_MAX)},
    intentID_Accessor{boost::make_unique<FileLocationID_Type>()},
    specialInstructionsID_Accessor{boost::make_unique<FileLocationID_Type>()} {
}

CounterSpaceDeconflictionMDT::~CounterSpaceDeconflictionMDT() = default;

void CounterSpaceDeconflictionMDT::copy(const uci::type::CounterSpaceDeconflictionMDT& accessor) {
  copyImpl(accessor, false);
}

void CounterSpaceDeconflictionMDT::copyImpl(const uci::type::CounterSpaceDeconflictionMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    DataRecordBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const CounterSpaceDeconflictionMDT&>(accessor);
    setCounterSpaceDeconflictionID(*(accessorImpl.counterSpaceDeconflictionID_Accessor));
    setDeconflictionPeriod(*(accessorImpl.deconflictionPeriod_Accessor));
    setSatBandDecon(*(accessorImpl.satBandDecon_Accessor));
    setIntentID(*(accessorImpl.intentID_Accessor));
    setSpecialInstructionsID(*(accessorImpl.specialInstructionsID_Accessor));
  }
}

void CounterSpaceDeconflictionMDT::reset() noexcept {
  DataRecordBaseType::reset();
  counterSpaceDeconflictionID_Accessor->reset();
  deconflictionPeriod_Accessor->reset();
  satBandDecon_Accessor->reset();
  intentID_Accessor->reset();
  specialInstructionsID_Accessor->reset();
}

const uci::type::CounterSpaceDeconflictionID_Type& CounterSpaceDeconflictionMDT::getCounterSpaceDeconflictionID() const {
  return *counterSpaceDeconflictionID_Accessor;
}

uci::type::CounterSpaceDeconflictionID_Type& CounterSpaceDeconflictionMDT::getCounterSpaceDeconflictionID() {
  return *counterSpaceDeconflictionID_Accessor;
}

uci::type::CounterSpaceDeconflictionMDT& CounterSpaceDeconflictionMDT::setCounterSpaceDeconflictionID(const uci::type::CounterSpaceDeconflictionID_Type& accessor) {
  if (&accessor != counterSpaceDeconflictionID_Accessor.get()) {
    counterSpaceDeconflictionID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::DateTimeRangeType& CounterSpaceDeconflictionMDT::getDeconflictionPeriod() const {
  return *deconflictionPeriod_Accessor;
}

uci::type::DateTimeRangeType& CounterSpaceDeconflictionMDT::getDeconflictionPeriod() {
  return *deconflictionPeriod_Accessor;
}

uci::type::CounterSpaceDeconflictionMDT& CounterSpaceDeconflictionMDT::setDeconflictionPeriod(const uci::type::DateTimeRangeType& accessor) {
  if (&accessor != deconflictionPeriod_Accessor.get()) {
    deconflictionPeriod_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::CounterSpaceDeconflictionMDT::SatBandDecon& CounterSpaceDeconflictionMDT::getSatBandDecon() const {
  return *satBandDecon_Accessor;
}

uci::type::CounterSpaceDeconflictionMDT::SatBandDecon& CounterSpaceDeconflictionMDT::getSatBandDecon() {
  return *satBandDecon_Accessor;
}

uci::type::CounterSpaceDeconflictionMDT& CounterSpaceDeconflictionMDT::setSatBandDecon(const uci::type::CounterSpaceDeconflictionMDT::SatBandDecon& accessor) {
  if (&accessor != satBandDecon_Accessor.get()) {
    satBandDecon_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::FileLocationID_Type& CounterSpaceDeconflictionMDT::getIntentID() const {
  return *intentID_Accessor;
}

uci::type::FileLocationID_Type& CounterSpaceDeconflictionMDT::getIntentID() {
  return *intentID_Accessor;
}

uci::type::CounterSpaceDeconflictionMDT& CounterSpaceDeconflictionMDT::setIntentID(const uci::type::FileLocationID_Type& accessor) {
  if (&accessor != intentID_Accessor.get()) {
    intentID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::FileLocationID_Type& CounterSpaceDeconflictionMDT::getSpecialInstructionsID() const {
  return *specialInstructionsID_Accessor;
}

uci::type::FileLocationID_Type& CounterSpaceDeconflictionMDT::getSpecialInstructionsID() {
  return *specialInstructionsID_Accessor;
}

uci::type::CounterSpaceDeconflictionMDT& CounterSpaceDeconflictionMDT::setSpecialInstructionsID(const uci::type::FileLocationID_Type& accessor) {
  if (&accessor != specialInstructionsID_Accessor.get()) {
    specialInstructionsID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<CounterSpaceDeconflictionMDT> CounterSpaceDeconflictionMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::counterSpaceDeconflictionMDT : type};
  return (requestedType == uci::type::accessorType::counterSpaceDeconflictionMDT) ? boost::make_unique<CounterSpaceDeconflictionMDT>() : nullptr;
}

/**  */
namespace CounterSpaceDeconflictionMDT_Names {

constexpr const char* Extern_Type_Name{"CounterSpaceDeconflictionMDT"};
constexpr const char* CounterSpaceDeconflictionID_Name{"CounterSpaceDeconflictionID"};
constexpr const char* DeconflictionPeriod_Name{"DeconflictionPeriod"};
constexpr const char* SatBandDecon_Name{"SatBandDecon"};
constexpr const char* IntentID_Name{"IntentID"};
constexpr const char* SpecialInstructionsID_Name{"SpecialInstructionsID"};

} // namespace CounterSpaceDeconflictionMDT_Names

void CounterSpaceDeconflictionMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::CounterSpaceDeconflictionMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CounterSpaceDeconflictionMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CounterSpaceDeconflictionMDT_Names::CounterSpaceDeconflictionID_Name) {
      CounterSpaceDeconflictionID_Type::deserialize(valueType.second, accessor.getCounterSpaceDeconflictionID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CounterSpaceDeconflictionMDT_Names::DeconflictionPeriod_Name) {
      DateTimeRangeType::deserialize(valueType.second, accessor.getDeconflictionPeriod(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CounterSpaceDeconflictionMDT_Names::SatBandDecon_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::CounterSpaceDeconflictionMDT::SatBandDecon& boundedList = accessor.getSatBandDecon();
        const uci::type::CounterSpaceDeconflictionMDT::SatBandDecon::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::CS_SatBandDeconType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + CounterSpaceDeconflictionMDT_Names::IntentID_Name) {
      FileLocationID_Type::deserialize(valueType.second, accessor.getIntentID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CounterSpaceDeconflictionMDT_Names::SpecialInstructionsID_Name) {
      FileLocationID_Type::deserialize(valueType.second, accessor.getSpecialInstructionsID(), nodeName, nsPrefix);
    }
  }
  DataRecordBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string CounterSpaceDeconflictionMDT::serialize(const uci::type::CounterSpaceDeconflictionMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? CounterSpaceDeconflictionMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, CounterSpaceDeconflictionMDT_Names::Extern_Type_Name);
  }
  DataRecordBaseType::serialize(accessor, node, "", false, false, false);
  CounterSpaceDeconflictionID_Type::serialize(accessor.getCounterSpaceDeconflictionID(), node, CounterSpaceDeconflictionMDT_Names::CounterSpaceDeconflictionID_Name);
  DateTimeRangeType::serialize(accessor.getDeconflictionPeriod(), node, CounterSpaceDeconflictionMDT_Names::DeconflictionPeriod_Name);
  {
    const uci::type::CounterSpaceDeconflictionMDT::SatBandDecon& boundedList = accessor.getSatBandDecon();
    for (uci::type::CounterSpaceDeconflictionMDT::SatBandDecon::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::CS_SatBandDeconType::serialize(boundedList.at(i), node, CounterSpaceDeconflictionMDT_Names::SatBandDecon_Name);
    }
  }
  FileLocationID_Type::serialize(accessor.getIntentID(), node, CounterSpaceDeconflictionMDT_Names::IntentID_Name);
  FileLocationID_Type::serialize(accessor.getSpecialInstructionsID(), node, CounterSpaceDeconflictionMDT_Names::SpecialInstructionsID_Name);
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

uci::type::CounterSpaceDeconflictionMDT& CounterSpaceDeconflictionMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::CounterSpaceDeconflictionMDT>().release());
}

uci::type::CounterSpaceDeconflictionMDT& CounterSpaceDeconflictionMDT::create(const uci::type::CounterSpaceDeconflictionMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::CounterSpaceDeconflictionMDT> newAccessor{boost::make_unique<asb_uci::type::CounterSpaceDeconflictionMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void CounterSpaceDeconflictionMDT::destroy(uci::type::CounterSpaceDeconflictionMDT& accessor) {
  delete dynamic_cast<asb_uci::type::CounterSpaceDeconflictionMDT*>(&accessor);
}

} // namespace type

} // namespace uci

