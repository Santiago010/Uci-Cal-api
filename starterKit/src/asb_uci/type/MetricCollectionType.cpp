/** @file MetricCollectionType.cpp
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

#include "../../../include/asb_uci/type/MetricCollectionType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ObservationsPerTrackLimitsType.h"
#include "../../../include/asb_uci/type/QualityOfObsEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MetricCollectionType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ObservationsPerTrackLimitsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/QualityOfObsEnum.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

MetricCollectionType::MetricCollectionType() = default;

MetricCollectionType::~MetricCollectionType() = default;

void MetricCollectionType::copy(const uci::type::MetricCollectionType& accessor) {
  copyImpl(accessor, false);
}

void MetricCollectionType::copyImpl(const uci::type::MetricCollectionType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const MetricCollectionType&>(accessor);
    setUseAllPasses(accessorImpl.useAllPasses_Accessor);
    if (accessorImpl.numberOfObservations_Accessor) {
      setNumberOfObservations(*(accessorImpl.numberOfObservations_Accessor));
    } else {
      numberOfObservations_Accessor.reset();
    }
    if (accessorImpl.hasCenteredAtMaxPredictedSNR()) {
      setCenteredAtMaxPredictedSNR(accessorImpl.getCenteredAtMaxPredictedSNR());
    } else {
      clearCenteredAtMaxPredictedSNR();
    }
    if (accessorImpl.hasSpacingOfObservations()) {
      setSpacingOfObservations(accessorImpl.getSpacingOfObservations());
    } else {
      clearSpacingOfObservations();
    }
    if (accessorImpl.hasReportPointSOI()) {
      setReportPointSOI(accessorImpl.getReportPointSOI());
    } else {
      clearReportPointSOI();
    }
    if (accessorImpl.qualityOfObs_Accessor) {
      setQualityOfObs(*(accessorImpl.qualityOfObs_Accessor));
    } else {
      qualityOfObs_Accessor.reset();
    }
  }
}

void MetricCollectionType::reset() noexcept {
  useAllPasses_Accessor = false;
  numberOfObservations_Accessor.reset();
  clearCenteredAtMaxPredictedSNR();
  clearSpacingOfObservations();
  clearReportPointSOI();
  qualityOfObs_Accessor.reset();
}

xs::Boolean MetricCollectionType::getUseAllPasses() const {
  return useAllPasses_Accessor;
}

uci::type::MetricCollectionType& MetricCollectionType::setUseAllPasses(xs::Boolean value) {
  useAllPasses_Accessor = value;
  return *this;
}


uci::type::ObservationsPerTrackLimitsType& MetricCollectionType::getNumberOfObservations_() const {
  if (numberOfObservations_Accessor) {
    return *numberOfObservations_Accessor;
  }
  throw uci::base::UCIException("Error in getNumberOfObservations(): An attempt was made to get an optional field that was not enabled, call hasNumberOfObservations() to determine if it is safe to call getNumberOfObservations()");
}

const uci::type::ObservationsPerTrackLimitsType& MetricCollectionType::getNumberOfObservations() const {
  return getNumberOfObservations_();
}

uci::type::ObservationsPerTrackLimitsType& MetricCollectionType::getNumberOfObservations() {
  return getNumberOfObservations_();
}

uci::type::MetricCollectionType& MetricCollectionType::setNumberOfObservations(const uci::type::ObservationsPerTrackLimitsType& accessor) {
  enableNumberOfObservations();
  if (&accessor != numberOfObservations_Accessor.get()) {
    numberOfObservations_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool MetricCollectionType::hasNumberOfObservations() const noexcept {
  return static_cast<bool>(numberOfObservations_Accessor);
}

uci::type::ObservationsPerTrackLimitsType& MetricCollectionType::enableNumberOfObservations(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::observationsPerTrackLimitsType : type};
  if ((!numberOfObservations_Accessor) || (numberOfObservations_Accessor->getAccessorType() != requestedType)) {
    numberOfObservations_Accessor = ObservationsPerTrackLimitsType::create(requestedType);
    if (!numberOfObservations_Accessor) {
      throw uci::base::UCIException("Error in enableNumberOfObservations(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *numberOfObservations_Accessor;
}

uci::type::MetricCollectionType& MetricCollectionType::clearNumberOfObservations() noexcept {
  numberOfObservations_Accessor.reset();
  return *this;
}

xs::Boolean MetricCollectionType::getCenteredAtMaxPredictedSNR() const {
  if (centeredAtMaxPredictedSNR_Accessor) {
    return *centeredAtMaxPredictedSNR_Accessor;
  }
  throw uci::base::UCIException("Error in getCenteredAtMaxPredictedSNR(): An attempt was made to get an optional field that was not enabled, call hasCenteredAtMaxPredictedSNR() to determine if it is safe to call getCenteredAtMaxPredictedSNR()");
}

uci::type::MetricCollectionType& MetricCollectionType::setCenteredAtMaxPredictedSNR(xs::Boolean value) {
  centeredAtMaxPredictedSNR_Accessor = value;
  return *this;
}

bool MetricCollectionType::hasCenteredAtMaxPredictedSNR() const noexcept {
  return centeredAtMaxPredictedSNR_Accessor.has_value();
}

uci::type::MetricCollectionType& MetricCollectionType::clearCenteredAtMaxPredictedSNR() noexcept {
  centeredAtMaxPredictedSNR_Accessor.reset();
  return *this;
}

xs::Int MetricCollectionType::getSpacingOfObservations() const {
  if (spacingOfObservations_Accessor) {
    return *spacingOfObservations_Accessor;
  }
  throw uci::base::UCIException("Error in getSpacingOfObservations(): An attempt was made to get an optional field that was not enabled, call hasSpacingOfObservations() to determine if it is safe to call getSpacingOfObservations()");
}

uci::type::MetricCollectionType& MetricCollectionType::setSpacingOfObservations(xs::Int value) {
  spacingOfObservations_Accessor = value;
  return *this;
}

bool MetricCollectionType::hasSpacingOfObservations() const noexcept {
  return spacingOfObservations_Accessor.has_value();
}

uci::type::MetricCollectionType& MetricCollectionType::clearSpacingOfObservations() noexcept {
  spacingOfObservations_Accessor.reset();
  return *this;
}

xs::Boolean MetricCollectionType::getReportPointSOI() const {
  if (reportPointSOI_Accessor) {
    return *reportPointSOI_Accessor;
  }
  throw uci::base::UCIException("Error in getReportPointSOI(): An attempt was made to get an optional field that was not enabled, call hasReportPointSOI() to determine if it is safe to call getReportPointSOI()");
}

uci::type::MetricCollectionType& MetricCollectionType::setReportPointSOI(xs::Boolean value) {
  reportPointSOI_Accessor = value;
  return *this;
}

bool MetricCollectionType::hasReportPointSOI() const noexcept {
  return reportPointSOI_Accessor.has_value();
}

uci::type::MetricCollectionType& MetricCollectionType::clearReportPointSOI() noexcept {
  reportPointSOI_Accessor.reset();
  return *this;
}

uci::type::QualityOfObsEnum& MetricCollectionType::getQualityOfObs_() const {
  if (qualityOfObs_Accessor) {
    return *qualityOfObs_Accessor;
  }
  throw uci::base::UCIException("Error in getQualityOfObs(): An attempt was made to get an optional field that was not enabled, call hasQualityOfObs() to determine if it is safe to call getQualityOfObs()");
}

const uci::type::QualityOfObsEnum& MetricCollectionType::getQualityOfObs() const {
  return getQualityOfObs_();
}

uci::type::QualityOfObsEnum& MetricCollectionType::getQualityOfObs() {
  return getQualityOfObs_();
}

uci::type::MetricCollectionType& MetricCollectionType::setQualityOfObs(const uci::type::QualityOfObsEnum& accessor) {
  enableQualityOfObs();
  if (&accessor != qualityOfObs_Accessor.get()) {
    qualityOfObs_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::MetricCollectionType& MetricCollectionType::setQualityOfObs(const uci::type::QualityOfObsEnum::EnumerationItem value) {
  enableQualityOfObs().setValue(value);
  return *this;
}

bool MetricCollectionType::hasQualityOfObs() const noexcept {
  return static_cast<bool>(qualityOfObs_Accessor);
}

uci::type::QualityOfObsEnum& MetricCollectionType::enableQualityOfObs(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::qualityOfObsEnum : type};
  if ((!qualityOfObs_Accessor) || (qualityOfObs_Accessor->getAccessorType() != requestedType)) {
    qualityOfObs_Accessor = QualityOfObsEnum::create(requestedType);
    if (!qualityOfObs_Accessor) {
      throw uci::base::UCIException("Error in enableQualityOfObs(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *qualityOfObs_Accessor;
}

uci::type::MetricCollectionType& MetricCollectionType::clearQualityOfObs() noexcept {
  qualityOfObs_Accessor.reset();
  return *this;
}

std::unique_ptr<MetricCollectionType> MetricCollectionType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::metricCollectionType : type};
  return (requestedType == uci::type::accessorType::metricCollectionType) ? boost::make_unique<MetricCollectionType>() : nullptr;
}

/**  */
namespace MetricCollectionType_Names {

constexpr const char* Extern_Type_Name{"MetricCollectionType"};
constexpr const char* UseAllPasses_Name{"UseAllPasses"};
constexpr const char* NumberOfObservations_Name{"NumberOfObservations"};
constexpr const char* CenteredAtMaxPredictedSNR_Name{"CenteredAtMaxPredictedSNR"};
constexpr const char* SpacingOfObservations_Name{"SpacingOfObservations"};
constexpr const char* ReportPointSOI_Name{"ReportPointSOI"};
constexpr const char* QualityOfObs_Name{"QualityOfObs"};

} // namespace MetricCollectionType_Names

