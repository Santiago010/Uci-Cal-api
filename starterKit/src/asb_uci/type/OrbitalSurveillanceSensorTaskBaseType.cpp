/** @file OrbitalSurveillanceSensorTaskBaseType.cpp
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

#include "../../../include/asb_uci/type/OrbitalSurveillanceSensorTaskBaseType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/OrbitalSurveillanceCollectionRequirementsType.h"
#include "../../../include/asb_uci/type/OrbitalSurveillanceSensorCapabilityEnum.h"
#include "../../../include/asb_uci/type/OrbitalSurveillanceSensorReportingCategoriesType.h"
#include "../../../include/asb_uci/type/OrbitalSurveillanceSensorSensitivityConstraintType.h"
#include "../../../include/asb_uci/type/OrbitalSurveillanceSubCapabilityEnum.h"
#include "../../../include/asb_uci/util/DerivedTypesCopier.h"
#include "../../../include/asb_uci/util/DerivedTypesCreator.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/DerivedTypesSerializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DurationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitalSurveillanceCollectionRequirementsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitalSurveillanceSensorCapabilityEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitalSurveillanceSensorReportingCategoriesType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitalSurveillanceSensorSensitivityConstraintType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitalSurveillanceSensorTaskBaseType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitalSurveillanceSubCapabilityEnum.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OrbitalSurveillanceSensorTaskBaseType::OrbitalSurveillanceSensorTaskBaseType()
  : capabilityType_Accessor{boost::make_unique<OrbitalSurveillanceSensorCapabilityEnum>()},
    collectionRequirements_Accessor{boost::make_unique<CollectionRequirements>(1, SIZE_MAX)},
    informationObjective_Accessor{boost::make_unique<InformationObjective>(0, 20)},
    reportingRequirements_Accessor{boost::make_unique<ReportingRequirements>(0, SIZE_MAX)} {
}

OrbitalSurveillanceSensorTaskBaseType::~OrbitalSurveillanceSensorTaskBaseType() = default;

void OrbitalSurveillanceSensorTaskBaseType::copy(const uci::type::OrbitalSurveillanceSensorTaskBaseType& accessor) {
  copyImpl(accessor, false);
}

void OrbitalSurveillanceSensorTaskBaseType::copyImpl(const uci::type::OrbitalSurveillanceSensorTaskBaseType& accessor, const bool checkIfDerivation) {
  if (&accessor != this) {
    if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::orbitalSurveillanceSensorTaskBaseType)) {
      const auto& accessorImpl = dynamic_cast<const OrbitalSurveillanceSensorTaskBaseType&>(accessor);
      setCapabilityType(*(accessorImpl.capabilityType_Accessor));
      setCollectionRequirements(*(accessorImpl.collectionRequirements_Accessor));
      setConfirmObjectAcquisition(accessorImpl.confirmObjectAcquisition_Accessor);
      setInformationObjective(*(accessorImpl.informationObjective_Accessor));
      setReportingRequirements(*(accessorImpl.reportingRequirements_Accessor));
      if (accessorImpl.hasSetUpStartTime()) {
        setSetUpStartTime(accessorImpl.getSetUpStartTime());
      } else {
        clearSetUpStartTime();
      }
      if (accessorImpl.hasPostCollectionWrapUp()) {
        setPostCollectionWrapUp(accessorImpl.getPostCollectionWrapUp());
      } else {
        clearPostCollectionWrapUp();
      }
      if (accessorImpl.sensitivityConstraints_Accessor) {
        setSensitivityConstraints(*(accessorImpl.sensitivityConstraints_Accessor));
      } else {
        sensitivityConstraints_Accessor.reset();
      }
    } else {
      asb_uci::util::DerivedTypesCopier::copy(accessor, *this);
    }
  }
}

void OrbitalSurveillanceSensorTaskBaseType::reset() noexcept {
  capabilityType_Accessor->reset();
  collectionRequirements_Accessor->reset();
  confirmObjectAcquisition_Accessor = false;
  informationObjective_Accessor->reset();
  reportingRequirements_Accessor->reset();
  clearSetUpStartTime();
  clearPostCollectionWrapUp();
  sensitivityConstraints_Accessor.reset();
}

const uci::type::OrbitalSurveillanceSensorCapabilityEnum& OrbitalSurveillanceSensorTaskBaseType::getCapabilityType() const {
  return *capabilityType_Accessor;
}

uci::type::OrbitalSurveillanceSensorCapabilityEnum& OrbitalSurveillanceSensorTaskBaseType::getCapabilityType() {
  return *capabilityType_Accessor;
}

uci::type::OrbitalSurveillanceSensorTaskBaseType& OrbitalSurveillanceSensorTaskBaseType::setCapabilityType(const uci::type::OrbitalSurveillanceSensorCapabilityEnum& accessor) {
  if (&accessor != capabilityType_Accessor.get()) {
    capabilityType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::OrbitalSurveillanceSensorTaskBaseType& OrbitalSurveillanceSensorTaskBaseType::setCapabilityType(uci::type::OrbitalSurveillanceSensorCapabilityEnum::EnumerationItem value) {
  capabilityType_Accessor->setValue(value);
  return *this;
}


const uci::type::OrbitalSurveillanceSensorTaskBaseType::CollectionRequirements& OrbitalSurveillanceSensorTaskBaseType::getCollectionRequirements() const {
  return *collectionRequirements_Accessor;
}

uci::type::OrbitalSurveillanceSensorTaskBaseType::CollectionRequirements& OrbitalSurveillanceSensorTaskBaseType::getCollectionRequirements() {
  return *collectionRequirements_Accessor;
}

uci::type::OrbitalSurveillanceSensorTaskBaseType& OrbitalSurveillanceSensorTaskBaseType::setCollectionRequirements(const uci::type::OrbitalSurveillanceSensorTaskBaseType::CollectionRequirements& accessor) {
  if (&accessor != collectionRequirements_Accessor.get()) {
    collectionRequirements_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

xs::Boolean OrbitalSurveillanceSensorTaskBaseType::getConfirmObjectAcquisition() const {
  return confirmObjectAcquisition_Accessor;
}

uci::type::OrbitalSurveillanceSensorTaskBaseType& OrbitalSurveillanceSensorTaskBaseType::setConfirmObjectAcquisition(xs::Boolean value) {
  confirmObjectAcquisition_Accessor = value;
  return *this;
}


const uci::type::OrbitalSurveillanceSensorTaskBaseType::InformationObjective& OrbitalSurveillanceSensorTaskBaseType::getInformationObjective() const {
  return *informationObjective_Accessor;
}

uci::type::OrbitalSurveillanceSensorTaskBaseType::InformationObjective& OrbitalSurveillanceSensorTaskBaseType::getInformationObjective() {
  return *informationObjective_Accessor;
}

uci::type::OrbitalSurveillanceSensorTaskBaseType& OrbitalSurveillanceSensorTaskBaseType::setInformationObjective(const uci::type::OrbitalSurveillanceSensorTaskBaseType::InformationObjective& accessor) {
  if (&accessor != informationObjective_Accessor.get()) {
    informationObjective_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::OrbitalSurveillanceSensorTaskBaseType::ReportingRequirements& OrbitalSurveillanceSensorTaskBaseType::getReportingRequirements() const {
  return *reportingRequirements_Accessor;
}

uci::type::OrbitalSurveillanceSensorTaskBaseType::ReportingRequirements& OrbitalSurveillanceSensorTaskBaseType::getReportingRequirements() {
  return *reportingRequirements_Accessor;
}

uci::type::OrbitalSurveillanceSensorTaskBaseType& OrbitalSurveillanceSensorTaskBaseType::setReportingRequirements(const uci::type::OrbitalSurveillanceSensorTaskBaseType::ReportingRequirements& accessor) {
  if (&accessor != reportingRequirements_Accessor.get()) {
    reportingRequirements_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::DurationTypeValue OrbitalSurveillanceSensorTaskBaseType::getSetUpStartTime() const {
  if (setUpStartTime_Accessor) {
    return *setUpStartTime_Accessor;
  }
  throw uci::base::UCIException("Error in getSetUpStartTime(): An attempt was made to get an optional field that was not enabled, call hasSetUpStartTime() to determine if it is safe to call getSetUpStartTime()");
}

uci::type::OrbitalSurveillanceSensorTaskBaseType& OrbitalSurveillanceSensorTaskBaseType::setSetUpStartTime(uci::type::DurationTypeValue value) {
  setUpStartTime_Accessor = value;
  return *this;
}

bool OrbitalSurveillanceSensorTaskBaseType::hasSetUpStartTime() const noexcept {
  return setUpStartTime_Accessor.has_value();
}

uci::type::OrbitalSurveillanceSensorTaskBaseType& OrbitalSurveillanceSensorTaskBaseType::clearSetUpStartTime() noexcept {
  setUpStartTime_Accessor.reset();
  return *this;
}

uci::type::DurationTypeValue OrbitalSurveillanceSensorTaskBaseType::getPostCollectionWrapUp() const {
  if (postCollectionWrapUp_Accessor) {
    return *postCollectionWrapUp_Accessor;
  }
  throw uci::base::UCIException("Error in getPostCollectionWrapUp(): An attempt was made to get an optional field that was not enabled, call hasPostCollectionWrapUp() to determine if it is safe to call getPostCollectionWrapUp()");
}

uci::type::OrbitalSurveillanceSensorTaskBaseType& OrbitalSurveillanceSensorTaskBaseType::setPostCollectionWrapUp(uci::type::DurationTypeValue value) {
  postCollectionWrapUp_Accessor = value;
  return *this;
}

bool OrbitalSurveillanceSensorTaskBaseType::hasPostCollectionWrapUp() const noexcept {
  return postCollectionWrapUp_Accessor.has_value();
}

uci::type::OrbitalSurveillanceSensorTaskBaseType& OrbitalSurveillanceSensorTaskBaseType::clearPostCollectionWrapUp() noexcept {
  postCollectionWrapUp_Accessor.reset();
  return *this;
}

uci::type::OrbitalSurveillanceSensorSensitivityConstraintType& OrbitalSurveillanceSensorTaskBaseType::getSensitivityConstraints_() const {
  if (sensitivityConstraints_Accessor) {
    return *sensitivityConstraints_Accessor;
  }
  throw uci::base::UCIException("Error in getSensitivityConstraints(): An attempt was made to get an optional field that was not enabled, call hasSensitivityConstraints() to determine if it is safe to call getSensitivityConstraints()");
}

const uci::type::OrbitalSurveillanceSensorSensitivityConstraintType& OrbitalSurveillanceSensorTaskBaseType::getSensitivityConstraints() const {
  return getSensitivityConstraints_();
}

uci::type::OrbitalSurveillanceSensorSensitivityConstraintType& OrbitalSurveillanceSensorTaskBaseType::getSensitivityConstraints() {
  return getSensitivityConstraints_();
}

uci::type::OrbitalSurveillanceSensorTaskBaseType& OrbitalSurveillanceSensorTaskBaseType::setSensitivityConstraints(const uci::type::OrbitalSurveillanceSensorSensitivityConstraintType& accessor) {
  enableSensitivityConstraints();
  if (&accessor != sensitivityConstraints_Accessor.get()) {
    sensitivityConstraints_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OrbitalSurveillanceSensorTaskBaseType::hasSensitivityConstraints() const noexcept {
  return static_cast<bool>(sensitivityConstraints_Accessor);
}

uci::type::OrbitalSurveillanceSensorSensitivityConstraintType& OrbitalSurveillanceSensorTaskBaseType::enableSensitivityConstraints(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitalSurveillanceSensorSensitivityConstraintType : type};
  if ((!sensitivityConstraints_Accessor) || (sensitivityConstraints_Accessor->getAccessorType() != requestedType)) {
    sensitivityConstraints_Accessor = OrbitalSurveillanceSensorSensitivityConstraintType::create(requestedType);
    if (!sensitivityConstraints_Accessor) {
      throw uci::base::UCIException("Error in enableSensitivityConstraints(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *sensitivityConstraints_Accessor;
}

uci::type::OrbitalSurveillanceSensorTaskBaseType& OrbitalSurveillanceSensorTaskBaseType::clearSensitivityConstraints() noexcept {
  sensitivityConstraints_Accessor.reset();
  return *this;
}

std::unique_ptr<OrbitalSurveillanceSensorTaskBaseType> OrbitalSurveillanceSensorTaskBaseType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitalSurveillanceSensorTaskBaseType : type};
  return std::unique_ptr<OrbitalSurveillanceSensorTaskBaseType>(dynamic_cast<OrbitalSurveillanceSensorTaskBaseType*>(asb_uci::util::DerivedTypesCreator::create(requestedType)));
}

/**  */
namespace OrbitalSurveillanceSensorTaskBaseType_Names {

constexpr const char* Extern_Type_Name{"OrbitalSurveillanceSensorTaskBaseType"};
constexpr const char* CapabilityType_Name{"CapabilityType"};
constexpr const char* CollectionRequirements_Name{"CollectionRequirements"};
constexpr const char* ConfirmObjectAcquisition_Name{"ConfirmObjectAcquisition"};
constexpr const char* InformationObjective_Name{"InformationObjective"};
constexpr const char* ReportingRequirements_Name{"ReportingRequirements"};
constexpr const char* SetUpStartTime_Name{"SetUpStartTime"};
constexpr const char* PostCollectionWrapUp_Name{"PostCollectionWrapUp"};
constexpr const char* SensitivityConstraints_Name{"SensitivityConstraints"};

} // namespace OrbitalSurveillanceSensorTaskBaseType_Names

