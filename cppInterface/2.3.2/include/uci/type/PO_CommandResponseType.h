/** @file PO_CommandResponseType.h
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

#ifndef UCI_TYPE_PO_COMMANDRESPONSETYPE_H
#define UCI_TYPE_PO_COMMANDRESPONSETYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "PO_CapabilityEnum.h"
#include "PO_CollectionConstraintsSettingsType.h"
#include "PO_ProductOutputCommandImageryType.h"
#include "SensorSpectrumEnum.h"

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
class PO_CommandResponseType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new PO_CommandResponseType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PO_CommandResponseType.
    */
  static UCI_EXPORT PO_CommandResponseType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new PO_CommandResponseType initializing the data accessed by the new PO_CommandResponseType
    * using the data accessed by the specified PO_CommandResponseType (cloning).
    *
    * @param accessor The PO_CommandResponseType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created PO_CommandResponseType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PO_CommandResponseType.
    */
  static UCI_EXPORT PO_CommandResponseType& create(const PO_CommandResponseType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified PO_CommandResponseType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The PO_CommandResponseType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(PO_CommandResponseType& accessor);

  /** Returns this accessor's type constant, i.e. pO_CommandResponseType.
    *
    * @return This accessor's type constant, i.e. pO_CommandResponseType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::pO_CommandResponseType;
  }

  /** Returns the version that was initialized from the uci:version attribute of PO_CommandResponseType.
    *
    * @return The version that was initialized from the uci:version attribute of PO_CommandResponseType.
    */
  static std::string getUCITypeVersion() {
    return "001.001.003.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const PO_CommandResponseType& accessor) = 0;

  /** Indicates the frequency band or spectrum that is used to search, track, or generate products with the PO subsystem.
    * List size for this element is based on "Select All That Apply" condition. [Occurrences: Minimum: 0; Maximum: 14]
    */
  typedef uci::base::BoundedList<uci::type::SensorSpectrumEnum, uci::type::accessorType::sensorSpectrumEnum> SensorSpectrum;

  /** Indicates a required output Product of the Command. Only Products consistent with Passive Optical and supported by
    * the commanded Passive Optical Capability should be requested. If omitted, no output Product should be produced. See
    * ProductTypeEnum for further details. If the associated Capability supports product generators, this element should be
    * omitted and product output should be controlled via the sibling ComponentSettings element. [Occurrences: Minimum: 0;
    * Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::PO_ProductOutputCommandImageryType, uci::type::accessorType::pO_ProductOutputCommandImageryType> ProductOutput;

  /** Returns a const reference to the value of the enumeration identified by Capability.
    *
    * @return A const reference to the value of the enumeration identified by Capability.
    */
  virtual const uci::type::PO_CapabilityEnum& getCapability() const = 0;

  /** Returns a reference to the value of the enumeration identified by Capability.
    *
    * @return A reference to the value of the enumeration identified by Capability.
    */
  virtual uci::type::PO_CapabilityEnum& getCapability() = 0;

  /** Sets the value of the enumeration identified by Capability.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_CommandResponseType& setCapability(const uci::type::PO_CapabilityEnum& value) = 0;

  /** Sets the value of the enumeration identified by Capability.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_CommandResponseType& setCapability(uci::type::PO_CapabilityEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the bounded list identified by SensorSpectrum.
    *
    * @return A const reference to the bounded list identified by SensorSpectrum.
    */
  virtual const uci::type::PO_CommandResponseType::SensorSpectrum& getSensorSpectrum() const = 0;

  /** Returns a reference to the bounded list identified by SensorSpectrum.
    *
    * @return A reference to the bounded list identified by SensorSpectrum.
    */
  virtual uci::type::PO_CommandResponseType::SensorSpectrum& getSensorSpectrum() = 0;

  /** Sets the bounded list identified by SensorSpectrum.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_CommandResponseType& setSensorSpectrum(const uci::type::PO_CommandResponseType::SensorSpectrum& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * CollectionConstraints.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      CollectionConstraints.
    */
  virtual const uci::type::PO_CollectionConstraintsSettingsType& getCollectionConstraints() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by CollectionConstraints.
    *
    * @return A reference to the accessor that provides access to the complex content identified by CollectionConstraints.
    */
  virtual uci::type::PO_CollectionConstraintsSettingsType& getCollectionConstraints() = 0;

  /** Sets the complex content identified by CollectionConstraints to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by CollectionConstraints.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_CommandResponseType& setCollectionConstraints(const uci::type::PO_CollectionConstraintsSettingsType& value) = 0;

  /** Returns whether the Element identified by CollectionConstraints exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by CollectionConstraints is enabled or not.
    */
  virtual bool hasCollectionConstraints() const = 0;

  /** Enables the Element identified by CollectionConstraints.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by CollectionConstraints.
    */
  virtual uci::type::PO_CollectionConstraintsSettingsType& enableCollectionConstraints(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by CollectionConstraints.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_CommandResponseType& clearCollectionConstraints() = 0;

  /** Returns a const reference to the bounded list identified by ProductOutput.
    *
    * @return A const reference to the bounded list identified by ProductOutput.
    */
  virtual const uci::type::PO_CommandResponseType::ProductOutput& getProductOutput() const = 0;

  /** Returns a reference to the bounded list identified by ProductOutput.
    *
    * @return A reference to the bounded list identified by ProductOutput.
    */
  virtual uci::type::PO_CommandResponseType::ProductOutput& getProductOutput() = 0;

  /** Sets the bounded list identified by ProductOutput.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_CommandResponseType& setProductOutput(const uci::type::PO_CommandResponseType::ProductOutput& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  PO_CommandResponseType() {
  }

  /** The destructor [only available to derived classes]. */
  ~PO_CommandResponseType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The PO_CommandResponseType to copy from.
    */
  PO_CommandResponseType(const PO_CommandResponseType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this PO_CommandResponseType to the contents of the
    * PO_CommandResponseType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The PO_CommandResponseType on the right hand side (rhs) of the assignment operator whose contents are used
    *      to set the contents of this PO_CommandResponseType.
    * @return A reference to this PO_CommandResponseType.
    */
  PO_CommandResponseType& operator=(const PO_CommandResponseType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PO_COMMANDRESPONSETYPE_H

