/** @file DMPI_CancelCommandStatusMDT.h
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

#ifndef UCI_TYPE_DMPI_CANCELCOMMANDSTATUSMDT_H
#define UCI_TYPE_DMPI_CANCELCOMMANDSTATUSMDT_H

#include "../base/export.h"
#include "CannotComplyType.h"
#include "CommandStatusBaseType.h"
#include "SourceID_ChoiceType.h"

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

/** The message data for the DMPI_CancelCommandStatus. */
class DMPI_CancelCommandStatusMDT : public virtual CommandStatusBaseType {
public:

  /** This method constructs a new DMPI_CancelCommandStatusMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DMPI_CancelCommandStatusMDT.
    */
  static UCI_EXPORT DMPI_CancelCommandStatusMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new DMPI_CancelCommandStatusMDT initializing the data accessed by the new
    * DMPI_CancelCommandStatusMDT using the data accessed by the specified DMPI_CancelCommandStatusMDT (cloning).
    *
    * @param accessor The DMPI_CancelCommandStatusMDT that provides access to the data that is to be used to initialize the
    *      data accessed by the new created DMPI_CancelCommandStatusMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DMPI_CancelCommandStatusMDT.
    */
  static UCI_EXPORT DMPI_CancelCommandStatusMDT& create(const DMPI_CancelCommandStatusMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified DMPI_CancelCommandStatusMDT. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The DMPI_CancelCommandStatusMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(DMPI_CancelCommandStatusMDT& accessor);

  /** Returns this accessor's type constant, i.e. dMPI_CancelCommandStatusMDT.
    *
    * @return This accessor's type constant, i.e. dMPI_CancelCommandStatusMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::dMPI_CancelCommandStatusMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of DMPI_CancelCommandStatusMDT.
    *
    * @return The version that was initialized from the uci:version attribute of DMPI_CancelCommandStatusMDT.
    */
  static std::string getUCITypeVersion() {
    return "002.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const DMPI_CancelCommandStatusMDT& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by StateReason.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by StateReason.
    */
  virtual const uci::type::CannotComplyType& getStateReason() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by StateReason.
    *
    * @return A reference to the accessor that provides access to the complex content identified by StateReason.
    */
  virtual uci::type::CannotComplyType& getStateReason() = 0;

  /** Sets the complex content identified by StateReason to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by StateReason.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_CancelCommandStatusMDT& setStateReason(const uci::type::CannotComplyType& value) = 0;

  /** Returns whether the Element identified by StateReason exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by StateReason is enabled or not.
    */
  virtual bool hasStateReason() const = 0;

  /** Enables the Element identified by StateReason.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by StateReason.
    */
  virtual uci::type::CannotComplyType& enableStateReason(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by StateReason.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_CancelCommandStatusMDT& clearStateReason() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by SourceID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by SourceID.
    */
  virtual const uci::type::SourceID_ChoiceType& getSourceID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by SourceID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by SourceID.
    */
  virtual uci::type::SourceID_ChoiceType& getSourceID() = 0;

  /** Sets the complex content identified by SourceID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SourceID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_CancelCommandStatusMDT& setSourceID(const uci::type::SourceID_ChoiceType& value) = 0;

  /** Returns whether the Element identified by SourceID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by SourceID is enabled or not.
    */
  virtual bool hasSourceID() const = 0;

  /** Enables the Element identified by SourceID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by SourceID.
    */
  virtual uci::type::SourceID_ChoiceType& enableSourceID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by SourceID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_CancelCommandStatusMDT& clearSourceID() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  DMPI_CancelCommandStatusMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~DMPI_CancelCommandStatusMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The DMPI_CancelCommandStatusMDT to copy from.
    */
  DMPI_CancelCommandStatusMDT(const DMPI_CancelCommandStatusMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this DMPI_CancelCommandStatusMDT to the contents of the
    * DMPI_CancelCommandStatusMDT on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The DMPI_CancelCommandStatusMDT on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this DMPI_CancelCommandStatusMDT.
    * @return A reference to this DMPI_CancelCommandStatusMDT.
    */
  DMPI_CancelCommandStatusMDT& operator=(const DMPI_CancelCommandStatusMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_DMPI_CANCELCOMMANDSTATUSMDT_H

