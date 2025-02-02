/** @file ImageSubheaderRevA_Type.cpp
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

#include "extxml_uci/type/ImageSubheaderRevA_Type.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/IID2_ChoiceType.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/ImageSubheaderRevA_Type.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace ImageSubheaderRevA_Type_Names {

constexpr const char* Extern_Type_Name{"ImageSubheaderRevA_Type"};
constexpr const char* TargetIdentifier_Name{"TargetIdentifier"};
constexpr const char* IID2_Name{"IID2"};
constexpr const char* ImageSecurityClassification_Name{"ImageSecurityClassification"};
constexpr const char* ImageSecurityClassificationSystem_Name{"ImageSecurityClassificationSystem"};
constexpr const char* ImageCodewords_Name{"ImageCodewords"};
constexpr const char* ImageControlAndHandling_Name{"ImageControlAndHandling"};
constexpr const char* ImageReleasingInstructions_Name{"ImageReleasingInstructions"};
constexpr const char* ImageDeclassificationType_Name{"ImageDeclassificationType"};
constexpr const char* ImageDeclassificationDate_Name{"ImageDeclassificationDate"};
constexpr const char* ImageDeclassificationExemption_Name{"ImageDeclassificationExemption"};
constexpr const char* ImageDowngrade_Name{"ImageDowngrade"};
constexpr const char* ImageDowngradeDate_Name{"ImageDowngradeDate"};
constexpr const char* ImageClassificationText_Name{"ImageClassificationText"};
constexpr const char* ImageClassificationAuthorityType_Name{"ImageClassificationAuthorityType"};
constexpr const char* ImageClassificationAuthority_Name{"ImageClassificationAuthority"};
constexpr const char* ImageClassificationReason_Name{"ImageClassificationReason"};
constexpr const char* ImageSecuritySourceDate_Name{"ImageSecuritySourceDate"};
constexpr const char* ImageSecurityControlNumber_Name{"ImageSecurityControlNumber"};

} // namespace ImageSubheaderRevA_Type_Names

bool ImageSubheaderRevA_Type::deserialize(const boost::property_tree::ptree& propTree, uci::type::ImageSubheaderRevA_Type& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ImageSubheaderRevA_Type_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ImageSubheaderRevA_Type_Names::TargetIdentifier_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTargetIdentifier(*value);
      }
    } else if (valueType.first == nsPrefix + ImageSubheaderRevA_Type_Names::IID2_Name) {
      IID2_ChoiceType::deserialize(valueType.second, accessor.enableIID2(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ImageSubheaderRevA_Type_Names::ImageSecurityClassification_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setImageSecurityClassification(*value);
      }
    } else if (valueType.first == nsPrefix + ImageSubheaderRevA_Type_Names::ImageSecurityClassificationSystem_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setImageSecurityClassificationSystem(*value);
      }
    } else if (valueType.first == nsPrefix + ImageSubheaderRevA_Type_Names::ImageCodewords_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setImageCodewords(*value);
      }
    } else if (valueType.first == nsPrefix + ImageSubheaderRevA_Type_Names::ImageControlAndHandling_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setImageControlAndHandling(*value);
      }
    } else if (valueType.first == nsPrefix + ImageSubheaderRevA_Type_Names::ImageReleasingInstructions_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setImageReleasingInstructions(*value);
      }
    } else if (valueType.first == nsPrefix + ImageSubheaderRevA_Type_Names::ImageDeclassificationType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setImageDeclassificationType(*value);
      }
    } else if (valueType.first == nsPrefix + ImageSubheaderRevA_Type_Names::ImageDeclassificationDate_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setImageDeclassificationDate(*value);
      }
    } else if (valueType.first == nsPrefix + ImageSubheaderRevA_Type_Names::ImageDeclassificationExemption_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setImageDeclassificationExemption(*value);
      }
    } else if (valueType.first == nsPrefix + ImageSubheaderRevA_Type_Names::ImageDowngrade_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setImageDowngrade(*value);
      }
    } else if (valueType.first == nsPrefix + ImageSubheaderRevA_Type_Names::ImageDowngradeDate_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setImageDowngradeDate(*value);
      }
    } else if (valueType.first == nsPrefix + ImageSubheaderRevA_Type_Names::ImageClassificationText_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setImageClassificationText(*value);
      }
    } else if (valueType.first == nsPrefix + ImageSubheaderRevA_Type_Names::ImageClassificationAuthorityType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setImageClassificationAuthorityType(*value);
      }
    } else if (valueType.first == nsPrefix + ImageSubheaderRevA_Type_Names::ImageClassificationAuthority_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setImageClassificationAuthority(*value);
      }
    } else if (valueType.first == nsPrefix + ImageSubheaderRevA_Type_Names::ImageClassificationReason_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setImageClassificationReason(*value);
      }
    } else if (valueType.first == nsPrefix + ImageSubheaderRevA_Type_Names::ImageSecuritySourceDate_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setImageSecuritySourceDate(*value);
      }
    } else if (valueType.first == nsPrefix + ImageSubheaderRevA_Type_Names::ImageSecurityControlNumber_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setImageSecurityControlNumber(*value);
      }
    }
  }
  return true;
}

std::string ImageSubheaderRevA_Type::serialize(const uci::type::ImageSubheaderRevA_Type& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? ImageSubheaderRevA_Type_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, ImageSubheaderRevA_Type_Names::Extern_Type_Name);
  }
  if (accessor.hasTargetIdentifier()) {
    extxml_uci::util::SerializationHelpers::serializeString(accessor.getTargetIdentifier(), node, ImageSubheaderRevA_Type_Names::TargetIdentifier_Name);
  }
  if (accessor.hasIID2()) {
    IID2_ChoiceType::serialize(accessor.getIID2(), node, ImageSubheaderRevA_Type_Names::IID2_Name);
  }
  extxml_uci::util::SerializationHelpers::serializeString(accessor.getImageSecurityClassification(), node, ImageSubheaderRevA_Type_Names::ImageSecurityClassification_Name);
  if (accessor.hasImageSecurityClassificationSystem()) {
    extxml_uci::util::SerializationHelpers::serializeString(accessor.getImageSecurityClassificationSystem(), node, ImageSubheaderRevA_Type_Names::ImageSecurityClassificationSystem_Name);
  }
  if (accessor.hasImageCodewords()) {
    extxml_uci::util::SerializationHelpers::serializeString(accessor.getImageCodewords(), node, ImageSubheaderRevA_Type_Names::ImageCodewords_Name);
  }
  if (accessor.hasImageControlAndHandling()) {
    extxml_uci::util::SerializationHelpers::serializeString(accessor.getImageControlAndHandling(), node, ImageSubheaderRevA_Type_Names::ImageControlAndHandling_Name);
  }
  if (accessor.hasImageReleasingInstructions()) {
    extxml_uci::util::SerializationHelpers::serializeString(accessor.getImageReleasingInstructions(), node, ImageSubheaderRevA_Type_Names::ImageReleasingInstructions_Name);
  }
  if (accessor.hasImageDeclassificationType()) {
    extxml_uci::util::SerializationHelpers::serializeString(accessor.getImageDeclassificationType(), node, ImageSubheaderRevA_Type_Names::ImageDeclassificationType_Name);
  }
  if (accessor.hasImageDeclassificationDate()) {
    extxml_uci::util::SerializationHelpers::serializeString(accessor.getImageDeclassificationDate(), node, ImageSubheaderRevA_Type_Names::ImageDeclassificationDate_Name);
  }
  if (accessor.hasImageDeclassificationExemption()) {
    extxml_uci::util::SerializationHelpers::serializeString(accessor.getImageDeclassificationExemption(), node, ImageSubheaderRevA_Type_Names::ImageDeclassificationExemption_Name);
  }
  if (accessor.hasImageDowngrade()) {
    extxml_uci::util::SerializationHelpers::serializeString(accessor.getImageDowngrade(), node, ImageSubheaderRevA_Type_Names::ImageDowngrade_Name);
  }
  if (accessor.hasImageDowngradeDate()) {
    extxml_uci::util::SerializationHelpers::serializeString(accessor.getImageDowngradeDate(), node, ImageSubheaderRevA_Type_Names::ImageDowngradeDate_Name);
  }
  if (accessor.hasImageClassificationText()) {
    extxml_uci::util::SerializationHelpers::serializeString(accessor.getImageClassificationText(), node, ImageSubheaderRevA_Type_Names::ImageClassificationText_Name);
  }
  if (accessor.hasImageClassificationAuthorityType()) {
    extxml_uci::util::SerializationHelpers::serializeString(accessor.getImageClassificationAuthorityType(), node, ImageSubheaderRevA_Type_Names::ImageClassificationAuthorityType_Name);
  }
  if (accessor.hasImageClassificationAuthority()) {
    extxml_uci::util::SerializationHelpers::serializeString(accessor.getImageClassificationAuthority(), node, ImageSubheaderRevA_Type_Names::ImageClassificationAuthority_Name);
  }
  if (accessor.hasImageClassificationReason()) {
    extxml_uci::util::SerializationHelpers::serializeString(accessor.getImageClassificationReason(), node, ImageSubheaderRevA_Type_Names::ImageClassificationReason_Name);
  }
  if (accessor.hasImageSecuritySourceDate()) {
    extxml_uci::util::SerializationHelpers::serializeString(accessor.getImageSecuritySourceDate(), node, ImageSubheaderRevA_Type_Names::ImageSecuritySourceDate_Name);
  }
  if (accessor.hasImageSecurityControlNumber()) {
    extxml_uci::util::SerializationHelpers::serializeString(accessor.getImageSecurityControlNumber(), node, ImageSubheaderRevA_Type_Names::ImageSecurityControlNumber_Name);
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

