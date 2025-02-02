/** @file DMPI_DesignationMDT.cpp
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

#include "../../../include/asb_uci/type/DMPI_DesignationMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/DMPI_DesignationID_Type.h"
#include "../../../include/asb_uci/type/DMPI_DesignationParametersType.h"
#include "../../../include/asb_uci/type/DMPI_PatternID_Type.h"
#include "../../../include/asb_uci/type/DataRecordBaseType.h"
#include "../../../include/asb_uci/type/TaskID_Type.h"
#include "../../../include/asb_uci/type/VisibleString1024Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DMPI_DesignationID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DMPI_DesignationMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DMPI_DesignationParametersType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DMPI_PatternID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TaskID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString1024Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

DMPI_DesignationMDT::DMPI_DesignationMDT()
  : dMPI_DesignationID_Accessor{boost::make_unique<DMPI_DesignationID_Type>()},
    dMPI_Details_Accessor{boost::make_unique<DMPI_Details>(1, SIZE_MAX)} {
}

DMPI_DesignationMDT::~DMPI_DesignationMDT() = default;

void DMPI_DesignationMDT::copy(const uci::type::DMPI_DesignationMDT& accessor) {
  copyImpl(accessor, false);
}

void DMPI_DesignationMDT::copyImpl(const uci::type::DMPI_DesignationMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    DataRecordBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const DMPI_DesignationMDT&>(accessor);
    setDMPI_DesignationID(*(accessorImpl.dMPI_DesignationID_Accessor));
    if (accessorImpl.taskID_Accessor) {
      setTaskID(*(accessorImpl.taskID_Accessor));
    } else {
      taskID_Accessor.reset();
    }
    if (accessorImpl.remarks_Accessor) {
      setRemarks(*(accessorImpl.remarks_Accessor));
    } else {
      remarks_Accessor.reset();
    }
    setDMPI_Details(*(accessorImpl.dMPI_Details_Accessor));
    if (accessorImpl.dMPI_PatternID_Accessor) {
      setDMPI_PatternID(*(accessorImpl.dMPI_PatternID_Accessor));
    } else {
      dMPI_PatternID_Accessor.reset();
    }
  }
}

void DMPI_DesignationMDT::reset() noexcept {
  DataRecordBaseType::reset();
  dMPI_DesignationID_Accessor->reset();
  taskID_Accessor.reset();
  remarks_Accessor.reset();
  dMPI_Details_Accessor->reset();
  dMPI_PatternID_Accessor.reset();
}

const uci::type::DMPI_DesignationID_Type& DMPI_DesignationMDT::getDMPI_DesignationID() const {
  return *dMPI_DesignationID_Accessor;
}

uci::type::DMPI_DesignationID_Type& DMPI_DesignationMDT::getDMPI_DesignationID() {
  return *dMPI_DesignationID_Accessor;
}

uci::type::DMPI_DesignationMDT& DMPI_DesignationMDT::setDMPI_DesignationID(const uci::type::DMPI_DesignationID_Type& accessor) {
  if (&accessor != dMPI_DesignationID_Accessor.get()) {
    dMPI_DesignationID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::TaskID_Type& DMPI_DesignationMDT::getTaskID_() const {
  if (taskID_Accessor) {
    return *taskID_Accessor;
  }
  throw uci::base::UCIException("Error in getTaskID(): An attempt was made to get an optional field that was not enabled, call hasTaskID() to determine if it is safe to call getTaskID()");
}

const uci::type::TaskID_Type& DMPI_DesignationMDT::getTaskID() const {
  return getTaskID_();
}

uci::type::TaskID_Type& DMPI_DesignationMDT::getTaskID() {
  return getTaskID_();
}

uci::type::DMPI_DesignationMDT& DMPI_DesignationMDT::setTaskID(const uci::type::TaskID_Type& accessor) {
  enableTaskID();
  if (&accessor != taskID_Accessor.get()) {
    taskID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool DMPI_DesignationMDT::hasTaskID() const noexcept {
  return static_cast<bool>(taskID_Accessor);
}

uci::type::TaskID_Type& DMPI_DesignationMDT::enableTaskID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::taskID_Type : type};
  if ((!taskID_Accessor) || (taskID_Accessor->getAccessorType() != requestedType)) {
    taskID_Accessor = TaskID_Type::create(requestedType);
    if (!taskID_Accessor) {
      throw uci::base::UCIException("Error in enableTaskID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *taskID_Accessor;
}

uci::type::DMPI_DesignationMDT& DMPI_DesignationMDT::clearTaskID() noexcept {
  taskID_Accessor.reset();
  return *this;
}

uci::type::VisibleString1024Type& DMPI_DesignationMDT::getRemarks_() const {
  if (remarks_Accessor) {
    return *remarks_Accessor;
  }
  throw uci::base::UCIException("Error in getRemarks(): An attempt was made to get an optional field that was not enabled, call hasRemarks() to determine if it is safe to call getRemarks()");
}

const uci::type::VisibleString1024Type& DMPI_DesignationMDT::getRemarks() const {
  return getRemarks_();
}

uci::type::VisibleString1024Type& DMPI_DesignationMDT::getRemarks() {
  return getRemarks_();
}

uci::type::DMPI_DesignationMDT& DMPI_DesignationMDT::setRemarks(const uci::type::VisibleString1024Type& value) {
  return setRemarks(value.c_str());
}

uci::type::DMPI_DesignationMDT& DMPI_DesignationMDT::setRemarks(const std::string& value) {
  return setRemarks(value.c_str());
}

uci::type::DMPI_DesignationMDT& DMPI_DesignationMDT::setRemarks(const char* value) {
  enableRemarks().setStringValue(value);
  return *this;
}

bool DMPI_DesignationMDT::hasRemarks() const noexcept {
  return static_cast<bool>(remarks_Accessor);
}

uci::type::VisibleString1024Type& DMPI_DesignationMDT::enableRemarks(uci::base::accessorType::AccessorType type) {
  if (!remarks_Accessor) {
    remarks_Accessor = VisibleString1024Type::create(type);
  }
  return *remarks_Accessor;
}

uci::type::DMPI_DesignationMDT& DMPI_DesignationMDT::clearRemarks() noexcept {
  remarks_Accessor.reset();
  return *this;
}

const uci::type::DMPI_DesignationMDT::DMPI_Details& DMPI_DesignationMDT::getDMPI_Details() const {
  return *dMPI_Details_Accessor;
}

uci::type::DMPI_DesignationMDT::DMPI_Details& DMPI_DesignationMDT::getDMPI_Details() {
  return *dMPI_Details_Accessor;
}

uci::type::DMPI_DesignationMDT& DMPI_DesignationMDT::setDMPI_Details(const uci::type::DMPI_DesignationMDT::DMPI_Details& accessor) {
  if (&accessor != dMPI_Details_Accessor.get()) {
    dMPI_Details_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::DMPI_PatternID_Type& DMPI_DesignationMDT::getDMPI_PatternID_() const {
  if (dMPI_PatternID_Accessor) {
    return *dMPI_PatternID_Accessor;
  }
  throw uci::base::UCIException("Error in getDMPI_PatternID(): An attempt was made to get an optional field that was not enabled, call hasDMPI_PatternID() to determine if it is safe to call getDMPI_PatternID()");
}

const uci::type::DMPI_PatternID_Type& DMPI_DesignationMDT::getDMPI_PatternID() const {
  return getDMPI_PatternID_();
}

uci::type::DMPI_PatternID_Type& DMPI_DesignationMDT::getDMPI_PatternID() {
  return getDMPI_PatternID_();
}

uci::type::DMPI_DesignationMDT& DMPI_DesignationMDT::setDMPI_PatternID(const uci::type::DMPI_PatternID_Type& accessor) {
  enableDMPI_PatternID();
  if (&accessor != dMPI_PatternID_Accessor.get()) {
    dMPI_PatternID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool DMPI_DesignationMDT::hasDMPI_PatternID() const noexcept {
  return static_cast<bool>(dMPI_PatternID_Accessor);
}

uci::type::DMPI_PatternID_Type& DMPI_DesignationMDT::enableDMPI_PatternID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::dMPI_PatternID_Type : type};
  if ((!dMPI_PatternID_Accessor) || (dMPI_PatternID_Accessor->getAccessorType() != requestedType)) {
    dMPI_PatternID_Accessor = DMPI_PatternID_Type::create(requestedType);
    if (!dMPI_PatternID_Accessor) {
      throw uci::base::UCIException("Error in enableDMPI_PatternID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *dMPI_PatternID_Accessor;
}

uci::type::DMPI_DesignationMDT& DMPI_DesignationMDT::clearDMPI_PatternID() noexcept {
  dMPI_PatternID_Accessor.reset();
  return *this;
}

std::unique_ptr<DMPI_DesignationMDT> DMPI_DesignationMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::dMPI_DesignationMDT : type};
  return (requestedType == uci::type::accessorType::dMPI_DesignationMDT) ? boost::make_unique<DMPI_DesignationMDT>() : nullptr;
}

/**  */
namespace DMPI_DesignationMDT_Names {

constexpr const char* Extern_Type_Name{"DMPI_DesignationMDT"};
constexpr const char* DMPI_DesignationID_Name{"DMPI_DesignationID"};
constexpr const char* TaskID_Name{"TaskID"};
constexpr const char* Remarks_Name{"Remarks"};
constexpr const char* DMPI_Details_Name{"DMPI_Details"};
constexpr const char* DMPI_PatternID_Name{"DMPI_PatternID"};

} // namespace DMPI_DesignationMDT_Names

