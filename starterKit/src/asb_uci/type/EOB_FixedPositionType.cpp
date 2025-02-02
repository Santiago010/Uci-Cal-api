/** @file EOB_FixedPositionType.cpp
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

#include "../../../include/asb_uci/type/EOB_FixedPositionType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/FixedPositionType.h"
#include "../../../include/asb_uci/type/MilitaryGridStringType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DistanceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EOB_FixedPositionType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MilitaryGridStringType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

EOB_FixedPositionType::EOB_FixedPositionType() = default;

EOB_FixedPositionType::~EOB_FixedPositionType() = default;

void EOB_FixedPositionType::copy(const uci::type::EOB_FixedPositionType& accessor) {
  copyImpl(accessor, false);
}

void EOB_FixedPositionType::copyImpl(const uci::type::EOB_FixedPositionType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    FixedPositionType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const EOB_FixedPositionType&>(accessor);
    if (accessorImpl.hasRadiusOfAccuracy()) {
      setRadiusOfAccuracy(accessorImpl.getRadiusOfAccuracy());
    } else {
      clearRadiusOfAccuracy();
    }
    if (accessorImpl.militaryGrid_Accessor) {
      setMilitaryGrid(*(accessorImpl.militaryGrid_Accessor));
    } else {
      militaryGrid_Accessor.reset();
    }
  }
}

void EOB_FixedPositionType::reset() noexcept {
  FixedPositionType::reset();
  clearRadiusOfAccuracy();
  militaryGrid_Accessor.reset();
}

uci::type::DistanceTypeValue EOB_FixedPositionType::getRadiusOfAccuracy() const {
  if (radiusOfAccuracy_Accessor) {
    return *radiusOfAccuracy_Accessor;
  }
  throw uci::base::UCIException("Error in getRadiusOfAccuracy(): An attempt was made to get an optional field that was not enabled, call hasRadiusOfAccuracy() to determine if it is safe to call getRadiusOfAccuracy()");
}

uci::type::EOB_FixedPositionType& EOB_FixedPositionType::setRadiusOfAccuracy(uci::type::DistanceTypeValue value) {
  radiusOfAccuracy_Accessor = value;
  return *this;
}

bool EOB_FixedPositionType::hasRadiusOfAccuracy() const noexcept {
  return radiusOfAccuracy_Accessor.has_value();
}

uci::type::EOB_FixedPositionType& EOB_FixedPositionType::clearRadiusOfAccuracy() noexcept {
  radiusOfAccuracy_Accessor.reset();
  return *this;
}

uci::type::MilitaryGridStringType& EOB_FixedPositionType::getMilitaryGrid_() const {
  if (militaryGrid_Accessor) {
    return *militaryGrid_Accessor;
  }
  throw uci::base::UCIException("Error in getMilitaryGrid(): An attempt was made to get an optional field that was not enabled, call hasMilitaryGrid() to determine if it is safe to call getMilitaryGrid()");
}

const uci::type::MilitaryGridStringType& EOB_FixedPositionType::getMilitaryGrid() const {
  return getMilitaryGrid_();
}

uci::type::MilitaryGridStringType& EOB_FixedPositionType::getMilitaryGrid() {
  return getMilitaryGrid_();
}

uci::type::EOB_FixedPositionType& EOB_FixedPositionType::setMilitaryGrid(const uci::type::MilitaryGridStringType& value) {
  return setMilitaryGrid(value.c_str());
}

uci::type::EOB_FixedPositionType& EOB_FixedPositionType::setMilitaryGrid(const std::string& value) {
  return setMilitaryGrid(value.c_str());
}

uci::type::EOB_FixedPositionType& EOB_FixedPositionType::setMilitaryGrid(const char* value) {
  enableMilitaryGrid().setStringValue(value);
  return *this;
}

bool EOB_FixedPositionType::hasMilitaryGrid() const noexcept {
  return static_cast<bool>(militaryGrid_Accessor);
}

uci::type::MilitaryGridStringType& EOB_FixedPositionType::enableMilitaryGrid(uci::base::accessorType::AccessorType type) {
  if (!militaryGrid_Accessor) {
    militaryGrid_Accessor = MilitaryGridStringType::create(type);
  }
  return *militaryGrid_Accessor;
}

uci::type::EOB_FixedPositionType& EOB_FixedPositionType::clearMilitaryGrid() noexcept {
  militaryGrid_Accessor.reset();
  return *this;
}

std::unique_ptr<EOB_FixedPositionType> EOB_FixedPositionType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::eOB_FixedPositionType : type};
  return (requestedType == uci::type::accessorType::eOB_FixedPositionType) ? boost::make_unique<EOB_FixedPositionType>() : nullptr;
}

/**  */
namespace EOB_FixedPositionType_Names {

constexpr const char* Extern_Type_Name{"EOB_FixedPositionType"};
constexpr const char* RadiusOfAccuracy_Name{"RadiusOfAccuracy"};
constexpr const char* MilitaryGrid_Name{"MilitaryGrid"};

} // namespace EOB_FixedPositionType_Names

void EOB_FixedPositionType::deserialize(const boost::property_tree::ptree& propTree, uci::type::EOB_FixedPositionType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EOB_FixedPositionType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + EOB_FixedPositionType_Names::RadiusOfAccuracy_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRadiusOfAccuracy(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + EOB_FixedPositionType_Names::MilitaryGrid_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMilitaryGrid(*value);
      }
    }
  }
  FixedPositionType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string EOB_FixedPositionType::serialize(const uci::type::EOB_FixedPositionType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? EOB_FixedPositionType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, EOB_FixedPositionType_Names::Extern_Type_Name);
  }
  FixedPositionType::serialize(accessor, node, "", false, false, false);
  if (accessor.hasRadiusOfAccuracy()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getRadiusOfAccuracy(), node, EOB_FixedPositionType_Names::RadiusOfAccuracy_Name);
  }
  if (accessor.hasMilitaryGrid()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getMilitaryGrid(), node, EOB_FixedPositionType_Names::MilitaryGrid_Name);
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

uci::type::EOB_FixedPositionType& EOB_FixedPositionType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::EOB_FixedPositionType>().release());
}

uci::type::EOB_FixedPositionType& EOB_FixedPositionType::create(const uci::type::EOB_FixedPositionType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::EOB_FixedPositionType> newAccessor{boost::make_unique<asb_uci::type::EOB_FixedPositionType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void EOB_FixedPositionType::destroy(uci::type::EOB_FixedPositionType& accessor) {
  delete dynamic_cast<asb_uci::type::EOB_FixedPositionType*>(&accessor);
}

} // namespace type

} // namespace uci

