/** @file CommBLOS_CommWaveformActivityType.cpp
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

#include "../../../include/asb_uci/type/CommBLOS_CommWaveformActivityType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CommBLOS_ControlStatusType.h"
#include "../../../include/asb_uci/type/CommWaveformActivityPET.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommBLOS_CommWaveformActivityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommBLOS_ControlStatusType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

CommBLOS_CommWaveformActivityType::CommBLOS_CommWaveformActivityType()
  : settingsStatus_Accessor{boost::make_unique<CommBLOS_ControlStatusType>()} {
}

CommBLOS_CommWaveformActivityType::~CommBLOS_CommWaveformActivityType() = default;

void CommBLOS_CommWaveformActivityType::copy(const uci::type::CommBLOS_CommWaveformActivityType& accessor) {
  copyImpl(accessor, false);
}

void CommBLOS_CommWaveformActivityType::copyImpl(const uci::type::CommBLOS_CommWaveformActivityType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    CommWaveformActivityPET::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const CommBLOS_CommWaveformActivityType&>(accessor);
    setSettingsStatus(*(accessorImpl.settingsStatus_Accessor));
  }
}

void CommBLOS_CommWaveformActivityType::reset() noexcept {
  CommWaveformActivityPET::reset();
  settingsStatus_Accessor->reset();
}

const uci::type::CommBLOS_ControlStatusType& CommBLOS_CommWaveformActivityType::getSettingsStatus() const {
  return *settingsStatus_Accessor;
}

uci::type::CommBLOS_ControlStatusType& CommBLOS_CommWaveformActivityType::getSettingsStatus() {
  return *settingsStatus_Accessor;
}

uci::type::CommBLOS_CommWaveformActivityType& CommBLOS_CommWaveformActivityType::setSettingsStatus(const uci::type::CommBLOS_ControlStatusType& accessor) {
  if (&accessor != settingsStatus_Accessor.get()) {
    settingsStatus_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<CommBLOS_CommWaveformActivityType> CommBLOS_CommWaveformActivityType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commBLOS_CommWaveformActivityType : type};
  return (requestedType == uci::type::accessorType::commBLOS_CommWaveformActivityType) ? boost::make_unique<CommBLOS_CommWaveformActivityType>() : nullptr;
}

/**  */
namespace CommBLOS_CommWaveformActivityType_Names {

constexpr const char* Extern_Type_Name{"CommBLOS_CommWaveformActivityType"};
constexpr const char* SettingsStatus_Name{"SettingsStatus"};

} // namespace CommBLOS_CommWaveformActivityType_Names

void CommBLOS_CommWaveformActivityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CommBLOS_CommWaveformActivityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CommBLOS_CommWaveformActivityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CommBLOS_CommWaveformActivityType_Names::SettingsStatus_Name) {
      CommBLOS_ControlStatusType::deserialize(valueType.second, accessor.getSettingsStatus(), nodeName, nsPrefix);
    }
  }
  CommWaveformActivityPET::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string CommBLOS_CommWaveformActivityType::serialize(const uci::type::CommBLOS_CommWaveformActivityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? CommBLOS_CommWaveformActivityType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, CommBLOS_CommWaveformActivityType_Names::Extern_Type_Name);
  }
  CommWaveformActivityPET::serialize(accessor, node, "", false, false, false);
  CommBLOS_ControlStatusType::serialize(accessor.getSettingsStatus(), node, CommBLOS_CommWaveformActivityType_Names::SettingsStatus_Name);
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

uci::type::CommBLOS_CommWaveformActivityType& CommBLOS_CommWaveformActivityType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::CommBLOS_CommWaveformActivityType>().release());
}

uci::type::CommBLOS_CommWaveformActivityType& CommBLOS_CommWaveformActivityType::create(const uci::type::CommBLOS_CommWaveformActivityType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::CommBLOS_CommWaveformActivityType> newAccessor{boost::make_unique<asb_uci::type::CommBLOS_CommWaveformActivityType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void CommBLOS_CommWaveformActivityType::destroy(uci::type::CommBLOS_CommWaveformActivityType& accessor) {
  delete dynamic_cast<asb_uci::type::CommBLOS_CommWaveformActivityType*>(&accessor);
}

} // namespace type

} // namespace uci

