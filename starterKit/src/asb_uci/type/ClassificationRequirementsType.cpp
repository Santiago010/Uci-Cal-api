/** @file ClassificationRequirementsType.cpp
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

#include "../../../include/asb_uci/type/ClassificationRequirementsType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/InputProductType.h"
#include "../../../include/asb_uci/type/SecurityInformationType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ClassificationRequirementsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/InputProductType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SecurityInformationType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ClassificationRequirementsType::ClassificationRequirementsType()
  : inputProduct_Accessor{boost::make_unique<InputProduct>(1, SIZE_MAX)} {
}

ClassificationRequirementsType::~ClassificationRequirementsType() = default;

void ClassificationRequirementsType::copy(const uci::type::ClassificationRequirementsType& accessor) {
  copyImpl(accessor, false);
}

void ClassificationRequirementsType::copyImpl(const uci::type::ClassificationRequirementsType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const ClassificationRequirementsType&>(accessor);
    setInputProduct(*(accessorImpl.inputProduct_Accessor));
    if (accessorImpl.classification_Accessor) {
      setClassification(*(accessorImpl.classification_Accessor));
    } else {
      classification_Accessor.reset();
    }
  }
}

void ClassificationRequirementsType::reset() noexcept {
  inputProduct_Accessor->reset();
  classification_Accessor.reset();
}

const uci::type::ClassificationRequirementsType::InputProduct& ClassificationRequirementsType::getInputProduct() const {
  return *inputProduct_Accessor;
}

uci::type::ClassificationRequirementsType::InputProduct& ClassificationRequirementsType::getInputProduct() {
  return *inputProduct_Accessor;
}

uci::type::ClassificationRequirementsType& ClassificationRequirementsType::setInputProduct(const uci::type::ClassificationRequirementsType::InputProduct& accessor) {
  if (&accessor != inputProduct_Accessor.get()) {
    inputProduct_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::SecurityInformationType& ClassificationRequirementsType::getClassification_() const {
  if (classification_Accessor) {
    return *classification_Accessor;
  }
  throw uci::base::UCIException("Error in getClassification(): An attempt was made to get an optional field that was not enabled, call hasClassification() to determine if it is safe to call getClassification()");
}

const uci::type::SecurityInformationType& ClassificationRequirementsType::getClassification() const {
  return getClassification_();
}

uci::type::SecurityInformationType& ClassificationRequirementsType::getClassification() {
  return getClassification_();
}

uci::type::ClassificationRequirementsType& ClassificationRequirementsType::setClassification(const uci::type::SecurityInformationType& accessor) {
  enableClassification();
  if (&accessor != classification_Accessor.get()) {
    classification_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool ClassificationRequirementsType::hasClassification() const noexcept {
  return static_cast<bool>(classification_Accessor);
}

uci::type::SecurityInformationType& ClassificationRequirementsType::enableClassification(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::securityInformationType : type};
  if ((!classification_Accessor) || (classification_Accessor->getAccessorType() != requestedType)) {
    classification_Accessor = SecurityInformationType::create(requestedType);
    if (!classification_Accessor) {
      throw uci::base::UCIException("Error in enableClassification(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *classification_Accessor;
}

uci::type::ClassificationRequirementsType& ClassificationRequirementsType::clearClassification() noexcept {
  classification_Accessor.reset();
  return *this;
}

std::unique_ptr<ClassificationRequirementsType> ClassificationRequirementsType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::classificationRequirementsType : type};
  return (requestedType == uci::type::accessorType::classificationRequirementsType) ? boost::make_unique<ClassificationRequirementsType>() : nullptr;
}

/**  */
namespace ClassificationRequirementsType_Names {

constexpr const char* Extern_Type_Name{"ClassificationRequirementsType"};
constexpr const char* InputProduct_Name{"InputProduct"};
constexpr const char* Classification_Name{"Classification"};

} // namespace ClassificationRequirementsType_Names

void ClassificationRequirementsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ClassificationRequirementsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ClassificationRequirementsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ClassificationRequirementsType_Names::InputProduct_Name) {
      uci::type::ClassificationRequirementsType::InputProduct& boundedList = accessor.getInputProduct();
      const uci::type::ClassificationRequirementsType::InputProduct::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::InputProductType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ClassificationRequirementsType_Names::Classification_Name) {
      SecurityInformationType::deserialize(valueType.second, accessor.enableClassification(), nodeName, nsPrefix);
    }
  }
}

std::string ClassificationRequirementsType::serialize(const uci::type::ClassificationRequirementsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ClassificationRequirementsType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ClassificationRequirementsType_Names::Extern_Type_Name);
  }
  {
    const uci::type::ClassificationRequirementsType::InputProduct& boundedList = accessor.getInputProduct();
    for (uci::type::ClassificationRequirementsType::InputProduct::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::InputProductType::serialize(boundedList.at(i), node, ClassificationRequirementsType_Names::InputProduct_Name);
    }
  }
  if (accessor.hasClassification()) {
    SecurityInformationType::serialize(accessor.getClassification(), node, ClassificationRequirementsType_Names::Classification_Name);
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

uci::type::ClassificationRequirementsType& ClassificationRequirementsType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ClassificationRequirementsType>().release());
}

uci::type::ClassificationRequirementsType& ClassificationRequirementsType::create(const uci::type::ClassificationRequirementsType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ClassificationRequirementsType> newAccessor{boost::make_unique<asb_uci::type::ClassificationRequirementsType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ClassificationRequirementsType::destroy(uci::type::ClassificationRequirementsType& accessor) {
  delete dynamic_cast<asb_uci::type::ClassificationRequirementsType*>(&accessor);
}

} // namespace type

} // namespace uci

