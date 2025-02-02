/** @file ESM_CapabilityStatusMDT.h
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

#ifndef UCI_TYPE_ESM_CAPABILITYSTATUSMDT_H
#define UCI_TYPE_ESM_CAPABILITYSTATUSMDT_H

#include "../base/BooleanAccessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "AmbiguityOrderingEnum.h"
#include "CapabilityStatusBaseType.h"
#include "CapabilityStatusType.h"
#include "ESM_MessageOutputsEnum.h"
#include "RF_ProfileType.h"

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
class ESM_CapabilityStatusMDT : public virtual CapabilityStatusBaseType {
public:

  /** This method constructs a new ESM_CapabilityStatusMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ESM_CapabilityStatusMDT.
    */
  static UCI_EXPORT ESM_CapabilityStatusMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ESM_CapabilityStatusMDT initializing the data accessed by the new
    * ESM_CapabilityStatusMDT using the data accessed by the specified ESM_CapabilityStatusMDT (cloning).
    *
    * @param accessor The ESM_CapabilityStatusMDT that provides access to the data that is to be used to initialize the
    *      data accessed by the new created ESM_CapabilityStatusMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ESM_CapabilityStatusMDT.
    */
  static UCI_EXPORT ESM_CapabilityStatusMDT& create(const ESM_CapabilityStatusMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ESM_CapabilityStatusMDT. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The ESM_CapabilityStatusMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ESM_CapabilityStatusMDT& accessor);

  /** Returns this accessor's type constant, i.e. eSM_CapabilityStatusMDT.
    *
    * @return This accessor's type constant, i.e. eSM_CapabilityStatusMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::eSM_CapabilityStatusMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of ESM_CapabilityStatusMDT.
    *
    * @return The version that was initialized from the uci:version attribute of ESM_CapabilityStatusMDT.
    */
  static std::string getUCITypeVersion() {
    return "002.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ESM_CapabilityStatusMDT& accessor) = 0;

  /** Indicates the high level availability/state of a Capability instance. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::CapabilityStatusType, uci::type::accessorType::capabilityStatusType> CapabilityStatus;

  /** Indicates a RF Emission Profile currently applied to the Capability. If omitted, there are no current profiles and
    * the Capability is operating per its defaults and other constraints. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::RF_ProfileType, uci::type::accessorType::rF_ProfileType> RF_Profile;

  /** Specifies which messages are currently being output by the Capability. See enumerated type annotations for details.
    * List size for this element is based on "Select All That Apply" condition. [Occurrences: Minimum: 0; Maximum: 6]
    */
  typedef uci::base::BoundedList<uci::type::ESM_MessageOutputsEnum, uci::type::accessorType::eSM_MessageOutputsEnum> CurrentMessageOutput;

  /** Returns a const reference to the bounded list identified by CapabilityStatus.
    *
    * @return A const reference to the bounded list identified by CapabilityStatus.
    */
  virtual const uci::type::ESM_CapabilityStatusMDT::CapabilityStatus& getCapabilityStatus() const = 0;

  /** Returns a reference to the bounded list identified by CapabilityStatus.
    *
    * @return A reference to the bounded list identified by CapabilityStatus.
    */
  virtual uci::type::ESM_CapabilityStatusMDT::CapabilityStatus& getCapabilityStatus() = 0;

  /** Sets the bounded list identified by CapabilityStatus.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ESM_CapabilityStatusMDT& setCapabilityStatus(const uci::type::ESM_CapabilityStatusMDT::CapabilityStatus& value) = 0;

  /** Returns a const reference to the bounded list identified by RF_Profile.
    *
    * @return A const reference to the bounded list identified by RF_Profile.
    */
  virtual const uci::type::ESM_CapabilityStatusMDT::RF_Profile& getRF_Profile() const = 0;

  /** Returns a reference to the bounded list identified by RF_Profile.
    *
    * @return A reference to the bounded list identified by RF_Profile.
    */
  virtual uci::type::ESM_CapabilityStatusMDT::RF_Profile& getRF_Profile() = 0;

  /** Sets the bounded list identified by RF_Profile.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ESM_CapabilityStatusMDT& setRF_Profile(const uci::type::ESM_CapabilityStatusMDT::RF_Profile& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by AmbiguityOrdering.
    *
    * @return A const reference to the value of the enumeration identified by AmbiguityOrdering.
    */
  virtual const uci::type::AmbiguityOrderingEnum& getAmbiguityOrdering() const = 0;

  /** Returns a reference to the value of the enumeration identified by AmbiguityOrdering.
    *
    * @return A reference to the value of the enumeration identified by AmbiguityOrdering.
    */
  virtual uci::type::AmbiguityOrderingEnum& getAmbiguityOrdering() = 0;

  /** Sets the value of the enumeration identified by AmbiguityOrdering.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ESM_CapabilityStatusMDT& setAmbiguityOrdering(const uci::type::AmbiguityOrderingEnum& value) = 0;

  /** Sets the value of the enumeration identified by AmbiguityOrdering.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ESM_CapabilityStatusMDT& setAmbiguityOrdering(uci::type::AmbiguityOrderingEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by AmbiguityOrdering exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by AmbiguityOrdering is enabled or not.
    */
  virtual bool hasAmbiguityOrdering() const = 0;

  /** Enables the Element identified by AmbiguityOrdering.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by AmbiguityOrdering.
    */
  virtual uci::type::AmbiguityOrderingEnum& enableAmbiguityOrdering(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by AmbiguityOrdering.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ESM_CapabilityStatusMDT& clearAmbiguityOrdering() = 0;

  /** Returns the value of the SimplePrimitive data type identified by RWR_AudioEnable.
    *
    * @return The value of the simple primitive data type identified by RWR_AudioEnable.
    */
  virtual xs::Boolean getRWR_AudioEnable() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by RWR_AudioEnable.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ESM_CapabilityStatusMDT& setRWR_AudioEnable(xs::Boolean value) = 0;

  /** Returns whether the Element identified by RWR_AudioEnable exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by RWR_AudioEnable is enabled or not.
    */
  virtual bool hasRWR_AudioEnable() const = 0;

  /** Clears (disabled) the Element identified by RWR_AudioEnable.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ESM_CapabilityStatusMDT& clearRWR_AudioEnable() = 0;

  /** Returns the value of the SimplePrimitive data type identified by SpectralDensityReporting.
    *
    * @return The value of the simple primitive data type identified by SpectralDensityReporting.
    */
  virtual xs::Boolean getSpectralDensityReporting() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by SpectralDensityReporting.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ESM_CapabilityStatusMDT& setSpectralDensityReporting(xs::Boolean value) = 0;

  /** Returns whether the Element identified by SpectralDensityReporting exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by SpectralDensityReporting is enabled or not.
    */
  virtual bool hasSpectralDensityReporting() const = 0;

  /** Clears (disabled) the Element identified by SpectralDensityReporting.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ESM_CapabilityStatusMDT& clearSpectralDensityReporting() = 0;

  /** Returns a const reference to the bounded list identified by CurrentMessageOutput.
    *
    * @return A const reference to the bounded list identified by CurrentMessageOutput.
    */
  virtual const uci::type::ESM_CapabilityStatusMDT::CurrentMessageOutput& getCurrentMessageOutput() const = 0;

  /** Returns a reference to the bounded list identified by CurrentMessageOutput.
    *
    * @return A reference to the bounded list identified by CurrentMessageOutput.
    */
  virtual uci::type::ESM_CapabilityStatusMDT::CurrentMessageOutput& getCurrentMessageOutput() = 0;

  /** Sets the bounded list identified by CurrentMessageOutput.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ESM_CapabilityStatusMDT& setCurrentMessageOutput(const uci::type::ESM_CapabilityStatusMDT::CurrentMessageOutput& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ESM_CapabilityStatusMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~ESM_CapabilityStatusMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ESM_CapabilityStatusMDT to copy from.
    */
  ESM_CapabilityStatusMDT(const ESM_CapabilityStatusMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ESM_CapabilityStatusMDT to the contents of the
    * ESM_CapabilityStatusMDT on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The ESM_CapabilityStatusMDT on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this ESM_CapabilityStatusMDT.
    * @return A reference to this ESM_CapabilityStatusMDT.
    */
  ESM_CapabilityStatusMDT& operator=(const ESM_CapabilityStatusMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ESM_CAPABILITYSTATUSMDT_H

