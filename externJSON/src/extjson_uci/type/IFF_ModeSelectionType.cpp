/** @file IFF_ModeSelectionType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:22 PM
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

#include "extjson_uci/type/IFF_ModeSelectionType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/IFF_ModesEnum.h"
#include "extjson_uci/type/ModeS_OptionsType.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/IFF_ModeSelectionType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace IFF_ModeSelectionType_Names {

constexpr const char* Extern_Type_Name{"IFF_ModeSelectionType"};
constexpr const char* IFF_Mode_Name{"IFF_Mode"};
constexpr const char* Mode5Format_Name{"Mode5Format"};
constexpr const char* SuppressionPulse_Name{"SuppressionPulse"};
constexpr const char* ModeS_AircraftAddress_Name{"ModeS_AircraftAddress"};
constexpr const char* EHS_BDS_Registers_Name{"EHS_BDS_Registers"};
constexpr const char* ModeS_Options_Name{"ModeS_Options"};

} // namespace IFF_ModeSelectionType_Names

bool IFF_ModeSelectionType::deserialize(const boost::property_tree::ptree& propTree, uci::type::IFF_ModeSelectionType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = IFF_ModeSelectionType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + IFF_ModeSelectionType_Names::IFF_Mode_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getIFF_Mode().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + IFF_ModeSelectionType_Names::Mode5Format_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMode5Format(extjson_uci::util::SerializationHelpers::deserializeUnsignedByte(*value));
      }
    } else if (valueType.first == nsPrefix + IFF_ModeSelectionType_Names::SuppressionPulse_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSuppressionPulse(extjson_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + IFF_ModeSelectionType_Names::ModeS_AircraftAddress_Name) {
      extjson_uci::util::SerializationHelpers::deserializeStringList(valueType.second, accessor.getModeS_AircraftAddress());
    } else if (valueType.first == nsPrefix + IFF_ModeSelectionType_Names::EHS_BDS_Registers_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::IFF_ModeSelectionType::EHS_BDS_Registers& boundedList = accessor.getEHS_BDS_Registers();
        const uci::type::IFF_ModeSelectionType::EHS_BDS_Registers::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        extjson_uci::util::SerializationHelpers::deserializeHexBinary(*value, boundedList.at(boundedListSize));
      }
    } else if (valueType.first == nsPrefix + IFF_ModeSelectionType_Names::ModeS_Options_Name) {
      ModeS_OptionsType::deserialize(valueType.second, accessor.enableModeS_Options(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string IFF_ModeSelectionType::serialize(const uci::type::IFF_ModeSelectionType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? IFF_ModeSelectionType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, IFF_ModeSelectionType_Names::Extern_Type_Name);
  }
  IFF_ModesEnum::serialize(accessor.getIFF_Mode(), node, IFF_ModeSelectionType_Names::IFF_Mode_Name, false);
  if (accessor.hasMode5Format()) {
    extjson_uci::util::SerializationHelpers::serializeUnsignedByte(accessor.getMode5Format(), node, IFF_ModeSelectionType_Names::Mode5Format_Name);
  }
  extjson_uci::util::SerializationHelpers::serializeBoolean(accessor.getSuppressionPulse(), node, IFF_ModeSelectionType_Names::SuppressionPulse_Name);
  {
    extjson_uci::util::SerializationHelpers::serializeStringList(accessor.getModeS_AircraftAddress(), node, IFF_ModeSelectionType_Names::ModeS_AircraftAddress_Name);
  }
  {
    extjson_uci::util::SerializationHelpers::serializeHexBinaryList(accessor.getEHS_BDS_Registers(), node, IFF_ModeSelectionType_Names::EHS_BDS_Registers_Name);
  }
  if (accessor.hasModeS_Options()) {
    ModeS_OptionsType::serialize(accessor.getModeS_Options(), node, IFF_ModeSelectionType_Names::ModeS_Options_Name);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

