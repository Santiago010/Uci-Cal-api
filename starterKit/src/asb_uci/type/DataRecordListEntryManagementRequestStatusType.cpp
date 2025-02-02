/** @file DataRecordListEntryManagementRequestStatusType.cpp
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

#include "../../../include/asb_uci/type/DataRecordListEntryManagementRequestStatusType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CannotComplyType.h"
#include "../../../include/asb_uci/type/ID_Type.h"
#include "../../../include/asb_uci/type/RequestProcessingStateEnum.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CannotComplyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DataRecordListEntryManagementRequestStatusType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequestProcessingStateEnum.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

DataRecordListEntryManagementRequestStatusType::DataRecordListEntryManagementRequestStatusType()
  : dataRecordID_Accessor{boost::make_unique<ID_Type>()},
    dataRecordListManagementRequestState_Accessor{boost::make_unique<RequestProcessingStateEnum>()} {
}

DataRecordListEntryManagementRequestStatusType::~DataRecordListEntryManagementRequestStatusType() = default;

void DataRecordListEntryManagementRequestStatusType::copy(const uci::type::DataRecordListEntryManagementRequestStatusType& accessor) {
  copyImpl(accessor, false);
}

void DataRecordListEntryManagementRequestStatusType::copyImpl(const uci::type::DataRecordListEntryManagementRequestStatusType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const DataRecordListEntryManagementRequestStatusType&>(accessor);
    setDataRecordID(*(accessorImpl.dataRecordID_Accessor));
    setDataRecordListManagementRequestState(*(accessorImpl.dataRecordListManagementRequestState_Accessor));
    if (accessorImpl.statusDetail_Accessor) {
      setStatusDetail(*(accessorImpl.statusDetail_Accessor));
    } else {
      statusDetail_Accessor.reset();
    }
  }
}

void DataRecordListEntryManagementRequestStatusType::reset() noexcept {
  if (dataRecordID_Accessor->getAccessorType() != uci::type::accessorType::iD_Type) {
    dataRecordID_Accessor = boost::make_unique<ID_Type>();
  } else {
    dataRecordID_Accessor->reset();
  }
  dataRecordListManagementRequestState_Accessor->reset();
  statusDetail_Accessor.reset();
}

const uci::type::ID_Type& DataRecordListEntryManagementRequestStatusType::getDataRecordID() const {
  return *dataRecordID_Accessor;
}

uci::type::ID_Type& DataRecordListEntryManagementRequestStatusType::getDataRecordID() {
  return *dataRecordID_Accessor;
}

uci::type::DataRecordListEntryManagementRequestStatusType& DataRecordListEntryManagementRequestStatusType::setDataRecordID(const uci::type::ID_Type& accessor) {
  enableDataRecordID(accessor.getAccessorType());
  if (&accessor != dataRecordID_Accessor.get()) {
    dataRecordID_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

uci::type::ID_Type& DataRecordListEntryManagementRequestStatusType::enableDataRecordID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::iD_Type : type};
  if ((!dataRecordID_Accessor) || (dataRecordID_Accessor->getAccessorType() != requestedType)) {
    dataRecordID_Accessor = ID_Type::create(requestedType);
    if (!dataRecordID_Accessor) {
      throw uci::base::UCIException("Error in enableDataRecordID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *dataRecordID_Accessor;
}

const uci::type::RequestProcessingStateEnum& DataRecordListEntryManagementRequestStatusType::getDataRecordListManagementRequestState() const {
  return *dataRecordListManagementRequestState_Accessor;
}

uci::type::RequestProcessingStateEnum& DataRecordListEntryManagementRequestStatusType::getDataRecordListManagementRequestState() {
  return *dataRecordListManagementRequestState_Accessor;
}

uci::type::DataRecordListEntryManagementRequestStatusType& DataRecordListEntryManagementRequestStatusType::setDataRecordListManagementRequestState(const uci::type::RequestProcessingStateEnum& accessor) {
  if (&accessor != dataRecordListManagementRequestState_Accessor.get()) {
    dataRecordListManagementRequestState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::DataRecordListEntryManagementRequestStatusType& DataRecordListEntryManagementRequestStatusType::setDataRecordListManagementRequestState(uci::type::RequestProcessingStateEnum::EnumerationItem value) {
  dataRecordListManagementRequestState_Accessor->setValue(value);
  return *this;
}


uci::type::CannotComplyType& DataRecordListEntryManagementRequestStatusType::getStatusDetail_() const {
  if (statusDetail_Accessor) {
    return *statusDetail_Accessor;
  }
  throw uci::base::UCIException("Error in getStatusDetail(): An attempt was made to get an optional field that was not enabled, call hasStatusDetail() to determine if it is safe to call getStatusDetail()");
}

const uci::type::CannotComplyType& DataRecordListEntryManagementRequestStatusType::getStatusDetail() const {
  return getStatusDetail_();
}

uci::type::CannotComplyType& DataRecordListEntryManagementRequestStatusType::getStatusDetail() {
  return getStatusDetail_();
}

uci::type::DataRecordListEntryManagementRequestStatusType& DataRecordListEntryManagementRequestStatusType::setStatusDetail(const uci::type::CannotComplyType& accessor) {
  enableStatusDetail(accessor.getAccessorType());
  if (&accessor != statusDetail_Accessor.get()) {
    statusDetail_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool DataRecordListEntryManagementRequestStatusType::hasStatusDetail() const noexcept {
  return static_cast<bool>(statusDetail_Accessor);
}

uci::type::CannotComplyType& DataRecordListEntryManagementRequestStatusType::enableStatusDetail(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::cannotComplyType : type};
  if ((!statusDetail_Accessor) || (statusDetail_Accessor->getAccessorType() != requestedType)) {
    statusDetail_Accessor = CannotComplyType::create(requestedType);
    if (!statusDetail_Accessor) {
      throw uci::base::UCIException("Error in enableStatusDetail(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *statusDetail_Accessor;
}

uci::type::DataRecordListEntryManagementRequestStatusType& DataRecordListEntryManagementRequestStatusType::clearStatusDetail() noexcept {
  statusDetail_Accessor.reset();
  return *this;
}

std::unique_ptr<DataRecordListEntryManagementRequestStatusType> DataRecordListEntryManagementRequestStatusType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::dataRecordListEntryManagementRequestStatusType : type};
  return (requestedType == uci::type::accessorType::dataRecordListEntryManagementRequestStatusType) ? boost::make_unique<DataRecordListEntryManagementRequestStatusType>() : nullptr;
}

/**  */
namespace DataRecordListEntryManagementRequestStatusType_Names {

constexpr const char* Extern_Type_Name{"DataRecordListEntryManagementRequestStatusType"};
constexpr const char* DataRecordID_Name{"DataRecordID"};
constexpr const char* DataRecordListManagementRequestState_Name{"DataRecordListManagementRequestState"};
constexpr const char* StatusDetail_Name{"StatusDetail"};

} // namespace DataRecordListEntryManagementRequestStatusType_Names

