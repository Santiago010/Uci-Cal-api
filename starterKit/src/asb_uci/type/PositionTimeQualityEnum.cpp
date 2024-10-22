/** @file PositionTimeQualityEnum.cpp
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

#include "../../../../cppInterface/2.3.2/include/uci/type/PositionTimeQualityEnum.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

PositionTimeQualityEnum::ToNameTable PositionTimeQualityEnum::m_toNameTable {
  {enumNotSet, "notSet"},
  {UCI_NO_STATEMENT, "NO_STATEMENT"},
  {UCI_GREATER_THAN_10_SEC, "GREATER_THAN_10_SEC"},
  {UCI_LESS_EQUAL_10_SEC, "LESS_EQUAL_10_SEC"},
  {UCI_LESS_EQUAL_7_5_SEC, "LESS_EQUAL_7_5_SEC"},
  {UCI_LESS_EQUAL_5_SEC, "LESS_EQUAL_5_SEC"},
  {UCI_LESS_EQUAL_2_SEC, "LESS_EQUAL_2_SEC"},
  {UCI_LESS_EQUAL_1_SEC, "LESS_EQUAL_1_SEC"},
  {UCI_LESS_EQUAL_0_75_SEC, "LESS_EQUAL_0_75_SEC"},
  {UCI_LESS_EQUAL_0_50_SEC, "LESS_EQUAL_0_50_SEC"},
  {UCI_LESS_EQUAL_0_40_SEC, "LESS_EQUAL_0_40_SEC"},
  {UCI_LESS_EQUAL_0_30_SEC, "LESS_EQUAL_0_30_SEC"},
  {UCI_LESS_EQUAL_0_20_SEC, "LESS_EQUAL_0_20_SEC"},
  {UCI_LESS_EQUAL_0_10_SEC, "LESS_EQUAL_0_10_SEC"},
  {UCI_LESS_EQUAL_0_050_SEC, "LESS_EQUAL_0_050_SEC"},
  {UCI_LESS_EQUAL_0_010_SEC, "LESS_EQUAL_0_010_SEC"},
  {UCI_LESS_EQUAL_0_001_SEC, "LESS_EQUAL_0_001_SEC"},
  {enumMaxExclusive, "maxExclusive"} };

PositionTimeQualityEnum::FromNameTable PositionTimeQualityEnum::m_fromNameTable {
  {"notSet", enumNotSet},
  {"NO_STATEMENT", UCI_NO_STATEMENT},
  {"GREATER_THAN_10_SEC", UCI_GREATER_THAN_10_SEC},
  {"LESS_EQUAL_10_SEC", UCI_LESS_EQUAL_10_SEC},
  {"LESS_EQUAL_7_5_SEC", UCI_LESS_EQUAL_7_5_SEC},
  {"LESS_EQUAL_5_SEC", UCI_LESS_EQUAL_5_SEC},
  {"LESS_EQUAL_2_SEC", UCI_LESS_EQUAL_2_SEC},
  {"LESS_EQUAL_1_SEC", UCI_LESS_EQUAL_1_SEC},
  {"LESS_EQUAL_0_75_SEC", UCI_LESS_EQUAL_0_75_SEC},
  {"LESS_EQUAL_0_50_SEC", UCI_LESS_EQUAL_0_50_SEC},
  {"LESS_EQUAL_0_40_SEC", UCI_LESS_EQUAL_0_40_SEC},
  {"LESS_EQUAL_0_30_SEC", UCI_LESS_EQUAL_0_30_SEC},
  {"LESS_EQUAL_0_20_SEC", UCI_LESS_EQUAL_0_20_SEC},
  {"LESS_EQUAL_0_10_SEC", UCI_LESS_EQUAL_0_10_SEC},
  {"LESS_EQUAL_0_050_SEC", UCI_LESS_EQUAL_0_050_SEC},
  {"LESS_EQUAL_0_010_SEC", UCI_LESS_EQUAL_0_010_SEC},
  {"LESS_EQUAL_0_001_SEC", UCI_LESS_EQUAL_0_001_SEC},
  {"maxExclusive", enumMaxExclusive} };

} // namespace type

} // namespace uci

