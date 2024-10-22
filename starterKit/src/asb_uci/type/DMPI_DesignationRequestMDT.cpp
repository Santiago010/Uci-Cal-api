/** @file DMPI_DesignationRequestMDT.cpp
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

#include "../../../include/asb_uci/type/DMPI_DesignationRequestMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/AvailableWeaponsType.h"
#include "../../../include/asb_uci/type/PixelReferenceCoordinateType.h"
#include "../../../include/asb_uci/type/Point2D_Type.h"
#include "../../../include/asb_uci/type/ProductMetadataID_Type.h"
#include "../../../include/asb_uci/type/RecommendedWeaponsType.h"
#include "../../../include/asb_uci/type/RequestBaseType.h"
#include "../../../include/asb_uci/type/TaskID_Type.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AvailableWeaponsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DMPI_DesignationRequestMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PixelReferenceCoordinateType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Point2D_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductMetadataID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RecommendedWeaponsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TaskID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

DMPI_DesignationRequestMDT::DMPI_DesignationRequestMDT()
  : taskID_Accessor{boost::make_unique<TaskID_Type>()},
    productMetadataID_Accessor{boost::make_unique<ProductMetadataID>(0, SIZE_MAX)},
    recommendedWeapons_Accessor{boost::make_unique<RecommendedWeapons>(0, SIZE_MAX)},
    availableWeapons_Accessor{boost::make_unique<AvailableWeapons>(0, SIZE_MAX)} {
}

DMPI_DesignationRequestMDT::~DMPI_DesignationRequestMDT() = default;

void DMPI_DesignationRequestMDT::copy(const uci::type::DMPI_DesignationRequestMDT& accessor) {
  copyImpl(accessor, false);
}

void DMPI_DesignationRequestMDT::copyImpl(const uci::type::DMPI_DesignationRequestMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    RequestBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const DMPI_DesignationRequestMDT&>(accessor);
    setTaskID(*(accessorImpl.taskID_Accessor));
    setProductMetadataID(*(accessorImpl.productMetadataID_Accessor));
    setRecommendedWeapons(*(accessorImpl.recommendedWeapons_Accessor));
    setAvailableWeapons(*(accessorImpl.availableWeapons_Accessor));
    if (accessorImpl.hasRespondBy()) {
      setRespondBy(accessorImpl.getRespondBy());
    } else {
      clearRespondBy();
    }
    if (accessorImpl.proposedDMPI_Coordinates_Accessor) {
      setProposedDMPI_Coordinates(*(accessorImpl.proposedDMPI_Coordinates_Accessor));
    } else {
      proposedDMPI_Coordinates_Accessor.reset();
    }
    if (accessorImpl.referencePixelCoordinate_Accessor) {
      setReferencePixelCoordinate(*(accessorImpl.referencePixelCoordinate_Accessor));
    } else {
      referencePixelCoordinate_Accessor.reset();
    }
  }
}

void DMPI_DesignationRequestMDT::reset() noexcept {
  RequestBaseType::reset();
  taskID_Accessor->reset();
  productMetadataID_Accessor->reset();
  recommendedWeapons_Accessor->reset();
  availableWeapons_Accessor->reset();
  clearRespondBy();
  proposedDMPI_Coordinates_Accessor.reset();
  referencePixelCoordinate_Accessor.reset();
}

const uci::type::TaskID_Type& DMPI_DesignationRequestMDT::getTaskID() const {
  return *taskID_Accessor;
}

uci::type::TaskID_Type& DMPI_DesignationRequestMDT::getTaskID() {
  return *taskID_Accessor;
}

uci::type::DMPI_DesignationRequestMDT& DMPI_DesignationRequestMDT::setTaskID(const uci::type::TaskID_Type& accessor) {
  if (&accessor != taskID_Accessor.get()) {
    taskID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::DMPI_DesignationRequestMDT::ProductMetadataID& DMPI_DesignationRequestMDT::getProductMetadataID() const {
  return *productMetadataID_Accessor;
}

uci::type::DMPI_DesignationRequestMDT::ProductMetadataID& DMPI_DesignationRequestMDT::getProductMetadataID() {
  return *productMetadataID_Accessor;
}

uci::type::DMPI_DesignationRequestMDT& DMPI_DesignationRequestMDT::setProductMetadataID(const uci::type::DMPI_DesignationRequestMDT::ProductMetadataID& accessor) {
  if (&accessor != productMetadataID_Accessor.get()) {
    productMetadataID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::DMPI_DesignationRequestMDT::RecommendedWeapons& DMPI_DesignationRequestMDT::getRecommendedWeapons() const {
  return *recommendedWeapons_Accessor;
}

uci::type::DMPI_DesignationRequestMDT::RecommendedWeapons& DMPI_DesignationRequestMDT::getRecommendedWeapons() {
  return *recommendedWeapons_Accessor;
}

uci::type::DMPI_DesignationRequestMDT& DMPI_DesignationRequestMDT::setRecommendedWeapons(const uci::type::DMPI_DesignationRequestMDT::RecommendedWeapons& accessor) {
  if (&accessor != recommendedWeapons_Accessor.get()) {
    recommendedWeapons_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::DMPI_DesignationRequestMDT::AvailableWeapons& DMPI_DesignationRequestMDT::getAvailableWeapons() const {
  return *availableWeapons_Accessor;
}

uci::type::DMPI_DesignationRequestMDT::AvailableWeapons& DMPI_DesignationRequestMDT::getAvailableWeapons() {
  return *availableWeapons_Accessor;
}

uci::type::DMPI_DesignationRequestMDT& DMPI_DesignationRequestMDT::setAvailableWeapons(const uci::type::DMPI_DesignationRequestMDT::AvailableWeapons& accessor) {
  if (&accessor != availableWeapons_Accessor.get()) {
    availableWeapons_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::DateTimeTypeValue DMPI_DesignationRequestMDT::getRespondBy() const {
  if (respondBy_Accessor) {
    return *respondBy_Accessor;
  }
  throw uci::base::UCIException("Error in getRespondBy(): An attempt was made to get an optional field that was not enabled, call hasRespondBy() to determine if it is safe to call getRespondBy()");
}

uci::type::DMPI_DesignationRequestMDT& DMPI_DesignationRequestMDT::setRespondBy(uci::type::DateTimeTypeValue value) {
  respondBy_Accessor = value;
  return *this;
}

bool DMPI_DesignationRequestMDT::hasRespondBy() const noexcept {
  return respondBy_Accessor.has_value();
}

uci::type::DMPI_DesignationRequestMDT& DMPI_DesignationRequestMDT::clearRespondBy() noexcept {
  respondBy_Accessor.reset();
  return *this;
}

uci::type::Point2D_Type& DMPI_DesignationRequestMDT::getProposedDMPI_Coordinates_() const {
  if (proposedDMPI_Coordinates_Accessor) {
    return *proposedDMPI_Coordinates_Accessor;
  }
  throw uci::base::UCIException("Error in getProposedDMPI_Coordinates(): An attempt was made to get an optional field that was not enabled, call hasProposedDMPI_Coordinates() to determine if it is safe to call getProposedDMPI_Coordinates()");
}

const uci::type::Point2D_Type& DMPI_DesignationRequestMDT::getProposedDMPI_Coordinates() const {
  return getProposedDMPI_Coordinates_();
}

uci::type::Point2D_Type& DMPI_DesignationRequestMDT::getProposedDMPI_Coordinates() {
  return getProposedDMPI_Coordinates_();
}

uci::type::DMPI_DesignationRequestMDT& DMPI_DesignationRequestMDT::setProposedDMPI_Coordinates(const uci::type::Point2D_Type& accessor) {
  enableProposedDMPI_Coordinates(accessor.getAccessorType());
  if (&accessor != proposedDMPI_Coordinates_Accessor.get()) {
    proposedDMPI_Coordinates_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool DMPI_DesignationRequestMDT::hasProposedDMPI_Coordinates() const noexcept {
  return static_cast<bool>(proposedDMPI_Coordinates_Accessor);
}

uci::type::Point2D_Type& DMPI_DesignationRequestMDT::enableProposedDMPI_Coordinates(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::point2D_Type : type};
  if ((!proposedDMPI_Coordinates_Accessor) || (proposedDMPI_Coordinates_Accessor->getAccessorType() != requestedType)) {
    proposedDMPI_Coordinates_Accessor = Point2D_Type::create(requestedType);
    if (!proposedDMPI_Coordinates_Accessor) {
      throw uci::base::UCIException("Error in enableProposedDMPI_Coordinates(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *proposedDMPI_Coordinates_Accessor;
}

uci::type::DMPI_DesignationRequestMDT& DMPI_DesignationRequestMDT::clearProposedDMPI_Coordinates() noexcept {
  proposedDMPI_Coordinates_Accessor.reset();
  return *this;
}

uci::type::PixelReferenceCoordinateType& DMPI_DesignationRequestMDT::getReferencePixelCoordinate_() const {
  if (referencePixelCoordinate_Accessor) {
    return *referencePixelCoordinate_Accessor;
  }
  throw uci::base::UCIException("Error in getReferencePixelCoordinate(): An attempt was made to get an optional field that was not enabled, call hasReferencePixelCoordinate() to determine if it is safe to call getReferencePixelCoordinate()");
}

const uci::type::PixelReferenceCoordinateType& DMPI_DesignationRequestMDT::getReferencePixelCoordinate() const {
  return getReferencePixelCoordinate_();
}

uci::type::PixelReferenceCoordinateType& DMPI_DesignationRequestMDT::getReferencePixelCoordinate() {
  return getReferencePixelCoordinate_();
}

uci::type::DMPI_DesignationRequestMDT& DMPI_DesignationRequestMDT::setReferencePixelCoordinate(const uci::type::PixelReferenceCoordinateType& accessor) {
  enableReferencePixelCoordinate();
  if (&accessor != referencePixelCoordinate_Accessor.get()) {
    referencePixelCoordinate_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool DMPI_DesignationRequestMDT::hasReferencePixelCoordinate() const noexcept {
  return static_cast<bool>(referencePixelCoordinate_Accessor);
}

uci::type::PixelReferenceCoordinateType& DMPI_DesignationRequestMDT::enableReferencePixelCoordinate(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pixelReferenceCoordinateType : type};
  if ((!referencePixelCoordinate_Accessor) || (referencePixelCoordinate_Accessor->getAccessorType() != requestedType)) {
    referencePixelCoordinate_Accessor = PixelReferenceCoordinateType::create(requestedType);
    if (!referencePixelCoordinate_Accessor) {
      throw uci::base::UCIException("Error in enableReferencePixelCoordinate(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *referencePixelCoordinate_Accessor;
}

uci::type::DMPI_DesignationRequestMDT& DMPI_DesignationRequestMDT::clearReferencePixelCoordinate() noexcept {
  referencePixelCoordinate_Accessor.reset();
  return *this;
}

std::unique_ptr<DMPI_DesignationRequestMDT> DMPI_DesignationRequestMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::dMPI_DesignationRequestMDT : type};
  return (requestedType == uci::type::accessorType::dMPI_DesignationRequestMDT) ? boost::make_unique<DMPI_DesignationRequestMDT>() : nullptr;
}

/**  */
namespace DMPI_DesignationRequestMDT_Names {

constexpr const char* Extern_Type_Name{"DMPI_DesignationRequestMDT"};
constexpr const char* TaskID_Name{"TaskID"};
constexpr const char* ProductMetadataID_Name{"ProductMetadataID"};
constexpr const char* RecommendedWeapons_Name{"RecommendedWeapons"};
constexpr const char* AvailableWeapons_Name{"AvailableWeapons"};
constexpr const char* RespondBy_Name{"RespondBy"};
constexpr const char* ProposedDMPI_Coordinates_Name{"ProposedDMPI_Coordinates"};
constexpr const char* ReferencePixelCoordinate_Name{"ReferencePixelCoordinate"};

} // namespace DMPI_DesignationRequestMDT_Names

