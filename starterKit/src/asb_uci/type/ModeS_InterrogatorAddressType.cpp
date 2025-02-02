/** @file ModeS_InterrogatorAddressType.cpp
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

#include "../../../include/asb_uci/type/ModeS_InterrogatorAddressType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/InterrogatorIdentifierType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ModeS_InterrogatorAddressType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SurveillanceIdentifierType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ModeS_InterrogatorAddressType::ModeS_InterrogatorAddressType() = default;

ModeS_InterrogatorAddressType::~ModeS_InterrogatorAddressType() = default;

void ModeS_InterrogatorAddressType::copy(const uci::type::ModeS_InterrogatorAddressType& accessor) {
  copyImpl(accessor, false);
}

void ModeS_InterrogatorAddressType::copyImpl(const uci::type::ModeS_InterrogatorAddressType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const ModeS_InterrogatorAddressType&>(accessor);
    interrogatorIdentifier_Accessor = (accessorImpl.interrogatorIdentifier_Accessor ? accessorImpl.interrogatorIdentifier_Accessor : boost::none);
    surveillanceIdentifier_Accessor = (accessorImpl.surveillanceIdentifier_Accessor ? accessorImpl.surveillanceIdentifier_Accessor : boost::none);
  }
}

void ModeS_InterrogatorAddressType::reset() noexcept {
  interrogatorIdentifier_Accessor.reset();
  surveillanceIdentifier_Accessor.reset();
}

uci::type::ModeS_InterrogatorAddressType::ModeS_InterrogatorAddressTypeChoice ModeS_InterrogatorAddressType::getModeS_InterrogatorAddressTypeChoiceOrdinal() const noexcept {
  if (interrogatorIdentifier_Accessor) {
    return MODES_INTERROGATORADDRESSTYPE_CHOICE_INTERROGATORIDENTIFIER;
  }
  if (surveillanceIdentifier_Accessor) {
    return MODES_INTERROGATORADDRESSTYPE_CHOICE_SURVEILLANCEIDENTIFIER;
  }
  return MODES_INTERROGATORADDRESSTYPE_CHOICE_NONE;
}

uci::type::ModeS_InterrogatorAddressType& ModeS_InterrogatorAddressType::setModeS_InterrogatorAddressTypeChoiceOrdinal(uci::type::ModeS_InterrogatorAddressType::ModeS_InterrogatorAddressTypeChoice ordinal, uci::base::accessorType::AccessorType /*type*/) {
  switch (ordinal) {
    case MODES_INTERROGATORADDRESSTYPE_CHOICE_INTERROGATORIDENTIFIER:
      chooseInterrogatorIdentifier();
      break;
    case MODES_INTERROGATORADDRESSTYPE_CHOICE_SURVEILLANCEIDENTIFIER:
      chooseSurveillanceIdentifier();
      break;
    default:
      throw uci::base::UCIException("Error in setModeS_InterrogatorAddressTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::InterrogatorIdentifierTypeValue ModeS_InterrogatorAddressType::getInterrogatorIdentifier() const {
  if (interrogatorIdentifier_Accessor) {
    return *interrogatorIdentifier_Accessor;
  }
  throw uci::base::UCIException("Error in getInterrogatorIdentifier(): Unable to get InterrogatorIdentifier, field not selected");
}

uci::type::ModeS_InterrogatorAddressType& ModeS_InterrogatorAddressType::setInterrogatorIdentifier(uci::type::InterrogatorIdentifierTypeValue value) {
  chooseInterrogatorIdentifier();
  interrogatorIdentifier_Accessor = value;
  return *this;
}

bool ModeS_InterrogatorAddressType::isInterrogatorIdentifier() const noexcept {
  return static_cast<bool>(interrogatorIdentifier_Accessor);
}

void ModeS_InterrogatorAddressType::chooseInterrogatorIdentifier() {
  surveillanceIdentifier_Accessor.reset();
  if (!interrogatorIdentifier_Accessor) {
    interrogatorIdentifier_Accessor = boost::optional<asb_xs::Int>();
  }
}

uci::type::SurveillanceIdentifierTypeValue ModeS_InterrogatorAddressType::getSurveillanceIdentifier() const {
  if (surveillanceIdentifier_Accessor) {
    return *surveillanceIdentifier_Accessor;
  }
  throw uci::base::UCIException("Error in getSurveillanceIdentifier(): Unable to get SurveillanceIdentifier, field not selected");
}

uci::type::ModeS_InterrogatorAddressType& ModeS_InterrogatorAddressType::setSurveillanceIdentifier(uci::type::SurveillanceIdentifierTypeValue value) {
  chooseSurveillanceIdentifier();
  surveillanceIdentifier_Accessor = value;
  return *this;
}

bool ModeS_InterrogatorAddressType::isSurveillanceIdentifier() const noexcept {
  return static_cast<bool>(surveillanceIdentifier_Accessor);
}

void ModeS_InterrogatorAddressType::chooseSurveillanceIdentifier() {
  interrogatorIdentifier_Accessor.reset();
  if (!surveillanceIdentifier_Accessor) {
    surveillanceIdentifier_Accessor = boost::optional<asb_xs::Int>();
  }
}

std::unique_ptr<ModeS_InterrogatorAddressType> ModeS_InterrogatorAddressType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::modeS_InterrogatorAddressType : type};
  return (requestedType == uci::type::accessorType::modeS_InterrogatorAddressType) ? boost::make_unique<ModeS_InterrogatorAddressType>() : nullptr;
}

