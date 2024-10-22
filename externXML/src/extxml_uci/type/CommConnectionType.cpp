/** @file CommConnectionType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:18 PM
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

#include "extxml_uci/type/CommConnectionType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/CommModulationTypeEnum.h"
#include "extxml_uci/type/ForeignKeyType.h"
#include "extxml_uci/util/DerivedTypesDeserializer.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/CommConnectionType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace CommConnectionType_Names {

constexpr const char* Extern_Type_Name{"CommConnectionType"};
constexpr const char* TransmitChannel_Name{"TransmitChannel"};
constexpr const char* TransmitFrequency_Name{"TransmitFrequency"};
constexpr const char* InstantaneousTransmitBandwidth_Name{"InstantaneousTransmitBandwidth"};
constexpr const char* ReceiveChannel_Name{"ReceiveChannel"};
constexpr const char* ReceiveFrequency_Name{"ReceiveFrequency"};
constexpr const char* InstantaneousReceiveBandwidth_Name{"InstantaneousReceiveBandwidth"};
constexpr const char* Modulation_Name{"Modulation"};
constexpr const char* NetworkKey_Name{"NetworkKey"};
constexpr const char* NetworkTimeRef_Name{"NetworkTimeRef"};
constexpr const char* ExternalTimeRef_Name{"ExternalTimeRef"};
constexpr const char* NetworkTime_Name{"NetworkTime"};
constexpr const char* NetworkTimeUncertaintyRange_Name{"NetworkTimeUncertaintyRange"};
constexpr const char* NetworkTimeOffset_Name{"NetworkTimeOffset"};

} // namespace CommConnectionType_Names

bool CommConnectionType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CommConnectionType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CommConnectionType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CommConnectionType_Names::TransmitChannel_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::CommConnectionType::TransmitChannel& boundedList = accessor.getTransmitChannel();
        const uci::type::CommConnectionType::TransmitChannel::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1, extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix));
        extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + CommConnectionType_Names::TransmitFrequency_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::CommConnectionType::TransmitFrequency& boundedList = accessor.getTransmitFrequency();
        const uci::type::CommConnectionType::TransmitFrequency::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setDoubleValue(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + CommConnectionType_Names::InstantaneousTransmitBandwidth_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setInstantaneousTransmitBandwidth(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + CommConnectionType_Names::ReceiveChannel_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::CommConnectionType::ReceiveChannel& boundedList = accessor.getReceiveChannel();
        const uci::type::CommConnectionType::ReceiveChannel::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1, extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix));
        extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + CommConnectionType_Names::ReceiveFrequency_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::CommConnectionType::ReceiveFrequency& boundedList = accessor.getReceiveFrequency();
        const uci::type::CommConnectionType::ReceiveFrequency::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setDoubleValue(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + CommConnectionType_Names::InstantaneousReceiveBandwidth_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setInstantaneousReceiveBandwidth(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + CommConnectionType_Names::Modulation_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableModulation().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + CommConnectionType_Names::NetworkKey_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::CommConnectionType::NetworkKey& boundedList = accessor.getNetworkKey();
        const uci::type::CommConnectionType::NetworkKey::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1, extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix));
        extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + CommConnectionType_Names::NetworkTimeRef_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setNetworkTimeRef(extxml_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + CommConnectionType_Names::ExternalTimeRef_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setExternalTimeRef(extxml_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + CommConnectionType_Names::NetworkTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setNetworkTime(extxml_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + CommConnectionType_Names::NetworkTimeUncertaintyRange_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setNetworkTimeUncertaintyRange(extxml_uci::util::SerializationHelpers::deserializeFloat(*value));
      }
    } else if (valueType.first == nsPrefix + CommConnectionType_Names::NetworkTimeOffset_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setNetworkTimeOffset(extxml_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    }
  }
  return true;
}

std::string CommConnectionType::serialize(const uci::type::CommConnectionType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? CommConnectionType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, CommConnectionType_Names::Extern_Type_Name);
  }
  {
    const uci::type::CommConnectionType::TransmitChannel& boundedList = accessor.getTransmitChannel();
    for (uci::type::CommConnectionType::TransmitChannel::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      ForeignKeyType::serialize(boundedList.at(i), node, CommConnectionType_Names::TransmitChannel_Name);
    }
  }
  {
    const uci::type::CommConnectionType::TransmitFrequency& boundedList = accessor.getTransmitFrequency();
    for (uci::type::CommConnectionType::TransmitFrequency::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      extxml_uci::util::SerializationHelpers::serializeDouble(boundedList.at(i), node, CommConnectionType_Names::TransmitFrequency_Name);
    }
  }
  if (accessor.hasInstantaneousTransmitBandwidth()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getInstantaneousTransmitBandwidth(), node, CommConnectionType_Names::InstantaneousTransmitBandwidth_Name);
  }
  {
    const uci::type::CommConnectionType::ReceiveChannel& boundedList = accessor.getReceiveChannel();
    for (uci::type::CommConnectionType::ReceiveChannel::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      ForeignKeyType::serialize(boundedList.at(i), node, CommConnectionType_Names::ReceiveChannel_Name);
    }
  }
  {
    const uci::type::CommConnectionType::ReceiveFrequency& boundedList = accessor.getReceiveFrequency();
    for (uci::type::CommConnectionType::ReceiveFrequency::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      extxml_uci::util::SerializationHelpers::serializeDouble(boundedList.at(i), node, CommConnectionType_Names::ReceiveFrequency_Name);
    }
  }
  if (accessor.hasInstantaneousReceiveBandwidth()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getInstantaneousReceiveBandwidth(), node, CommConnectionType_Names::InstantaneousReceiveBandwidth_Name);
  }
  if (accessor.hasModulation()) {
    CommModulationTypeEnum::serialize(accessor.getModulation(), node, CommConnectionType_Names::Modulation_Name, false);
  }
  {
    const uci::type::CommConnectionType::NetworkKey& boundedList = accessor.getNetworkKey();
    for (uci::type::CommConnectionType::NetworkKey::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      ForeignKeyType::serialize(boundedList.at(i), node, CommConnectionType_Names::NetworkKey_Name);
    }
  }
  if (accessor.hasNetworkTimeRef()) {
    extxml_uci::util::SerializationHelpers::serializeBoolean(accessor.getNetworkTimeRef(), node, CommConnectionType_Names::NetworkTimeRef_Name);
  }
  if (accessor.hasExternalTimeRef()) {
    extxml_uci::util::SerializationHelpers::serializeBoolean(accessor.getExternalTimeRef(), node, CommConnectionType_Names::ExternalTimeRef_Name);
  }
  if (accessor.hasNetworkTime()) {
    extxml_uci::util::SerializationHelpers::serializeDateTime(accessor.getNetworkTime(), node, CommConnectionType_Names::NetworkTime_Name);
  }
  if (accessor.hasNetworkTimeUncertaintyRange()) {
    extxml_uci::util::SerializationHelpers::serializeFloat(accessor.getNetworkTimeUncertaintyRange(), node, CommConnectionType_Names::NetworkTimeUncertaintyRange_Name);
  }
  if (accessor.hasNetworkTimeOffset()) {
    extxml_uci::util::SerializationHelpers::serializeDuration(accessor.getNetworkTimeOffset(), node, CommConnectionType_Names::NetworkTimeOffset_Name);
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

