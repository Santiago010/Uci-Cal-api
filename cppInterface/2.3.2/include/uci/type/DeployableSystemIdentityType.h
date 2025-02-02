/** @file DeployableSystemIdentityType.h
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

#ifndef UCI_TYPE_DEPLOYABLESYSTEMIDENTITYTYPE_H
#define UCI_TYPE_DEPLOYABLESYSTEMIDENTITYTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "PlatformIdentityType.h"
#include "SpecificIdentityType.h"
#include "StoreType.h"
#include "VehicleIdentificationType.h"

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

/** Indicates the type of system that is deployable. The deployable object could be a platform or defined by another 6016
  * taxonomy.
  */
class DeployableSystemIdentityType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new DeployableSystemIdentityType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DeployableSystemIdentityType.
    */
  static UCI_EXPORT DeployableSystemIdentityType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new DeployableSystemIdentityType initializing the data accessed by the new
    * DeployableSystemIdentityType using the data accessed by the specified DeployableSystemIdentityType (cloning).
    *
    * @param accessor The DeployableSystemIdentityType that provides access to the data that is to be used to initialize
    *      the data accessed by the new created DeployableSystemIdentityType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DeployableSystemIdentityType.
    */
  static UCI_EXPORT DeployableSystemIdentityType& create(const DeployableSystemIdentityType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified DeployableSystemIdentityType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The DeployableSystemIdentityType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(DeployableSystemIdentityType& accessor);

  /** Returns this accessor's type constant, i.e. deployableSystemIdentityType.
    *
    * @return This accessor's type constant, i.e. deployableSystemIdentityType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::deployableSystemIdentityType;
  }

  /** Returns the version that was initialized from the uci:version attribute of DeployableSystemIdentityType.
    *
    * @return The version that was initialized from the uci:version attribute of DeployableSystemIdentityType.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const DeployableSystemIdentityType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Platform.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Platform.
    */
  virtual const uci::type::PlatformIdentityType& getPlatform() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Platform.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Platform.
    */
  virtual uci::type::PlatformIdentityType& getPlatform() = 0;

  /** Sets the complex content identified by Platform to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Platform.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DeployableSystemIdentityType& setPlatform(const uci::type::PlatformIdentityType& value) = 0;

  /** Returns whether the Element identified by Platform exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Platform is enabled or not.
    */
  virtual bool hasPlatform() const = 0;

  /** Enables the Element identified by Platform.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Platform.
    */
  virtual uci::type::PlatformIdentityType& enablePlatform(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Platform.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DeployableSystemIdentityType& clearPlatform() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Specific.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Specific.
    */
  virtual const uci::type::SpecificIdentityType& getSpecific() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Specific.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Specific.
    */
  virtual uci::type::SpecificIdentityType& getSpecific() = 0;

  /** Sets the complex content identified by Specific to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Specific.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DeployableSystemIdentityType& setSpecific(const uci::type::SpecificIdentityType& value) = 0;

  /** Returns whether the Element identified by Specific exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Specific is enabled or not.
    */
  virtual bool hasSpecific() const = 0;

  /** Enables the Element identified by Specific.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Specific.
    */
  virtual uci::type::SpecificIdentityType& enableSpecific(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Specific.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DeployableSystemIdentityType& clearSpecific() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by SpecificVehicle.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by SpecificVehicle.
    */
  virtual const uci::type::VehicleIdentificationType& getSpecificVehicle() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by SpecificVehicle.
    *
    * @return A reference to the accessor that provides access to the complex content identified by SpecificVehicle.
    */
  virtual uci::type::VehicleIdentificationType& getSpecificVehicle() = 0;

  /** Sets the complex content identified by SpecificVehicle to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SpecificVehicle.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DeployableSystemIdentityType& setSpecificVehicle(const uci::type::VehicleIdentificationType& value) = 0;

  /** Returns whether the Element identified by SpecificVehicle exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by SpecificVehicle is enabled or not.
    */
  virtual bool hasSpecificVehicle() const = 0;

  /** Enables the Element identified by SpecificVehicle.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by SpecificVehicle.
    */
  virtual uci::type::VehicleIdentificationType& enableSpecificVehicle(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by SpecificVehicle.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DeployableSystemIdentityType& clearSpecificVehicle() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Weapon.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Weapon.
    */
  virtual const uci::type::StoreType& getWeapon() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Weapon.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Weapon.
    */
  virtual uci::type::StoreType& getWeapon() = 0;

  /** Sets the complex content identified by Weapon to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Weapon.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DeployableSystemIdentityType& setWeapon(const uci::type::StoreType& value) = 0;

  /** Returns whether the Element identified by Weapon exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Weapon is enabled or not.
    */
  virtual bool hasWeapon() const = 0;

  /** Enables the Element identified by Weapon.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Weapon.
    */
  virtual uci::type::StoreType& enableWeapon(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Weapon.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DeployableSystemIdentityType& clearWeapon() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  DeployableSystemIdentityType() {
  }

  /** The destructor [only available to derived classes]. */
  ~DeployableSystemIdentityType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The DeployableSystemIdentityType to copy from.
    */
  DeployableSystemIdentityType(const DeployableSystemIdentityType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this DeployableSystemIdentityType to the contents of the
    * DeployableSystemIdentityType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The DeployableSystemIdentityType on the right hand side (rhs) of the assignment operator whose contents
    *      are used to set the contents of this DeployableSystemIdentityType.
    * @return A reference to this DeployableSystemIdentityType.
    */
  DeployableSystemIdentityType& operator=(const DeployableSystemIdentityType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_DEPLOYABLESYSTEMIDENTITYTYPE_H

