/** @file RepetitionEventBasedType.cpp
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

#include "extxml_uci/type/RepetitionEventBasedType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/EventOffsetChoiceType.h"
#include "extxml_uci/type/EventWindowChoiceType.h"
#include "extxml_uci/type/ReferenceAssetKinematicsType.h"
#include "extxml_uci/type/RepetitionEventType.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/RepetitionEventBasedType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace RepetitionEventBasedType_Names {

constexpr const char* Extern_Type_Name{"RepetitionEventBasedType"};
constexpr const char* Event_Name{"Event"};
constexpr const char* EventOffset_Name{"EventOffset"};
constexpr const char* EventWindow_Name{"EventWindow"};
constexpr const char* AlternateReferenceObject_Name{"AlternateReferenceObject"};
constexpr const char* RepetitionAttempts_Name{"RepetitionAttempts"};

} // namespace RepetitionEventBasedType_Names

bool RepetitionEventBasedType::deserialize(const boost::property_tree::ptree& propTree, uci::type::RepetitionEventBasedType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = RepetitionEventBasedType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + RepetitionEventBasedType_Names::Event_Name) {
      RepetitionEventType::deserialize(valueType.second, accessor.getEvent(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RepetitionEventBasedType_Names::EventOffset_Name) {
      EventOffsetChoiceType::deserialize(valueType.second, accessor.enableEventOffset(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RepetitionEventBasedType_Names::EventWindow_Name) {
      EventWindowChoiceType::deserialize(valueType.second, accessor.enableEventWindow(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RepetitionEventBasedType_Names::AlternateReferenceObject_Name) {
      ReferenceAssetKinematicsType::deserialize(valueType.second, accessor.enableAlternateReferenceObject(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + RepetitionEventBasedType_Names::RepetitionAttempts_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRepetitionAttempts(extxml_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    }
  }
  return true;
}

std::string RepetitionEventBasedType::serialize(const uci::type::RepetitionEventBasedType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? RepetitionEventBasedType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, RepetitionEventBasedType_Names::Extern_Type_Name);
  }
  RepetitionEventType::serialize(accessor.getEvent(), node, RepetitionEventBasedType_Names::Event_Name);
  if (accessor.hasEventOffset()) {
    EventOffsetChoiceType::serialize(accessor.getEventOffset(), node, RepetitionEventBasedType_Names::EventOffset_Name);
  }
  if (accessor.hasEventWindow()) {
    EventWindowChoiceType::serialize(accessor.getEventWindow(), node, RepetitionEventBasedType_Names::EventWindow_Name);
  }
  if (accessor.hasAlternateReferenceObject()) {
    ReferenceAssetKinematicsType::serialize(accessor.getAlternateReferenceObject(), node, RepetitionEventBasedType_Names::AlternateReferenceObject_Name);
  }
  extxml_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getRepetitionAttempts(), node, RepetitionEventBasedType_Names::RepetitionAttempts_Name);
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

