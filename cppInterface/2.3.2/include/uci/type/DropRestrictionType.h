/** @file DropRestrictionType.h
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

#ifndef UCI_TYPE_DROPRESTRICTIONTYPE_H
#define UCI_TYPE_DROPRESTRICTIONTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "AssociatedDropRestrictMessageType.h"
#include "DropRestrictionEnum.h"

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

/** Nature and/or source of a drop restriction. */
class DropRestrictionType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new DropRestrictionType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DropRestrictionType.
    */
  static UCI_EXPORT DropRestrictionType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new DropRestrictionType initializing the data accessed by the new DropRestrictionType using
    * the data accessed by the specified DropRestrictionType (cloning).
    *
    * @param accessor The DropRestrictionType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created DropRestrictionType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DropRestrictionType.
    */
  static UCI_EXPORT DropRestrictionType& create(const DropRestrictionType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified DropRestrictionType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The DropRestrictionType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(DropRestrictionType& accessor);

  /** Returns this accessor's type constant, i.e. dropRestrictionType.
    *
    * @return This accessor's type constant, i.e. dropRestrictionType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::dropRestrictionType;
  }

  /** Returns the version that was initialized from the uci:version attribute of DropRestrictionType.
    *
    * @return The version that was initialized from the uci:version attribute of DropRestrictionType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const DropRestrictionType& accessor) = 0;

  /** Returns a const reference to the value of the enumeration identified by DropRestriction.
    *
    * @return A const reference to the value of the enumeration identified by DropRestriction.
    */
  virtual const uci::type::DropRestrictionEnum& getDropRestriction() const = 0;

  /** Returns a reference to the value of the enumeration identified by DropRestriction.
    *
    * @return A reference to the value of the enumeration identified by DropRestriction.
    */
  virtual uci::type::DropRestrictionEnum& getDropRestriction() = 0;

  /** Sets the value of the enumeration identified by DropRestriction.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DropRestrictionType& setDropRestriction(const uci::type::DropRestrictionEnum& value) = 0;

  /** Sets the value of the enumeration identified by DropRestriction.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DropRestrictionType& setDropRestriction(uci::type::DropRestrictionEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * AssociatedMessage.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      AssociatedMessage.
    */
  virtual const uci::type::AssociatedDropRestrictMessageType& getAssociatedMessage() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by AssociatedMessage.
    *
    * @return A reference to the accessor that provides access to the complex content identified by AssociatedMessage.
    */
  virtual uci::type::AssociatedDropRestrictMessageType& getAssociatedMessage() = 0;

  /** Sets the complex content identified by AssociatedMessage to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by AssociatedMessage.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DropRestrictionType& setAssociatedMessage(const uci::type::AssociatedDropRestrictMessageType& value) = 0;

  /** Returns whether the Element identified by AssociatedMessage exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by AssociatedMessage is enabled or not.
    */
  virtual bool hasAssociatedMessage() const = 0;

  /** Enables the Element identified by AssociatedMessage.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by AssociatedMessage.
    */
  virtual uci::type::AssociatedDropRestrictMessageType& enableAssociatedMessage(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by AssociatedMessage.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DropRestrictionType& clearAssociatedMessage() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  DropRestrictionType() {
  }

  /** The destructor [only available to derived classes]. */
  ~DropRestrictionType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The DropRestrictionType to copy from.
    */
  DropRestrictionType(const DropRestrictionType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this DropRestrictionType to the contents of the DropRestrictionType on
    * the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The DropRestrictionType on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this DropRestrictionType.
    * @return A reference to this DropRestrictionType.
    */
  DropRestrictionType& operator=(const DropRestrictionType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_DROPRESTRICTIONTYPE_H

