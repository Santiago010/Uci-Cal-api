/** @file ProductLocationMDT.cpp
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

#include "extxml_uci/type/ProductLocationMDT.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/ArchiveRequestType.h"
#include "extxml_uci/type/DataRecordBaseType.h"
#include "extxml_uci/type/EndpointReferenceType.h"
#include "extxml_uci/type/LocationAndStatusExpireType.h"
#include "extxml_uci/type/ProductLocationID_Type.h"
#include "extxml_uci/type/ProductMetadataID_Type.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/ProductLocationMDT.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace ProductLocationMDT_Names {

constexpr const char* Extern_Type_Name{"ProductLocationMDT"};
constexpr const char* ProductLocationID_Name{"ProductLocationID"};
constexpr const char* ProductMetadataID_Name{"ProductMetadataID"};
constexpr const char* LocationAndStatus_Name{"LocationAndStatus"};
constexpr const char* ThumbnailNetworkLocation_Name{"ThumbnailNetworkLocation"};
constexpr const char* ArchiveConfiguration_Name{"ArchiveConfiguration"};

} // namespace ProductLocationMDT_Names

bool ProductLocationMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ProductLocationMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ProductLocationMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ProductLocationMDT_Names::ProductLocationID_Name) {
      ProductLocationID_Type::deserialize(valueType.second, accessor.getProductLocationID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ProductLocationMDT_Names::ProductMetadataID_Name) {
      ProductMetadataID_Type::deserialize(valueType.second, accessor.getProductMetadataID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ProductLocationMDT_Names::LocationAndStatus_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ProductLocationMDT::LocationAndStatus& boundedList = accessor.getLocationAndStatus();
        const uci::type::ProductLocationMDT::LocationAndStatus::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        LocationAndStatusExpireType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ProductLocationMDT_Names::ThumbnailNetworkLocation_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ProductLocationMDT::ThumbnailNetworkLocation& boundedList = accessor.getThumbnailNetworkLocation();
        const uci::type::ProductLocationMDT::ThumbnailNetworkLocation::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        EndpointReferenceType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ProductLocationMDT_Names::ArchiveConfiguration_Name) {
      ArchiveRequestType::deserialize(valueType.second, accessor.enableArchiveConfiguration(), nodeName, nsPrefix);
    }
  }
  DataRecordBaseType::deserialize(node, accessor, nodeName, nsPrefix);
  return true;
}

std::string ProductLocationMDT::serialize(const uci::type::ProductLocationMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? ProductLocationMDT_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, ProductLocationMDT_Names::Extern_Type_Name);
  }
  DataRecordBaseType::serialize(accessor, node, "", false, false, false);
  ProductLocationID_Type::serialize(accessor.getProductLocationID(), node, ProductLocationMDT_Names::ProductLocationID_Name);
  ProductMetadataID_Type::serialize(accessor.getProductMetadataID(), node, ProductLocationMDT_Names::ProductMetadataID_Name);
  {
    const uci::type::ProductLocationMDT::LocationAndStatus& boundedList = accessor.getLocationAndStatus();
    for (uci::type::ProductLocationMDT::LocationAndStatus::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      LocationAndStatusExpireType::serialize(boundedList.at(i), node, ProductLocationMDT_Names::LocationAndStatus_Name);
    }
  }
  {
    const uci::type::ProductLocationMDT::ThumbnailNetworkLocation& boundedList = accessor.getThumbnailNetworkLocation();
    for (uci::type::ProductLocationMDT::ThumbnailNetworkLocation::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      EndpointReferenceType::serialize(boundedList.at(i), node, ProductLocationMDT_Names::ThumbnailNetworkLocation_Name);
    }
  }
  if (accessor.hasArchiveConfiguration()) {
    ArchiveRequestType::serialize(accessor.getArchiveConfiguration(), node, ProductLocationMDT_Names::ArchiveConfiguration_Name);
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

