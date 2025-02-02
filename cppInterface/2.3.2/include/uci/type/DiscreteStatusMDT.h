/** @file DiscreteStatusMDT.h
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

#ifndef UCI_TYPE_DISCRETESTATUSMDT_H
#define UCI_TYPE_DISCRETESTATUSMDT_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "NameValuePairType.h"

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

/** This contains the current detailed status of the reporting Subsystem. This message is for reporting subsystem unique
  * data that cannot be reported with other messages.
  */
class DiscreteStatusMDT : public virtual uci::base::Accessor {
public:

  /** This method constructs a new DiscreteStatusMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DiscreteStatusMDT.
    */
  static UCI_EXPORT DiscreteStatusMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new DiscreteStatusMDT initializing the data accessed by the new DiscreteStatusMDT using the
    * data accessed by the specified DiscreteStatusMDT (cloning).
    *
    * @param accessor The DiscreteStatusMDT that provides access to the data that is to be used to initialize the data
    *      accessed by the new created DiscreteStatusMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DiscreteStatusMDT.
    */
  static UCI_EXPORT DiscreteStatusMDT& create(const DiscreteStatusMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified DiscreteStatusMDT. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The DiscreteStatusMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(DiscreteStatusMDT& accessor);

  /** Returns this accessor's type constant, i.e. discreteStatusMDT.
    *
    * @return This accessor's type constant, i.e. discreteStatusMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::discreteStatusMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of DiscreteStatusMDT.
    *
    * @return The version that was initialized from the uci:version attribute of DiscreteStatusMDT.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const DiscreteStatusMDT& accessor) = 0;

  /** This field contains the status of a discrete within the system. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::NameValuePairType, uci::type::accessorType::nameValuePairType> DiscreteStatus;

  /** Returns a const reference to the bounded list identified by DiscreteStatus.
    *
    * @return A const reference to the bounded list identified by DiscreteStatus.
    */
  virtual const uci::type::DiscreteStatusMDT::DiscreteStatus& getDiscreteStatus() const = 0;

  /** Returns a reference to the bounded list identified by DiscreteStatus.
    *
    * @return A reference to the bounded list identified by DiscreteStatus.
    */
  virtual uci::type::DiscreteStatusMDT::DiscreteStatus& getDiscreteStatus() = 0;

  /** Sets the bounded list identified by DiscreteStatus.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DiscreteStatusMDT& setDiscreteStatus(const uci::type::DiscreteStatusMDT::DiscreteStatus& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  DiscreteStatusMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~DiscreteStatusMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The DiscreteStatusMDT to copy from.
    */
  DiscreteStatusMDT(const DiscreteStatusMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this DiscreteStatusMDT to the contents of the DiscreteStatusMDT on the
    * right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The DiscreteStatusMDT on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this DiscreteStatusMDT.
    * @return A reference to this DiscreteStatusMDT.
    */
  DiscreteStatusMDT& operator=(const DiscreteStatusMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_DISCRETESTATUSMDT_H

