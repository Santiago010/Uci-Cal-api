/** @file ProcessingConstrainedSubPlanType.cpp
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

#include "../../../include/asb_uci/type/ProcessingConstrainedSubPlanType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ComparableRankingType.h"
#include "../../../include/asb_uci/type/ProductProcessingType.h"
#include "../../../include/asb_uci/type/ProductTypeFilterType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ComparableRankingType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProcessingConstrainedSubPlanType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductTypeFilterType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ProcessingConstrainedSubPlanType::ProcessingConstrainedSubPlanType()
  : constrainedSubPlanRank_Accessor{boost::make_unique<ComparableRankingType>()},
    filter_Accessor{boost::make_unique<Filter>(1, SIZE_MAX)} {
}

ProcessingConstrainedSubPlanType::~ProcessingConstrainedSubPlanType() = default;

void ProcessingConstrainedSubPlanType::copy(const uci::type::ProcessingConstrainedSubPlanType& accessor) {
  copyImpl(accessor, false);
}

void ProcessingConstrainedSubPlanType::copyImpl(const uci::type::ProcessingConstrainedSubPlanType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    ProductProcessingType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const ProcessingConstrainedSubPlanType&>(accessor);
    setConstrainedSubPlanRank(*(accessorImpl.constrainedSubPlanRank_Accessor));
    setFilter(*(accessorImpl.filter_Accessor));
  }
}

void ProcessingConstrainedSubPlanType::reset() noexcept {
  ProductProcessingType::reset();
  constrainedSubPlanRank_Accessor->reset();
  filter_Accessor->reset();
}

const uci::type::ComparableRankingType& ProcessingConstrainedSubPlanType::getConstrainedSubPlanRank() const {
  return *constrainedSubPlanRank_Accessor;
}

uci::type::ComparableRankingType& ProcessingConstrainedSubPlanType::getConstrainedSubPlanRank() {
  return *constrainedSubPlanRank_Accessor;
}

uci::type::ProcessingConstrainedSubPlanType& ProcessingConstrainedSubPlanType::setConstrainedSubPlanRank(const uci::type::ComparableRankingType& accessor) {
  if (&accessor != constrainedSubPlanRank_Accessor.get()) {
    constrainedSubPlanRank_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ProcessingConstrainedSubPlanType::Filter& ProcessingConstrainedSubPlanType::getFilter() const {
  return *filter_Accessor;
}

uci::type::ProcessingConstrainedSubPlanType::Filter& ProcessingConstrainedSubPlanType::getFilter() {
  return *filter_Accessor;
}

uci::type::ProcessingConstrainedSubPlanType& ProcessingConstrainedSubPlanType::setFilter(const uci::type::ProcessingConstrainedSubPlanType::Filter& accessor) {
  if (&accessor != filter_Accessor.get()) {
    filter_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<ProcessingConstrainedSubPlanType> ProcessingConstrainedSubPlanType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::processingConstrainedSubPlanType : type};
  return (requestedType == uci::type::accessorType::processingConstrainedSubPlanType) ? boost::make_unique<ProcessingConstrainedSubPlanType>() : nullptr;
}

/**  */
namespace ProcessingConstrainedSubPlanType_Names {

constexpr const char* Extern_Type_Name{"ProcessingConstrainedSubPlanType"};
constexpr const char* ConstrainedSubPlanRank_Name{"ConstrainedSubPlanRank"};
constexpr const char* Filter_Name{"Filter"};

} // namespace ProcessingConstrainedSubPlanType_Names

void ProcessingConstrainedSubPlanType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ProcessingConstrainedSubPlanType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ProcessingConstrainedSubPlanType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ProcessingConstrainedSubPlanType_Names::ConstrainedSubPlanRank_Name) {
      ComparableRankingType::deserialize(valueType.second, accessor.getConstrainedSubPlanRank(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ProcessingConstrainedSubPlanType_Names::Filter_Name) {
      uci::type::ProcessingConstrainedSubPlanType::Filter& boundedList = accessor.getFilter();
      const uci::type::ProcessingConstrainedSubPlanType::Filter::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::ProductTypeFilterType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    }
  }
  ProductProcessingType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string ProcessingConstrainedSubPlanType::serialize(const uci::type::ProcessingConstrainedSubPlanType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ProcessingConstrainedSubPlanType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ProcessingConstrainedSubPlanType_Names::Extern_Type_Name);
  }
  ProductProcessingType::serialize(accessor, node, "", false, false, false);
  ComparableRankingType::serialize(accessor.getConstrainedSubPlanRank(), node, ProcessingConstrainedSubPlanType_Names::ConstrainedSubPlanRank_Name);
  {
    const uci::type::ProcessingConstrainedSubPlanType::Filter& boundedList = accessor.getFilter();
    for (uci::type::ProcessingConstrainedSubPlanType::Filter::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ProductTypeFilterType::serialize(boundedList.at(i), node, ProcessingConstrainedSubPlanType_Names::Filter_Name);
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

uci::type::ProcessingConstrainedSubPlanType& ProcessingConstrainedSubPlanType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ProcessingConstrainedSubPlanType>().release());
}

uci::type::ProcessingConstrainedSubPlanType& ProcessingConstrainedSubPlanType::create(const uci::type::ProcessingConstrainedSubPlanType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ProcessingConstrainedSubPlanType> newAccessor{boost::make_unique<asb_uci::type::ProcessingConstrainedSubPlanType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ProcessingConstrainedSubPlanType::destroy(uci::type::ProcessingConstrainedSubPlanType& accessor) {
  delete dynamic_cast<asb_uci::type::ProcessingConstrainedSubPlanType*>(&accessor);
}

} // namespace type

} // namespace uci

