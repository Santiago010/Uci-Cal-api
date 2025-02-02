/** @file CargoDeliverySpecificDataType.h
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

#ifndef UCI_TYPE_CARGODELIVERYSPECIFICDATATYPE_H
#define UCI_TYPE_CARGODELIVERYSPECIFICDATATYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "CargoDeliveryCapabilityEnum.h"
#include "CargoDeliverySubCapabilityEnum.h"

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
class CargoDeliverySpecificDataType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new CargoDeliverySpecificDataType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CargoDeliverySpecificDataType.
    */
  static UCI_EXPORT CargoDeliverySpecificDataType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new CargoDeliverySpecificDataType initializing the data accessed by the new
    * CargoDeliverySpecificDataType using the data accessed by the specified CargoDeliverySpecificDataType (cloning).
    *
    * @param accessor The CargoDeliverySpecificDataType that provides access to the data that is to be used to initialize
    *      the data accessed by the new created CargoDeliverySpecificDataType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CargoDeliverySpecificDataType.
    */
  static UCI_EXPORT CargoDeliverySpecificDataType& create(const CargoDeliverySpecificDataType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified CargoDeliverySpecificDataType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The CargoDeliverySpecificDataType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(CargoDeliverySpecificDataType& accessor);

  /** Returns this accessor's type constant, i.e. cargoDeliverySpecificDataType.
    *
    * @return This accessor's type constant, i.e. cargoDeliverySpecificDataType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::cargoDeliverySpecificDataType;
  }

  /** Returns the version that was initialized from the uci:version attribute of CargoDeliverySpecificDataType.
    *
    * @return The version that was initialized from the uci:version attribute of CargoDeliverySpecificDataType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const CargoDeliverySpecificDataType& accessor) = 0;

  /** Indicates a SubCapability of the CargoDelivery Capability; the second tier in the CargoDelivery taxonomy. List size
    * for this element is based on "Select All That Apply" condition. [Occurrences: Minimum: 0; Maximum: 2]
    */
  typedef uci::base::BoundedList<uci::type::CargoDeliverySubCapabilityEnum, uci::type::accessorType::cargoDeliverySubCapabilityEnum> SubCapabilityType;

  /** Returns a const reference to the value of the enumeration identified by CapabilityType.
    *
    * @return A const reference to the value of the enumeration identified by CapabilityType.
    */
  virtual const uci::type::CargoDeliveryCapabilityEnum& getCapabilityType() const = 0;

  /** Returns a reference to the value of the enumeration identified by CapabilityType.
    *
    * @return A reference to the value of the enumeration identified by CapabilityType.
    */
  virtual uci::type::CargoDeliveryCapabilityEnum& getCapabilityType() = 0;

  /** Sets the value of the enumeration identified by CapabilityType.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CargoDeliverySpecificDataType& setCapabilityType(const uci::type::CargoDeliveryCapabilityEnum& value) = 0;

  /** Sets the value of the enumeration identified by CapabilityType.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CargoDeliverySpecificDataType& setCapabilityType(uci::type::CargoDeliveryCapabilityEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by CapabilityType exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by CapabilityType is enabled or not.
    */
  virtual bool hasCapabilityType() const = 0;

  /** Enables the Element identified by CapabilityType.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by CapabilityType.
    */
  virtual uci::type::CargoDeliveryCapabilityEnum& enableCapabilityType(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by CapabilityType.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CargoDeliverySpecificDataType& clearCapabilityType() = 0;

  /** Returns a const reference to the bounded list identified by SubCapabilityType.
    *
    * @return A const reference to the bounded list identified by SubCapabilityType.
    */
  virtual const uci::type::CargoDeliverySpecificDataType::SubCapabilityType& getSubCapabilityType() const = 0;

  /** Returns a reference to the bounded list identified by SubCapabilityType.
    *
    * @return A reference to the bounded list identified by SubCapabilityType.
    */
  virtual uci::type::CargoDeliverySpecificDataType::SubCapabilityType& getSubCapabilityType() = 0;

  /** Sets the bounded list identified by SubCapabilityType.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CargoDeliverySpecificDataType& setSubCapabilityType(const uci::type::CargoDeliverySpecificDataType::SubCapabilityType& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  CargoDeliverySpecificDataType() {
  }

  /** The destructor [only available to derived classes]. */
  ~CargoDeliverySpecificDataType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The CargoDeliverySpecificDataType to copy from.
    */
  CargoDeliverySpecificDataType(const CargoDeliverySpecificDataType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this CargoDeliverySpecificDataType to the contents of the
    * CargoDeliverySpecificDataType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The CargoDeliverySpecificDataType on the right hand side (rhs) of the assignment operator whose contents
    *      are used to set the contents of this CargoDeliverySpecificDataType.
    * @return A reference to this CargoDeliverySpecificDataType.
    */
  CargoDeliverySpecificDataType& operator=(const CargoDeliverySpecificDataType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_CARGODELIVERYSPECIFICDATATYPE_H

