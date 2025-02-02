/** @file CryptoRolloverMethodEnum.cpp
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

#include "../../../../cppInterface/2.3.2/include/uci/type/CryptoRolloverMethodEnum.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

CryptoRolloverMethodEnum::ToNameTable CryptoRolloverMethodEnum::m_toNameTable {
  {enumNotSet, "notSet"},
  {UCI_OP_CONTROLLED, "OP_CONTROLLED"},
  {UCI_WAVEFORM_CONTROLLED, "WAVEFORM_CONTROLLED"},
  {UCI_AUTO_EXPIRE, "AUTO_EXPIRE"},
  {UCI_ROLLOVER, "ROLLOVER"},
  {UCI_NEW_MISSION_LOAD, "NEW_MISSION_LOAD"},
  {enumMaxExclusive, "maxExclusive"} };

CryptoRolloverMethodEnum::FromNameTable CryptoRolloverMethodEnum::m_fromNameTable {
  {"notSet", enumNotSet},
  {"OP_CONTROLLED", UCI_OP_CONTROLLED},
  {"WAVEFORM_CONTROLLED", UCI_WAVEFORM_CONTROLLED},
  {"AUTO_EXPIRE", UCI_AUTO_EXPIRE},
  {"ROLLOVER", UCI_ROLLOVER},
  {"NEW_MISSION_LOAD", UCI_NEW_MISSION_LOAD},
  {"maxExclusive", enumMaxExclusive} };

} // namespace type

} // namespace uci

