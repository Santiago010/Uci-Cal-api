/** @file PO_CollectionConstraintsEnum.cpp
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

#include "../../../../cppInterface/2.3.2/include/uci/type/PO_CollectionConstraintsEnum.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

PO_CollectionConstraintsEnum::ToNameTable PO_CollectionConstraintsEnum::m_toNameTable {
  {enumNotSet, "notSet"},
  {UCI_MAP_ANGLE, "MAP_ANGLE"},
  {UCI_GRAZING_ANGLE, "GRAZING_ANGLE"},
  {UCI_LOOKAHEAD_ANGLE, "LOOKAHEAD_ANGLE"},
  {UCI_ELEVATION_ANGLE, "ELEVATION_ANGLE"},
  {UCI_SLANT_RANGE, "SLANT_RANGE"},
  {UCI_COLLECTION_PATTERN, "COLLECTION_PATTERN"},
  {UCI_SUN_ELEVATION, "SUN_ELEVATION"},
  {UCI_SUN_AZIMUTH, "SUN_AZIMUTH"},
  {UCI_SWEEP_SPEED, "SWEEP_SPEED"},
  {UCI_GIMBAL_ORIENTATION, "GIMBAL_ORIENTATION"},
  {enumMaxExclusive, "maxExclusive"} };

PO_CollectionConstraintsEnum::FromNameTable PO_CollectionConstraintsEnum::m_fromNameTable {
  {"notSet", enumNotSet},
  {"MAP_ANGLE", UCI_MAP_ANGLE},
  {"GRAZING_ANGLE", UCI_GRAZING_ANGLE},
  {"LOOKAHEAD_ANGLE", UCI_LOOKAHEAD_ANGLE},
  {"ELEVATION_ANGLE", UCI_ELEVATION_ANGLE},
  {"SLANT_RANGE", UCI_SLANT_RANGE},
  {"COLLECTION_PATTERN", UCI_COLLECTION_PATTERN},
  {"SUN_ELEVATION", UCI_SUN_ELEVATION},
  {"SUN_AZIMUTH", UCI_SUN_AZIMUTH},
  {"SWEEP_SPEED", UCI_SWEEP_SPEED},
  {"GIMBAL_ORIENTATION", UCI_GIMBAL_ORIENTATION},
  {"maxExclusive", enumMaxExclusive} };

} // namespace type

} // namespace uci

