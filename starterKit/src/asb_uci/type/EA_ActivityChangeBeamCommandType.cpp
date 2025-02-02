/** @file EA_ActivityChangeBeamCommandType.cpp
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

#include "../../../include/asb_uci/type/EA_ActivityChangeBeamCommandType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/BeamID_Type.h"
#include "../../../include/asb_uci/type/CapabilityCommandStateEnum.h"
#include "../../../include/asb_uci/type/FrequencyRangeType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/BeamID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CapabilityCommandStateEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EA_ActivityChangeBeamCommandType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/FrequencyRangeType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

EA_ActivityChangeBeamCommandType::EA_ActivityChangeBeamCommandType()
  : beamID_Accessor{boost::make_unique<BeamID_Type>()} {
}

EA_ActivityChangeBeamCommandType::~EA_ActivityChangeBeamCommandType() = default;

void EA_ActivityChangeBeamCommandType::copy(const uci::type::EA_ActivityChangeBeamCommandType& accessor) {
  copyImpl(accessor, false);
}

void EA_ActivityChangeBeamCommandType::copyImpl(const uci::type::EA_ActivityChangeBeamCommandType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const EA_ActivityChangeBeamCommandType&>(accessor);
    setBeamID(*(accessorImpl.beamID_Accessor));
    if (accessorImpl.changeBeamState_Accessor) {
      setChangeBeamState(*(accessorImpl.changeBeamState_Accessor));
    } else {
      changeBeamState_Accessor.reset();
    }
    if (accessorImpl.hasUnassignBeam()) {
      setUnassignBeam(accessorImpl.getUnassignBeam());
    } else {
      clearUnassignBeam();
    }
    if (accessorImpl.hasDeleteBeam()) {
      setDeleteBeam(accessorImpl.getDeleteBeam());
    } else {
      clearDeleteBeam();
    }
    if (accessorImpl.changeFrequency_Accessor) {
      setChangeFrequency(*(accessorImpl.changeFrequency_Accessor));
    } else {
      changeFrequency_Accessor.reset();
    }
  }
}

void EA_ActivityChangeBeamCommandType::reset() noexcept {
  beamID_Accessor->reset();
  changeBeamState_Accessor.reset();
  clearUnassignBeam();
  clearDeleteBeam();
  changeFrequency_Accessor.reset();
}

const uci::type::BeamID_Type& EA_ActivityChangeBeamCommandType::getBeamID() const {
  return *beamID_Accessor;
}

uci::type::BeamID_Type& EA_ActivityChangeBeamCommandType::getBeamID() {
  return *beamID_Accessor;
}

uci::type::EA_ActivityChangeBeamCommandType& EA_ActivityChangeBeamCommandType::setBeamID(const uci::type::BeamID_Type& accessor) {
  if (&accessor != beamID_Accessor.get()) {
    beamID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::CapabilityCommandStateEnum& EA_ActivityChangeBeamCommandType::getChangeBeamState_() const {
  if (changeBeamState_Accessor) {
    return *changeBeamState_Accessor;
  }
  throw uci::base::UCIException("Error in getChangeBeamState(): An attempt was made to get an optional field that was not enabled, call hasChangeBeamState() to determine if it is safe to call getChangeBeamState()");
}

const uci::type::CapabilityCommandStateEnum& EA_ActivityChangeBeamCommandType::getChangeBeamState() const {
  return getChangeBeamState_();
}

uci::type::CapabilityCommandStateEnum& EA_ActivityChangeBeamCommandType::getChangeBeamState() {
  return getChangeBeamState_();
}

uci::type::EA_ActivityChangeBeamCommandType& EA_ActivityChangeBeamCommandType::setChangeBeamState(const uci::type::CapabilityCommandStateEnum& accessor) {
  enableChangeBeamState();
  if (&accessor != changeBeamState_Accessor.get()) {
    changeBeamState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::EA_ActivityChangeBeamCommandType& EA_ActivityChangeBeamCommandType::setChangeBeamState(const uci::type::CapabilityCommandStateEnum::EnumerationItem value) {
  enableChangeBeamState().setValue(value);
  return *this;
}

bool EA_ActivityChangeBeamCommandType::hasChangeBeamState() const noexcept {
  return static_cast<bool>(changeBeamState_Accessor);
}

uci::type::CapabilityCommandStateEnum& EA_ActivityChangeBeamCommandType::enableChangeBeamState(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::capabilityCommandStateEnum : type};
  if ((!changeBeamState_Accessor) || (changeBeamState_Accessor->getAccessorType() != requestedType)) {
    changeBeamState_Accessor = CapabilityCommandStateEnum::create(requestedType);
    if (!changeBeamState_Accessor) {
      throw uci::base::UCIException("Error in enableChangeBeamState(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *changeBeamState_Accessor;
}

uci::type::EA_ActivityChangeBeamCommandType& EA_ActivityChangeBeamCommandType::clearChangeBeamState() noexcept {
  changeBeamState_Accessor.reset();
  return *this;
}

xs::Boolean EA_ActivityChangeBeamCommandType::getUnassignBeam() const {
  if (unassignBeam_Accessor) {
    return *unassignBeam_Accessor;
  }
  throw uci::base::UCIException("Error in getUnassignBeam(): An attempt was made to get an optional field that was not enabled, call hasUnassignBeam() to determine if it is safe to call getUnassignBeam()");
}

uci::type::EA_ActivityChangeBeamCommandType& EA_ActivityChangeBeamCommandType::setUnassignBeam(xs::Boolean value) {
  unassignBeam_Accessor = value;
  return *this;
}

bool EA_ActivityChangeBeamCommandType::hasUnassignBeam() const noexcept {
  return unassignBeam_Accessor.has_value();
}

uci::type::EA_ActivityChangeBeamCommandType& EA_ActivityChangeBeamCommandType::clearUnassignBeam() noexcept {
  unassignBeam_Accessor.reset();
  return *this;
}

xs::Boolean EA_ActivityChangeBeamCommandType::getDeleteBeam() const {
  if (deleteBeam_Accessor) {
    return *deleteBeam_Accessor;
  }
  throw uci::base::UCIException("Error in getDeleteBeam(): An attempt was made to get an optional field that was not enabled, call hasDeleteBeam() to determine if it is safe to call getDeleteBeam()");
}

uci::type::EA_ActivityChangeBeamCommandType& EA_ActivityChangeBeamCommandType::setDeleteBeam(xs::Boolean value) {
  deleteBeam_Accessor = value;
  return *this;
}

bool EA_ActivityChangeBeamCommandType::hasDeleteBeam() const noexcept {
  return deleteBeam_Accessor.has_value();
}

uci::type::EA_ActivityChangeBeamCommandType& EA_ActivityChangeBeamCommandType::clearDeleteBeam() noexcept {
  deleteBeam_Accessor.reset();
  return *this;
}

uci::type::FrequencyRangeType& EA_ActivityChangeBeamCommandType::getChangeFrequency_() const {
  if (changeFrequency_Accessor) {
    return *changeFrequency_Accessor;
  }
  throw uci::base::UCIException("Error in getChangeFrequency(): An attempt was made to get an optional field that was not enabled, call hasChangeFrequency() to determine if it is safe to call getChangeFrequency()");
}

const uci::type::FrequencyRangeType& EA_ActivityChangeBeamCommandType::getChangeFrequency() const {
  return getChangeFrequency_();
}

uci::type::FrequencyRangeType& EA_ActivityChangeBeamCommandType::getChangeFrequency() {
  return getChangeFrequency_();
}

uci::type::EA_ActivityChangeBeamCommandType& EA_ActivityChangeBeamCommandType::setChangeFrequency(const uci::type::FrequencyRangeType& accessor) {
  enableChangeFrequency();
  if (&accessor != changeFrequency_Accessor.get()) {
    changeFrequency_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool EA_ActivityChangeBeamCommandType::hasChangeFrequency() const noexcept {
  return static_cast<bool>(changeFrequency_Accessor);
}

uci::type::FrequencyRangeType& EA_ActivityChangeBeamCommandType::enableChangeFrequency(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::frequencyRangeType : type};
  if ((!changeFrequency_Accessor) || (changeFrequency_Accessor->getAccessorType() != requestedType)) {
    changeFrequency_Accessor = FrequencyRangeType::create(requestedType);
    if (!changeFrequency_Accessor) {
      throw uci::base::UCIException("Error in enableChangeFrequency(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *changeFrequency_Accessor;
}

uci::type::EA_ActivityChangeBeamCommandType& EA_ActivityChangeBeamCommandType::clearChangeFrequency() noexcept {
  changeFrequency_Accessor.reset();
  return *this;
}

std::unique_ptr<EA_ActivityChangeBeamCommandType> EA_ActivityChangeBeamCommandType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::eA_ActivityChangeBeamCommandType : type};
  return (requestedType == uci::type::accessorType::eA_ActivityChangeBeamCommandType) ? boost::make_unique<EA_ActivityChangeBeamCommandType>() : nullptr;
}

/**  */
namespace EA_ActivityChangeBeamCommandType_Names {

constexpr const char* Extern_Type_Name{"EA_ActivityChangeBeamCommandType"};
constexpr const char* BeamID_Name{"BeamID"};
constexpr const char* ChangeBeamState_Name{"ChangeBeamState"};
constexpr const char* UnassignBeam_Name{"UnassignBeam"};
constexpr const char* DeleteBeam_Name{"DeleteBeam"};
constexpr const char* ChangeFrequency_Name{"ChangeFrequency"};

} // namespace EA_ActivityChangeBeamCommandType_Names

