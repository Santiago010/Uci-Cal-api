/** @file AntennaType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:11 PM
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

#include "../../../include/asb_uci/type/AntennaType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/AntennaID_Type.h"
#include "../../../include/asb_uci/type/AntennaTypeEnum.h"
#include "../../../include/asb_uci/type/SupportedModeType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AntennaID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AntennaType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AntennaTypeEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SupportedModeType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

AntennaType::AntennaType()
  : antennaID_Accessor{boost::make_unique<AntennaID_Type>()},
    antennaType_Accessor{boost::make_unique<AntennaTypeEnum>()},
    supportedMode_Accessor{boost::make_unique<SupportedMode>(1, SIZE_MAX)} {
}

AntennaType::~AntennaType() = default;

void AntennaType::copy(const uci::type::AntennaType& accessor) {
  copyImpl(accessor, false);
}

void AntennaType::copyImpl(const uci::type::AntennaType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const AntennaType&>(accessor);
    setAntennaID(*(accessorImpl.antennaID_Accessor));
    setAntennaType(*(accessorImpl.antennaType_Accessor));
    setSupportedMode(*(accessorImpl.supportedMode_Accessor));
    setConcurrentUserLimit(accessorImpl.concurrentUserLimit_Accessor);
  }
}

void AntennaType::reset() noexcept {
  antennaID_Accessor->reset();
  antennaType_Accessor->reset();
  supportedMode_Accessor->reset();
  concurrentUserLimit_Accessor = 0;
}

const uci::type::AntennaID_Type& AntennaType::getAntennaID() const {
  return *antennaID_Accessor;
}

uci::type::AntennaID_Type& AntennaType::getAntennaID() {
  return *antennaID_Accessor;
}

uci::type::AntennaType& AntennaType::setAntennaID(const uci::type::AntennaID_Type& accessor) {
  if (&accessor != antennaID_Accessor.get()) {
    antennaID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::AntennaTypeEnum& AntennaType::getAntennaType() const {
  return *antennaType_Accessor;
}

uci::type::AntennaTypeEnum& AntennaType::getAntennaType() {
  return *antennaType_Accessor;
}

uci::type::AntennaType& AntennaType::setAntennaType(const uci::type::AntennaTypeEnum& accessor) {
  if (&accessor != antennaType_Accessor.get()) {
    antennaType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::AntennaType& AntennaType::setAntennaType(uci::type::AntennaTypeEnum::EnumerationItem value) {
  antennaType_Accessor->setValue(value);
  return *this;
}


const uci::type::AntennaType::SupportedMode& AntennaType::getSupportedMode() const {
  return *supportedMode_Accessor;
}

uci::type::AntennaType::SupportedMode& AntennaType::getSupportedMode() {
  return *supportedMode_Accessor;
}

uci::type::AntennaType& AntennaType::setSupportedMode(const uci::type::AntennaType::SupportedMode& accessor) {
  if (&accessor != supportedMode_Accessor.get()) {
    supportedMode_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

xs::UnsignedInt AntennaType::getConcurrentUserLimit() const {
  return concurrentUserLimit_Accessor;
}

uci::type::AntennaType& AntennaType::setConcurrentUserLimit(xs::UnsignedInt value) {
  concurrentUserLimit_Accessor = value;
  return *this;
}


std::unique_ptr<AntennaType> AntennaType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::antennaType : type};
  return (requestedType == uci::type::accessorType::antennaType) ? boost::make_unique<AntennaType>() : nullptr;
}

/**  */
namespace AntennaType_Names {

constexpr const char* Extern_Type_Name{"AntennaType"};
constexpr const char* AntennaID_Name{"AntennaID"};
constexpr const char* AntennaType_Name{"AntennaType"};
constexpr const char* SupportedMode_Name{"SupportedMode"};
constexpr const char* ConcurrentUserLimit_Name{"ConcurrentUserLimit"};

} // namespace AntennaType_Names

void AntennaType::deserialize(const boost::property_tree::ptree& propTree, uci::type::AntennaType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = AntennaType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + AntennaType_Names::AntennaID_Name) {
      AntennaID_Type::deserialize(valueType.second, accessor.getAntennaID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + AntennaType_Names::AntennaType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getAntennaType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + AntennaType_Names::SupportedMode_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::AntennaType::SupportedMode& boundedList = accessor.getSupportedMode();
        const uci::type::AntennaType::SupportedMode::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::SupportedModeType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + AntennaType_Names::ConcurrentUserLimit_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setConcurrentUserLimit(asb_uci::util::SerializationHelpers::deserializeUnsignedInt(*value));
      }
    }
  }
}

std::string AntennaType::serialize(const uci::type::AntennaType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? AntennaType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, AntennaType_Names::Extern_Type_Name);
  }
  AntennaID_Type::serialize(accessor.getAntennaID(), node, AntennaType_Names::AntennaID_Name);
  AntennaTypeEnum::serialize(accessor.getAntennaType(), node, AntennaType_Names::AntennaType_Name, false);
  {
    const uci::type::AntennaType::SupportedMode& boundedList = accessor.getSupportedMode();
    for (uci::type::AntennaType::SupportedMode::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::SupportedModeType::serialize(boundedList.at(i), node, AntennaType_Names::SupportedMode_Name);
    }
  }
  asb_uci::util::SerializationHelpers::serializeUnsignedInt(accessor.getConcurrentUserLimit(), node, AntennaType_Names::ConcurrentUserLimit_Name);
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

uci::type::AntennaType& AntennaType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::AntennaType>().release());
}

uci::type::AntennaType& AntennaType::create(const uci::type::AntennaType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::AntennaType> newAccessor{boost::make_unique<asb_uci::type::AntennaType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void AntennaType::destroy(uci::type::AntennaType& accessor) {
  delete dynamic_cast<asb_uci::type::AntennaType*>(&accessor);
}

} // namespace type

} // namespace uci

