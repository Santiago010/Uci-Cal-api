/** @file DataPlanActivationCommandStatusMDT.h
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

#ifndef UCI_TYPE_DATAPLANACTIVATIONCOMMANDSTATUSMDT_H
#define UCI_TYPE_DATAPLANACTIVATIONCOMMANDSTATUSMDT_H

#include "../base/export.h"
#include "CommandStatusBaseType.h"
#include "PlanActivationStateEnum.h"

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
class DataPlanActivationCommandStatusMDT : public virtual CommandStatusBaseType {
public:

  /** This method constructs a new DataPlanActivationCommandStatusMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DataPlanActivationCommandStatusMDT.
    */
  static UCI_EXPORT DataPlanActivationCommandStatusMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new DataPlanActivationCommandStatusMDT initializing the data accessed by the new
    * DataPlanActivationCommandStatusMDT using the data accessed by the specified DataPlanActivationCommandStatusMDT
    * (cloning).
    *
    * @param accessor The DataPlanActivationCommandStatusMDT that provides access to the data that is to be used to
    *      initialize the data accessed by the new created DataPlanActivationCommandStatusMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DataPlanActivationCommandStatusMDT.
    */
  static UCI_EXPORT DataPlanActivationCommandStatusMDT& create(const DataPlanActivationCommandStatusMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified DataPlanActivationCommandStatusMDT. Use of the specified accessor after it has
    * been destroyed will result in undefined behavior.
    *
    * @param accessor The DataPlanActivationCommandStatusMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(DataPlanActivationCommandStatusMDT& accessor);

  /** Returns this accessor's type constant, i.e. dataPlanActivationCommandStatusMDT.
    *
    * @return This accessor's type constant, i.e. dataPlanActivationCommandStatusMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::dataPlanActivationCommandStatusMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of DataPlanActivationCommandStatusMDT.
    *
    * @return The version that was initialized from the uci:version attribute of DataPlanActivationCommandStatusMDT.
    */
  static std::string getUCITypeVersion() {
    return "002.001.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const DataPlanActivationCommandStatusMDT& accessor) = 0;

  /** Returns a const reference to the value of the enumeration identified by PlanActivationCommandStatus.
    *
    * @return A const reference to the value of the enumeration identified by PlanActivationCommandStatus.
    */
  virtual const uci::type::PlanActivationStateEnum& getPlanActivationCommandStatus() const = 0;

  /** Returns a reference to the value of the enumeration identified by PlanActivationCommandStatus.
    *
    * @return A reference to the value of the enumeration identified by PlanActivationCommandStatus.
    */
  virtual uci::type::PlanActivationStateEnum& getPlanActivationCommandStatus() = 0;

  /** Sets the value of the enumeration identified by PlanActivationCommandStatus.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DataPlanActivationCommandStatusMDT& setPlanActivationCommandStatus(const uci::type::PlanActivationStateEnum& value) = 0;

  /** Sets the value of the enumeration identified by PlanActivationCommandStatus.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DataPlanActivationCommandStatusMDT& setPlanActivationCommandStatus(uci::type::PlanActivationStateEnum::EnumerationItem value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  DataPlanActivationCommandStatusMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~DataPlanActivationCommandStatusMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The DataPlanActivationCommandStatusMDT to copy from.
    */
  DataPlanActivationCommandStatusMDT(const DataPlanActivationCommandStatusMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this DataPlanActivationCommandStatusMDT to the contents of the
    * DataPlanActivationCommandStatusMDT on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The DataPlanActivationCommandStatusMDT on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this DataPlanActivationCommandStatusMDT.
    * @return A reference to this DataPlanActivationCommandStatusMDT.
    */
  DataPlanActivationCommandStatusMDT& operator=(const DataPlanActivationCommandStatusMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_DATAPLANACTIVATIONCOMMANDSTATUSMDT_H

