/** @file DataPlanEffectivityStateType.h
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

#ifndef UCI_TYPE_DATAPLANEFFECTIVITYSTATETYPE_H
#define UCI_TYPE_DATAPLANEFFECTIVITYSTATETYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "CommEffectivityID_Type.h"
#include "DataPlanConfigurationStateType.h"
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
class DataPlanEffectivityStateType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new DataPlanEffectivityStateType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DataPlanEffectivityStateType.
    */
  static UCI_EXPORT DataPlanEffectivityStateType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new DataPlanEffectivityStateType initializing the data accessed by the new
    * DataPlanEffectivityStateType using the data accessed by the specified DataPlanEffectivityStateType (cloning).
    *
    * @param accessor The DataPlanEffectivityStateType that provides access to the data that is to be used to initialize
    *      the data accessed by the new created DataPlanEffectivityStateType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DataPlanEffectivityStateType.
    */
  static UCI_EXPORT DataPlanEffectivityStateType& create(const DataPlanEffectivityStateType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified DataPlanEffectivityStateType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The DataPlanEffectivityStateType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(DataPlanEffectivityStateType& accessor);

  /** Returns this accessor's type constant, i.e. dataPlanEffectivityStateType.
    *
    * @return This accessor's type constant, i.e. dataPlanEffectivityStateType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::dataPlanEffectivityStateType;
  }

  /** Returns the version that was initialized from the uci:version attribute of DataPlanEffectivityStateType.
    *
    * @return The version that was initialized from the uci:version attribute of DataPlanEffectivityStateType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const DataPlanEffectivityStateType& accessor) = 0;

  /** The Configuration states owned by this DataPlan Effectivity. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::DataPlanConfigurationStateType, uci::type::accessorType::dataPlanConfigurationStateType> EffectivityConfiguration;

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
  virtual uci::type::DataPlanEffectivityStateType& setEffectivityID(const uci::type::CommEffectivityID_Type& value) = 0;

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
  virtual uci::type::DataPlanEffectivityStateType& setPlanConfigurationState(const uci::type::PlanConfigurationStateEnum& value) = 0;

  /** Sets the value of the enumeration identified by PlanConfigurationState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DataPlanEffectivityStateType& setPlanConfigurationState(uci::type::PlanConfigurationStateEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the bounded list identified by EffectivityConfiguration.
    *
    * @return A const reference to the bounded list identified by EffectivityConfiguration.
    */
  virtual const uci::type::DataPlanEffectivityStateType::EffectivityConfiguration& getEffectivityConfiguration() const = 0;

  /** Returns a reference to the bounded list identified by EffectivityConfiguration.
    *
    * @return A reference to the bounded list identified by EffectivityConfiguration.
    */
  virtual uci::type::DataPlanEffectivityStateType::EffectivityConfiguration& getEffectivityConfiguration() = 0;

  /** Sets the bounded list identified by EffectivityConfiguration.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DataPlanEffectivityStateType& setEffectivityConfiguration(const uci::type::DataPlanEffectivityStateType::EffectivityConfiguration& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  DataPlanEffectivityStateType() {
  }

  /** The destructor [only available to derived classes]. */
  ~DataPlanEffectivityStateType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The DataPlanEffectivityStateType to copy from.
    */
  DataPlanEffectivityStateType(const DataPlanEffectivityStateType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this DataPlanEffectivityStateType to the contents of the
    * DataPlanEffectivityStateType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The DataPlanEffectivityStateType on the right hand side (rhs) of the assignment operator whose contents
    *      are used to set the contents of this DataPlanEffectivityStateType.
    * @return A reference to this DataPlanEffectivityStateType.
    */
  DataPlanEffectivityStateType& operator=(const DataPlanEffectivityStateType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_DATAPLANEFFECTIVITYSTATETYPE_H

