/** @file DigitalPayloadProcessorPortAndDataType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:12 PM
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

#include "../../../include/asb_uci/type/DigitalPayloadProcessorPortAndDataType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DigitalPayloadProcessorPortAndDataType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

DigitalPayloadProcessorPortAndDataType::DigitalPayloadProcessorPortAndDataType()
  : dataIO_InstanceIndex_Accessor{boost::make_unique<DataIO_InstanceIndex>(0, SIZE_MAX)},
    networkPortIndex_Accessor{boost::make_unique<NetworkPortIndex>(1, SIZE_MAX)},
    processingInstanceIndex_Accessor{boost::make_unique<ProcessingInstanceIndex>(0, SIZE_MAX)} {
}

DigitalPayloadProcessorPortAndDataType::~DigitalPayloadProcessorPortAndDataType() = default;

void DigitalPayloadProcessorPortAndDataType::copy(const uci::type::DigitalPayloadProcessorPortAndDataType& accessor) {
  copyImpl(accessor, false);
}

void DigitalPayloadProcessorPortAndDataType::copyImpl(const uci::type::DigitalPayloadProcessorPortAndDataType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const DigitalPayloadProcessorPortAndDataType&>(accessor);
    setDataIO_InstanceIndex(*(accessorImpl.dataIO_InstanceIndex_Accessor));
    setNetworkPortIndex(*(accessorImpl.networkPortIndex_Accessor));
    setProcessingInstanceIndex(*(accessorImpl.processingInstanceIndex_Accessor));
  }
}

void DigitalPayloadProcessorPortAndDataType::reset() noexcept {
  dataIO_InstanceIndex_Accessor->reset();
  networkPortIndex_Accessor->reset();
  processingInstanceIndex_Accessor->reset();
}

const uci::type::DigitalPayloadProcessorPortAndDataType::DataIO_InstanceIndex& DigitalPayloadProcessorPortAndDataType::getDataIO_InstanceIndex() const {
  return *dataIO_InstanceIndex_Accessor;
}

uci::type::DigitalPayloadProcessorPortAndDataType::DataIO_InstanceIndex& DigitalPayloadProcessorPortAndDataType::getDataIO_InstanceIndex() {
  return *dataIO_InstanceIndex_Accessor;
}

uci::type::DigitalPayloadProcessorPortAndDataType& DigitalPayloadProcessorPortAndDataType::setDataIO_InstanceIndex(const uci::type::DigitalPayloadProcessorPortAndDataType::DataIO_InstanceIndex& accessor) {
  if (&accessor != dataIO_InstanceIndex_Accessor.get()) {
    dataIO_InstanceIndex_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::DigitalPayloadProcessorPortAndDataType::NetworkPortIndex& DigitalPayloadProcessorPortAndDataType::getNetworkPortIndex() const {
  return *networkPortIndex_Accessor;
}

uci::type::DigitalPayloadProcessorPortAndDataType::NetworkPortIndex& DigitalPayloadProcessorPortAndDataType::getNetworkPortIndex() {
  return *networkPortIndex_Accessor;
}

uci::type::DigitalPayloadProcessorPortAndDataType& DigitalPayloadProcessorPortAndDataType::setNetworkPortIndex(const uci::type::DigitalPayloadProcessorPortAndDataType::NetworkPortIndex& accessor) {
  if (&accessor != networkPortIndex_Accessor.get()) {
    networkPortIndex_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::DigitalPayloadProcessorPortAndDataType::ProcessingInstanceIndex& DigitalPayloadProcessorPortAndDataType::getProcessingInstanceIndex() const {
  return *processingInstanceIndex_Accessor;
}

uci::type::DigitalPayloadProcessorPortAndDataType::ProcessingInstanceIndex& DigitalPayloadProcessorPortAndDataType::getProcessingInstanceIndex() {
  return *processingInstanceIndex_Accessor;
}

uci::type::DigitalPayloadProcessorPortAndDataType& DigitalPayloadProcessorPortAndDataType::setProcessingInstanceIndex(const uci::type::DigitalPayloadProcessorPortAndDataType::ProcessingInstanceIndex& accessor) {
  if (&accessor != processingInstanceIndex_Accessor.get()) {
    processingInstanceIndex_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<DigitalPayloadProcessorPortAndDataType> DigitalPayloadProcessorPortAndDataType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::digitalPayloadProcessorPortAndDataType : type};
  return (requestedType == uci::type::accessorType::digitalPayloadProcessorPortAndDataType) ? boost::make_unique<DigitalPayloadProcessorPortAndDataType>() : nullptr;
}

/**  */
namespace DigitalPayloadProcessorPortAndDataType_Names {

constexpr const char* Extern_Type_Name{"DigitalPayloadProcessorPortAndDataType"};
constexpr const char* DataIO_InstanceIndex_Name{"DataIO_InstanceIndex"};
constexpr const char* NetworkPortIndex_Name{"NetworkPortIndex"};
constexpr const char* ProcessingInstanceIndex_Name{"ProcessingInstanceIndex"};

} // namespace DigitalPayloadProcessorPortAndDataType_Names

