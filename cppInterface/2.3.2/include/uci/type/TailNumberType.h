/** @file TailNumberType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:09 PM
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

#ifndef UCI_TYPE_TAILNUMBERTYPE_H
#define UCI_TYPE_TAILNUMBERTYPE_H

#include "../../xs/type/stringXmlSchemaPrimitives.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** Indicates the vehicle's tail number. Typically used for aircraft vehicles. DoD aircraft are identified by a
  * five-digit tail number. For most USAF aircraft, the first two digits of the tail number are the fiscal year that the
  * aircraft was ordered, and the remaining digits are the last three digits of the airframe's serial number. US Civil
  * aircraft are identified by a two to six character alphanumeric registration number assigned by the ICAO or FAA.
  * International tail numbers (registrations) follow similar patterns, but may be up to 10 characters long, often
  * containing a dash separating the country code from the specific alphanumeric registration.; [Minimum length: 2]
  * [Maximum length: 10] [Pattern: "[A-Z0-9\-]{2,10}"]
  */
typedef xs::String TailNumberType;

} // namespace type
} // namespace uci

#endif // UCI_TYPE_TAILNUMBERTYPE_H

