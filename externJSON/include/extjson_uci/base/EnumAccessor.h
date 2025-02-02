/** @file EnumAccessor.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:23 PM
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

#ifndef EXTJSON_UCI_BASE_ENUMACCESSOR_H
#define EXTJSON_UCI_BASE_ENUMACCESSOR_H

#include <string>

#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/util/EnumTypesTranslator.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/base/accessorType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all base data types are declared */
namespace base {

/** . */
template<typename T_ACCESSOR_TYPE, uci::base::accessorType::AccessorType accessor_type>
class EnumAccessor {
public:
  /** .
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    * @return .
    */
  static bool deserialize(const boost::property_tree::ptree& propTree, T_ACCESSOR_TYPE& accessor, std::string& nodeName, std::string& /*nsPrefix*/, const bool topLevel = false) {
    nodeName = extjson_uci::util::EnumTypesTranslator::translateFromAccessorType(accessor_type);
    const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
    for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setValueFromName(*value);
      }
    }
    return true;
  }

  /** .
    *
    * @param propTree .
    * @param boundedList .
    */
  template<typename T>
  static void deserializeList(const boost::property_tree::ptree& propTree, T& boundedList) {
    for (const boost::property_tree::ptree::value_type& valueType : propTree.get_child("")) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        const typename T::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    }
  }

  /** .
    *
    * @param accessor .
    * @param propTree .
    * @param nodeName .
    * @param createNode .
    * @param addTypeAttribute .
    * @param checkIfDerivation .
    * @param topLevel .
    * @return .
    */
  static std::string serialize(const T_ACCESSOR_TYPE& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode = true, const bool addTypeAttribute = false, const bool /*checkIfDerivation*/ = true, const bool /*topLevel*/ = false) {
    std::string generatedNodeName{nodeName.empty() ? extjson_uci::util::EnumTypesTranslator::translateFromAccessorType(accessor_type) : nodeName};
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      extjson_uci::util::SerializationHelpers::addTypeAttribute(node, extjson_uci::util::EnumTypesTranslator::translateFromAccessorType(accessor_type));
    }
    node.add(boost::property_tree::ptree::path_type(generatedNodeName, '#'), accessor.toName());
    if (createNode) {
      propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
    }
    return generatedNodeName;
  }

  /** .
    *
    * @param boundedList .
    * @param node .
    * @param nodeName .
    */
  template<typename T>
  static void serializeList(const T& boundedList, boost::property_tree::ptree& node, const std::string& nodeName) {
    boost::property_tree::ptree newNode;
    for (typename T::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      newNode.push_back(boost::property_tree::ptree::value_type("", boost::property_tree::ptree(boundedList.at(i).toName())));
    }
    node.add_child(boost::property_tree::ptree::path_type(nodeName, '#'), newNode);
  }

};

} // namespace base

} // namespace extjson_uci

#endif // EXTJSON_UCI_BASE_ENUMACCESSOR_H
