/** @file SAR_CommandStatusMDT.h
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

#ifndef UCI_TYPE_SAR_COMMANDSTATUSMDT_H
#define UCI_TYPE_SAR_COMMANDSTATUSMDT_H

#include "../base/export.h"
#include "CapabilityCommandStatusBaseType.h"

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
class SAR_CommandStatusMDT : public virtual CapabilityCommandStatusBaseType {
public:

  /** This method constructs a new SAR_CommandStatusMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SAR_CommandStatusMDT.
    */
  static UCI_EXPORT SAR_CommandStatusMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new SAR_CommandStatusMDT initializing the data accessed by the new SAR_CommandStatusMDT
    * using the data accessed by the specified SAR_CommandStatusMDT (cloning).
    *
    * @param accessor The SAR_CommandStatusMDT that provides access to the data that is to be used to initialize the data
    *      accessed by the new created SAR_CommandStatusMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SAR_CommandStatusMDT.
    */
  static UCI_EXPORT SAR_CommandStatusMDT& create(const SAR_CommandStatusMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified SAR_CommandStatusMDT. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The SAR_CommandStatusMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(SAR_CommandStatusMDT& accessor);

  /** Returns this accessor's type constant, i.e. sAR_CommandStatusMDT.
    *
    * @return This accessor's type constant, i.e. sAR_CommandStatusMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::sAR_CommandStatusMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of SAR_CommandStatusMDT.
    *
    * @return The version that was initialized from the uci:version attribute of SAR_CommandStatusMDT.
    */
  static std::string getUCITypeVersion() {
    return "002.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const SAR_CommandStatusMDT& accessor) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  SAR_CommandStatusMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~SAR_CommandStatusMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The SAR_CommandStatusMDT to copy from.
    */
  SAR_CommandStatusMDT(const SAR_CommandStatusMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this SAR_CommandStatusMDT to the contents of the SAR_CommandStatusMDT
    * on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The SAR_CommandStatusMDT on the right hand side (rhs) of the assignment operator whose contents are used
    *      to set the contents of this SAR_CommandStatusMDT.
    * @return A reference to this SAR_CommandStatusMDT.
    */
  SAR_CommandStatusMDT& operator=(const SAR_CommandStatusMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_SAR_COMMANDSTATUSMDT_H

