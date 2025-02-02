/** @file SupportedModeType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:23 PM
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

#include "extjson_uci/type/SupportedModeType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/CommAntennaModeType.h"
#include "extjson_uci/type/CommCapabilityEnum.h"
#include "extjson_uci/type/FrequencyRangeType.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/SupportedModeType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace SupportedModeType_Names {

constexpr const char* Extern_Type_Name{"SupportedModeType"};
constexpr const char* AntennaModeIdentifier_Name{"AntennaModeIdentifier"};
constexpr const char* Waveform_Name{"Waveform"};
constexpr const char* UplinkDataRate_Name{"UplinkDataRate"};
constexpr const char* UplinkFrequencyRange_Name{"UplinkFrequencyRange"};
constexpr const char* DownlinkDataRate_Name{"DownlinkDataRate"};
constexpr const char* DownlinkFrequencyRange_Name{"DownlinkFrequencyRange"};
constexpr const char* Gain_Name{"Gain"};
constexpr const char* Beamwidth_Name{"Beamwidth"};

} // namespace SupportedModeType_Names

bool SupportedModeType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SupportedModeType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SupportedModeType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + SupportedModeType_Names::AntennaModeIdentifier_Name) {
      CommAntennaModeType::deserialize(valueType.second, accessor.getAntennaModeIdentifier(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SupportedModeType_Names::Waveform_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getWaveform().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + SupportedModeType_Names::UplinkDataRate_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setUplinkDataRate(extjson_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    } else if (valueType.first == nsPrefix + SupportedModeType_Names::UplinkFrequencyRange_Name) {
      FrequencyRangeType::deserialize(valueType.second, accessor.getUplinkFrequencyRange(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SupportedModeType_Names::DownlinkDataRate_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setDownlinkDataRate(extjson_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    } else if (valueType.first == nsPrefix + SupportedModeType_Names::DownlinkFrequencyRange_Name) {
      FrequencyRangeType::deserialize(valueType.second, accessor.getDownlinkFrequencyRange(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SupportedModeType_Names::Gain_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setGain(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + SupportedModeType_Names::Beamwidth_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setBeamwidth(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    }
  }
  return true;
}

std::string SupportedModeType::serialize(const uci::type::SupportedModeType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? SupportedModeType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, SupportedModeType_Names::Extern_Type_Name);
  }
  CommAntennaModeType::serialize(accessor.getAntennaModeIdentifier(), node, SupportedModeType_Names::AntennaModeIdentifier_Name);
  CommCapabilityEnum::serialize(accessor.getWaveform(), node, SupportedModeType_Names::Waveform_Name, false);
  extjson_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getUplinkDataRate(), node, SupportedModeType_Names::UplinkDataRate_Name);
  FrequencyRangeType::serialize(accessor.getUplinkFrequencyRange(), node, SupportedModeType_Names::UplinkFrequencyRange_Name);
  extjson_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getDownlinkDataRate(), node, SupportedModeType_Names::DownlinkDataRate_Name);
  FrequencyRangeType::serialize(accessor.getDownlinkFrequencyRange(), node, SupportedModeType_Names::DownlinkFrequencyRange_Name);
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getGain(), node, SupportedModeType_Names::Gain_Name);
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getBeamwidth(), node, SupportedModeType_Names::Beamwidth_Name);
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

