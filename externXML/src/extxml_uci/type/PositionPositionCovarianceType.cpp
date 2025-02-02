/** @file PositionPositionCovarianceType.cpp
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

#include "extxml_uci/type/PositionPositionCovarianceType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/PositionPositionCovarianceType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace PositionPositionCovarianceType_Names {

constexpr const char* Extern_Type_Name{"PositionPositionCovarianceType"};
constexpr const char* PnPn_Name{"PnPn"};
constexpr const char* PnPe_Name{"PnPe"};
constexpr const char* PnPd_Name{"PnPd"};
constexpr const char* PePe_Name{"PePe"};
constexpr const char* PePd_Name{"PePd"};
constexpr const char* PdPd_Name{"PdPd"};

} // namespace PositionPositionCovarianceType_Names

bool PositionPositionCovarianceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PositionPositionCovarianceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PositionPositionCovarianceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PositionPositionCovarianceType_Names::PnPn_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPnPn(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + PositionPositionCovarianceType_Names::PnPe_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPnPe(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + PositionPositionCovarianceType_Names::PnPd_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPnPd(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + PositionPositionCovarianceType_Names::PePe_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPePe(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + PositionPositionCovarianceType_Names::PePd_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPePd(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + PositionPositionCovarianceType_Names::PdPd_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPdPd(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    }
  }
  return true;
}

std::string PositionPositionCovarianceType::serialize(const uci::type::PositionPositionCovarianceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? PositionPositionCovarianceType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, PositionPositionCovarianceType_Names::Extern_Type_Name);
  }
  extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getPnPn(), node, PositionPositionCovarianceType_Names::PnPn_Name);
  extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getPnPe(), node, PositionPositionCovarianceType_Names::PnPe_Name);
  if (accessor.hasPnPd()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getPnPd(), node, PositionPositionCovarianceType_Names::PnPd_Name);
  }
  extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getPePe(), node, PositionPositionCovarianceType_Names::PePe_Name);
  if (accessor.hasPePd()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getPePd(), node, PositionPositionCovarianceType_Names::PePd_Name);
  }
  if (accessor.hasPdPd()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getPdPd(), node, PositionPositionCovarianceType_Names::PdPd_Name);
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

