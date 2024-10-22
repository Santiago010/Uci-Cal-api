/** @file NormalizationInterpolationEnum.cpp
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

#include "../../../../cppInterface/2.3.2/include/uci/type/NormalizationInterpolationEnum.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

NormalizationInterpolationEnum::ToNameTable NormalizationInterpolationEnum::m_toNameTable {
  {enumNotSet, "notSet"},
  {UCI_PIECEWISE_CONSTANT, "PIECEWISE_CONSTANT"},
  {UCI_LINEAR, "LINEAR"},
  {UCI_EXPONENTIAL, "EXPONENTIAL"},
  {UCI_LOGARITHMIC, "LOGARITHMIC"},
  {UCI_POLYNOMIAL, "POLYNOMIAL"},
  {UCI_CUBIC_SPLINE, "CUBIC_SPLINE"},
  {enumMaxExclusive, "maxExclusive"} };

NormalizationInterpolationEnum::FromNameTable NormalizationInterpolationEnum::m_fromNameTable {
  {"notSet", enumNotSet},
  {"PIECEWISE_CONSTANT", UCI_PIECEWISE_CONSTANT},
  {"LINEAR", UCI_LINEAR},
  {"EXPONENTIAL", UCI_EXPONENTIAL},
  {"LOGARITHMIC", UCI_LOGARITHMIC},
  {"POLYNOMIAL", UCI_POLYNOMIAL},
  {"CUBIC_SPLINE", UCI_CUBIC_SPLINE},
  {"maxExclusive", enumMaxExclusive} };

} // namespace type

} // namespace uci

