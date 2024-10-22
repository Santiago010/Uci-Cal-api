/** @file ModeS_OptionsType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:19 PM
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

#include "extxml_uci/type/ModeS_OptionsType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/IFF_ModeS_SupportEnum.h"
#include "extxml_uci/type/MaxPOR_Enum.h"
#include "extxml_uci/type/ModeS_InterrogatorAddressType.h"
#include "extxml_uci/type/SpecificBDS_RegistersType.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/ModeS_OptionsType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace ModeS_OptionsType_Names {

constexpr const char* Extern_Type_Name{"ModeS_OptionsType"};
constexpr const char* ModeS_InterrogatorAddress_Name{"ModeS_InterrogatorAddress"};
constexpr const char* ShortP4Enable_Name{"ShortP4Enable"};
constexpr const char* ModeS_Type_Name{"ModeS_Type"};
constexpr const char* SpecificBDS_Registers_Name{"SpecificBDS_Registers"};
constexpr const char* AllCallEnable_Name{"AllCallEnable"};
constexpr const char* LockoutEnable_Name{"LockoutEnable"};
constexpr const char* LockoutOverrideEnable_Name{"LockoutOverrideEnable"};
constexpr const char* MixedModeLockoutEnable_Name{"MixedModeLockoutEnable"};
constexpr const char* MaxPOR_Name{"MaxPOR"};

} // namespace ModeS_OptionsType_Names

bool ModeS_OptionsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ModeS_OptionsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ModeS_OptionsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ModeS_OptionsType_Names::ModeS_InterrogatorAddress_Name) {
      ModeS_InterrogatorAddressType::deserialize(valueType.second, accessor.getModeS_InterrogatorAddress(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ModeS_OptionsType_Names::ShortP4Enable_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setShortP4Enable(extxml_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + ModeS_OptionsType_Names::ModeS_Type_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getModeS_Type().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ModeS_OptionsType_Names::SpecificBDS_Registers_Name) {
      SpecificBDS_RegistersType::deserialize(valueType.second, accessor.enableSpecificBDS_Registers(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ModeS_OptionsType_Names::AllCallEnable_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAllCallEnable(extxml_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + ModeS_OptionsType_Names::LockoutEnable_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setLockoutEnable(extxml_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + ModeS_OptionsType_Names::LockoutOverrideEnable_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setLockoutOverrideEnable(extxml_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + ModeS_OptionsType_Names::MixedModeLockoutEnable_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMixedModeLockoutEnable(extxml_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + ModeS_OptionsType_Names::MaxPOR_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getMaxPOR().setValueFromName(*value);
      }
    }
  }
  return true;
}

std::string ModeS_OptionsType::serialize(const uci::type::ModeS_OptionsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? ModeS_OptionsType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, ModeS_OptionsType_Names::Extern_Type_Name);
  }
  ModeS_InterrogatorAddressType::serialize(accessor.getModeS_InterrogatorAddress(), node, ModeS_OptionsType_Names::ModeS_InterrogatorAddress_Name);
  extxml_uci::util::SerializationHelpers::serializeBoolean(accessor.getShortP4Enable(), node, ModeS_OptionsType_Names::ShortP4Enable_Name);
  IFF_ModeS_SupportEnum::serialize(accessor.getModeS_Type(), node, ModeS_OptionsType_Names::ModeS_Type_Name, false);
  if (accessor.hasSpecificBDS_Registers()) {
    SpecificBDS_RegistersType::serialize(accessor.getSpecificBDS_Registers(), node, ModeS_OptionsType_Names::SpecificBDS_Registers_Name);
  }
  extxml_uci::util::SerializationHelpers::serializeBoolean(accessor.getAllCallEnable(), node, ModeS_OptionsType_Names::AllCallEnable_Name);
  extxml_uci::util::SerializationHelpers::serializeBoolean(accessor.getLockoutEnable(), node, ModeS_OptionsType_Names::LockoutEnable_Name);
  extxml_uci::util::SerializationHelpers::serializeBoolean(accessor.getLockoutOverrideEnable(), node, ModeS_OptionsType_Names::LockoutOverrideEnable_Name);
  extxml_uci::util::SerializationHelpers::serializeBoolean(accessor.getMixedModeLockoutEnable(), node, ModeS_OptionsType_Names::MixedModeLockoutEnable_Name);
  MaxPOR_Enum::serialize(accessor.getMaxPOR(), node, ModeS_OptionsType_Names::MaxPOR_Name, false);
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

