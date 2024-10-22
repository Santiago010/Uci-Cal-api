/** @file UnachievableRequirementType.cpp
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

#include "../../../include/asb_uci/type/UnachievableRequirementType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/RequirementInstanceID_ChoiceType.h"
#include "../../../include/asb_uci/type/UnallocatedReasonType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementInstanceID_ChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/UnachievableRequirementType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/UnallocatedReasonType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

UnachievableRequirementType::UnachievableRequirementType()
  : requirementID_Accessor{boost::make_unique<RequirementInstanceID_ChoiceType>()},
    unallocatedReason_Accessor{boost::make_unique<UnallocatedReason>(0, SIZE_MAX)} {
}

UnachievableRequirementType::~UnachievableRequirementType() = default;

void UnachievableRequirementType::copy(const uci::type::UnachievableRequirementType& accessor) {
  copyImpl(accessor, false);
}

void UnachievableRequirementType::copyImpl(const uci::type::UnachievableRequirementType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const UnachievableRequirementType&>(accessor);
    setRequirementID(*(accessorImpl.requirementID_Accessor));
    setUnallocatedReason(*(accessorImpl.unallocatedReason_Accessor));
  }
}

void UnachievableRequirementType::reset() noexcept {
  requirementID_Accessor->reset();
  unallocatedReason_Accessor->reset();
}

const uci::type::RequirementInstanceID_ChoiceType& UnachievableRequirementType::getRequirementID() const {
  return *requirementID_Accessor;
}

uci::type::RequirementInstanceID_ChoiceType& UnachievableRequirementType::getRequirementID() {
  return *requirementID_Accessor;
}

uci::type::UnachievableRequirementType& UnachievableRequirementType::setRequirementID(const uci::type::RequirementInstanceID_ChoiceType& accessor) {
  if (&accessor != requirementID_Accessor.get()) {
    requirementID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::UnachievableRequirementType::UnallocatedReason& UnachievableRequirementType::getUnallocatedReason() const {
  return *unallocatedReason_Accessor;
}

uci::type::UnachievableRequirementType::UnallocatedReason& UnachievableRequirementType::getUnallocatedReason() {
  return *unallocatedReason_Accessor;
}

uci::type::UnachievableRequirementType& UnachievableRequirementType::setUnallocatedReason(const uci::type::UnachievableRequirementType::UnallocatedReason& accessor) {
  if (&accessor != unallocatedReason_Accessor.get()) {
    unallocatedReason_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<UnachievableRequirementType> UnachievableRequirementType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::unachievableRequirementType : type};
  return (requestedType == uci::type::accessorType::unachievableRequirementType) ? boost::make_unique<UnachievableRequirementType>() : nullptr;
}

/**  */
namespace UnachievableRequirementType_Names {

constexpr const char* Extern_Type_Name{"UnachievableRequirementType"};
constexpr const char* RequirementID_Name{"RequirementID"};
constexpr const char* UnallocatedReason_Name{"UnallocatedReason"};

} // namespace UnachievableRequirementType_Names

void UnachievableRequirementType::deserialize(const boost::property_tree::ptree& propTree, uci::type::UnachievableRequirementType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = UnachievableRequirementType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + UnachievableRequirementType_Names::RequirementID_Name) {
      RequirementInstanceID_ChoiceType::deserialize(valueType.second, accessor.getRequirementID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + UnachievableRequirementType_Names::UnallocatedReason_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::UnachievableRequirementType::UnallocatedReason& boundedList = accessor.getUnallocatedReason();
        const uci::type::UnachievableRequirementType::UnallocatedReason::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::UnallocatedReasonType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string UnachievableRequirementType::serialize(const uci::type::UnachievableRequirementType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? UnachievableRequirementType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, UnachievableRequirementType_Names::Extern_Type_Name);
  }
  RequirementInstanceID_ChoiceType::serialize(accessor.getRequirementID(), node, UnachievableRequirementType_Names::RequirementID_Name);
  {
    const uci::type::UnachievableRequirementType::UnallocatedReason& boundedList = accessor.getUnallocatedReason();
    for (uci::type::UnachievableRequirementType::UnallocatedReason::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::UnallocatedReasonType::serialize(boundedList.at(i), node, UnachievableRequirementType_Names::UnallocatedReason_Name);
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

uci::type::UnachievableRequirementType& UnachievableRequirementType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::UnachievableRequirementType>().release());
}

uci::type::UnachievableRequirementType& UnachievableRequirementType::create(const uci::type::UnachievableRequirementType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::UnachievableRequirementType> newAccessor{boost::make_unique<asb_uci::type::UnachievableRequirementType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void UnachievableRequirementType::destroy(uci::type::UnachievableRequirementType& accessor) {
  delete dynamic_cast<asb_uci::type::UnachievableRequirementType*>(&accessor);
}

} // namespace type

} // namespace uci

