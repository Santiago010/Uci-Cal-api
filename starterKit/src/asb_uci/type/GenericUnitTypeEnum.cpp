/** @file GenericUnitTypeEnum.cpp
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

#include "../../../../cppInterface/2.3.2/include/uci/type/GenericUnitTypeEnum.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

GenericUnitTypeEnum::ToNameTable GenericUnitTypeEnum::m_toNameTable {
  {enumNotSet, "notSet"},
  {UCI_NO_STATEMENT, "NO_STATEMENT"},
  {UCI_LINK22_UNIT, "LINK22_UNIT"},
  {UCI_VMF_UNIT, "VMF_UNIT"},
  {UCI_SADL_UNIT, "SADL_UNIT"},
  {UCI_JREU, "JREU"},
  {UCI_EPLRS_UNIT, "EPLRS_UNIT"},
  {UCI_ATDL_UNIT, "ATDL_UNIT"},
  {UCI_JU, "JU"},
  {UCI_STDL_UNIT, "STDL_UNIT"},
  {UCI_LINK_H_UNIT, "LINK_H_UNIT"},
  {UCI_BLUE_FORCE_TRACKER, "BLUE_FORCE_TRACKER"},
  {UCI_UAV, "UAV"},
  {UCI_CURSOR_ON_TARGET, "CURSOR_ON_TARGET"},
  {enumMaxExclusive, "maxExclusive"} };

GenericUnitTypeEnum::FromNameTable GenericUnitTypeEnum::m_fromNameTable {
  {"notSet", enumNotSet},
  {"NO_STATEMENT", UCI_NO_STATEMENT},
  {"LINK22_UNIT", UCI_LINK22_UNIT},
  {"VMF_UNIT", UCI_VMF_UNIT},
  {"SADL_UNIT", UCI_SADL_UNIT},
  {"JREU", UCI_JREU},
  {"EPLRS_UNIT", UCI_EPLRS_UNIT},
  {"ATDL_UNIT", UCI_ATDL_UNIT},
  {"JU", UCI_JU},
  {"STDL_UNIT", UCI_STDL_UNIT},
  {"LINK_H_UNIT", UCI_LINK_H_UNIT},
  {"BLUE_FORCE_TRACKER", UCI_BLUE_FORCE_TRACKER},
  {"UAV", UCI_UAV},
  {"CURSOR_ON_TARGET", UCI_CURSOR_ON_TARGET},
  {"maxExclusive", enumMaxExclusive} };

} // namespace type

} // namespace uci

