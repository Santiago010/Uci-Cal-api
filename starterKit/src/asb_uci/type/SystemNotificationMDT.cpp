/** @file SystemNotificationMDT.cpp
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

#include "../../../include/asb_uci/type/SystemNotificationMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/AssociatedMessageType.h"
#include "../../../include/asb_uci/type/NotificationBaseType.h"
#include "../../../include/asb_uci/type/NotificationPerspectiveEnum.h"
#include "../../../include/asb_uci/type/SystemID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AssociatedMessageType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/NotificationPerspectiveEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemNotificationMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SystemNotificationMDT::SystemNotificationMDT()
  : systemSubjectID_Accessor{boost::make_unique<SystemID_Type>()},
    systemPerspective_Accessor{boost::make_unique<SystemPerspective>(1, 38)},
    associatedMessage_Accessor{boost::make_unique<AssociatedMessage>(0, SIZE_MAX)} {
}

SystemNotificationMDT::~SystemNotificationMDT() = default;

void SystemNotificationMDT::copy(const uci::type::SystemNotificationMDT& accessor) {
  copyImpl(accessor, false);
}

void SystemNotificationMDT::copyImpl(const uci::type::SystemNotificationMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    NotificationBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const SystemNotificationMDT&>(accessor);
    setSystemSubjectID(*(accessorImpl.systemSubjectID_Accessor));
    setSystemPerspective(*(accessorImpl.systemPerspective_Accessor));
    setAssociatedMessage(*(accessorImpl.associatedMessage_Accessor));
  }
}

void SystemNotificationMDT::reset() noexcept {
  NotificationBaseType::reset();
  systemSubjectID_Accessor->reset();
  systemPerspective_Accessor->reset();
  associatedMessage_Accessor->reset();
}

const uci::type::SystemID_Type& SystemNotificationMDT::getSystemSubjectID() const {
  return *systemSubjectID_Accessor;
}

uci::type::SystemID_Type& SystemNotificationMDT::getSystemSubjectID() {
  return *systemSubjectID_Accessor;
}

uci::type::SystemNotificationMDT& SystemNotificationMDT::setSystemSubjectID(const uci::type::SystemID_Type& accessor) {
  if (&accessor != systemSubjectID_Accessor.get()) {
    systemSubjectID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SystemNotificationMDT::SystemPerspective& SystemNotificationMDT::getSystemPerspective() const {
  return *systemPerspective_Accessor;
}

uci::type::SystemNotificationMDT::SystemPerspective& SystemNotificationMDT::getSystemPerspective() {
  return *systemPerspective_Accessor;
}

uci::type::SystemNotificationMDT& SystemNotificationMDT::setSystemPerspective(const uci::type::SystemNotificationMDT::SystemPerspective& accessor) {
  if (&accessor != systemPerspective_Accessor.get()) {
    systemPerspective_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SystemNotificationMDT::AssociatedMessage& SystemNotificationMDT::getAssociatedMessage() const {
  return *associatedMessage_Accessor;
}

uci::type::SystemNotificationMDT::AssociatedMessage& SystemNotificationMDT::getAssociatedMessage() {
  return *associatedMessage_Accessor;
}

uci::type::SystemNotificationMDT& SystemNotificationMDT::setAssociatedMessage(const uci::type::SystemNotificationMDT::AssociatedMessage& accessor) {
  if (&accessor != associatedMessage_Accessor.get()) {
    associatedMessage_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<SystemNotificationMDT> SystemNotificationMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::systemNotificationMDT : type};
  return (requestedType == uci::type::accessorType::systemNotificationMDT) ? boost::make_unique<SystemNotificationMDT>() : nullptr;
}

/**  */
namespace SystemNotificationMDT_Names {

constexpr const char* Extern_Type_Name{"SystemNotificationMDT"};
constexpr const char* SystemSubjectID_Name{"SystemSubjectID"};
constexpr const char* SystemPerspective_Name{"SystemPerspective"};
constexpr const char* AssociatedMessage_Name{"AssociatedMessage"};

} // namespace SystemNotificationMDT_Names

void SystemNotificationMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::SystemNotificationMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SystemNotificationMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SystemNotificationMDT_Names::SystemSubjectID_Name) {
      SystemID_Type::deserialize(valueType.second, accessor.getSystemSubjectID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SystemNotificationMDT_Names::SystemPerspective_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SystemNotificationMDT::SystemPerspective& boundedList = accessor.getSystemPerspective();
        const uci::type::SystemNotificationMDT::SystemPerspective::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + SystemNotificationMDT_Names::AssociatedMessage_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SystemNotificationMDT::AssociatedMessage& boundedList = accessor.getAssociatedMessage();
        const uci::type::SystemNotificationMDT::AssociatedMessage::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::AssociatedMessageType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
  NotificationBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string SystemNotificationMDT::serialize(const uci::type::SystemNotificationMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SystemNotificationMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SystemNotificationMDT_Names::Extern_Type_Name);
  }
  NotificationBaseType::serialize(accessor, node, "", false, false, false);
  SystemID_Type::serialize(accessor.getSystemSubjectID(), node, SystemNotificationMDT_Names::SystemSubjectID_Name);
  {
    const uci::type::SystemNotificationMDT::SystemPerspective& boundedList = accessor.getSystemPerspective();
    for (uci::type::SystemNotificationMDT::SystemPerspective::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      NotificationPerspectiveEnum::serialize(boundedList.at(i), node, SystemNotificationMDT_Names::SystemPerspective_Name, false);
    }
  }
  {
    const uci::type::SystemNotificationMDT::AssociatedMessage& boundedList = accessor.getAssociatedMessage();
    for (uci::type::SystemNotificationMDT::AssociatedMessage::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::AssociatedMessageType::serialize(boundedList.at(i), node, SystemNotificationMDT_Names::AssociatedMessage_Name);
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

uci::type::SystemNotificationMDT& SystemNotificationMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SystemNotificationMDT>().release());
}

uci::type::SystemNotificationMDT& SystemNotificationMDT::create(const uci::type::SystemNotificationMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SystemNotificationMDT> newAccessor{boost::make_unique<asb_uci::type::SystemNotificationMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SystemNotificationMDT::destroy(uci::type::SystemNotificationMDT& accessor) {
  delete dynamic_cast<asb_uci::type::SystemNotificationMDT*>(&accessor);
}

} // namespace type

} // namespace uci

