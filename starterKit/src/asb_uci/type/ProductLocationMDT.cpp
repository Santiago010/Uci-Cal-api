/** @file ProductLocationMDT.cpp
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

#include "../../../include/asb_uci/type/ProductLocationMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ArchiveRequestType.h"
#include "../../../include/asb_uci/type/DataRecordBaseType.h"
#include "../../../include/asb_uci/type/EndpointReferenceType.h"
#include "../../../include/asb_uci/type/LocationAndStatusExpireType.h"
#include "../../../include/asb_uci/type/ProductLocationID_Type.h"
#include "../../../include/asb_uci/type/ProductMetadataID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ArchiveRequestType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EndpointReferenceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LocationAndStatusExpireType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductLocationID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductLocationMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductMetadataID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ProductLocationMDT::ProductLocationMDT()
  : productLocationID_Accessor{boost::make_unique<ProductLocationID_Type>()},
    productMetadataID_Accessor{boost::make_unique<ProductMetadataID_Type>()},
    locationAndStatus_Accessor{boost::make_unique<LocationAndStatus>(1, SIZE_MAX)},
    thumbnailNetworkLocation_Accessor{boost::make_unique<ThumbnailNetworkLocation>(0, SIZE_MAX)} {
}

ProductLocationMDT::~ProductLocationMDT() = default;

void ProductLocationMDT::copy(const uci::type::ProductLocationMDT& accessor) {
  copyImpl(accessor, false);
}

void ProductLocationMDT::copyImpl(const uci::type::ProductLocationMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    DataRecordBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const ProductLocationMDT&>(accessor);
    setProductLocationID(*(accessorImpl.productLocationID_Accessor));
    setProductMetadataID(*(accessorImpl.productMetadataID_Accessor));
    setLocationAndStatus(*(accessorImpl.locationAndStatus_Accessor));
    setThumbnailNetworkLocation(*(accessorImpl.thumbnailNetworkLocation_Accessor));
    if (accessorImpl.archiveConfiguration_Accessor) {
      setArchiveConfiguration(*(accessorImpl.archiveConfiguration_Accessor));
    } else {
      archiveConfiguration_Accessor.reset();
    }
  }
}

void ProductLocationMDT::reset() noexcept {
  DataRecordBaseType::reset();
  productLocationID_Accessor->reset();
  productMetadataID_Accessor->reset();
  locationAndStatus_Accessor->reset();
  thumbnailNetworkLocation_Accessor->reset();
  archiveConfiguration_Accessor.reset();
}

const uci::type::ProductLocationID_Type& ProductLocationMDT::getProductLocationID() const {
  return *productLocationID_Accessor;
}

uci::type::ProductLocationID_Type& ProductLocationMDT::getProductLocationID() {
  return *productLocationID_Accessor;
}

uci::type::ProductLocationMDT& ProductLocationMDT::setProductLocationID(const uci::type::ProductLocationID_Type& accessor) {
  if (&accessor != productLocationID_Accessor.get()) {
    productLocationID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ProductMetadataID_Type& ProductLocationMDT::getProductMetadataID() const {
  return *productMetadataID_Accessor;
}

uci::type::ProductMetadataID_Type& ProductLocationMDT::getProductMetadataID() {
  return *productMetadataID_Accessor;
}

uci::type::ProductLocationMDT& ProductLocationMDT::setProductMetadataID(const uci::type::ProductMetadataID_Type& accessor) {
  if (&accessor != productMetadataID_Accessor.get()) {
    productMetadataID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ProductLocationMDT::LocationAndStatus& ProductLocationMDT::getLocationAndStatus() const {
  return *locationAndStatus_Accessor;
}

uci::type::ProductLocationMDT::LocationAndStatus& ProductLocationMDT::getLocationAndStatus() {
  return *locationAndStatus_Accessor;
}

uci::type::ProductLocationMDT& ProductLocationMDT::setLocationAndStatus(const uci::type::ProductLocationMDT::LocationAndStatus& accessor) {
  if (&accessor != locationAndStatus_Accessor.get()) {
    locationAndStatus_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::ProductLocationMDT::ThumbnailNetworkLocation& ProductLocationMDT::getThumbnailNetworkLocation() const {
  return *thumbnailNetworkLocation_Accessor;
}

uci::type::ProductLocationMDT::ThumbnailNetworkLocation& ProductLocationMDT::getThumbnailNetworkLocation() {
  return *thumbnailNetworkLocation_Accessor;
}

uci::type::ProductLocationMDT& ProductLocationMDT::setThumbnailNetworkLocation(const uci::type::ProductLocationMDT::ThumbnailNetworkLocation& accessor) {
  if (&accessor != thumbnailNetworkLocation_Accessor.get()) {
    thumbnailNetworkLocation_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ArchiveRequestType& ProductLocationMDT::getArchiveConfiguration_() const {
  if (archiveConfiguration_Accessor) {
    return *archiveConfiguration_Accessor;
  }
  throw uci::base::UCIException("Error in getArchiveConfiguration(): An attempt was made to get an optional field that was not enabled, call hasArchiveConfiguration() to determine if it is safe to call getArchiveConfiguration()");
}

const uci::type::ArchiveRequestType& ProductLocationMDT::getArchiveConfiguration() const {
  return getArchiveConfiguration_();
}

uci::type::ArchiveRequestType& ProductLocationMDT::getArchiveConfiguration() {
  return getArchiveConfiguration_();
}

uci::type::ProductLocationMDT& ProductLocationMDT::setArchiveConfiguration(const uci::type::ArchiveRequestType& accessor) {
  enableArchiveConfiguration();
  if (&accessor != archiveConfiguration_Accessor.get()) {
    archiveConfiguration_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool ProductLocationMDT::hasArchiveConfiguration() const noexcept {
  return static_cast<bool>(archiveConfiguration_Accessor);
}

uci::type::ArchiveRequestType& ProductLocationMDT::enableArchiveConfiguration(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::archiveRequestType : type};
  if ((!archiveConfiguration_Accessor) || (archiveConfiguration_Accessor->getAccessorType() != requestedType)) {
    archiveConfiguration_Accessor = ArchiveRequestType::create(requestedType);
    if (!archiveConfiguration_Accessor) {
      throw uci::base::UCIException("Error in enableArchiveConfiguration(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *archiveConfiguration_Accessor;
}

uci::type::ProductLocationMDT& ProductLocationMDT::clearArchiveConfiguration() noexcept {
  archiveConfiguration_Accessor.reset();
  return *this;
}

std::unique_ptr<ProductLocationMDT> ProductLocationMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::productLocationMDT : type};
  return (requestedType == uci::type::accessorType::productLocationMDT) ? boost::make_unique<ProductLocationMDT>() : nullptr;
}

/**  */
namespace ProductLocationMDT_Names {

constexpr const char* Extern_Type_Name{"ProductLocationMDT"};
constexpr const char* ProductLocationID_Name{"ProductLocationID"};
constexpr const char* ProductMetadataID_Name{"ProductMetadataID"};
constexpr const char* LocationAndStatus_Name{"LocationAndStatus"};
constexpr const char* ThumbnailNetworkLocation_Name{"ThumbnailNetworkLocation"};
constexpr const char* ArchiveConfiguration_Name{"ArchiveConfiguration"};

} // namespace ProductLocationMDT_Names

void ProductLocationMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::ProductLocationMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ProductLocationMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ProductLocationMDT_Names::ProductLocationID_Name) {
      ProductLocationID_Type::deserialize(valueType.second, accessor.getProductLocationID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ProductLocationMDT_Names::ProductMetadataID_Name) {
      ProductMetadataID_Type::deserialize(valueType.second, accessor.getProductMetadataID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + ProductLocationMDT_Names::LocationAndStatus_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ProductLocationMDT::LocationAndStatus& boundedList = accessor.getLocationAndStatus();
        const uci::type::ProductLocationMDT::LocationAndStatus::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::LocationAndStatusExpireType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ProductLocationMDT_Names::ThumbnailNetworkLocation_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ProductLocationMDT::ThumbnailNetworkLocation& boundedList = accessor.getThumbnailNetworkLocation();
        const uci::type::ProductLocationMDT::ThumbnailNetworkLocation::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::EndpointReferenceType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ProductLocationMDT_Names::ArchiveConfiguration_Name) {
      ArchiveRequestType::deserialize(valueType.second, accessor.enableArchiveConfiguration(), nodeName, nsPrefix);
    }
  }
  DataRecordBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string ProductLocationMDT::serialize(const uci::type::ProductLocationMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ProductLocationMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ProductLocationMDT_Names::Extern_Type_Name);
  }
  DataRecordBaseType::serialize(accessor, node, "", false, false, false);
  ProductLocationID_Type::serialize(accessor.getProductLocationID(), node, ProductLocationMDT_Names::ProductLocationID_Name);
  ProductMetadataID_Type::serialize(accessor.getProductMetadataID(), node, ProductLocationMDT_Names::ProductMetadataID_Name);
  {
    const uci::type::ProductLocationMDT::LocationAndStatus& boundedList = accessor.getLocationAndStatus();
    for (uci::type::ProductLocationMDT::LocationAndStatus::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::LocationAndStatusExpireType::serialize(boundedList.at(i), node, ProductLocationMDT_Names::LocationAndStatus_Name);
    }
  }
  {
    const uci::type::ProductLocationMDT::ThumbnailNetworkLocation& boundedList = accessor.getThumbnailNetworkLocation();
    for (uci::type::ProductLocationMDT::ThumbnailNetworkLocation::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::EndpointReferenceType::serialize(boundedList.at(i), node, ProductLocationMDT_Names::ThumbnailNetworkLocation_Name);
    }
  }
  if (accessor.hasArchiveConfiguration()) {
    ArchiveRequestType::serialize(accessor.getArchiveConfiguration(), node, ProductLocationMDT_Names::ArchiveConfiguration_Name);
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

uci::type::ProductLocationMDT& ProductLocationMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ProductLocationMDT>().release());
}

uci::type::ProductLocationMDT& ProductLocationMDT::create(const uci::type::ProductLocationMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ProductLocationMDT> newAccessor{boost::make_unique<asb_uci::type::ProductLocationMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ProductLocationMDT::destroy(uci::type::ProductLocationMDT& accessor) {
  delete dynamic_cast<asb_uci::type::ProductLocationMDT*>(&accessor);
}

} // namespace type

} // namespace uci

