/** @file EntityManagementRequestType.cpp
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

#include "extxml_uci/type/EntityManagementRequestType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/EntityManagementClearIdentityType.h"
#include "extxml_uci/type/EntityManagementDownType.h"
#include "extxml_uci/type/EntityManagementDropRestrictType.h"
#include "extxml_uci/type/EntityManagementDropType.h"
#include "extxml_uci/type/EntityManagementKinematicsType.h"
#include "extxml_uci/type/EntityManagementMergeType.h"
#include "extxml_uci/type/EntityManagementProposeCorrelationType.h"
#include "extxml_uci/type/EntityManagementSetActivityByType.h"
#include "extxml_uci/type/EntityManagementSetCapabilityType.h"
#include "extxml_uci/type/EntityManagementSetEnduranceType.h"
#include "extxml_uci/type/EntityManagementSetFusionEligibilityType.h"
#include "extxml_uci/type/EntityManagementSetIdentityType.h"
#include "extxml_uci/type/EntityManagementSetLink16MetadataType.h"
#include "extxml_uci/type/EntityManagementSetModeType.h"
#include "extxml_uci/type/EntityManagementSetPlatformStatusType.h"
#include "extxml_uci/type/EntityManagementSetSignalSummaryType.h"
#include "extxml_uci/type/EntityManagementSetStrengthType.h"
#include "extxml_uci/type/EntityManagementSetVoiceControlType.h"
#include "extxml_uci/type/EntityManagementSplitType.h"
#include "extxml_uci/type/EntityManagementSwapType.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/EntityManagementRequestType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace EntityManagementRequestType_Names {

constexpr const char* Extern_Type_Name{"EntityManagementRequestType"};
constexpr const char* Split_Name{"Split"};
constexpr const char* Merge_Name{"Merge"};
constexpr const char* Drop_Name{"Drop"};
constexpr const char* SetDropRestriction_Name{"SetDropRestriction"};
constexpr const char* ClearDropRestriction_Name{"ClearDropRestriction"};
constexpr const char* Swap_Name{"Swap"};
constexpr const char* SetFusionEligibility_Name{"SetFusionEligibility"};
constexpr const char* SetIdentity_Name{"SetIdentity"};
constexpr const char* ClearIFF_Name{"ClearIFF"};
constexpr const char* SetDownLocation_Name{"SetDownLocation"};
constexpr const char* SetKinematics_Name{"SetKinematics"};
constexpr const char* SetMode_Name{"SetMode"};
constexpr const char* SetActivityBy_Name{"SetActivityBy"};
constexpr const char* SetStrength_Name{"SetStrength"};
constexpr const char* SetPlatformStatus_Name{"SetPlatformStatus"};
constexpr const char* SetEndurance_Name{"SetEndurance"};
constexpr const char* SetLink16Metadata_Name{"SetLink16Metadata"};
constexpr const char* ProposeCorrelation_Name{"ProposeCorrelation"};
constexpr const char* SetVoiceControl_Name{"SetVoiceControl"};
constexpr const char* SetCapability_Name{"SetCapability"};
constexpr const char* SetSignalSummary_Name{"SetSignalSummary"};

} // namespace EntityManagementRequestType_Names

bool EntityManagementRequestType::deserialize(const boost::property_tree::ptree& propTree, uci::type::EntityManagementRequestType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EntityManagementRequestType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + EntityManagementRequestType_Names::Split_Name) {
      EntityManagementSplitType::deserialize(valueType.second, accessor.chooseSplit(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityManagementRequestType_Names::Merge_Name) {
      EntityManagementMergeType::deserialize(valueType.second, accessor.chooseMerge(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityManagementRequestType_Names::Drop_Name) {
      EntityManagementDropType::deserialize(valueType.second, accessor.chooseDrop(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityManagementRequestType_Names::SetDropRestriction_Name) {
      EntityManagementDropRestrictType::deserialize(valueType.second, accessor.chooseSetDropRestriction(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityManagementRequestType_Names::ClearDropRestriction_Name) {
      EntityManagementDropRestrictType::deserialize(valueType.second, accessor.chooseClearDropRestriction(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityManagementRequestType_Names::Swap_Name) {
      EntityManagementSwapType::deserialize(valueType.second, accessor.chooseSwap(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityManagementRequestType_Names::SetFusionEligibility_Name) {
      EntityManagementSetFusionEligibilityType::deserialize(valueType.second, accessor.chooseSetFusionEligibility(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityManagementRequestType_Names::SetIdentity_Name) {
      EntityManagementSetIdentityType::deserialize(valueType.second, accessor.chooseSetIdentity(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityManagementRequestType_Names::ClearIFF_Name) {
      EntityManagementClearIdentityType::deserialize(valueType.second, accessor.chooseClearIFF(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityManagementRequestType_Names::SetDownLocation_Name) {
      EntityManagementDownType::deserialize(valueType.second, accessor.chooseSetDownLocation(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityManagementRequestType_Names::SetKinematics_Name) {
      EntityManagementKinematicsType::deserialize(valueType.second, accessor.chooseSetKinematics(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityManagementRequestType_Names::SetMode_Name) {
      EntityManagementSetModeType::deserialize(valueType.second, accessor.chooseSetMode(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityManagementRequestType_Names::SetActivityBy_Name) {
      EntityManagementSetActivityByType::deserialize(valueType.second, accessor.chooseSetActivityBy(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityManagementRequestType_Names::SetStrength_Name) {
      EntityManagementSetStrengthType::deserialize(valueType.second, accessor.chooseSetStrength(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityManagementRequestType_Names::SetPlatformStatus_Name) {
      EntityManagementSetPlatformStatusType::deserialize(valueType.second, accessor.chooseSetPlatformStatus(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityManagementRequestType_Names::SetEndurance_Name) {
      EntityManagementSetEnduranceType::deserialize(valueType.second, accessor.chooseSetEndurance(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityManagementRequestType_Names::SetLink16Metadata_Name) {
      EntityManagementSetLink16MetadataType::deserialize(valueType.second, accessor.chooseSetLink16Metadata(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityManagementRequestType_Names::ProposeCorrelation_Name) {
      EntityManagementProposeCorrelationType::deserialize(valueType.second, accessor.chooseProposeCorrelation(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityManagementRequestType_Names::SetVoiceControl_Name) {
      EntityManagementSetVoiceControlType::deserialize(valueType.second, accessor.chooseSetVoiceControl(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityManagementRequestType_Names::SetCapability_Name) {
      EntityManagementSetCapabilityType::deserialize(valueType.second, accessor.chooseSetCapability(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityManagementRequestType_Names::SetSignalSummary_Name) {
      EntityManagementSetSignalSummaryType::deserialize(valueType.second, accessor.chooseSetSignalSummary(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string EntityManagementRequestType::serialize(const uci::type::EntityManagementRequestType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? EntityManagementRequestType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, EntityManagementRequestType_Names::Extern_Type_Name);
  }
  if (accessor.isSplit()) {
    EntityManagementSplitType::serialize(accessor.getSplit(), node, EntityManagementRequestType_Names::Split_Name);
  } else if (accessor.isMerge()) {
    EntityManagementMergeType::serialize(accessor.getMerge(), node, EntityManagementRequestType_Names::Merge_Name);
  } else if (accessor.isDrop()) {
    EntityManagementDropType::serialize(accessor.getDrop(), node, EntityManagementRequestType_Names::Drop_Name);
  } else if (accessor.isSetDropRestriction()) {
    EntityManagementDropRestrictType::serialize(accessor.getSetDropRestriction(), node, EntityManagementRequestType_Names::SetDropRestriction_Name);
  } else if (accessor.isClearDropRestriction()) {
    EntityManagementDropRestrictType::serialize(accessor.getClearDropRestriction(), node, EntityManagementRequestType_Names::ClearDropRestriction_Name);
  } else if (accessor.isSwap()) {
    EntityManagementSwapType::serialize(accessor.getSwap(), node, EntityManagementRequestType_Names::Swap_Name);
  } else if (accessor.isSetFusionEligibility()) {
    EntityManagementSetFusionEligibilityType::serialize(accessor.getSetFusionEligibility(), node, EntityManagementRequestType_Names::SetFusionEligibility_Name);
  } else if (accessor.isSetIdentity()) {
    EntityManagementSetIdentityType::serialize(accessor.getSetIdentity(), node, EntityManagementRequestType_Names::SetIdentity_Name);
  } else if (accessor.isClearIFF()) {
    EntityManagementClearIdentityType::serialize(accessor.getClearIFF(), node, EntityManagementRequestType_Names::ClearIFF_Name);
  } else if (accessor.isSetDownLocation()) {
    EntityManagementDownType::serialize(accessor.getSetDownLocation(), node, EntityManagementRequestType_Names::SetDownLocation_Name);
  } else if (accessor.isSetKinematics()) {
    EntityManagementKinematicsType::serialize(accessor.getSetKinematics(), node, EntityManagementRequestType_Names::SetKinematics_Name);
  } else if (accessor.isSetMode()) {
    EntityManagementSetModeType::serialize(accessor.getSetMode(), node, EntityManagementRequestType_Names::SetMode_Name);
  } else if (accessor.isSetActivityBy()) {
    EntityManagementSetActivityByType::serialize(accessor.getSetActivityBy(), node, EntityManagementRequestType_Names::SetActivityBy_Name);
  } else if (accessor.isSetStrength()) {
    EntityManagementSetStrengthType::serialize(accessor.getSetStrength(), node, EntityManagementRequestType_Names::SetStrength_Name);
  } else if (accessor.isSetPlatformStatus()) {
    EntityManagementSetPlatformStatusType::serialize(accessor.getSetPlatformStatus(), node, EntityManagementRequestType_Names::SetPlatformStatus_Name);
  } else if (accessor.isSetEndurance()) {
    EntityManagementSetEnduranceType::serialize(accessor.getSetEndurance(), node, EntityManagementRequestType_Names::SetEndurance_Name);
  } else if (accessor.isSetLink16Metadata()) {
    EntityManagementSetLink16MetadataType::serialize(accessor.getSetLink16Metadata(), node, EntityManagementRequestType_Names::SetLink16Metadata_Name);
  } else if (accessor.isProposeCorrelation()) {
    EntityManagementProposeCorrelationType::serialize(accessor.getProposeCorrelation(), node, EntityManagementRequestType_Names::ProposeCorrelation_Name);
  } else if (accessor.isSetVoiceControl()) {
    EntityManagementSetVoiceControlType::serialize(accessor.getSetVoiceControl(), node, EntityManagementRequestType_Names::SetVoiceControl_Name);
  } else if (accessor.isSetCapability()) {
    EntityManagementSetCapabilityType::serialize(accessor.getSetCapability(), node, EntityManagementRequestType_Names::SetCapability_Name);
  } else if (accessor.isSetSignalSummary()) {
    EntityManagementSetSignalSummaryType::serialize(accessor.getSetSignalSummary(), node, EntityManagementRequestType_Names::SetSignalSummary_Name);
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

