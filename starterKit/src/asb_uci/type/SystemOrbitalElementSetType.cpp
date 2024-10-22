/** @file SystemOrbitalElementSetType.cpp
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

#include "../../../include/asb_uci/type/SystemOrbitalElementSetType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/OrbitalElementSetParametersType.h"
#include "../../../include/asb_uci/type/SystemID_Type.h"
#include "../../../include/asb_uci/type/SystemOrbitalElementSetID_Type.h"
#include "../../../include/asb_uci/type/TLE_BaseType.h"
#include "../../../include/asb_uci/util/DerivedTypesCopier.h"
#include "../../../include/asb_uci/util/DerivedTypesCreator.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/DerivedTypesSerializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitalElementSetParametersType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemOrbitalElementSetID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemOrbitalElementSetType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TLE_BaseType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SystemOrbitalElementSetType::SystemOrbitalElementSetType()
  : elementSetID_Accessor{boost::make_unique<SystemOrbitalElementSetID_Type>()},
    systemID_Accessor{boost::make_unique<SystemID_Type>()},
    parameters_Accessor{boost::make_unique<OrbitalElementSetParametersType>()},
    elementSet_Accessor{boost::make_unique<ElementSet>(1, SIZE_MAX)} {
}

SystemOrbitalElementSetType::~SystemOrbitalElementSetType() = default;

void SystemOrbitalElementSetType::copy(const uci::type::SystemOrbitalElementSetType& accessor) {
  copyImpl(accessor, false);
}

void SystemOrbitalElementSetType::copyImpl(const uci::type::SystemOrbitalElementSetType& accessor, const bool checkIfDerivation) {
  if (&accessor != this) {
    if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::systemOrbitalElementSetType)) {
      const auto& accessorImpl = dynamic_cast<const SystemOrbitalElementSetType&>(accessor);
      setElementSetID(*(accessorImpl.elementSetID_Accessor));
      setSystemID(*(accessorImpl.systemID_Accessor));
      setParameters(*(accessorImpl.parameters_Accessor));
      setElementSet(*(accessorImpl.elementSet_Accessor));
    } else {
      asb_uci::util::DerivedTypesCopier::copy(accessor, *this);
    }
  }
}

void SystemOrbitalElementSetType::reset() noexcept {
  elementSetID_Accessor->reset();
  systemID_Accessor->reset();
  parameters_Accessor->reset();
  elementSet_Accessor->reset();
}

const uci::type::SystemOrbitalElementSetID_Type& SystemOrbitalElementSetType::getElementSetID() const {
  return *elementSetID_Accessor;
}

uci::type::SystemOrbitalElementSetID_Type& SystemOrbitalElementSetType::getElementSetID() {
  return *elementSetID_Accessor;
}

uci::type::SystemOrbitalElementSetType& SystemOrbitalElementSetType::setElementSetID(const uci::type::SystemOrbitalElementSetID_Type& accessor) {
  if (&accessor != elementSetID_Accessor.get()) {
    elementSetID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SystemID_Type& SystemOrbitalElementSetType::getSystemID() const {
  return *systemID_Accessor;
}

uci::type::SystemID_Type& SystemOrbitalElementSetType::getSystemID() {
  return *systemID_Accessor;
}

uci::type::SystemOrbitalElementSetType& SystemOrbitalElementSetType::setSystemID(const uci::type::SystemID_Type& accessor) {
  if (&accessor != systemID_Accessor.get()) {
    systemID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::OrbitalElementSetParametersType& SystemOrbitalElementSetType::getParameters() const {
  return *parameters_Accessor;
}

uci::type::OrbitalElementSetParametersType& SystemOrbitalElementSetType::getParameters() {
  return *parameters_Accessor;
}

uci::type::SystemOrbitalElementSetType& SystemOrbitalElementSetType::setParameters(const uci::type::OrbitalElementSetParametersType& accessor) {
  if (&accessor != parameters_Accessor.get()) {
    parameters_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::SystemOrbitalElementSetType::ElementSet& SystemOrbitalElementSetType::getElementSet() const {
  return *elementSet_Accessor;
}

uci::type::SystemOrbitalElementSetType::ElementSet& SystemOrbitalElementSetType::getElementSet() {
  return *elementSet_Accessor;
}

uci::type::SystemOrbitalElementSetType& SystemOrbitalElementSetType::setElementSet(const uci::type::SystemOrbitalElementSetType::ElementSet& accessor) {
  if (&accessor != elementSet_Accessor.get()) {
    elementSet_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<SystemOrbitalElementSetType> SystemOrbitalElementSetType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::systemOrbitalElementSetType : type};
  return std::unique_ptr<SystemOrbitalElementSetType>(dynamic_cast<SystemOrbitalElementSetType*>(asb_uci::util::DerivedTypesCreator::create(requestedType)));
}

/**  */
namespace SystemOrbitalElementSetType_Names {

constexpr const char* Extern_Type_Name{"SystemOrbitalElementSetType"};
constexpr const char* ElementSetID_Name{"ElementSetID"};
constexpr const char* SystemID_Name{"SystemID"};
constexpr const char* Parameters_Name{"Parameters"};
constexpr const char* ElementSet_Name{"ElementSet"};

} // namespace SystemOrbitalElementSetType_Names

