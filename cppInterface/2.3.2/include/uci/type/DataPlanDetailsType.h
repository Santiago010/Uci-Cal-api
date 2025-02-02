/** @file DataPlanDetailsType.h
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

#ifndef UCI_TYPE_DATAPLANDETAILSTYPE_H
#define UCI_TYPE_DATAPLANDETAILSTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "DataEffectivityType.h"
#include "PlanningTriggerType.h"
#include "SystemID_Type.h"

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

/** Ties Data Plan Details to Associated System ID. */
class DataPlanDetailsType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new DataPlanDetailsType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DataPlanDetailsType.
    */
  static UCI_EXPORT DataPlanDetailsType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new DataPlanDetailsType initializing the data accessed by the new DataPlanDetailsType using
    * the data accessed by the specified DataPlanDetailsType (cloning).
    *
    * @param accessor The DataPlanDetailsType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created DataPlanDetailsType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DataPlanDetailsType.
    */
  static UCI_EXPORT DataPlanDetailsType& create(const DataPlanDetailsType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified DataPlanDetailsType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The DataPlanDetailsType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(DataPlanDetailsType& accessor);

  /** Returns this accessor's type constant, i.e. dataPlanDetailsType.
    *
    * @return This accessor's type constant, i.e. dataPlanDetailsType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::dataPlanDetailsType;
  }

  /** Returns the version that was initialized from the uci:version attribute of DataPlanDetailsType.
    *
    * @return The version that was initialized from the uci:version attribute of DataPlanDetailsType.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const DataPlanDetailsType& accessor) = 0;

  /** Indicates a list of Data Plan details keyed upon Data Gateways and represents their configuration data for a
    * timespan, zone, or other trigger. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::DataEffectivityType, uci::type::accessorType::dataEffectivityType> AllocatedEffectivity;

  /** Returns a const reference to the accessor that provides access to the complex content identified by AllocatedToID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by AllocatedToID.
    */
  virtual const uci::type::SystemID_Type& getAllocatedToID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by AllocatedToID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by AllocatedToID.
    */
  virtual uci::type::SystemID_Type& getAllocatedToID() = 0;

  /** Sets the complex content identified by AllocatedToID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by AllocatedToID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DataPlanDetailsType& setAllocatedToID(const uci::type::SystemID_Type& value) = 0;

  /** Returns a const reference to the bounded list identified by AllocatedEffectivity.
    *
    * @return A const reference to the bounded list identified by AllocatedEffectivity.
    */
  virtual const uci::type::DataPlanDetailsType::AllocatedEffectivity& getAllocatedEffectivity() const = 0;

  /** Returns a reference to the bounded list identified by AllocatedEffectivity.
    *
    * @return A reference to the bounded list identified by AllocatedEffectivity.
    */
  virtual uci::type::DataPlanDetailsType::AllocatedEffectivity& getAllocatedEffectivity() = 0;

  /** Sets the bounded list identified by AllocatedEffectivity.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DataPlanDetailsType& setAllocatedEffectivity(const uci::type::DataPlanDetailsType::AllocatedEffectivity& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ReplanReason.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ReplanReason.
    */
  virtual const uci::type::PlanningTriggerType& getReplanReason() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ReplanReason.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ReplanReason.
    */
  virtual uci::type::PlanningTriggerType& getReplanReason() = 0;

  /** Sets the complex content identified by ReplanReason to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ReplanReason.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DataPlanDetailsType& setReplanReason(const uci::type::PlanningTriggerType& value) = 0;

  /** Returns whether the Element identified by ReplanReason exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ReplanReason is enabled or not.
    */
  virtual bool hasReplanReason() const = 0;

  /** Enables the Element identified by ReplanReason.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ReplanReason.
    */
  virtual uci::type::PlanningTriggerType& enableReplanReason(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ReplanReason.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DataPlanDetailsType& clearReplanReason() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  DataPlanDetailsType() {
  }

  /** The destructor [only available to derived classes]. */
  ~DataPlanDetailsType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The DataPlanDetailsType to copy from.
    */
  DataPlanDetailsType(const DataPlanDetailsType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this DataPlanDetailsType to the contents of the DataPlanDetailsType on
    * the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The DataPlanDetailsType on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this DataPlanDetailsType.
    * @return A reference to this DataPlanDetailsType.
    */
  DataPlanDetailsType& operator=(const DataPlanDetailsType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_DATAPLANDETAILSTYPE_H