void EA_ActivityChangeBeamCommandType::deserialize(const boost::property_tree::ptree& propTree, uci::type::EA_ActivityChangeBeamCommandType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EA_ActivityChangeBeamCommandType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + EA_ActivityChangeBeamCommandType_Names::BeamID_Name) {
      BeamID_Type::deserialize(valueType.second, accessor.getBeamID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EA_ActivityChangeBeamCommandType_Names::ChangeBeamState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableChangeBeamState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + EA_ActivityChangeBeamCommandType_Names::UnassignBeam_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setUnassignBeam(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + EA_ActivityChangeBeamCommandType_Names::DeleteBeam_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setDeleteBeam(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + EA_ActivityChangeBeamCommandType_Names::ChangeFrequency_Name) {
      FrequencyRangeType::deserialize(valueType.second, accessor.enableChangeFrequency(), nodeName, nsPrefix);
    }
  }
}

std::string EA_ActivityChangeBeamCommandType::serialize(const uci::type::EA_ActivityChangeBeamCommandType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? EA_ActivityChangeBeamCommandType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, EA_ActivityChangeBeamCommandType_Names::Extern_Type_Name);
  }
  BeamID_Type::serialize(accessor.getBeamID(), node, EA_ActivityChangeBeamCommandType_Names::BeamID_Name);
  if (accessor.hasChangeBeamState()) {
    CapabilityCommandStateEnum::serialize(accessor.getChangeBeamState(), node, EA_ActivityChangeBeamCommandType_Names::ChangeBeamState_Name, false);
  }
  if (accessor.hasUnassignBeam()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getUnassignBeam(), node, EA_ActivityChangeBeamCommandType_Names::UnassignBeam_Name);
  }
  if (accessor.hasDeleteBeam()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getDeleteBeam(), node, EA_ActivityChangeBeamCommandType_Names::DeleteBeam_Name);
  }
  if (accessor.hasChangeFrequency()) {
    FrequencyRangeType::serialize(accessor.getChangeFrequency(), node, EA_ActivityChangeBeamCommandType_Names::ChangeFrequency_Name);
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

uci::type::EA_ActivityChangeBeamCommandType& EA_ActivityChangeBeamCommandType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::EA_ActivityChangeBeamCommandType>().release());
}

uci::type::EA_ActivityChangeBeamCommandType& EA_ActivityChangeBeamCommandType::create(const uci::type::EA_ActivityChangeBeamCommandType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::EA_ActivityChangeBeamCommandType> newAccessor{boost::make_unique<asb_uci::type::EA_ActivityChangeBeamCommandType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void EA_ActivityChangeBeamCommandType::destroy(uci::type::EA_ActivityChangeBeamCommandType& accessor) {
  delete dynamic_cast<asb_uci::type::EA_ActivityChangeBeamCommandType*>(&accessor);
}

} // namespace type

} // namespace uci

