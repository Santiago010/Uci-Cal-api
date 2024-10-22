/** @file DMPI_ViolationChoiceType.cpp
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

#include "extjson_uci/type/DMPI_ViolationChoiceType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/OpLineID_Type.h"
#include "extjson_uci/type/OpVolumeID_Type.h"
#include "extjson_uci/type/OpZoneID_Type.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/DMPI_ViolationChoiceType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace DMPI_ViolationChoiceType_Names {

constexpr const char* Extern_Type_Name{"DMPI_ViolationChoiceType"};
constexpr const char* OpLineID_Name{"OpLineID"};
constexpr const char* OpZoneID_Name{"OpZoneID"};
constexpr const char* OpVolumeID_Name{"OpVolumeID"};

} // namespace DMPI_ViolationChoiceType_Names

bool DMPI_ViolationChoiceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::DMPI_ViolationChoiceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = DMPI_ViolationChoiceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + DMPI_ViolationChoiceType_Names::OpLineID_Name) {
      OpLineID_Type::deserialize(valueType.second, accessor.chooseOpLineID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DMPI_ViolationChoiceType_Names::OpZoneID_Name) {
      OpZoneID_Type::deserialize(valueType.second, accessor.chooseOpZoneID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DMPI_ViolationChoiceType_Names::OpVolumeID_Name) {
      OpVolumeID_Type::deserialize(valueType.second, accessor.chooseOpVolumeID(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string DMPI_ViolationChoiceType::serialize(const uci::type::DMPI_ViolationChoiceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? DMPI_ViolationChoiceType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, DMPI_ViolationChoiceType_Names::Extern_Type_Name);
  }
  if (accessor.isOpLineID()) {
    OpLineID_Type::serialize(accessor.getOpLineID(), node, DMPI_ViolationChoiceType_Names::OpLineID_Name);
  } else if (accessor.isOpZoneID()) {
    OpZoneID_Type::serialize(accessor.getOpZoneID(), node, DMPI_ViolationChoiceType_Names::OpZoneID_Name);
  } else if (accessor.isOpVolumeID()) {
    OpVolumeID_Type::serialize(accessor.getOpVolumeID(), node, DMPI_ViolationChoiceType_Names::OpVolumeID_Name);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

