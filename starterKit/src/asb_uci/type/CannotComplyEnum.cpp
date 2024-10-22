/** @file CannotComplyEnum.cpp
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

#include "../../../../cppInterface/2.3.2/include/uci/type/CannotComplyEnum.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

CannotComplyEnum::ToNameTable CannotComplyEnum::m_toNameTable {
  {enumNotSet, "notSet"},
  {UCI_CONSTRAINT_ATTEMPTS, "CONSTRAINT_ATTEMPTS"},
  {UCI_CONSTRAINT_ENDURANCE, "CONSTRAINT_ENDURANCE"},
  {UCI_CONSTRAINT_CLASSIFICATION, "CONSTRAINT_CLASSIFICATION"},
  {UCI_CONSTRAINT_FOR_FOV_LIMIT, "CONSTRAINT_FOR_FOV_LIMIT"},
  {UCI_CONSTRAINT_GATING, "CONSTRAINT_GATING"},
  {UCI_CONSTRAINT_MANEUVER_LIMIT, "CONSTRAINT_MANEUVER_LIMIT"},
  {UCI_CONSTRAINT_OP, "CONSTRAINT_OP"},
  {UCI_CONSTRAINT_OCCLUSION, "CONSTRAINT_OCCLUSION"},
  {UCI_CAPABILITY_RANGE, "CAPABILITY_RANGE"},
  {UCI_CAPABILITY_PERFORMANCE, "CAPABILITY_PERFORMANCE"},
  {UCI_CONSTRAINT_RF, "CONSTRAINT_RF"},
  {UCI_CONSTRAINT_ROUTE, "CONSTRAINT_ROUTE"},
  {UCI_CONSTRAINT_SAFETY, "CONSTRAINT_SAFETY"},
  {UCI_CONSTRAINT_TARGET_ANGLE, "CONSTRAINT_TARGET_ANGLE"},
  {UCI_CONSTRAINT_TIME, "CONSTRAINT_TIME"},
  {UCI_CONSTRAINT_SYSTEM, "CONSTRAINT_SYSTEM"},
  {UCI_INFEASIBLE_ROUTE, "INFEASIBLE_ROUTE"},
  {UCI_MISSION_EVENT, "MISSION_EVENT"},
  {UCI_STATE_OR_SETTINGS, "STATE_OR_SETTINGS"},
  {UCI_STATE_OR_SETTINGS_CHANGE, "STATE_OR_SETTINGS_CHANGE"},
  {UCI_SYSTEM_UNAVAILABLE, "SYSTEM_UNAVAILABLE"},
  {UCI_SYSTEM_FAULT, "SYSTEM_FAULT"},
  {UCI_SYSTEM_CONFLICT, "SYSTEM_CONFLICT"},
  {UCI_SUBSYSTEM_UNAVAILABLE, "SUBSYSTEM_UNAVAILABLE"},
  {UCI_SUBSYSTEM_FAULT, "SUBSYSTEM_FAULT"},
  {UCI_CAPABILITY_FAULT, "CAPABILITY_FAULT"},
  {UCI_CAPABILITY_PRECEDENCE, "CAPABILITY_PRECEDENCE"},
  {UCI_CAPABILITY_UNAVAILABLE, "CAPABILITY_UNAVAILABLE"},
  {UCI_INSUFFICIENT_RESOURCES, "INSUFFICIENT_RESOURCES"},
  {UCI_RANKING, "RANKING"},
  {UCI_WEATHER, "WEATHER"},
  {UCI_INELIGIBLE_CONTROL_SOURCE, "INELIGIBLE_CONTROL_SOURCE"},
  {UCI_DEPENDENCY_PREDECESSOR, "DEPENDENCY_PREDECESSOR"},
  {UCI_DEPENDENCY_ALL_OR_NOTHING, "DEPENDENCY_ALL_OR_NOTHING"},
  {UCI_DEPENDENCY_EITHER_OR, "DEPENDENCY_EITHER_OR"},
  {UCI_INIT_CRITERIA_NOT_MET, "INIT_CRITERIA_NOT_MET"},
  {UCI_UNKNOWN_ID, "UNKNOWN_ID"},
  {UCI_INVALID_INPUT_PARAMETER, "INVALID_INPUT_PARAMETER"},
  {UCI_INPUT_OTHER, "INPUT_OTHER"},
  {UCI_MDF_ACTIVATION_ERROR, "MDF_ACTIVATION_ERROR"},
  {UCI_MULTIPLE, "MULTIPLE"},
  {UCI_CANCELED, "CANCELED"},
  {UCI_OTHER, "OTHER"},
  {UCI_UNKNOWN, "UNKNOWN"},
  {UCI_ABORTED, "ABORTED"},
  {UCI_ALIGNMENT_MANEUVER, "ALIGNMENT_MANEUVER"},
  {enumMaxExclusive, "maxExclusive"} };

CannotComplyEnum::FromNameTable CannotComplyEnum::m_fromNameTable {
  {"notSet", enumNotSet},
  {"CONSTRAINT_ATTEMPTS", UCI_CONSTRAINT_ATTEMPTS},
  {"CONSTRAINT_ENDURANCE", UCI_CONSTRAINT_ENDURANCE},
  {"CONSTRAINT_CLASSIFICATION", UCI_CONSTRAINT_CLASSIFICATION},
  {"CONSTRAINT_FOR_FOV_LIMIT", UCI_CONSTRAINT_FOR_FOV_LIMIT},
  {"CONSTRAINT_GATING", UCI_CONSTRAINT_GATING},
  {"CONSTRAINT_MANEUVER_LIMIT", UCI_CONSTRAINT_MANEUVER_LIMIT},
  {"CONSTRAINT_OP", UCI_CONSTRAINT_OP},
  {"CONSTRAINT_OCCLUSION", UCI_CONSTRAINT_OCCLUSION},
  {"CAPABILITY_RANGE", UCI_CAPABILITY_RANGE},
  {"CAPABILITY_PERFORMANCE", UCI_CAPABILITY_PERFORMANCE},
  {"CONSTRAINT_RF", UCI_CONSTRAINT_RF},
  {"CONSTRAINT_ROUTE", UCI_CONSTRAINT_ROUTE},
  {"CONSTRAINT_SAFETY", UCI_CONSTRAINT_SAFETY},
  {"CONSTRAINT_TARGET_ANGLE", UCI_CONSTRAINT_TARGET_ANGLE},
  {"CONSTRAINT_TIME", UCI_CONSTRAINT_TIME},
  {"CONSTRAINT_SYSTEM", UCI_CONSTRAINT_SYSTEM},
  {"INFEASIBLE_ROUTE", UCI_INFEASIBLE_ROUTE},
  {"MISSION_EVENT", UCI_MISSION_EVENT},
  {"STATE_OR_SETTINGS", UCI_STATE_OR_SETTINGS},
  {"STATE_OR_SETTINGS_CHANGE", UCI_STATE_OR_SETTINGS_CHANGE},
  {"SYSTEM_UNAVAILABLE", UCI_SYSTEM_UNAVAILABLE},
  {"SYSTEM_FAULT", UCI_SYSTEM_FAULT},
  {"SYSTEM_CONFLICT", UCI_SYSTEM_CONFLICT},
  {"SUBSYSTEM_UNAVAILABLE", UCI_SUBSYSTEM_UNAVAILABLE},
  {"SUBSYSTEM_FAULT", UCI_SUBSYSTEM_FAULT},
  {"CAPABILITY_FAULT", UCI_CAPABILITY_FAULT},
  {"CAPABILITY_PRECEDENCE", UCI_CAPABILITY_PRECEDENCE},
  {"CAPABILITY_UNAVAILABLE", UCI_CAPABILITY_UNAVAILABLE},
  {"INSUFFICIENT_RESOURCES", UCI_INSUFFICIENT_RESOURCES},
  {"RANKING", UCI_RANKING},
  {"WEATHER", UCI_WEATHER},
  {"INELIGIBLE_CONTROL_SOURCE", UCI_INELIGIBLE_CONTROL_SOURCE},
  {"DEPENDENCY_PREDECESSOR", UCI_DEPENDENCY_PREDECESSOR},
  {"DEPENDENCY_ALL_OR_NOTHING", UCI_DEPENDENCY_ALL_OR_NOTHING},
  {"DEPENDENCY_EITHER_OR", UCI_DEPENDENCY_EITHER_OR},
  {"INIT_CRITERIA_NOT_MET", UCI_INIT_CRITERIA_NOT_MET},
  {"UNKNOWN_ID", UCI_UNKNOWN_ID},
  {"INVALID_INPUT_PARAMETER", UCI_INVALID_INPUT_PARAMETER},
  {"INPUT_OTHER", UCI_INPUT_OTHER},
  {"MDF_ACTIVATION_ERROR", UCI_MDF_ACTIVATION_ERROR},
  {"MULTIPLE", UCI_MULTIPLE},
  {"CANCELED", UCI_CANCELED},
  {"OTHER", UCI_OTHER},
  {"UNKNOWN", UCI_UNKNOWN},
  {"ABORTED", UCI_ABORTED},
  {"ALIGNMENT_MANEUVER", UCI_ALIGNMENT_MANEUVER},
  {"maxExclusive", enumMaxExclusive} };

} // namespace type

} // namespace uci

