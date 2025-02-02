/** @file EntityManagementRequestMDT.h
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

#ifndef UCI_TYPE_ENTITYMANAGEMENTREQUESTMDT_H
#define UCI_TYPE_ENTITYMANAGEMENTREQUESTMDT_H

#include "../base/BooleanAccessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "EntityManagementRequestAuthorityEnum.h"
#include "EntityManagementRequestType.h"
#include "RequestBaseType.h"
#include "RequestSourceEnum.h"
#include "ServiceID_Type.h"
#include "SystemID_Type.h"
#include "SystemMessageIdentifierType.h"

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
class EntityManagementRequestMDT : public virtual RequestBaseType {
public:

  /** This method constructs a new EntityManagementRequestMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EntityManagementRequestMDT.
    */
  static UCI_EXPORT EntityManagementRequestMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new EntityManagementRequestMDT initializing the data accessed by the new
    * EntityManagementRequestMDT using the data accessed by the specified EntityManagementRequestMDT (cloning).
    *
    * @param accessor The EntityManagementRequestMDT that provides access to the data that is to be used to initialize the
    *      data accessed by the new created EntityManagementRequestMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EntityManagementRequestMDT.
    */
  static UCI_EXPORT EntityManagementRequestMDT& create(const EntityManagementRequestMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified EntityManagementRequestMDT. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The EntityManagementRequestMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(EntityManagementRequestMDT& accessor);

  /** Returns this accessor's type constant, i.e. entityManagementRequestMDT.
    *
    * @return This accessor's type constant, i.e. entityManagementRequestMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::entityManagementRequestMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of EntityManagementRequestMDT.
    *
    * @return The version that was initialized from the uci:version attribute of EntityManagementRequestMDT.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const EntityManagementRequestMDT& accessor) = 0;

  /** Indicates the type of request to perform on an Entity. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::EntityManagementRequestType, uci::type::accessorType::entityManagementRequestType> RequestType;

  /** One or more Systems to which the request applies. If omitted, the request applies to all Systems. [Occurrences:
    * Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::SystemID_Type, uci::type::accessorType::systemID_Type> SystemID;

  /** One or more Services to which the request applies. If omitted, the request applies to all Services (or all services
    * within the system specified by the sibling SystemID element). [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::ServiceID_Type, uci::type::accessorType::serviceID_Type> ServiceID;

  /** Returns a const reference to the value of the enumeration identified by AuthorityType.
    *
    * @return A const reference to the value of the enumeration identified by AuthorityType.
    */
  virtual const uci::type::EntityManagementRequestAuthorityEnum& getAuthorityType() const = 0;

  /** Returns a reference to the value of the enumeration identified by AuthorityType.
    *
    * @return A reference to the value of the enumeration identified by AuthorityType.
    */
  virtual uci::type::EntityManagementRequestAuthorityEnum& getAuthorityType() = 0;

  /** Sets the value of the enumeration identified by AuthorityType.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityManagementRequestMDT& setAuthorityType(const uci::type::EntityManagementRequestAuthorityEnum& value) = 0;

  /** Sets the value of the enumeration identified by AuthorityType.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityManagementRequestMDT& setAuthorityType(uci::type::EntityManagementRequestAuthorityEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by AuthorityType exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by AuthorityType is enabled or not.
    */
  virtual bool hasAuthorityType() const = 0;

  /** Enables the Element identified by AuthorityType.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by AuthorityType.
    */
  virtual uci::type::EntityManagementRequestAuthorityEnum& enableAuthorityType(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by AuthorityType.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityManagementRequestMDT& clearAuthorityType() = 0;

  /** Returns a const reference to the value of the enumeration identified by RequestSource.
    *
    * @return A const reference to the value of the enumeration identified by RequestSource.
    */
  virtual const uci::type::RequestSourceEnum& getRequestSource() const = 0;

  /** Returns a reference to the value of the enumeration identified by RequestSource.
    *
    * @return A reference to the value of the enumeration identified by RequestSource.
    */
  virtual uci::type::RequestSourceEnum& getRequestSource() = 0;

  /** Sets the value of the enumeration identified by RequestSource.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityManagementRequestMDT& setRequestSource(const uci::type::RequestSourceEnum& value) = 0;

  /** Sets the value of the enumeration identified by RequestSource.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityManagementRequestMDT& setRequestSource(uci::type::RequestSourceEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by RequestSource exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by RequestSource is enabled or not.
    */
  virtual bool hasRequestSource() const = 0;

  /** Enables the Element identified by RequestSource.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by RequestSource.
    */
  virtual uci::type::RequestSourceEnum& enableRequestSource(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by RequestSource.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityManagementRequestMDT& clearRequestSource() = 0;

  /** Returns a const reference to the bounded list identified by RequestType.
    *
    * @return A const reference to the bounded list identified by RequestType.
    */
  virtual const uci::type::EntityManagementRequestMDT::RequestType& getRequestType() const = 0;

  /** Returns a reference to the bounded list identified by RequestType.
    *
    * @return A reference to the bounded list identified by RequestType.
    */
  virtual uci::type::EntityManagementRequestMDT::RequestType& getRequestType() = 0;

  /** Sets the bounded list identified by RequestType.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityManagementRequestMDT& setRequestType(const uci::type::EntityManagementRequestMDT::RequestType& value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by UpdateFromControllingUnit.
    *
    * @return The value of the simple primitive data type identified by UpdateFromControllingUnit.
    */
  virtual xs::Boolean getUpdateFromControllingUnit() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by UpdateFromControllingUnit.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityManagementRequestMDT& setUpdateFromControllingUnit(xs::Boolean value) = 0;

  /** Returns whether the Element identified by UpdateFromControllingUnit exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by UpdateFromControllingUnit is enabled or not.
    */
  virtual bool hasUpdateFromControllingUnit() const = 0;

  /** Clears (disabled) the Element identified by UpdateFromControllingUnit.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityManagementRequestMDT& clearUpdateFromControllingUnit() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Source.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Source.
    */
  virtual const uci::type::SystemMessageIdentifierType& getSource() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Source.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Source.
    */
  virtual uci::type::SystemMessageIdentifierType& getSource() = 0;

  /** Sets the complex content identified by Source to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Source.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityManagementRequestMDT& setSource(const uci::type::SystemMessageIdentifierType& value) = 0;

  /** Returns whether the Element identified by Source exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Source is enabled or not.
    */
  virtual bool hasSource() const = 0;

  /** Enables the Element identified by Source.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Source.
    */
  virtual uci::type::SystemMessageIdentifierType& enableSource(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Source.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityManagementRequestMDT& clearSource() = 0;

  /** Returns a const reference to the bounded list identified by SystemID.
    *
    * @return A const reference to the bounded list identified by SystemID.
    */
  virtual const uci::type::EntityManagementRequestMDT::SystemID& getSystemID() const = 0;

  /** Returns a reference to the bounded list identified by SystemID.
    *
    * @return A reference to the bounded list identified by SystemID.
    */
  virtual uci::type::EntityManagementRequestMDT::SystemID& getSystemID() = 0;

  /** Sets the bounded list identified by SystemID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityManagementRequestMDT& setSystemID(const uci::type::EntityManagementRequestMDT::SystemID& value) = 0;

  /** Returns a const reference to the bounded list identified by ServiceID.
    *
    * @return A const reference to the bounded list identified by ServiceID.
    */
  virtual const uci::type::EntityManagementRequestMDT::ServiceID& getServiceID() const = 0;

  /** Returns a reference to the bounded list identified by ServiceID.
    *
    * @return A reference to the bounded list identified by ServiceID.
    */
  virtual uci::type::EntityManagementRequestMDT::ServiceID& getServiceID() = 0;

  /** Sets the bounded list identified by ServiceID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityManagementRequestMDT& setServiceID(const uci::type::EntityManagementRequestMDT::ServiceID& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  EntityManagementRequestMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~EntityManagementRequestMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The EntityManagementRequestMDT to copy from.
    */
  EntityManagementRequestMDT(const EntityManagementRequestMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this EntityManagementRequestMDT to the contents of the
    * EntityManagementRequestMDT on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The EntityManagementRequestMDT on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this EntityManagementRequestMDT.
    * @return A reference to this EntityManagementRequestMDT.
    */
  EntityManagementRequestMDT& operator=(const EntityManagementRequestMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ENTITYMANAGEMENTREQUESTMDT_H

