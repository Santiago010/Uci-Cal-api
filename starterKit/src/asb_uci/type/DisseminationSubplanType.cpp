/** @file DisseminationSubplanType.cpp
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

#include "../../../include/asb_uci/type/DisseminationSubplanType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ArchiveRequestType.h"
#include "../../../include/asb_uci/type/ProductDisseminationDestinationID_Type.h"
#include "../../../include/asb_uci/type/PushContentsEnum.h"
#include "../../../include/asb_uci/type/SourceCommandEXT.h"
#include "../../../include/asb_uci/util/DerivedTypesCopier.h"
#include "../../../include/asb_uci/util/DerivedTypesCreator.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/DerivedTypesSerializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ArchiveRequestType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DisseminationSubplanType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductDisseminationDestinationID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PushContentsEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SourceCommandEXT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

DisseminationSubplanType::DisseminationSubplanType()
  : pushContents_Accessor{boost::make_unique<PushContentsEnum>()},
    destinationID_Accessor{boost::make_unique<DestinationID>(0, SIZE_MAX)},
    extensionCommand_Accessor{boost::make_unique<ExtensionCommand>(0, SIZE_MAX)} {
}

DisseminationSubplanType::~DisseminationSubplanType() = default;

void DisseminationSubplanType::copy(const uci::type::DisseminationSubplanType& accessor) {
  copyImpl(accessor, false);
}

void DisseminationSubplanType::copyImpl(const uci::type::DisseminationSubplanType& accessor, const bool checkIfDerivation) {
  if (&accessor != this) {
    if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::disseminationSubplanType)) {
      const auto& accessorImpl = dynamic_cast<const DisseminationSubplanType&>(accessor);
      setPushContents(*(accessorImpl.pushContents_Accessor));
      setDestinationID(*(accessorImpl.destinationID_Accessor));
      if (accessorImpl.archiveCommand_Accessor) {
        setArchiveCommand(*(accessorImpl.archiveCommand_Accessor));
      } else {
        archiveCommand_Accessor.reset();
      }
      setExtensionCommand(*(accessorImpl.extensionCommand_Accessor));
    } else {
      asb_uci::util::DerivedTypesCopier::copy(accessor, *this);
    }
  }
}

void DisseminationSubplanType::reset() noexcept {
  pushContents_Accessor->reset();
  destinationID_Accessor->reset();
  archiveCommand_Accessor.reset();
  extensionCommand_Accessor->reset();
}

const uci::type::PushContentsEnum& DisseminationSubplanType::getPushContents() const {
  return *pushContents_Accessor;
}

uci::type::PushContentsEnum& DisseminationSubplanType::getPushContents() {
  return *pushContents_Accessor;
}

uci::type::DisseminationSubplanType& DisseminationSubplanType::setPushContents(const uci::type::PushContentsEnum& accessor) {
  if (&accessor != pushContents_Accessor.get()) {
    pushContents_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::DisseminationSubplanType& DisseminationSubplanType::setPushContents(uci::type::PushContentsEnum::EnumerationItem value) {
  pushContents_Accessor->setValue(value);
  return *this;
}


const uci::type::DisseminationSubplanType::DestinationID& DisseminationSubplanType::getDestinationID() const {
  return *destinationID_Accessor;
}

uci::type::DisseminationSubplanType::DestinationID& DisseminationSubplanType::getDestinationID() {
  return *destinationID_Accessor;
}

uci::type::DisseminationSubplanType& DisseminationSubplanType::setDestinationID(const uci::type::DisseminationSubplanType::DestinationID& accessor) {
  if (&accessor != destinationID_Accessor.get()) {
    destinationID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ArchiveRequestType& DisseminationSubplanType::getArchiveCommand_() const {
  if (archiveCommand_Accessor) {
    return *archiveCommand_Accessor;
  }
  throw uci::base::UCIException("Error in getArchiveCommand(): An attempt was made to get an optional field that was not enabled, call hasArchiveCommand() to determine if it is safe to call getArchiveCommand()");
}

const uci::type::ArchiveRequestType& DisseminationSubplanType::getArchiveCommand() const {
  return getArchiveCommand_();
}

uci::type::ArchiveRequestType& DisseminationSubplanType::getArchiveCommand() {
  return getArchiveCommand_();
}

uci::type::DisseminationSubplanType& DisseminationSubplanType::setArchiveCommand(const uci::type::ArchiveRequestType& accessor) {
  enableArchiveCommand();
  if (&accessor != archiveCommand_Accessor.get()) {
    archiveCommand_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool DisseminationSubplanType::hasArchiveCommand() const noexcept {
  return static_cast<bool>(archiveCommand_Accessor);
}

uci::type::ArchiveRequestType& DisseminationSubplanType::enableArchiveCommand(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::archiveRequestType : type};
  if ((!archiveCommand_Accessor) || (archiveCommand_Accessor->getAccessorType() != requestedType)) {
    archiveCommand_Accessor = ArchiveRequestType::create(requestedType);
    if (!archiveCommand_Accessor) {
      throw uci::base::UCIException("Error in enableArchiveCommand(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *archiveCommand_Accessor;
}

uci::type::DisseminationSubplanType& DisseminationSubplanType::clearArchiveCommand() noexcept {
  archiveCommand_Accessor.reset();
  return *this;
}

const uci::type::DisseminationSubplanType::ExtensionCommand& DisseminationSubplanType::getExtensionCommand() const {
  return *extensionCommand_Accessor;
}

uci::type::DisseminationSubplanType::ExtensionCommand& DisseminationSubplanType::getExtensionCommand() {
  return *extensionCommand_Accessor;
}

uci::type::DisseminationSubplanType& DisseminationSubplanType::setExtensionCommand(const uci::type::DisseminationSubplanType::ExtensionCommand& accessor) {
  if (&accessor != extensionCommand_Accessor.get()) {
    extensionCommand_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<DisseminationSubplanType> DisseminationSubplanType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::disseminationSubplanType : type};
  return std::unique_ptr<DisseminationSubplanType>(dynamic_cast<DisseminationSubplanType*>(asb_uci::util::DerivedTypesCreator::create(requestedType)));
}

/**  */
namespace DisseminationSubplanType_Names {

constexpr const char* Extern_Type_Name{"DisseminationSubplanType"};
constexpr const char* PushContents_Name{"PushContents"};
constexpr const char* DestinationID_Name{"DestinationID"};
constexpr const char* ArchiveCommand_Name{"ArchiveCommand"};
constexpr const char* ExtensionCommand_Name{"ExtensionCommand"};

} // namespace DisseminationSubplanType_Names

