/** @file EntityLostSourceType.h
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

#ifndef UCI_TYPE_ENTITYLOSTSOURCETYPE_H
#define UCI_TYPE_ENTITYLOSTSOURCETYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "CapabilityID_Type.h"
#include "ServiceID_Type.h"
#include "SystemID_Type.h"

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

/** Indicates the System, Service, and Capability that has reported that an Entity has been lost. */
class EntityLostSourceType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new EntityLostSourceType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EntityLostSourceType.
    */
  static UCI_EXPORT EntityLostSourceType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new EntityLostSourceType initializing the data accessed by the new EntityLostSourceType
    * using the data accessed by the specified EntityLostSourceType (cloning).
    *
    * @param accessor The EntityLostSourceType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created EntityLostSourceType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EntityLostSourceType.
    */
  static UCI_EXPORT EntityLostSourceType& create(const EntityLostSourceType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified EntityLostSourceType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The EntityLostSourceType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(EntityLostSourceType& accessor);

  /** Returns this accessor's type constant, i.e. entityLostSourceType.
    *
    * @return This accessor's type constant, i.e. entityLostSourceType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::entityLostSourceType;
  }

  /** Returns the version that was initialized from the uci:version attribute of EntityLostSourceType.
    *
    * @return The version that was initialized from the uci:version attribute of EntityLostSourceType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const EntityLostSourceType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by SystemID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by SystemID.
    */
  virtual const uci::type::SystemID_Type& getSystemID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by SystemID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by SystemID.
    */
  virtual uci::type::SystemID_Type& getSystemID() = 0;

  /** Sets the complex content identified by SystemID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SystemID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityLostSourceType& setSystemID(const uci::type::SystemID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ServiceID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ServiceID.
    */
  virtual const uci::type::ServiceID_Type& getServiceID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ServiceID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ServiceID.
    */
  virtual uci::type::ServiceID_Type& getServiceID() = 0;

  /** Sets the complex content identified by ServiceID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ServiceID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityLostSourceType& setServiceID(const uci::type::ServiceID_Type& value) = 0;

  /** Returns whether the Element identified by ServiceID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ServiceID is enabled or not.
    */
  virtual bool hasServiceID() const = 0;

  /** Enables the Element identified by ServiceID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ServiceID.
    */
  virtual uci::type::ServiceID_Type& enableServiceID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ServiceID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityLostSourceType& clearServiceID() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by CapabilityID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by CapabilityID.
    */
  virtual const uci::type::CapabilityID_Type& getCapabilityID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by CapabilityID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by CapabilityID.
    */
  virtual uci::type::CapabilityID_Type& getCapabilityID() = 0;

  /** Sets the complex content identified by CapabilityID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by CapabilityID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityLostSourceType& setCapabilityID(const uci::type::CapabilityID_Type& value) = 0;

  /** Returns whether the Element identified by CapabilityID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by CapabilityID is enabled or not.
    */
  virtual bool hasCapabilityID() const = 0;

  /** Enables the Element identified by CapabilityID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by CapabilityID.
    */
  virtual uci::type::CapabilityID_Type& enableCapabilityID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by CapabilityID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityLostSourceType& clearCapabilityID() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  EntityLostSourceType() {
  }

  /** The destructor [only available to derived classes]. */
  ~EntityLostSourceType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The EntityLostSourceType to copy from.
    */
  EntityLostSourceType(const EntityLostSourceType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this EntityLostSourceType to the contents of the EntityLostSourceType
    * on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The EntityLostSourceType on the right hand side (rhs) of the assignment operator whose contents are used
    *      to set the contents of this EntityLostSourceType.
    * @return A reference to this EntityLostSourceType.
    */
  EntityLostSourceType& operator=(const EntityLostSourceType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ENTITYLOSTSOURCETYPE_H

