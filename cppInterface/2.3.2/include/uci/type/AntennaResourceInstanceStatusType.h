/** @file AntennaResourceInstanceStatusType.h
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

#ifndef UCI_TYPE_ANTENNARESOURCEINSTANCESTATUSTYPE_H
#define UCI_TYPE_ANTENNARESOURCEINSTANCESTATUSTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "AntennaResourceID_Type.h"
#include "CapabilityAvailabilityEnum.h"
#include "PercentType.h"
#include "PowerType.h"

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

/** Status of antenna resource instance. Shared Antenna Resource Instances are not taxonomically described in UCI. It is
  * left to external actors to organize, uniquely describe and identify them.
  */
class AntennaResourceInstanceStatusType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new AntennaResourceInstanceStatusType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed AntennaResourceInstanceStatusType.
    */
  static UCI_EXPORT AntennaResourceInstanceStatusType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new AntennaResourceInstanceStatusType initializing the data accessed by the new
    * AntennaResourceInstanceStatusType using the data accessed by the specified AntennaResourceInstanceStatusType
    * (cloning).
    *
    * @param accessor The AntennaResourceInstanceStatusType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created AntennaResourceInstanceStatusType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed AntennaResourceInstanceStatusType.
    */
  static UCI_EXPORT AntennaResourceInstanceStatusType& create(const AntennaResourceInstanceStatusType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified AntennaResourceInstanceStatusType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The AntennaResourceInstanceStatusType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(AntennaResourceInstanceStatusType& accessor);

  /** Returns this accessor's type constant, i.e. antennaResourceInstanceStatusType.
    *
    * @return This accessor's type constant, i.e. antennaResourceInstanceStatusType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::antennaResourceInstanceStatusType;
  }

  /** Returns the version that was initialized from the uci:version attribute of AntennaResourceInstanceStatusType.
    *
    * @return The version that was initialized from the uci:version attribute of AntennaResourceInstanceStatusType.
    */
  static std::string getUCITypeVersion() {
    return "001.002.000.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const AntennaResourceInstanceStatusType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * AntennaResourceInstanceID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      AntennaResourceInstanceID.
    */
  virtual const uci::type::AntennaResourceID_Type& getAntennaResourceInstanceID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * AntennaResourceInstanceID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      AntennaResourceInstanceID.
    */
  virtual uci::type::AntennaResourceID_Type& getAntennaResourceInstanceID() = 0;

  /** Sets the complex content identified by AntennaResourceInstanceID to the contents of the complex content accessed by
    * the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by AntennaResourceInstanceID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AntennaResourceInstanceStatusType& setAntennaResourceInstanceID(const uci::type::AntennaResourceID_Type& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by Availability.
    *
    * @return A const reference to the value of the enumeration identified by Availability.
    */
  virtual const uci::type::CapabilityAvailabilityEnum& getAvailability() const = 0;

  /** Returns a reference to the value of the enumeration identified by Availability.
    *
    * @return A reference to the value of the enumeration identified by Availability.
    */
  virtual uci::type::CapabilityAvailabilityEnum& getAvailability() = 0;

  /** Sets the value of the enumeration identified by Availability.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AntennaResourceInstanceStatusType& setAvailability(const uci::type::CapabilityAvailabilityEnum& value) = 0;

  /** Sets the value of the enumeration identified by Availability.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AntennaResourceInstanceStatusType& setAvailability(uci::type::CapabilityAvailabilityEnum::EnumerationItem value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by DeltaInputPowerConsumption.
    *
    * @return The value of the simple primitive data type identified by DeltaInputPowerConsumption.
    */
  virtual uci::type::PowerTypeValue getDeltaInputPowerConsumption() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by DeltaInputPowerConsumption.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AntennaResourceInstanceStatusType& setDeltaInputPowerConsumption(uci::type::PowerTypeValue value) = 0;

  /** Returns whether the Element identified by DeltaInputPowerConsumption exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by DeltaInputPowerConsumption is enabled or not.
    */
  virtual bool hasDeltaInputPowerConsumption() const = 0;

  /** Clears (disabled) the Element identified by DeltaInputPowerConsumption.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AntennaResourceInstanceStatusType& clearDeltaInputPowerConsumption() = 0;

  /** Returns the value of the SimplePrimitive data type identified by PercentAccess.
    *
    * @return The value of the simple primitive data type identified by PercentAccess.
    */
  virtual uci::type::PercentTypeValue getPercentAccess() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by PercentAccess.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AntennaResourceInstanceStatusType& setPercentAccess(uci::type::PercentTypeValue value) = 0;

  /** Returns whether the Element identified by PercentAccess exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PercentAccess is enabled or not.
    */
  virtual bool hasPercentAccess() const = 0;

  /** Clears (disabled) the Element identified by PercentAccess.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::AntennaResourceInstanceStatusType& clearPercentAccess() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  AntennaResourceInstanceStatusType() {
  }

  /** The destructor [only available to derived classes]. */
  ~AntennaResourceInstanceStatusType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The AntennaResourceInstanceStatusType to copy from.
    */
  AntennaResourceInstanceStatusType(const AntennaResourceInstanceStatusType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this AntennaResourceInstanceStatusType to the contents of the
    * AntennaResourceInstanceStatusType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The AntennaResourceInstanceStatusType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this AntennaResourceInstanceStatusType.
    * @return A reference to this AntennaResourceInstanceStatusType.
    */
  AntennaResourceInstanceStatusType& operator=(const AntennaResourceInstanceStatusType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ANTENNARESOURCEINSTANCESTATUSTYPE_H