void DisseminationSubplanType::deserialize(const boost::property_tree::ptree& propTree, uci::type::DisseminationSubplanType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = DisseminationSubplanType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + DisseminationSubplanType_Names::PushContents_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getPushContents().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + DisseminationSubplanType_Names::DestinationID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::DisseminationSubplanType::DestinationID& boundedList = accessor.getDestinationID();
        const uci::type::DisseminationSubplanType::DestinationID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::ProductDisseminationDestinationID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + DisseminationSubplanType_Names::ArchiveCommand_Name) {
      ArchiveRequestType::deserialize(valueType.second, accessor.enableArchiveCommand(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DisseminationSubplanType_Names::ExtensionCommand_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::DisseminationSubplanType::ExtensionCommand& boundedList = accessor.getExtensionCommand();
        const uci::type::DisseminationSubplanType::ExtensionCommand::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::SourceCommandEXT::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string DisseminationSubplanType::serialize(const uci::type::DisseminationSubplanType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? DisseminationSubplanType_Names::Extern_Type_Name : nodeName)};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::disseminationSubplanType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      asb_uci::util::SerializationHelpers::addTypeAttribute(node, DisseminationSubplanType_Names::Extern_Type_Name);
    }
    PushContentsEnum::serialize(accessor.getPushContents(), node, DisseminationSubplanType_Names::PushContents_Name, false);
    {
      const uci::type::DisseminationSubplanType::DestinationID& boundedList = accessor.getDestinationID();
      for (uci::type::DisseminationSubplanType::DestinationID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::ProductDisseminationDestinationID_Type::serialize(boundedList.at(i), node, DisseminationSubplanType_Names::DestinationID_Name);
      }
    }
    if (accessor.hasArchiveCommand()) {
      ArchiveRequestType::serialize(accessor.getArchiveCommand(), node, DisseminationSubplanType_Names::ArchiveCommand_Name);
    }
    {
      const uci::type::DisseminationSubplanType::ExtensionCommand& boundedList = accessor.getExtensionCommand();
      for (uci::type::DisseminationSubplanType::ExtensionCommand::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::SourceCommandEXT::serialize(boundedList.at(i), node, DisseminationSubplanType_Names::ExtensionCommand_Name);
      }
    }
    if (createNode) {
      propTree.add_child(generatedNodeName, node);
    }
  } else {
    asb_uci::util::DerivedTypesSerializer::serialize(accessor, propTree, nodeName, createNode);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace asb_uci

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

uci::type::DisseminationSubplanType& DisseminationSubplanType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::DisseminationSubplanType>().release());
}

uci::type::DisseminationSubplanType& DisseminationSubplanType::create(const uci::type::DisseminationSubplanType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::DisseminationSubplanType> newAccessor{boost::make_unique<asb_uci::type::DisseminationSubplanType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void DisseminationSubplanType::destroy(uci::type::DisseminationSubplanType& accessor) {
  delete dynamic_cast<asb_uci::type::DisseminationSubplanType*>(&accessor);
}

} // namespace type

} // namespace uci

