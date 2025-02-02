/** @file AO_TaskBaseType.h
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

#ifndef UCI_TYPE_AO_TASKBASETYPE_H
#define UCI_TYPE_AO_TASKBASETYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "AO_CapabilityEnum.h"
#include "AO_CodeType.h"
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
class AO_TaskBaseType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new AO_TaskBaseType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed AO_TaskBaseType.
    */
  static UCI_EXPORT AO_TaskBaseType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new AO_TaskBaseType initializing the data accessed by the new AO_TaskBaseType using the data
    * accessed by the specified AO_TaskBaseType (cloning).
    *
    * @param accessor The AO_TaskBaseType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created AO_TaskBaseType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed AO_TaskBaseType.
    */
  static UCI_EXPORT AO_TaskBaseType& create(const AO_TaskBaseType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified AO_TaskBaseType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The AO_TaskBaseType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(AO_TaskBaseType& accessor);

  /** Returns this accessor's type constant, i.e. aO_TaskBaseType.
    *
    * @return This accessor's type constant, i.e. aO_TaskBaseType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::aO_TaskBaseType;
  }

  /** Returns the version that was initialized from the uci:version attribute of AO_TaskBaseType.
    *
    * @return The version that was initialized from the uci:version attribute of AO_TaskBaseType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.001.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const AO_TaskBaseType& accessor) = 0;

  /** Returns a const reference to the value of the enumeration identified by CapabilityType.
    *
    * @return A const reference to the value of the enumeration identified by CapabilityType.
    */
  virtual const uci::type::AO_CapabilityEnum& getCapabilityType() const = 0;

  /** Returns a reference to the value of the enumeration identified by CapabilityType.
    *
    * @return A reference to the value of the enumeration identified by CapabilityType.
    */
  virtual uci::type::AO_CapabilityEnum& getCapabilityType() = 0;

  /** Sets the value of the enumeration identified by CapabilityType.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AO_TaskBaseType& setCapabilityType(const uci::type::AO_CapabilityEnum& value) = 0;

  /** Sets the value of the enumeration identified by CapabilityType.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AO_TaskBaseType& setCapabilityType(uci::type::AO_CapabilityEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by SupportedCode.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by SupportedCode.
    */
  virtual const uci::type::AO_CodeType& getSupportedCode() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by SupportedCode.
    *
    * @return A reference to the accessor that provides access to the complex content identified by SupportedCode.
    */
  virtual uci::type::AO_CodeType& getSupportedCode() = 0;

  /** Sets the complex content identified by SupportedCode to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SupportedCode.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AO_TaskBaseType& setSupportedCode(const uci::type::AO_CodeType& value) = 0;

  /** Returns whether the Element identified by SupportedCode exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by SupportedCode is enabled or not.
    */
  virtual bool hasSupportedCode() const = 0;

  /** Enables the Element identified by SupportedCode.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by SupportedCode.
    */
  virtual uci::type::AO_CodeType& enableSupportedCode(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by SupportedCode.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AO_TaskBaseType& clearSupportedCode() = 0;

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
  virtual uci::type::AO_TaskBaseType& setEmissionConstraints(const uci::type::OpticalCollectionConstraintsType& value) = 0;

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
  virtual uci::type::AO_TaskBaseType& clearEmissionConstraints() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  AO_TaskBaseType() {
  }

  /** The destructor [only available to derived classes]. */
  ~AO_TaskBaseType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The AO_TaskBaseType to copy from.
    */
  AO_TaskBaseType(const AO_TaskBaseType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this AO_TaskBaseType to the contents of the AO_TaskBaseType on the
    * right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The AO_TaskBaseType on the right hand side (rhs) of the assignment operator whose contents are used to set
    *      the contents of this AO_TaskBaseType.
    * @return A reference to this AO_TaskBaseType.
    */
  AO_TaskBaseType& operator=(const AO_TaskBaseType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_AO_TASKBASETYPE_H

