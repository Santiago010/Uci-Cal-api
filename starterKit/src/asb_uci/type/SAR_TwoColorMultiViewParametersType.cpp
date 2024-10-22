/** @file SAR_TwoColorMultiViewParametersType.cpp
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

#include "../../../include/asb_uci/type/SAR_TwoColorMultiViewParametersType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ImagePixelDepthEnum.h"
#include "../../../include/asb_uci/type/ProductMetadataID_Type.h"
#include "../../../include/asb_uci/type/SAR_ProcessingParametersType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ImagePixelDepthEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductMetadataID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SAR_TwoColorMultiViewParametersType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SAR_TwoColorMultiViewParametersType::SAR_TwoColorMultiViewParametersType()
  : pixelDepth_Accessor{boost::make_unique<ImagePixelDepthEnum>()},
    referenceID_Accessor{boost::make_unique<ProductMetadataID_Type>()},
    matchID_Accessor{boost::make_unique<ProductMetadataID_Type>()} {
}

SAR_TwoColorMultiViewParametersType::~SAR_TwoColorMultiViewParametersType() = default;

void SAR_TwoColorMultiViewParametersType::copy(const uci::type::SAR_TwoColorMultiViewParametersType& accessor) {
  copyImpl(accessor, false);
}

void SAR_TwoColorMultiViewParametersType::copyImpl(const uci::type::SAR_TwoColorMultiViewParametersType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    SAR_ProcessingParametersType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const SAR_TwoColorMultiViewParametersType&>(accessor);
    setPixelDepth(*(accessorImpl.pixelDepth_Accessor));
    setReferenceID(*(accessorImpl.referenceID_Accessor));
    setMatchID(*(accessorImpl.matchID_Accessor));
  }
}

void SAR_TwoColorMultiViewParametersType::reset() noexcept {
  SAR_ProcessingParametersType::reset();
  pixelDepth_Accessor->reset();
  referenceID_Accessor->reset();
  matchID_Accessor->reset();
}

const uci::type::ImagePixelDepthEnum& SAR_TwoColorMultiViewParametersType::getPixelDepth() const {
  return *pixelDepth_Accessor;
}

uci::type::ImagePixelDepthEnum& SAR_TwoColorMultiViewParametersType::getPixelDepth() {
  return *pixelDepth_Accessor;
}

uci::type::SAR_TwoColorMultiViewParametersType& SAR_TwoColorMultiViewParametersType::setPixelDepth(const uci::type::ImagePixelDepthEnum& accessor) {
  if (&accessor != pixelDepth_Accessor.get()) {
    pixelDepth_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::SAR_TwoColorMultiViewParametersType& SAR_TwoColorMultiViewParametersType::setPixelDepth(uci::type::ImagePixelDepthEnum::EnumerationItem value) {
  pixelDepth_Accessor->setValue(value);
  return *this;
}


const uci::type::ProductMetadataID_Type& SAR_TwoColorMultiViewParametersType::getReferenceID() const {
  return *referenceID_Accessor;
}

uci::type::ProductMetadataID_Type& SAR_TwoColorMultiViewParametersType::getReferenceID() {
  return *referenceID_Accessor;
}

uci::type::SAR_TwoColorMultiViewParametersType& SAR_TwoColorMultiViewParametersType::setReferenceID(const uci::type::ProductMetadataID_Type& accessor) {
  if (&accessor != referenceID_Accessor.get()) {
    referenceID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ProductMetadataID_Type& SAR_TwoColorMultiViewParametersType::getMatchID() const {
  return *matchID_Accessor;
}

uci::type::ProductMetadataID_Type& SAR_TwoColorMultiViewParametersType::getMatchID() {
  return *matchID_Accessor;
}

uci::type::SAR_TwoColorMultiViewParametersType& SAR_TwoColorMultiViewParametersType::setMatchID(const uci::type::ProductMetadataID_Type& accessor) {
  if (&accessor != matchID_Accessor.get()) {
    matchID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<SAR_TwoColorMultiViewParametersType> SAR_TwoColorMultiViewParametersType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::sAR_TwoColorMultiViewParametersType : type};
  return (requestedType == uci::type::accessorType::sAR_TwoColorMultiViewParametersType) ? boost::make_unique<SAR_TwoColorMultiViewParametersType>() : nullptr;
}

/**  */
namespace SAR_TwoColorMultiViewParametersType_Names {

constexpr const char* Extern_Type_Name{"SAR_TwoColorMultiViewParametersType"};
constexpr const char* PixelDepth_Name{"PixelDepth"};
constexpr const char* ReferenceID_Name{"ReferenceID"};
constexpr const char* MatchID_Name{"MatchID"};

} // namespace SAR_TwoColorMultiViewParametersType_Names

void SAR_TwoColorMultiViewParametersType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SAR_TwoColorMultiViewParametersType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SAR_TwoColorMultiViewParametersType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SAR_TwoColorMultiViewParametersType_Names::PixelDepth_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getPixelDepth().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + SAR_TwoColorMultiViewParametersType_Names::ReferenceID_Name) {
      ProductMetadataID_Type::deserialize(valueType.second, accessor.getReferenceID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SAR_TwoColorMultiViewParametersType_Names::MatchID_Name) {
      ProductMetadataID_Type::deserialize(valueType.second, accessor.getMatchID(), nodeName, nsPrefix);
    }
  }
  SAR_ProcessingParametersType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string SAR_TwoColorMultiViewParametersType::serialize(const uci::type::SAR_TwoColorMultiViewParametersType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SAR_TwoColorMultiViewParametersType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SAR_TwoColorMultiViewParametersType_Names::Extern_Type_Name);
  }
  SAR_ProcessingParametersType::serialize(accessor, node, "", false, false, false);
  ImagePixelDepthEnum::serialize(accessor.getPixelDepth(), node, SAR_TwoColorMultiViewParametersType_Names::PixelDepth_Name, false);
  ProductMetadataID_Type::serialize(accessor.getReferenceID(), node, SAR_TwoColorMultiViewParametersType_Names::ReferenceID_Name);
  ProductMetadataID_Type::serialize(accessor.getMatchID(), node, SAR_TwoColorMultiViewParametersType_Names::MatchID_Name);
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

uci::type::SAR_TwoColorMultiViewParametersType& SAR_TwoColorMultiViewParametersType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SAR_TwoColorMultiViewParametersType>().release());
}

uci::type::SAR_TwoColorMultiViewParametersType& SAR_TwoColorMultiViewParametersType::create(const uci::type::SAR_TwoColorMultiViewParametersType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SAR_TwoColorMultiViewParametersType> newAccessor{boost::make_unique<asb_uci::type::SAR_TwoColorMultiViewParametersType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SAR_TwoColorMultiViewParametersType::destroy(uci::type::SAR_TwoColorMultiViewParametersType& accessor) {
  delete dynamic_cast<asb_uci::type::SAR_TwoColorMultiViewParametersType*>(&accessor);
}

} // namespace type

} // namespace uci

