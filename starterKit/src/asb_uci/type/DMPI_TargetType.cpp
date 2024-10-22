/** @file DMPI_TargetType.cpp
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

#include "../../../include/asb_uci/type/DMPI_TargetType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/DMPI_LocationType.h"
#include "../../../include/asb_uci/type/IdentityType.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DMPI_LocationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DMPI_TargetType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IdentityType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

DMPI_TargetType::DMPI_TargetType() = default;

DMPI_TargetType::~DMPI_TargetType() = default;

void DMPI_TargetType::copy(const uci::type::DMPI_TargetType& accessor) {
  copyImpl(accessor, false);
}

void DMPI_TargetType::copyImpl(const uci::type::DMPI_TargetType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const DMPI_TargetType&>(accessor);
    if (accessorImpl.byLocation_Accessor) {
      setByLocation(*(accessorImpl.byLocation_Accessor));
    } else {
      byLocation_Accessor.reset();
    }
    if (accessorImpl.byIdentity_Accessor) {
      setByIdentity(*(accessorImpl.byIdentity_Accessor));
    } else {
      byIdentity_Accessor.reset();
    }
  }
}

void DMPI_TargetType::reset() noexcept {
  byLocation_Accessor.reset();
  byIdentity_Accessor.reset();
}

uci::type::DMPI_TargetType::DMPI_TargetTypeChoice DMPI_TargetType::getDMPI_TargetTypeChoiceOrdinal() const noexcept {
  if (byLocation_Accessor) {
    return DMPI_TARGETTYPE_CHOICE_BYLOCATION;
  }
  if (byIdentity_Accessor) {
    return DMPI_TARGETTYPE_CHOICE_BYIDENTITY;
  }
  return DMPI_TARGETTYPE_CHOICE_NONE;
}

uci::type::DMPI_TargetType& DMPI_TargetType::setDMPI_TargetTypeChoiceOrdinal(uci::type::DMPI_TargetType::DMPI_TargetTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case DMPI_TARGETTYPE_CHOICE_BYLOCATION:
      chooseByLocation("setDMPI_TargetTypeChoiceOrdinal", type);
      break;
    case DMPI_TARGETTYPE_CHOICE_BYIDENTITY:
      chooseByIdentity("setDMPI_TargetTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setDMPI_TargetTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::DMPI_LocationType& DMPI_TargetType::getByLocation_() const {
  if (byLocation_Accessor) {
    return *byLocation_Accessor;
  }
  throw uci::base::UCIException("Error in getByLocation(): Unable to get ByLocation, field not selected");
}

const uci::type::DMPI_LocationType& DMPI_TargetType::getByLocation() const {
  return getByLocation_();
}

uci::type::DMPI_LocationType& DMPI_TargetType::getByLocation() {
  return getByLocation_();
}

uci::type::DMPI_TargetType& DMPI_TargetType::setByLocation(const uci::type::DMPI_LocationType& accessor) {
  chooseByLocation();
  if (&accessor != byLocation_Accessor.get()) {
    byLocation_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool DMPI_TargetType::isByLocation() const noexcept {
  return static_cast<bool>(byLocation_Accessor);
}

uci::type::DMPI_LocationType& DMPI_TargetType::chooseByLocation(const std::string& method, uci::base::accessorType::AccessorType type) {
  byIdentity_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::dMPI_LocationType : type};
  if ((!byLocation_Accessor) || (byLocation_Accessor->getAccessorType() != requestedType)) {
    byLocation_Accessor = DMPI_LocationType::create(type);
    if (!byLocation_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *byLocation_Accessor;
}

uci::type::DMPI_LocationType& DMPI_TargetType::chooseByLocation(uci::base::accessorType::AccessorType type) {
  return chooseByLocation("chooseByLocation", type);
}

uci::type::IdentityType& DMPI_TargetType::getByIdentity_() const {
  if (byIdentity_Accessor) {
    return *byIdentity_Accessor;
  }
  throw uci::base::UCIException("Error in getByIdentity(): Unable to get ByIdentity, field not selected");
}

const uci::type::IdentityType& DMPI_TargetType::getByIdentity() const {
  return getByIdentity_();
}

uci::type::IdentityType& DMPI_TargetType::getByIdentity() {
  return getByIdentity_();
}

uci::type::DMPI_TargetType& DMPI_TargetType::setByIdentity(const uci::type::IdentityType& accessor) {
  chooseByIdentity("setByIdentity", accessor.getAccessorType());
  if (&accessor != byIdentity_Accessor.get()) {
    byIdentity_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool DMPI_TargetType::isByIdentity() const noexcept {
  return static_cast<bool>(byIdentity_Accessor);
}

uci::type::IdentityType& DMPI_TargetType::chooseByIdentity(const std::string& method, uci::base::accessorType::AccessorType type) {
  byLocation_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::identityType : type};
  if ((!byIdentity_Accessor) || (byIdentity_Accessor->getAccessorType() != requestedType)) {
    byIdentity_Accessor = IdentityType::create(type);
    if (!byIdentity_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *byIdentity_Accessor;
}

uci::type::IdentityType& DMPI_TargetType::chooseByIdentity(uci::base::accessorType::AccessorType type) {
  return chooseByIdentity("chooseByIdentity", type);
}

std::unique_ptr<DMPI_TargetType> DMPI_TargetType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::dMPI_TargetType : type};
  return (requestedType == uci::type::accessorType::dMPI_TargetType) ? boost::make_unique<DMPI_TargetType>() : nullptr;
}

/**  */
namespace DMPI_TargetType_Names {

constexpr const char* Extern_Type_Name{"DMPI_TargetType"};
constexpr const char* ByLocation_Name{"ByLocation"};
constexpr const char* ByIdentity_Name{"ByIdentity"};

} // namespace DMPI_TargetType_Names

void DMPI_TargetType::deserialize(const boost::property_tree::ptree& propTree, uci::type::DMPI_TargetType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = DMPI_TargetType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + DMPI_TargetType_Names::ByLocation_Name) {
      DMPI_LocationType::deserialize(valueType.second, accessor.chooseByLocation(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DMPI_TargetType_Names::ByIdentity_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.chooseByIdentity(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    }
  }
}

std::string DMPI_TargetType::serialize(const uci::type::DMPI_TargetType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? DMPI_TargetType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, DMPI_TargetType_Names::Extern_Type_Name);
  }
  if (accessor.isByLocation()) {
    DMPI_LocationType::serialize(accessor.getByLocation(), node, DMPI_TargetType_Names::ByLocation_Name);
  } else if (accessor.isByIdentity()) {
    IdentityType::serialize(accessor.getByIdentity(), node, DMPI_TargetType_Names::ByIdentity_Name);
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

uci::type::DMPI_TargetType& DMPI_TargetType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::DMPI_TargetType>().release());
}

uci::type::DMPI_TargetType& DMPI_TargetType::create(const uci::type::DMPI_TargetType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::DMPI_TargetType> newAccessor{boost::make_unique<asb_uci::type::DMPI_TargetType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void DMPI_TargetType::destroy(uci::type::DMPI_TargetType& accessor) {
  delete dynamic_cast<asb_uci::type::DMPI_TargetType*>(&accessor);
}

} // namespace type

} // namespace uci

