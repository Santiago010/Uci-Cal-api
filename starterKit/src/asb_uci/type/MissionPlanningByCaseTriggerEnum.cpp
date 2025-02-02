/** @file MissionPlanningByCaseTriggerEnum.cpp
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

#include "../../../../cppInterface/2.3.2/include/uci/type/MissionPlanningByCaseTriggerEnum.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

MissionPlanningByCaseTriggerEnum::ToNameTable MissionPlanningByCaseTriggerEnum::m_toNameTable {
  {enumNotSet, "notSet"},
  {UCI_CAPABILITY_ADDED, "CAPABILITY_ADDED"},
  {UCI_CAPABILITY_FAILURE, "CAPABILITY_FAILURE"},
  {UCI_COMMS_LOST, "COMMS_LOST"},
  {UCI_DMPI_OVER_DESIGNATION, "DMPI_OVER_DESIGNATION"},
  {UCI_DMPI_UNDER_DESIGNATION, "DMPI_UNDER_DESIGNATION"},
  {UCI_ENDURANCE_LOW, "ENDURANCE_LOW"},
  {UCI_OFF_ROUTE, "OFF_ROUTE"},
  {UCI_PROXIMITY_CONFLICT, "PROXIMITY_CONFLICT"},
  {UCI_RELEASE_POINT_OUTSIDE_LAR, "RELEASE_POINT_OUTSIDE_LAR"},
  {UCI_ROUTE_CONFLICT, "ROUTE_CONFLICT"},
  {UCI_ROUTE_VULNERABILITY, "ROUTE_VULNERABILITY"},
  {UCI_SYSTEM_STATE_CHANGE, "SYSTEM_STATE_CHANGE"},
  {UCI_REQUIREMENT_ADDED, "REQUIREMENT_ADDED"},
  {UCI_REQUIREMENT_DEPENDENCY_FAILED, "REQUIREMENT_DEPENDENCY_FAILED"},
  {UCI_REQUIREMENT_DROPPED, "REQUIREMENT_DROPPED"},
  {UCI_REQUIREMENT_FAILED, "REQUIREMENT_FAILED"},
  {UCI_REQUIREMENT_CHANGE, "REQUIREMENT_CHANGE"},
  {UCI_REQUIREMENT_TIMING, "REQUIREMENT_TIMING"},
  {UCI_ZONE_VIOLATION, "ZONE_VIOLATION"},
  {UCI_SPACECRAFT_PROXIMITY_CONFLICT, "SPACECRAFT_PROXIMITY_CONFLICT"},
  {UCI_ORBIT_CONFLICT, "ORBIT_CONFLICT"},
  {UCI_OFF_PLANNED_ORBIT, "OFF_PLANNED_ORBIT"},
  {UCI_SPACECRAFT_ENDURANCE_LOW, "SPACECRAFT_ENDURANCE_LOW"},
  {UCI_RESPONSE_PLAN, "RESPONSE_PLAN"},
  {enumMaxExclusive, "maxExclusive"} };

MissionPlanningByCaseTriggerEnum::FromNameTable MissionPlanningByCaseTriggerEnum::m_fromNameTable {
  {"notSet", enumNotSet},
  {"CAPABILITY_ADDED", UCI_CAPABILITY_ADDED},
  {"CAPABILITY_FAILURE", UCI_CAPABILITY_FAILURE},
  {"COMMS_LOST", UCI_COMMS_LOST},
  {"DMPI_OVER_DESIGNATION", UCI_DMPI_OVER_DESIGNATION},
  {"DMPI_UNDER_DESIGNATION", UCI_DMPI_UNDER_DESIGNATION},
  {"ENDURANCE_LOW", UCI_ENDURANCE_LOW},
  {"OFF_ROUTE", UCI_OFF_ROUTE},
  {"PROXIMITY_CONFLICT", UCI_PROXIMITY_CONFLICT},
  {"RELEASE_POINT_OUTSIDE_LAR", UCI_RELEASE_POINT_OUTSIDE_LAR},
  {"ROUTE_CONFLICT", UCI_ROUTE_CONFLICT},
  {"ROUTE_VULNERABILITY", UCI_ROUTE_VULNERABILITY},
  {"SYSTEM_STATE_CHANGE", UCI_SYSTEM_STATE_CHANGE},
  {"REQUIREMENT_ADDED", UCI_REQUIREMENT_ADDED},
  {"REQUIREMENT_DEPENDENCY_FAILED", UCI_REQUIREMENT_DEPENDENCY_FAILED},
  {"REQUIREMENT_DROPPED", UCI_REQUIREMENT_DROPPED},
  {"REQUIREMENT_FAILED", UCI_REQUIREMENT_FAILED},
  {"REQUIREMENT_CHANGE", UCI_REQUIREMENT_CHANGE},
  {"REQUIREMENT_TIMING", UCI_REQUIREMENT_TIMING},
  {"ZONE_VIOLATION", UCI_ZONE_VIOLATION},
  {"SPACECRAFT_PROXIMITY_CONFLICT", UCI_SPACECRAFT_PROXIMITY_CONFLICT},
  {"ORBIT_CONFLICT", UCI_ORBIT_CONFLICT},
  {"OFF_PLANNED_ORBIT", UCI_OFF_PLANNED_ORBIT},
  {"SPACECRAFT_ENDURANCE_LOW", UCI_SPACECRAFT_ENDURANCE_LOW},
  {"RESPONSE_PLAN", UCI_RESPONSE_PLAN},
  {"maxExclusive", enumMaxExclusive} };

} // namespace type

} // namespace uci