void DigitalPayloadProcessorPortAndDataType::deserialize(const boost::property_tree::ptree& propTree, uci::type::DigitalPayloadProcessorPortAndDataType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = DigitalPayloadProcessorPortAndDataType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + DigitalPayloadProcessorPortAndDataType_Names::DataIO_InstanceIndex_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::DigitalPayloadProcessorPortAndDataType::DataIO_InstanceIndex& boundedList = accessor.getDataIO_InstanceIndex();
        const uci::type::DigitalPayloadProcessorPortAndDataType::DataIO_InstanceIndex::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setUnsignedIntValue(asb_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    } else if (valueType.first == nsPrefix + DigitalPayloadProcessorPortAndDataType_Names::NetworkPortIndex_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::DigitalPayloadProcessorPortAndDataType::NetworkPortIndex& boundedList = accessor.getNetworkPortIndex();
        const uci::type::DigitalPayloadProcessorPortAndDataType::NetworkPortIndex::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setUnsignedIntValue(asb_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    } else if (valueType.first == nsPrefix + DigitalPayloadProcessorPortAndDataType_Names::ProcessingInstanceIndex_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::DigitalPayloadProcessorPortAndDataType::ProcessingInstanceIndex& boundedList = accessor.getProcessingInstanceIndex();
        const uci::type::DigitalPayloadProcessorPortAndDataType::ProcessingInstanceIndex::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setUnsignedIntValue(asb_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    }
  }
}

std::string DigitalPayloadProcessorPortAndDataType::serialize(const uci::type::DigitalPayloadProcessorPortAndDataType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? DigitalPayloadProcessorPortAndDataType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, DigitalPayloadProcessorPortAndDataType_Names::Extern_Type_Name);
  }
  {
    const uci::type::DigitalPayloadProcessorPortAndDataType::DataIO_InstanceIndex& boundedList = accessor.getDataIO_InstanceIndex();
    for (uci::type::DigitalPayloadProcessorPortAndDataType::DataIO_InstanceIndex::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::util::SerializationHelpers::serializeUnsignedInt(boundedList.at(i), node, DigitalPayloadProcessorPortAndDataType_Names::DataIO_InstanceIndex_Name);
    }
  }
  {
    const uci::type::DigitalPayloadProcessorPortAndDataType::NetworkPortIndex& boundedList = accessor.getNetworkPortIndex();
    for (uci::type::DigitalPayloadProcessorPortAndDataType::NetworkPortIndex::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::util::SerializationHelpers::serializeUnsignedInt(boundedList.at(i), node, DigitalPayloadProcessorPortAndDataType_Names::NetworkPortIndex_Name);
    }
  }
  {
    const uci::type::DigitalPayloadProcessorPortAndDataType::ProcessingInstanceIndex& boundedList = accessor.getProcessingInstanceIndex();
    for (uci::type::DigitalPayloadProcessorPortAndDataType::ProcessingInstanceIndex::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::util::SerializationHelpers::serializeUnsignedInt(boundedList.at(i), node, DigitalPayloadProcessorPortAndDataType_Names::ProcessingInstanceIndex_Name);
    }
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace asb_uci

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

uci::type::DigitalPayloadProcessorPortAndDataType& DigitalPayloadProcessorPortAndDataType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::DigitalPayloadProcessorPortAndDataType>().release());
}

uci::type::DigitalPayloadProcessorPortAndDataType& DigitalPayloadProcessorPortAndDataType::create(const uci::type::DigitalPayloadProcessorPortAndDataType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::DigitalPayloadProcessorPortAndDataType> newAccessor{boost::make_unique<asb_uci::type::DigitalPayloadProcessorPortAndDataType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void DigitalPayloadProcessorPortAndDataType::destroy(uci::type::DigitalPayloadProcessorPortAndDataType& accessor) {
  delete dynamic_cast<asb_uci::type::DigitalPayloadProcessorPortAndDataType*>(&accessor);
}

} // namespace type

} // namespace uci

