/** @file COE_OrientationType.cpp
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

#include "../../../include/asb_uci/type/COE_OrientationType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/COE_EquatorialOrientationType.h"
#include "../../../include/asb_uci/type/COE_NonEquatorialOrientationType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/COE_EquatorialOrientationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/COE_NonEquatorialOrientationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/COE_OrientationType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

COE_OrientationType::COE_OrientationType() = default;

COE_OrientationType::~COE_OrientationType() = default;

void COE_OrientationType::copy(const uci::type::COE_OrientationType& accessor) {
  copyImpl(accessor, false);
}

void COE_OrientationType::copyImpl(const uci::type::COE_OrientationType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const COE_OrientationType&>(accessor);
    if (accessorImpl.nonEquatorialOrbit_Accessor) {
      setNonEquatorialOrbit(*(accessorImpl.nonEquatorialOrbit_Accessor));
    } else {
      nonEquatorialOrbit_Accessor.reset();
    }
    if (accessorImpl.equatorialOrbit_Accessor) {
      setEquatorialOrbit(*(accessorImpl.equatorialOrbit_Accessor));
    } else {
      equatorialOrbit_Accessor.reset();
    }
  }
}

void COE_OrientationType::reset() noexcept {
  nonEquatorialOrbit_Accessor.reset();
  equatorialOrbit_Accessor.reset();
}

uci::type::COE_OrientationType::COE_OrientationTypeChoice COE_OrientationType::getCOE_OrientationTypeChoiceOrdinal() const noexcept {
  if (nonEquatorialOrbit_Accessor) {
    return COE_ORIENTATIONTYPE_CHOICE_NONEQUATORIALORBIT;
  }
  if (equatorialOrbit_Accessor) {
    return COE_ORIENTATIONTYPE_CHOICE_EQUATORIALORBIT;
  }
  return COE_ORIENTATIONTYPE_CHOICE_NONE;
}

uci::type::COE_OrientationType& COE_OrientationType::setCOE_OrientationTypeChoiceOrdinal(uci::type::COE_OrientationType::COE_OrientationTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case COE_ORIENTATIONTYPE_CHOICE_NONEQUATORIALORBIT:
      chooseNonEquatorialOrbit("setCOE_OrientationTypeChoiceOrdinal", type);
      break;
    case COE_ORIENTATIONTYPE_CHOICE_EQUATORIALORBIT:
      chooseEquatorialOrbit("setCOE_OrientationTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setCOE_OrientationTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::COE_NonEquatorialOrientationType& COE_OrientationType::getNonEquatorialOrbit_() const {
  if (nonEquatorialOrbit_Accessor) {
    return *nonEquatorialOrbit_Accessor;
  }
  throw uci::base::UCIException("Error in getNonEquatorialOrbit(): Unable to get NonEquatorialOrbit, field not selected");
}

const uci::type::COE_NonEquatorialOrientationType& COE_OrientationType::getNonEquatorialOrbit() const {
  return getNonEquatorialOrbit_();
}

uci::type::COE_NonEquatorialOrientationType& COE_OrientationType::getNonEquatorialOrbit() {
  return getNonEquatorialOrbit_();
}

uci::type::COE_OrientationType& COE_OrientationType::setNonEquatorialOrbit(const uci::type::COE_NonEquatorialOrientationType& accessor) {
  chooseNonEquatorialOrbit();
  if (&accessor != nonEquatorialOrbit_Accessor.get()) {
    nonEquatorialOrbit_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool COE_OrientationType::isNonEquatorialOrbit() const noexcept {
  return static_cast<bool>(nonEquatorialOrbit_Accessor);
}

uci::type::COE_NonEquatorialOrientationType& COE_OrientationType::chooseNonEquatorialOrbit(const std::string& method, uci::base::accessorType::AccessorType type) {
  equatorialOrbit_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::cOE_NonEquatorialOrientationType : type};
  if ((!nonEquatorialOrbit_Accessor) || (nonEquatorialOrbit_Accessor->getAccessorType() != requestedType)) {
    nonEquatorialOrbit_Accessor = COE_NonEquatorialOrientationType::create(type);
    if (!nonEquatorialOrbit_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *nonEquatorialOrbit_Accessor;
}

uci::type::COE_NonEquatorialOrientationType& COE_OrientationType::chooseNonEquatorialOrbit(uci::base::accessorType::AccessorType type) {
  return chooseNonEquatorialOrbit("chooseNonEquatorialOrbit", type);
}

uci::type::COE_EquatorialOrientationType& COE_OrientationType::getEquatorialOrbit_() const {
  if (equatorialOrbit_Accessor) {
    return *equatorialOrbit_Accessor;
  }
  throw uci::base::UCIException("Error in getEquatorialOrbit(): Unable to get EquatorialOrbit, field not selected");
}

const uci::type::COE_EquatorialOrientationType& COE_OrientationType::getEquatorialOrbit() const {
  return getEquatorialOrbit_();
}

uci::type::COE_EquatorialOrientationType& COE_OrientationType::getEquatorialOrbit() {
  return getEquatorialOrbit_();
}

uci::type::COE_OrientationType& COE_OrientationType::setEquatorialOrbit(const uci::type::COE_EquatorialOrientationType& accessor) {
  chooseEquatorialOrbit();
  if (&accessor != equatorialOrbit_Accessor.get()) {
    equatorialOrbit_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool COE_OrientationType::isEquatorialOrbit() const noexcept {
  return static_cast<bool>(equatorialOrbit_Accessor);
}

uci::type::COE_EquatorialOrientationType& COE_OrientationType::chooseEquatorialOrbit(const std::string& method, uci::base::accessorType::AccessorType type) {
  nonEquatorialOrbit_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::cOE_EquatorialOrientationType : type};
  if ((!equatorialOrbit_Accessor) || (equatorialOrbit_Accessor->getAccessorType() != requestedType)) {
    equatorialOrbit_Accessor = COE_EquatorialOrientationType::create(type);
    if (!equatorialOrbit_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *equatorialOrbit_Accessor;
}

uci::type::COE_EquatorialOrientationType& COE_OrientationType::chooseEquatorialOrbit(uci::base::accessorType::AccessorType type) {
  return chooseEquatorialOrbit("chooseEquatorialOrbit", type);
}

std::unique_ptr<COE_OrientationType> COE_OrientationType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::cOE_OrientationType : type};
  return (requestedType == uci::type::accessorType::cOE_OrientationType) ? boost::make_unique<COE_OrientationType>() : nullptr;
}

/**  */
namespace COE_OrientationType_Names {

constexpr const char* Extern_Type_Name{"COE_OrientationType"};
constexpr const char* NonEquatorialOrbit_Name{"NonEquatorialOrbit"};
constexpr const char* EquatorialOrbit_Name{"EquatorialOrbit"};

} // namespace COE_OrientationType_Names

