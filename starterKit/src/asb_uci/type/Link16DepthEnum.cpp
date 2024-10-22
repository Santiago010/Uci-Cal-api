/** @file Link16DepthEnum.cpp
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

#include "../../../../cppInterface/2.3.2/include/uci/type/Link16DepthEnum.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

Link16DepthEnum::ToNameTable Link16DepthEnum::m_toNameTable {
  {enumNotSet, "notSet"},
  {UCI_NO_STATEMENT, "NO_STATEMENT"},
  {UCI_SURFACED, "SURFACED"},
  {UCI_ESTIMATED_SHALLOW, "ESTIMATED_SHALLOW"},
  {UCI_PERISCOPE_DEPTH, "PERISCOPE_DEPTH"},
  {UCI_ABOVE_FIRST_LAYER, "ABOVE_FIRST_LAYER"},
  {UCI_BELOW_FIRST_LAYER, "BELOW_FIRST_LAYER"},
  {UCI_BETWEEN_FIRST_AND_SECOND_LAYERS, "BETWEEN_FIRST_AND_SECOND_LAYERS"},
  {UCI_BETWEEN_SECOND_AND_THIRD_LAYERS, "BETWEEN_SECOND_AND_THIRD_LAYERS"},
  {UCI_BELOW_BOTTOM_LAYER, "BELOW_BOTTOM_LAYER"},
  {UCI_ESTIMATED_DEEP, "ESTIMATED_DEEP"},
  {UCI_BOTTOMED, "BOTTOMED"},
  {UCI_UNDEFINED, "UNDEFINED"},
  {UCI_UNKNOWN, "UNKNOWN"},
  {enumMaxExclusive, "maxExclusive"} };

Link16DepthEnum::FromNameTable Link16DepthEnum::m_fromNameTable {
  {"notSet", enumNotSet},
  {"NO_STATEMENT", UCI_NO_STATEMENT},
  {"SURFACED", UCI_SURFACED},
  {"ESTIMATED_SHALLOW", UCI_ESTIMATED_SHALLOW},
  {"PERISCOPE_DEPTH", UCI_PERISCOPE_DEPTH},
  {"ABOVE_FIRST_LAYER", UCI_ABOVE_FIRST_LAYER},
  {"BELOW_FIRST_LAYER", UCI_BELOW_FIRST_LAYER},
  {"BETWEEN_FIRST_AND_SECOND_LAYERS", UCI_BETWEEN_FIRST_AND_SECOND_LAYERS},
  {"BETWEEN_SECOND_AND_THIRD_LAYERS", UCI_BETWEEN_SECOND_AND_THIRD_LAYERS},
  {"BELOW_BOTTOM_LAYER", UCI_BELOW_BOTTOM_LAYER},
  {"ESTIMATED_DEEP", UCI_ESTIMATED_DEEP},
  {"BOTTOMED", UCI_BOTTOMED},
  {"UNDEFINED", UCI_UNDEFINED},
  {"UNKNOWN", UCI_UNKNOWN},
  {"maxExclusive", enumMaxExclusive} };

} // namespace type

} // namespace uci

