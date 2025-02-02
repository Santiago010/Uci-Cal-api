/** @file ProductReferenceType.cpp
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

#include "../../../include/asb_uci/type/ProductReferenceType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/FileNameType.h"
#include "../../../include/asb_uci/type/ProductMetadataID_Type.h"
#include "../../../include/asb_uci/type/ProductReferenceByParentType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/FileNameType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductMetadataID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductReferenceByParentType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductReferenceType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ProductReferenceType::ProductReferenceType() = default;

ProductReferenceType::~ProductReferenceType() = default;

void ProductReferenceType::copy(const uci::type::ProductReferenceType& accessor) {
  copyImpl(accessor, false);
}

void ProductReferenceType::copyImpl(const uci::type::ProductReferenceType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const ProductReferenceType&>(accessor);
    if (accessorImpl.fileName_Accessor) {
      setFileName(*(accessorImpl.fileName_Accessor));
    } else {
      fileName_Accessor.reset();
    }
    if (accessorImpl.productMetadataID_Accessor) {
      setProductMetadataID(*(accessorImpl.productMetadataID_Accessor));
    } else {
      productMetadataID_Accessor.reset();
    }
    if (accessorImpl.productReferenceByParent_Accessor) {
      setProductReferenceByParent(*(accessorImpl.productReferenceByParent_Accessor));
    } else {
      productReferenceByParent_Accessor.reset();
    }
  }
}

void ProductReferenceType::reset() noexcept {
  fileName_Accessor.reset();
  productMetadataID_Accessor.reset();
  productReferenceByParent_Accessor.reset();
}

uci::type::ProductReferenceType::ProductReferenceTypeChoice ProductReferenceType::getProductReferenceTypeChoiceOrdinal() const noexcept {
  if (fileName_Accessor) {
    return PRODUCTREFERENCETYPE_CHOICE_FILENAME;
  }
  if (productMetadataID_Accessor) {
    return PRODUCTREFERENCETYPE_CHOICE_PRODUCTMETADATAID;
  }
  if (productReferenceByParent_Accessor) {
    return PRODUCTREFERENCETYPE_CHOICE_PRODUCTREFERENCEBYPARENT;
  }
  return PRODUCTREFERENCETYPE_CHOICE_NONE;
}

uci::type::ProductReferenceType& ProductReferenceType::setProductReferenceTypeChoiceOrdinal(uci::type::ProductReferenceType::ProductReferenceTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case PRODUCTREFERENCETYPE_CHOICE_FILENAME:
      chooseFileName("setProductReferenceTypeChoiceOrdinal", type);
      break;
    case PRODUCTREFERENCETYPE_CHOICE_PRODUCTMETADATAID:
      chooseProductMetadataID("setProductReferenceTypeChoiceOrdinal", type);
      break;
    case PRODUCTREFERENCETYPE_CHOICE_PRODUCTREFERENCEBYPARENT:
      chooseProductReferenceByParent("setProductReferenceTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setProductReferenceTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::FileNameType& ProductReferenceType::getFileName_() const {
  if (fileName_Accessor) {
    return *fileName_Accessor;
  }
  throw uci::base::UCIException("Error in getFileName(): An attempt was made to get an optional field that was not enabled, call hasFileName() to determine if it is safe to call getFileName()");
}

const uci::type::FileNameType& ProductReferenceType::getFileName() const {
  return getFileName_();
}

uci::type::FileNameType& ProductReferenceType::getFileName() {
  return getFileName_();
}

uci::type::ProductReferenceType& ProductReferenceType::setFileName(const uci::type::FileNameType& value) {
  return setFileName(value.c_str());
}

uci::type::ProductReferenceType& ProductReferenceType::setFileName(const std::string& value) {
  return setFileName(value.c_str());
}

uci::type::ProductReferenceType& ProductReferenceType::setFileName(const char * value) {
  chooseFileName().setStringValue(value);
  return *this;
}

bool ProductReferenceType::isFileName() const noexcept {
  return static_cast<bool>(fileName_Accessor);
}

uci::type::FileNameType& ProductReferenceType::chooseFileName(const std::string& /*method*/, uci::base::accessorType::AccessorType type) {
  productMetadataID_Accessor.reset();
  productReferenceByParent_Accessor.reset();
  if (!fileName_Accessor) {
    fileName_Accessor = FileNameType::create(type);
  }
  return *fileName_Accessor;
}

uci::type::FileNameType& ProductReferenceType::chooseFileName(uci::base::accessorType::AccessorType type) {
  return chooseFileName("chooseFileName", type);
}

uci::type::ProductMetadataID_Type& ProductReferenceType::getProductMetadataID_() const {
  if (productMetadataID_Accessor) {
    return *productMetadataID_Accessor;
  }
  throw uci::base::UCIException("Error in getProductMetadataID(): Unable to get ProductMetadataID, field not selected");
}

const uci::type::ProductMetadataID_Type& ProductReferenceType::getProductMetadataID() const {
  return getProductMetadataID_();
}

uci::type::ProductMetadataID_Type& ProductReferenceType::getProductMetadataID() {
  return getProductMetadataID_();
}

