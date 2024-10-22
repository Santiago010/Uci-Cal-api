/** @file SMTI_CollectionOptionsType.cpp
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

#include "extjson_uci/type/SMTI_CollectionOptionsType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/COARPS_SMTI_CollectionOptionsEnum.h"
#include "extjson_uci/type/HRR_OptionsType.h"
#include "extjson_uci/type/RadarCollectionOptionsType.h"
#include "extjson_uci/type/RangeDopplerResolutionType.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/SMTI_CollectionOptionsType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace SMTI_CollectionOptionsType_Names {

constexpr const char* Extern_Type_Name{"SMTI_CollectionOptionsType"};
constexpr const char* Tracking_Name{"Tracking"};
constexpr const char* FTI_Name{"FTI"};
constexpr const char* Resolution_Name{"Resolution"};
constexpr const char* SignalToNoiseRatio_Name{"SignalToNoiseRatio"};
constexpr const char* HRR_Options_Name{"HRR_Options"};
constexpr const char* COARPS_SMTI_CollectionOption_Name{"COARPS_SMTI_CollectionOption"};

} // namespace SMTI_CollectionOptionsType_Names

bool SMTI_CollectionOptionsType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SMTI_CollectionOptionsType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SMTI_CollectionOptionsType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + SMTI_CollectionOptionsType_Names::Tracking_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTracking(extjson_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + SMTI_CollectionOptionsType_Names::FTI_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setFTI(extjson_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + SMTI_CollectionOptionsType_Names::Resolution_Name) {
      RangeDopplerResolutionType::deserialize(valueType.second, accessor.enableResolution(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SMTI_CollectionOptionsType_Names::SignalToNoiseRatio_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSignalToNoiseRatio(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + SMTI_CollectionOptionsType_Names::HRR_Options_Name) {
      HRR_OptionsType::deserialize(valueType.second, accessor.enableHRR_Options(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SMTI_CollectionOptionsType_Names::COARPS_SMTI_CollectionOption_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableCOARPS_SMTI_CollectionOption().setValueFromName(*value);
      }
    }
  }
  RadarCollectionOptionsType::deserialize(node, accessor, nodeName, nsPrefix);
  return true;
}

std::string SMTI_CollectionOptionsType::serialize(const uci::type::SMTI_CollectionOptionsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? SMTI_CollectionOptionsType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, SMTI_CollectionOptionsType_Names::Extern_Type_Name);
  }
  RadarCollectionOptionsType::serialize(accessor, node, "", false, false, false);
  if (accessor.hasTracking()) {
    extjson_uci::util::SerializationHelpers::serializeBoolean(accessor.getTracking(), node, SMTI_CollectionOptionsType_Names::Tracking_Name);
  }
  if (accessor.hasFTI()) {
    extjson_uci::util::SerializationHelpers::serializeBoolean(accessor.getFTI(), node, SMTI_CollectionOptionsType_Names::FTI_Name);
  }
  if (accessor.hasResolution()) {
    RangeDopplerResolutionType::serialize(accessor.getResolution(), node, SMTI_CollectionOptionsType_Names::Resolution_Name);
  }
  if (accessor.hasSignalToNoiseRatio()) {
    extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getSignalToNoiseRatio(), node, SMTI_CollectionOptionsType_Names::SignalToNoiseRatio_Name);
  }
  if (accessor.hasHRR_Options()) {
    HRR_OptionsType::serialize(accessor.getHRR_Options(), node, SMTI_CollectionOptionsType_Names::HRR_Options_Name);
  }
  if (accessor.hasCOARPS_SMTI_CollectionOption()) {
    COARPS_SMTI_CollectionOptionsEnum::serialize(accessor.getCOARPS_SMTI_CollectionOption(), node, SMTI_CollectionOptionsType_Names::COARPS_SMTI_CollectionOption_Name, false);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

