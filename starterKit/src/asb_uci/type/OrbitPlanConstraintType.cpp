/** @file OrbitPlanConstraintType.cpp
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

#include "../../../include/asb_uci/type/OrbitPlanConstraintType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/OrbitPlanID_Type.h"
#include "../../../include/asb_uci/type/OrbitPlanPartsEnum.h"
#include "../../../include/asb_uci/type/PlanChangeableConstraintsEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitPlanConstraintType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitPlanID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitPlanPartsEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanChangeableConstraintsEnum.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

OrbitPlanConstraintType::OrbitPlanConstraintType()
  : changeableKinematics_Accessor{boost::make_unique<PlanChangeableConstraintsEnum>()},
    parts_Accessor{boost::make_unique<Parts>(0, 6)} {
}

OrbitPlanConstraintType::~OrbitPlanConstraintType() = default;

void OrbitPlanConstraintType::copy(const uci::type::OrbitPlanConstraintType& accessor) {
  copyImpl(accessor, false);
}

void OrbitPlanConstraintType::copyImpl(const uci::type::OrbitPlanConstraintType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const OrbitPlanConstraintType&>(accessor);
    if (accessorImpl.orbitPlanID_Accessor) {
      setOrbitPlanID(*(accessorImpl.orbitPlanID_Accessor));
    } else {
      orbitPlanID_Accessor.reset();
    }
    setChangeableKinematics(*(accessorImpl.changeableKinematics_Accessor));
    setParts(*(accessorImpl.parts_Accessor));
  }
}

void OrbitPlanConstraintType::reset() noexcept {
  orbitPlanID_Accessor.reset();
  changeableKinematics_Accessor->reset();
  parts_Accessor->reset();
}

uci::type::OrbitPlanID_Type& OrbitPlanConstraintType::getOrbitPlanID_() const {
  if (orbitPlanID_Accessor) {
    return *orbitPlanID_Accessor;
  }
  throw uci::base::UCIException("Error in getOrbitPlanID(): An attempt was made to get an optional field that was not enabled, call hasOrbitPlanID() to determine if it is safe to call getOrbitPlanID()");
}

const uci::type::OrbitPlanID_Type& OrbitPlanConstraintType::getOrbitPlanID() const {
  return getOrbitPlanID_();
}

uci::type::OrbitPlanID_Type& OrbitPlanConstraintType::getOrbitPlanID() {
  return getOrbitPlanID_();
}

uci::type::OrbitPlanConstraintType& OrbitPlanConstraintType::setOrbitPlanID(const uci::type::OrbitPlanID_Type& accessor) {
  enableOrbitPlanID();
  if (&accessor != orbitPlanID_Accessor.get()) {
    orbitPlanID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool OrbitPlanConstraintType::hasOrbitPlanID() const noexcept {
  return static_cast<bool>(orbitPlanID_Accessor);
}

uci::type::OrbitPlanID_Type& OrbitPlanConstraintType::enableOrbitPlanID(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitPlanID_Type : type};
  if ((!orbitPlanID_Accessor) || (orbitPlanID_Accessor->getAccessorType() != requestedType)) {
    orbitPlanID_Accessor = OrbitPlanID_Type::create(requestedType);
    if (!orbitPlanID_Accessor) {
      throw uci::base::UCIException("Error in enableOrbitPlanID(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *orbitPlanID_Accessor;
}

uci::type::OrbitPlanConstraintType& OrbitPlanConstraintType::clearOrbitPlanID() noexcept {
  orbitPlanID_Accessor.reset();
  return *this;
}

const uci::type::PlanChangeableConstraintsEnum& OrbitPlanConstraintType::getChangeableKinematics() const {
  return *changeableKinematics_Accessor;
}

uci::type::PlanChangeableConstraintsEnum& OrbitPlanConstraintType::getChangeableKinematics() {
  return *changeableKinematics_Accessor;
}

uci::type::OrbitPlanConstraintType& OrbitPlanConstraintType::setChangeableKinematics(const uci::type::PlanChangeableConstraintsEnum& accessor) {
  if (&accessor != changeableKinematics_Accessor.get()) {
    changeableKinematics_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::OrbitPlanConstraintType& OrbitPlanConstraintType::setChangeableKinematics(uci::type::PlanChangeableConstraintsEnum::EnumerationItem value) {
  changeableKinematics_Accessor->setValue(value);
  return *this;
}


const uci::type::OrbitPlanConstraintType::Parts& OrbitPlanConstraintType::getParts() const {
  return *parts_Accessor;
}

uci::type::OrbitPlanConstraintType::Parts& OrbitPlanConstraintType::getParts() {
  return *parts_Accessor;
}

uci::type::OrbitPlanConstraintType& OrbitPlanConstraintType::setParts(const uci::type::OrbitPlanConstraintType::Parts& accessor) {
  if (&accessor != parts_Accessor.get()) {
    parts_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<OrbitPlanConstraintType> OrbitPlanConstraintType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::orbitPlanConstraintType : type};
  return (requestedType == uci::type::accessorType::orbitPlanConstraintType) ? boost::make_unique<OrbitPlanConstraintType>() : nullptr;
}

/**  */
namespace OrbitPlanConstraintType_Names {

constexpr const char* Extern_Type_Name{"OrbitPlanConstraintType"};
constexpr const char* OrbitPlanID_Name{"OrbitPlanID"};
constexpr const char* ChangeableKinematics_Name{"ChangeableKinematics"};
constexpr const char* Parts_Name{"Parts"};

} // namespace OrbitPlanConstraintType_Names

