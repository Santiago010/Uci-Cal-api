/** @file AO_CommandResponseType.h
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

#ifndef UCI_TYPE_AO_COMMANDRESPONSETYPE_H
#define UCI_TYPE_AO_COMMANDRESPONSETYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "AO_CapabilityEnum.h"
#include "OpticalCollectionConstraintsType.h"

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
class AO_CommandResponseType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new AO_CommandResponseType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed AO_CommandResponseType.
    */
  static UCI_EXPORT AO_CommandResponseType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new AO_CommandResponseType initializing the data accessed by the new AO_CommandResponseType
    * using the data accessed by the specified AO_CommandResponseType (cloning).
    *
    * @param accessor The AO_CommandResponseType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created AO_CommandResponseType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed AO_CommandResponseType.
    */
  static UCI_EXPORT AO_CommandResponseType& create(const AO_CommandResponseType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified AO_CommandResponseType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The AO_CommandResponseType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(AO_CommandResponseType& accessor);

  /** Returns this accessor's type constant, i.e. aO_CommandResponseType.
    *
    * @return This accessor's type constant, i.e. aO_CommandResponseType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::aO_CommandResponseType;
  }

  /** Returns the version that was initialized from the uci:version attribute of AO_CommandResponseType.
    *
    * @return The version that was initialized from the uci:version attribute of AO_CommandResponseType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.001.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const AO_CommandResponseType& accessor) = 0;

  /** Returns a const reference to the value of the enumeration identified by Capability.
    *
    * @return A const reference to the value of the enumeration identified by Capability.
    */
  virtual const uci::type::AO_CapabilityEnum& getCapability() const = 0;

  /** Returns a reference to the value of the enumeration identified by Capability.
    *
    * @return A reference to the value of the enumeration identified by Capability.
    */
  virtual uci::type::AO_CapabilityEnum& getCapability() = 0;

  /** Sets the value of the enumeration identified by Capability.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AO_CommandResponseType& setCapability(const uci::type::AO_CapabilityEnum& value) = 0;

  /** Sets the value of the enumeration identified by Capability.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AO_CommandResponseType& setCapability(uci::type::AO_CapabilityEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * EmissionConstraints.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      EmissionConstraints.
    */
  virtual const uci::type::OpticalCollectionConstraintsType& getEmissionConstraints() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by EmissionConstraints.
    *
    * @return A reference to the accessor that provides access to the complex content identified by EmissionConstraints.
    */
  virtual uci::type::OpticalCollectionConstraintsType& getEmissionConstraints() = 0;

  /** Sets the complex content identified by EmissionConstraints to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by EmissionConstraints.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AO_CommandResponseType& setEmissionConstraints(const uci::type::OpticalCollectionConstraintsType& value) = 0;

  /** Returns whether the Element identified by EmissionConstraints exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by EmissionConstraints is enabled or not.
    */
  virtual bool hasEmissionConstraints() const = 0;

  /** Enables the Element identified by EmissionConstraints.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by EmissionConstraints.
    */
  virtual uci::type::OpticalCollectionConstraintsType& enableEmissionConstraints(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by EmissionConstraints.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AO_CommandResponseType& clearEmissionConstraints() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  AO_CommandResponseType() {
  }

  /** The destructor [only available to derived classes]. */
  ~AO_CommandResponseType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The AO_CommandResponseType to copy from.
    */
  AO_CommandResponseType(const AO_CommandResponseType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this AO_CommandResponseType to the contents of the
    * AO_CommandResponseType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The AO_CommandResponseType on the right hand side (rhs) of the assignment operator whose contents are used
    *      to set the contents of this AO_CommandResponseType.
    * @return A reference to this AO_CommandResponseType.
    */
  AO_CommandResponseType& operator=(const AO_CommandResponseType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_AO_COMMANDRESPONSETYPE_H