void MetricCollectionType::deserialize(const boost::property_tree::ptree& propTree, uci::type::MetricCollectionType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = MetricCollectionType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + MetricCollectionType_Names::UseAllPasses_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setUseAllPasses(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + MetricCollectionType_Names::NumberOfObservations_Name) {
      ObservationsPerTrackLimitsType::deserialize(valueType.second, accessor.enableNumberOfObservations(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MetricCollectionType_Names::CenteredAtMaxPredictedSNR_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setCenteredAtMaxPredictedSNR(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + MetricCollectionType_Names::SpacingOfObservations_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSpacingOfObservations(asb_uci::util::SerializationHelpers::deserializeInt(*value));
      }
    } else if (valueType.first == nsPrefix + MetricCollectionType_Names::ReportPointSOI_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setReportPointSOI(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + MetricCollectionType_Names::QualityOfObs_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableQualityOfObs().setValueFromName(*value);
      }
    }
  }
}

std::string MetricCollectionType::serialize(const uci::type::MetricCollectionType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? MetricCollectionType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, MetricCollectionType_Names::Extern_Type_Name);
  }
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getUseAllPasses(), node, MetricCollectionType_Names::UseAllPasses_Name);
  if (accessor.hasNumberOfObservations()) {
    ObservationsPerTrackLimitsType::serialize(accessor.getNumberOfObservations(), node, MetricCollectionType_Names::NumberOfObservations_Name);
  }
  if (accessor.hasCenteredAtMaxPredictedSNR()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getCenteredAtMaxPredictedSNR(), node, MetricCollectionType_Names::CenteredAtMaxPredictedSNR_Name);
  }
  if (accessor.hasSpacingOfObservations()) {
    asb_uci::util::SerializationHelpers::serializeInt(accessor.getSpacingOfObservations(), node, MetricCollectionType_Names::SpacingOfObservations_Name);
  }
  if (accessor.hasReportPointSOI()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getReportPointSOI(), node, MetricCollectionType_Names::ReportPointSOI_Name);
  }
  if (accessor.hasQualityOfObs()) {
    QualityOfObsEnum::serialize(accessor.getQualityOfObs(), node, MetricCollectionType_Names::QualityOfObs_Name, false);
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

uci::type::MetricCollectionType& MetricCollectionType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::MetricCollectionType>().release());
}

uci::type::MetricCollectionType& MetricCollectionType::create(const uci::type::MetricCollectionType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::MetricCollectionType> newAccessor{boost::make_unique<asb_uci::type::MetricCollectionType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void MetricCollectionType::destroy(uci::type::MetricCollectionType& accessor) {
  delete dynamic_cast<asb_uci::type::MetricCollectionType*>(&accessor);
}

} // namespace type

} // namespace uci

