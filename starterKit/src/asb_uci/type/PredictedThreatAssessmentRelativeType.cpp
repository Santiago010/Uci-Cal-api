/** @file PredictedThreatAssessmentRelativeType.cpp
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

#include "../../../include/asb_uci/type/PredictedThreatAssessmentRelativeType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/InertialStateRelativeType.h"
#include "../../../include/asb_uci/type/ThreatAssessmentSystemType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/InertialStateRelativeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PredictedThreatAssessmentRelativeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ThreatAssessmentSystemType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PredictedThreatAssessmentRelativeType::PredictedThreatAssessmentRelativeType()
  : inertialStateRelative_Accessor{boost::make_unique<InertialStateRelativeType>()},
    threatAssessment_Accessor{boost::make_unique<ThreatAssessment>(1, SIZE_MAX)} {
}

PredictedThreatAssessmentRelativeType::~PredictedThreatAssessmentRelativeType() = default;

void PredictedThreatAssessmentRelativeType::copy(const uci::type::PredictedThreatAssessmentRelativeType& accessor) {
  copyImpl(accessor, false);
}

void PredictedThreatAssessmentRelativeType::copyImpl(const uci::type::PredictedThreatAssessmentRelativeType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PredictedThreatAssessmentRelativeType&>(accessor);
    setInertialStateRelative(*(accessorImpl.inertialStateRelative_Accessor));
    setThreatAssessment(*(accessorImpl.threatAssessment_Accessor));
  }
}

void PredictedThreatAssessmentRelativeType::reset() noexcept {
  if (inertialStateRelative_Accessor->getAccessorType() != uci::type::accessorType::inertialStateRelativeType) {
    inertialStateRelative_Accessor = boost::make_unique<InertialStateRelativeType>();
  } else {
    inertialStateRelative_Accessor->reset();
  }
  threatAssessment_Accessor->reset();
}

const uci::type::InertialStateRelativeType& PredictedThreatAssessmentRelativeType::getInertialStateRelative() const {
  return *inertialStateRelative_Accessor;
}

uci::type::InertialStateRelativeType& PredictedThreatAssessmentRelativeType::getInertialStateRelative() {
  return *inertialStateRelative_Accessor;
}

uci::type::PredictedThreatAssessmentRelativeType& PredictedThreatAssessmentRelativeType::setInertialStateRelative(const uci::type::InertialStateRelativeType& accessor) {
  enableInertialStateRelative(accessor.getAccessorType());
  if (&accessor != inertialStateRelative_Accessor.get()) {
    inertialStateRelative_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

uci::type::InertialStateRelativeType& PredictedThreatAssessmentRelativeType::enableInertialStateRelative(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::inertialStateRelativeType : type};
  if ((!inertialStateRelative_Accessor) || (inertialStateRelative_Accessor->getAccessorType() != requestedType)) {
    inertialStateRelative_Accessor = InertialStateRelativeType::create(requestedType);
    if (!inertialStateRelative_Accessor) {
      throw uci::base::UCIException("Error in enableInertialStateRelative(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *inertialStateRelative_Accessor;
}

const uci::type::PredictedThreatAssessmentRelativeType::ThreatAssessment& PredictedThreatAssessmentRelativeType::getThreatAssessment() const {
  return *threatAssessment_Accessor;
}

uci::type::PredictedThreatAssessmentRelativeType::ThreatAssessment& PredictedThreatAssessmentRelativeType::getThreatAssessment() {
  return *threatAssessment_Accessor;
}

uci::type::PredictedThreatAssessmentRelativeType& PredictedThreatAssessmentRelativeType::setThreatAssessment(const uci::type::PredictedThreatAssessmentRelativeType::ThreatAssessment& accessor) {
  if (&accessor != threatAssessment_Accessor.get()) {
    threatAssessment_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<PredictedThreatAssessmentRelativeType> PredictedThreatAssessmentRelativeType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::predictedThreatAssessmentRelativeType : type};
  return (requestedType == uci::type::accessorType::predictedThreatAssessmentRelativeType) ? boost::make_unique<PredictedThreatAssessmentRelativeType>() : nullptr;
}

/**  */
namespace PredictedThreatAssessmentRelativeType_Names {

constexpr const char* Extern_Type_Name{"PredictedThreatAssessmentRelativeType"};
constexpr const char* InertialStateRelative_Name{"InertialStateRelative"};
constexpr const char* ThreatAssessment_Name{"ThreatAssessment"};

} // namespace PredictedThreatAssessmentRelativeType_Names

void PredictedThreatAssessmentRelativeType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PredictedThreatAssessmentRelativeType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PredictedThreatAssessmentRelativeType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PredictedThreatAssessmentRelativeType_Names::InertialStateRelative_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableInertialStateRelative(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PredictedThreatAssessmentRelativeType_Names::ThreatAssessment_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PredictedThreatAssessmentRelativeType::ThreatAssessment& boundedList = accessor.getThreatAssessment();
        const uci::type::PredictedThreatAssessmentRelativeType::ThreatAssessment::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::ThreatAssessmentSystemType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string PredictedThreatAssessmentRelativeType::serialize(const uci::type::PredictedThreatAssessmentRelativeType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PredictedThreatAssessmentRelativeType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PredictedThreatAssessmentRelativeType_Names::Extern_Type_Name);
  }
  InertialStateRelativeType::serialize(accessor.getInertialStateRelative(), node, PredictedThreatAssessmentRelativeType_Names::InertialStateRelative_Name);
  {
    const uci::type::PredictedThreatAssessmentRelativeType::ThreatAssessment& boundedList = accessor.getThreatAssessment();
    for (uci::type::PredictedThreatAssessmentRelativeType::ThreatAssessment::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ThreatAssessmentSystemType::serialize(boundedList.at(i), node, PredictedThreatAssessmentRelativeType_Names::ThreatAssessment_Name);
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

uci::type::PredictedThreatAssessmentRelativeType& PredictedThreatAssessmentRelativeType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PredictedThreatAssessmentRelativeType>().release());
}

uci::type::PredictedThreatAssessmentRelativeType& PredictedThreatAssessmentRelativeType::create(const uci::type::PredictedThreatAssessmentRelativeType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PredictedThreatAssessmentRelativeType> newAccessor{boost::make_unique<asb_uci::type::PredictedThreatAssessmentRelativeType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PredictedThreatAssessmentRelativeType::destroy(uci::type::PredictedThreatAssessmentRelativeType& accessor) {
  delete dynamic_cast<asb_uci::type::PredictedThreatAssessmentRelativeType*>(&accessor);
}

} // namespace type

} // namespace uci

