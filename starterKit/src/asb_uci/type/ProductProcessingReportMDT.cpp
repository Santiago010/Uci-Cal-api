/** @file ProductProcessingReportMDT.cpp
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

#include "../../../include/asb_uci/type/ProductProcessingReportMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CapabilityID_Type.h"
#include "../../../include/asb_uci/type/ProcessingReportType.h"
#include "../../../include/asb_uci/type/ProductProcessingReportID_Type.h"
#include "../../../include/asb_uci/type/SystemID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProcessingReportType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductProcessingReportID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductProcessingReportMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ProductProcessingReportMDT::ProductProcessingReportMDT()
  : productProcessingReportID_Accessor{boost::make_unique<ProductProcessingReportID_Type>()},
    systemID_Accessor{boost::make_unique<SystemID_Type>()},
    processingReport_Accessor{boost::make_unique<ProcessingReportType>()} {
}

ProductProcessingReportMDT::~ProductProcessingReportMDT() = default;

void ProductProcessingReportMDT::copy(const uci::type::ProductProcessingReportMDT& accessor) {
  copyImpl(accessor, false);
}

void ProductProcessingReportMDT::copyImpl(const uci::type::ProductProcessingReportMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const ProductProcessingReportMDT&>(accessor);
    setProductProcessingReportID(*(accessorImpl.productProcessingReportID_Accessor));
    setSystemID(*(accessorImpl.systemID_Accessor));
    if (accessorImpl.capabilityID_Accessor) {
      setCapabilityID(*(accessorImpl.capabilityID_Accessor));
    } else {
      capabilityID_Accessor.reset();
    }
    setProcessingReport(*(accessorImpl.processingReport_Accessor));
  }
}

void ProductProcessingReportMDT::reset() noexcept {
  productProcessingReportID_Accessor->reset();
  systemID_Accessor->reset();
  capabilityID_Accessor.reset();
  processingReport_Accessor->reset();
}

const uci::type::ProductProcessingReportID_Type& ProductProcessingReportMDT::getProductProcessingReportID() const {
  return *productProcessingReportID_Accessor;
}

uci::type::ProductProcessingReportID_Type& ProductProcessingReportMDT::getProductProcessingReportID() {
  return *productProcessingReportID_Accessor;
}

uci::type::ProductProcessingReportMDT& ProductProcessingReportMDT::setProductProcessingReportID(const uci::type::ProductProcessingReportID_Type& accessor) {
  if (&accessor != productProcessingReportID_Accessor.get()) {
    productProcessingReportID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SystemID_Type& ProductProcessingReportMDT::getSystemID() const {
  return *systemID_Accessor;
}

uci::type::SystemID_Type& ProductProcessingReportMDT::getSystemID() {
  return *systemID_Accessor;
}

uci::type::ProductProcessingReportMDT& ProductProcessingReportMDT::setSystemID(const uci::type::SystemID_Type& accessor) {
  if (&accessor != systemID_Accessor.get()) {
    systemID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::CapabilityID_Type& ProductProcessingReportMDT::getCapabilityID_() const {
  if (capabilityID_Accessor) {
    return *capabilityID_Accessor;
  }
  throw uci::base::UCIException("Error in getCapabilityID(): An attempt was made to get an optional field that was not enabled, call hasCapabilityID() to determine if it is safe to call getCapabilityID()");
}

const uci::type::CapabilityID_Type& ProductProcessingReportMDT::getCapabilityID() const {
  return getCapabilityID_();
}

uci::type::CapabilityID_Type& ProductProcessingReportMDT::getCapabilityID() {
  return getCapabilityID_();
}

uci::type::ProductProcessingReportMDT& ProductProcessingReportMDT::setCapabilityID(const uci::type::CapabilityID_Type& accessor) {
  enableCapabilityID();
  if (&accessor != capabilityID_Accessor.get()) {
    capabilityID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool ProductProcessingReportMDT::hasCapabilityID() const noexcept {
  return static_cast<bool>(capabilityID_Accessor);
}

uci::type::CapabilityID_Type& ProductProcessingReportMDT::enableCapabilityID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::capabilityID_Type : type};
  if ((!capabilityID_Accessor) || (capabilityID_Accessor->getAccessorType() != requestedType)) {
    capabilityID_Accessor = CapabilityID_Type::create(requestedType);
    if (!capabilityID_Accessor) {
      throw uci::base::UCIException("Error in enableCapabilityID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *capabilityID_Accessor;
}

uci::type::ProductProcessingReportMDT& ProductProcessingReportMDT::clearCapabilityID() noexcept {
  capabilityID_Accessor.reset();
  return *this;
}

const uci::type::ProcessingReportType& ProductProcessingReportMDT::getProcessingReport() const {
  return *processingReport_Accessor;
}

uci::type::ProcessingReportType& ProductProcessingReportMDT::getProcessingReport() {
  return *processingReport_Accessor;
}

uci::type::ProductProcessingReportMDT& ProductProcessingReportMDT::setProcessingReport(const uci::type::ProcessingReportType& accessor) {
  if (&accessor != processingReport_Accessor.get()) {
    processingReport_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<ProductProcessingReportMDT> ProductProcessingReportMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::productProcessingReportMDT : type};
  return (requestedType == uci::type::accessorType::productProcessingReportMDT) ? boost::make_unique<ProductProcessingReportMDT>() : nullptr;
}

/**  */
namespace ProductProcessingReportMDT_Names {

constexpr const char* Extern_Type_Name{"ProductProcessingReportMDT"};
constexpr const char* ProductProcessingReportID_Name{"ProductProcessingReportID"};
constexpr const char* SystemID_Name{"SystemID"};
constexpr const char* CapabilityID_Name{"CapabilityID"};
constexpr const char* ProcessingReport_Name{"ProcessingReport"};

} // namespace ProductProcessingReportMDT_Names

void ProductProcessingReportMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ProductProcessingReportMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ProductProcessingReportMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ProductProcessingReportMDT_Names::ProductProcessingReportID_Name) {
      ProductProcessingReportID_Type::deserialize(valueType.second, accessor.getProductProcessingReportID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ProductProcessingReportMDT_Names::SystemID_Name) {
      SystemID_Type::deserialize(valueType.second, accessor.getSystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ProductProcessingReportMDT_Names::CapabilityID_Name) {
      CapabilityID_Type::deserialize(valueType.second, accessor.enableCapabilityID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ProductProcessingReportMDT_Names::ProcessingReport_Name) {
      ProcessingReportType::deserialize(valueType.second, accessor.getProcessingReport(), nodeName, nsPrefix);
    }
  }
}

std::string ProductProcessingReportMDT::serialize(const uci::type::ProductProcessingReportMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ProductProcessingReportMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ProductProcessingReportMDT_Names::Extern_Type_Name);
  }
  ProductProcessingReportID_Type::serialize(accessor.getProductProcessingReportID(), node, ProductProcessingReportMDT_Names::ProductProcessingReportID_Name);
  SystemID_Type::serialize(accessor.getSystemID(), node, ProductProcessingReportMDT_Names::SystemID_Name);
  if (accessor.hasCapabilityID()) {
    CapabilityID_Type::serialize(accessor.getCapabilityID(), node, ProductProcessingReportMDT_Names::CapabilityID_Name);
  }
  ProcessingReportType::serialize(accessor.getProcessingReport(), node, ProductProcessingReportMDT_Names::ProcessingReport_Name);
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

uci::type::ProductProcessingReportMDT& ProductProcessingReportMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ProductProcessingReportMDT>().release());
}

uci::type::ProductProcessingReportMDT& ProductProcessingReportMDT::create(const uci::type::ProductProcessingReportMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ProductProcessingReportMDT> newAccessor{boost::make_unique<asb_uci::type::ProductProcessingReportMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ProductProcessingReportMDT::destroy(uci::type::ProductProcessingReportMDT& accessor) {
  delete dynamic_cast<asb_uci::type::ProductProcessingReportMDT*>(&accessor);
}

} // namespace type

} // namespace uci

