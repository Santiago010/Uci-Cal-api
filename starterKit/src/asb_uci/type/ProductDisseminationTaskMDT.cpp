/** @file ProductDisseminationTaskMDT.cpp
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

#include "../../../include/asb_uci/type/ProductDisseminationTaskMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/DisseminationRequirementsType.h"
#include "../../../include/asb_uci/type/ProductManagementTaskDataType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DisseminationRequirementsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductDisseminationTaskMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ProductDisseminationTaskMDT::ProductDisseminationTaskMDT()
  : disseminationRequirements_Accessor{boost::make_unique<DisseminationRequirementsType>()} {
}

ProductDisseminationTaskMDT::~ProductDisseminationTaskMDT() = default;

void ProductDisseminationTaskMDT::copy(const uci::type::ProductDisseminationTaskMDT& accessor) {
  copyImpl(accessor, false);
}

void ProductDisseminationTaskMDT::copyImpl(const uci::type::ProductDisseminationTaskMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    ProductManagementTaskDataType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const ProductDisseminationTaskMDT&>(accessor);
    setDisseminationRequirements(*(accessorImpl.disseminationRequirements_Accessor));
  }
}

void ProductDisseminationTaskMDT::reset() noexcept {
  ProductManagementTaskDataType::reset();
  disseminationRequirements_Accessor->reset();
}

const uci::type::DisseminationRequirementsType& ProductDisseminationTaskMDT::getDisseminationRequirements() const {
  return *disseminationRequirements_Accessor;
}

uci::type::DisseminationRequirementsType& ProductDisseminationTaskMDT::getDisseminationRequirements() {
  return *disseminationRequirements_Accessor;
}

uci::type::ProductDisseminationTaskMDT& ProductDisseminationTaskMDT::setDisseminationRequirements(const uci::type::DisseminationRequirementsType& accessor) {
  if (&accessor != disseminationRequirements_Accessor.get()) {
    disseminationRequirements_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<ProductDisseminationTaskMDT> ProductDisseminationTaskMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::productDisseminationTaskMDT : type};
  return (requestedType == uci::type::accessorType::productDisseminationTaskMDT) ? boost::make_unique<ProductDisseminationTaskMDT>() : nullptr;
}

/**  */
namespace ProductDisseminationTaskMDT_Names {

constexpr const char* Extern_Type_Name{"ProductDisseminationTaskMDT"};
constexpr const char* DisseminationRequirements_Name{"DisseminationRequirements"};

} // namespace ProductDisseminationTaskMDT_Names

void ProductDisseminationTaskMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ProductDisseminationTaskMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ProductDisseminationTaskMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ProductDisseminationTaskMDT_Names::DisseminationRequirements_Name) {
      DisseminationRequirementsType::deserialize(valueType.second, accessor.getDisseminationRequirements(), nodeName, nsPrefix);
    }
  }
  ProductManagementTaskDataType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string ProductDisseminationTaskMDT::serialize(const uci::type::ProductDisseminationTaskMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ProductDisseminationTaskMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ProductDisseminationTaskMDT_Names::Extern_Type_Name);
  }
  ProductManagementTaskDataType::serialize(accessor, node, "", false, false, false);
  DisseminationRequirementsType::serialize(accessor.getDisseminationRequirements(), node, ProductDisseminationTaskMDT_Names::DisseminationRequirements_Name);
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

uci::type::ProductDisseminationTaskMDT& ProductDisseminationTaskMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ProductDisseminationTaskMDT>().release());
}

uci::type::ProductDisseminationTaskMDT& ProductDisseminationTaskMDT::create(const uci::type::ProductDisseminationTaskMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ProductDisseminationTaskMDT> newAccessor{boost::make_unique<asb_uci::type::ProductDisseminationTaskMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ProductDisseminationTaskMDT::destroy(uci::type::ProductDisseminationTaskMDT& accessor) {
  delete dynamic_cast<asb_uci::type::ProductDisseminationTaskMDT*>(&accessor);
}

} // namespace type

} // namespace uci

