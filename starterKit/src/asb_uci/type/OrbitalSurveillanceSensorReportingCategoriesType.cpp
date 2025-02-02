/** @file OrbitalSurveillanceSensorReportingCategoriesType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:13 PM
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

#include "../../../include/asb_uci/type/OrbitalSurveillanceSensorReportingCategoriesType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ComparableRankingType.h"
#include "../../../include/asb_uci/type/ProductNeededByType.h"
#include "../../../include/asb_uci/type/ReportToType.h"
#include "../../../include/asb_uci/type/SDA_SpecialInstructionsConstraintType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ComparableRankingType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitalSurveillanceSensorReportingCategoriesType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductNeededByType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ReportToType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SDA_SpecialInstructionsConstraintType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OrbitalSurveillanceSensorReportingCategoriesType::OrbitalSurveillanceSensorReportingCategoriesType()
  : sDA_SpecialInstructions_Accessor{boost::make_unique<SDA_SpecialInstructionsConstraintType>()},
    relativePriority_Accessor{boost::make_unique<ComparableRankingType>()},
    reportTo_Accessor{boost::make_unique<ReportTo>(0, SIZE_MAX)} {
}

OrbitalSurveillanceSensorReportingCategoriesType::~OrbitalSurveillanceSensorReportingCategoriesType() = default;

void OrbitalSurveillanceSensorReportingCategoriesType::copy(const uci::type::OrbitalSurveillanceSensorReportingCategoriesType& accessor) {
  copyImpl(accessor, false);
}

void OrbitalSurveillanceSensorReportingCategoriesType::copyImpl(const uci::type::OrbitalSurveillanceSensorReportingCategoriesType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const OrbitalSurveillanceSensorReportingCategoriesType&>(accessor);
    setSDA_SpecialInstructions(*(accessorImpl.sDA_SpecialInstructions_Accessor));
    setRelativePriority(*(accessorImpl.relativePriority_Accessor));
    if (accessorImpl.productNeededBy_Accessor) {
      setProductNeededBy(*(accessorImpl.productNeededBy_Accessor));
    } else {
      productNeededBy_Accessor.reset();
    }
    setReportTo(*(accessorImpl.reportTo_Accessor));
  }
}

void OrbitalSurveillanceSensorReportingCategoriesType::reset() noexcept {
  sDA_SpecialInstructions_Accessor->reset();
  relativePriority_Accessor->reset();
  productNeededBy_Accessor.reset();
  reportTo_Accessor->reset();
}

const uci::type::SDA_SpecialInstructionsConstraintType& OrbitalSurveillanceSensorReportingCategoriesType::getSDA_SpecialInstructions() const {
  return *sDA_SpecialInstructions_Accessor;
}

uci::type::SDA_SpecialInstructionsConstraintType& OrbitalSurveillanceSensorReportingCategoriesType::getSDA_SpecialInstructions() {
  return *sDA_SpecialInstructions_Accessor;
}

uci::type::OrbitalSurveillanceSensorReportingCategoriesType& OrbitalSurveillanceSensorReportingCategoriesType::setSDA_SpecialInstructions(const uci::type::SDA_SpecialInstructionsConstraintType& accessor) {
  if (&accessor != sDA_SpecialInstructions_Accessor.get()) {
    sDA_SpecialInstructions_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ComparableRankingType& OrbitalSurveillanceSensorReportingCategoriesType::getRelativePriority() const {
  return *relativePriority_Accessor;
}

uci::type::ComparableRankingType& OrbitalSurveillanceSensorReportingCategoriesType::getRelativePriority() {
  return *relativePriority_Accessor;
}

uci::type::OrbitalSurveillanceSensorReportingCategoriesType& OrbitalSurveillanceSensorReportingCategoriesType::setRelativePriority(const uci::type::ComparableRankingType& accessor) {
  if (&accessor != relativePriority_Accessor.get()) {
    relativePriority_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ProductNeededByType& OrbitalSurveillanceSensorReportingCategoriesType::getProductNeededBy_() const {
  if (productNeededBy_Accessor) {
    return *productNeededBy_Accessor;
  }
  throw uci::base::UCIException("Error in getProductNeededBy(): An attempt was made to get an optional field that was not enabled, call hasProductNeededBy() to determine if it is safe to call getProductNeededBy()");
}

const uci::type::ProductNeededByType& OrbitalSurveillanceSensorReportingCategoriesType::getProductNeededBy() const {
  return getProductNeededBy_();
}

uci::type::ProductNeededByType& OrbitalSurveillanceSensorReportingCategoriesType::getProductNeededBy() {
  return getProductNeededBy_();
}

uci::type::OrbitalSurveillanceSensorReportingCategoriesType& OrbitalSurveillanceSensorReportingCategoriesType::setProductNeededBy(const uci::type::ProductNeededByType& accessor) {
  enableProductNeededBy();
  if (&accessor != productNeededBy_Accessor.get()) {
    productNeededBy_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OrbitalSurveillanceSensorReportingCategoriesType::hasProductNeededBy() const noexcept {
  return static_cast<bool>(productNeededBy_Accessor);
}

uci::type::ProductNeededByType& OrbitalSurveillanceSensorReportingCategoriesType::enableProductNeededBy(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::productNeededByType : type};
  if ((!productNeededBy_Accessor) || (productNeededBy_Accessor->getAccessorType() != requestedType)) {
    productNeededBy_Accessor = ProductNeededByType::create(requestedType);
    if (!productNeededBy_Accessor) {
      throw uci::base::UCIException("Error in enableProductNeededBy(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *productNeededBy_Accessor;
}

uci::type::OrbitalSurveillanceSensorReportingCategoriesType& OrbitalSurveillanceSensorReportingCategoriesType::clearProductNeededBy() noexcept {
  productNeededBy_Accessor.reset();
  return *this;
}

const uci::type::OrbitalSurveillanceSensorReportingCategoriesType::ReportTo& OrbitalSurveillanceSensorReportingCategoriesType::getReportTo() const {
  return *reportTo_Accessor;
}

uci::type::OrbitalSurveillanceSensorReportingCategoriesType::ReportTo& OrbitalSurveillanceSensorReportingCategoriesType::getReportTo() {
  return *reportTo_Accessor;
}

uci::type::OrbitalSurveillanceSensorReportingCategoriesType& OrbitalSurveillanceSensorReportingCategoriesType::setReportTo(const uci::type::OrbitalSurveillanceSensorReportingCategoriesType::ReportTo& accessor) {
  if (&accessor != reportTo_Accessor.get()) {
    reportTo_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<OrbitalSurveillanceSensorReportingCategoriesType> OrbitalSurveillanceSensorReportingCategoriesType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitalSurveillanceSensorReportingCategoriesType : type};
  return (requestedType == uci::type::accessorType::orbitalSurveillanceSensorReportingCategoriesType) ? boost::make_unique<OrbitalSurveillanceSensorReportingCategoriesType>() : nullptr;
}

/**  */
namespace OrbitalSurveillanceSensorReportingCategoriesType_Names {

constexpr const char* Extern_Type_Name{"OrbitalSurveillanceSensorReportingCategoriesType"};
constexpr const char* SDA_SpecialInstructions_Name{"SDA_SpecialInstructions"};
constexpr const char* RelativePriority_Name{"RelativePriority"};
constexpr const char* ProductNeededBy_Name{"ProductNeededBy"};
constexpr const char* ReportTo_Name{"ReportTo"};

} // namespace OrbitalSurveillanceSensorReportingCategoriesType_Names

