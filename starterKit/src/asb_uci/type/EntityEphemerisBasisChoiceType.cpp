/** @file EntityEphemerisBasisChoiceType.cpp
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

#include "../../../include/asb_uci/type/EntityEphemerisBasisChoiceType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/EntityOrbitalElementSetID_Type.h"
#include "../../../include/asb_uci/type/EntityOrbitalVCM_ID_Type.h"
#include "../../../include/asb_uci/type/OrbitalKinematicsStandardFrameChoiceType.h"
#include "../../../include/asb_uci/type/TLE_BaseType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EntityEphemerisBasisChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EntityOrbitalElementSetID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EntityOrbitalVCM_ID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitalKinematicsStandardFrameChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TLE_BaseType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

EntityEphemerisBasisChoiceType::EntityEphemerisBasisChoiceType() = default;

EntityEphemerisBasisChoiceType::~EntityEphemerisBasisChoiceType() = default;

void EntityEphemerisBasisChoiceType::copy(const uci::type::EntityEphemerisBasisChoiceType& accessor) {
  copyImpl(accessor, false);
}

void EntityEphemerisBasisChoiceType::copyImpl(const uci::type::EntityEphemerisBasisChoiceType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const EntityEphemerisBasisChoiceType&>(accessor);
    if (accessorImpl.elementSet_Accessor) {
      setElementSet(*(accessorImpl.elementSet_Accessor));
    } else {
      elementSet_Accessor.reset();
    }
    if (accessorImpl.entityElementSetID_Accessor) {
      setEntityElementSetID(*(accessorImpl.entityElementSetID_Accessor));
    } else {
      entityElementSetID_Accessor.reset();
    }
    if (accessorImpl.kinematicVector_Accessor) {
      setKinematicVector(*(accessorImpl.kinematicVector_Accessor));
    } else {
      kinematicVector_Accessor.reset();
    }
    if (accessorImpl.entityVCM_ID_Accessor) {
      setEntityVCM_ID(*(accessorImpl.entityVCM_ID_Accessor));
    } else {
      entityVCM_ID_Accessor.reset();
    }
  }
}

void EntityEphemerisBasisChoiceType::reset() noexcept {
  elementSet_Accessor.reset();
  entityElementSetID_Accessor.reset();
  kinematicVector_Accessor.reset();
  entityVCM_ID_Accessor.reset();
}

uci::type::EntityEphemerisBasisChoiceType::EntityEphemerisBasisChoiceTypeChoice EntityEphemerisBasisChoiceType::getEntityEphemerisBasisChoiceTypeChoiceOrdinal() const noexcept {
  if (elementSet_Accessor) {
    return ENTITYEPHEMERISBASISCHOICETYPE_CHOICE_ELEMENTSET;
  }
  if (entityElementSetID_Accessor) {
    return ENTITYEPHEMERISBASISCHOICETYPE_CHOICE_ENTITYELEMENTSETID;
  }
  if (kinematicVector_Accessor) {
    return ENTITYEPHEMERISBASISCHOICETYPE_CHOICE_KINEMATICVECTOR;
  }
  if (entityVCM_ID_Accessor) {
    return ENTITYEPHEMERISBASISCHOICETYPE_CHOICE_ENTITYVCM_ID;
  }
  return ENTITYEPHEMERISBASISCHOICETYPE_CHOICE_NONE;
}

uci::type::EntityEphemerisBasisChoiceType& EntityEphemerisBasisChoiceType::setEntityEphemerisBasisChoiceTypeChoiceOrdinal(uci::type::EntityEphemerisBasisChoiceType::EntityEphemerisBasisChoiceTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case ENTITYEPHEMERISBASISCHOICETYPE_CHOICE_ELEMENTSET:
      chooseElementSet("setEntityEphemerisBasisChoiceTypeChoiceOrdinal", type);
      break;
    case ENTITYEPHEMERISBASISCHOICETYPE_CHOICE_ENTITYELEMENTSETID:
      chooseEntityElementSetID("setEntityEphemerisBasisChoiceTypeChoiceOrdinal", type);
      break;
    case ENTITYEPHEMERISBASISCHOICETYPE_CHOICE_KINEMATICVECTOR:
      chooseKinematicVector("setEntityEphemerisBasisChoiceTypeChoiceOrdinal", type);
      break;
    case ENTITYEPHEMERISBASISCHOICETYPE_CHOICE_ENTITYVCM_ID:
      chooseEntityVCM_ID("setEntityEphemerisBasisChoiceTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setEntityEphemerisBasisChoiceTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::TLE_BaseType& EntityEphemerisBasisChoiceType::getElementSet_() const {
  if (elementSet_Accessor) {
    return *elementSet_Accessor;
  }
  throw uci::base::UCIException("Error in getElementSet(): Unable to get ElementSet, field not selected");
}

const uci::type::TLE_BaseType& EntityEphemerisBasisChoiceType::getElementSet() const {
  return getElementSet_();
}

uci::type::TLE_BaseType& EntityEphemerisBasisChoiceType::getElementSet() {
  return getElementSet_();
}

uci::type::EntityEphemerisBasisChoiceType& EntityEphemerisBasisChoiceType::setElementSet(const uci::type::TLE_BaseType& accessor) {
  chooseElementSet("setElementSet", accessor.getAccessorType());
  if (&accessor != elementSet_Accessor.get()) {
    elementSet_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool EntityEphemerisBasisChoiceType::isElementSet() const noexcept {
  return static_cast<bool>(elementSet_Accessor);
}

uci::type::TLE_BaseType& EntityEphemerisBasisChoiceType::chooseElementSet(const std::string& method, uci::base::accessorType::AccessorType type) {
  entityElementSetID_Accessor.reset();
  kinematicVector_Accessor.reset();
  entityVCM_ID_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::tLE_BaseType : type};
  if ((!elementSet_Accessor) || (elementSet_Accessor->getAccessorType() != requestedType)) {
    elementSet_Accessor = TLE_BaseType::create(type);
    if (!elementSet_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *elementSet_Accessor;
}

uci::type::TLE_BaseType& EntityEphemerisBasisChoiceType::chooseElementSet(uci::base::accessorType::AccessorType type) {
  return chooseElementSet("chooseElementSet", type);
}

uci::type::EntityOrbitalElementSetID_Type& EntityEphemerisBasisChoiceType::getEntityElementSetID_() const {
  if (entityElementSetID_Accessor) {
    return *entityElementSetID_Accessor;
  }
  throw uci::base::UCIException("Error in getEntityElementSetID(): Unable to get EntityElementSetID, field not selected");
}

const uci::type::EntityOrbitalElementSetID_Type& EntityEphemerisBasisChoiceType::getEntityElementSetID() const {
  return getEntityElementSetID_();
}

uci::type::EntityOrbitalElementSetID_Type& EntityEphemerisBasisChoiceType::getEntityElementSetID() {
  return getEntityElementSetID_();
}

uci::type::EntityEphemerisBasisChoiceType& EntityEphemerisBasisChoiceType::setEntityElementSetID(const uci::type::EntityOrbitalElementSetID_Type& accessor) {
  chooseEntityElementSetID();
  if (&accessor != entityElementSetID_Accessor.get()) {
    entityElementSetID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool EntityEphemerisBasisChoiceType::isEntityElementSetID() const noexcept {
  return static_cast<bool>(entityElementSetID_Accessor);
}

uci::type::EntityOrbitalElementSetID_Type& EntityEphemerisBasisChoiceType::chooseEntityElementSetID(const std::string& method, uci::base::accessorType::AccessorType type) {
  elementSet_Accessor.reset();
  kinematicVector_Accessor.reset();
  entityVCM_ID_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::entityOrbitalElementSetID_Type : type};
  if ((!entityElementSetID_Accessor) || (entityElementSetID_Accessor->getAccessorType() != requestedType)) {
    entityElementSetID_Accessor = EntityOrbitalElementSetID_Type::create(type);
    if (!entityElementSetID_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *entityElementSetID_Accessor;
}

uci::type::EntityOrbitalElementSetID_Type& EntityEphemerisBasisChoiceType::chooseEntityElementSetID(uci::base::accessorType::AccessorType type) {
  return chooseEntityElementSetID("chooseEntityElementSetID", type);
}

uci::type::OrbitalKinematicsStandardFrameChoiceType& EntityEphemerisBasisChoiceType::getKinematicVector_() const {
  if (kinematicVector_Accessor) {
    return *kinematicVector_Accessor;
  }
  throw uci::base::UCIException("Error in getKinematicVector(): Unable to get KinematicVector, field not selected");
}

const uci::type::OrbitalKinematicsStandardFrameChoiceType& EntityEphemerisBasisChoiceType::getKinematicVector() const {
  return getKinematicVector_();
}

uci::type::OrbitalKinematicsStandardFrameChoiceType& EntityEphemerisBasisChoiceType::getKinematicVector() {
  return getKinematicVector_();
}

uci::type::EntityEphemerisBasisChoiceType& EntityEphemerisBasisChoiceType::setKinematicVector(const uci::type::OrbitalKinematicsStandardFrameChoiceType& accessor) {
  chooseKinematicVector(accessor.getAccessorType());
  if (&accessor != kinematicVector_Accessor.get()) {
    kinematicVector_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool EntityEphemerisBasisChoiceType::isKinematicVector() const noexcept {
  return static_cast<bool>(kinematicVector_Accessor);
}

uci::type::OrbitalKinematicsStandardFrameChoiceType& EntityEphemerisBasisChoiceType::chooseKinematicVector(const std::string& method, uci::base::accessorType::AccessorType type) {
  elementSet_Accessor.reset();
  entityElementSetID_Accessor.reset();
  entityVCM_ID_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitalKinematicsStandardFrameChoiceType : type};
  if ((!kinematicVector_Accessor) || (kinematicVector_Accessor->getAccessorType() != requestedType)) {
    kinematicVector_Accessor = OrbitalKinematicsStandardFrameChoiceType::create(type);
    if (!kinematicVector_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *kinematicVector_Accessor;
}

uci::type::OrbitalKinematicsStandardFrameChoiceType& EntityEphemerisBasisChoiceType::chooseKinematicVector(uci::base::accessorType::AccessorType type) {
  return chooseKinematicVector("chooseKinematicVector", type);
}

uci::type::EntityOrbitalVCM_ID_Type& EntityEphemerisBasisChoiceType::getEntityVCM_ID_() const {
  if (entityVCM_ID_Accessor) {
    return *entityVCM_ID_Accessor;
  }
  throw uci::base::UCIException("Error in getEntityVCM_ID(): Unable to get EntityVCM_ID, field not selected");
}

const uci::type::EntityOrbitalVCM_ID_Type& EntityEphemerisBasisChoiceType::getEntityVCM_ID() const {
  return getEntityVCM_ID_();
}

uci::type::EntityOrbitalVCM_ID_Type& EntityEphemerisBasisChoiceType::getEntityVCM_ID() {
  return getEntityVCM_ID_();
}

uci::type::EntityEphemerisBasisChoiceType& EntityEphemerisBasisChoiceType::setEntityVCM_ID(const uci::type::EntityOrbitalVCM_ID_Type& accessor) {
  chooseEntityVCM_ID();
  if (&accessor != entityVCM_ID_Accessor.get()) {
    entityVCM_ID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool EntityEphemerisBasisChoiceType::isEntityVCM_ID() const noexcept {
  return static_cast<bool>(entityVCM_ID_Accessor);
}

uci::type::EntityOrbitalVCM_ID_Type& EntityEphemerisBasisChoiceType::chooseEntityVCM_ID(const std::string& method, uci::base::accessorType::AccessorType type) {
  elementSet_Accessor.reset();
  entityElementSetID_Accessor.reset();
  kinematicVector_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::entityOrbitalVCM_ID_Type : type};
  if ((!entityVCM_ID_Accessor) || (entityVCM_ID_Accessor->getAccessorType() != requestedType)) {
    entityVCM_ID_Accessor = EntityOrbitalVCM_ID_Type::create(type);
    if (!entityVCM_ID_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *entityVCM_ID_Accessor;
}

uci::type::EntityOrbitalVCM_ID_Type& EntityEphemerisBasisChoiceType::chooseEntityVCM_ID(uci::base::accessorType::AccessorType type) {
  return chooseEntityVCM_ID("chooseEntityVCM_ID", type);
}

std::unique_ptr<EntityEphemerisBasisChoiceType> EntityEphemerisBasisChoiceType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::entityEphemerisBasisChoiceType : type};
  return (requestedType == uci::type::accessorType::entityEphemerisBasisChoiceType) ? boost::make_unique<EntityEphemerisBasisChoiceType>() : nullptr;
}

/**  */
namespace EntityEphemerisBasisChoiceType_Names {

constexpr const char* Extern_Type_Name{"EntityEphemerisBasisChoiceType"};
constexpr const char* ElementSet_Name{"ElementSet"};
constexpr const char* EntityElementSetID_Name{"EntityElementSetID"};
constexpr const char* KinematicVector_Name{"KinematicVector"};
constexpr const char* EntityVCM_ID_Name{"EntityVCM_ID"};

} // namespace EntityEphemerisBasisChoiceType_Names

void EntityEphemerisBasisChoiceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::EntityEphemerisBasisChoiceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = EntityEphemerisBasisChoiceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + EntityEphemerisBasisChoiceType_Names::ElementSet_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.chooseElementSet(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityEphemerisBasisChoiceType_Names::EntityElementSetID_Name) {
      EntityOrbitalElementSetID_Type::deserialize(valueType.second, accessor.chooseEntityElementSetID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityEphemerisBasisChoiceType_Names::KinematicVector_Name) {
      OrbitalKinematicsStandardFrameChoiceType::deserialize(valueType.second, accessor.chooseKinematicVector(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + EntityEphemerisBasisChoiceType_Names::EntityVCM_ID_Name) {
      EntityOrbitalVCM_ID_Type::deserialize(valueType.second, accessor.chooseEntityVCM_ID(), nodeName, nsPrefix);
    }
  }
}

std::string EntityEphemerisBasisChoiceType::serialize(const uci::type::EntityEphemerisBasisChoiceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? EntityEphemerisBasisChoiceType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, EntityEphemerisBasisChoiceType_Names::Extern_Type_Name);
  }
  if (accessor.isElementSet()) {
    TLE_BaseType::serialize(accessor.getElementSet(), node, EntityEphemerisBasisChoiceType_Names::ElementSet_Name);
  } else if (accessor.isEntityElementSetID()) {
    EntityOrbitalElementSetID_Type::serialize(accessor.getEntityElementSetID(), node, EntityEphemerisBasisChoiceType_Names::EntityElementSetID_Name);
  } else if (accessor.isKinematicVector()) {
    OrbitalKinematicsStandardFrameChoiceType::serialize(accessor.getKinematicVector(), node, EntityEphemerisBasisChoiceType_Names::KinematicVector_Name);
  } else if (accessor.isEntityVCM_ID()) {
    EntityOrbitalVCM_ID_Type::serialize(accessor.getEntityVCM_ID(), node, EntityEphemerisBasisChoiceType_Names::EntityVCM_ID_Name);
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

uci::type::EntityEphemerisBasisChoiceType& EntityEphemerisBasisChoiceType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::EntityEphemerisBasisChoiceType>().release());
}

uci::type::EntityEphemerisBasisChoiceType& EntityEphemerisBasisChoiceType::create(const uci::type::EntityEphemerisBasisChoiceType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::EntityEphemerisBasisChoiceType> newAccessor{boost::make_unique<asb_uci::type::EntityEphemerisBasisChoiceType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void EntityEphemerisBasisChoiceType::destroy(uci::type::EntityEphemerisBasisChoiceType& accessor) {
  delete dynamic_cast<asb_uci::type::EntityEphemerisBasisChoiceType*>(&accessor);
}

} // namespace type

} // namespace uci