void OrbitalSurveillanceSensorTaskBaseType::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitalSurveillanceSensorTaskBaseType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitalSurveillanceSensorTaskBaseType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitalSurveillanceSensorTaskBaseType_Names::CapabilityType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getCapabilityType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + OrbitalSurveillanceSensorTaskBaseType_Names::CollectionRequirements_Name) {
      uci::type::OrbitalSurveillanceSensorTaskBaseType::CollectionRequirements& boundedList = accessor.getCollectionRequirements();
      const uci::type::OrbitalSurveillanceSensorTaskBaseType::CollectionRequirements::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::OrbitalSurveillanceCollectionRequirementsType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitalSurveillanceSensorTaskBaseType_Names::ConfirmObjectAcquisition_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setConfirmObjectAcquisition(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitalSurveillanceSensorTaskBaseType_Names::InformationObjective_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::OrbitalSurveillanceSensorTaskBaseType::InformationObjective& boundedList = accessor.getInformationObjective();
        const uci::type::OrbitalSurveillanceSensorTaskBaseType::InformationObjective::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + OrbitalSurveillanceSensorTaskBaseType_Names::ReportingRequirements_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::OrbitalSurveillanceSensorTaskBaseType::ReportingRequirements& boundedList = accessor.getReportingRequirements();
        const uci::type::OrbitalSurveillanceSensorTaskBaseType::ReportingRequirements::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::OrbitalSurveillanceSensorReportingCategoriesType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + OrbitalSurveillanceSensorTaskBaseType_Names::SetUpStartTime_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSetUpStartTime(asb_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitalSurveillanceSensorTaskBaseType_Names::PostCollectionWrapUp_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPostCollectionWrapUp(asb_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    } else if (valueType.first == nsPrefix + OrbitalSurveillanceSensorTaskBaseType_Names::SensitivityConstraints_Name) {
      OrbitalSurveillanceSensorSensitivityConstraintType::deserialize(valueType.second, accessor.enableSensitivityConstraints(), nodeName, nsPrefix);
    }
  }
}

std::string OrbitalSurveillanceSensorTaskBaseType::serialize(const uci::type::OrbitalSurveillanceSensorTaskBaseType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? OrbitalSurveillanceSensorTaskBaseType_Names::Extern_Type_Name : nodeName)};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::orbitalSurveillanceSensorTaskBaseType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      asb_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitalSurveillanceSensorTaskBaseType_Names::Extern_Type_Name);
    }
    OrbitalSurveillanceSensorCapabilityEnum::serialize(accessor.getCapabilityType(), node, OrbitalSurveillanceSensorTaskBaseType_Names::CapabilityType_Name, false);
    {
      const uci::type::OrbitalSurveillanceSensorTaskBaseType::CollectionRequirements& boundedList = accessor.getCollectionRequirements();
      for (uci::type::OrbitalSurveillanceSensorTaskBaseType::CollectionRequirements::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::OrbitalSurveillanceCollectionRequirementsType::serialize(boundedList.at(i), node, OrbitalSurveillanceSensorTaskBaseType_Names::CollectionRequirements_Name);
      }
    }
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getConfirmObjectAcquisition(), node, OrbitalSurveillanceSensorTaskBaseType_Names::ConfirmObjectAcquisition_Name);
    {
      const uci::type::OrbitalSurveillanceSensorTaskBaseType::InformationObjective& boundedList = accessor.getInformationObjective();
      for (uci::type::OrbitalSurveillanceSensorTaskBaseType::InformationObjective::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        OrbitalSurveillanceSubCapabilityEnum::serialize(boundedList.at(i), node, OrbitalSurveillanceSensorTaskBaseType_Names::InformationObjective_Name, false);
      }
    }
    {
      const uci::type::OrbitalSurveillanceSensorTaskBaseType::ReportingRequirements& boundedList = accessor.getReportingRequirements();
      for (uci::type::OrbitalSurveillanceSensorTaskBaseType::ReportingRequirements::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::OrbitalSurveillanceSensorReportingCategoriesType::serialize(boundedList.at(i), node, OrbitalSurveillanceSensorTaskBaseType_Names::ReportingRequirements_Name);
      }
    }
    if (accessor.hasSetUpStartTime()) {
      asb_uci::util::SerializationHelpers::serializeDuration(accessor.getSetUpStartTime(), node, OrbitalSurveillanceSensorTaskBaseType_Names::SetUpStartTime_Name);
    }
    if (accessor.hasPostCollectionWrapUp()) {
      asb_uci::util::SerializationHelpers::serializeDuration(accessor.getPostCollectionWrapUp(), node, OrbitalSurveillanceSensorTaskBaseType_Names::PostCollectionWrapUp_Name);
    }
    if (accessor.hasSensitivityConstraints()) {
      OrbitalSurveillanceSensorSensitivityConstraintType::serialize(accessor.getSensitivityConstraints(), node, OrbitalSurveillanceSensorTaskBaseType_Names::SensitivityConstraints_Name);
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

uci::type::OrbitalSurveillanceSensorTaskBaseType& OrbitalSurveillanceSensorTaskBaseType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OrbitalSurveillanceSensorTaskBaseType>().release());
}

uci::type::OrbitalSurveillanceSensorTaskBaseType& OrbitalSurveillanceSensorTaskBaseType::create(const uci::type::OrbitalSurveillanceSensorTaskBaseType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OrbitalSurveillanceSensorTaskBaseType> newAccessor{boost::make_unique<asb_uci::type::OrbitalSurveillanceSensorTaskBaseType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OrbitalSurveillanceSensorTaskBaseType::destroy(uci::type::OrbitalSurveillanceSensorTaskBaseType& accessor) {
  delete dynamic_cast<asb_uci::type::OrbitalSurveillanceSensorTaskBaseType*>(&accessor);
}

} // namespace type

} // namespace uci

