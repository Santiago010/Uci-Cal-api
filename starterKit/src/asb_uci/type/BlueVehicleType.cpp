/** @file BlueVehicleType.cpp
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

#include "../../../include/asb_uci/type/BlueVehicleType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/IdentityType.h"
#include "../../../include/asb_uci/type/VisibleString32Type.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/BlueVehicleType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IdentityType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VisibleString32Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

BlueVehicleType::BlueVehicleType() = default;

BlueVehicleType::~BlueVehicleType() = default;

void BlueVehicleType::copy(const uci::type::BlueVehicleType& accessor) {
  copyImpl(accessor, false);
}

void BlueVehicleType::copyImpl(const uci::type::BlueVehicleType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const BlueVehicleType&>(accessor);
    if (accessorImpl.entityIdentity_Accessor) {
      setEntityIdentity(*(accessorImpl.entityIdentity_Accessor));
    } else {
      entityIdentity_Accessor.reset();
    }
    if (accessorImpl.model_Accessor) {
      setModel(*(accessorImpl.model_Accessor));
    } else {
      model_Accessor.reset();
    }
  }
}

void BlueVehicleType::reset() noexcept {
  entityIdentity_Accessor.reset();
  model_Accessor.reset();
}

uci::type::BlueVehicleType::BlueVehicleTypeChoice BlueVehicleType::getBlueVehicleTypeChoiceOrdinal() const noexcept {
  if (entityIdentity_Accessor) {
    return BLUEVEHICLETYPE_CHOICE_ENTITYIDENTITY;
  }
  if (model_Accessor) {
    return BLUEVEHICLETYPE_CHOICE_MODEL;
  }
  return BLUEVEHICLETYPE_CHOICE_NONE;
}

uci::type::BlueVehicleType& BlueVehicleType::setBlueVehicleTypeChoiceOrdinal(uci::type::BlueVehicleType::BlueVehicleTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case BLUEVEHICLETYPE_CHOICE_ENTITYIDENTITY:
      chooseEntityIdentity("setBlueVehicleTypeChoiceOrdinal", type);
      break;
    case BLUEVEHICLETYPE_CHOICE_MODEL:
      chooseModel("setBlueVehicleTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setBlueVehicleTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::IdentityType& BlueVehicleType::getEntityIdentity_() const {
  if (entityIdentity_Accessor) {
    return *entityIdentity_Accessor;
  }
  throw uci::base::UCIException("Error in getEntityIdentity(): Unable to get EntityIdentity, field not selected");
}

const uci::type::IdentityType& BlueVehicleType::getEntityIdentity() const {
  return getEntityIdentity_();
}

uci::type::IdentityType& BlueVehicleType::getEntityIdentity() {
  return getEntityIdentity_();
}

uci::type::BlueVehicleType& BlueVehicleType::setEntityIdentity(const uci::type::IdentityType& accessor) {
  chooseEntityIdentity("setEntityIdentity", accessor.getAccessorType());
  if (&accessor != entityIdentity_Accessor.get()) {
    entityIdentity_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool BlueVehicleType::isEntityIdentity() const noexcept {
  return static_cast<bool>(entityIdentity_Accessor);
}

uci::type::IdentityType& BlueVehicleType::chooseEntityIdentity(const std::string& method, uci::base::accessorType::AccessorType type) {
  model_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::identityType : type};
  if ((!entityIdentity_Accessor) || (entityIdentity_Accessor->getAccessorType() != requestedType)) {
    entityIdentity_Accessor = IdentityType::create(type);
    if (!entityIdentity_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *entityIdentity_Accessor;
}

uci::type::IdentityType& BlueVehicleType::chooseEntityIdentity(uci::base::accessorType::AccessorType type) {
  return chooseEntityIdentity("chooseEntityIdentity", type);
}

uci::type::VisibleString32Type& BlueVehicleType::getModel_() const {
  if (model_Accessor) {
    return *model_Accessor;
  }
  throw uci::base::UCIException("Error in getModel(): An attempt was made to get an optional field that was not enabled, call hasModel() to determine if it is safe to call getModel()");
}

const uci::type::VisibleString32Type& BlueVehicleType::getModel() const {
  return getModel_();
}

uci::type::VisibleString32Type& BlueVehicleType::getModel() {
  return getModel_();
}

uci::type::BlueVehicleType& BlueVehicleType::setModel(const uci::type::VisibleString32Type& value) {
  return setModel(value.c_str());
}

uci::type::BlueVehicleType& BlueVehicleType::setModel(const std::string& value) {
  return setModel(value.c_str());
}

uci::type::BlueVehicleType& BlueVehicleType::setModel(const char * value) {
  chooseModel().setStringValue(value);
  return *this;
}

bool BlueVehicleType::isModel() const noexcept {
  return static_cast<bool>(model_Accessor);
}

uci::type::VisibleString32Type& BlueVehicleType::chooseModel(const std::string& /*method*/, uci::base::accessorType::AccessorType type) {
  entityIdentity_Accessor.reset();
  if (!model_Accessor) {
    model_Accessor = VisibleString32Type::create(type);
  }
  return *model_Accessor;
}

uci::type::VisibleString32Type& BlueVehicleType::chooseModel(uci::base::accessorType::AccessorType type) {
  return chooseModel("chooseModel", type);
}

std::unique_ptr<BlueVehicleType> BlueVehicleType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::blueVehicleType : type};
  return (requestedType == uci::type::accessorType::blueVehicleType) ? boost::make_unique<BlueVehicleType>() : nullptr;
}

/**  */
namespace BlueVehicleType_Names {

constexpr const char* Extern_Type_Name{"BlueVehicleType"};
constexpr const char* EntityIdentity_Name{"EntityIdentity"};
constexpr const char* Model_Name{"Model"};

} // namespace BlueVehicleType_Names

void BlueVehicleType::deserialize(const boost::property_tree::ptree& propTree, uci::type::BlueVehicleType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = BlueVehicleType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + BlueVehicleType_Names::EntityIdentity_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.chooseEntityIdentity(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + BlueVehicleType_Names::Model_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.chooseModel().setStringValue(*value);
      }
    }
  }
}

std::string BlueVehicleType::serialize(const uci::type::BlueVehicleType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? BlueVehicleType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, BlueVehicleType_Names::Extern_Type_Name);
  }
  if (accessor.isEntityIdentity()) {
    IdentityType::serialize(accessor.getEntityIdentity(), node, BlueVehicleType_Names::EntityIdentity_Name);
  } else if (accessor.isModel()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getModel(), node, BlueVehicleType_Names::Model_Name);
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

uci::type::BlueVehicleType& BlueVehicleType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::BlueVehicleType>().release());
}

uci::type::BlueVehicleType& BlueVehicleType::create(const uci::type::BlueVehicleType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::BlueVehicleType> newAccessor{boost::make_unique<asb_uci::type::BlueVehicleType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void BlueVehicleType::destroy(uci::type::BlueVehicleType& accessor) {
  delete dynamic_cast<asb_uci::type::BlueVehicleType*>(&accessor);
}

} // namespace type

} // namespace uci

