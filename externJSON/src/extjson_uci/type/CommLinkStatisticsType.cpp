/** @file CommLinkStatisticsType.cpp
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

#include "extjson_uci/type/CommLinkStatisticsType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/ForeignKeyType.h"
#include "extjson_uci/type/NetworkLinkID_Type.h"
#include "extjson_uci/util/DerivedTypesDeserializer.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/CommLinkStatisticsType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace CommLinkStatisticsType_Names {

constexpr const char* Extern_Type_Name{"CommLinkStatisticsType"};
constexpr const char* NetworkLinkID_Name{"NetworkLinkID"};
constexpr const char* CarrierToNoiseRatio_Name{"CarrierToNoiseRatio"};
constexpr const char* SignalToNoiseRatio_Name{"SignalToNoiseRatio"};
constexpr const char* CurrentDataRate_Name{"CurrentDataRate"};
constexpr const char* MessageErrorRate_Name{"MessageErrorRate"};
constexpr const char* BitErrorRate_Name{"BitErrorRate"};
constexpr const char* TxLatency_Name{"TxLatency"};
constexpr const char* RxLatency_Name{"RxLatency"};
constexpr const char* FixedDataRate_Name{"FixedDataRate"};
constexpr const char* ChannelKey_Name{"ChannelKey"};

} // namespace CommLinkStatisticsType_Names

bool CommLinkStatisticsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CommLinkStatisticsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CommLinkStatisticsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + CommLinkStatisticsType_Names::NetworkLinkID_Name) {
      NetworkLinkID_Type::deserialize(valueType.second, accessor.enableNetworkLinkID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CommLinkStatisticsType_Names::CarrierToNoiseRatio_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setCarrierToNoiseRatio(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + CommLinkStatisticsType_Names::SignalToNoiseRatio_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSignalToNoiseRatio(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + CommLinkStatisticsType_Names::CurrentDataRate_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setCurrentDataRate(extjson_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    } else if (valueType.first == nsPrefix + CommLinkStatisticsType_Names::MessageErrorRate_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMessageErrorRate(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + CommLinkStatisticsType_Names::BitErrorRate_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setBitErrorRate(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + CommLinkStatisticsType_Names::TxLatency_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTxLatency(extjson_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    } else if (valueType.first == nsPrefix + CommLinkStatisticsType_Names::RxLatency_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRxLatency(extjson_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    } else if (valueType.first == nsPrefix + CommLinkStatisticsType_Names::FixedDataRate_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setFixedDataRate(extjson_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + CommLinkStatisticsType_Names::ChannelKey_Name) {
      extjson_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableChannelKey(extjson_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string CommLinkStatisticsType::serialize(const uci::type::CommLinkStatisticsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? CommLinkStatisticsType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, CommLinkStatisticsType_Names::Extern_Type_Name);
  }
  if (accessor.hasNetworkLinkID()) {
    NetworkLinkID_Type::serialize(accessor.getNetworkLinkID(), node, CommLinkStatisticsType_Names::NetworkLinkID_Name);
  }
  if (accessor.hasCarrierToNoiseRatio()) {
    extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getCarrierToNoiseRatio(), node, CommLinkStatisticsType_Names::CarrierToNoiseRatio_Name);
  }
  if (accessor.hasSignalToNoiseRatio()) {
    extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getSignalToNoiseRatio(), node, CommLinkStatisticsType_Names::SignalToNoiseRatio_Name);
  }
  if (accessor.hasCurrentDataRate()) {
    extjson_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getCurrentDataRate(), node, CommLinkStatisticsType_Names::CurrentDataRate_Name);
  }
  if (accessor.hasMessageErrorRate()) {
    extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getMessageErrorRate(), node, CommLinkStatisticsType_Names::MessageErrorRate_Name);
  }
  if (accessor.hasBitErrorRate()) {
    extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getBitErrorRate(), node, CommLinkStatisticsType_Names::BitErrorRate_Name);
  }
  if (accessor.hasTxLatency()) {
    extjson_uci::util::SerializationHelpers::serializeDuration(accessor.getTxLatency(), node, CommLinkStatisticsType_Names::TxLatency_Name);
  }
  if (accessor.hasRxLatency()) {
    extjson_uci::util::SerializationHelpers::serializeDuration(accessor.getRxLatency(), node, CommLinkStatisticsType_Names::RxLatency_Name);
  }
  if (accessor.hasFixedDataRate()) {
    extjson_uci::util::SerializationHelpers::serializeBoolean(accessor.getFixedDataRate(), node, CommLinkStatisticsType_Names::FixedDataRate_Name);
  }
  if (accessor.hasChannelKey()) {
    ForeignKeyType::serialize(accessor.getChannelKey(), node, CommLinkStatisticsType_Names::ChannelKey_Name);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

