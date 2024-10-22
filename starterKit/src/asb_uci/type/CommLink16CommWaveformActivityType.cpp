/** @file CommLink16CommWaveformActivityType.cpp
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

#include "../../../include/asb_uci/type/CommLink16CommWaveformActivityType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CommLink16ControlType.h"
#include "../../../include/asb_uci/type/CommWaveformActivityPET.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommLink16CommWaveformActivityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommLink16ControlType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Link16_MessageGenerationRateType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Link16_ParticipationGroupIndexType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

CommLink16CommWaveformActivityType::CommLink16CommWaveformActivityType() = default;

CommLink16CommWaveformActivityType::~CommLink16CommWaveformActivityType() = default;

void CommLink16CommWaveformActivityType::copy(const uci::type::CommLink16CommWaveformActivityType& accessor) {
  copyImpl(accessor, false);
}

void CommLink16CommWaveformActivityType::copyImpl(const uci::type::CommLink16CommWaveformActivityType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    CommWaveformActivityPET::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const CommLink16CommWaveformActivityType&>(accessor);
    if (accessorImpl.settingsStatus_Accessor) {
      setSettingsStatus(*(accessorImpl.settingsStatus_Accessor));
    } else {
      settingsStatus_Accessor.reset();
    }
    if (accessorImpl.hasPPLI_MsgGenPPLI_PG()) {
      setPPLI_MsgGenPPLI_PG(accessorImpl.getPPLI_MsgGenPPLI_PG());
    } else {
      clearPPLI_MsgGenPPLI_PG();
    }
    if (accessorImpl.hasPPLI_MsgGenTxRate()) {
      setPPLI_MsgGenTxRate(accessorImpl.getPPLI_MsgGenTxRate());
    } else {
      clearPPLI_MsgGenTxRate();
    }
  }
}

void CommLink16CommWaveformActivityType::reset() noexcept {
  CommWaveformActivityPET::reset();
  settingsStatus_Accessor.reset();
  clearPPLI_MsgGenPPLI_PG();
  clearPPLI_MsgGenTxRate();
}

uci::type::CommLink16ControlType& CommLink16CommWaveformActivityType::getSettingsStatus_() const {
  if (settingsStatus_Accessor) {
    return *settingsStatus_Accessor;
  }
  throw uci::base::UCIException("Error in getSettingsStatus(): An attempt was made to get an optional field that was not enabled, call hasSettingsStatus() to determine if it is safe to call getSettingsStatus()");
}

const uci::type::CommLink16ControlType& CommLink16CommWaveformActivityType::getSettingsStatus() const {
  return getSettingsStatus_();
}

uci::type::CommLink16ControlType& CommLink16CommWaveformActivityType::getSettingsStatus() {
  return getSettingsStatus_();
}

uci::type::CommLink16CommWaveformActivityType& CommLink16CommWaveformActivityType::setSettingsStatus(const uci::type::CommLink16ControlType& accessor) {
  enableSettingsStatus();
  if (&accessor != settingsStatus_Accessor.get()) {
    settingsStatus_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool CommLink16CommWaveformActivityType::hasSettingsStatus() const noexcept {
  return static_cast<bool>(settingsStatus_Accessor);
}

uci::type::CommLink16ControlType& CommLink16CommWaveformActivityType::enableSettingsStatus(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commLink16ControlType : type};
  if ((!settingsStatus_Accessor) || (settingsStatus_Accessor->getAccessorType() != requestedType)) {
    settingsStatus_Accessor = CommLink16ControlType::create(requestedType);
    if (!settingsStatus_Accessor) {
      throw uci::base::UCIException("Error in enableSettingsStatus(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *settingsStatus_Accessor;
}

uci::type::CommLink16CommWaveformActivityType& CommLink16CommWaveformActivityType::clearSettingsStatus() noexcept {
  settingsStatus_Accessor.reset();
  return *this;
}

uci::type::Link16_ParticipationGroupIndexTypeValue CommLink16CommWaveformActivityType::getPPLI_MsgGenPPLI_PG() const {
  if (pPLI_MsgGenPPLI_PG_Accessor) {
    return *pPLI_MsgGenPPLI_PG_Accessor;
  }
  throw uci::base::UCIException("Error in getPPLI_MsgGenPPLI_PG(): An attempt was made to get an optional field that was not enabled, call hasPPLI_MsgGenPPLI_PG() to determine if it is safe to call getPPLI_MsgGenPPLI_PG()");
}

uci::type::CommLink16CommWaveformActivityType& CommLink16CommWaveformActivityType::setPPLI_MsgGenPPLI_PG(uci::type::Link16_ParticipationGroupIndexTypeValue value) {
  pPLI_MsgGenPPLI_PG_Accessor = value;
  return *this;
}

bool CommLink16CommWaveformActivityType::hasPPLI_MsgGenPPLI_PG() const noexcept {
  return pPLI_MsgGenPPLI_PG_Accessor.has_value();
}

uci::type::CommLink16CommWaveformActivityType& CommLink16CommWaveformActivityType::clearPPLI_MsgGenPPLI_PG() noexcept {
  pPLI_MsgGenPPLI_PG_Accessor.reset();
  return *this;
}

uci::type::Link16_MessageGenerationRateTypeValue CommLink16CommWaveformActivityType::getPPLI_MsgGenTxRate() const {
  if (pPLI_MsgGenTxRate_Accessor) {
    return *pPLI_MsgGenTxRate_Accessor;
  }
  throw uci::base::UCIException("Error in getPPLI_MsgGenTxRate(): An attempt was made to get an optional field that was not enabled, call hasPPLI_MsgGenTxRate() to determine if it is safe to call getPPLI_MsgGenTxRate()");
}

uci::type::CommLink16CommWaveformActivityType& CommLink16CommWaveformActivityType::setPPLI_MsgGenTxRate(uci::type::Link16_MessageGenerationRateTypeValue value) {
  pPLI_MsgGenTxRate_Accessor = value;
  return *this;
}

bool CommLink16CommWaveformActivityType::hasPPLI_MsgGenTxRate() const noexcept {
  return pPLI_MsgGenTxRate_Accessor.has_value();
}

uci::type::CommLink16CommWaveformActivityType& CommLink16CommWaveformActivityType::clearPPLI_MsgGenTxRate() noexcept {
  pPLI_MsgGenTxRate_Accessor.reset();
  return *this;
}

std::unique_ptr<CommLink16CommWaveformActivityType> CommLink16CommWaveformActivityType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::commLink16CommWaveformActivityType : type};
  return (requestedType == uci::type::accessorType::commLink16CommWaveformActivityType) ? boost::make_unique<CommLink16CommWaveformActivityType>() : nullptr;
}

/**  */
namespace CommLink16CommWaveformActivityType_Names {

constexpr const char* Extern_Type_Name{"CommLink16CommWaveformActivityType"};
constexpr const char* SettingsStatus_Name{"SettingsStatus"};
constexpr const char* PPLI_MsgGenPPLI_PG_Name{"PPLI_MsgGenPPLI_PG"};
constexpr const char* PPLI_MsgGenTxRate_Name{"PPLI_MsgGenTxRate"};

} // namespace CommLink16CommWaveformActivityType_Names

