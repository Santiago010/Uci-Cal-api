/** @file CS_SignalType.cpp
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

#include "extxml_uci/type/CS_SignalType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/ForeignKeyType.h"
#include "extxml_uci/type/FrequencyRangeType.h"
#include "extxml_uci/type/PolarizationEnum.h"
#include "extxml_uci/util/DerivedTypesDeserializer.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/CS_SignalType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace CS_SignalType_Names {

constexpr const char* Extern_Type_Name{"CS_SignalType"};
constexpr const char* Signal_Name{"Signal"};
constexpr const char* UplinkFrequency_Name{"UplinkFrequency"};
constexpr const char* UplinkPolarization_Name{"UplinkPolarization"};
constexpr const char* DownlinkFrequency_Name{"DownlinkFrequency"};
constexpr const char* DownlinkPolarization_Name{"DownlinkPolarization"};
constexpr const char* ExistingSignal_Name{"ExistingSignal"};

} // namespace CS_SignalType_Names

bool CS_SignalType::deserialize(const boost::property_tree::ptree& propTree, uci::type::CS_SignalType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = CS_SignalType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + CS_SignalType_Names::Signal_Name) {
      extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableSignal(extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CS_SignalType_Names::UplinkFrequency_Name) {
      FrequencyRangeType::deserialize(valueType.second, accessor.getUplinkFrequency(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CS_SignalType_Names::UplinkPolarization_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getUplinkPolarization().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + CS_SignalType_Names::DownlinkFrequency_Name) {
      FrequencyRangeType::deserialize(valueType.second, accessor.getDownlinkFrequency(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + CS_SignalType_Names::DownlinkPolarization_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getDownlinkPolarization().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + CS_SignalType_Names::ExistingSignal_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::CS_SignalType::ExistingSignal& boundedList = accessor.getExistingSignal();
        const uci::type::CS_SignalType::ExistingSignal::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1, extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix));
        extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  return true;
}

std::string CS_SignalType::serialize(const uci::type::CS_SignalType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? CS_SignalType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, CS_SignalType_Names::Extern_Type_Name);
  }
  ForeignKeyType::serialize(accessor.getSignal(), node, CS_SignalType_Names::Signal_Name);
  FrequencyRangeType::serialize(accessor.getUplinkFrequency(), node, CS_SignalType_Names::UplinkFrequency_Name);
  PolarizationEnum::serialize(accessor.getUplinkPolarization(), node, CS_SignalType_Names::UplinkPolarization_Name, false);
  FrequencyRangeType::serialize(accessor.getDownlinkFrequency(), node, CS_SignalType_Names::DownlinkFrequency_Name);
  PolarizationEnum::serialize(accessor.getDownlinkPolarization(), node, CS_SignalType_Names::DownlinkPolarization_Name, false);
  {
    const uci::type::CS_SignalType::ExistingSignal& boundedList = accessor.getExistingSignal();
    for (uci::type::CS_SignalType::ExistingSignal::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      ForeignKeyType::serialize(boundedList.at(i), node, CS_SignalType_Names::ExistingSignal_Name);
    }
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