uci::type::ProductReferenceType& ProductReferenceType::setProductMetadataID(const uci::type::ProductMetadataID_Type& accessor) {
  chooseProductMetadataID();
  if (&accessor != productMetadataID_Accessor.get()) {
    productMetadataID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool ProductReferenceType::isProductMetadataID() const noexcept {
  return static_cast<bool>(productMetadataID_Accessor);
}

uci::type::ProductMetadataID_Type& ProductReferenceType::chooseProductMetadataID(const std::string& method, uci::base::accessorType::AccessorType type) {
  fileName_Accessor.reset();
  productReferenceByParent_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::productMetadataID_Type : type};
  if ((!productMetadataID_Accessor) || (productMetadataID_Accessor->getAccessorType() != requestedType)) {
    productMetadataID_Accessor = ProductMetadataID_Type::create(type);
    if (!productMetadataID_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *productMetadataID_Accessor;
}

uci::type::ProductMetadataID_Type& ProductReferenceType::chooseProductMetadataID(uci::base::accessorType::AccessorType type) {
  return chooseProductMetadataID("chooseProductMetadataID", type);
}

uci::type::ProductReferenceByParentType& ProductReferenceType::getProductReferenceByParent_() const {
  if (productReferenceByParent_Accessor) {
    return *productReferenceByParent_Accessor;
  }
  throw uci::base::UCIException("Error in getProductReferenceByParent(): Unable to get ProductReferenceByParent, field not selected");
}

const uci::type::ProductReferenceByParentType& ProductReferenceType::getProductReferenceByParent() const {
  return getProductReferenceByParent_();
}

uci::type::ProductReferenceByParentType& ProductReferenceType::getProductReferenceByParent() {
  return getProductReferenceByParent_();
}

uci::type::ProductReferenceType& ProductReferenceType::setProductReferenceByParent(const uci::type::ProductReferenceByParentType& accessor) {
  chooseProductReferenceByParent();
  if (&accessor != productReferenceByParent_Accessor.get()) {
    productReferenceByParent_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool ProductReferenceType::isProductReferenceByParent() const noexcept {
  return static_cast<bool>(productReferenceByParent_Accessor);
}

uci::type::ProductReferenceByParentType& ProductReferenceType::chooseProductReferenceByParent(const std::string& method, uci::base::accessorType::AccessorType type) {
  fileName_Accessor.reset();
  productMetadataID_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::productReferenceByParentType : type};
  if ((!productReferenceByParent_Accessor) || (productReferenceByParent_Accessor->getAccessorType() != requestedType)) {
    productReferenceByParent_Accessor = ProductReferenceByParentType::create(type);
    if (!productReferenceByParent_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *productReferenceByParent_Accessor;
}

uci::type::ProductReferenceByParentType& ProductReferenceType::chooseProductReferenceByParent(uci::base::accessorType::AccessorType type) {
  return chooseProductReferenceByParent("chooseProductReferenceByParent", type);
}

std::unique_ptr<ProductReferenceType> ProductReferenceType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::productReferenceType : type};
  return (requestedType == uci::type::accessorType::productReferenceType) ? boost::make_unique<ProductReferenceType>() : nullptr;
}

/**  */
namespace ProductReferenceType_Names {

constexpr const char* Extern_Type_Name{"ProductReferenceType"};
constexpr const char* FileName_Name{"FileName"};
constexpr const char* ProductMetadataID_Name{"ProductMetadataID"};
constexpr const char* ProductReferenceByParent_Name{"ProductReferenceByParent"};

} // namespace ProductReferenceType_Names

void ProductReferenceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ProductReferenceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ProductReferenceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ProductReferenceType_Names::FileName_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.chooseFileName().setStringValue(*value);
      }
    } else if (valueType.first == nsPrefix + ProductReferenceType_Names::ProductMetadataID_Name) {
      ProductMetadataID_Type::deserialize(valueType.second, accessor.chooseProductMetadataID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ProductReferenceType_Names::ProductReferenceByParent_Name) {
      ProductReferenceByParentType::deserialize(valueType.second, accessor.chooseProductReferenceByParent(), nodeName, nsPrefix);
    }
  }
}

std::string ProductReferenceType::serialize(const uci::type::ProductReferenceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ProductReferenceType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ProductReferenceType_Names::Extern_Type_Name);
  }
  if (accessor.isFileName()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getFileName(), node, ProductReferenceType_Names::FileName_Name);
  } else if (accessor.isProductMetadataID()) {
    ProductMetadataID_Type::serialize(accessor.getProductMetadataID(), node, ProductReferenceType_Names::ProductMetadataID_Name);
  } else if (accessor.isProductReferenceByParent()) {
    ProductReferenceByParentType::serialize(accessor.getProductReferenceByParent(), node, ProductReferenceType_Names::ProductReferenceByParent_Name);
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

uci::type::ProductReferenceType& ProductReferenceType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ProductReferenceType>().release());
}

uci::type::ProductReferenceType& ProductReferenceType::create(const uci::type::ProductReferenceType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ProductReferenceType> newAccessor{boost::make_unique<asb_uci::type::ProductReferenceType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ProductReferenceType::destroy(uci::type::ProductReferenceType& accessor) {
  delete dynamic_cast<asb_uci::type::ProductReferenceType*>(&accessor);
}

} // namespace type

} // namespace uci