void COE_OrientationType::deserialize(const boost::property_tree::ptree& propTree, uci::type::COE_OrientationType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = COE_OrientationType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + COE_OrientationType_Names::NonEquatorialOrbit_Name) {
      COE_NonEquatorialOrientationType::deserialize(valueType.second, accessor.chooseNonEquatorialOrbit(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + COE_OrientationType_Names::EquatorialOrbit_Name) {
      COE_EquatorialOrientationType::deserialize(valueType.second, accessor.chooseEquatorialOrbit(), nodeName, nsPrefix);
    }
  }
}

std::string COE_OrientationType::serialize(const uci::type::COE_OrientationType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? COE_OrientationType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, COE_OrientationType_Names::Extern_Type_Name);
  }
  if (accessor.isNonEquatorialOrbit()) {
    COE_NonEquatorialOrientationType::serialize(accessor.getNonEquatorialOrbit(), node, COE_OrientationType_Names::NonEquatorialOrbit_Name);
  } else if (accessor.isEquatorialOrbit()) {
    COE_EquatorialOrientationType::serialize(accessor.getEquatorialOrbit(), node, COE_OrientationType_Names::EquatorialOrbit_Name);
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

uci::type::COE_OrientationType& COE_OrientationType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::COE_OrientationType>().release());
}

uci::type::COE_OrientationType& COE_OrientationType::create(const uci::type::COE_OrientationType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::COE_OrientationType> newAccessor{boost::make_unique<asb_uci::type::COE_OrientationType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void COE_OrientationType::destroy(uci::type::COE_OrientationType& accessor) {
  delete dynamic_cast<asb_uci::type::COE_OrientationType*>(&accessor);
}

} // namespace type

} // namespace uci