void OrbitalSurveillanceSensorReportingCategoriesType::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitalSurveillanceSensorReportingCategoriesType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitalSurveillanceSensorReportingCategoriesType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitalSurveillanceSensorReportingCategoriesType_Names::SDA_SpecialInstructions_Name) {
      SDA_SpecialInstructionsConstraintType::deserialize(valueType.second, accessor.getSDA_SpecialInstructions(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitalSurveillanceSensorReportingCategoriesType_Names::RelativePriority_Name) {
      ComparableRankingType::deserialize(valueType.second, accessor.getRelativePriority(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitalSurveillanceSensorReportingCategoriesType_Names::ProductNeededBy_Name) {
      ProductNeededByType::deserialize(valueType.second, accessor.enableProductNeededBy(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitalSurveillanceSensorReportingCategoriesType_Names::ReportTo_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::OrbitalSurveillanceSensorReportingCategoriesType::ReportTo& boundedList = accessor.getReportTo();
        const uci::type::OrbitalSurveillanceSensorReportingCategoriesType::ReportTo::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::ReportToType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string OrbitalSurveillanceSensorReportingCategoriesType::serialize(const uci::type::OrbitalSurveillanceSensorReportingCategoriesType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? OrbitalSurveillanceSensorReportingCategoriesType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitalSurveillanceSensorReportingCategoriesType_Names::Extern_Type_Name);
  }
  SDA_SpecialInstructionsConstraintType::serialize(accessor.getSDA_SpecialInstructions(), node, OrbitalSurveillanceSensorReportingCategoriesType_Names::SDA_SpecialInstructions_Name);
  ComparableRankingType::serialize(accessor.getRelativePriority(), node, OrbitalSurveillanceSensorReportingCategoriesType_Names::RelativePriority_Name);
  if (accessor.hasProductNeededBy()) {
    ProductNeededByType::serialize(accessor.getProductNeededBy(), node, OrbitalSurveillanceSensorReportingCategoriesType_Names::ProductNeededBy_Name);
  }
  {
    const uci::type::OrbitalSurveillanceSensorReportingCategoriesType::ReportTo& boundedList = accessor.getReportTo();
    for (uci::type::OrbitalSurveillanceSensorReportingCategoriesType::ReportTo::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ReportToType::serialize(boundedList.at(i), node, OrbitalSurveillanceSensorReportingCategoriesType_Names::ReportTo_Name);
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

uci::type::OrbitalSurveillanceSensorReportingCategoriesType& OrbitalSurveillanceSensorReportingCategoriesType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OrbitalSurveillanceSensorReportingCategoriesType>().release());
}

uci::type::OrbitalSurveillanceSensorReportingCategoriesType& OrbitalSurveillanceSensorReportingCategoriesType::create(const uci::type::OrbitalSurveillanceSensorReportingCategoriesType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OrbitalSurveillanceSensorReportingCategoriesType> newAccessor{boost::make_unique<asb_uci::type::OrbitalSurveillanceSensorReportingCategoriesType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OrbitalSurveillanceSensorReportingCategoriesType::destroy(uci::type::OrbitalSurveillanceSensorReportingCategoriesType& accessor) {
  delete dynamic_cast<asb_uci::type::OrbitalSurveillanceSensorReportingCategoriesType*>(&accessor);
}

} // namespace type

} // namespace uci

