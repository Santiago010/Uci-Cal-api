/** @file ObservationReportMDT.cpp
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

#include "extjson_uci/type/ObservationReportMDT.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/ActivityAgainstType.h"
#include "extjson_uci/type/ActivityByType.h"
#include "extjson_uci/type/AmplifyingInformationType.h"
#include "extjson_uci/type/EntityIdentityType.h"
#include "extjson_uci/type/GeoLocatedObjectType.h"
#include "extjson_uci/type/ObservationReportID_Type.h"
#include "extjson_uci/type/RelationshipThreatType.h"
#include "extjson_uci/type/SystemMessageIdentifierType.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/ObservationReportMDT.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace ObservationReportMDT_Names {

constexpr const char* Extern_Type_Name{"ObservationReportMDT"};
constexpr const char* ObservationReportID_Name{"ObservationReportID"};
constexpr const char* Reference_Name{"Reference"};
constexpr const char* Originator_Name{"Originator"};
constexpr const char* Identity_Name{"Identity"};
constexpr const char* ActivityAgainst_Name{"ActivityAgainst"};
constexpr const char* ActivityBy_Name{"ActivityBy"};
constexpr const char* ThreatData_Name{"ThreatData"};
constexpr const char* AmplifyingInfo_Name{"AmplifyingInfo"};
constexpr const char* LocallyModified_Name{"LocallyModified"};

} // namespace ObservationReportMDT_Names

bool ObservationReportMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ObservationReportMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ObservationReportMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + ObservationReportMDT_Names::ObservationReportID_Name) {
      ObservationReportID_Type::deserialize(valueType.second, accessor.getObservationReportID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ObservationReportMDT_Names::Reference_Name) {
      GeoLocatedObjectType::deserialize(valueType.second, accessor.getReference(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ObservationReportMDT_Names::Originator_Name) {
      SystemMessageIdentifierType::deserialize(valueType.second, accessor.enableOriginator(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ObservationReportMDT_Names::Identity_Name) {
      EntityIdentityType::deserialize(valueType.second, accessor.enableIdentity(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ObservationReportMDT_Names::ActivityAgainst_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ObservationReportMDT::ActivityAgainst& boundedList = accessor.getActivityAgainst();
        const uci::type::ObservationReportMDT::ActivityAgainst::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        ActivityAgainstType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ObservationReportMDT_Names::ActivityBy_Name) {
      ActivityByType::deserialize(valueType.second, accessor.enableActivityBy(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ObservationReportMDT_Names::ThreatData_Name) {
      RelationshipThreatType::deserialize(valueType.second, accessor.enableThreatData(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ObservationReportMDT_Names::AmplifyingInfo_Name) {
      AmplifyingInformationType::deserialize(valueType.second, accessor.enableAmplifyingInfo(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ObservationReportMDT_Names::LocallyModified_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setLocallyModified(*value);
      }
    }
  }
  return true;
}

std::string ObservationReportMDT::serialize(const uci::type::ObservationReportMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? ObservationReportMDT_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, ObservationReportMDT_Names::Extern_Type_Name);
  }
  ObservationReportID_Type::serialize(accessor.getObservationReportID(), node, ObservationReportMDT_Names::ObservationReportID_Name);
  GeoLocatedObjectType::serialize(accessor.getReference(), node, ObservationReportMDT_Names::Reference_Name);
  if (accessor.hasOriginator()) {
    SystemMessageIdentifierType::serialize(accessor.getOriginator(), node, ObservationReportMDT_Names::Originator_Name);
  }
  if (accessor.hasIdentity()) {
    EntityIdentityType::serialize(accessor.getIdentity(), node, ObservationReportMDT_Names::Identity_Name);
  }
  {
    const uci::type::ObservationReportMDT::ActivityAgainst& boundedList = accessor.getActivityAgainst();
    for (uci::type::ObservationReportMDT::ActivityAgainst::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      ActivityAgainstType::serialize(boundedList.at(i), node, ObservationReportMDT_Names::ActivityAgainst_Name);
    }
  }
  if (accessor.hasActivityBy()) {
    ActivityByType::serialize(accessor.getActivityBy(), node, ObservationReportMDT_Names::ActivityBy_Name);
  }
  if (accessor.hasThreatData()) {
    RelationshipThreatType::serialize(accessor.getThreatData(), node, ObservationReportMDT_Names::ThreatData_Name);
  }
  if (accessor.hasAmplifyingInfo()) {
    AmplifyingInformationType::serialize(accessor.getAmplifyingInfo(), node, ObservationReportMDT_Names::AmplifyingInfo_Name);
  }
  if (accessor.hasLocallyModified()) {
    extjson_uci::util::SerializationHelpers::serializeString(accessor.getLocallyModified(), node, ObservationReportMDT_Names::LocallyModified_Name);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

