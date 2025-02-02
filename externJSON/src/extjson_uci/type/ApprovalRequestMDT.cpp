/** @file ApprovalRequestMDT.cpp
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

#include "extjson_uci/type/ApprovalRequestMDT.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/ApprovalRequestPolicyReferenceType.h"
#include "extjson_uci/type/OperatorRoleType.h"
#include "extjson_uci/type/RequestBaseType.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/ApprovalRequestMDT.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace ApprovalRequestMDT_Names {

constexpr const char* Extern_Type_Name{"ApprovalRequestMDT"};
constexpr const char* Approver_Name{"Approver"};
constexpr const char* ApprovalReferences_Name{"ApprovalReferences"};
constexpr const char* RespondBy_Name{"RespondBy"};

} // namespace ApprovalRequestMDT_Names

bool ApprovalRequestMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ApprovalRequestMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ApprovalRequestMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + ApprovalRequestMDT_Names::Approver_Name) {
      OperatorRoleType::deserialize(valueType.second, accessor.getApprover(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ApprovalRequestMDT_Names::ApprovalReferences_Name) {
      ApprovalRequestPolicyReferenceType::deserialize(valueType.second, accessor.getApprovalReferences(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ApprovalRequestMDT_Names::RespondBy_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRespondBy(extjson_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    }
  }
  RequestBaseType::deserialize(node, accessor, nodeName, nsPrefix);
  return true;
}

std::string ApprovalRequestMDT::serialize(const uci::type::ApprovalRequestMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? ApprovalRequestMDT_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, ApprovalRequestMDT_Names::Extern_Type_Name);
  }
  RequestBaseType::serialize(accessor, node, "", false, false, false);
  OperatorRoleType::serialize(accessor.getApprover(), node, ApprovalRequestMDT_Names::Approver_Name);
  ApprovalRequestPolicyReferenceType::serialize(accessor.getApprovalReferences(), node, ApprovalRequestMDT_Names::ApprovalReferences_Name);
  extjson_uci::util::SerializationHelpers::serializeDateTime(accessor.getRespondBy(), node, ApprovalRequestMDT_Names::RespondBy_Name);
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

