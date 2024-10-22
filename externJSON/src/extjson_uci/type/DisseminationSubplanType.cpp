/** @file DisseminationSubplanType.cpp
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

#include "extjson_uci/type/DisseminationSubplanType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/ArchiveRequestType.h"
#include "extjson_uci/type/ProductDisseminationDestinationID_Type.h"
#include "extjson_uci/type/PushContentsEnum.h"
#include "extjson_uci/type/SourceCommandEXT.h"
#include "extjson_uci/util/DerivedTypesDeserializer.h"
#include "extjson_uci/util/DerivedTypesSerializer.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/base/accessorType.h"
#include "uci/type/DisseminationSubplanType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace DisseminationSubplanType_Names {

constexpr const char* Extern_Type_Name{"DisseminationSubplanType"};
constexpr const char* PushContents_Name{"PushContents"};
constexpr const char* DestinationID_Name{"DestinationID"};
constexpr const char* ArchiveCommand_Name{"ArchiveCommand"};
constexpr const char* ExtensionCommand_Name{"ExtensionCommand"};

} // namespace DisseminationSubplanType_Names

bool DisseminationSubplanType::deserialize(const boost::property_tree::ptree& propTree, uci::type::DisseminationSubplanType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = DisseminationSubplanType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + DisseminationSubplanType_Names::PushContents_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getPushContents().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + DisseminationSubplanType_Names::DestinationID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::DisseminationSubplanType::DestinationID& boundedList = accessor.getDestinationID();
        const uci::type::DisseminationSubplanType::DestinationID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        ProductDisseminationDestinationID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + DisseminationSubplanType_Names::ArchiveCommand_Name) {
      ArchiveRequestType::deserialize(valueType.second, accessor.enableArchiveCommand(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DisseminationSubplanType_Names::ExtensionCommand_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::DisseminationSubplanType::ExtensionCommand& boundedList = accessor.getExtensionCommand();
        const uci::type::DisseminationSubplanType::ExtensionCommand::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        SourceCommandEXT::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  return true;
}

std::string DisseminationSubplanType::serialize(const uci::type::DisseminationSubplanType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? DisseminationSubplanType_Names::Extern_Type_Name : nodeName};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::disseminationSubplanType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      extjson_uci::util::SerializationHelpers::addTypeAttribute(node, DisseminationSubplanType_Names::Extern_Type_Name);
    }
    PushContentsEnum::serialize(accessor.getPushContents(), node, DisseminationSubplanType_Names::PushContents_Name, false);
    {
      const uci::type::DisseminationSubplanType::DestinationID& boundedList = accessor.getDestinationID();
      for (uci::type::DisseminationSubplanType::DestinationID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        ProductDisseminationDestinationID_Type::serialize(boundedList.at(i), node, DisseminationSubplanType_Names::DestinationID_Name);
      }
    }
    if (accessor.hasArchiveCommand()) {
      ArchiveRequestType::serialize(accessor.getArchiveCommand(), node, DisseminationSubplanType_Names::ArchiveCommand_Name);
    }
    {
      const uci::type::DisseminationSubplanType::ExtensionCommand& boundedList = accessor.getExtensionCommand();
      for (uci::type::DisseminationSubplanType::ExtensionCommand::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        SourceCommandEXT::serialize(boundedList.at(i), node, DisseminationSubplanType_Names::ExtensionCommand_Name);
      }
    }
    if (createNode) {
      propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
    }
  } else {
    extjson_uci::util::DerivedTypesSerializer::serialize(accessor, propTree, nodeName, createNode);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

