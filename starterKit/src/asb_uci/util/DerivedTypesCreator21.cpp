/** @file DerivedTypesCreator21.cpp
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

#include "asb_uci/util/DerivedTypesCreator21.h"

#include <boost/smart_ptr/make_unique.hpp>

#include "asb_uci/type/WorkingEOB_ID_Type.h"
#include "asb_uci/type/WorkingEOB_MDT.h"
#include "asb_uci/type/WorkingEOB_MT.h"
#include "asb_uci/type/WorkingEOB_RequestMDT.h"
#include "asb_uci/type/WorkingEOB_RequestMT.h"
#include "asb_uci/type/WorkingEOB_RequestStatusMDT.h"
#include "asb_uci/type/WorkingEOB_RequestStatusMT.h"
#include "asb_uci/type/WorkingSOB_ID_Type.h"
#include "asb_uci/type/WorkingSOB_MDT.h"
#include "asb_uci/type/WorkingSOB_MT.h"
#include "asb_uci/type/WorkingSOB_RequestMDT.h"
#include "asb_uci/type/WorkingSOB_RequestMT.h"
#include "asb_uci/type/WorkingSOB_RequestStatusMDT.h"
#include "asb_uci/type/WorkingSOB_RequestStatusMT.h"
#include "asb_uci/type/ZoneExternalType.h"
#include "asb_uci/type/ZoneInclusionType.h"
#include "asb_uci/type/ZoneType.h"
#include "uci/base/Accessor.h"
#include "uci/base/accessorType.h"

/**  */
namespace asb_uci {

/**  */
namespace util {

uci::base::Accessor* DerivedTypesCreator21::create(const uci::base::accessorType::AccessorType type) {
  switch (type) {
    case uci::type::accessorType::workingEOB_ID_Type:
      return boost::make_unique<asb_uci::type::WorkingEOB_ID_Type>().release();
    case uci::type::accessorType::workingEOB_MDT:
      return boost::make_unique<asb_uci::type::WorkingEOB_MDT>().release();
    case uci::type::accessorType::workingEOB_MT:
      return boost::make_unique<asb_uci::type::WorkingEOB_MT>().release();
    case uci::type::accessorType::workingEOB_RequestMDT:
      return boost::make_unique<asb_uci::type::WorkingEOB_RequestMDT>().release();
    case uci::type::accessorType::workingEOB_RequestMT:
      return boost::make_unique<asb_uci::type::WorkingEOB_RequestMT>().release();
    case uci::type::accessorType::workingEOB_RequestStatusMDT:
      return boost::make_unique<asb_uci::type::WorkingEOB_RequestStatusMDT>().release();
    case uci::type::accessorType::workingEOB_RequestStatusMT:
      return boost::make_unique<asb_uci::type::WorkingEOB_RequestStatusMT>().release();
    case uci::type::accessorType::workingSOB_ID_Type:
      return boost::make_unique<asb_uci::type::WorkingSOB_ID_Type>().release();
    case uci::type::accessorType::workingSOB_MDT:
      return boost::make_unique<asb_uci::type::WorkingSOB_MDT>().release();
    case uci::type::accessorType::workingSOB_MT:
      return boost::make_unique<asb_uci::type::WorkingSOB_MT>().release();
    case uci::type::accessorType::workingSOB_RequestMDT:
      return boost::make_unique<asb_uci::type::WorkingSOB_RequestMDT>().release();
    case uci::type::accessorType::workingSOB_RequestMT:
      return boost::make_unique<asb_uci::type::WorkingSOB_RequestMT>().release();
    case uci::type::accessorType::workingSOB_RequestStatusMDT:
      return boost::make_unique<asb_uci::type::WorkingSOB_RequestStatusMDT>().release();
    case uci::type::accessorType::workingSOB_RequestStatusMT:
      return boost::make_unique<asb_uci::type::WorkingSOB_RequestStatusMT>().release();
    case uci::type::accessorType::zoneExternalType:
      return boost::make_unique<asb_uci::type::ZoneExternalType>().release();
    case uci::type::accessorType::zoneInclusionType:
      return boost::make_unique<asb_uci::type::ZoneInclusionType>().release();
    case uci::type::accessorType::zoneType:
      return boost::make_unique<asb_uci::type::ZoneType>().release();
    default:
      return nullptr;
  }
}

} // namespace util

} // namespace asb_uci

