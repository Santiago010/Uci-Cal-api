/** @file PO_ComponentSettingsFocalPlaneArrayCollectionType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:14 PM
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

#include "../../../include/asb_uci/type/PO_ComponentSettingsFocalPlaneArrayCollectionType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ComponentControlsB_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ComponentControlsB_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DurationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentSettingsFocalPlaneArrayCollectionType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PO_ComponentSettingsFocalPlaneArrayCollectionType::PO_ComponentSettingsFocalPlaneArrayCollectionType() = default;

PO_ComponentSettingsFocalPlaneArrayCollectionType::~PO_ComponentSettingsFocalPlaneArrayCollectionType() = default;

void PO_ComponentSettingsFocalPlaneArrayCollectionType::copy(const uci::type::PO_ComponentSettingsFocalPlaneArrayCollectionType& accessor) {
  copyImpl(accessor, false);
}

void PO_ComponentSettingsFocalPlaneArrayCollectionType::copyImpl(const uci::type::PO_ComponentSettingsFocalPlaneArrayCollectionType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PO_ComponentSettingsFocalPlaneArrayCollectionType&>(accessor);
    collectionTimeSetting_Accessor = (accessorImpl.collectionTimeSetting_Accessor ? accessorImpl.collectionTimeSetting_Accessor : boost::none);
    if (accessorImpl.collectionTimeControls_Accessor) {
      setCollectionTimeControls(*(accessorImpl.collectionTimeControls_Accessor));
    } else {
      collectionTimeControls_Accessor.reset();
    }
  }
}

void PO_ComponentSettingsFocalPlaneArrayCollectionType::reset() noexcept {
  collectionTimeSetting_Accessor.reset();
  collectionTimeControls_Accessor.reset();
}

uci::type::PO_ComponentSettingsFocalPlaneArrayCollectionType::PO_ComponentSettingsFocalPlaneArrayCollectionTypeChoice PO_ComponentSettingsFocalPlaneArrayCollectionType::getPO_ComponentSettingsFocalPlaneArrayCollectionTypeChoiceOrdinal() const noexcept {
  if (collectionTimeSetting_Accessor) {
    return PO_COMPONENTSETTINGSFOCALPLANEARRAYCOLLECTIONTYPE_CHOICE_COLLECTIONTIMESETTING;
  }
  if (collectionTimeControls_Accessor) {
    return PO_COMPONENTSETTINGSFOCALPLANEARRAYCOLLECTIONTYPE_CHOICE_COLLECTIONTIMECONTROLS;
  }
  return PO_COMPONENTSETTINGSFOCALPLANEARRAYCOLLECTIONTYPE_CHOICE_NONE;
}

uci::type::PO_ComponentSettingsFocalPlaneArrayCollectionType& PO_ComponentSettingsFocalPlaneArrayCollectionType::setPO_ComponentSettingsFocalPlaneArrayCollectionTypeChoiceOrdinal(uci::type::PO_ComponentSettingsFocalPlaneArrayCollectionType::PO_ComponentSettingsFocalPlaneArrayCollectionTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case PO_COMPONENTSETTINGSFOCALPLANEARRAYCOLLECTIONTYPE_CHOICE_COLLECTIONTIMESETTING:
      chooseCollectionTimeSetting();
      break;
    case PO_COMPONENTSETTINGSFOCALPLANEARRAYCOLLECTIONTYPE_CHOICE_COLLECTIONTIMECONTROLS:
      chooseCollectionTimeControls("setPO_ComponentSettingsFocalPlaneArrayCollectionTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setPO_ComponentSettingsFocalPlaneArrayCollectionTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::DurationTypeValue PO_ComponentSettingsFocalPlaneArrayCollectionType::getCollectionTimeSetting() const {
  if (collectionTimeSetting_Accessor) {
    return *collectionTimeSetting_Accessor;
  }
  throw uci::base::UCIException("Error in getCollectionTimeSetting(): Unable to get CollectionTimeSetting, field not selected");
}

uci::type::PO_ComponentSettingsFocalPlaneArrayCollectionType& PO_ComponentSettingsFocalPlaneArrayCollectionType::setCollectionTimeSetting(uci::type::DurationTypeValue value) {
  chooseCollectionTimeSetting();
  collectionTimeSetting_Accessor = value;
  return *this;
}

bool PO_ComponentSettingsFocalPlaneArrayCollectionType::isCollectionTimeSetting() const noexcept {
  return static_cast<bool>(collectionTimeSetting_Accessor);
}

void PO_ComponentSettingsFocalPlaneArrayCollectionType::chooseCollectionTimeSetting() {
  collectionTimeControls_Accessor.reset();
  if (!collectionTimeSetting_Accessor) {
    collectionTimeSetting_Accessor = boost::optional<asb_xs::Duration>();
  }
}

uci::type::ComponentControlsB_Type& PO_ComponentSettingsFocalPlaneArrayCollectionType::getCollectionTimeControls_() const {
  if (collectionTimeControls_Accessor) {
    return *collectionTimeControls_Accessor;
  }
  throw uci::base::UCIException("Error in getCollectionTimeControls(): Unable to get CollectionTimeControls, field not selected");
}

const uci::type::ComponentControlsB_Type& PO_ComponentSettingsFocalPlaneArrayCollectionType::getCollectionTimeControls() const {
  return getCollectionTimeControls_();
}

uci::type::ComponentControlsB_Type& PO_ComponentSettingsFocalPlaneArrayCollectionType::getCollectionTimeControls() {
  return getCollectionTimeControls_();
}

uci::type::PO_ComponentSettingsFocalPlaneArrayCollectionType& PO_ComponentSettingsFocalPlaneArrayCollectionType::setCollectionTimeControls(const uci::type::ComponentControlsB_Type& accessor) {
  chooseCollectionTimeControls();
  if (&accessor != collectionTimeControls_Accessor.get()) {
    collectionTimeControls_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool PO_ComponentSettingsFocalPlaneArrayCollectionType::isCollectionTimeControls() const noexcept {
  return static_cast<bool>(collectionTimeControls_Accessor);
}

uci::type::ComponentControlsB_Type& PO_ComponentSettingsFocalPlaneArrayCollectionType::chooseCollectionTimeControls(const std::string& method, uci::base::accessorType::AccessorType type) {
  collectionTimeSetting_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::componentControlsB_Type : type};
  if ((!collectionTimeControls_Accessor) || (collectionTimeControls_Accessor->getAccessorType() != requestedType)) {
    collectionTimeControls_Accessor = ComponentControlsB_Type::create(type);
    if (!collectionTimeControls_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *collectionTimeControls_Accessor;
}

uci::type::ComponentControlsB_Type& PO_ComponentSettingsFocalPlaneArrayCollectionType::chooseCollectionTimeControls(uci::base::accessorType::AccessorType type) {
  return chooseCollectionTimeControls("chooseCollectionTimeControls", type);
}

std::unique_ptr<PO_ComponentSettingsFocalPlaneArrayCollectionType> PO_ComponentSettingsFocalPlaneArrayCollectionType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pO_ComponentSettingsFocalPlaneArrayCollectionType : type};
  return (requestedType == uci::type::accessorType::pO_ComponentSettingsFocalPlaneArrayCollectionType) ? boost::make_unique<PO_ComponentSettingsFocalPlaneArrayCollectionType>() : nullptr;
}

/**  */
namespace PO_ComponentSettingsFocalPlaneArrayCollectionType_Names {

constexpr const char* Extern_Type_Name{"PO_ComponentSettingsFocalPlaneArrayCollectionType"};
constexpr const char* CollectionTimeSetting_Name{"CollectionTimeSetting"};
constexpr const char* CollectionTimeControls_Name{"CollectionTimeControls"};

} // namespace PO_ComponentSettingsFocalPlaneArrayCollectionType_Names

