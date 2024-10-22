/** @file PlatformFunctionStatusCategoryType.h
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

#ifndef UCI_TYPE_PLATFORMFUNCTIONSTATUSCATEGORYTYPE_H
#define UCI_TYPE_PLATFORMFUNCTIONSTATUSCATEGORYTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "PlatformFunctionAirEnum.h"
#include "PlatformFunctionEW_Enum.h"
#include "PlatformFunctionGroundEnum.h"
#include "PlatformFunctionSeaSurfaceEnum.h"

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
class PlatformFunctionStatusCategoryType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new PlatformFunctionStatusCategoryType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PlatformFunctionStatusCategoryType.
    */
  static UCI_EXPORT PlatformFunctionStatusCategoryType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new PlatformFunctionStatusCategoryType initializing the data accessed by the new
    * PlatformFunctionStatusCategoryType using the data accessed by the specified PlatformFunctionStatusCategoryType
    * (cloning).
    *
    * @param accessor The PlatformFunctionStatusCategoryType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created PlatformFunctionStatusCategoryType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PlatformFunctionStatusCategoryType.
    */
  static UCI_EXPORT PlatformFunctionStatusCategoryType& create(const PlatformFunctionStatusCategoryType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified PlatformFunctionStatusCategoryType. Use of the specified accessor after it has
    * been destroyed will result in undefined behavior.
    *
    * @param accessor The PlatformFunctionStatusCategoryType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(PlatformFunctionStatusCategoryType& accessor);

  /** Returns this accessor's type constant, i.e. platformFunctionStatusCategoryType.
    *
    * @return This accessor's type constant, i.e. platformFunctionStatusCategoryType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::platformFunctionStatusCategoryType;
  }

  /** Returns the version that was initialized from the uci:version attribute of PlatformFunctionStatusCategoryType.
    *
    * @return The version that was initialized from the uci:version attribute of PlatformFunctionStatusCategoryType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.001.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const PlatformFunctionStatusCategoryType& accessor) = 0;

  /** The following enumeration is used to identify which element of this Choice has been chosen. */
  enum PlatformFunctionStatusCategoryTypeChoice {
    PLATFORMFUNCTIONSTATUSCATEGORYTYPE_CHOICE_NONE,
    PLATFORMFUNCTIONSTATUSCATEGORYTYPE_CHOICE_AIR,
    PLATFORMFUNCTIONSTATUSCATEGORYTYPE_CHOICE_SEASURFACE,
    PLATFORMFUNCTIONSTATUSCATEGORYTYPE_CHOICE_GROUND,
    PLATFORMFUNCTIONSTATUSCATEGORYTYPE_CHOICE_EW
  };

  /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active.
    *
    * @return The selected item's enumerated value.
    */
  virtual PlatformFunctionStatusCategoryTypeChoice getPlatformFunctionStatusCategoryTypeChoiceOrdinal() const = 0;

  /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
    * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
    * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
    * getPlatformFunctionStatusCategoryTypeChoiceOrdinal() will be the ordinal specified when this method was invoked. In
    * addition, the access methods associated with the chosen element will be enabled and will provide access to the chosen
    * element.
    *
    * @param chosenElementOrdinal The ordinal to set this choice's selected ordinal to.
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlatformFunctionStatusCategoryType& setPlatformFunctionStatusCategoryTypeChoiceOrdinal(PlatformFunctionStatusCategoryTypeChoice chosenElementOrdinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the value of the enumeration identified by Air.
    *
    * @return A const reference to the value of the enumeration identified by Air.
    */
  virtual const uci::type::PlatformFunctionAirEnum& getAir() const = 0;

  /** Returns a reference to the value of the enumeration identified by Air.
    *
    * @return A reference to the value of the enumeration identified by Air.
    */
  virtual uci::type::PlatformFunctionAirEnum& getAir() = 0;

  /** Sets the value of the enumeration identified by Air.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlatformFunctionStatusCategoryType& setAir(const uci::type::PlatformFunctionAirEnum& value) = 0;

  /** Sets the value of the enumeration identified by Air.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlatformFunctionStatusCategoryType& setAir(uci::type::PlatformFunctionAirEnum::EnumerationItem value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by Air.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by Air, false otherwise.
    */
  virtual bool isAir() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by Air.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by Air.
    */
  virtual uci::type::PlatformFunctionAirEnum& chooseAir(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the value of the enumeration identified by SeaSurface.
    *
    * @return A const reference to the value of the enumeration identified by SeaSurface.
    */
  virtual const uci::type::PlatformFunctionSeaSurfaceEnum& getSeaSurface() const = 0;

  /** Returns a reference to the value of the enumeration identified by SeaSurface.
    *
    * @return A reference to the value of the enumeration identified by SeaSurface.
    */
  virtual uci::type::PlatformFunctionSeaSurfaceEnum& getSeaSurface() = 0;

  /** Sets the value of the enumeration identified by SeaSurface.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlatformFunctionStatusCategoryType& setSeaSurface(const uci::type::PlatformFunctionSeaSurfaceEnum& value) = 0;

  /** Sets the value of the enumeration identified by SeaSurface.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlatformFunctionStatusCategoryType& setSeaSurface(uci::type::PlatformFunctionSeaSurfaceEnum::EnumerationItem value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by SeaSurface.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by SeaSurface, false otherwise.
    */
  virtual bool isSeaSurface() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by SeaSurface.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by SeaSurface.
    */
  virtual uci::type::PlatformFunctionSeaSurfaceEnum& chooseSeaSurface(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the value of the enumeration identified by Ground.
    *
    * @return A const reference to the value of the enumeration identified by Ground.
    */
  virtual const uci::type::PlatformFunctionGroundEnum& getGround() const = 0;

  /** Returns a reference to the value of the enumeration identified by Ground.
    *
    * @return A reference to the value of the enumeration identified by Ground.
    */
  virtual uci::type::PlatformFunctionGroundEnum& getGround() = 0;

  /** Sets the value of the enumeration identified by Ground.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlatformFunctionStatusCategoryType& setGround(const uci::type::PlatformFunctionGroundEnum& value) = 0;

  /** Sets the value of the enumeration identified by Ground.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlatformFunctionStatusCategoryType& setGround(uci::type::PlatformFunctionGroundEnum::EnumerationItem value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by Ground.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by Ground, false otherwise.
    */
  virtual bool isGround() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by Ground.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by Ground.
    */
  virtual uci::type::PlatformFunctionGroundEnum& chooseGround(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the value of the enumeration identified by EW.
    *
    * @return A const reference to the value of the enumeration identified by EW.
    */
  virtual const uci::type::PlatformFunctionEW_Enum& getEW() const = 0;

  /** Returns a reference to the value of the enumeration identified by EW.
    *
    * @return A reference to the value of the enumeration identified by EW.
    */
  virtual uci::type::PlatformFunctionEW_Enum& getEW() = 0;

  /** Sets the value of the enumeration identified by EW.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlatformFunctionStatusCategoryType& setEW(const uci::type::PlatformFunctionEW_Enum& value) = 0;

  /** Sets the value of the enumeration identified by EW.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlatformFunctionStatusCategoryType& setEW(uci::type::PlatformFunctionEW_Enum::EnumerationItem value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by EW.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by EW, false otherwise.
    */
  virtual bool isEW() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by EW.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by EW.
    */
  virtual uci::type::PlatformFunctionEW_Enum& chooseEW(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  PlatformFunctionStatusCategoryType() {
  }

  /** The destructor [only available to derived classes]. */
  ~PlatformFunctionStatusCategoryType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The PlatformFunctionStatusCategoryType to copy from.
    */
  PlatformFunctionStatusCategoryType(const PlatformFunctionStatusCategoryType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this PlatformFunctionStatusCategoryType to the contents of the
    * PlatformFunctionStatusCategoryType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The PlatformFunctionStatusCategoryType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this PlatformFunctionStatusCategoryType.
    * @return A reference to this PlatformFunctionStatusCategoryType.
    */
  PlatformFunctionStatusCategoryType& operator=(const PlatformFunctionStatusCategoryType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PLATFORMFUNCTIONSTATUSCATEGORYTYPE_H

