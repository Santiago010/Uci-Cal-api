/** @file MetricsType.cpp
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

#include "../../../include/asb_uci/type/MetricsType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/EnduranceType.h"
#include "../../../include/asb_uci/type/ExpendableType.h"
#include "../../../include/asb_uci/type/WeaponStoreType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EnduranceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ExpendableType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MetricsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/WeaponStoreType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

MetricsType::MetricsType()
  : expendables_Accessor{boost::make_unique<Expendables>(0, SIZE_MAX)},
    weapons_Accessor{boost::make_unique<Weapons>(0, SIZE_MAX)} {
}

MetricsType::~MetricsType() = default;

void MetricsType::copy(const uci::type::MetricsType& accessor) {
  copyImpl(accessor, false);
}

void MetricsType::copyImpl(const uci::type::MetricsType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const MetricsType&>(accessor);
    if (accessorImpl.enduranceUsage_Accessor) {
      setEnduranceUsage(*(accessorImpl.enduranceUsage_Accessor));
    } else {
      enduranceUsage_Accessor.reset();
    }
    setExpendables(*(accessorImpl.expendables_Accessor));
    setWeapons(*(accessorImpl.weapons_Accessor));
  }
}

void MetricsType::reset() noexcept {
  enduranceUsage_Accessor.reset();
  expendables_Accessor->reset();
  weapons_Accessor->reset();
}

uci::type::EnduranceType& MetricsType::getEnduranceUsage_() const {
  if (enduranceUsage_Accessor) {
    return *enduranceUsage_Accessor;
  }
  throw uci::base::UCIException("Error in getEnduranceUsage(): An attempt was made to get an optional field that was not enabled, call hasEnduranceUsage() to determine if it is safe to call getEnduranceUsage()");
}

const uci::type::EnduranceType& MetricsType::getEnduranceUsage() const {
  return getEnduranceUsage_();
}

uci::type::EnduranceType& MetricsType::getEnduranceUsage() {
  return getEnduranceUsage_();
}

uci::type::MetricsType& MetricsType::setEnduranceUsage(const uci::type::EnduranceType& accessor) {
  enableEnduranceUsage();
  if (&accessor != enduranceUsage_Accessor.get()) {
    enduranceUsage_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool MetricsType::hasEnduranceUsage() const noexcept {
  return static_cast<bool>(enduranceUsage_Accessor);
}

uci::type::EnduranceType& MetricsType::enableEnduranceUsage(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::enduranceType : type};
  if ((!enduranceUsage_Accessor) || (enduranceUsage_Accessor->getAccessorType() != requestedType)) {
    enduranceUsage_Accessor = EnduranceType::create(requestedType);
    if (!enduranceUsage_Accessor) {
      throw uci::base::UCIException("Error in enableEnduranceUsage(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *enduranceUsage_Accessor;
}

uci::type::MetricsType& MetricsType::clearEnduranceUsage() noexcept {
  enduranceUsage_Accessor.reset();
  return *this;
}

const uci::type::MetricsType::Expendables& MetricsType::getExpendables() const {
  return *expendables_Accessor;
}

uci::type::MetricsType::Expendables& MetricsType::getExpendables() {
  return *expendables_Accessor;
}

uci::type::MetricsType& MetricsType::setExpendables(const uci::type::MetricsType::Expendables& accessor) {
  if (&accessor != expendables_Accessor.get()) {
    expendables_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::MetricsType::Weapons& MetricsType::getWeapons() const {
  return *weapons_Accessor;
}

uci::type::MetricsType::Weapons& MetricsType::getWeapons() {
  return *weapons_Accessor;
}

uci::type::MetricsType& MetricsType::setWeapons(const uci::type::MetricsType::Weapons& accessor) {
  if (&accessor != weapons_Accessor.get()) {
    weapons_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<MetricsType> MetricsType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::metricsType : type};
  return (requestedType == uci::type::accessorType::metricsType) ? boost::make_unique<MetricsType>() : nullptr;
}

/**  */
namespace MetricsType_Names {

constexpr const char* Extern_Type_Name{"MetricsType"};
constexpr const char* EnduranceUsage_Name{"EnduranceUsage"};
constexpr const char* Expendables_Name{"Expendables"};
constexpr const char* Weapons_Name{"Weapons"};

} // namespace MetricsType_Names

void MetricsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::MetricsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = MetricsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + MetricsType_Names::EnduranceUsage_Name) {
      EnduranceType::deserialize(valueType.second, accessor.enableEnduranceUsage(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + MetricsType_Names::Expendables_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::MetricsType::Expendables& boundedList = accessor.getExpendables();
        const uci::type::MetricsType::Expendables::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::ExpendableType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + MetricsType_Names::Weapons_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::MetricsType::Weapons& boundedList = accessor.getWeapons();
        const uci::type::MetricsType::Weapons::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::WeaponStoreType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string MetricsType::serialize(const uci::type::MetricsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? MetricsType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, MetricsType_Names::Extern_Type_Name);
  }
  if (accessor.hasEnduranceUsage()) {
    EnduranceType::serialize(accessor.getEnduranceUsage(), node, MetricsType_Names::EnduranceUsage_Name);
  }
  {
    const uci::type::MetricsType::Expendables& boundedList = accessor.getExpendables();
    for (uci::type::MetricsType::Expendables::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ExpendableType::serialize(boundedList.at(i), node, MetricsType_Names::Expendables_Name);
    }
  }
  {
    const uci::type::MetricsType::Weapons& boundedList = accessor.getWeapons();
    for (uci::type::MetricsType::Weapons::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::WeaponStoreType::serialize(boundedList.at(i), node, MetricsType_Names::Weapons_Name);
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

uci::type::MetricsType& MetricsType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::MetricsType>().release());
}

uci::type::MetricsType& MetricsType::create(const uci::type::MetricsType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::MetricsType> newAccessor{boost::make_unique<asb_uci::type::MetricsType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void MetricsType::destroy(uci::type::MetricsType& accessor) {
  delete dynamic_cast<asb_uci::type::MetricsType*>(&accessor);
}

} // namespace type

} // namespace uci

