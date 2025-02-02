/** @file SpecificBDS_RegistersType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:15 PM
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

#include "../../../include/asb_uci/type/SpecificBDS_RegistersType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SpecificBDS_RegistersType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SpecificBDS_RegistersType::SpecificBDS_RegistersType()
  : aA_Code_Accessor{boost::make_unique<AA_Code>(0, SIZE_MAX)},
    bDS_Address_Accessor{boost::make_unique<BDS_Address>(1, 6)} {
}

SpecificBDS_RegistersType::~SpecificBDS_RegistersType() = default;

void SpecificBDS_RegistersType::copy(const uci::type::SpecificBDS_RegistersType& accessor) {
  copyImpl(accessor, false);
}

void SpecificBDS_RegistersType::copyImpl(const uci::type::SpecificBDS_RegistersType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const SpecificBDS_RegistersType&>(accessor);
    setAA_Code(*(accessorImpl.aA_Code_Accessor));
    setBDS_Address(*(accessorImpl.bDS_Address_Accessor));
  }
}

void SpecificBDS_RegistersType::reset() noexcept {
  aA_Code_Accessor->reset();
  bDS_Address_Accessor->reset();
}

const uci::type::SpecificBDS_RegistersType::AA_Code& SpecificBDS_RegistersType::getAA_Code() const {
  return *aA_Code_Accessor;
}

uci::type::SpecificBDS_RegistersType::AA_Code& SpecificBDS_RegistersType::getAA_Code() {
  return *aA_Code_Accessor;
}

uci::type::SpecificBDS_RegistersType& SpecificBDS_RegistersType::setAA_Code(const uci::type::SpecificBDS_RegistersType::AA_Code& accessor) {
  if (&accessor != aA_Code_Accessor.get()) {
    aA_Code_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SpecificBDS_RegistersType::BDS_Address& SpecificBDS_RegistersType::getBDS_Address() const {
  return *bDS_Address_Accessor;
}

uci::type::SpecificBDS_RegistersType::BDS_Address& SpecificBDS_RegistersType::getBDS_Address() {
  return *bDS_Address_Accessor;
}

uci::type::SpecificBDS_RegistersType& SpecificBDS_RegistersType::setBDS_Address(const uci::type::SpecificBDS_RegistersType::BDS_Address& accessor) {
  if (&accessor != bDS_Address_Accessor.get()) {
    bDS_Address_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<SpecificBDS_RegistersType> SpecificBDS_RegistersType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::specificBDS_RegistersType : type};
  return (requestedType == uci::type::accessorType::specificBDS_RegistersType) ? boost::make_unique<SpecificBDS_RegistersType>() : nullptr;
}

/**  */
namespace SpecificBDS_RegistersType_Names {

constexpr const char* Extern_Type_Name{"SpecificBDS_RegistersType"};
constexpr const char* AA_Code_Name{"AA_Code"};
constexpr const char* BDS_Address_Name{"BDS_Address"};

} // namespace SpecificBDS_RegistersType_Names

void SpecificBDS_RegistersType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SpecificBDS_RegistersType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SpecificBDS_RegistersType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SpecificBDS_RegistersType_Names::AA_Code_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SpecificBDS_RegistersType::AA_Code& boundedList = accessor.getAA_Code();
        const uci::type::SpecificBDS_RegistersType::AA_Code::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::util::SerializationHelpers::deserializeHexBinary(*value, boundedList.at(boundedListSize));
      }
    } else if (valueType.first == nsPrefix + SpecificBDS_RegistersType_Names::BDS_Address_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SpecificBDS_RegistersType::BDS_Address& boundedList = accessor.getBDS_Address();
        const uci::type::SpecificBDS_RegistersType::BDS_Address::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::util::SerializationHelpers::deserializeHexBinary(*value, boundedList.at(boundedListSize));
      }
    }
  }
}

std::string SpecificBDS_RegistersType::serialize(const uci::type::SpecificBDS_RegistersType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SpecificBDS_RegistersType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SpecificBDS_RegistersType_Names::Extern_Type_Name);
  }
  {
    const uci::type::SpecificBDS_RegistersType::AA_Code& boundedList = accessor.getAA_Code();
    for (uci::type::SpecificBDS_RegistersType::AA_Code::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::util::SerializationHelpers::serializeHexBinary(boundedList.at(i), node, SpecificBDS_RegistersType_Names::AA_Code_Name);
    }
  }
  {
    const uci::type::SpecificBDS_RegistersType::BDS_Address& boundedList = accessor.getBDS_Address();
    for (uci::type::SpecificBDS_RegistersType::BDS_Address::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::util::SerializationHelpers::serializeHexBinary(boundedList.at(i), node, SpecificBDS_RegistersType_Names::BDS_Address_Name);
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

uci::type::SpecificBDS_RegistersType& SpecificBDS_RegistersType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SpecificBDS_RegistersType>().release());
}

uci::type::SpecificBDS_RegistersType& SpecificBDS_RegistersType::create(const uci::type::SpecificBDS_RegistersType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SpecificBDS_RegistersType> newAccessor{boost::make_unique<asb_uci::type::SpecificBDS_RegistersType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SpecificBDS_RegistersType::destroy(uci::type::SpecificBDS_RegistersType& accessor) {
  delete dynamic_cast<asb_uci::type::SpecificBDS_RegistersType*>(&accessor);
}

} // namespace type

} // namespace uci

