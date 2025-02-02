/** @file NITF_PackingPlanType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:19 PM
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

#ifndef EXTXML_UCI_TYPE_NITF_PACKINGPLANTYPE_H
#define EXTXML_UCI_TYPE_NITF_PACKINGPLANTYPE_H

#include <string>

#include <boost/property_tree/ptree.hpp>

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

class NITF_PackingPlanType;

} // namespace type

} // namespace uci

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** This type is a tailored reproduction of data definitions included in NITF as described in MIL-STD-2500C and companion
  * Appendices. This data must flow from Task or Command source to recipient so that the recipient can populate the
  * resulting Products with this data to enable PED and other functions. Under most circumstances, UCI doesn't reproduce
  * other standards "in-band", in UCI messages. An exception is made in this case because to do otherwise would disrupt
  * C2 and PED. NOTE: This version of the NITF_PackingPlanType suffers from the following problems: Most elements are one
  * space longer than allowed by NITF; some elements' lengths are off by more, short or long; many TREs and elements are
  * extraneous (set by platform, not needed in UCI Task message), while other required tasking authority fields are
  * missing; and many fields are free text that could be restricted by regular expressions to meet NITF standards. The
  * new variants of the PackingPlanPET resolve these problems for MIL-STD-2500A, B, C.
  */
class NITF_PackingPlanType {
public:
  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    * @return .
    */
  static bool deserialize(const boost::property_tree::ptree& propTree, uci::type::NITF_PackingPlanType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

  /** 
    *
    * @param accessor .
    * @param propTree .
    * @param nodeName .
    * @param createNode .
    * @param addTypeAttribute .
    * @param checkIfDerivation .
    * @param topLevel .
    * @return .
    */
  static std::string serialize(const uci::type::NITF_PackingPlanType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

};

} // namespace type

} // namespace extxml_uci

#endif // EXTXML_UCI_TYPE_NITF_PACKINGPLANTYPE_H
