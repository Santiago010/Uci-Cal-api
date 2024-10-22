/** @file PolarizationControlType.h
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

#ifndef UCI_TYPE_POLARIZATIONCONTROLTYPE_H
#define UCI_TYPE_POLARIZATIONCONTROLTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "DurationType.h"
#include "PolarizationPortEnum.h"
#include "PolarizationType.h"

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

/** If two polarizations are commanded, duration is a required field. During operation the antenna will automatically
  * switch between polarizations with each polarization being transmitted for the time defined by duration filed before
  * switching to the other polarization. Required for NEW commands.
  */
class PolarizationControlType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new PolarizationControlType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PolarizationControlType.
    */
  static UCI_EXPORT PolarizationControlType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new PolarizationControlType initializing the data accessed by the new
    * PolarizationControlType using the data accessed by the specified PolarizationControlType (cloning).
    *
    * @param accessor The PolarizationControlType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created PolarizationControlType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PolarizationControlType.
    */
  static UCI_EXPORT PolarizationControlType& create(const PolarizationControlType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified PolarizationControlType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The PolarizationControlType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(PolarizationControlType& accessor);

  /** Returns this accessor's type constant, i.e. polarizationControlType.
    *
    * @return This accessor's type constant, i.e. polarizationControlType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::polarizationControlType;
  }

  /** Returns the version that was initialized from the uci:version attribute of PolarizationControlType.
    *
    * @return The version that was initialized from the uci:version attribute of PolarizationControlType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const PolarizationControlType& accessor) = 0;

  /** Returns a const reference to the value of the enumeration identified by PortPolarization.
    *
    * @return A const reference to the value of the enumeration identified by PortPolarization.
    */
  virtual const uci::type::PolarizationPortEnum& getPortPolarization() const = 0;

  /** Returns a reference to the value of the enumeration identified by PortPolarization.
    *
    * @return A reference to the value of the enumeration identified by PortPolarization.
    */
  virtual uci::type::PolarizationPortEnum& getPortPolarization() = 0;

  /** Sets the value of the enumeration identified by PortPolarization.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PolarizationControlType& setPortPolarization(const uci::type::PolarizationPortEnum& value) = 0;

  /** Sets the value of the enumeration identified by PortPolarization.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PolarizationControlType& setPortPolarization(uci::type::PolarizationPortEnum::EnumerationItem value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Duration.
    *
    * @return The value of the simple primitive data type identified by Duration.
    */
  virtual uci::type::DurationTypeValue getDuration() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Duration.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PolarizationControlType& setDuration(uci::type::DurationTypeValue value) = 0;

  /** Returns whether the Element identified by Duration exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Duration is enabled or not.
    */
  virtual bool hasDuration() const = 0;

  /** Clears (disabled) the Element identified by Duration.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PolarizationControlType& clearDuration() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * PolarizationDescription.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      PolarizationDescription.
    */
  virtual const uci::type::PolarizationType& getPolarizationDescription() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * PolarizationDescription.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      PolarizationDescription.
    */
  virtual uci::type::PolarizationType& getPolarizationDescription() = 0;

  /** Sets the complex content identified by PolarizationDescription to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by PolarizationDescription.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PolarizationControlType& setPolarizationDescription(const uci::type::PolarizationType& value) = 0;

  /** Returns whether the Element identified by PolarizationDescription exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PolarizationDescription is enabled or not.
    */
  virtual bool hasPolarizationDescription() const = 0;

  /** Enables the Element identified by PolarizationDescription.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by
    *      PolarizationDescription.
    */
  virtual uci::type::PolarizationType& enablePolarizationDescription(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by PolarizationDescription.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PolarizationControlType& clearPolarizationDescription() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  PolarizationControlType() {
  }

  /** The destructor [only available to derived classes]. */
  ~PolarizationControlType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The PolarizationControlType to copy from.
    */
  PolarizationControlType(const PolarizationControlType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this PolarizationControlType to the contents of the
    * PolarizationControlType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The PolarizationControlType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this PolarizationControlType.
    * @return A reference to this PolarizationControlType.
    */
  PolarizationControlType& operator=(const PolarizationControlType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_POLARIZATIONCONTROLTYPE_H