/**  */
namespace ModeS_InterrogatorAddressType_Names {

constexpr const char* Extern_Type_Name{"ModeS_InterrogatorAddressType"};
constexpr const char* InterrogatorIdentifier_Name{"InterrogatorIdentifier"};
constexpr const char* SurveillanceIdentifier_Name{"SurveillanceIdentifier"};

} // namespace ModeS_InterrogatorAddressType_Names

void ModeS_InterrogatorAddressType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ModeS_InterrogatorAddressType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ModeS_InterrogatorAddressType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ModeS_InterrogatorAddressType_Names::InterrogatorIdentifier_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setInterrogatorIdentifier(asb_uci::util::SerializationHelpers::deserializeInt(*value));
      }
    } else if (valueType.first == nsPrefix + ModeS_InterrogatorAddressType_Names::SurveillanceIdentifier_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSurveillanceIdentifier(asb_uci::util::SerializationHelpers::deserializeInt(*value));
      }
    }
  }
}

std::string ModeS_InterrogatorAddressType::serialize(const uci::type::ModeS_InterrogatorAddressType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ModeS_InterrogatorAddressType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ModeS_InterrogatorAddressType_Names::Extern_Type_Name);
  }
  if (accessor.isInterrogatorIdentifier()) {
    asb_uci::util::SerializationHelpers::serializeInt(accessor.getInterrogatorIdentifier(), node, ModeS_InterrogatorAddressType_Names::InterrogatorIdentifier_Name);
  } else if (accessor.isSurveillanceIdentifier()) {
    asb_uci::util::SerializationHelpers::serializeInt(accessor.getSurveillanceIdentifier(), node, ModeS_InterrogatorAddressType_Names::SurveillanceIdentifier_Name);
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

uci::type::ModeS_InterrogatorAddressType& ModeS_InterrogatorAddressType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ModeS_InterrogatorAddressType>().release());
}

uci::type::ModeS_InterrogatorAddressType& ModeS_InterrogatorAddressType::create(const uci::type::ModeS_InterrogatorAddressType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ModeS_InterrogatorAddressType> newAccessor{boost::make_unique<asb_uci::type::ModeS_InterrogatorAddressType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ModeS_InterrogatorAddressType::destroy(uci::type::ModeS_InterrogatorAddressType& accessor) {
  delete dynamic_cast<asb_uci::type::ModeS_InterrogatorAddressType*>(&accessor);
}

} // namespace type

} // namespace uci

