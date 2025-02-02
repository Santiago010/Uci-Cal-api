/** @file EmitterEntryType.h
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

#ifndef UCI_TYPE_EMITTERENTRYTYPE_H
#define UCI_TYPE_EMITTERENTRYTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "EmitterIdentityType.h"
#include "ForeignKeyType.h"

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

/** Specify an emitter by ID or by MDF_Entry number. */
class EmitterEntryType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new EmitterEntryType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EmitterEntryType.
    */
  static UCI_EXPORT EmitterEntryType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new EmitterEntryType initializing the data accessed by the new EmitterEntryType using the
    * data accessed by the specified EmitterEntryType (cloning).
    *
    * @param accessor The EmitterEntryType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created EmitterEntryType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EmitterEntryType.
    */
  static UCI_EXPORT EmitterEntryType& create(const EmitterEntryType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified EmitterEntryType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The EmitterEntryType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(EmitterEntryType& accessor);

  /** Returns this accessor's type constant, i.e. emitterEntryType.
    *
    * @return This accessor's type constant, i.e. emitterEntryType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::emitterEntryType;
  }

  /** Returns the version that was initialized from the uci:version attribute of EmitterEntryType.
    *
    * @return The version that was initialized from the uci:version attribute of EmitterEntryType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.001.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const EmitterEntryType& accessor) = 0;

  /** The following enumeration is used to identify which element of this Choice has been chosen. */
  enum EmitterEntryTypeChoice {
    EMITTERENTRYTYPE_CHOICE_NONE,
    EMITTERENTRYTYPE_CHOICE_EMITTER,
    EMITTERENTRYTYPE_CHOICE_MDF_ENTRY
  };

  /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active.
    *
    * @return The selected item's enumerated value.
    */
  virtual EmitterEntryTypeChoice getEmitterEntryTypeChoiceOrdinal() const = 0;

  /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
    * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
    * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
    * getEmitterEntryTypeChoiceOrdinal() will be the ordinal specified when this method was invoked. In addition, the
    * access methods associated with the chosen element will be enabled and will provide access to the chosen element.
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
  virtual uci::type::EmitterEntryType& setEmitterEntryTypeChoiceOrdinal(EmitterEntryTypeChoice chosenElementOrdinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Emitter.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Emitter.
    */
  virtual const uci::type::EmitterIdentityType& getEmitter() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Emitter.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Emitter.
    */
  virtual uci::type::EmitterIdentityType& getEmitter() = 0;

  /** Sets the complex content identified by Emitter to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Emitter.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EmitterEntryType& setEmitter(const uci::type::EmitterIdentityType& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by Emitter.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by Emitter, false otherwise.
    */
  virtual bool isEmitter() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by Emitter.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by Emitter.
    */
  virtual uci::type::EmitterIdentityType& chooseEmitter(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by MDF_Entry.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by MDF_Entry.
    */
  virtual const uci::type::ForeignKeyType& getMDF_Entry() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by MDF_Entry.
    *
    * @return A reference to the accessor that provides access to the complex content identified by MDF_Entry.
    */
  virtual uci::type::ForeignKeyType& getMDF_Entry() = 0;

  /** Sets the complex content identified by MDF_Entry to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by MDF_Entry.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EmitterEntryType& setMDF_Entry(const uci::type::ForeignKeyType& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by MDF_Entry.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by MDF_Entry, false otherwise.
    */
  virtual bool isMDF_Entry() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by MDF_Entry.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by MDF_Entry.
    */
  virtual uci::type::ForeignKeyType& chooseMDF_Entry(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  EmitterEntryType() {
  }

  /** The destructor [only available to derived classes]. */
  ~EmitterEntryType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The EmitterEntryType to copy from.
    */
  EmitterEntryType(const EmitterEntryType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this EmitterEntryType to the contents of the EmitterEntryType on the
    * right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The EmitterEntryType on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this EmitterEntryType.
    * @return A reference to this EmitterEntryType.
    */
  EmitterEntryType& operator=(const EmitterEntryType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_EMITTERENTRYTYPE_H

