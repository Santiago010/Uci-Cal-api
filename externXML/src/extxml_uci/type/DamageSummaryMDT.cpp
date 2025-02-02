/** @file DamageSummaryMDT.cpp
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

#include "extxml_uci/type/DamageSummaryMDT.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/DamageReportID_Type.h"
#include "extxml_uci/type/DamageSubjectType.h"
#include "extxml_uci/type/DamageSummaryID_Type.h"
#include "extxml_uci/type/ZoneType.h"
#include "extxml_uci/util/DerivedTypesDeserializer.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/DamageSummaryMDT.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace DamageSummaryMDT_Names {

constexpr const char* Extern_Type_Name{"DamageSummaryMDT"};
constexpr const char* DamageSummaryID_Name{"DamageSummaryID"};
constexpr const char* SummaryCompletionTime_Name{"SummaryCompletionTime"};
constexpr const char* Subject_Name{"Subject"};
constexpr const char* SummaryZone_Name{"SummaryZone"};
constexpr const char* DamageReportID_Name{"DamageReportID"};

} // namespace DamageSummaryMDT_Names

bool DamageSummaryMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::DamageSummaryMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = DamageSummaryMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + DamageSummaryMDT_Names::DamageSummaryID_Name) {
      DamageSummaryID_Type::deserialize(valueType.second, accessor.getDamageSummaryID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DamageSummaryMDT_Names::SummaryCompletionTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSummaryCompletionTime(extxml_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + DamageSummaryMDT_Names::Subject_Name) {
      DamageSubjectType::deserialize(valueType.second, accessor.getSubject(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DamageSummaryMDT_Names::SummaryZone_Name) {
      extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableSummaryZone(extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DamageSummaryMDT_Names::DamageReportID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::DamageSummaryMDT::DamageReportID& boundedList = accessor.getDamageReportID();
        const uci::type::DamageSummaryMDT::DamageReportID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        DamageReportID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  return true;
}

std::string DamageSummaryMDT::serialize(const uci::type::DamageSummaryMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? DamageSummaryMDT_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, DamageSummaryMDT_Names::Extern_Type_Name);
  }
  DamageSummaryID_Type::serialize(accessor.getDamageSummaryID(), node, DamageSummaryMDT_Names::DamageSummaryID_Name);
  extxml_uci::util::SerializationHelpers::serializeDateTime(accessor.getSummaryCompletionTime(), node, DamageSummaryMDT_Names::SummaryCompletionTime_Name);
  DamageSubjectType::serialize(accessor.getSubject(), node, DamageSummaryMDT_Names::Subject_Name);
  if (accessor.hasSummaryZone()) {
    ZoneType::serialize(accessor.getSummaryZone(), node, DamageSummaryMDT_Names::SummaryZone_Name);
  }
  {
    const uci::type::DamageSummaryMDT::DamageReportID& boundedList = accessor.getDamageReportID();
    for (uci::type::DamageSummaryMDT::DamageReportID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      DamageReportID_Type::serialize(boundedList.at(i), node, DamageSummaryMDT_Names::DamageReportID_Name);
    }
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

