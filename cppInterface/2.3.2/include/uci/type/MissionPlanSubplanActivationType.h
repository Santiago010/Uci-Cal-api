/** @file MissionPlanSubplanActivationType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:07 PM
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

#ifndef UCI_TYPE_MISSIONPLANSUBPLANACTIVATIONTYPE_H
#define UCI_TYPE_MISSIONPLANSUBPLANACTIVATIONTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "ActionPlanActivationType.h"
#include "ActivityPlanActivationType.h"
#include "EffectPlanActivationType.h"
#include "OrbitActivityPlanActivationType.h"
#include "OrbitPlanActivationType.h"
#include "ResponsePlanActivationType.h"
#include "RouteActivityPlanActivationType.h"
#include "RoutePlanActivationType.h"
#include "TaskPlanActivationType.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all base data types are declared */
namespace base {

class AbstractServiceBusConnection;

} // namespace base
} // namespace uci

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** See annotations in child elements and messages/elements that use this type for details. */
class MissionPlanSubplanActivationType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new MissionPlanSubplanActivationType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed MissionPlanSubplanActivationType.
    */
  static UCI_EXPORT MissionPlanSubplanActivationType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new MissionPlanSubplanActivationType initializing the data accessed by the new
    * MissionPlanSubplanActivationType using the data accessed by the specified MissionPlanSubplanActivationType (cloning).
    *
    * @param accessor The MissionPlanSubplanActivationType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created MissionPlanSubplanActivationType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed MissionPlanSubplanActivationType.
    */
  static UCI_EXPORT MissionPlanSubplanActivationType& create(const MissionPlanSubplanActivationType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified MissionPlanSubplanActivationType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The MissionPlanSubplanActivationType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(MissionPlanSubplanActivationType& accessor);

  /** Returns this accessor's type constant, i.e. missionPlanSubplanActivationType.
    *
    * @return This accessor's type constant, i.e. missionPlanSubplanActivationType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::missionPlanSubplanActivationType;
  }

  /** Returns the version that was initialized from the uci:version attribute of MissionPlanSubplanActivationType.
    *
    * @return The version that was initialized from the uci:version attribute of MissionPlanSubplanActivationType.
    */
  static std::string getUCITypeVersion() {
    return "002.000.001.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const MissionPlanSubplanActivationType& accessor) = 0;

  /** Indicates commanded details for activation of a TaskPlan. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::TaskPlanActivationType, uci::type::accessorType::taskPlanActivationType> TaskPlan;

  /** Indicates commanded details for activation of a RoutePlan. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::RoutePlanActivationType, uci::type::accessorType::routePlanActivationType> RoutePlan;

  /** Indicates commanded details for activation of a RouteActivityPlan. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::RouteActivityPlanActivationType, uci::type::accessorType::routeActivityPlanActivationType> RouteActivityPlan;

  /** Indicates commanded details for activation of an OrbitPlan. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::OrbitPlanActivationType, uci::type::accessorType::orbitPlanActivationType> OrbitPlan;

  /** Indicates commanded details for activation of an OrbitActivityPlan. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::OrbitActivityPlanActivationType, uci::type::accessorType::orbitActivityPlanActivationType> OrbitActivityPlan;

  /** Indicates commanded details for activation of an ActivityPlan. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::ActivityPlanActivationType, uci::type::accessorType::activityPlanActivationType> ActivityPlan;

  /** Indicates commanded details for activation of an EffectPlan. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::EffectPlanActivationType, uci::type::accessorType::effectPlanActivationType> EffectPlan;

  /** Indicates commanded details for activation of an ActionPlan. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::ActionPlanActivationType, uci::type::accessorType::actionPlanActivationType> ActionPlan;

  /** Indicates commanded details for activation of a ResponsePlan. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::ResponsePlanActivationType, uci::type::accessorType::responsePlanActivationType> ResponsePlan;

  /** Returns a const reference to the bounded list identified by TaskPlan.
    *
    * @return A const reference to the bounded list identified by TaskPlan.
    */
  virtual const uci::type::MissionPlanSubplanActivationType::TaskPlan& getTaskPlan() const = 0;

  /** Returns a reference to the bounded list identified by TaskPlan.
    *
    * @return A reference to the bounded list identified by TaskPlan.
    */
  virtual uci::type::MissionPlanSubplanActivationType::TaskPlan& getTaskPlan() = 0;

  /** Sets the bounded list identified by TaskPlan.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MissionPlanSubplanActivationType& setTaskPlan(const uci::type::MissionPlanSubplanActivationType::TaskPlan& value) = 0;

  /** Returns a const reference to the bounded list identified by RoutePlan.
    *
    * @return A const reference to the bounded list identified by RoutePlan.
    */
  virtual const uci::type::MissionPlanSubplanActivationType::RoutePlan& getRoutePlan() const = 0;

  /** Returns a reference to the bounded list identified by RoutePlan.
    *
    * @return A reference to the bounded list identified by RoutePlan.
    */
  virtual uci::type::MissionPlanSubplanActivationType::RoutePlan& getRoutePlan() = 0;

  /** Sets the bounded list identified by RoutePlan.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MissionPlanSubplanActivationType& setRoutePlan(const uci::type::MissionPlanSubplanActivationType::RoutePlan& value) = 0;

  /** Returns a const reference to the bounded list identified by RouteActivityPlan.
    *
    * @return A const reference to the bounded list identified by RouteActivityPlan.
    */
  virtual const uci::type::MissionPlanSubplanActivationType::RouteActivityPlan& getRouteActivityPlan() const = 0;

  /** Returns a reference to the bounded list identified by RouteActivityPlan.
    *
    * @return A reference to the bounded list identified by RouteActivityPlan.
    */
  virtual uci::type::MissionPlanSubplanActivationType::RouteActivityPlan& getRouteActivityPlan() = 0;

  /** Sets the bounded list identified by RouteActivityPlan.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MissionPlanSubplanActivationType& setRouteActivityPlan(const uci::type::MissionPlanSubplanActivationType::RouteActivityPlan& value) = 0;

  /** Returns a const reference to the bounded list identified by OrbitPlan.
    *
    * @return A const reference to the bounded list identified by OrbitPlan.
    */
  virtual const uci::type::MissionPlanSubplanActivationType::OrbitPlan& getOrbitPlan() const = 0;

  /** Returns a reference to the bounded list identified by OrbitPlan.
    *
    * @return A reference to the bounded list identified by OrbitPlan.
    */
  virtual uci::type::MissionPlanSubplanActivationType::OrbitPlan& getOrbitPlan() = 0;

  /** Sets the bounded list identified by OrbitPlan.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MissionPlanSubplanActivationType& setOrbitPlan(const uci::type::MissionPlanSubplanActivationType::OrbitPlan& value) = 0;

  /** Returns a const reference to the bounded list identified by OrbitActivityPlan.
    *
    * @return A const reference to the bounded list identified by OrbitActivityPlan.
    */
  virtual const uci::type::MissionPlanSubplanActivationType::OrbitActivityPlan& getOrbitActivityPlan() const = 0;

  /** Returns a reference to the bounded list identified by OrbitActivityPlan.
    *
    * @return A reference to the bounded list identified by OrbitActivityPlan.
    */
  virtual uci::type::MissionPlanSubplanActivationType::OrbitActivityPlan& getOrbitActivityPlan() = 0;

  /** Sets the bounded list identified by OrbitActivityPlan.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MissionPlanSubplanActivationType& setOrbitActivityPlan(const uci::type::MissionPlanSubplanActivationType::OrbitActivityPlan& value) = 0;

  /** Returns a const reference to the bounded list identified by ActivityPlan.
    *
    * @return A const reference to the bounded list identified by ActivityPlan.
    */
  virtual const uci::type::MissionPlanSubplanActivationType::ActivityPlan& getActivityPlan() const = 0;

  /** Returns a reference to the bounded list identified by ActivityPlan.
    *
    * @return A reference to the bounded list identified by ActivityPlan.
    */
  virtual uci::type::MissionPlanSubplanActivationType::ActivityPlan& getActivityPlan() = 0;

  /** Sets the bounded list identified by ActivityPlan.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MissionPlanSubplanActivationType& setActivityPlan(const uci::type::MissionPlanSubplanActivationType::ActivityPlan& value) = 0;

  /** Returns a const reference to the bounded list identified by EffectPlan.
    *
    * @return A const reference to the bounded list identified by EffectPlan.
    */
  virtual const uci::type::MissionPlanSubplanActivationType::EffectPlan& getEffectPlan() const = 0;

  /** Returns a reference to the bounded list identified by EffectPlan.
    *
    * @return A reference to the bounded list identified by EffectPlan.
    */
  virtual uci::type::MissionPlanSubplanActivationType::EffectPlan& getEffectPlan() = 0;

  /** Sets the bounded list identified by EffectPlan.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MissionPlanSubplanActivationType& setEffectPlan(const uci::type::MissionPlanSubplanActivationType::EffectPlan& value) = 0;

  /** Returns a const reference to the bounded list identified by ActionPlan.
    *
    * @return A const reference to the bounded list identified by ActionPlan.
    */
  virtual const uci::type::MissionPlanSubplanActivationType::ActionPlan& getActionPlan() const = 0;

  /** Returns a reference to the bounded list identified by ActionPlan.
    *
    * @return A reference to the bounded list identified by ActionPlan.
    */
  virtual uci::type::MissionPlanSubplanActivationType::ActionPlan& getActionPlan() = 0;

  /** Sets the bounded list identified by ActionPlan.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MissionPlanSubplanActivationType& setActionPlan(const uci::type::MissionPlanSubplanActivationType::ActionPlan& value) = 0;

  /** Returns a const reference to the bounded list identified by ResponsePlan.
    *
    * @return A const reference to the bounded list identified by ResponsePlan.
    */
  virtual const uci::type::MissionPlanSubplanActivationType::ResponsePlan& getResponsePlan() const = 0;

  /** Returns a reference to the bounded list identified by ResponsePlan.
    *
    * @return A reference to the bounded list identified by ResponsePlan.
    */
  virtual uci::type::MissionPlanSubplanActivationType::ResponsePlan& getResponsePlan() = 0;

  /** Sets the bounded list identified by ResponsePlan.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MissionPlanSubplanActivationType& setResponsePlan(const uci::type::MissionPlanSubplanActivationType::ResponsePlan& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  MissionPlanSubplanActivationType() {
  }

  /** The destructor [only available to derived classes]. */
  ~MissionPlanSubplanActivationType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The MissionPlanSubplanActivationType to copy from.
    */
  MissionPlanSubplanActivationType(const MissionPlanSubplanActivationType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this MissionPlanSubplanActivationType to the contents of the
    * MissionPlanSubplanActivationType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The MissionPlanSubplanActivationType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this MissionPlanSubplanActivationType.
    * @return A reference to this MissionPlanSubplanActivationType.
    */
  MissionPlanSubplanActivationType& operator=(const MissionPlanSubplanActivationType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_MISSIONPLANSUBPLANACTIVATIONTYPE_H

