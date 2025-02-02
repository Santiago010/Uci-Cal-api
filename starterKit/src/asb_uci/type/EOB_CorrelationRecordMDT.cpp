/** @file EOB_CorrelationRecordMDT.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:13 PM
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

#include "../../../include/asb_uci/type/EOB_CorrelationRecordMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/DataRecordBaseType.h"
#include "../../../include/asb_uci/type/EOB_CorrelationRecordType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EOB_CorrelationRecordMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EOB_CorrelationRecordType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

EOB_CorrelationRecordMDT::EOB_CorrelationRecordMDT()
  : correlationData_Accessor{boost::make_unique<CorrelationData>(1, SIZE_MAX)} {
}

EOB_CorrelationRecordMDT::~EOB_CorrelationRecordMDT() = default;

void EOB_CorrelationRecordMDT::copy(const uci::type::EOB_CorrelationRecordMDT& accessor) {
  copyImpl(accessor, false);
}

void EOB_CorrelationRecordMDT::copyImpl(const uci::type::EOB_CorrelationRecordMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    DataRecordBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const EOB_CorrelationRecordMDT&>(accessor);
    setCorrelationData(*(accessorImpl.correlationData_Accessor));
  }
}

void EOB_CorrelationRecordMDT::reset() noexcept {
  DataRecordBaseType::reset();
  correlationData_Accessor->reset();
}

const uci::type::EOB_CorrelationRecordMDT::CorrelationData& EOB_CorrelationRecordMDT::getCorrelationData() const {
  return *correlationData_Accessor;
}

uci::type::EOB_CorrelationRecordMDT::CorrelationData& EOB_CorrelationRecordMDT::getCorrelationData() {
  return *correlationData_Accessor;
}

uci::type::EOB_CorrelationRecordMDT& EOB_CorrelationRecordMDT::setCorrelationData(const uci::type::EOB_CorrelationRecordMDT::CorrelationData& accessor) {
  if (&accessor != correlationData_Accessor.get()) {
    correlationData_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<EOB_CorrelationRecordMDT> EOB_CorrelationRecordMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::eOB_CorrelationRecordMDT : type};
  return (requestedType == uci::type::accessorType::eOB_CorrelationRecordMDT) ? boost::make_unique<EOB_CorrelationRecordMDT>() : nullptr;
}

/**  */
namespace EOB_CorrelationRecordMDT_Names {

constexpr const char* Extern_Type_Name{"EOB_CorrelationRecordMDT"};
constexpr const char* CorrelationData_Name{"CorrelationData"};

} // namespace EOB_CorrelationRecordMDT_Names

void EOB_CorrelationRecordMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::EOB_CorrelationRecordMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EOB_CorrelationRecordMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + EOB_CorrelationRecordMDT_Names::CorrelationData_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::EOB_CorrelationRecordMDT::CorrelationData& boundedList = accessor.getCorrelationData();
        const uci::type::EOB_CorrelationRecordMDT::CorrelationData::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::EOB_CorrelationRecordType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  DataRecordBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string EOB_CorrelationRecordMDT::serialize(const uci::type::EOB_CorrelationRecordMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? EOB_CorrelationRecordMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, EOB_CorrelationRecordMDT_Names::Extern_Type_Name);
  }
  DataRecordBaseType::serialize(accessor, node, "", false, false, false);
  {
    const uci::type::EOB_CorrelationRecordMDT::CorrelationData& boundedList = accessor.getCorrelationData();
    for (uci::type::EOB_CorrelationRecordMDT::CorrelationData::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::EOB_CorrelationRecordType::serialize(boundedList.at(i), node, EOB_CorrelationRecordMDT_Names::CorrelationData_Name);
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

uci::type::EOB_CorrelationRecordMDT& EOB_CorrelationRecordMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::EOB_CorrelationRecordMDT>().release());
}

uci::type::EOB_CorrelationRecordMDT& EOB_CorrelationRecordMDT::create(const uci::type::EOB_CorrelationRecordMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::EOB_CorrelationRecordMDT> newAccessor{boost::make_unique<asb_uci::type::EOB_CorrelationRecordMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void EOB_CorrelationRecordMDT::destroy(uci::type::EOB_CorrelationRecordMDT& accessor) {
  delete dynamic_cast<asb_uci::type::EOB_CorrelationRecordMDT*>(&accessor);
}

} // namespace type

} // namespace uci