void DMPI_DesignationRequestMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::DMPI_DesignationRequestMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = DMPI_DesignationRequestMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + DMPI_DesignationRequestMDT_Names::TaskID_Name) {
      TaskID_Type::deserialize(valueType.second, accessor.getTaskID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DMPI_DesignationRequestMDT_Names::ProductMetadataID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::DMPI_DesignationRequestMDT::ProductMetadataID& boundedList = accessor.getProductMetadataID();
        const uci::type::DMPI_DesignationRequestMDT::ProductMetadataID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::ProductMetadataID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + DMPI_DesignationRequestMDT_Names::RecommendedWeapons_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::DMPI_DesignationRequestMDT::RecommendedWeapons& boundedList = accessor.getRecommendedWeapons();
        const uci::type::DMPI_DesignationRequestMDT::RecommendedWeapons::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::RecommendedWeaponsType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + DMPI_DesignationRequestMDT_Names::AvailableWeapons_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::DMPI_DesignationRequestMDT::AvailableWeapons& boundedList = accessor.getAvailableWeapons();
        const uci::type::DMPI_DesignationRequestMDT::AvailableWeapons::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::AvailableWeaponsType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + DMPI_DesignationRequestMDT_Names::RespondBy_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRespondBy(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + DMPI_DesignationRequestMDT_Names::ProposedDMPI_Coordinates_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableProposedDMPI_Coordinates(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DMPI_DesignationRequestMDT_Names::ReferencePixelCoordinate_Name) {
      PixelReferenceCoordinateType::deserialize(valueType.second, accessor.enableReferencePixelCoordinate(), nodeName, nsPrefix);
    }
  }
  RequestBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string DMPI_DesignationRequestMDT::serialize(const uci::type::DMPI_DesignationRequestMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? DMPI_DesignationRequestMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, DMPI_DesignationRequestMDT_Names::Extern_Type_Name);
  }
  RequestBaseType::serialize(accessor, node, "", false, false, false);
  TaskID_Type::serialize(accessor.getTaskID(), node, DMPI_DesignationRequestMDT_Names::TaskID_Name);
  {
    const uci::type::DMPI_DesignationRequestMDT::ProductMetadataID& boundedList = accessor.getProductMetadataID();
    for (uci::type::DMPI_DesignationRequestMDT::ProductMetadataID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::ProductMetadataID_Type::serialize(boundedList.at(i), node, DMPI_DesignationRequestMDT_Names::ProductMetadataID_Name);
    }
  }
  {
    const uci::type::DMPI_DesignationRequestMDT::RecommendedWeapons& boundedList = accessor.getRecommendedWeapons();
    for (uci::type::DMPI_DesignationRequestMDT::RecommendedWeapons::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::RecommendedWeaponsType::serialize(boundedList.at(i), node, DMPI_DesignationRequestMDT_Names::RecommendedWeapons_Name);
    }
  }
  {
    const uci::type::DMPI_DesignationRequestMDT::AvailableWeapons& boundedList = accessor.getAvailableWeapons();
    for (uci::type::DMPI_DesignationRequestMDT::AvailableWeapons::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::AvailableWeaponsType::serialize(boundedList.at(i), node, DMPI_DesignationRequestMDT_Names::AvailableWeapons_Name);
    }
  }
  if (accessor.hasRespondBy()) {
    asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getRespondBy(), node, DMPI_DesignationRequestMDT_Names::RespondBy_Name);
  }
  if (accessor.hasProposedDMPI_Coordinates()) {
    Point2D_Type::serialize(accessor.getProposedDMPI_Coordinates(), node, DMPI_DesignationRequestMDT_Names::ProposedDMPI_Coordinates_Name);
  }
  if (accessor.hasReferencePixelCoordinate()) {
    PixelReferenceCoordinateType::serialize(accessor.getReferencePixelCoordinate(), node, DMPI_DesignationRequestMDT_Names::ReferencePixelCoordinate_Name);
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

uci::type::DMPI_DesignationRequestMDT& DMPI_DesignationRequestMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::DMPI_DesignationRequestMDT>().release());
}

uci::type::DMPI_DesignationRequestMDT& DMPI_DesignationRequestMDT::create(const uci::type::DMPI_DesignationRequestMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::DMPI_DesignationRequestMDT> newAccessor{boost::make_unique<asb_uci::type::DMPI_DesignationRequestMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void DMPI_DesignationRequestMDT::destroy(uci::type::DMPI_DesignationRequestMDT& accessor) {
  delete dynamic_cast<asb_uci::type::DMPI_DesignationRequestMDT*>(&accessor);
}

} // namespace type

} // namespace uci

