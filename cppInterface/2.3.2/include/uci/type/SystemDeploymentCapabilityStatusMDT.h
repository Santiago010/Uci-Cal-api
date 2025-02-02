/** @file SystemDeploymentCapabilityStatusMDT.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:08 PM
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

#ifndef UCI_TYPE_SYSTEMDEPLOYMENTCAPABILITYSTATUSMDT_H
#define UCI_TYPE_SYSTEMDEPLOYMENTCAPABILITYSTATUSMDT_H

#include "../base/BoundedList.h"
#include "../base/export.h"
#include "CapabilityStatusBaseType.h"
#include "SystemDeploymentCapabilityStatusType.h"

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
class SystemDeploymentCapabilityStatusMDT : public virtual CapabilityStatusBaseType {
public:

  /** This method constructs a new SystemDeploymentCapabilityStatusMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SystemDeploymentCapabilityStatusMDT.
    */
  static UCI_EXPORT SystemDeploymentCapabilityStatusMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new SystemDeploymentCapabilityStatusMDT initializing the data accessed by the new
    * SystemDeploymentCapabilityStatusMDT using the data accessed by the specified SystemDeploymentCapabilityStatusMDT
    * (cloning).
    *
    * @param accessor The SystemDeploymentCapabilityStatusMDT that provides access to the data that is to be used to
    *      initialize the data accessed by the new created SystemDeploymentCapabilityStatusMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SystemDeploymentCapabilityStatusMDT.
    */
  static UCI_EXPORT SystemDeploymentCapabilityStatusMDT& create(const SystemDeploymentCapabilityStatusMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified SystemDeploymentCapabilityStatusMDT. Use of the specified accessor after it has
    * been destroyed will result in undefined behavior.
    *
    * @param accessor The SystemDeploymentCapabilityStatusMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(SystemDeploymentCapabilityStatusMDT& accessor);

  /** Returns this accessor's type constant, i.e. systemDeploymentCapabilityStatusMDT.
    *
    * @return This accessor's type constant, i.e. systemDeploymentCapabilityStatusMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::systemDeploymentCapabilityStatusMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of SystemDeploymentCapabilityStatusMDT.
    *
    * @return The version that was initialized from the uci:version attribute of SystemDeploymentCapabilityStatusMDT.
    */
  static std::string getUCITypeVersion() {
    return "001.000.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const SystemDeploymentCapabilityStatusMDT& accessor) = 0;

  /** Indicates the high level availability/state of a Capability instance. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::SystemDeploymentCapabilityStatusType, uci::type::accessorType::systemDeploymentCapabilityStatusType> CapabilityStatus;

  /** Returns a const reference to the bounded list identified by CapabilityStatus.
    *
    * @return A const reference to the bounded list identified by CapabilityStatus.
    */
  virtual const uci::type::SystemDeploymentCapabilityStatusMDT::CapabilityStatus& getCapabilityStatus() const = 0;

  /** Returns a reference to the bounded list identified by CapabilityStatus.
    *
    * @return A reference to the bounded list identified by CapabilityStatus.
    */
  virtual uci::type::SystemDeploymentCapabilityStatusMDT::CapabilityStatus& getCapabilityStatus() = 0;

  /** Sets the bounded list identified by CapabilityStatus.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SystemDeploymentCapabilityStatusMDT& setCapabilityStatus(const uci::type::SystemDeploymentCapabilityStatusMDT::CapabilityStatus& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  SystemDeploymentCapabilityStatusMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~SystemDeploymentCapabilityStatusMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The SystemDeploymentCapabilityStatusMDT to copy from.
    */
  SystemDeploymentCapabilityStatusMDT(const SystemDeploymentCapabilityStatusMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this SystemDeploymentCapabilityStatusMDT to the contents of the
    * SystemDeploymentCapabilityStatusMDT on the right hand side (rhs) of the assignment operator [only available to
    * derived classes].
    *
    * @param rhs The SystemDeploymentCapabilityStatusMDT on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this SystemDeploymentCapabilityStatusMDT.
    * @return A reference to this SystemDeploymentCapabilityStatusMDT.
    */
  SystemDeploymentCapabilityStatusMDT& operator=(const SystemDeploymentCapabilityStatusMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_SYSTEMDEPLOYMENTCAPABILITYSTATUSMDT_H

