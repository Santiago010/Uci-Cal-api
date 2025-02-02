/** @file LOS_SlantRangeCovarianceRatesType.cpp
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

#include "extxml_uci/type/LOS_SlantRangeCovarianceRatesType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/LOS_SlantRangeCovarianceRatesType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace LOS_SlantRangeCovarianceRatesType_Names {

constexpr const char* Extern_Type_Name{"LOS_SlantRangeCovarianceRatesType"};
constexpr const char* SlantRangeAzimuthRate_Name{"SlantRangeAzimuthRate"};
constexpr const char* SlantRangeElevationRate_Name{"SlantRangeElevationRate"};
constexpr const char* AzimuthSlantRangeRate_Name{"AzimuthSlantRangeRate"};
constexpr const char* ElevationSlantRangeRate_Name{"ElevationSlantRangeRate"};

} // namespace LOS_SlantRangeCovarianceRatesType_Names

bool LOS_SlantRangeCovarianceRatesType::deserialize(const boost::property_tree::ptree& propTree, uci::type::LOS_SlantRangeCovarianceRatesType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = LOS_SlantRangeCovarianceRatesType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + LOS_SlantRangeCovarianceRatesType_Names::SlantRangeAzimuthRate_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSlantRangeAzimuthRate(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + LOS_SlantRangeCovarianceRatesType_Names::SlantRangeElevationRate_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSlantRangeElevationRate(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + LOS_SlantRangeCovarianceRatesType_Names::AzimuthSlantRangeRate_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAzimuthSlantRangeRate(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + LOS_SlantRangeCovarianceRatesType_Names::ElevationSlantRangeRate_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setElevationSlantRangeRate(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    }
  }
  return true;
}

std::string LOS_SlantRangeCovarianceRatesType::serialize(const uci::type::LOS_SlantRangeCovarianceRatesType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? LOS_SlantRangeCovarianceRatesType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, LOS_SlantRangeCovarianceRatesType_Names::Extern_Type_Name);
  }
  if (accessor.hasSlantRangeAzimuthRate()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getSlantRangeAzimuthRate(), node, LOS_SlantRangeCovarianceRatesType_Names::SlantRangeAzimuthRate_Name);
  }
  if (accessor.hasSlantRangeElevationRate()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getSlantRangeElevationRate(), node, LOS_SlantRangeCovarianceRatesType_Names::SlantRangeElevationRate_Name);
  }
  if (accessor.hasAzimuthSlantRangeRate()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getAzimuthSlantRangeRate(), node, LOS_SlantRangeCovarianceRatesType_Names::AzimuthSlantRangeRate_Name);
  }
  if (accessor.hasElevationSlantRangeRate()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getElevationSlantRangeRate(), node, LOS_SlantRangeCovarianceRatesType_Names::ElevationSlantRangeRate_Name);
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

