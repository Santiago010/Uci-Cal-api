/** @file EntityManagementSwapType.h
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

#ifndef UCI_TYPE_ENTITYMANAGEMENTSWAPTYPE_H
#define UCI_TYPE_ENTITYMANAGEMENTSWAPTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "EntityID_Type.h"
#include "SwapEnum.h"

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
class EntityManagementSwapType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new EntityManagementSwapType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EntityManagementSwapType.
    */
  static UCI_EXPORT EntityManagementSwapType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new EntityManagementSwapType initializing the data accessed by the new
    * EntityManagementSwapType using the data accessed by the specified EntityManagementSwapType (cloning).
    *
    * @param accessor The EntityManagementSwapType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created EntityManagementSwapType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EntityManagementSwapType.
    */
  static UCI_EXPORT EntityManagementSwapType& create(const EntityManagementSwapType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified EntityManagementSwapType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The EntityManagementSwapType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(EntityManagementSwapType& accessor);

  /** Returns this accessor's type constant, i.e. entityManagementSwapType.
    *
    * @return This accessor's type constant, i.e. entityManagementSwapType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::entityManagementSwapType;
  }

  /** Returns the version that was initialized from the uci:version attribute of EntityManagementSwapType.
    *
    * @return The version that was initialized from the uci:version attribute of EntityManagementSwapType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const EntityManagementSwapType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by FirstEntityID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by FirstEntityID.
    */
  virtual const uci::type::EntityID_Type& getFirstEntityID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by FirstEntityID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by FirstEntityID.
    */
  virtual uci::type::EntityID_Type& getFirstEntityID() = 0;

  /** Sets the complex content identified by FirstEntityID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by FirstEntityID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityManagementSwapType& setFirstEntityID(const uci::type::EntityID_Type& value) = 0;

  /** Enables the Element identified by FirstEntityID.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available for the element. The use of
    *      this parameter provides support for inheritable types. This parameter defaults to uci::base::accessorType::null
    *      that is used to indicate that the access methods associated with the element shall provide access to data of the
    *      type that was specified for that element in the OMS schema, i.e. the element's base type. If specified, this
    *      field must either be a type ID associated with the element's base type or a type ID associated with a type that
    *      is derived from the element's base type.
    * @return A reference to the accessor that provides access to the complex content identified by FirstEntityID.
    */
  virtual uci::type::EntityID_Type& enableFirstEntityID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by SecondEntityID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by SecondEntityID.
    */
  virtual const uci::type::EntityID_Type& getSecondEntityID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by SecondEntityID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by SecondEntityID.
    */
  virtual uci::type::EntityID_Type& getSecondEntityID() = 0;

  /** Sets the complex content identified by SecondEntityID to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SecondEntityID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityManagementSwapType& setSecondEntityID(const uci::type::EntityID_Type& value) = 0;

  /** Enables the Element identified by SecondEntityID.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available for the element. The use of
    *      this parameter provides support for inheritable types. This parameter defaults to uci::base::accessorType::null
    *      that is used to indicate that the access methods associated with the element shall provide access to data of the
    *      type that was specified for that element in the OMS schema, i.e. the element's base type. If specified, this
    *      field must either be a type ID associated with the element's base type or a type ID associated with a type that
    *      is derived from the element's base type.
    * @return A reference to the accessor that provides access to the complex content identified by SecondEntityID.
    */
  virtual uci::type::EntityID_Type& enableSecondEntityID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the value of the enumeration identified by SwapCharacteristics.
    *
    * @return A const reference to the value of the enumeration identified by SwapCharacteristics.
    */
  virtual const uci::type::SwapEnum& getSwapCharacteristics() const = 0;

  /** Returns a reference to the value of the enumeration identified by SwapCharacteristics.
    *
    * @return A reference to the value of the enumeration identified by SwapCharacteristics.
    */
  virtual uci::type::SwapEnum& getSwapCharacteristics() = 0;

  /** Sets the value of the enumeration identified by SwapCharacteristics.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityManagementSwapType& setSwapCharacteristics(const uci::type::SwapEnum& value) = 0;

  /** Sets the value of the enumeration identified by SwapCharacteristics.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityManagementSwapType& setSwapCharacteristics(uci::type::SwapEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by SwapCharacteristics exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by SwapCharacteristics is enabled or not.
    */
  virtual bool hasSwapCharacteristics() const = 0;

  /** Enables the Element identified by SwapCharacteristics.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by SwapCharacteristics.
    */
  virtual uci::type::SwapEnum& enableSwapCharacteristics(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by SwapCharacteristics.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityManagementSwapType& clearSwapCharacteristics() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  EntityManagementSwapType() {
  }

  /** The destructor [only available to derived classes]. */
  ~EntityManagementSwapType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The EntityManagementSwapType to copy from.
    */
  EntityManagementSwapType(const EntityManagementSwapType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this EntityManagementSwapType to the contents of the
    * EntityManagementSwapType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The EntityManagementSwapType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this EntityManagementSwapType.
    * @return A reference to this EntityManagementSwapType.
    */
  EntityManagementSwapType& operator=(const EntityManagementSwapType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ENTITYMANAGEMENTSWAPTYPE_H

