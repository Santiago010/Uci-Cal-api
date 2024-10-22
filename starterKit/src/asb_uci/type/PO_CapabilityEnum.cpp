/** @file PO_CapabilityEnum.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:16 PM
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

#include "../../../../cppInterface/2.3.2/include/uci/type/PO_CapabilityEnum.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

PO_CapabilityEnum::ToNameTable PO_CapabilityEnum::m_toNameTable {
  {enumNotSet, "notSet"},
  {UCI_SPOT_IMAGE, "SPOT_IMAGE"},
  {UCI_AREA_IMAGE, "AREA_IMAGE"},
  {UCI_LINE_SWEEP, "LINE_SWEEP"},
  {UCI_FULL_MOTION_VIDEO, "FULL_MOTION_VIDEO"},
  {UCI_FOCUS_SWEEP, "FOCUS_SWEEP"},
  {UCI_SEARCH_VOLUME, "SEARCH_VOLUME"},
  {UCI_SEARCH_CUED, "SEARCH_CUED"},
  {UCI_SEARCH_ATR, "SEARCH_ATR"},
  {UCI_TRACK_SINGLE, "TRACK_SINGLE"},
  {UCI_TRACK_MULTI, "TRACK_MULTI"},
  {UCI_CALIBRATE, "CALIBRATE"},
  {UCI_SEARCH, "SEARCH"},
  {UCI_TARGET_CLASSIFICATION, "TARGET_CLASSIFICATION"},
  {UCI_TRACK, "TRACK"},
  {UCI_AUTO_CUE, "AUTO_CUE"},
  {UCI_PERSISTENT_IMAGING, "PERSISTENT_IMAGING"},
  {UCI_ANOMALY_DETECTION, "ANOMALY_DETECTION"},
  {UCI_VISUAL_MAGNITUDE_MEASUREMENT, "VISUAL_MAGNITUDE_MEASUREMENT"},
  {UCI_SOB_CORRELATION, "SOB_CORRELATION"},
  {enumMaxExclusive, "maxExclusive"} };

PO_CapabilityEnum::FromNameTable PO_CapabilityEnum::m_fromNameTable {
  {"notSet", enumNotSet},
  {"SPOT_IMAGE", UCI_SPOT_IMAGE},
  {"AREA_IMAGE", UCI_AREA_IMAGE},
  {"LINE_SWEEP", UCI_LINE_SWEEP},
  {"FULL_MOTION_VIDEO", UCI_FULL_MOTION_VIDEO},
  {"FOCUS_SWEEP", UCI_FOCUS_SWEEP},
  {"SEARCH_VOLUME", UCI_SEARCH_VOLUME},
  {"SEARCH_CUED", UCI_SEARCH_CUED},
  {"SEARCH_ATR", UCI_SEARCH_ATR},
  {"TRACK_SINGLE", UCI_TRACK_SINGLE},
  {"TRACK_MULTI", UCI_TRACK_MULTI},
  {"CALIBRATE", UCI_CALIBRATE},
  {"SEARCH", UCI_SEARCH},
  {"TARGET_CLASSIFICATION", UCI_TARGET_CLASSIFICATION},
  {"TRACK", UCI_TRACK},
  {"AUTO_CUE", UCI_AUTO_CUE},
  {"PERSISTENT_IMAGING", UCI_PERSISTENT_IMAGING},
  {"ANOMALY_DETECTION", UCI_ANOMALY_DETECTION},
  {"VISUAL_MAGNITUDE_MEASUREMENT", UCI_VISUAL_MAGNITUDE_MEASUREMENT},
  {"SOB_CORRELATION", UCI_SOB_CORRELATION},
  {"maxExclusive", enumMaxExclusive} };

} // namespace type

} // namespace uci

