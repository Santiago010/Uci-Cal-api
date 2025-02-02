/** @file ForeignKeyMapDRL.h
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

#ifndef UCI_TYPE_FOREIGNKEYMAPDRL_H
#define UCI_TYPE_FOREIGNKEYMAPDRL_H

#include "../base/export.h"
#include "DataRecordListBaseType.h"
#include "ForeignKeyMapML.h"

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

/** The ForeignKeyMap Data Record List */
class ForeignKeyMapDRL : public virtual DataRecordListBaseType {
public:

  /** This method constructs a new ForeignKeyMapDRL.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ForeignKeyMapDRL.
    */
  static UCI_EXPORT ForeignKeyMapDRL& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ForeignKeyMapDRL initializing the data accessed by the new ForeignKeyMapDRL using the
    * data accessed by the specified ForeignKeyMapDRL (cloning).
    *
    * @param accessor The ForeignKeyMapDRL that provides access to the data that is to be used to initialize the data
    *      accessed by the new created ForeignKeyMapDRL.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ForeignKeyMapDRL.
    */
  static UCI_EXPORT ForeignKeyMapDRL& create(const ForeignKeyMapDRL& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ForeignKeyMapDRL. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The ForeignKeyMapDRL that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ForeignKeyMapDRL& accessor);

  /** Returns this accessor's type constant, i.e. foreignKeyMapDRL.
    *
    * @return This accessor's type constant, i.e. foreignKeyMapDRL.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::foreignKeyMapDRL;
  }

  /** Returns the version that was initialized from the uci:version attribute of ForeignKeyMapDRL.
    *
    * @return The version that was initialized from the uci:version attribute of ForeignKeyMapDRL.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ForeignKeyMapDRL& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ManagedLists.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ManagedLists.
    */
  virtual const uci::type::ForeignKeyMapML& getManagedLists() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ManagedLists.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ManagedLists.
    */
  virtual uci::type::ForeignKeyMapML& getManagedLists() = 0;

  /** Sets the complex content identified by ManagedLists to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ManagedLists.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ForeignKeyMapDRL& setManagedLists(const uci::type::ForeignKeyMapML& value) = 0;

  /** Returns whether the Element identified by ManagedLists exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ManagedLists is enabled or not.
    */
  virtual bool hasManagedLists() const = 0;

  /** Enables the Element identified by ManagedLists.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ManagedLists.
    */
  virtual uci::type::ForeignKeyMapML& enableManagedLists(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ManagedLists.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ForeignKeyMapDRL& clearManagedLists() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ForeignKeyMapDRL() {
  }

  /** The destructor [only available to derived classes]. */
  ~ForeignKeyMapDRL() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ForeignKeyMapDRL to copy from.
    */
  ForeignKeyMapDRL(const ForeignKeyMapDRL& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ForeignKeyMapDRL to the contents of the ForeignKeyMapDRL on the
    * right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The ForeignKeyMapDRL on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this ForeignKeyMapDRL.
    * @return A reference to this ForeignKeyMapDRL.
    */
  ForeignKeyMapDRL& operator=(const ForeignKeyMapDRL& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_FOREIGNKEYMAPDRL_H

