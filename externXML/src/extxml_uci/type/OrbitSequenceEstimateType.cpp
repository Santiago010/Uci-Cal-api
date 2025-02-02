/** @file OrbitSequenceEstimateType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:19 PM
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

#include "extxml_uci/type/OrbitSequenceEstimateType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/OrbitKinematicsSequenceID_Type.h"
#include "extxml_uci/type/OrbitManeuverSegmentID_Type.h"
#include "extxml_uci/type/OrbitPlanID_Type.h"
#include "extxml_uci/util/DerivedTypesDeserializer.h"
#include "extxml_uci/util/DerivedTypesSerializer.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/base/accessorType.h"
#include "uci/type/OrbitSequenceEstimateType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace OrbitSequenceEstimateType_Names {

constexpr const char* Extern_Type_Name{"OrbitSequenceEstimateType"};
constexpr const char* PlanID_Name{"PlanID"};
constexpr const char* SequenceID_Name{"SequenceID"};
constexpr const char* SegmentID_Name{"SegmentID"};
constexpr const char* EstimatedCaptureTime_Name{"EstimatedCaptureTime"};

} // namespace OrbitSequenceEstimateType_Names

bool OrbitSequenceEstimateType::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitSequenceEstimateType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitSequenceEstimateType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitSequenceEstimateType_Names::PlanID_Name) {
      OrbitPlanID_Type::deserialize(valueType.second, accessor.getPlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitSequenceEstimateType_Names::SequenceID_Name) {
      OrbitKinematicsSequenceID_Type::deserialize(valueType.second, accessor.getSequenceID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitSequenceEstimateType_Names::SegmentID_Name) {
      OrbitManeuverSegmentID_Type::deserialize(valueType.second, accessor.enableSegmentID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitSequenceEstimateType_Names::EstimatedCaptureTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEstimatedCaptureTime(extxml_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    }
  }
  return true;
}

std::string OrbitSequenceEstimateType::serialize(const uci::type::OrbitSequenceEstimateType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? OrbitSequenceEstimateType_Names::Extern_Type_Name : nodeName};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::orbitSequenceEstimateType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      extxml_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitSequenceEstimateType_Names::Extern_Type_Name);
    }
    OrbitPlanID_Type::serialize(accessor.getPlanID(), node, OrbitSequenceEstimateType_Names::PlanID_Name);
    OrbitKinematicsSequenceID_Type::serialize(accessor.getSequenceID(), node, OrbitSequenceEstimateType_Names::SequenceID_Name);
    if (accessor.hasSegmentID()) {
      OrbitManeuverSegmentID_Type::serialize(accessor.getSegmentID(), node, OrbitSequenceEstimateType_Names::SegmentID_Name);
    }
    if (accessor.hasEstimatedCaptureTime()) {
      extxml_uci::util::SerializationHelpers::serializeDateTime(accessor.getEstimatedCaptureTime(), node, OrbitSequenceEstimateType_Names::EstimatedCaptureTime_Name);
    }
    if (createNode) {
      propTree.add_child(generatedNodeName, node);
    }
  } else {
    extxml_uci::util::DerivedTypesSerializer::serialize(accessor, propTree, nodeName, createNode);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

