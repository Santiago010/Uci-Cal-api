/** @file CommTerminalPlanEffectivityStateType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:06 PM
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

#ifndef UCI_TYPE_COMMTERMINALPLANEFFECTIVITYSTATETYPE_H
#define UCI_TYPE_COMMTERMINALPLANEFFECTIVITYSTATETYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "CommEffectivityID_Type.h"
#include "CommTerminalPlanConfigurationStateType.h"
#include "PlanConfigurationStateEnum.h"

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

/** See the annotation in the associated message for an overall description of the message and this type. */
class CommTerminalPlanEffectivityStateType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new CommTerminalPlanEffectivityStateType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CommTerminalPlanEffectivityStateType.
    */
  static UCI_EXPORT CommTerminalPlanEffectivityStateType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new CommTerminalPlanEffectivityStateType initializing the data accessed by the new
    * CommTerminalPlanEffectivityStateType using the data accessed by the specified CommTerminalPlanEffectivityStateType
    * (cloning).
    *
    * @param accessor The CommTerminalPlanEffectivityStateType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created CommTerminalPlanEffectivityStateType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CommTerminalPlanEffectivityStateType.
    */
  static UCI_EXPORT CommTerminalPlanEffectivityStateType& create(const CommTerminalPlanEffectivityStateType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified CommTerminalPlanEffectivityStateType. Use of the specified accessor after it has
    * been destroyed will result in undefined behavior.
    *
    * @param accessor The CommTerminalPlanEffectivityStateType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(CommTerminalPlanEffectivityStateType& accessor);

  /** Returns this accessor's type constant, i.e. commTerminalPlanEffectivityStateType.
    *
    * @return This accessor's type constant, i.e. commTerminalPlanEffectivityStateType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::commTerminalPlanEffectivityStateType;
  }

  /** Returns the version that was initialized from the uci:version attribute of CommTerminalPlanEffectivityStateType.
    *
    * @return The version that was initialized from the uci:version attribute of CommTerminalPlanEffectivityStateType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const CommTerminalPlanEffectivityStateType& accessor) = 0;

  /** The Configuration states owned by this CommTerminalPlan Effectivity. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::CommTerminalPlanConfigurationStateType, uci::type::accessorType::commTerminalPlanConfigurationStateType> EffectivityConfiguration;

  /** Returns a const reference to the accessor that provides access to the complex content identified by EffectivityID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by EffectivityID.
    */
  virtual const uci::type::CommEffectivityID_Type& getEffectivityID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by EffectivityID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by EffectivityID.
    */
  virtual uci::type::CommEffectivityID_Type& getEffectivityID() = 0;

  /** Sets the complex content identified by EffectivityID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by EffectivityID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommTerminalPlanEffectivityStateType& setEffectivityID(const uci::type::CommEffectivityID_Type& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by PlanConfigurationState.
    *
    * @return A const reference to the value of the enumeration identified by PlanConfigurationState.
    */
  virtual const uci::type::PlanConfigurationStateEnum& getPlanConfigurationState() const = 0;

  /** Returns a reference to the value of the enumeration identified by PlanConfigurationState.
    *
    * @return A reference to the value of the enumeration identified by PlanConfigurationState.
    */
  virtual uci::type::PlanConfigurationStateEnum& getPlanConfigurationState() = 0;

  /** Sets the value of the enumeration identified by PlanConfigurationState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommTerminalPlanEffectivityStateType& setPlanConfigurationState(const uci::type::PlanConfigurationStateEnum& value) = 0;

  /** Sets the value of the enumeration identified by PlanConfigurationState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommTerminalPlanEffectivityStateType& setPlanConfigurationState(uci::type::PlanConfigurationStateEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the bounded list identified by EffectivityConfiguration.
    *
    * @return A const reference to the bounded list identified by EffectivityConfiguration.
    */
  virtual const uci::type::CommTerminalPlanEffectivityStateType::EffectivityConfiguration& getEffectivityConfiguration() const = 0;

  /** Returns a reference to the bounded list identified by EffectivityConfiguration.
    *
    * @return A reference to the bounded list identified by EffectivityConfiguration.
    */
  virtual uci::type::CommTerminalPlanEffectivityStateType::EffectivityConfiguration& getEffectivityConfiguration() = 0;

  /** Sets the bounded list identified by EffectivityConfiguration.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommTerminalPlanEffectivityStateType& setEffectivityConfiguration(const uci::type::CommTerminalPlanEffectivityStateType::EffectivityConfiguration& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  CommTerminalPlanEffectivityStateType() {
  }

  /** The destructor [only available to derived classes]. */
  ~CommTerminalPlanEffectivityStateType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The CommTerminalPlanEffectivityStateType to copy from.
    */
  CommTerminalPlanEffectivityStateType(const CommTerminalPlanEffectivityStateType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this CommTerminalPlanEffectivityStateType to the contents of the
    * CommTerminalPlanEffectivityStateType on the right hand side (rhs) of the assignment operator [only available to
    * derived classes].
    *
    * @param rhs The CommTerminalPlanEffectivityStateType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this CommTerminalPlanEffectivityStateType.
    * @return A reference to this CommTerminalPlanEffectivityStateType.
    */
  CommTerminalPlanEffectivityStateType& operator=(const CommTerminalPlanEffectivityStateType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_COMMTERMINALPLANEFFECTIVITYSTATETYPE_H

