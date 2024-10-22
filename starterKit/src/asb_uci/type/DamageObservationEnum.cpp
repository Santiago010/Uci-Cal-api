/** @file DamageObservationEnum.cpp
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

#include "../../../../cppInterface/2.3.2/include/uci/type/DamageObservationEnum.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

DamageObservationEnum::ToNameTable DamageObservationEnum::m_toNameTable {
  {enumNotSet, "notSet"},
  {UCI_RADAR, "RADAR"},
  {UCI_SIGNALS_INTELLIGENCE, "SIGNALS_INTELLIGENCE"},
  {UCI_ELECTRO_OPTICAL, "ELECTRO_OPTICAL"},
  {UCI_INFRARED, "INFRARED"},
  {UCI_EYESIGHT, "EYESIGHT"},
  {UCI_ACOUSTIC, "ACOUSTIC"},
  {UCI_CONTRAIL, "CONTRAIL"},
  {UCI_SEISMIC_VIBRATION, "SEISMIC_VIBRATION"},
  {UCI_MAGNETIC_ANOMALY, "MAGNETIC_ANOMALY"},
  {UCI_SONAR, "SONAR"},
  {UCI_OTHER_UNSPECIFIED_DETECTION, "OTHER_UNSPECIFIED_DETECTION"},
  {enumMaxExclusive, "maxExclusive"} };

DamageObservationEnum::FromNameTable DamageObservationEnum::m_fromNameTable {
  {"notSet", enumNotSet},
  {"RADAR", UCI_RADAR},
  {"SIGNALS_INTELLIGENCE", UCI_SIGNALS_INTELLIGENCE},
  {"ELECTRO_OPTICAL", UCI_ELECTRO_OPTICAL},
  {"INFRARED", UCI_INFRARED},
  {"EYESIGHT", UCI_EYESIGHT},
  {"ACOUSTIC", UCI_ACOUSTIC},
  {"CONTRAIL", UCI_CONTRAIL},
  {"SEISMIC_VIBRATION", UCI_SEISMIC_VIBRATION},
  {"MAGNETIC_ANOMALY", UCI_MAGNETIC_ANOMALY},
  {"SONAR", UCI_SONAR},
  {"OTHER_UNSPECIFIED_DETECTION", UCI_OTHER_UNSPECIFIED_DETECTION},
  {"maxExclusive", enumMaxExclusive} };

} // namespace type

} // namespace uci

