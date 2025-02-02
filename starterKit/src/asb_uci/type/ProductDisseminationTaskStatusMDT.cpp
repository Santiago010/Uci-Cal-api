/** @file ProductDisseminationTaskStatusMDT.cpp
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

#include "../../../include/asb_uci/type/ProductDisseminationTaskStatusMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ProductDisseminationStatusType.h"
#include "../../../include/asb_uci/type/ProductManagementTaskStatusDataType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductDisseminationStatusType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductDisseminationTaskStatusMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ProductDisseminationTaskStatusMDT::ProductDisseminationTaskStatusMDT()
  : productDisseminationStatus_Accessor{boost::make_unique<ProductDisseminationStatus>(0, SIZE_MAX)} {
}

ProductDisseminationTaskStatusMDT::~ProductDisseminationTaskStatusMDT() = default;

void ProductDisseminationTaskStatusMDT::copy(const uci::type::ProductDisseminationTaskStatusMDT& accessor) {
  copyImpl(accessor, false);
}

void ProductDisseminationTaskStatusMDT::copyImpl(const uci::type::ProductDisseminationTaskStatusMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    ProductManagementTaskStatusDataType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const ProductDisseminationTaskStatusMDT&>(accessor);
    setProductDisseminationStatus(*(accessorImpl.productDisseminationStatus_Accessor));
  }
}

void ProductDisseminationTaskStatusMDT::reset() noexcept {
  ProductManagementTaskStatusDataType::reset();
  productDisseminationStatus_Accessor->reset();
}

const uci::type::ProductDisseminationTaskStatusMDT::ProductDisseminationStatus& ProductDisseminationTaskStatusMDT::getProductDisseminationStatus() const {
  return *productDisseminationStatus_Accessor;
}

uci::type::ProductDisseminationTaskStatusMDT::ProductDisseminationStatus& ProductDisseminationTaskStatusMDT::getProductDisseminationStatus() {
  return *productDisseminationStatus_Accessor;
}

uci::type::ProductDisseminationTaskStatusMDT& ProductDisseminationTaskStatusMDT::setProductDisseminationStatus(const uci::type::ProductDisseminationTaskStatusMDT::ProductDisseminationStatus& accessor) {
  if (&accessor != productDisseminationStatus_Accessor.get()) {
    productDisseminationStatus_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<ProductDisseminationTaskStatusMDT> ProductDisseminationTaskStatusMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::productDisseminationTaskStatusMDT : type};
  return (requestedType == uci::type::accessorType::productDisseminationTaskStatusMDT) ? boost::make_unique<ProductDisseminationTaskStatusMDT>() : nullptr;
}

/**  */
namespace ProductDisseminationTaskStatusMDT_Names {

constexpr const char* Extern_Type_Name{"ProductDisseminationTaskStatusMDT"};
constexpr const char* ProductDisseminationStatus_Name{"ProductDisseminationStatus"};

} // namespace ProductDisseminationTaskStatusMDT_Names

void ProductDisseminationTaskStatusMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ProductDisseminationTaskStatusMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ProductDisseminationTaskStatusMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ProductDisseminationTaskStatusMDT_Names::ProductDisseminationStatus_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ProductDisseminationTaskStatusMDT::ProductDisseminationStatus& boundedList = accessor.getProductDisseminationStatus();
        const uci::type::ProductDisseminationTaskStatusMDT::ProductDisseminationStatus::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::ProductDisseminationStatusType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  ProductManagementTaskStatusDataType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string ProductDisseminationTaskStatusMDT::serialize(const uci::type::ProductDisseminationTaskStatusMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ProductDisseminationTaskStatusMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ProductDisseminationTaskStatusMDT_Names::Extern_Type_Name);
  }
  ProductManagementTaskStatusDataType::serialize(accessor, node, "", false, false, false);
  {
    const uci::type::ProductDisseminationTaskStatusMDT::ProductDisseminationStatus& boundedList = accessor.getProductDisseminationStatus();
    for (uci::type::ProductDisseminationTaskStatusMDT::ProductDisseminationStatus::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ProductDisseminationStatusType::serialize(boundedList.at(i), node, ProductDisseminationTaskStatusMDT_Names::ProductDisseminationStatus_Name);
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

uci::type::ProductDisseminationTaskStatusMDT& ProductDisseminationTaskStatusMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ProductDisseminationTaskStatusMDT>().release());
}

uci::type::ProductDisseminationTaskStatusMDT& ProductDisseminationTaskStatusMDT::create(const uci::type::ProductDisseminationTaskStatusMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ProductDisseminationTaskStatusMDT> newAccessor{boost::make_unique<asb_uci::type::ProductDisseminationTaskStatusMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ProductDisseminationTaskStatusMDT::destroy(uci::type::ProductDisseminationTaskStatusMDT& accessor) {
  delete dynamic_cast<asb_uci::type::ProductDisseminationTaskStatusMDT*>(&accessor);
}

} // namespace type

} // namespace uci

