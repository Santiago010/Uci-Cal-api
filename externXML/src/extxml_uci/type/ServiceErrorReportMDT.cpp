/** @file ServiceErrorReportMDT.cpp
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

#include "extxml_uci/type/ServiceErrorReportMDT.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/AssociatedMessageType.h"
#include "extxml_uci/type/ServiceErrorReportID_Type.h"
#include "extxml_uci/type/ServiceID_Type.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/ServiceErrorReportMDT.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace ServiceErrorReportMDT_Names {

constexpr const char* Extern_Type_Name{"ServiceErrorReportMDT"};
constexpr const char* ServiceErrorReportID_Name{"ServiceErrorReportID"};
constexpr const char* ServiceID_Name{"ServiceID"};
constexpr const char* ErrorDetail_Name{"ErrorDetail"};
constexpr const char* SoftwareExceptionDetail_Name{"SoftwareExceptionDetail"};
constexpr const char* AssociatedMessage_Name{"AssociatedMessage"};

} // namespace ServiceErrorReportMDT_Names

bool ServiceErrorReportMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ServiceErrorReportMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ServiceErrorReportMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ServiceErrorReportMDT_Names::ServiceErrorReportID_Name) {
      ServiceErrorReportID_Type::deserialize(valueType.second, accessor.getServiceErrorReportID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ServiceErrorReportMDT_Names::ServiceID_Name) {
      ServiceID_Type::deserialize(valueType.second, accessor.getServiceID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ServiceErrorReportMDT_Names::ErrorDetail_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setErrorDetail(*value);
      }
    } else if (valueType.first == nsPrefix + ServiceErrorReportMDT_Names::SoftwareExceptionDetail_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSoftwareExceptionDetail(*value);
      }
    } else if (valueType.first == nsPrefix + ServiceErrorReportMDT_Names::AssociatedMessage_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ServiceErrorReportMDT::AssociatedMessage& boundedList = accessor.getAssociatedMessage();
        const uci::type::ServiceErrorReportMDT::AssociatedMessage::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        AssociatedMessageType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  return true;
}

std::string ServiceErrorReportMDT::serialize(const uci::type::ServiceErrorReportMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? ServiceErrorReportMDT_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, ServiceErrorReportMDT_Names::Extern_Type_Name);
  }
  ServiceErrorReportID_Type::serialize(accessor.getServiceErrorReportID(), node, ServiceErrorReportMDT_Names::ServiceErrorReportID_Name);
  ServiceID_Type::serialize(accessor.getServiceID(), node, ServiceErrorReportMDT_Names::ServiceID_Name);
  extxml_uci::util::SerializationHelpers::serializeString(accessor.getErrorDetail(), node, ServiceErrorReportMDT_Names::ErrorDetail_Name);
  if (accessor.hasSoftwareExceptionDetail()) {
    extxml_uci::util::SerializationHelpers::serializeString(accessor.getSoftwareExceptionDetail(), node, ServiceErrorReportMDT_Names::SoftwareExceptionDetail_Name);
  }
  {
    const uci::type::ServiceErrorReportMDT::AssociatedMessage& boundedList = accessor.getAssociatedMessage();
    for (uci::type::ServiceErrorReportMDT::AssociatedMessage::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      AssociatedMessageType::serialize(boundedList.at(i), node, ServiceErrorReportMDT_Names::AssociatedMessage_Name);
    }
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