void PO_ComponentSettingsFocalPlaneArrayCollectionType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_ComponentSettingsFocalPlaneArrayCollectionType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PO_ComponentSettingsFocalPlaneArrayCollectionType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PO_ComponentSettingsFocalPlaneArrayCollectionType_Names::CollectionTimeSetting_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setCollectionTimeSetting(asb_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    } else if (valueType.first == nsPrefix + PO_ComponentSettingsFocalPlaneArrayCollectionType_Names::CollectionTimeControls_Name) {
      ComponentControlsB_Type::deserialize(valueType.second, accessor.chooseCollectionTimeControls(), nodeName, nsPrefix);
    }
  }
}

std::string PO_ComponentSettingsFocalPlaneArrayCollectionType::serialize(const uci::type::PO_ComponentSettingsFocalPlaneArrayCollectionType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PO_ComponentSettingsFocalPlaneArrayCollectionType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PO_ComponentSettingsFocalPlaneArrayCollectionType_Names::Extern_Type_Name);
  }
  if (accessor.isCollectionTimeSetting()) {
    asb_uci::util::SerializationHelpers::serializeDuration(accessor.getCollectionTimeSetting(), node, PO_ComponentSettingsFocalPlaneArrayCollectionType_Names::CollectionTimeSetting_Name);
  } else if (accessor.isCollectionTimeControls()) {
    ComponentControlsB_Type::serialize(accessor.getCollectionTimeControls(), node, PO_ComponentSettingsFocalPlaneArrayCollectionType_Names::CollectionTimeControls_Name);
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

uci::type::PO_ComponentSettingsFocalPlaneArrayCollectionType& PO_ComponentSettingsFocalPlaneArrayCollectionType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PO_ComponentSettingsFocalPlaneArrayCollectionType>().release());
}

uci::type::PO_ComponentSettingsFocalPlaneArrayCollectionType& PO_ComponentSettingsFocalPlaneArrayCollectionType::create(const uci::type::PO_ComponentSettingsFocalPlaneArrayCollectionType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PO_ComponentSettingsFocalPlaneArrayCollectionType> newAccessor{boost::make_unique<asb_uci::type::PO_ComponentSettingsFocalPlaneArrayCollectionType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PO_ComponentSettingsFocalPlaneArrayCollectionType::destroy(uci::type::PO_ComponentSettingsFocalPlaneArrayCollectionType& accessor) {
  delete dynamic_cast<asb_uci::type::PO_ComponentSettingsFocalPlaneArrayCollectionType*>(&accessor);
}

} // namespace type

} // namespace uci

