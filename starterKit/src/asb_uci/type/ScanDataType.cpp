/** @file ScanDataType.cpp
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

#include "../../../include/asb_uci/type/ScanDataType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/LobeType.h"
#include "../../../include/asb_uci/type/MeasurementStatusEnum.h"
#include "../../../include/asb_uci/type/RadarBeamPersistenceEnum.h"
#include "../../../include/asb_uci/type/RadarBeamTypeEnum.h"
#include "../../../include/asb_uci/type/ScanDataBaseType.h"
#include "../../../include/asb_uci/type/ScanDirectionalityEnum.h"
#include "../../../include/asb_uci/type/ScanMechanicsEnum.h"
#include "../../../include/asb_uci/type/ScanPlaneEnum.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AnglePositiveType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DateTimeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DurationType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LobeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MeasurementStatusEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RadarBeamPersistenceEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RadarBeamTypeEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ScanDataType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ScanDirectionalityEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ScanMechanicsEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ScanPlaneEnum.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ScanDataType::ScanDataType()
  : scanMeasurementStatus_Accessor{boost::make_unique<MeasurementStatusEnum>()},
    scanPeriod_Accessor{boost::make_unique<ScanPeriod>(0, SIZE_MAX)},
    lobe_Accessor{boost::make_unique<Lobe>(0, SIZE_MAX)} {
}

ScanDataType::~ScanDataType() = default;

void ScanDataType::copy(const uci::type::ScanDataType& accessor) {
  copyImpl(accessor, false);
}

void ScanDataType::copyImpl(const uci::type::ScanDataType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    ScanDataBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const ScanDataType&>(accessor);
    setScanTimestamp(accessorImpl.scanTimestamp_Accessor);
    setScanMeasurementStatus(*(accessorImpl.scanMeasurementStatus_Accessor));
    if (accessorImpl.scanPlane_Accessor) {
      setScanPlane(*(accessorImpl.scanPlane_Accessor));
    } else {
      scanPlane_Accessor.reset();
    }
    if (accessorImpl.hasSectorWidth()) {
      setSectorWidth(accessorImpl.getSectorWidth());
    } else {
      clearSectorWidth();
    }
    if (accessorImpl.scanDirectionality_Accessor) {
      setScanDirectionality(*(accessorImpl.scanDirectionality_Accessor));
    } else {
      scanDirectionality_Accessor.reset();
    }
    if (accessorImpl.scanMechanics_Accessor) {
      setScanMechanics(*(accessorImpl.scanMechanics_Accessor));
    } else {
      scanMechanics_Accessor.reset();
    }
    setScanPeriod(*(accessorImpl.scanPeriod_Accessor));
    if (accessorImpl.hasOOK_Present()) {
      setOOK_Present(accessorImpl.getOOK_Present());
    } else {
      clearOOK_Present();
    }
    setLobe(*(accessorImpl.lobe_Accessor));
    if (accessorImpl.typeOfBeam_Accessor) {
      setTypeOfBeam(*(accessorImpl.typeOfBeam_Accessor));
    } else {
      typeOfBeam_Accessor.reset();
    }
    if (accessorImpl.beamPersistence_Accessor) {
      setBeamPersistence(*(accessorImpl.beamPersistence_Accessor));
    } else {
      beamPersistence_Accessor.reset();
    }
  }
}

void ScanDataType::reset() noexcept {
  ScanDataBaseType::reset();
  scanTimestamp_Accessor = 0;
  scanMeasurementStatus_Accessor->reset();
  scanPlane_Accessor.reset();
  clearSectorWidth();
  scanDirectionality_Accessor.reset();
  scanMechanics_Accessor.reset();
  scanPeriod_Accessor->reset();
  clearOOK_Present();
  lobe_Accessor->reset();
  typeOfBeam_Accessor.reset();
  beamPersistence_Accessor.reset();
}

uci::type::DateTimeTypeValue ScanDataType::getScanTimestamp() const {
  return scanTimestamp_Accessor;
}

uci::type::ScanDataType& ScanDataType::setScanTimestamp(uci::type::DateTimeTypeValue value) {
  scanTimestamp_Accessor = value;
  return *this;
}


const uci::type::MeasurementStatusEnum& ScanDataType::getScanMeasurementStatus() const {
  return *scanMeasurementStatus_Accessor;
}

uci::type::MeasurementStatusEnum& ScanDataType::getScanMeasurementStatus() {
  return *scanMeasurementStatus_Accessor;
}

uci::type::ScanDataType& ScanDataType::setScanMeasurementStatus(const uci::type::MeasurementStatusEnum& accessor) {
  if (&accessor != scanMeasurementStatus_Accessor.get()) {
    scanMeasurementStatus_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ScanDataType& ScanDataType::setScanMeasurementStatus(uci::type::MeasurementStatusEnum::EnumerationItem value) {
  scanMeasurementStatus_Accessor->setValue(value);
  return *this;
}


uci::type::ScanPlaneEnum& ScanDataType::getScanPlane_() const {
  if (scanPlane_Accessor) {
    return *scanPlane_Accessor;
  }
  throw uci::base::UCIException("Error in getScanPlane(): An attempt was made to get an optional field that was not enabled, call hasScanPlane() to determine if it is safe to call getScanPlane()");
}

const uci::type::ScanPlaneEnum& ScanDataType::getScanPlane() const {
  return getScanPlane_();
}

uci::type::ScanPlaneEnum& ScanDataType::getScanPlane() {
  return getScanPlane_();
}

uci::type::ScanDataType& ScanDataType::setScanPlane(const uci::type::ScanPlaneEnum& accessor) {
  enableScanPlane();
  if (&accessor != scanPlane_Accessor.get()) {
    scanPlane_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ScanDataType& ScanDataType::setScanPlane(const uci::type::ScanPlaneEnum::EnumerationItem value) {
  enableScanPlane().setValue(value);
  return *this;
}

bool ScanDataType::hasScanPlane() const noexcept {
  return static_cast<bool>(scanPlane_Accessor);
}

uci::type::ScanPlaneEnum& ScanDataType::enableScanPlane(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::scanPlaneEnum : type};
  if ((!scanPlane_Accessor) || (scanPlane_Accessor->getAccessorType() != requestedType)) {
    scanPlane_Accessor = ScanPlaneEnum::create(requestedType);
    if (!scanPlane_Accessor) {
      throw uci::base::UCIException("Error in enableScanPlane(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *scanPlane_Accessor;
}

uci::type::ScanDataType& ScanDataType::clearScanPlane() noexcept {
  scanPlane_Accessor.reset();
  return *this;
}

uci::type::AnglePositiveTypeValue ScanDataType::getSectorWidth() const {
  if (sectorWidth_Accessor) {
    return *sectorWidth_Accessor;
  }
  throw uci::base::UCIException("Error in getSectorWidth(): An attempt was made to get an optional field that was not enabled, call hasSectorWidth() to determine if it is safe to call getSectorWidth()");
}

uci::type::ScanDataType& ScanDataType::setSectorWidth(uci::type::AnglePositiveTypeValue value) {
  sectorWidth_Accessor = value;
  return *this;
}

bool ScanDataType::hasSectorWidth() const noexcept {
  return sectorWidth_Accessor.has_value();
}

uci::type::ScanDataType& ScanDataType::clearSectorWidth() noexcept {
  sectorWidth_Accessor.reset();
  return *this;
}

uci::type::ScanDirectionalityEnum& ScanDataType::getScanDirectionality_() const {
  if (scanDirectionality_Accessor) {
    return *scanDirectionality_Accessor;
  }
  throw uci::base::UCIException("Error in getScanDirectionality(): An attempt was made to get an optional field that was not enabled, call hasScanDirectionality() to determine if it is safe to call getScanDirectionality()");
}

const uci::type::ScanDirectionalityEnum& ScanDataType::getScanDirectionality() const {
  return getScanDirectionality_();
}

uci::type::ScanDirectionalityEnum& ScanDataType::getScanDirectionality() {
  return getScanDirectionality_();
}

uci::type::ScanDataType& ScanDataType::setScanDirectionality(const uci::type::ScanDirectionalityEnum& accessor) {
  enableScanDirectionality();
  if (&accessor != scanDirectionality_Accessor.get()) {
    scanDirectionality_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ScanDataType& ScanDataType::setScanDirectionality(const uci::type::ScanDirectionalityEnum::EnumerationItem value) {
  enableScanDirectionality().setValue(value);
  return *this;
}

bool ScanDataType::hasScanDirectionality() const noexcept {
  return static_cast<bool>(scanDirectionality_Accessor);
}

uci::type::ScanDirectionalityEnum& ScanDataType::enableScanDirectionality(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::scanDirectionalityEnum : type};
  if ((!scanDirectionality_Accessor) || (scanDirectionality_Accessor->getAccessorType() != requestedType)) {
    scanDirectionality_Accessor = ScanDirectionalityEnum::create(requestedType);
    if (!scanDirectionality_Accessor) {
      throw uci::base::UCIException("Error in enableScanDirectionality(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *scanDirectionality_Accessor;
}

uci::type::ScanDataType& ScanDataType::clearScanDirectionality() noexcept {
  scanDirectionality_Accessor.reset();
  return *this;
}

uci::type::ScanMechanicsEnum& ScanDataType::getScanMechanics_() const {
  if (scanMechanics_Accessor) {
    return *scanMechanics_Accessor;
  }
  throw uci::base::UCIException("Error in getScanMechanics(): An attempt was made to get an optional field that was not enabled, call hasScanMechanics() to determine if it is safe to call getScanMechanics()");
}

const uci::type::ScanMechanicsEnum& ScanDataType::getScanMechanics() const {
  return getScanMechanics_();
}

uci::type::ScanMechanicsEnum& ScanDataType::getScanMechanics() {
  return getScanMechanics_();
}

uci::type::ScanDataType& ScanDataType::setScanMechanics(const uci::type::ScanMechanicsEnum& accessor) {
  enableScanMechanics();
  if (&accessor != scanMechanics_Accessor.get()) {
    scanMechanics_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ScanDataType& ScanDataType::setScanMechanics(const uci::type::ScanMechanicsEnum::EnumerationItem value) {
  enableScanMechanics().setValue(value);
  return *this;
}

bool ScanDataType::hasScanMechanics() const noexcept {
  return static_cast<bool>(scanMechanics_Accessor);
}

uci::type::ScanMechanicsEnum& ScanDataType::enableScanMechanics(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::scanMechanicsEnum : type};
  if ((!scanMechanics_Accessor) || (scanMechanics_Accessor->getAccessorType() != requestedType)) {
    scanMechanics_Accessor = ScanMechanicsEnum::create(requestedType);
    if (!scanMechanics_Accessor) {
      throw uci::base::UCIException("Error in enableScanMechanics(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *scanMechanics_Accessor;
}

uci::type::ScanDataType& ScanDataType::clearScanMechanics() noexcept {
  scanMechanics_Accessor.reset();
  return *this;
}

const uci::type::ScanDataType::ScanPeriod& ScanDataType::getScanPeriod() const {
  return *scanPeriod_Accessor;
}

uci::type::ScanDataType::ScanPeriod& ScanDataType::getScanPeriod() {
  return *scanPeriod_Accessor;
}

uci::type::ScanDataType& ScanDataType::setScanPeriod(const uci::type::ScanDataType::ScanPeriod& accessor) {
  if (&accessor != scanPeriod_Accessor.get()) {
    scanPeriod_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

xs::Boolean ScanDataType::getOOK_Present() const {
  if (oOK_Present_Accessor) {
    return *oOK_Present_Accessor;
  }
  throw uci::base::UCIException("Error in getOOK_Present(): An attempt was made to get an optional field that was not enabled, call hasOOK_Present() to determine if it is safe to call getOOK_Present()");
}

uci::type::ScanDataType& ScanDataType::setOOK_Present(xs::Boolean value) {
  oOK_Present_Accessor = value;
  return *this;
}

bool ScanDataType::hasOOK_Present() const noexcept {
  return oOK_Present_Accessor.has_value();
}

uci::type::ScanDataType& ScanDataType::clearOOK_Present() noexcept {
  oOK_Present_Accessor.reset();
  return *this;
}

const uci::type::ScanDataType::Lobe& ScanDataType::getLobe() const {
  return *lobe_Accessor;
}

uci::type::ScanDataType::Lobe& ScanDataType::getLobe() {
  return *lobe_Accessor;
}

uci::type::ScanDataType& ScanDataType::setLobe(const uci::type::ScanDataType::Lobe& accessor) {
  if (&accessor != lobe_Accessor.get()) {
    lobe_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::RadarBeamTypeEnum& ScanDataType::getTypeOfBeam_() const {
  if (typeOfBeam_Accessor) {
    return *typeOfBeam_Accessor;
  }
  throw uci::base::UCIException("Error in getTypeOfBeam(): An attempt was made to get an optional field that was not enabled, call hasTypeOfBeam() to determine if it is safe to call getTypeOfBeam()");
}

const uci::type::RadarBeamTypeEnum& ScanDataType::getTypeOfBeam() const {
  return getTypeOfBeam_();
}

uci::type::RadarBeamTypeEnum& ScanDataType::getTypeOfBeam() {
  return getTypeOfBeam_();
}

uci::type::ScanDataType& ScanDataType::setTypeOfBeam(const uci::type::RadarBeamTypeEnum& accessor) {
  enableTypeOfBeam();
  if (&accessor != typeOfBeam_Accessor.get()) {
    typeOfBeam_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ScanDataType& ScanDataType::setTypeOfBeam(const uci::type::RadarBeamTypeEnum::EnumerationItem value) {
  enableTypeOfBeam().setValue(value);
  return *this;
}

bool ScanDataType::hasTypeOfBeam() const noexcept {
  return static_cast<bool>(typeOfBeam_Accessor);
}

uci::type::RadarBeamTypeEnum& ScanDataType::enableTypeOfBeam(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::radarBeamTypeEnum : type};
  if ((!typeOfBeam_Accessor) || (typeOfBeam_Accessor->getAccessorType() != requestedType)) {
    typeOfBeam_Accessor = RadarBeamTypeEnum::create(requestedType);
    if (!typeOfBeam_Accessor) {
      throw uci::base::UCIException("Error in enableTypeOfBeam(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *typeOfBeam_Accessor;
}

uci::type::ScanDataType& ScanDataType::clearTypeOfBeam() noexcept {
  typeOfBeam_Accessor.reset();
  return *this;
}

uci::type::RadarBeamPersistenceEnum& ScanDataType::getBeamPersistence_() const {
  if (beamPersistence_Accessor) {
    return *beamPersistence_Accessor;
  }
  throw uci::base::UCIException("Error in getBeamPersistence(): An attempt was made to get an optional field that was not enabled, call hasBeamPersistence() to determine if it is safe to call getBeamPersistence()");
}

const uci::type::RadarBeamPersistenceEnum& ScanDataType::getBeamPersistence() const {
  return getBeamPersistence_();
}

uci::type::RadarBeamPersistenceEnum& ScanDataType::getBeamPersistence() {
  return getBeamPersistence_();
}

uci::type::ScanDataType& ScanDataType::setBeamPersistence(const uci::type::RadarBeamPersistenceEnum& accessor) {
  enableBeamPersistence();
  if (&accessor != beamPersistence_Accessor.get()) {
    beamPersistence_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::ScanDataType& ScanDataType::setBeamPersistence(const uci::type::RadarBeamPersistenceEnum::EnumerationItem value) {
  enableBeamPersistence().setValue(value);
  return *this;
}

bool ScanDataType::hasBeamPersistence() const noexcept {
  return static_cast<bool>(beamPersistence_Accessor);
}

uci::type::RadarBeamPersistenceEnum& ScanDataType::enableBeamPersistence(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::radarBeamPersistenceEnum : type};
  if ((!beamPersistence_Accessor) || (beamPersistence_Accessor->getAccessorType() != requestedType)) {
    beamPersistence_Accessor = RadarBeamPersistenceEnum::create(requestedType);
    if (!beamPersistence_Accessor) {
      throw uci::base::UCIException("Error in enableBeamPersistence(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *beamPersistence_Accessor;
}

uci::type::ScanDataType& ScanDataType::clearBeamPersistence() noexcept {
  beamPersistence_Accessor.reset();
  return *this;
}

std::unique_ptr<ScanDataType> ScanDataType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::scanDataType : type};
  return (requestedType == uci::type::accessorType::scanDataType) ? boost::make_unique<ScanDataType>() : nullptr;
}

/**  */
namespace ScanDataType_Names {

constexpr const char* Extern_Type_Name{"ScanDataType"};
constexpr const char* ScanTimestamp_Name{"ScanTimestamp"};
constexpr const char* ScanMeasurementStatus_Name{"ScanMeasurementStatus"};
constexpr const char* ScanPlane_Name{"ScanPlane"};
constexpr const char* SectorWidth_Name{"SectorWidth"};
constexpr const char* ScanDirectionality_Name{"ScanDirectionality"};
constexpr const char* ScanMechanics_Name{"ScanMechanics"};
constexpr const char* ScanPeriod_Name{"ScanPeriod"};
constexpr const char* OOK_Present_Name{"OOK_Present"};
constexpr const char* Lobe_Name{"Lobe"};
constexpr const char* TypeOfBeam_Name{"TypeOfBeam"};
constexpr const char* BeamPersistence_Name{"BeamPersistence"};

} // namespace ScanDataType_Names

