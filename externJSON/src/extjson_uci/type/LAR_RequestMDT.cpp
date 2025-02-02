/** @file LAR_RequestMDT.cpp
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

#include "extjson_uci/type/LAR_RequestMDT.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/LAR_DetailsType.h"
#include "extjson_uci/type/LAR_RelationEnum.h"
#include "extjson_uci/type/RequestBaseType.h"
#include "extjson_uci/type/SystemID_Type.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/LAR_RequestMDT.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace LAR_RequestMDT_Names {

constexpr const char* Extern_Type_Name{"LAR_RequestMDT"};
constexpr const char* SystemID_Name{"SystemID"};
constexpr const char* ResultsInNativeMessage_Name{"ResultsInNativeMessage"};
constexpr const char* LAR_Type_Name{"LAR_Type"};
constexpr const char* LAR_Details_Name{"LAR_Details"};

} // namespace LAR_RequestMDT_Names

bool LAR_RequestMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::LAR_RequestMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = LAR_RequestMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + LAR_RequestMDT_Names::SystemID_Name) {
      SystemID_Type::deserialize(valueType.second, accessor.getSystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + LAR_RequestMDT_Names::ResultsInNativeMessage_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setResultsInNativeMessage(extjson_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + LAR_RequestMDT_Names::LAR_Type_Name) {
      LAR_RelationEnum::deserializeList(valueType.second, accessor.getLAR_Type());
    } else if (valueType.first == nsPrefix + LAR_RequestMDT_Names::LAR_Details_Name) {
      LAR_DetailsType::deserialize(valueType.second, accessor.getLAR_Details(), nodeName, nsPrefix);
    }
  }
  RequestBaseType::deserialize(node, accessor, nodeName, nsPrefix);
  return true;
}

std::string LAR_RequestMDT::serialize(const uci::type::LAR_RequestMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? LAR_RequestMDT_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, LAR_RequestMDT_Names::Extern_Type_Name);
  }
  RequestBaseType::serialize(accessor, node, "", false, false, false);
  SystemID_Type::serialize(accessor.getSystemID(), node, LAR_RequestMDT_Names::SystemID_Name);
  extjson_uci::util::SerializationHelpers::serializeBoolean(accessor.getResultsInNativeMessage(), node, LAR_RequestMDT_Names::ResultsInNativeMessage_Name);
  {
    LAR_RelationEnum::serializeList(accessor.getLAR_Type(), node, LAR_RequestMDT_Names::LAR_Type_Name);
  }
  LAR_DetailsType::serialize(accessor.getLAR_Details(), node, LAR_RequestMDT_Names::LAR_Details_Name);
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

