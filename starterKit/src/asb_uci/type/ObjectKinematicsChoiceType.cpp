/** @file ObjectKinematicsChoiceType.cpp
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

#include "../../../include/asb_uci/type/ObjectKinematicsChoiceType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/InertialStateType.h"
#include "../../../include/asb_uci/type/OrbitKinematicsType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/InertialStateType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ObjectKinematicsChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitKinematicsType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ObjectKinematicsChoiceType::ObjectKinematicsChoiceType() = default;

ObjectKinematicsChoiceType::~ObjectKinematicsChoiceType() = default;

void ObjectKinematicsChoiceType::copy(const uci::type::ObjectKinematicsChoiceType& accessor) {
  copyImpl(accessor, false);
}

void ObjectKinematicsChoiceType::copyImpl(const uci::type::ObjectKinematicsChoiceType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const ObjectKinematicsChoiceType&>(accessor);
    if (accessorImpl.inertialState_Accessor) {
      setInertialState(*(accessorImpl.inertialState_Accessor));
    } else {
      inertialState_Accessor.reset();
    }
    if (accessorImpl.orbitKinematics_Accessor) {
      setOrbitKinematics(*(accessorImpl.orbitKinematics_Accessor));
    } else {
      orbitKinematics_Accessor.reset();
    }
  }
}

void ObjectKinematicsChoiceType::reset() noexcept {
  inertialState_Accessor.reset();
  orbitKinematics_Accessor.reset();
}

uci::type::ObjectKinematicsChoiceType::ObjectKinematicsChoiceTypeChoice ObjectKinematicsChoiceType::getObjectKinematicsChoiceTypeChoiceOrdinal() const noexcept {
  if (inertialState_Accessor) {
    return OBJECTKINEMATICSCHOICETYPE_CHOICE_INERTIALSTATE;
  }
  if (orbitKinematics_Accessor) {
    return OBJECTKINEMATICSCHOICETYPE_CHOICE_ORBITKINEMATICS;
  }
  return OBJECTKINEMATICSCHOICETYPE_CHOICE_NONE;
}

uci::type::ObjectKinematicsChoiceType& ObjectKinematicsChoiceType::setObjectKinematicsChoiceTypeChoiceOrdinal(uci::type::ObjectKinematicsChoiceType::ObjectKinematicsChoiceTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case OBJECTKINEMATICSCHOICETYPE_CHOICE_INERTIALSTATE:
      chooseInertialState();
      break;
    case OBJECTKINEMATICSCHOICETYPE_CHOICE_ORBITKINEMATICS:
      chooseOrbitKinematics("setObjectKinematicsChoiceTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setObjectKinematicsChoiceTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::ObjectKinematicsChoiceType::InertialState& ObjectKinematicsChoiceType::getInertialState_() const {
  if (inertialState_Accessor) {
    return *inertialState_Accessor;
  }
  throw uci::base::UCIException("Error in getInertialState(): Unable to get InertialState, field not selected");
}

const uci::type::ObjectKinematicsChoiceType::InertialState& ObjectKinematicsChoiceType::getInertialState() const {
  return getInertialState_();
}

uci::type::ObjectKinematicsChoiceType::InertialState& ObjectKinematicsChoiceType::getInertialState() {
  return getInertialState_();
}

uci::type::ObjectKinematicsChoiceType& ObjectKinematicsChoiceType::setInertialState(const uci::type::ObjectKinematicsChoiceType::InertialState& accessor) {
  chooseInertialState();
  if (&accessor != inertialState_Accessor.get()) {
    inertialState_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool ObjectKinematicsChoiceType::isInertialState() const noexcept {
  return static_cast<bool>(inertialState_Accessor);
}

uci::type::ObjectKinematicsChoiceType::InertialState& ObjectKinematicsChoiceType::chooseInertialState() {
  orbitKinematics_Accessor.reset();
  if (!inertialState_Accessor) {
    inertialState_Accessor = boost::make_unique<InertialState>(1, SIZE_MAX);
  }
  return *inertialState_Accessor;
}

uci::type::OrbitKinematicsType& ObjectKinematicsChoiceType::getOrbitKinematics_() const {
  if (orbitKinematics_Accessor) {
    return *orbitKinematics_Accessor;
  }
  throw uci::base::UCIException("Error in getOrbitKinematics(): Unable to get OrbitKinematics, field not selected");
}

const uci::type::OrbitKinematicsType& ObjectKinematicsChoiceType::getOrbitKinematics() const {
  return getOrbitKinematics_();
}

uci::type::OrbitKinematicsType& ObjectKinematicsChoiceType::getOrbitKinematics() {
  return getOrbitKinematics_();
}

uci::type::ObjectKinematicsChoiceType& ObjectKinematicsChoiceType::setOrbitKinematics(const uci::type::OrbitKinematicsType& accessor) {
  chooseOrbitKinematics("setOrbitKinematics", accessor.getAccessorType());
  if (&accessor != orbitKinematics_Accessor.get()) {
    orbitKinematics_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool ObjectKinematicsChoiceType::isOrbitKinematics() const noexcept {
  return static_cast<bool>(orbitKinematics_Accessor);
}

uci::type::OrbitKinematicsType& ObjectKinematicsChoiceType::chooseOrbitKinematics(const std::string& method, uci::base::accessorType::AccessorType type) {
  inertialState_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitKinematicsType : type};
  if ((!orbitKinematics_Accessor) || (orbitKinematics_Accessor->getAccessorType() != requestedType)) {
    orbitKinematics_Accessor = OrbitKinematicsType::create(type);
    if (!orbitKinematics_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *orbitKinematics_Accessor;
}

uci::type::OrbitKinematicsType& ObjectKinematicsChoiceType::chooseOrbitKinematics(uci::base::accessorType::AccessorType type) {
  return chooseOrbitKinematics("chooseOrbitKinematics", type);
}

std::unique_ptr<ObjectKinematicsChoiceType> ObjectKinematicsChoiceType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::objectKinematicsChoiceType : type};
  return (requestedType == uci::type::accessorType::objectKinematicsChoiceType) ? boost::make_unique<ObjectKinematicsChoiceType>() : nullptr;
}

/**  */
namespace ObjectKinematicsChoiceType_Names {

constexpr const char* Extern_Type_Name{"ObjectKinematicsChoiceType"};
constexpr const char* InertialState_Name{"InertialState"};
constexpr const char* OrbitKinematics_Name{"OrbitKinematics"};

} // namespace ObjectKinematicsChoiceType_Names

void ObjectKinematicsChoiceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ObjectKinematicsChoiceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ObjectKinematicsChoiceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ObjectKinematicsChoiceType_Names::InertialState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ObjectKinematicsChoiceType::InertialState& boundedList = accessor.chooseInertialState();
        const uci::type::ObjectKinematicsChoiceType::InertialState::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::InertialStateType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ObjectKinematicsChoiceType_Names::OrbitKinematics_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.chooseOrbitKinematics(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    }
  }
}

std::string ObjectKinematicsChoiceType::serialize(const uci::type::ObjectKinematicsChoiceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ObjectKinematicsChoiceType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ObjectKinematicsChoiceType_Names::Extern_Type_Name);
  }
  if (accessor.isInertialState()) {
    {
      const uci::type::ObjectKinematicsChoiceType::InertialState& boundedList = accessor.getInertialState();
      for (uci::type::ObjectKinematicsChoiceType::InertialState::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::InertialStateType::serialize(boundedList.at(i), node, ObjectKinematicsChoiceType_Names::InertialState_Name);
      }
    }
  } else if (accessor.isOrbitKinematics()) {
    OrbitKinematicsType::serialize(accessor.getOrbitKinematics(), node, ObjectKinematicsChoiceType_Names::OrbitKinematics_Name);
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

uci::type::ObjectKinematicsChoiceType& ObjectKinematicsChoiceType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ObjectKinematicsChoiceType>().release());
}

uci::type::ObjectKinematicsChoiceType& ObjectKinematicsChoiceType::create(const uci::type::ObjectKinematicsChoiceType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ObjectKinematicsChoiceType> newAccessor{boost::make_unique<asb_uci::type::ObjectKinematicsChoiceType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ObjectKinematicsChoiceType::destroy(uci::type::ObjectKinematicsChoiceType& accessor) {
  delete dynamic_cast<asb_uci::type::ObjectKinematicsChoiceType*>(&accessor);
}

} // namespace type

} // namespace uci

