/** @file DiscreteDataLinkIdentifierType.h
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

#ifndef UCI_TYPE_DISCRETEDATALINKIDENTIFIERTYPE_H
#define UCI_TYPE_DISCRETEDATALINKIDENTIFIERTYPE_H

#include "../base/UnsignedIntAccessor.h"
#include "../base/export.h"
#include "DataLinkIdentifierPET.h"
#include "NetworkLinkID_Type.h"

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

/** This is a polymorphic extension which allows for the extension of the base DataLinkIdentifierPET. This represents
  * locally defined amplifying data used to identify discrete meanings established by an operational commander.
  */
class DiscreteDataLinkIdentifierType : public virtual DataLinkIdentifierPET {
public:

  /** This method constructs a new DiscreteDataLinkIdentifierType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DiscreteDataLinkIdentifierType.
    */
  static UCI_EXPORT DiscreteDataLinkIdentifierType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new DiscreteDataLinkIdentifierType initializing the data accessed by the new
    * DiscreteDataLinkIdentifierType using the data accessed by the specified DiscreteDataLinkIdentifierType (cloning).
    *
    * @param accessor The DiscreteDataLinkIdentifierType that provides access to the data that is to be used to initialize
    *      the data accessed by the new created DiscreteDataLinkIdentifierType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DiscreteDataLinkIdentifierType.
    */
  static UCI_EXPORT DiscreteDataLinkIdentifierType& create(const DiscreteDataLinkIdentifierType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified DiscreteDataLinkIdentifierType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The DiscreteDataLinkIdentifierType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(DiscreteDataLinkIdentifierType& accessor);

  /** Returns this accessor's type constant, i.e. discreteDataLinkIdentifierType.
    *
    * @return This accessor's type constant, i.e. discreteDataLinkIdentifierType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::discreteDataLinkIdentifierType;
  }

  /** Returns the version that was initialized from the uci:version attribute of DiscreteDataLinkIdentifierType.
    *
    * @return The version that was initialized from the uci:version attribute of DiscreteDataLinkIdentifierType.
    */
  static std::string getUCITypeVersion() {
    return "000.001.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const DiscreteDataLinkIdentifierType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by LocalDiscreteIdentifier.
    *
    * @return The value of the simple primitive data type identified by LocalDiscreteIdentifier.
    */
  virtual xs::UnsignedInt getLocalDiscreteIdentifier() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by LocalDiscreteIdentifier.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DiscreteDataLinkIdentifierType& setLocalDiscreteIdentifier(xs::UnsignedInt value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by NetworkLinkID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by NetworkLinkID.
    */
  virtual const uci::type::NetworkLinkID_Type& getNetworkLinkID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by NetworkLinkID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by NetworkLinkID.
    */
  virtual uci::type::NetworkLinkID_Type& getNetworkLinkID() = 0;

  /** Sets the complex content identified by NetworkLinkID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by NetworkLinkID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DiscreteDataLinkIdentifierType& setNetworkLinkID(const uci::type::NetworkLinkID_Type& value) = 0;

  /** Returns whether the Element identified by NetworkLinkID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by NetworkLinkID is enabled or not.
    */
  virtual bool hasNetworkLinkID() const = 0;

  /** Enables the Element identified by NetworkLinkID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by NetworkLinkID.
    */
  virtual uci::type::NetworkLinkID_Type& enableNetworkLinkID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by NetworkLinkID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DiscreteDataLinkIdentifierType& clearNetworkLinkID() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  DiscreteDataLinkIdentifierType() {
  }

  /** The destructor [only available to derived classes]. */
  ~DiscreteDataLinkIdentifierType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The DiscreteDataLinkIdentifierType to copy from.
    */
  DiscreteDataLinkIdentifierType(const DiscreteDataLinkIdentifierType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this DiscreteDataLinkIdentifierType to the contents of the
    * DiscreteDataLinkIdentifierType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The DiscreteDataLinkIdentifierType on the right hand side (rhs) of the assignment operator whose contents
    *      are used to set the contents of this DiscreteDataLinkIdentifierType.
    * @return A reference to this DiscreteDataLinkIdentifierType.
    */
  DiscreteDataLinkIdentifierType& operator=(const DiscreteDataLinkIdentifierType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_DISCRETEDATALINKIDENTIFIERTYPE_H

