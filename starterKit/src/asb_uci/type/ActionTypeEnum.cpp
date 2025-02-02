/** @file ActionTypeEnum.cpp
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

#include "../../../../cppInterface/2.3.2/include/uci/type/ActionTypeEnum.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

ActionTypeEnum::ToNameTable ActionTypeEnum::m_toNameTable {
  {enumNotSet, "notSet"},
  {UCI_ADVISE, "ADVISE"},
  {UCI_ADVANCE, "ADVANCE"},
  {UCI_ASSAULT, "ASSAULT"},
  {UCI_ASSESS, "ASSESS"},
  {UCI_ATTACK, "ATTACK"},
  {UCI_ATTACK_ARMED_RECONNAISSANCE, "ATTACK_ARMED_RECONNAISSANCE"},
  {UCI_ATTACK_ASSIGN, "ATTACK_ASSIGN"},
  {UCI_ATTACK_COUNTER, "ATTACK_COUNTER"},
  {UCI_ATTACK_CYBER, "ATTACK_CYBER"},
  {UCI_ATTACK_DEAD, "ATTACK_DEAD"},
  {UCI_ATTACK_DIRECTED_ENERGY, "ATTACK_DIRECTED_ENERGY"},
  {UCI_ATTACK_ELECTRONIC, "ATTACK_ELECTRONIC"},
  {UCI_ATTACK_KINETIC, "ATTACK_KINETIC"},
  {UCI_ATTACK_SEAD, "ATTACK_SEAD"},
  {UCI_ATTACK_SWEEP, "ATTACK_SWEEP"},
  {UCI_BREACH, "BREACH"},
  {UCI_BREAK_OUT, "BREAK_OUT"},
  {UCI_BUILD_UP, "BUILD_UP"},
  {UCI_BYPASS, "BYPASS"},
  {UCI_C2, "C2"},
  {UCI_C2_CYBER, "C2_CYBER"},
  {UCI_C2_OPERATIONAL, "C2_OPERATIONAL"},
  {UCI_C2_STRATEGIC, "C2_STRATEGIC"},
  {UCI_C2_TACTICAL, "C2_TACTICAL"},
  {UCI_COLLECT, "COLLECT"},
  {UCI_COLLECT_INTEL, "COLLECT_INTEL"},
  {UCI_CONFIRM, "CONFIRM"},
  {UCI_COORDINATE, "COORDINATE"},
  {UCI_CROSS, "CROSS"},
  {UCI_CROSS_CUE, "CROSS_CUE"},
  {UCI_FIND_SEARCH, "FIND_SEARCH"},
  {UCI_IDENTIFY, "IDENTIFY"},
  {UCI_IDENTIFY_VISUAL, "IDENTIFY_VISUAL"},
  {UCI_INFORM, "INFORM"},
  {UCI_INSERT_INFILTRATE, "INSERT_INFILTRATE"},
  {UCI_INTERDICT, "INTERDICT"},
  {UCI_INTERCEPT, "INTERCEPT"},
  {UCI_INTERVENE, "INTERVENE"},
  {UCI_INVESTIGATE_INTERROGATE, "INVESTIGATE_INTERROGATE"},
  {UCI_LIAISE, "LIAISE"},
  {UCI_LINK_UP, "LINK_UP"},
  {UCI_LOCATE_FIX, "LOCATE_FIX"},
  {UCI_LOGISTICS, "LOGISTICS"},
  {UCI_LOGISTICS_LOADING, "LOGISTICS_LOADING"},
  {UCI_LOGISTICS_REPLENISH, "LOGISTICS_REPLENISH"},
  {UCI_LOGISTICS_RESUPPLY, "LOGISTICS_RESUPPLY"},
  {UCI_LOGISTICS_REFUEL, "LOGISTICS_REFUEL"},
  {UCI_LOGISTICS_TOWING, "LOGISTICS_TOWING"},
  {UCI_LOGISTICS_TRANSPORT, "LOGISTICS_TRANSPORT"},
  {UCI_LOGISTICS_TRANSITING, "LOGISTICS_TRANSITING"},
  {UCI_LOGISTICS_SUPPORT, "LOGISTICS_SUPPORT"},
  {UCI_MANIPULATE, "MANIPULATE"},
  {UCI_MANEUVER, "MANEUVER"},
  {UCI_MARK, "MARK"},
  {UCI_MEDEVAC, "MEDEVAC"},
  {UCI_MENTOR, "MENTOR"},
  {UCI_MONITOR_OBSERVE, "MONITOR_OBSERVE"},
  {UCI_NONCOMBATANT_OPERATIONS, "NONCOMBATANT_OPERATIONS"},
  {UCI_OCCUPY, "OCCUPY"},
  {UCI_ORGANIZE, "ORGANIZE"},
  {UCI_OTHER, "OTHER"},
  {UCI_OVERTHROW, "OVERTHROW"},
  {UCI_PATROL, "PATROL"},
  {UCI_PROCESS_INTEL, "PROCESS_INTEL"},
  {UCI_PROTECT, "PROTECT"},
  {UCI_PROTECT_CAP, "PROTECT_CAP"},
  {UCI_PROTECT_CAS, "PROTECT_CAS"},
  {UCI_PROTECT_CCD, "PROTECT_CCD"},
  {UCI_PROTECT_ESCORT, "PROTECT_ESCORT"},
  {UCI_PROTECT_KINETIC, "PROTECT_KINETIC"},
  {UCI_PROTECT_DIRECTED_ENERGY, "PROTECT_DIRECTED_ENERGY"},
  {UCI_PROTECT_CYBER, "PROTECT_CYBER"},
  {UCI_PROTECT_EW, "PROTECT_EW"},
  {UCI_PROTECT_PICKET, "PROTECT_PICKET"},
  {UCI_PROTECT_TOMCAT, "PROTECT_TOMCAT"},
  {UCI_RECONNAISSANCE, "RECONNAISSANCE"},
  {UCI_SEARCH_AND_RESCUE, "SEARCH_AND_RESCUE"},
  {UCI_SEARCH_AND_RESCUE_COMBAT, "SEARCH_AND_RESCUE_COMBAT"},
  {UCI_SHADOW, "SHADOW"},
  {UCI_TARGET, "TARGET"},
  {UCI_TRACK, "TRACK"},
  {UCI_TRAINING, "TRAINING"},
  {UCI_WARN, "WARN"},
  {UCI_WITHDRAW, "WITHDRAW"},
  {enumMaxExclusive, "maxExclusive"} };

ActionTypeEnum::FromNameTable ActionTypeEnum::m_fromNameTable {
  {"notSet", enumNotSet},
  {"ADVISE", UCI_ADVISE},
  {"ADVANCE", UCI_ADVANCE},
  {"ASSAULT", UCI_ASSAULT},
  {"ASSESS", UCI_ASSESS},
  {"ATTACK", UCI_ATTACK},
  {"ATTACK_ARMED_RECONNAISSANCE", UCI_ATTACK_ARMED_RECONNAISSANCE},
  {"ATTACK_ASSIGN", UCI_ATTACK_ASSIGN},
  {"ATTACK_COUNTER", UCI_ATTACK_COUNTER},
  {"ATTACK_CYBER", UCI_ATTACK_CYBER},
  {"ATTACK_DEAD", UCI_ATTACK_DEAD},
  {"ATTACK_DIRECTED_ENERGY", UCI_ATTACK_DIRECTED_ENERGY},
  {"ATTACK_ELECTRONIC", UCI_ATTACK_ELECTRONIC},
  {"ATTACK_KINETIC", UCI_ATTACK_KINETIC},
  {"ATTACK_SEAD", UCI_ATTACK_SEAD},
  {"ATTACK_SWEEP", UCI_ATTACK_SWEEP},
  {"BREACH", UCI_BREACH},
  {"BREAK_OUT", UCI_BREAK_OUT},
  {"BUILD_UP", UCI_BUILD_UP},
  {"BYPASS", UCI_BYPASS},
  {"C2", UCI_C2},
  {"C2_CYBER", UCI_C2_CYBER},
  {"C2_OPERATIONAL", UCI_C2_OPERATIONAL},
  {"C2_STRATEGIC", UCI_C2_STRATEGIC},
  {"C2_TACTICAL", UCI_C2_TACTICAL},
  {"COLLECT", UCI_COLLECT},
  {"COLLECT_INTEL", UCI_COLLECT_INTEL},
  {"CONFIRM", UCI_CONFIRM},
  {"COORDINATE", UCI_COORDINATE},
  {"CROSS", UCI_CROSS},
  {"CROSS_CUE", UCI_CROSS_CUE},
  {"FIND_SEARCH", UCI_FIND_SEARCH},
  {"IDENTIFY", UCI_IDENTIFY},
  {"IDENTIFY_VISUAL", UCI_IDENTIFY_VISUAL},
  {"INFORM", UCI_INFORM},
  {"INSERT_INFILTRATE", UCI_INSERT_INFILTRATE},
  {"INTERDICT", UCI_INTERDICT},
  {"INTERCEPT", UCI_INTERCEPT},
  {"INTERVENE", UCI_INTERVENE},
  {"INVESTIGATE_INTERROGATE", UCI_INVESTIGATE_INTERROGATE},
  {"LIAISE", UCI_LIAISE},
  {"LINK_UP", UCI_LINK_UP},
  {"LOCATE_FIX", UCI_LOCATE_FIX},
  {"LOGISTICS", UCI_LOGISTICS},
  {"LOGISTICS_LOADING", UCI_LOGISTICS_LOADING},
  {"LOGISTICS_REPLENISH", UCI_LOGISTICS_REPLENISH},
  {"LOGISTICS_RESUPPLY", UCI_LOGISTICS_RESUPPLY},
  {"LOGISTICS_REFUEL", UCI_LOGISTICS_REFUEL},
  {"LOGISTICS_TOWING", UCI_LOGISTICS_TOWING},
  {"LOGISTICS_TRANSPORT", UCI_LOGISTICS_TRANSPORT},
  {"LOGISTICS_TRANSITING", UCI_LOGISTICS_TRANSITING},
  {"LOGISTICS_SUPPORT", UCI_LOGISTICS_SUPPORT},
  {"MANIPULATE", UCI_MANIPULATE},
  {"MANEUVER", UCI_MANEUVER},
  {"MARK", UCI_MARK},
  {"MEDEVAC", UCI_MEDEVAC},
  {"MENTOR", UCI_MENTOR},
  {"MONITOR_OBSERVE", UCI_MONITOR_OBSERVE},
  {"NONCOMBATANT_OPERATIONS", UCI_NONCOMBATANT_OPERATIONS},
  {"OCCUPY", UCI_OCCUPY},
  {"ORGANIZE", UCI_ORGANIZE},
  {"OTHER", UCI_OTHER},
  {"OVERTHROW", UCI_OVERTHROW},
  {"PATROL", UCI_PATROL},
  {"PROCESS_INTEL", UCI_PROCESS_INTEL},
  {"PROTECT", UCI_PROTECT},
  {"PROTECT_CAP", UCI_PROTECT_CAP},
  {"PROTECT_CAS", UCI_PROTECT_CAS},
  {"PROTECT_CCD", UCI_PROTECT_CCD},
  {"PROTECT_ESCORT", UCI_PROTECT_ESCORT},
  {"PROTECT_KINETIC", UCI_PROTECT_KINETIC},
  {"PROTECT_DIRECTED_ENERGY", UCI_PROTECT_DIRECTED_ENERGY},
  {"PROTECT_CYBER", UCI_PROTECT_CYBER},
  {"PROTECT_EW", UCI_PROTECT_EW},
  {"PROTECT_PICKET", UCI_PROTECT_PICKET},
  {"PROTECT_TOMCAT", UCI_PROTECT_TOMCAT},
  {"RECONNAISSANCE", UCI_RECONNAISSANCE},
  {"SEARCH_AND_RESCUE", UCI_SEARCH_AND_RESCUE},
  {"SEARCH_AND_RESCUE_COMBAT", UCI_SEARCH_AND_RESCUE_COMBAT},
  {"SHADOW", UCI_SHADOW},
  {"TARGET", UCI_TARGET},
  {"TRACK", UCI_TRACK},
  {"TRAINING", UCI_TRAINING},
  {"WARN", UCI_WARN},
  {"WITHDRAW", UCI_WITHDRAW},
  {"maxExclusive", enumMaxExclusive} };

} // namespace type

} // namespace uci

