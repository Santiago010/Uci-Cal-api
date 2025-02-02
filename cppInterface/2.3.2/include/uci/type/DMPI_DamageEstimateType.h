/** @file DMPI_DamageEstimateType.h
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

#ifndef UCI_TYPE_DMPI_DAMAGEESTIMATETYPE_H
#define UCI_TYPE_DMPI_DAMAGEESTIMATETYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "DMPI_ID_Type.h"
#include "DMPI_LocationType.h"
#include "DistanceType.h"
#include "WeaponeeringType.h"

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
class DMPI_DamageEstimateType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new DMPI_DamageEstimateType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DMPI_DamageEstimateType.
    */
  static UCI_EXPORT DMPI_DamageEstimateType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new DMPI_DamageEstimateType initializing the data accessed by the new
    * DMPI_DamageEstimateType using the data accessed by the specified DMPI_DamageEstimateType (cloning).
    *
    * @param accessor The DMPI_DamageEstimateType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created DMPI_DamageEstimateType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DMPI_DamageEstimateType.
    */
  static UCI_EXPORT DMPI_DamageEstimateType& create(const DMPI_DamageEstimateType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified DMPI_DamageEstimateType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The DMPI_DamageEstimateType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(DMPI_DamageEstimateType& accessor);

  /** Returns this accessor's type constant, i.e. dMPI_DamageEstimateType.
    *
    * @return This accessor's type constant, i.e. dMPI_DamageEstimateType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::dMPI_DamageEstimateType;
  }

  /** Returns the version that was initialized from the uci:version attribute of DMPI_DamageEstimateType.
    *
    * @return The version that was initialized from the uci:version attribute of DMPI_DamageEstimateType.
    */
  static std::string getUCITypeVersion() {
    return "002.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const DMPI_DamageEstimateType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by DMPI_ID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by DMPI_ID.
    */
  virtual const uci::type::DMPI_ID_Type& getDMPI_ID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by DMPI_ID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by DMPI_ID.
    */
  virtual uci::type::DMPI_ID_Type& getDMPI_ID() = 0;

  /** Sets the complex content identified by DMPI_ID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by DMPI_ID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_DamageEstimateType& setDMPI_ID(const uci::type::DMPI_ID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by DMPI_Location.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by DMPI_Location.
    */
  virtual const uci::type::DMPI_LocationType& getDMPI_Location() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by DMPI_Location.
    *
    * @return A reference to the accessor that provides access to the complex content identified by DMPI_Location.
    */
  virtual uci::type::DMPI_LocationType& getDMPI_Location() = 0;

  /** Sets the complex content identified by DMPI_Location to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by DMPI_Location.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_DamageEstimateType& setDMPI_Location(const uci::type::DMPI_LocationType& value) = 0;

  /** Returns whether the Element identified by DMPI_Location exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by DMPI_Location is enabled or not.
    */
  virtual bool hasDMPI_Location() const = 0;

  /** Enables the Element identified by DMPI_Location.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by DMPI_Location.
    */
  virtual uci::type::DMPI_LocationType& enableDMPI_Location(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by DMPI_Location.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_DamageEstimateType& clearDMPI_Location() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Weaponeering.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Weaponeering.
    */
  virtual const uci::type::WeaponeeringType& getWeaponeering() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Weaponeering.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Weaponeering.
    */
  virtual uci::type::WeaponeeringType& getWeaponeering() = 0;

  /** Sets the complex content identified by Weaponeering to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Weaponeering.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_DamageEstimateType& setWeaponeering(const uci::type::WeaponeeringType& value) = 0;

  /** Returns whether the Element identified by Weaponeering exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Weaponeering is enabled or not.
    */
  virtual bool hasWeaponeering() const = 0;

  /** Enables the Element identified by Weaponeering.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Weaponeering.
    */
  virtual uci::type::WeaponeeringType& enableWeaponeering(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Weaponeering.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_DamageEstimateType& clearWeaponeering() = 0;

  /** Returns the value of the SimplePrimitive data type identified by EstimatedBlastRadius.
    *
    * @return The value of the simple primitive data type identified by EstimatedBlastRadius.
    */
  virtual uci::type::DistanceTypeValue getEstimatedBlastRadius() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by EstimatedBlastRadius.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_DamageEstimateType& setEstimatedBlastRadius(uci::type::DistanceTypeValue value) = 0;

  /** Returns whether the Element identified by EstimatedBlastRadius exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by EstimatedBlastRadius is enabled or not.
    */
  virtual bool hasEstimatedBlastRadius() const = 0;

  /** Clears (disabled) the Element identified by EstimatedBlastRadius.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_DamageEstimateType& clearEstimatedBlastRadius() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  DMPI_DamageEstimateType() {
  }

  /** The destructor [only available to derived classes]. */
  ~DMPI_DamageEstimateType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The DMPI_DamageEstimateType to copy from.
    */
  DMPI_DamageEstimateType(const DMPI_DamageEstimateType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this DMPI_DamageEstimateType to the contents of the
    * DMPI_DamageEstimateType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The DMPI_DamageEstimateType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this DMPI_DamageEstimateType.
    * @return A reference to this DMPI_DamageEstimateType.
    */
  DMPI_DamageEstimateType& operator=(const DMPI_DamageEstimateType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_DMPI_DAMAGEESTIMATETYPE_H

