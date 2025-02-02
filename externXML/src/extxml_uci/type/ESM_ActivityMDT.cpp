/** @file ESM_ActivityMDT.cpp
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

#include "extxml_uci/type/ESM_ActivityMDT.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/ESM_ActivityType.h"
#include "extxml_uci/type/SubsystemID_Type.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/ESM_ActivityMDT.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace ESM_ActivityMDT_Names {

constexpr const char* Extern_Type_Name{"ESM_ActivityMDT"};
constexpr const char* SubsystemID_Name{"SubsystemID"};
constexpr const char* EntityListCleared_Name{"EntityListCleared"};
constexpr const char* EntityOverload_Name{"EntityOverload"};
constexpr const char* ExcessiveAttitude_Name{"ExcessiveAttitude"};
constexpr const char* PulseDensityOverload_Name{"PulseDensityOverload"};
constexpr const char* LookThroughLimited_Name{"LookThroughLimited"};
constexpr const char* ReceiverUtilization_Name{"ReceiverUtilization"};
constexpr const char* Activity_Name{"Activity"};

} // namespace ESM_ActivityMDT_Names

bool ESM_ActivityMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ESM_ActivityMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ESM_ActivityMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ESM_ActivityMDT_Names::SubsystemID_Name) {
      SubsystemID_Type::deserialize(valueType.second, accessor.getSubsystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ESM_ActivityMDT_Names::EntityListCleared_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEntityListCleared(extxml_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + ESM_ActivityMDT_Names::EntityOverload_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEntityOverload(extxml_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + ESM_ActivityMDT_Names::ExcessiveAttitude_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setExcessiveAttitude(extxml_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + ESM_ActivityMDT_Names::PulseDensityOverload_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPulseDensityOverload(extxml_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + ESM_ActivityMDT_Names::LookThroughLimited_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setLookThroughLimited(extxml_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + ESM_ActivityMDT_Names::ReceiverUtilization_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setReceiverUtilization(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ESM_ActivityMDT_Names::Activity_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ESM_ActivityMDT::Activity& boundedList = accessor.getActivity();
        const uci::type::ESM_ActivityMDT::Activity::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        ESM_ActivityType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  return true;
}

std::string ESM_ActivityMDT::serialize(const uci::type::ESM_ActivityMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? ESM_ActivityMDT_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, ESM_ActivityMDT_Names::Extern_Type_Name);
  }
  SubsystemID_Type::serialize(accessor.getSubsystemID(), node, ESM_ActivityMDT_Names::SubsystemID_Name);
  if (accessor.hasEntityListCleared()) {
    extxml_uci::util::SerializationHelpers::serializeDateTime(accessor.getEntityListCleared(), node, ESM_ActivityMDT_Names::EntityListCleared_Name);
  }
  if (accessor.hasEntityOverload()) {
    extxml_uci::util::SerializationHelpers::serializeBoolean(accessor.getEntityOverload(), node, ESM_ActivityMDT_Names::EntityOverload_Name);
  }
  if (accessor.hasExcessiveAttitude()) {
    extxml_uci::util::SerializationHelpers::serializeBoolean(accessor.getExcessiveAttitude(), node, ESM_ActivityMDT_Names::ExcessiveAttitude_Name);
  }
  if (accessor.hasPulseDensityOverload()) {
    extxml_uci::util::SerializationHelpers::serializeBoolean(accessor.getPulseDensityOverload(), node, ESM_ActivityMDT_Names::PulseDensityOverload_Name);
  }
  if (accessor.hasLookThroughLimited()) {
    extxml_uci::util::SerializationHelpers::serializeBoolean(accessor.getLookThroughLimited(), node, ESM_ActivityMDT_Names::LookThroughLimited_Name);
  }
  if (accessor.hasReceiverUtilization()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getReceiverUtilization(), node, ESM_ActivityMDT_Names::ReceiverUtilization_Name);
  }
  {
    const uci::type::ESM_ActivityMDT::Activity& boundedList = accessor.getActivity();
    for (uci::type::ESM_ActivityMDT::Activity::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      ESM_ActivityType::serialize(boundedList.at(i), node, ESM_ActivityMDT_Names::Activity_Name);
    }
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