void DataRecordListEntryManagementRequestStatusType::deserialize(const boost::property_tree::ptree& propTree, uci::type::DataRecordListEntryManagementRequestStatusType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = DataRecordListEntryManagementRequestStatusType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + DataRecordListEntryManagementRequestStatusType_Names::DataRecordID_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableDataRecordID(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DataRecordListEntryManagementRequestStatusType_Names::DataRecordListManagementRequestState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getDataRecordListManagementRequestState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + DataRecordListEntryManagementRequestStatusType_Names::StatusDetail_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableStatusDetail(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    }
  }
}

std::string DataRecordListEntryManagementRequestStatusType::serialize(const uci::type::DataRecordListEntryManagementRequestStatusType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? DataRecordListEntryManagementRequestStatusType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, DataRecordListEntryManagementRequestStatusType_Names::Extern_Type_Name);
  }
  ID_Type::serialize(accessor.getDataRecordID(), node, DataRecordListEntryManagementRequestStatusType_Names::DataRecordID_Name);
  RequestProcessingStateEnum::serialize(accessor.getDataRecordListManagementRequestState(), node, DataRecordListEntryManagementRequestStatusType_Names::DataRecordListManagementRequestState_Name, false);
  if (accessor.hasStatusDetail()) {
    CannotComplyType::serialize(accessor.getStatusDetail(), node, DataRecordListEntryManagementRequestStatusType_Names::StatusDetail_Name);
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

uci::type::DataRecordListEntryManagementRequestStatusType& DataRecordListEntryManagementRequestStatusType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::DataRecordListEntryManagementRequestStatusType>().release());
}

uci::type::DataRecordListEntryManagementRequestStatusType& DataRecordListEntryManagementRequestStatusType::create(const uci::type::DataRecordListEntryManagementRequestStatusType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::DataRecordListEntryManagementRequestStatusType> newAccessor{boost::make_unique<asb_uci::type::DataRecordListEntryManagementRequestStatusType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void DataRecordListEntryManagementRequestStatusType::destroy(uci::type::DataRecordListEntryManagementRequestStatusType& accessor) {
  delete dynamic_cast<asb_uci::type::DataRecordListEntryManagementRequestStatusType*>(&accessor);
}

} // namespace type

} // namespace uci

