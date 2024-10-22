/** @file EntitySourceIdentifierType.cpp
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

#include "extxml_uci/type/EntitySourceIdentifierType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/EOB_RecordID_Type.h"
#include "extxml_uci/type/EntityCapabilitySourceType.h"
#include "extxml_uci/type/EntityExternalType.h"
#include "extxml_uci/type/EntityFusionSourceType.h"
#include "extxml_uci/type/ID_Type.h"
#include "extxml_uci/type/OperatorID_Type.h"
#include "extxml_uci/type/ProductMetadataID_Type.h"
#include "extxml_uci/type/SOB_C2_RecordID_Type.h"
#include "extxml_uci/type/SOB_SatelliteRecordID_Type.h"
#include "extxml_uci/util/DerivedTypesDeserializer.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/EntitySourceIdentifierType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace EntitySourceIdentifierType_Names {

constexpr const char* Extern_Type_Name{"EntitySourceIdentifierType"};
constexpr const char* EOB_RecordID_Name{"EOB_RecordID"};
constexpr const char* ExternalIdentifier_Name{"ExternalIdentifier"};
constexpr const char* Fusion_Name{"Fusion"};
constexpr const char* InternallyDerivedID_Name{"InternallyDerivedID"};
constexpr const char* Capability_Name{"Capability"};
constexpr const char* ProductMetadataID_Name{"ProductMetadataID"};
constexpr const char* OperatorID_Name{"OperatorID"};
constexpr const char* SOB_SatelliteRecordID_Name{"SOB_SatelliteRecordID"};
constexpr const char* SOB_C2_RecordID_Name{"SOB_C2_RecordID"};

} // namespace EntitySourceIdentifierType_Names

bool EntitySourceIdentifierType::deserialize(const boost::property_tree::ptree& propTree, uci::type::EntitySourceIdentifierType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EntitySourceIdentifierType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + EntitySourceIdentifierType_Names::EOB_RecordID_Name) {
      EOB_RecordID_Type::deserialize(valueType.second, accessor.chooseEOB_RecordID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntitySourceIdentifierType_Names::ExternalIdentifier_Name) {
      EntityExternalType::deserialize(valueType.second, accessor.chooseExternalIdentifier(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntitySourceIdentifierType_Names::Fusion_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::EntitySourceIdentifierType::Fusion& boundedList = accessor.chooseFusion();
        const uci::type::EntitySourceIdentifierType::Fusion::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        EntityFusionSourceType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + EntitySourceIdentifierType_Names::InternallyDerivedID_Name) {
      extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.chooseInternallyDerivedID(extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntitySourceIdentifierType_Names::Capability_Name) {
      EntityCapabilitySourceType::deserialize(valueType.second, accessor.chooseCapability(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntitySourceIdentifierType_Names::ProductMetadataID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::EntitySourceIdentifierType::ProductMetadataID& boundedList = accessor.chooseProductMetadataID();
        const uci::type::EntitySourceIdentifierType::ProductMetadataID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        ProductMetadataID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + EntitySourceIdentifierType_Names::OperatorID_Name) {
      OperatorID_Type::deserialize(valueType.second, accessor.chooseOperatorID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntitySourceIdentifierType_Names::SOB_SatelliteRecordID_Name) {
      SOB_SatelliteRecordID_Type::deserialize(valueType.second, accessor.chooseSOB_SatelliteRecordID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntitySourceIdentifierType_Names::SOB_C2_RecordID_Name) {
      SOB_C2_RecordID_Type::deserialize(valueType.second, accessor.chooseSOB_C2_RecordID(), nodeName, nsPrefix);
    }
  }
  return true;
}

std::string EntitySourceIdentifierType::serialize(const uci::type::EntitySourceIdentifierType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? EntitySourceIdentifierType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, EntitySourceIdentifierType_Names::Extern_Type_Name);
  }
  if (accessor.isEOB_RecordID()) {
    EOB_RecordID_Type::serialize(accessor.getEOB_RecordID(), node, EntitySourceIdentifierType_Names::EOB_RecordID_Name);
  } else if (accessor.isExternalIdentifier()) {
    EntityExternalType::serialize(accessor.getExternalIdentifier(), node, EntitySourceIdentifierType_Names::ExternalIdentifier_Name);
  } else if (accessor.isFusion()) {
    {
      const uci::type::EntitySourceIdentifierType::Fusion& boundedList = accessor.getFusion();
      for (uci::type::EntitySourceIdentifierType::Fusion::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        EntityFusionSourceType::serialize(boundedList.at(i), node, EntitySourceIdentifierType_Names::Fusion_Name);
      }
    }
  } else if (accessor.isInternallyDerivedID()) {
    ID_Type::serialize(accessor.getInternallyDerivedID(), node, EntitySourceIdentifierType_Names::InternallyDerivedID_Name);
  } else if (accessor.isCapability()) {
    EntityCapabilitySourceType::serialize(accessor.getCapability(), node, EntitySourceIdentifierType_Names::Capability_Name);
  } else if (accessor.isProductMetadataID()) {
    {
      const uci::type::EntitySourceIdentifierType::ProductMetadataID& boundedList = accessor.getProductMetadataID();
      for (uci::type::EntitySourceIdentifierType::ProductMetadataID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        ProductMetadataID_Type::serialize(boundedList.at(i), node, EntitySourceIdentifierType_Names::ProductMetadataID_Name);
      }
    }
  } else if (accessor.isOperatorID()) {
    OperatorID_Type::serialize(accessor.getOperatorID(), node, EntitySourceIdentifierType_Names::OperatorID_Name);
  } else if (accessor.isSOB_SatelliteRecordID()) {
    SOB_SatelliteRecordID_Type::serialize(accessor.getSOB_SatelliteRecordID(), node, EntitySourceIdentifierType_Names::SOB_SatelliteRecordID_Name);
  } else if (accessor.isSOB_C2_RecordID()) {
    SOB_C2_RecordID_Type::serialize(accessor.getSOB_C2_RecordID(), node, EntitySourceIdentifierType_Names::SOB_C2_RecordID_Name);
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

