/** @file EA_CapabilityMDT.h
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

#ifndef UCI_TYPE_EA_CAPABILITYMDT_H
#define UCI_TYPE_EA_CAPABILITYMDT_H

#include "../base/BoundedList.h"
#include "../base/UnsignedIntAccessor.h"
#include "../base/export.h"
#include "CapabilityBaseType.h"
#include "EA_CapabilityType.h"
#include "EA_ComponentType.h"

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
class EA_CapabilityMDT : public virtual CapabilityBaseType {
public:

  /** This method constructs a new EA_CapabilityMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EA_CapabilityMDT.
    */
  static UCI_EXPORT EA_CapabilityMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new EA_CapabilityMDT initializing the data accessed by the new EA_CapabilityMDT using the
    * data accessed by the specified EA_CapabilityMDT (cloning).
    *
    * @param accessor The EA_CapabilityMDT that provides access to the data that is to be used to initialize the data
    *      accessed by the new created EA_CapabilityMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EA_CapabilityMDT.
    */
  static UCI_EXPORT EA_CapabilityMDT& create(const EA_CapabilityMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified EA_CapabilityMDT. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The EA_CapabilityMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(EA_CapabilityMDT& accessor);

  /** Returns this accessor's type constant, i.e. eA_CapabilityMDT.
    *
    * @return This accessor's type constant, i.e. eA_CapabilityMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::eA_CapabilityMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of EA_CapabilityMDT.
    *
    * @return The version that was initialized from the uci:version attribute of EA_CapabilityMDT.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const EA_CapabilityMDT& accessor) = 0;

  /** Indicates an installed EA Capability, its configurable characteristics and its controllability. [Occurrences:
    * Minimum: 1; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::EA_CapabilityType, uci::type::accessorType::eA_CapabilityType> Capability;

  /** Indicates a Subsystem Component used to implement one or more EA Capabilities. An EA Component's characteristics and
    * performance directly influence those of the Capabilities. A single Component can support multiple Capabilities.
    * Components may have settings/configuration independent of Capabilities. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::EA_ComponentType, uci::type::accessorType::eA_ComponentType> EA_Component;

  /** Returns a const reference to the bounded list identified by Capability.
    *
    * @return A const reference to the bounded list identified by Capability.
    */
  virtual const uci::type::EA_CapabilityMDT::Capability& getCapability() const = 0;

  /** Returns a reference to the bounded list identified by Capability.
    *
    * @return A reference to the bounded list identified by Capability.
    */
  virtual uci::type::EA_CapabilityMDT::Capability& getCapability() = 0;

  /** Sets the bounded list identified by Capability.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EA_CapabilityMDT& setCapability(const uci::type::EA_CapabilityMDT::Capability& value) = 0;

  /** Returns a const reference to the bounded list identified by EA_Component.
    *
    * @return A const reference to the bounded list identified by EA_Component.
    */
  virtual const uci::type::EA_CapabilityMDT::EA_Component& getEA_Component() const = 0;

  /** Returns a reference to the bounded list identified by EA_Component.
    *
    * @return A reference to the bounded list identified by EA_Component.
    */
  virtual uci::type::EA_CapabilityMDT::EA_Component& getEA_Component() = 0;

  /** Sets the bounded list identified by EA_Component.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EA_CapabilityMDT& setEA_Component(const uci::type::EA_CapabilityMDT::EA_Component& value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by JammedTrackLimit.
    *
    * @return The value of the simple primitive data type identified by JammedTrackLimit.
    */
  virtual xs::UnsignedInt getJammedTrackLimit() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by JammedTrackLimit.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EA_CapabilityMDT& setJammedTrackLimit(xs::UnsignedInt value) = 0;

  /** Returns whether the Element identified by JammedTrackLimit exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by JammedTrackLimit is enabled or not.
    */
  virtual bool hasJammedTrackLimit() const = 0;

  /** Clears (disabled) the Element identified by JammedTrackLimit.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EA_CapabilityMDT& clearJammedTrackLimit() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  EA_CapabilityMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~EA_CapabilityMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The EA_CapabilityMDT to copy from.
    */
  EA_CapabilityMDT(const EA_CapabilityMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this EA_CapabilityMDT to the contents of the EA_CapabilityMDT on the
    * right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The EA_CapabilityMDT on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this EA_CapabilityMDT.
    * @return A reference to this EA_CapabilityMDT.
    */
  EA_CapabilityMDT& operator=(const EA_CapabilityMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_EA_CAPABILITYMDT_H