void ScanDataType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ScanDataType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ScanDataType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ScanDataType_Names::ScanTimestamp_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setScanTimestamp(asb_uci::util::SerializationHelpers::deserializeDateTime(*value));
      }
    } else if (valueType.first == nsPrefix + ScanDataType_Names::ScanMeasurementStatus_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getScanMeasurementStatus().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ScanDataType_Names::ScanPlane_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableScanPlane().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ScanDataType_Names::SectorWidth_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSectorWidth(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ScanDataType_Names::ScanDirectionality_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableScanDirectionality().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ScanDataType_Names::ScanMechanics_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableScanMechanics().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ScanDataType_Names::ScanPeriod_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ScanDataType::ScanPeriod& boundedList = accessor.getScanPeriod();
        const uci::type::ScanDataType::ScanPeriod::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        boundedList.at(boundedListSize).setDurationValue(asb_uci::util::SerializationHelpers::deserializeDuration(*value));
      }
    } else if (valueType.first == nsPrefix + ScanDataType_Names::OOK_Present_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setOOK_Present(asb_uci::util::SerializationHelpers::deserializeBoolean(*value));
      }
    } else if (valueType.first == nsPrefix + ScanDataType_Names::Lobe_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::ScanDataType::Lobe& boundedList = accessor.getLobe();
        const uci::type::ScanDataType::Lobe::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::LobeType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + ScanDataType_Names::TypeOfBeam_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableTypeOfBeam().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + ScanDataType_Names::BeamPersistence_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.enableBeamPersistence().setValueFromName(*value);
      }
    }
  }
  ScanDataBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string ScanDataType::serialize(const uci::type::ScanDataType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ScanDataType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ScanDataType_Names::Extern_Type_Name);
  }
  ScanDataBaseType::serialize(accessor, node, "", false, false, false);
  asb_uci::util::SerializationHelpers::serializeDateTime(accessor.getScanTimestamp(), node, ScanDataType_Names::ScanTimestamp_Name);
  MeasurementStatusEnum::serialize(accessor.getScanMeasurementStatus(), node, ScanDataType_Names::ScanMeasurementStatus_Name, false);
  if (accessor.hasScanPlane()) {
    ScanPlaneEnum::serialize(accessor.getScanPlane(), node, ScanDataType_Names::ScanPlane_Name, false);
  }
  if (accessor.hasSectorWidth()) {
    asb_uci::util::SerializationHelpers::serializeDouble(accessor.getSectorWidth(), node, ScanDataType_Names::SectorWidth_Name);
  }
  if (accessor.hasScanDirectionality()) {
    ScanDirectionalityEnum::serialize(accessor.getScanDirectionality(), node, ScanDataType_Names::ScanDirectionality_Name, false);
  }
  if (accessor.hasScanMechanics()) {
    ScanMechanicsEnum::serialize(accessor.getScanMechanics(), node, ScanDataType_Names::ScanMechanics_Name, false);
  }
  {
    const uci::type::ScanDataType::ScanPeriod& boundedList = accessor.getScanPeriod();
    for (uci::type::ScanDataType::ScanPeriod::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::util::SerializationHelpers::serializeDuration(boundedList.at(i), node, ScanDataType_Names::ScanPeriod_Name);
    }
  }
  if (accessor.hasOOK_Present()) {
    asb_uci::util::SerializationHelpers::serializeBoolean(accessor.getOOK_Present(), node, ScanDataType_Names::OOK_Present_Name);
  }
  {
    const uci::type::ScanDataType::Lobe& boundedList = accessor.getLobe();
    for (uci::type::ScanDataType::Lobe::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::LobeType::serialize(boundedList.at(i), node, ScanDataType_Names::Lobe_Name);
    }
  }
  if (accessor.hasTypeOfBeam()) {
    RadarBeamTypeEnum::serialize(accessor.getTypeOfBeam(), node, ScanDataType_Names::TypeOfBeam_Name, false);
  }
  if (accessor.hasBeamPersistence()) {
    RadarBeamPersistenceEnum::serialize(accessor.getBeamPersistence(), node, ScanDataType_Names::BeamPersistence_Name, false);
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

uci::type::ScanDataType& ScanDataType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ScanDataType>().release());
}

uci::type::ScanDataType& ScanDataType::create(const uci::type::ScanDataType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ScanDataType> newAccessor{boost::make_unique<asb_uci::type::ScanDataType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ScanDataType::destroy(uci::type::ScanDataType& accessor) {
  delete dynamic_cast<asb_uci::type::ScanDataType*>(&accessor);
}

} // namespace type

} // namespace uci

