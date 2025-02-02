/** @file ProductDownloadReportMT.cpp
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

#include "../../../include/asb_uci/type/ProductDownloadReportMT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/base/Reader.h"
#include "../../../include/asb_uci/base/Writer.h"
#include "../../../include/asb_uci/type/MessageType.h"
#include "../../../include/asb_uci/type/ObjectStateEnum.h"
#include "../../../include/asb_uci/type/ProductDownloadReportMDT.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ObjectStateEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductDownloadReportMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductDownloadReportMT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ProductDownloadReportMT::ProductDownloadReportMT()
  : messageData_Accessor{boost::make_unique<ProductDownloadReportMDT>()} {
}

ProductDownloadReportMT::~ProductDownloadReportMT() = default;

void ProductDownloadReportMT::copy(const uci::type::ProductDownloadReportMT& accessor) {
  copyImpl(accessor, false);
}

void ProductDownloadReportMT::copyImpl(const uci::type::ProductDownloadReportMT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    MessageType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const ProductDownloadReportMT&>(accessor);
    if (accessorImpl.objectState_Accessor) {
      setObjectState(*(accessorImpl.objectState_Accessor));
    } else {
      objectState_Accessor.reset();
    }
    setMessageData(*(accessorImpl.messageData_Accessor));
  }
}

void ProductDownloadReportMT::reset() noexcept {
  MessageType::reset();
  objectState_Accessor.reset();
  messageData_Accessor->reset();
}

uci::type::ObjectStateEnum& ProductDownloadReportMT::getObjectState_() const {
  if (objectState_Accessor) {
    return *objectState_Accessor;
  }
  throw uci::base::UCIException("Error in getObjectState(): An attempt was made to get an optional field that was not enabled, call hasObjectState() to determine if it is safe to call getObjectState()");
}

const uci::type::ObjectStateEnum& ProductDownloadReportMT::getObjectState() const {
  return getObjectState_();
}

uci::type::ObjectStateEnum& ProductDownloadReportMT::getObjectState() {
  return getObjectState_();
}

uci::type::ProductDownloadReportMT& ProductDownloadReportMT::setObjectState(const uci::type::ObjectStateEnum& accessor) {
  enableObjectState();
  if (&accessor != objectState_Accessor.get()) {
    objectState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ProductDownloadReportMT& ProductDownloadReportMT::setObjectState(const uci::type::ObjectStateEnum::EnumerationItem value) {
  enableObjectState().setValue(value);
  return *this;
}

bool ProductDownloadReportMT::hasObjectState() const noexcept {
  return static_cast<bool>(objectState_Accessor);
}

uci::type::ObjectStateEnum& ProductDownloadReportMT::enableObjectState(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::objectStateEnum : type};
  if ((!objectState_Accessor) || (objectState_Accessor->getAccessorType() != requestedType)) {
    objectState_Accessor = ObjectStateEnum::create(requestedType);
    if (!objectState_Accessor) {
      throw uci::base::UCIException("Error in enableObjectState(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *objectState_Accessor;
}

uci::type::ProductDownloadReportMT& ProductDownloadReportMT::clearObjectState() noexcept {
  objectState_Accessor.reset();
  return *this;
}

const uci::type::ProductDownloadReportMDT& ProductDownloadReportMT::getMessageData() const {
  return *messageData_Accessor;
}

uci::type::ProductDownloadReportMDT& ProductDownloadReportMT::getMessageData() {
  return *messageData_Accessor;
}

uci::type::ProductDownloadReportMT& ProductDownloadReportMT::setMessageData(const uci::type::ProductDownloadReportMDT& accessor) {
  if (&accessor != messageData_Accessor.get()) {
    messageData_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<ProductDownloadReportMT> ProductDownloadReportMT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::productDownloadReportMT : type};
  return (requestedType == uci::type::accessorType::productDownloadReportMT) ? boost::make_unique<ProductDownloadReportMT>() : nullptr;
}

/**  */
namespace ProductDownloadReportMT_Names {

constexpr const char* Extern_Top_Type_Name{"ProductDownloadReport"};
constexpr const char* Extern_Type_Name{"ProductDownloadReportMT"};
constexpr const char* ObjectState_Name{"ObjectState"};
constexpr const char* MessageData_Name{"MessageData"};

} // namespace ProductDownloadReportMT_Names

void ProductDownloadReportMT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ProductDownloadReportMT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = (topLevel ? ProductDownloadReportMT_Names::Extern_Top_Type_Name : ProductDownloadReportMT_Names::Extern_Type_Name);
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ProductDownloadReportMT_Names::ObjectState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableObjectState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ProductDownloadReportMT_Names::MessageData_Name) {
      ProductDownloadReportMDT::deserialize(valueType.second, accessor.getMessageData(), nodeName, nsPrefix);
    }
  }
  MessageType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string ProductDownloadReportMT::serialize(const uci::type::ProductDownloadReportMT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool topLevel) {
  std::string generatedNodeName{(nodeName.empty() ? (topLevel ? ProductDownloadReportMT_Names::Extern_Top_Type_Name : ProductDownloadReportMT_Names::Extern_Type_Name) : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, (topLevel ? ProductDownloadReportMT_Names::Extern_Top_Type_Name : ProductDownloadReportMT_Names::Extern_Type_Name));
  }
  MessageType::serialize(accessor, node, "", false, false, false);
  if (accessor.hasObjectState()) {
    ObjectStateEnum::serialize(accessor.getObjectState(), node, ProductDownloadReportMT_Names::ObjectState_Name, false);
  }
  ProductDownloadReportMDT::serialize(accessor.getMessageData(), node, ProductDownloadReportMT_Names::MessageData_Name);
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

uci::type::ProductDownloadReportMT& ProductDownloadReportMT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ProductDownloadReportMT>().release());
}

uci::type::ProductDownloadReportMT& ProductDownloadReportMT::create(const uci::type::ProductDownloadReportMT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ProductDownloadReportMT> newAccessor{boost::make_unique<asb_uci::type::ProductDownloadReportMT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ProductDownloadReportMT::destroy(uci::type::ProductDownloadReportMT& accessor) {
  delete dynamic_cast<asb_uci::type::ProductDownloadReportMT*>(&accessor);
}

ProductDownloadReportMT::Reader& ProductDownloadReportMT::createReader(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Reader<ProductDownloadReportMT, asb_uci::type::ProductDownloadReportMT>> reader{boost::make_unique<asb_uci::base::Reader<ProductDownloadReportMT, asb_uci::type::ProductDownloadReportMT>>(topic, abstractServiceBusConnection)};
  reader->init();
  return *(reader.release());
}

void ProductDownloadReportMT::destroyReader(ProductDownloadReportMT::Reader& reader) {
  delete dynamic_cast<asb_uci::base::Reader<ProductDownloadReportMT, asb_uci::type::ProductDownloadReportMT>*>(&reader);
}

ProductDownloadReportMT::Writer& ProductDownloadReportMT::createWriter(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection) {
  std::unique_ptr<asb_uci::base::Writer<ProductDownloadReportMT, asb_uci::type::ProductDownloadReportMT>> writer{boost::make_unique<asb_uci::base::Writer<ProductDownloadReportMT, asb_uci::type::ProductDownloadReportMT>>(topic, abstractServiceBusConnection)};
  writer->init();
  return *(writer.release());
}

void ProductDownloadReportMT::destroyWriter(ProductDownloadReportMT::Writer& writer) {
  delete dynamic_cast<asb_uci::base::Writer<ProductDownloadReportMT, asb_uci::type::ProductDownloadReportMT>*>(&writer);
}

} // namespace type

} // namespace uci