void SystemOrbitalElementSetType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SystemOrbitalElementSetType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SystemOrbitalElementSetType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SystemOrbitalElementSetType_Names::ElementSetID_Name) {
      SystemOrbitalElementSetID_Type::deserialize(valueType.second, accessor.getElementSetID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SystemOrbitalElementSetType_Names::SystemID_Name) {
      SystemID_Type::deserialize(valueType.second, accessor.getSystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SystemOrbitalElementSetType_Names::Parameters_Name) {
      OrbitalElementSetParametersType::deserialize(valueType.second, accessor.getParameters(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + SystemOrbitalElementSetType_Names::ElementSet_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::SystemOrbitalElementSetType::ElementSet& boundedList = accessor.getElementSet();
        const uci::type::SystemOrbitalElementSetType::ElementSet::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1, asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix));
        asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    }
  }
}

std::string SystemOrbitalElementSetType::serialize(const uci::type::SystemOrbitalElementSetType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SystemOrbitalElementSetType_Names::Extern_Type_Name : nodeName)};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::systemOrbitalElementSetType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      asb_uci::util::SerializationHelpers::addTypeAttribute(node, SystemOrbitalElementSetType_Names::Extern_Type_Name);
    }
    SystemOrbitalElementSetID_Type::serialize(accessor.getElementSetID(), node, SystemOrbitalElementSetType_Names::ElementSetID_Name);
    SystemID_Type::serialize(accessor.getSystemID(), node, SystemOrbitalElementSetType_Names::SystemID_Name);
    OrbitalElementSetParametersType::serialize(accessor.getParameters(), node, SystemOrbitalElementSetType_Names::Parameters_Name);
    {
      const uci::type::SystemOrbitalElementSetType::ElementSet& boundedList = accessor.getElementSet();
      for (uci::type::SystemOrbitalElementSetType::ElementSet::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::TLE_BaseType::serialize(boundedList.at(i), node, SystemOrbitalElementSetType_Names::ElementSet_Name);
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

uci::type::SystemOrbitalElementSetType& SystemOrbitalElementSetType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SystemOrbitalElementSetType>().release());
}

uci::type::SystemOrbitalElementSetType& SystemOrbitalElementSetType::create(const uci::type::SystemOrbitalElementSetType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SystemOrbitalElementSetType> newAccessor{boost::make_unique<asb_uci::type::SystemOrbitalElementSetType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SystemOrbitalElementSetType::destroy(uci::type::SystemOrbitalElementSetType& accessor) {
  delete dynamic_cast<asb_uci::type::SystemOrbitalElementSetType*>(&accessor);
}

} // namespace type

} // namespace uci

