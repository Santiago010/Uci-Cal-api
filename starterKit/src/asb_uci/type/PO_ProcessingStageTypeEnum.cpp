/** @file PO_ProcessingStageTypeEnum.cpp
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

#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ProcessingStageTypeEnum.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

PO_ProcessingStageTypeEnum::ToNameTable PO_ProcessingStageTypeEnum::m_toNameTable {
  {enumNotSet, "notSet"},
  {UCI_PIXEL_SCALING, "PIXEL_SCALING"},
  {UCI_HSB_COLOR_CONTROL, "HSB_COLOR_CONTROL"},
  {UCI_RGB_COLOR_CONTROL, "RGB_COLOR_CONTROL"},
  {UCI_GAMMA_CORRECTION, "GAMMA_CORRECTION"},
  {UCI_SHARPNESS, "SHARPNESS"},
  {UCI_EDGE_ENHANCEMENT, "EDGE_ENHANCEMENT"},
  {UCI_COMPOSITING, "COMPOSITING"},
  {UCI_GOOGLE_EARTH_MAPPING, "GOOGLE_EARTH_MAPPING"},
  {UCI_DTD_MAPPING, "DTD_MAPPING"},
  {UCI_ELECTRONIC_ZOOMING, "ELECTRONIC_ZOOMING"},
  {UCI_NOISE_FILTERING, "NOISE_FILTERING"},
  {UCI_SPATIAL_FILTERING, "SPATIAL_FILTERING"},
  {UCI_IMAGE_ENHANCEMENT, "IMAGE_ENHANCEMENT"},
  {UCI_OTHER, "OTHER"},
  {enumMaxExclusive, "maxExclusive"} };

PO_ProcessingStageTypeEnum::FromNameTable PO_ProcessingStageTypeEnum::m_fromNameTable {
  {"notSet", enumNotSet},
  {"PIXEL_SCALING", UCI_PIXEL_SCALING},
  {"HSB_COLOR_CONTROL", UCI_HSB_COLOR_CONTROL},
  {"RGB_COLOR_CONTROL", UCI_RGB_COLOR_CONTROL},
  {"GAMMA_CORRECTION", UCI_GAMMA_CORRECTION},
  {"SHARPNESS", UCI_SHARPNESS},
  {"EDGE_ENHANCEMENT", UCI_EDGE_ENHANCEMENT},
  {"COMPOSITING", UCI_COMPOSITING},
  {"GOOGLE_EARTH_MAPPING", UCI_GOOGLE_EARTH_MAPPING},
  {"DTD_MAPPING", UCI_DTD_MAPPING},
  {"ELECTRONIC_ZOOMING", UCI_ELECTRONIC_ZOOMING},
  {"NOISE_FILTERING", UCI_NOISE_FILTERING},
  {"SPATIAL_FILTERING", UCI_SPATIAL_FILTERING},
  {"IMAGE_ENHANCEMENT", UCI_IMAGE_ENHANCEMENT},
  {"OTHER", UCI_OTHER},
  {"maxExclusive", enumMaxExclusive} };

} // namespace type

} // namespace uci