void OrbitPlanConstraintType::deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitPlanConstraintType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = OrbitPlanConstraintType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + OrbitPlanConstraintType_Names::OrbitPlanID_Name) {
      OrbitPlanID_Type::deserialize(valueType.second, accessor.enableOrbitPlanID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + OrbitPlanConstraintType_Names::ChangeableKinematics_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getChangeableKinematics().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + OrbitPlanConstraintType_Names::Parts_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::OrbitPlanConstraintType::Parts& boundedList = accessor.getParts();
        const uci::type::OrbitPlanConstraintType::Parts::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setValueFromName(*value);
      }
    }
  }
}

std::string OrbitPlanConstraintType::serialize(const uci::type::OrbitPlanConstraintType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? OrbitPlanConstraintType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, OrbitPlanConstraintType_Names::Extern_Type_Name);
  }
  if (accessor.hasOrbitPlanID()) {
    OrbitPlanID_Type::serialize(accessor.getOrbitPlanID(), node, OrbitPlanConstraintType_Names::OrbitPlanID_Name);
  }
  PlanChangeableConstraintsEnum::serialize(accessor.getChangeableKinematics(), node, OrbitPlanConstraintType_Names::ChangeableKinematics_Name, false);
  {
    const uci::type::OrbitPlanConstraintType::Parts& boundedList = accessor.getParts();
    for (uci::type::OrbitPlanConstraintType::Parts::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      OrbitPlanPartsEnum::serialize(boundedList.at(i), node, OrbitPlanConstraintType_Names::Parts_Name, false);
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

uci::type::OrbitPlanConstraintType& OrbitPlanConstraintType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::OrbitPlanConstraintType>().release());
}

uci::type::OrbitPlanConstraintType& OrbitPlanConstraintType::create(const uci::type::OrbitPlanConstraintType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::OrbitPlanConstraintType> newAccessor{boost::make_unique<asb_uci::type::OrbitPlanConstraintType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void OrbitPlanConstraintType::destroy(uci::type::OrbitPlanConstraintType& accessor) {
  delete dynamic_cast<asb_uci::type::OrbitPlanConstraintType*>(&accessor);
}

} // namespace type

} // namespace uci

