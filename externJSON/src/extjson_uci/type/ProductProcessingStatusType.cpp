/** @file ProductProcessingStatusType.cpp
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

#include "extjson_uci/type/ProductProcessingStatusType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/CannotComplyType.h"
#include "extjson_uci/type/InputProductType.h"
#include "extjson_uci/type/ProcessingResultsPET.h"
#include "extjson_uci/type/ProcessingTypeEnum.h"
#include "extjson_uci/type/ProductMetadataID_Type.h"
#include "extjson_uci/type/RequestProcessingStateEnum.h"
#include "extjson_uci/util/DerivedTypesDeserializer.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/ProductProcessingStatusType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace ProductProcessingStatusType_Names {

constexpr const char* Extern_Type_Name{"ProductProcessingStatusType"};
constexpr const char* InputProduct_Name{"InputProduct"};
constexpr const char* ProductProcessingState_Name{"ProductProcessingState"};
constexpr const char* StatusDetails_Name{"StatusDetails"};
constexpr const char* ProcessingIndex_Name{"ProcessingIndex"};
constexpr const char* OutputData_Name{"OutputData"};
constexpr const char* ProcessingType_Name{"ProcessingType"};
constexpr const char* OutputProductMetadataID_Name{"OutputProductMetadataID"};
constexpr const char* EstimatedCompletionTime_Name{"EstimatedCompletionTime"};
constexpr const char* EstimatedPercentComplete_Name{"EstimatedPercentComplete"};

} // namespace ProductProcessingStatusType_Names

bool ProductProcessingStatusType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ProductProcessingStatusType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ProductProcessingStatusType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + ProductProcessingStatusType_Names::InputProduct_Name) {
      uci::type::ProductProcessingStatusType::InputProduct& boundedList = accessor.getInputProduct();
      const uci::type::ProductProcessingStatusType::InputProduct::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      InputProductType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ProductProcessingStatusType_Names::ProductProcessingState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getProductProcessingState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ProductProcessingStatusType_Names::StatusDetails_Name) {
      extjson_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableStatusDetails(extjson_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ProductProcessingStatusType_Names::ProcessingIndex_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setProcessingIndex(extjson_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    } else if (valueType.first == nsPrefix + ProductProcessingStatusType_Names::OutputData_Name) {
      extjson_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableOutputData(extjson_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ProductProcessingStatusType_Names::ProcessingType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableProcessingType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ProductProcessingStatusType_Names::OutputProductMetadataID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ProductProcessingStatusType::OutputProductMetadataID& boundedList = accessor.getOutputProductMetadataID();
        const uci::type::ProductProcessingStatusType::OutputProductMetadataID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        ProductMetadataID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ProductProcessingStatusType_Names::EstimatedCompletionTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEstimatedCompletionTime(extjson_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + ProductProcessingStatusType_Names::EstimatedPercentComplete_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setEstimatedPercentComplete(extjson_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    }
  }
  return true;
}

std::string ProductProcessingStatusType::serialize(const uci::type::ProductProcessingStatusType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? ProductProcessingStatusType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, ProductProcessingStatusType_Names::Extern_Type_Name);
  }
  {
    const uci::type::ProductProcessingStatusType::InputProduct& boundedList = accessor.getInputProduct();
    for (uci::type::ProductProcessingStatusType::InputProduct::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      InputProductType::serialize(boundedList.at(i), node, ProductProcessingStatusType_Names::InputProduct_Name);
    }
  }
  RequestProcessingStateEnum::serialize(accessor.getProductProcessingState(), node, ProductProcessingStatusType_Names::ProductProcessingState_Name, false);
  if (accessor.hasStatusDetails()) {
    CannotComplyType::serialize(accessor.getStatusDetails(), node, ProductProcessingStatusType_Names::StatusDetails_Name);
  }
  if (accessor.hasProcessingIndex()) {
    extjson_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getProcessingIndex(), node, ProductProcessingStatusType_Names::ProcessingIndex_Name);
  }
  if (accessor.hasOutputData()) {
    ProcessingResultsPET::serialize(accessor.getOutputData(), node, ProductProcessingStatusType_Names::OutputData_Name);
  }
  if (accessor.hasProcessingType()) {
    ProcessingTypeEnum::serialize(accessor.getProcessingType(), node, ProductProcessingStatusType_Names::ProcessingType_Name, false);
  }
  {
    const uci::type::ProductProcessingStatusType::OutputProductMetadataID& boundedList = accessor.getOutputProductMetadataID();
    for (uci::type::ProductProcessingStatusType::OutputProductMetadataID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      ProductMetadataID_Type::serialize(boundedList.at(i), node, ProductProcessingStatusType_Names::OutputProductMetadataID_Name);
    }
  }
  if (accessor.hasEstimatedCompletionTime()) {
    extjson_uci::util::SerializationHelpers::serializeDateTime(accessor.getEstimatedCompletionTime(), node, ProductProcessingStatusType_Names::EstimatedCompletionTime_Name);
  }
  if (accessor.hasEstimatedPercentComplete()) {
    extjson_uci::util::SerializationHelpers::serializeDouble(accessor.getEstimatedPercentComplete(), node, ProductProcessingStatusType_Names::EstimatedPercentComplete_Name);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

