/** @file BeamPointingReferenceType.cpp
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

#include "../../../include/asb_uci/type/BeamPointingReferenceType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/Az_El_BeamPointingType.h"
#include "../../../include/asb_uci/type/Az_El_BeamPointingWithRangeType.h"
#include "../../../include/asb_uci/type/Point2D_Type.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Az_El_BeamPointingType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Az_El_BeamPointingWithRangeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/BeamPointingReferenceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Point2D_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

BeamPointingReferenceType::BeamPointingReferenceType() = default;

BeamPointingReferenceType::~BeamPointingReferenceType() = default;

void BeamPointingReferenceType::copy(const uci::type::BeamPointingReferenceType& accessor) {
  copyImpl(accessor, false);
}

void BeamPointingReferenceType::copyImpl(const uci::type::BeamPointingReferenceType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const BeamPointingReferenceType&>(accessor);
    if (accessorImpl.antenna_Accessor) {
      setAntenna(*(accessorImpl.antenna_Accessor));
    } else {
      antenna_Accessor.reset();
    }
    if (accessorImpl.body_Accessor) {
      setBody(*(accessorImpl.body_Accessor));
    } else {
      body_Accessor.reset();
    }
    if (accessorImpl.inertial_Accessor) {
      setInertial(*(accessorImpl.inertial_Accessor));
    } else {
      inertial_Accessor.reset();
    }
    if (accessorImpl.geodetic_Accessor) {
      setGeodetic(*(accessorImpl.geodetic_Accessor));
    } else {
      geodetic_Accessor.reset();
    }
  }
}

void BeamPointingReferenceType::reset() noexcept {
  antenna_Accessor.reset();
  body_Accessor.reset();
  inertial_Accessor.reset();
  geodetic_Accessor.reset();
}

uci::type::BeamPointingReferenceType::BeamPointingReferenceTypeChoice BeamPointingReferenceType::getBeamPointingReferenceTypeChoiceOrdinal() const noexcept {
  if (antenna_Accessor) {
    return BEAMPOINTINGREFERENCETYPE_CHOICE_ANTENNA;
  }
  if (body_Accessor) {
    return BEAMPOINTINGREFERENCETYPE_CHOICE_BODY;
  }
  if (inertial_Accessor) {
    return BEAMPOINTINGREFERENCETYPE_CHOICE_INERTIAL;
  }
  if (geodetic_Accessor) {
    return BEAMPOINTINGREFERENCETYPE_CHOICE_GEODETIC;
  }
  return BEAMPOINTINGREFERENCETYPE_CHOICE_NONE;
}

uci::type::BeamPointingReferenceType& BeamPointingReferenceType::setBeamPointingReferenceTypeChoiceOrdinal(uci::type::BeamPointingReferenceType::BeamPointingReferenceTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case BEAMPOINTINGREFERENCETYPE_CHOICE_ANTENNA:
      chooseAntenna("setBeamPointingReferenceTypeChoiceOrdinal", type);
      break;
    case BEAMPOINTINGREFERENCETYPE_CHOICE_BODY:
      chooseBody("setBeamPointingReferenceTypeChoiceOrdinal", type);
      break;
    case BEAMPOINTINGREFERENCETYPE_CHOICE_INERTIAL:
      chooseInertial("setBeamPointingReferenceTypeChoiceOrdinal", type);
      break;
    case BEAMPOINTINGREFERENCETYPE_CHOICE_GEODETIC:
      chooseGeodetic("setBeamPointingReferenceTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setBeamPointingReferenceTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::Az_El_BeamPointingType& BeamPointingReferenceType::getAntenna_() const {
  if (antenna_Accessor) {
    return *antenna_Accessor;
  }
  throw uci::base::UCIException("Error in getAntenna(): Unable to get Antenna, field not selected");
}

const uci::type::Az_El_BeamPointingType& BeamPointingReferenceType::getAntenna() const {
  return getAntenna_();
}

uci::type::Az_El_BeamPointingType& BeamPointingReferenceType::getAntenna() {
  return getAntenna_();
}

uci::type::BeamPointingReferenceType& BeamPointingReferenceType::setAntenna(const uci::type::Az_El_BeamPointingType& accessor) {
  chooseAntenna();
  if (&accessor != antenna_Accessor.get()) {
    antenna_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool BeamPointingReferenceType::isAntenna() const noexcept {
  return static_cast<bool>(antenna_Accessor);
}

uci::type::Az_El_BeamPointingType& BeamPointingReferenceType::chooseAntenna(const std::string& method, uci::base::accessorType::AccessorType type) {
  body_Accessor.reset();
  inertial_Accessor.reset();
  geodetic_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::az_El_BeamPointingType : type};
  if ((!antenna_Accessor) || (antenna_Accessor->getAccessorType() != requestedType)) {
    antenna_Accessor = Az_El_BeamPointingType::create(type);
    if (!antenna_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *antenna_Accessor;
}

uci::type::Az_El_BeamPointingType& BeamPointingReferenceType::chooseAntenna(uci::base::accessorType::AccessorType type) {
  return chooseAntenna("chooseAntenna", type);
}

uci::type::Az_El_BeamPointingType& BeamPointingReferenceType::getBody_() const {
  if (body_Accessor) {
    return *body_Accessor;
  }
  throw uci::base::UCIException("Error in getBody(): Unable to get Body, field not selected");
}

const uci::type::Az_El_BeamPointingType& BeamPointingReferenceType::getBody() const {
  return getBody_();
}

uci::type::Az_El_BeamPointingType& BeamPointingReferenceType::getBody() {
  return getBody_();
}

uci::type::BeamPointingReferenceType& BeamPointingReferenceType::setBody(const uci::type::Az_El_BeamPointingType& accessor) {
  chooseBody();
  if (&accessor != body_Accessor.get()) {
    body_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool BeamPointingReferenceType::isBody() const noexcept {
  return static_cast<bool>(body_Accessor);
}

uci::type::Az_El_BeamPointingType& BeamPointingReferenceType::chooseBody(const std::string& method, uci::base::accessorType::AccessorType type) {
  antenna_Accessor.reset();
  inertial_Accessor.reset();
  geodetic_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::az_El_BeamPointingType : type};
  if ((!body_Accessor) || (body_Accessor->getAccessorType() != requestedType)) {
    body_Accessor = Az_El_BeamPointingType::create(type);
    if (!body_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *body_Accessor;
}

uci::type::Az_El_BeamPointingType& BeamPointingReferenceType::chooseBody(uci::base::accessorType::AccessorType type) {
  return chooseBody("chooseBody", type);
}

uci::type::Az_El_BeamPointingWithRangeType& BeamPointingReferenceType::getInertial_() const {
  if (inertial_Accessor) {
    return *inertial_Accessor;
  }
  throw uci::base::UCIException("Error in getInertial(): Unable to get Inertial, field not selected");
}

const uci::type::Az_El_BeamPointingWithRangeType& BeamPointingReferenceType::getInertial() const {
  return getInertial_();
}

uci::type::Az_El_BeamPointingWithRangeType& BeamPointingReferenceType::getInertial() {
  return getInertial_();
}

uci::type::BeamPointingReferenceType& BeamPointingReferenceType::setInertial(const uci::type::Az_El_BeamPointingWithRangeType& accessor) {
  chooseInertial();
  if (&accessor != inertial_Accessor.get()) {
    inertial_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool BeamPointingReferenceType::isInertial() const noexcept {
  return static_cast<bool>(inertial_Accessor);
}

uci::type::Az_El_BeamPointingWithRangeType& BeamPointingReferenceType::chooseInertial(const std::string& method, uci::base::accessorType::AccessorType type) {
  antenna_Accessor.reset();
  body_Accessor.reset();
  geodetic_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::az_El_BeamPointingWithRangeType : type};
  if ((!inertial_Accessor) || (inertial_Accessor->getAccessorType() != requestedType)) {
    inertial_Accessor = Az_El_BeamPointingWithRangeType::create(type);
    if (!inertial_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *inertial_Accessor;
}

uci::type::Az_El_BeamPointingWithRangeType& BeamPointingReferenceType::chooseInertial(uci::base::accessorType::AccessorType type) {
  return chooseInertial("chooseInertial", type);
}

uci::type::Point2D_Type& BeamPointingReferenceType::getGeodetic_() const {
  if (geodetic_Accessor) {
    return *geodetic_Accessor;
  }
  throw uci::base::UCIException("Error in getGeodetic(): Unable to get Geodetic, field not selected");
}

const uci::type::Point2D_Type& BeamPointingReferenceType::getGeodetic() const {
  return getGeodetic_();
}

uci::type::Point2D_Type& BeamPointingReferenceType::getGeodetic() {
  return getGeodetic_();
}

uci::type::BeamPointingReferenceType& BeamPointingReferenceType::setGeodetic(const uci::type::Point2D_Type& accessor) {
  chooseGeodetic("setGeodetic", accessor.getAccessorType());
  if (&accessor != geodetic_Accessor.get()) {
    geodetic_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool BeamPointingReferenceType::isGeodetic() const noexcept {
  return static_cast<bool>(geodetic_Accessor);
}

uci::type::Point2D_Type& BeamPointingReferenceType::chooseGeodetic(const std::string& method, uci::base::accessorType::AccessorType type) {
  antenna_Accessor.reset();
  body_Accessor.reset();
  inertial_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::point2D_Type : type};
  if ((!geodetic_Accessor) || (geodetic_Accessor->getAccessorType() != requestedType)) {
    geodetic_Accessor = Point2D_Type::create(type);
    if (!geodetic_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *geodetic_Accessor;
}

uci::type::Point2D_Type& BeamPointingReferenceType::chooseGeodetic(uci::base::accessorType::AccessorType type) {
  return chooseGeodetic("chooseGeodetic", type);
}

std::unique_ptr<BeamPointingReferenceType> BeamPointingReferenceType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::beamPointingReferenceType : type};
  return (requestedType == uci::type::accessorType::beamPointingReferenceType) ? boost::make_unique<BeamPointingReferenceType>() : nullptr;
}

/**  */
namespace BeamPointingReferenceType_Names {

constexpr const char* Extern_Type_Name{"BeamPointingReferenceType"};
constexpr const char* Antenna_Name{"Antenna"};
constexpr const char* Body_Name{"Body"};
constexpr const char* Inertial_Name{"Inertial"};
constexpr const char* Geodetic_Name{"Geodetic"};

} // namespace BeamPointingReferenceType_Names

void BeamPointingReferenceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::BeamPointingReferenceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = BeamPointingReferenceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + BeamPointingReferenceType_Names::Antenna_Name) {
      Az_El_BeamPointingType::deserialize(valueType.second, accessor.chooseAntenna(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + BeamPointingReferenceType_Names::Body_Name) {
      Az_El_BeamPointingType::deserialize(valueType.second, accessor.chooseBody(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + BeamPointingReferenceType_Names::Inertial_Name) {
      Az_El_BeamPointingWithRangeType::deserialize(valueType.second, accessor.chooseInertial(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + BeamPointingReferenceType_Names::Geodetic_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.chooseGeodetic(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    }
  }
}

std::string BeamPointingReferenceType::serialize(const uci::type::BeamPointingReferenceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? BeamPointingReferenceType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, BeamPointingReferenceType_Names::Extern_Type_Name);
  }
  if (accessor.isAntenna()) {
    Az_El_BeamPointingType::serialize(accessor.getAntenna(), node, BeamPointingReferenceType_Names::Antenna_Name);
  } else if (accessor.isBody()) {
    Az_El_BeamPointingType::serialize(accessor.getBody(), node, BeamPointingReferenceType_Names::Body_Name);
  } else if (accessor.isInertial()) {
    Az_El_BeamPointingWithRangeType::serialize(accessor.getInertial(), node, BeamPointingReferenceType_Names::Inertial_Name);
  } else if (accessor.isGeodetic()) {
    Point2D_Type::serialize(accessor.getGeodetic(), node, BeamPointingReferenceType_Names::Geodetic_Name);
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

uci::type::BeamPointingReferenceType& BeamPointingReferenceType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::BeamPointingReferenceType>().release());
}

uci::type::BeamPointingReferenceType& BeamPointingReferenceType::create(const uci::type::BeamPointingReferenceType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::BeamPointingReferenceType> newAccessor{boost::make_unique<asb_uci::type::BeamPointingReferenceType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void BeamPointingReferenceType::destroy(uci::type::BeamPointingReferenceType& accessor) {
  delete dynamic_cast<asb_uci::type::BeamPointingReferenceType*>(&accessor);
}

} // namespace type

} // namespace uci

