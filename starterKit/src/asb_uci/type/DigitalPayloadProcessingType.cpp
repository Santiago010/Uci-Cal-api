/** @file DigitalPayloadProcessingType.cpp
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

#include "../../../include/asb_uci/type/DigitalPayloadProcessingType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ComponentID_Type.h"
#include "../../../include/asb_uci/type/DigitalPayloadProcessorPortAndDataType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ComponentID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DigitalPayloadProcessingType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DigitalPayloadProcessorPortAndDataType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

DigitalPayloadProcessingType::DigitalPayloadProcessingType()
  : digitalPayloadProcessorID_Accessor{boost::make_unique<ComponentID_Type>()},
    digitalPayloadProcessorPortAndData_Accessor{boost::make_unique<DigitalPayloadProcessorPortAndData>(1, SIZE_MAX)} {
}

DigitalPayloadProcessingType::~DigitalPayloadProcessingType() = default;

void DigitalPayloadProcessingType::copy(const uci::type::DigitalPayloadProcessingType& accessor) {
  copyImpl(accessor, false);
}

void DigitalPayloadProcessingType::copyImpl(const uci::type::DigitalPayloadProcessingType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const DigitalPayloadProcessingType&>(accessor);
    setDigitalPayloadProcessorID(*(accessorImpl.digitalPayloadProcessorID_Accessor));
    setDigitalPayloadProcessorPortAndData(*(accessorImpl.digitalPayloadProcessorPortAndData_Accessor));
  }
}

void DigitalPayloadProcessingType::reset() noexcept {
  digitalPayloadProcessorID_Accessor->reset();
  digitalPayloadProcessorPortAndData_Accessor->reset();
}

const uci::type::ComponentID_Type& DigitalPayloadProcessingType::getDigitalPayloadProcessorID() const {
  return *digitalPayloadProcessorID_Accessor;
}

uci::type::ComponentID_Type& DigitalPayloadProcessingType::getDigitalPayloadProcessorID() {
  return *digitalPayloadProcessorID_Accessor;
}

uci::type::DigitalPayloadProcessingType& DigitalPayloadProcessingType::setDigitalPayloadProcessorID(const uci::type::ComponentID_Type& accessor) {
  if (&accessor != digitalPayloadProcessorID_Accessor.get()) {
    digitalPayloadProcessorID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::DigitalPayloadProcessingType::DigitalPayloadProcessorPortAndData& DigitalPayloadProcessingType::getDigitalPayloadProcessorPortAndData() const {
  return *digitalPayloadProcessorPortAndData_Accessor;
}

uci::type::DigitalPayloadProcessingType::DigitalPayloadProcessorPortAndData& DigitalPayloadProcessingType::getDigitalPayloadProcessorPortAndData() {
  return *digitalPayloadProcessorPortAndData_Accessor;
}

uci::type::DigitalPayloadProcessingType& DigitalPayloadProcessingType::setDigitalPayloadProcessorPortAndData(const uci::type::DigitalPayloadProcessingType::DigitalPayloadProcessorPortAndData& accessor) {
  if (&accessor != digitalPayloadProcessorPortAndData_Accessor.get()) {
    digitalPayloadProcessorPortAndData_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<DigitalPayloadProcessingType> DigitalPayloadProcessingType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::digitalPayloadProcessingType : type};
  return (requestedType == uci::type::accessorType::digitalPayloadProcessingType) ? boost::make_unique<DigitalPayloadProcessingType>() : nullptr;
}

/**  */
namespace DigitalPayloadProcessingType_Names {

constexpr const char* Extern_Type_Name{"DigitalPayloadProcessingType"};
constexpr const char* DigitalPayloadProcessorID_Name{"DigitalPayloadProcessorID"};
constexpr const char* DigitalPayloadProcessorPortAndData_Name{"DigitalPayloadProcessorPortAndData"};

} // namespace DigitalPayloadProcessingType_Names

void DigitalPayloadProcessingType::deserialize(const boost::property_tree::ptree& propTree, uci::type::DigitalPayloadProcessingType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = DigitalPayloadProcessingType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + DigitalPayloadProcessingType_Names::DigitalPayloadProcessorID_Name) {
      ComponentID_Type::deserialize(valueType.second, accessor.getDigitalPayloadProcessorID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DigitalPayloadProcessingType_Names::DigitalPayloadProcessorPortAndData_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::DigitalPayloadProcessingType::DigitalPayloadProcessorPortAndData& boundedList = accessor.getDigitalPayloadProcessorPortAndData();
        const uci::type::DigitalPayloadProcessingType::DigitalPayloadProcessorPortAndData::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::DigitalPayloadProcessorPortAndDataType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string DigitalPayloadProcessingType::serialize(const uci::type::DigitalPayloadProcessingType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? DigitalPayloadProcessingType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, DigitalPayloadProcessingType_Names::Extern_Type_Name);
  }
  ComponentID_Type::serialize(accessor.getDigitalPayloadProcessorID(), node, DigitalPayloadProcessingType_Names::DigitalPayloadProcessorID_Name);
  {
    const uci::type::DigitalPayloadProcessingType::DigitalPayloadProcessorPortAndData& boundedList = accessor.getDigitalPayloadProcessorPortAndData();
    for (uci::type::DigitalPayloadProcessingType::DigitalPayloadProcessorPortAndData::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::DigitalPayloadProcessorPortAndDataType::serialize(boundedList.at(i), node, DigitalPayloadProcessingType_Names::DigitalPayloadProcessorPortAndData_Name);
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

uci::type::DigitalPayloadProcessingType& DigitalPayloadProcessingType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::DigitalPayloadProcessingType>().release());
}

uci::type::DigitalPayloadProcessingType& DigitalPayloadProcessingType::create(const uci::type::DigitalPayloadProcessingType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::DigitalPayloadProcessingType> newAccessor{boost::make_unique<asb_uci::type::DigitalPayloadProcessingType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void DigitalPayloadProcessingType::destroy(uci::type::DigitalPayloadProcessingType& accessor) {
  delete dynamic_cast<asb_uci::type::DigitalPayloadProcessingType*>(&accessor);
}

} // namespace type

} // namespace uci