void CommLink16CommWaveformActivityType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CommLink16CommWaveformActivityType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CommLink16CommWaveformActivityType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CommLink16CommWaveformActivityType_Names::SettingsStatus_Name) {
      CommLink16ControlType::deserialize(valueType.second, accessor.enableSettingsStatus(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CommLink16CommWaveformActivityType_Names::PPLI_MsgGenPPLI_PG_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPPLI_MsgGenPPLI_PG(asb_uci::util::SerializationHelpers::deserializeUnsignedShort(*value));
      }
    } else if (valueType.first == nsPrefix + CommLink16CommWaveformActivityType_Names::PPLI_MsgGenTxRate_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPPLI_MsgGenTxRate(asb_uci::util::SerializationHelpers::deserializeUnsignedByte(*value));
      }
    }
  }
  CommWaveformActivityPET::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string CommLink16CommWaveformActivityType::serialize(const uci::type::CommLink16CommWaveformActivityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? CommLink16CommWaveformActivityType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, CommLink16CommWaveformActivityType_Names::Extern_Type_Name);
  }
  CommWaveformActivityPET::serialize(accessor, node, "", false, false, false);
  if (accessor.hasSettingsStatus()) {
    CommLink16ControlType::serialize(accessor.getSettingsStatus(), node, CommLink16CommWaveformActivityType_Names::SettingsStatus_Name);
  }
  if (accessor.hasPPLI_MsgGenPPLI_PG()) {
    asb_uci::util::SerializationHelpers::serializeUnsignedShort(accessor.getPPLI_MsgGenPPLI_PG(), node, CommLink16CommWaveformActivityType_Names::PPLI_MsgGenPPLI_PG_Name);
  }
  if (accessor.hasPPLI_MsgGenTxRate()) {
    asb_uci::util::SerializationHelpers::serializeUnsignedByte(accessor.getPPLI_MsgGenTxRate(), node, CommLink16CommWaveformActivityType_Names::PPLI_MsgGenTxRate_Name);
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

uci::type::CommLink16CommWaveformActivityType& CommLink16CommWaveformActivityType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::CommLink16CommWaveformActivityType>().release());
}

uci::type::CommLink16CommWaveformActivityType& CommLink16CommWaveformActivityType::create(const uci::type::CommLink16CommWaveformActivityType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::CommLink16CommWaveformActivityType> newAccessor{boost::make_unique<asb_uci::type::CommLink16CommWaveformActivityType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void CommLink16CommWaveformActivityType::destroy(uci::type::CommLink16CommWaveformActivityType& accessor) {
  delete dynamic_cast<asb_uci::type::CommLink16CommWaveformActivityType*>(&accessor);
}

} // namespace type

} // namespace uci

