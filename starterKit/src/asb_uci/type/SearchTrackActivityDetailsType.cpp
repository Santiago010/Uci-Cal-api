/** @file SearchTrackActivityDetailsType.cpp
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

#include "../../../include/asb_uci/type/SearchTrackActivityDetailsType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DurationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PercentType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SearchTrackActivityDetailsType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SearchTrackActivityDetailsType::SearchTrackActivityDetailsType() = default;

SearchTrackActivityDetailsType::~SearchTrackActivityDetailsType() = default;

void SearchTrackActivityDetailsType::copy(const uci::type::SearchTrackActivityDetailsType& accessor) {
  copyImpl(accessor, false);
}

void SearchTrackActivityDetailsType::copyImpl(const uci::type::SearchTrackActivityDetailsType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const SearchTrackActivityDetailsType&>(accessor);
    if (accessorImpl.hasNumberOfTimesSearched()) {
      setNumberOfTimesSearched(accessorImpl.getNumberOfTimesSearched());
    } else {
      clearNumberOfTimesSearched();
    }
    if (accessorImpl.hasTimeLastSearched()) {
      setTimeLastSearched(accessorImpl.getTimeLastSearched());
    } else {
      clearTimeLastSearched();
    }
    if (accessorImpl.hasAttempts()) {
      setAttempts(accessorImpl.getAttempts());
    } else {
      clearAttempts();
    }
    if (accessorImpl.hasActualRevisitPeriod()) {
      setActualRevisitPeriod(accessorImpl.getActualRevisitPeriod());
    } else {
      clearActualRevisitPeriod();
    }
    if (accessorImpl.hasPercentageInFOR()) {
      setPercentageInFOR(accessorImpl.getPercentageInFOR());
    } else {
      clearPercentageInFOR();
    }
    if (accessorImpl.hasActualStartTime()) {
      setActualStartTime(accessorImpl.getActualStartTime());
    } else {
      clearActualStartTime();
    }
    if (accessorImpl.hasActualStopTime()) {
      setActualStopTime(accessorImpl.getActualStopTime());
    } else {
      clearActualStopTime();
    }
    if (accessorImpl.hasPercentSearched()) {
      setPercentSearched(accessorImpl.getPercentSearched());
    } else {
      clearPercentSearched();
    }
    if (accessorImpl.hasEntitiesReported()) {
      setEntitiesReported(accessorImpl.getEntitiesReported());
    } else {
      clearEntitiesReported();
    }
    if (accessorImpl.hasCueAcquired()) {
      setCueAcquired(accessorImpl.getCueAcquired());
    } else {
      clearCueAcquired();
    }
    if (accessorImpl.hasProductsProduced()) {
      setProductsProduced(accessorImpl.getProductsProduced());
    } else {
      clearProductsProduced();
    }
    if (accessorImpl.hasHitsReported()) {
      setHitsReported(accessorImpl.getHitsReported());
    } else {
      clearHitsReported();
    }
  }
}

void SearchTrackActivityDetailsType::reset() noexcept {
  clearNumberOfTimesSearched();
  clearTimeLastSearched();
  clearAttempts();
  clearActualRevisitPeriod();
  clearPercentageInFOR();
  clearActualStartTime();
  clearActualStopTime();
  clearPercentSearched();
  clearEntitiesReported();
  clearCueAcquired();
  clearProductsProduced();
  clearHitsReported();
}

xs::UnsignedInt SearchTrackActivityDetailsType::getNumberOfTimesSearched() const {
  if (numberOfTimesSearched_Accessor) {
    return *numberOfTimesSearched_Accessor;
  }
  throw uci::base::UCIException("Error in getNumberOfTimesSearched(): An attempt was made to get an optional field that was not enabled, call hasNumberOfTimesSearched() to determine if it is safe to call getNumberOfTimesSearched()");
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::setNumberOfTimesSearched(xs::UnsignedInt value) {
  numberOfTimesSearched_Accessor = value;
  return *this;
}

bool SearchTrackActivityDetailsType::hasNumberOfTimesSearched() const noexcept {
  return numberOfTimesSearched_Accessor.has_value();
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::clearNumberOfTimesSearched() noexcept {
  numberOfTimesSearched_Accessor.reset();
  return *this;
}

uci::type::DateTimeTypeValue SearchTrackActivityDetailsType::getTimeLastSearched() const {
  if (timeLastSearched_Accessor) {
    return *timeLastSearched_Accessor;
  }
  throw uci::base::UCIException("Error in getTimeLastSearched(): An attempt was made to get an optional field that was not enabled, call hasTimeLastSearched() to determine if it is safe to call getTimeLastSearched()");
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::setTimeLastSearched(uci::type::DateTimeTypeValue value) {
  timeLastSearched_Accessor = value;
  return *this;
}

bool SearchTrackActivityDetailsType::hasTimeLastSearched() const noexcept {
  return timeLastSearched_Accessor.has_value();
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::clearTimeLastSearched() noexcept {
  timeLastSearched_Accessor.reset();
  return *this;
}

xs::UnsignedInt SearchTrackActivityDetailsType::getAttempts() const {
  if (attempts_Accessor) {
    return *attempts_Accessor;
  }
  throw uci::base::UCIException("Error in getAttempts(): An attempt was made to get an optional field that was not enabled, call hasAttempts() to determine if it is safe to call getAttempts()");
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::setAttempts(xs::UnsignedInt value) {
  attempts_Accessor = value;
  return *this;
}

bool SearchTrackActivityDetailsType::hasAttempts() const noexcept {
  return attempts_Accessor.has_value();
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::clearAttempts() noexcept {
  attempts_Accessor.reset();
  return *this;
}

uci::type::DurationTypeValue SearchTrackActivityDetailsType::getActualRevisitPeriod() const {
  if (actualRevisitPeriod_Accessor) {
    return *actualRevisitPeriod_Accessor;
  }
  throw uci::base::UCIException("Error in getActualRevisitPeriod(): An attempt was made to get an optional field that was not enabled, call hasActualRevisitPeriod() to determine if it is safe to call getActualRevisitPeriod()");
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::setActualRevisitPeriod(uci::type::DurationTypeValue value) {
  actualRevisitPeriod_Accessor = value;
  return *this;
}

bool SearchTrackActivityDetailsType::hasActualRevisitPeriod() const noexcept {
  return actualRevisitPeriod_Accessor.has_value();
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::clearActualRevisitPeriod() noexcept {
  actualRevisitPeriod_Accessor.reset();
  return *this;
}

uci::type::PercentTypeValue SearchTrackActivityDetailsType::getPercentageInFOR() const {
  if (percentageInFOR_Accessor) {
    return *percentageInFOR_Accessor;
  }
  throw uci::base::UCIException("Error in getPercentageInFOR(): An attempt was made to get an optional field that was not enabled, call hasPercentageInFOR() to determine if it is safe to call getPercentageInFOR()");
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::setPercentageInFOR(uci::type::PercentTypeValue value) {
  percentageInFOR_Accessor = value;
  return *this;
}

bool SearchTrackActivityDetailsType::hasPercentageInFOR() const noexcept {
  return percentageInFOR_Accessor.has_value();
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::clearPercentageInFOR() noexcept {
  percentageInFOR_Accessor.reset();
  return *this;
}

uci::type::DateTimeTypeValue SearchTrackActivityDetailsType::getActualStartTime() const {
  if (actualStartTime_Accessor) {
    return *actualStartTime_Accessor;
  }
  throw uci::base::UCIException("Error in getActualStartTime(): An attempt was made to get an optional field that was not enabled, call hasActualStartTime() to determine if it is safe to call getActualStartTime()");
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::setActualStartTime(uci::type::DateTimeTypeValue value) {
  actualStartTime_Accessor = value;
  return *this;
}

bool SearchTrackActivityDetailsType::hasActualStartTime() const noexcept {
  return actualStartTime_Accessor.has_value();
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::clearActualStartTime() noexcept {
  actualStartTime_Accessor.reset();
  return *this;
}

uci::type::DateTimeTypeValue SearchTrackActivityDetailsType::getActualStopTime() const {
  if (actualStopTime_Accessor) {
    return *actualStopTime_Accessor;
  }
  throw uci::base::UCIException("Error in getActualStopTime(): An attempt was made to get an optional field that was not enabled, call hasActualStopTime() to determine if it is safe to call getActualStopTime()");
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::setActualStopTime(uci::type::DateTimeTypeValue value) {
  actualStopTime_Accessor = value;
  return *this;
}

bool SearchTrackActivityDetailsType::hasActualStopTime() const noexcept {
  return actualStopTime_Accessor.has_value();
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::clearActualStopTime() noexcept {
  actualStopTime_Accessor.reset();
  return *this;
}

uci::type::PercentTypeValue SearchTrackActivityDetailsType::getPercentSearched() const {
  if (percentSearched_Accessor) {
    return *percentSearched_Accessor;
  }
  throw uci::base::UCIException("Error in getPercentSearched(): An attempt was made to get an optional field that was not enabled, call hasPercentSearched() to determine if it is safe to call getPercentSearched()");
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::setPercentSearched(uci::type::PercentTypeValue value) {
  percentSearched_Accessor = value;
  return *this;
}

bool SearchTrackActivityDetailsType::hasPercentSearched() const noexcept {
  return percentSearched_Accessor.has_value();
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::clearPercentSearched() noexcept {
  percentSearched_Accessor.reset();
  return *this;
}

xs::UnsignedInt SearchTrackActivityDetailsType::getEntitiesReported() const {
  if (entitiesReported_Accessor) {
    return *entitiesReported_Accessor;
  }
  throw uci::base::UCIException("Error in getEntitiesReported(): An attempt was made to get an optional field that was not enabled, call hasEntitiesReported() to determine if it is safe to call getEntitiesReported()");
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::setEntitiesReported(xs::UnsignedInt value) {
  entitiesReported_Accessor = value;
  return *this;
}

bool SearchTrackActivityDetailsType::hasEntitiesReported() const noexcept {
  return entitiesReported_Accessor.has_value();
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::clearEntitiesReported() noexcept {
  entitiesReported_Accessor.reset();
  return *this;
}

xs::Boolean SearchTrackActivityDetailsType::getCueAcquired() const {
  if (cueAcquired_Accessor) {
    return *cueAcquired_Accessor;
  }
  throw uci::base::UCIException("Error in getCueAcquired(): An attempt was made to get an optional field that was not enabled, call hasCueAcquired() to determine if it is safe to call getCueAcquired()");
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::setCueAcquired(xs::Boolean value) {
  cueAcquired_Accessor = value;
  return *this;
}

bool SearchTrackActivityDetailsType::hasCueAcquired() const noexcept {
  return cueAcquired_Accessor.has_value();
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::clearCueAcquired() noexcept {
  cueAcquired_Accessor.reset();
  return *this;
}

xs::UnsignedInt SearchTrackActivityDetailsType::getProductsProduced() const {
  if (productsProduced_Accessor) {
    return *productsProduced_Accessor;
  }
  throw uci::base::UCIException("Error in getProductsProduced(): An attempt was made to get an optional field that was not enabled, call hasProductsProduced() to determine if it is safe to call getProductsProduced()");
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::setProductsProduced(xs::UnsignedInt value) {
  productsProduced_Accessor = value;
  return *this;
}

bool SearchTrackActivityDetailsType::hasProductsProduced() const noexcept {
  return productsProduced_Accessor.has_value();
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::clearProductsProduced() noexcept {
  productsProduced_Accessor.reset();
  return *this;
}

xs::UnsignedInt SearchTrackActivityDetailsType::getHitsReported() const {
  if (hitsReported_Accessor) {
    return *hitsReported_Accessor;
  }
  throw uci::base::UCIException("Error in getHitsReported(): An attempt was made to get an optional field that was not enabled, call hasHitsReported() to determine if it is safe to call getHitsReported()");
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::setHitsReported(xs::UnsignedInt value) {
  hitsReported_Accessor = value;
  return *this;
}

bool SearchTrackActivityDetailsType::hasHitsReported() const noexcept {
  return hitsReported_Accessor.has_value();
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::clearHitsReported() noexcept {
  hitsReported_Accessor.reset();
  return *this;
}

std::unique_ptr<SearchTrackActivityDetailsType> SearchTrackActivityDetailsType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::searchTrackActivityDetailsType : type};
  return (requestedType == uci::type::accessorType::searchTrackActivityDetailsType) ? boost::make_unique<SearchTrackActivityDetailsType>() : nullptr;
}

/**  */
namespace SearchTrackActivityDetailsType_Names {

constexpr const char* Extern_Type_Name{"SearchTrackActivityDetailsType"};
constexpr const char* NumberOfTimesSearched_Name{"NumberOfTimesSearched"};
constexpr const char* TimeLastSearched_Name{"TimeLastSearched"};
constexpr const char* Attempts_Name{"Attempts"};
constexpr const char* ActualRevisitPeriod_Name{"ActualRevisitPeriod"};
constexpr const char* PercentageInFOR_Name{"PercentageInFOR"};
constexpr const char* ActualStartTime_Name{"ActualStartTime"};
constexpr const char* ActualStopTime_Name{"ActualStopTime"};
constexpr const char* PercentSearched_Name{"PercentSearched"};
constexpr const char* EntitiesReported_Name{"EntitiesReported"};
constexpr const char* CueAcquired_Name{"CueAcquired"};
constexpr const char* ProductsProduced_Name{"ProductsProduced"};
constexpr const char* HitsReported_Name{"HitsReported"};

} // namespace SearchTrackActivityDetailsType_Names

void SearchTrackActivityDetailsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SearchTrackActivityDetailsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SearchTrackActivityDetailsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SearchTrackActivityDetailsType_Names::NumberOfTimesSearched_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setNumberOfTimesSearched(asb_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    } else if (valueType.first == nsPrefix + SearchTrackActivityDetailsType_Names::TimeLastSearched_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTimeLastSearched(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + SearchTrackActivityDetailsType_Names::Attempts_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAttempts(asb_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    } else if (valueType.first == nsPrefix + SearchTrackActivityDetailsType_Names::ActualRevisitPeriod_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setActualRevisitPeriod(asb_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    } else if (valueType.first == nsPrefix + SearchTrackActivityDetailsType_Names::PercentageInFOR_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPercentageInFOR(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + SearchTrackActivityDetailsType_Names::ActualStartTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setActualStartTime(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + SearchTrackActivityDetailsType_Names::ActualStopTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setActualStopTime(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + SearchTrackActivityDetailsType_Names::PercentSearched_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPercentSearched(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + SearchTrackActivityDetailsType_Names::EntitiesReported_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEntitiesReported(asb_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    } else if (valueType.first == nsPrefix + SearchTrackActivityDetailsType_Names::CueAcquired_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setCueAcquired(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + SearchTrackActivityDetailsType_Names::ProductsProduced_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setProductsProduced(asb_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    } else if (valueType.first == nsPrefix + SearchTrackActivityDetailsType_Names::HitsReported_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setHitsReported(asb_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    }
  }
}

std::string SearchTrackActivityDetailsType::serialize(const uci::type::SearchTrackActivityDetailsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SearchTrackActivityDetailsType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SearchTrackActivityDetailsType_Names::Extern_Type_Name);
  }
  if (accessor.hasNumberOfTimesSearched()) {
    asb_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getNumberOfTimesSearched(), node, SearchTrackActivityDetailsType_Names::NumberOfTimesSearched_Name);
  }
  if (accessor.hasTimeLastSearched()) {
    asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getTimeLastSearched(), node, SearchTrackActivityDetailsType_Names::TimeLastSearched_Name);
  }
  if (accessor.hasAttempts()) {
    asb_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getAttempts(), node, SearchTrackActivityDetailsType_Names::Attempts_Name);
  }
  if (accessor.hasActualRevisitPeriod()) {
    asb_uci::util::SerializationHelpers::serializeDuration(accessor.getActualRevisitPeriod(), node, SearchTrackActivityDetailsType_Names::ActualRevisitPeriod_Name);
  }
  if (accessor.hasPercentageInFOR()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getPercentageInFOR(), node, SearchTrackActivityDetailsType_Names::PercentageInFOR_Name);
  }
  if (accessor.hasActualStartTime()) {
    asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getActualStartTime(), node, SearchTrackActivityDetailsType_Names::ActualStartTime_Name);
  }
  if (accessor.hasActualStopTime()) {
    asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getActualStopTime(), node, SearchTrackActivityDetailsType_Names::ActualStopTime_Name);
  }
  if (accessor.hasPercentSearched()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getPercentSearched(), node, SearchTrackActivityDetailsType_Names::PercentSearched_Name);
  }
  if (accessor.hasEntitiesReported()) {
    asb_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getEntitiesReported(), node, SearchTrackActivityDetailsType_Names::EntitiesReported_Name);
  }
  if (accessor.hasCueAcquired()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getCueAcquired(), node, SearchTrackActivityDetailsType_Names::CueAcquired_Name);
  }
  if (accessor.hasProductsProduced()) {
    asb_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getProductsProduced(), node, SearchTrackActivityDetailsType_Names::ProductsProduced_Name);
  }
  if (accessor.hasHitsReported()) {
    asb_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getHitsReported(), node, SearchTrackActivityDetailsType_Names::HitsReported_Name);
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

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SearchTrackActivityDetailsType>().release());
}

uci::type::SearchTrackActivityDetailsType& SearchTrackActivityDetailsType::create(const uci::type::SearchTrackActivityDetailsType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SearchTrackActivityDetailsType> newAccessor{boost::make_unique<asb_uci::type::SearchTrackActivityDetailsType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SearchTrackActivityDetailsType::destroy(uci::type::SearchTrackActivityDetailsType& accessor) {
  delete dynamic_cast<asb_uci::type::SearchTrackActivityDetailsType*>(&accessor);
}

} // namespace type

} // namespace uci

