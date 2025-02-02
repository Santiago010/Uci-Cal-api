/** @file EntityManagementSetFusionEligibilityType.h
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

#ifndef UCI_TYPE_ENTITYMANAGEMENTSETFUSIONELIGIBILITYTYPE_H
#define UCI_TYPE_ENTITYMANAGEMENTSETFUSIONELIGIBILITYTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "EntityFusionEligibilityEnum.h"
#include "EntityID_Type.h"

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
class EntityManagementSetFusionEligibilityType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new EntityManagementSetFusionEligibilityType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EntityManagementSetFusionEligibilityType.
    */
  static UCI_EXPORT EntityManagementSetFusionEligibilityType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new EntityManagementSetFusionEligibilityType initializing the data accessed by the new
    * EntityManagementSetFusionEligibilityType using the data accessed by the specified
    * EntityManagementSetFusionEligibilityType (cloning).
    *
    * @param accessor The EntityManagementSetFusionEligibilityType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created EntityManagementSetFusionEligibilityType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EntityManagementSetFusionEligibilityType.
    */
  static UCI_EXPORT EntityManagementSetFusionEligibilityType& create(const EntityManagementSetFusionEligibilityType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified EntityManagementSetFusionEligibilityType. Use of the specified accessor after it
    * has been destroyed will result in undefined behavior.
    *
    * @param accessor The EntityManagementSetFusionEligibilityType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(EntityManagementSetFusionEligibilityType& accessor);

  /** Returns this accessor's type constant, i.e. entityManagementSetFusionEligibilityType.
    *
    * @return This accessor's type constant, i.e. entityManagementSetFusionEligibilityType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::entityManagementSetFusionEligibilityType;
  }

  /** Returns the version that was initialized from the uci:version attribute of EntityManagementSetFusionEligibilityType.
    *
    * @return The version that was initialized from the uci:version attribute of EntityManagementSetFusionEligibilityType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const EntityManagementSetFusionEligibilityType& accessor) = 0;

  /** Indicates the unique ID of the Entity whose fusion eligibility is being changed. [Occurrences: Minimum: 1; Maximum:
    * MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::EntityID_Type, uci::type::accessorType::entityID_Type> EntityID;

  /** Indicates the unique ID of an Entity which is excluded or included for future automated fusion operations with the
    * Entity given in the sibling EntityID element. This element is required when the sibling FusionEligibility indicates
    * SELECTIVE_EXCLUSION or SELECTIVE_INCLUSION and should be omitted otherwise. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::EntityID_Type, uci::type::accessorType::entityID_Type> CorrelatedEntityID;

  /** Returns a const reference to the bounded list identified by EntityID.
    *
    * @return A const reference to the bounded list identified by EntityID.
    */
  virtual const uci::type::EntityManagementSetFusionEligibilityType::EntityID& getEntityID() const = 0;

  /** Returns a reference to the bounded list identified by EntityID.
    *
    * @return A reference to the bounded list identified by EntityID.
    */
  virtual uci::type::EntityManagementSetFusionEligibilityType::EntityID& getEntityID() = 0;

  /** Sets the bounded list identified by EntityID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityManagementSetFusionEligibilityType& setEntityID(const uci::type::EntityManagementSetFusionEligibilityType::EntityID& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by FusionEligibility.
    *
    * @return A const reference to the value of the enumeration identified by FusionEligibility.
    */
  virtual const uci::type::EntityFusionEligibilityEnum& getFusionEligibility() const = 0;

  /** Returns a reference to the value of the enumeration identified by FusionEligibility.
    *
    * @return A reference to the value of the enumeration identified by FusionEligibility.
    */
  virtual uci::type::EntityFusionEligibilityEnum& getFusionEligibility() = 0;

  /** Sets the value of the enumeration identified by FusionEligibility.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityManagementSetFusionEligibilityType& setFusionEligibility(const uci::type::EntityFusionEligibilityEnum& value) = 0;

  /** Sets the value of the enumeration identified by FusionEligibility.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityManagementSetFusionEligibilityType& setFusionEligibility(uci::type::EntityFusionEligibilityEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by FusionEligibility exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by FusionEligibility is enabled or not.
    */
  virtual bool hasFusionEligibility() const = 0;

  /** Enables the Element identified by FusionEligibility.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by FusionEligibility.
    */
  virtual uci::type::EntityFusionEligibilityEnum& enableFusionEligibility(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by FusionEligibility.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityManagementSetFusionEligibilityType& clearFusionEligibility() = 0;

  /** Returns a const reference to the bounded list identified by CorrelatedEntityID.
    *
    * @return A const reference to the bounded list identified by CorrelatedEntityID.
    */
  virtual const uci::type::EntityManagementSetFusionEligibilityType::CorrelatedEntityID& getCorrelatedEntityID() const = 0;

  /** Returns a reference to the bounded list identified by CorrelatedEntityID.
    *
    * @return A reference to the bounded list identified by CorrelatedEntityID.
    */
  virtual uci::type::EntityManagementSetFusionEligibilityType::CorrelatedEntityID& getCorrelatedEntityID() = 0;

  /** Sets the bounded list identified by CorrelatedEntityID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityManagementSetFusionEligibilityType& setCorrelatedEntityID(const uci::type::EntityManagementSetFusionEligibilityType::CorrelatedEntityID& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  EntityManagementSetFusionEligibilityType() {
  }

  /** The destructor [only available to derived classes]. */
  ~EntityManagementSetFusionEligibilityType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The EntityManagementSetFusionEligibilityType to copy from.
    */
  EntityManagementSetFusionEligibilityType(const EntityManagementSetFusionEligibilityType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this EntityManagementSetFusionEligibilityType to the contents of the
    * EntityManagementSetFusionEligibilityType on the right hand side (rhs) of the assignment operator [only available to
    * derived classes].
    *
    * @param rhs The EntityManagementSetFusionEligibilityType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this EntityManagementSetFusionEligibilityType.
    * @return A reference to this EntityManagementSetFusionEligibilityType.
    */
  EntityManagementSetFusionEligibilityType& operator=(const EntityManagementSetFusionEligibilityType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ENTITYMANAGEMENTSETFUSIONELIGIBILITYTYPE_H

