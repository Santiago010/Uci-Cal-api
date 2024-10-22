/** @file CS_SatBandDeconType.cpp
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

#include "extjson_uci/type/CS_SatBandDeconType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/DateTimeRangeDeconType.h"
#include "extjson_uci/type/ForeignKeyType.h"
#include "extjson_uci/type/IEEE_FrequencyBandEnum.h"
#include "extjson_uci/type/SatelliteIdentifierType.h"
#include "extjson_uci/util/DerivedTypesDeserializer.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/CS_SatBandDeconType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace CS_SatBandDeconType_Names {

constexpr const char* Extern_Type_Name{"CS_SatBandDeconType"};
constexpr const char* Satellite_Name{"Satellite"};
constexpr const char* FreqStart_Name{"FreqStart"};
constexpr const char* FreqStop_Name{"FreqStop"};
constexpr const char* FreqBand_Name{"FreqBand"};
constexpr const char* MaxEIRP_Name{"MaxEIRP"};
constexpr const char* DeconName_Name{"DeconName"};
constexpr const char* TimeFrame_Name{"TimeFrame"};

} // namespace CS_SatBandDeconType_Names

bool CS_SatBandDeconType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CS_SatBandDeconType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CS_SatBandDeconType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + CS_SatBandDeconType_Names::Satellite_Name) {
      SatelliteIdentifierType::deserialize(valueType.second, accessor.getSatellite(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CS_SatBandDeconType_Names::FreqStart_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setFreqStart(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + CS_SatBandDeconType_Names::FreqStop_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setFreqStop(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + CS_SatBandDeconType_Names::FreqBand_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getFreqBand().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + CS_SatBandDeconType_Names::MaxEIRP_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setMaxEIRP(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + CS_SatBandDeconType_Names::DeconName_Name) {
      extjson_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableDeconName(extjson_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CS_SatBandDeconType_Names::TimeFrame_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::CS_SatBandDeconType::TimeFrame& boundedList = accessor.getTimeFrame();
        const uci::type::CS_SatBandDeconType::TimeFrame::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        DateTimeRangeDeconType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  return true;
}

std::string CS_SatBandDeconType::serialize(const uci::type::CS_SatBandDeconType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? CS_SatBandDeconType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, CS_SatBandDeconType_Names::Extern_Type_Name);
  }
  SatelliteIdentifierType::serialize(accessor.getSatellite(), node, CS_SatBandDeconType_Names::Satellite_Name);
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getFreqStart(), node, CS_SatBandDeconType_Names::FreqStart_Name);
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getFreqStop(), node, CS_SatBandDeconType_Names::FreqStop_Name);
  IEEE_FrequencyBandEnum::serialize(accessor.getFreqBand(), node, CS_SatBandDeconType_Names::FreqBand_Name, false);
  extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getMaxEIRP(), node, CS_SatBandDeconType_Names::MaxEIRP_Name);
  ForeignKeyType::serialize(accessor.getDeconName(), node, CS_SatBandDeconType_Names::DeconName_Name);
  {
    const uci::type::CS_SatBandDeconType::TimeFrame& boundedList = accessor.getTimeFrame();
    for (uci::type::CS_SatBandDeconType::TimeFrame::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      DateTimeRangeDeconType::serialize(boundedList.at(i), node, CS_SatBandDeconType_Names::TimeFrame_Name);
    }
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

