/** @file OpNotificationMDT.cpp
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

#include "../../../include/asb_uci/type/OpNotificationMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/AssociatedMessageType.h"
#include "../../../include/asb_uci/type/NotificationBaseType.h"
#include "../../../include/asb_uci/type/OpID_ChoiceType.h"
#include "../../../include/asb_uci/type/OpInteractingAssetType.h"
#include "../../../include/asb_uci/type/OpNotificationEXT.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AssociatedMessageType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OpID_ChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OpInteractingAssetType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OpNotificationEXT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OpNotificationMDT.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OpNotificationMDT::OpNotificationMDT()
  : opSubject_Accessor{boost::make_unique<OpID_ChoiceType>()},
    asset_Accessor{boost::make_unique<Asset>(0, SIZE_MAX)},
    associatedMessage_Accessor{boost::make_unique<AssociatedMessage>(0, SIZE_MAX)} {
}

OpNotificationMDT::~OpNotificationMDT() = default;

void OpNotificationMDT::copy(const uci::type::OpNotificationMDT& accessor) {
  copyImpl(accessor, false);
}

void OpNotificationMDT::copyImpl(const uci::type::OpNotificationMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    NotificationBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const OpNotificationMDT&>(accessor);
    setOpSubject(*(accessorImpl.opSubject_Accessor));
    setScheduleActive(accessorImpl.scheduleActive_Accessor);
    setAsset(*(accessorImpl.asset_Accessor));
    setAssociatedMessage(*(accessorImpl.associatedMessage_Accessor));
    if (accessorImpl.extension_Accessor) {
      setExtension(*(accessorImpl.extension_Accessor));
    } else {
      extension_Accessor.reset();
    }
  }
}

void OpNotificationMDT::reset() noexcept {
  NotificationBaseType::reset();
  opSubject_Accessor->reset();
  scheduleActive_Accessor = false;
  asset_Accessor->reset();
  associatedMessage_Accessor->reset();
  extension_Accessor.reset();
}

const uci::type::OpID_ChoiceType& OpNotificationMDT::getOpSubject() const {
  return *opSubject_Accessor;
}

uci::type::OpID_ChoiceType& OpNotificationMDT::getOpSubject() {
  return *opSubject_Accessor;
}

uci::type::OpNotificationMDT& OpNotificationMDT::setOpSubject(const uci::type::OpID_ChoiceType& accessor) {
  if (&accessor != opSubject_Accessor.get()) {
    opSubject_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

xs::Boolean OpNotificationMDT::getScheduleActive() const {
  return scheduleActive_Accessor;
}

uci::type::OpNotificationMDT& OpNotificationMDT::setScheduleActive(xs::Boolean value) {
  scheduleActive_Accessor = value;
  return *this;
}


const uci::type::OpNotificationMDT::Asset& OpNotificationMDT::getAsset() const {
  return *asset_Accessor;
}

uci::type::OpNotificationMDT::Asset& OpNotificationMDT::getAsset() {
  return *asset_Accessor;
}

uci::type::OpNotificationMDT& OpNotificationMDT::setAsset(const uci::type::OpNotificationMDT::Asset& accessor) {
  if (&accessor != asset_Accessor.get()) {
    asset_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::OpNotificationMDT::AssociatedMessage& OpNotificationMDT::getAssociatedMessage() const {
  return *associatedMessage_Accessor;
}

uci::type::OpNotificationMDT::AssociatedMessage& OpNotificationMDT::getAssociatedMessage() {
  return *associatedMessage_Accessor;
}

uci::type::OpNotificationMDT& OpNotificationMDT::setAssociatedMessage(const uci::type::OpNotificationMDT::AssociatedMessage& accessor) {
  if (&accessor != associatedMessage_Accessor.get()) {
    associatedMessage_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::OpNotificationEXT& OpNotificationMDT::getExtension_() const {
  if (extension_Accessor) {
    return *extension_Accessor;
  }
  throw uci::base::UCIException("Error in getExtension(): An attempt was made to get an optional field that was not enabled, call hasExtension() to determine if it is safe to call getExtension()");
}

const uci::type::OpNotificationEXT& OpNotificationMDT::getExtension() const {
  return getExtension_();
}

uci::type::OpNotificationEXT& OpNotificationMDT::getExtension() {
  return getExtension_();
}

uci::type::OpNotificationMDT& OpNotificationMDT::setExtension(const uci::type::OpNotificationEXT& accessor) {
  enableExtension();
  if (&accessor != extension_Accessor.get()) {
    extension_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OpNotificationMDT::hasExtension() const noexcept {
  return static_cast<bool>(extension_Accessor);
}

uci::type::OpNotificationEXT& OpNotificationMDT::enableExtension(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::opNotificationEXT : type};
  if ((!extension_Accessor) || (extension_Accessor->getAccessorType() != requestedType)) {
    extension_Accessor = OpNotificationEXT::create(requestedType);
    if (!extension_Accessor) {
      throw uci::base::UCIException("Error in enableExtension(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *extension_Accessor;
}

uci::type::OpNotificationMDT& OpNotificationMDT::clearExtension() noexcept {
  extension_Accessor.reset();
  return *this;
}

std::unique_ptr<OpNotificationMDT> OpNotificationMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::opNotificationMDT : type};
  return (requestedType == uci::type::accessorType::opNotificationMDT) ? boost::make_unique<OpNotificationMDT>() : nullptr;
}

/**  */
namespace OpNotificationMDT_Names {

constexpr const char* Extern_Type_Name{"OpNotificationMDT"};
constexpr const char* OpSubject_Name{"OpSubject"};
constexpr const char* ScheduleActive_Name{"ScheduleActive"};
constexpr const char* Asset_Name{"Asset"};
constexpr const char* AssociatedMessage_Name{"AssociatedMessage"};
constexpr const char* Extension_Name{"Extension"};

} // namespace OpNotificationMDT_Names

void OpNotificationMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::OpNotificationMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OpNotificationMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OpNotificationMDT_Names::OpSubject_Name) {
      OpID_ChoiceType::deserialize(valueType.second, accessor.getOpSubject(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OpNotificationMDT_Names::ScheduleActive_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setScheduleActive(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + OpNotificationMDT_Names::Asset_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::OpNotificationMDT::Asset& boundedList = accessor.getAsset();
        const uci::type::OpNotificationMDT::Asset::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::OpInteractingAssetType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + OpNotificationMDT_Names::AssociatedMessage_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::OpNotificationMDT::AssociatedMessage& boundedList = accessor.getAssociatedMessage();
        const uci::type::OpNotificationMDT::AssociatedMessage::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::AssociatedMessageType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + OpNotificationMDT_Names::Extension_Name) {
      OpNotificationEXT::deserialize(valueType.second, accessor.enableExtension(), nodeName, nsPrefix);
    }
  }
  NotificationBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string OpNotificationMDT::serialize(const uci::type::OpNotificationMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? OpNotificationMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, OpNotificationMDT_Names::Extern_Type_Name);
  }
  NotificationBaseType::serialize(accessor, node, "", false, false, false);
  OpID_ChoiceType::serialize(accessor.getOpSubject(), node, OpNotificationMDT_Names::OpSubject_Name);
  asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getScheduleActive(), node, OpNotificationMDT_Names::ScheduleActive_Name);
  {
    const uci::type::OpNotificationMDT::Asset& boundedList = accessor.getAsset();
    for (uci::type::OpNotificationMDT::Asset::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::OpInteractingAssetType::serialize(boundedList.at(i), node, OpNotificationMDT_Names::Asset_Name);
    }
  }
  {
    const uci::type::OpNotificationMDT::AssociatedMessage& boundedList = accessor.getAssociatedMessage();
    for (uci::type::OpNotificationMDT::AssociatedMessage::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::AssociatedMessageType::serialize(boundedList.at(i), node, OpNotificationMDT_Names::AssociatedMessage_Name);
    }
  }
  if (accessor.hasExtension()) {
    OpNotificationEXT::serialize(accessor.getExtension(), node, OpNotificationMDT_Names::Extension_Name);
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

uci::type::OpNotificationMDT& OpNotificationMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OpNotificationMDT>().release());
}

uci::type::OpNotificationMDT& OpNotificationMDT::create(const uci::type::OpNotificationMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OpNotificationMDT> newAccessor{boost::make_unique<asb_uci::type::OpNotificationMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OpNotificationMDT::destroy(uci::type::OpNotificationMDT& accessor) {
  delete dynamic_cast<asb_uci::type::OpNotificationMDT*>(&accessor);
}

} // namespace type

} // namespace uci

