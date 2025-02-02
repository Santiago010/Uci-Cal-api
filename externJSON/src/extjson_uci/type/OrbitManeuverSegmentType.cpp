/** @file OrbitManeuverSegmentType.cpp
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

#include "extjson_uci/type/OrbitManeuverSegmentType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/OrbitManeuverSegmentID_Type.h"
#include "extjson_uci/type/OrbitPlanManeuverTypeEnum.h"
#include "extjson_uci/type/OrbitalKinematicsChoiceType.h"
#include "extjson_uci/type/OrbitalManeuverDetailsBaseType.h"
#include "extjson_uci/type/PathSegmentSourceEnum.h"
#include "extjson_uci/util/DerivedTypesDeserializer.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/OrbitManeuverSegmentType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace OrbitManeuverSegmentType_Names {

constexpr const char* Extern_Type_Name{"OrbitManeuverSegmentType"};
constexpr const char* SegmentID_Name{"SegmentID"};
constexpr const char* Source_Name{"Source"};
constexpr const char* StartEpoch_Name{"StartEpoch"};
constexpr const char* EndPoint_Name{"EndPoint"};
constexpr const char* Locked_Name{"Locked"};
constexpr const char* ManeuverType_Name{"ManeuverType"};
constexpr const char* DeltaVelocity_Name{"DeltaVelocity"};
constexpr const char* Modified_Name{"Modified"};
constexpr const char* NextSegmentID_Name{"NextSegmentID"};

} // namespace OrbitManeuverSegmentType_Names

bool OrbitManeuverSegmentType::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitManeuverSegmentType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitManeuverSegmentType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + OrbitManeuverSegmentType_Names::SegmentID_Name) {
      OrbitManeuverSegmentID_Type::deserialize(valueType.second, accessor.getSegmentID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitManeuverSegmentType_Names::Source_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getSource().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + OrbitManeuverSegmentType_Names::StartEpoch_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setStartEpoch(extjson_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitManeuverSegmentType_Names::EndPoint_Name) {
      OrbitalKinematicsChoiceType::deserialize(valueType.second, accessor.getEndPoint(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitManeuverSegmentType_Names::Locked_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setLocked(extjson_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitManeuverSegmentType_Names::ManeuverType_Name) {
      OrbitPlanManeuverTypeEnum::deserializeList(valueType.second, accessor.getManeuverType());
    } else if (valueType.first == nsPrefix + OrbitManeuverSegmentType_Names::DeltaVelocity_Name) {
      extjson_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableDeltaVelocity(extjson_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitManeuverSegmentType_Names::Modified_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setModified(extjson_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitManeuverSegmentType_Names::NextSegmentID_Name) {
      OrbitManeuverSegmentID_Type::deserialize(valueType.second, accessor.enableNextSegmentID(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string OrbitManeuverSegmentType::serialize(const uci::type::OrbitManeuverSegmentType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? OrbitManeuverSegmentType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitManeuverSegmentType_Names::Extern_Type_Name);
  }
  OrbitManeuverSegmentID_Type::serialize(accessor.getSegmentID(), node, OrbitManeuverSegmentType_Names::SegmentID_Name);
  PathSegmentSourceEnum::serialize(accessor.getSource(), node, OrbitManeuverSegmentType_Names::Source_Name, false);
  extjson_uci::util::SerializationHelpers::serializeDateTime(accessor.getStartEpoch(), node, OrbitManeuverSegmentType_Names::StartEpoch_Name);
  OrbitalKinematicsChoiceType::serialize(accessor.getEndPoint(), node, OrbitManeuverSegmentType_Names::EndPoint_Name);
  extjson_uci::util::SerializationHelpers::serializeBoolean(accessor.getLocked(), node, OrbitManeuverSegmentType_Names::Locked_Name);
  {
    OrbitPlanManeuverTypeEnum::serializeList(accessor.getManeuverType(), node, OrbitManeuverSegmentType_Names::ManeuverType_Name);
  }
  if (accessor.hasDeltaVelocity()) {
    OrbitalManeuverDetailsBaseType::serialize(accessor.getDeltaVelocity(), node, OrbitManeuverSegmentType_Names::DeltaVelocity_Name);
  }
  if (accessor.hasModified()) {
    extjson_uci::util::SerializationHelpers::serializeBoolean(accessor.getModified(), node, OrbitManeuverSegmentType_Names::Modified_Name);
  }
  if (accessor.hasNextSegmentID()) {
    OrbitManeuverSegmentID_Type::serialize(accessor.getNextSegmentID(), node, OrbitManeuverSegmentType_Names::NextSegmentID_Name);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

