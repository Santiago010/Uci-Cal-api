/** @file OperatorNotificationOverrideMDT.h
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

#ifndef UCI_TYPE_OPERATORNOTIFICATIONOVERRIDEMDT_H
#define UCI_TYPE_OPERATORNOTIFICATIONOVERRIDEMDT_H

#include "../base/Accessor.h"
#include "../base/BooleanAccessor.h"
#include "../base/export.h"
#include "OperatorNotificationID_Type.h"
#include "OperatorNotificationOverrideID_Type.h"

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
class OperatorNotificationOverrideMDT : public virtual uci::base::Accessor {
public:

  /** This method constructs a new OperatorNotificationOverrideMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OperatorNotificationOverrideMDT.
    */
  static UCI_EXPORT OperatorNotificationOverrideMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new OperatorNotificationOverrideMDT initializing the data accessed by the new
    * OperatorNotificationOverrideMDT using the data accessed by the specified OperatorNotificationOverrideMDT (cloning).
    *
    * @param accessor The OperatorNotificationOverrideMDT that provides access to the data that is to be used to initialize
    *      the data accessed by the new created OperatorNotificationOverrideMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OperatorNotificationOverrideMDT.
    */
  static UCI_EXPORT OperatorNotificationOverrideMDT& create(const OperatorNotificationOverrideMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified OperatorNotificationOverrideMDT. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The OperatorNotificationOverrideMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(OperatorNotificationOverrideMDT& accessor);

  /** Returns this accessor's type constant, i.e. operatorNotificationOverrideMDT.
    *
    * @return This accessor's type constant, i.e. operatorNotificationOverrideMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::operatorNotificationOverrideMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of OperatorNotificationOverrideMDT.
    *
    * @return The version that was initialized from the uci:version attribute of OperatorNotificationOverrideMDT.
    */
  static std::string getUCITypeVersion() {
    return "000.001.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const OperatorNotificationOverrideMDT& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * OperatorNotificationOverrideID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      OperatorNotificationOverrideID.
    */
  virtual const uci::type::OperatorNotificationOverrideID_Type& getOperatorNotificationOverrideID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * OperatorNotificationOverrideID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      OperatorNotificationOverrideID.
    */
  virtual uci::type::OperatorNotificationOverrideID_Type& getOperatorNotificationOverrideID() = 0;

  /** Sets the complex content identified by OperatorNotificationOverrideID to the contents of the complex content accessed
    * by the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by OperatorNotificationOverrideID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OperatorNotificationOverrideMDT& setOperatorNotificationOverrideID(const uci::type::OperatorNotificationOverrideID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * OperatorNotificationID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      OperatorNotificationID.
    */
  virtual const uci::type::OperatorNotificationID_Type& getOperatorNotificationID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by OperatorNotificationID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by OperatorNotificationID.
    */
  virtual uci::type::OperatorNotificationID_Type& getOperatorNotificationID() = 0;

  /** Sets the complex content identified by OperatorNotificationID to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by OperatorNotificationID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OperatorNotificationOverrideMDT& setOperatorNotificationID(const uci::type::OperatorNotificationID_Type& value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by IsEnabled.
    *
    * @return The value of the simple primitive data type identified by IsEnabled.
    */
  virtual xs::Boolean getIsEnabled() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by IsEnabled.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OperatorNotificationOverrideMDT& setIsEnabled(xs::Boolean value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  OperatorNotificationOverrideMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~OperatorNotificationOverrideMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The OperatorNotificationOverrideMDT to copy from.
    */
  OperatorNotificationOverrideMDT(const OperatorNotificationOverrideMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this OperatorNotificationOverrideMDT to the contents of the
    * OperatorNotificationOverrideMDT on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The OperatorNotificationOverrideMDT on the right hand side (rhs) of the assignment operator whose contents
    *      are used to set the contents of this OperatorNotificationOverrideMDT.
    * @return A reference to this OperatorNotificationOverrideMDT.
    */
  OperatorNotificationOverrideMDT& operator=(const OperatorNotificationOverrideMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_OPERATORNOTIFICATIONOVERRIDEMDT_H