void DMPI_DesignationMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::DMPI_DesignationMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = DMPI_DesignationMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + DMPI_DesignationMDT_Names::DMPI_DesignationID_Name) {
      DMPI_DesignationID_Type::deserialize(valueType.second, accessor.getDMPI_DesignationID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DMPI_DesignationMDT_Names::TaskID_Name) {
      TaskID_Type::deserialize(valueType.second, accessor.enableTaskID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DMPI_DesignationMDT_Names::Remarks_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRemarks(*value);
      }
    } else if (valueType.first == nsPrefix + DMPI_DesignationMDT_Names::DMPI_Details_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::DMPI_DesignationMDT::DMPI_Details& boundedList = accessor.getDMPI_Details();
        const uci::type::DMPI_DesignationMDT::DMPI_Details::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::DMPI_DesignationParametersType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + DMPI_DesignationMDT_Names::DMPI_PatternID_Name) {
      DMPI_PatternID_Type::deserialize(valueType.second, accessor.enableDMPI_PatternID(), nodeName, nsPrefix);
    }
  }
  DataRecordBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string DMPI_DesignationMDT::serialize(const uci::type::DMPI_DesignationMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? DMPI_DesignationMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, DMPI_DesignationMDT_Names::Extern_Type_Name);
  }
  DataRecordBaseType::serialize(accessor, node, "", false, false, false);
  DMPI_DesignationID_Type::serialize(accessor.getDMPI_DesignationID(), node, DMPI_DesignationMDT_Names::DMPI_DesignationID_Name);
  if (accessor.hasTaskID()) {
    TaskID_Type::serialize(accessor.getTaskID(), node, DMPI_DesignationMDT_Names::TaskID_Name);
  }
  if (accessor.hasRemarks()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getRemarks(), node, DMPI_DesignationMDT_Names::Remarks_Name);
  }
  {
    const uci::type::DMPI_DesignationMDT::DMPI_Details& boundedList = accessor.getDMPI_Details();
    for (uci::type::DMPI_DesignationMDT::DMPI_Details::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::DMPI_DesignationParametersType::serialize(boundedList.at(i), node, DMPI_DesignationMDT_Names::DMPI_Details_Name);
    }
  }
  if (accessor.hasDMPI_PatternID()) {
    DMPI_PatternID_Type::serialize(accessor.getDMPI_PatternID(), node, DMPI_DesignationMDT_Names::DMPI_PatternID_Name);
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

uci::type::DMPI_DesignationMDT& DMPI_DesignationMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::DMPI_DesignationMDT>().release());
}

uci::type::DMPI_DesignationMDT& DMPI_DesignationMDT::create(const uci::type::DMPI_DesignationMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::DMPI_DesignationMDT> newAccessor{boost::make_unique<asb_uci::type::DMPI_DesignationMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void DMPI_DesignationMDT::destroy(uci::type::DMPI_DesignationMDT& accessor) {
  delete dynamic_cast<asb_uci::type::DMPI_DesignationMDT*>(&accessor);
}

} // namespace type

} // namespace uci

