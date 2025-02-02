/** @file PositionPositionCovarianceType.h
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

#ifndef UCI_TYPE_POSITIONPOSITIONCOVARIANCETYPE_H
#define UCI_TYPE_POSITIONPOSITIONCOVARIANCETYPE_H

#include "../base/Accessor.h"
#include "../base/DoubleAccessor.h"
#include "../base/export.h"

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
class PositionPositionCovarianceType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new PositionPositionCovarianceType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PositionPositionCovarianceType.
    */
  static UCI_EXPORT PositionPositionCovarianceType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new PositionPositionCovarianceType initializing the data accessed by the new
    * PositionPositionCovarianceType using the data accessed by the specified PositionPositionCovarianceType (cloning).
    *
    * @param accessor The PositionPositionCovarianceType that provides access to the data that is to be used to initialize
    *      the data accessed by the new created PositionPositionCovarianceType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PositionPositionCovarianceType.
    */
  static UCI_EXPORT PositionPositionCovarianceType& create(const PositionPositionCovarianceType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified PositionPositionCovarianceType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The PositionPositionCovarianceType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(PositionPositionCovarianceType& accessor);

  /** Returns this accessor's type constant, i.e. positionPositionCovarianceType.
    *
    * @return This accessor's type constant, i.e. positionPositionCovarianceType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::positionPositionCovarianceType;
  }

  /** Returns the version that was initialized from the uci:version attribute of PositionPositionCovarianceType.
    *
    * @return The version that was initialized from the uci:version attribute of PositionPositionCovarianceType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const PositionPositionCovarianceType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by PnPn.
    *
    * @return The value of the simple primitive data type identified by PnPn.
    */
  virtual xs::Double getPnPn() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by PnPn.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PositionPositionCovarianceType& setPnPn(xs::Double value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by PnPe.
    *
    * @return The value of the simple primitive data type identified by PnPe.
    */
  virtual xs::Double getPnPe() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by PnPe.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PositionPositionCovarianceType& setPnPe(xs::Double value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by PnPd.
    *
    * @return The value of the simple primitive data type identified by PnPd.
    */
  virtual xs::Double getPnPd() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by PnPd.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PositionPositionCovarianceType& setPnPd(xs::Double value) = 0;

  /** Returns whether the Element identified by PnPd exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PnPd is enabled or not.
    */
  virtual bool hasPnPd() const = 0;

  /** Clears (disabled) the Element identified by PnPd.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PositionPositionCovarianceType& clearPnPd() = 0;

  /** Returns the value of the SimplePrimitive data type identified by PePe.
    *
    * @return The value of the simple primitive data type identified by PePe.
    */
  virtual xs::Double getPePe() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by PePe.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PositionPositionCovarianceType& setPePe(xs::Double value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by PePd.
    *
    * @return The value of the simple primitive data type identified by PePd.
    */
  virtual xs::Double getPePd() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by PePd.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PositionPositionCovarianceType& setPePd(xs::Double value) = 0;

  /** Returns whether the Element identified by PePd exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PePd is enabled or not.
    */
  virtual bool hasPePd() const = 0;

  /** Clears (disabled) the Element identified by PePd.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PositionPositionCovarianceType& clearPePd() = 0;

  /** Returns the value of the SimplePrimitive data type identified by PdPd.
    *
    * @return The value of the simple primitive data type identified by PdPd.
    */
  virtual xs::Double getPdPd() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by PdPd.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PositionPositionCovarianceType& setPdPd(xs::Double value) = 0;

  /** Returns whether the Element identified by PdPd exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PdPd is enabled or not.
    */
  virtual bool hasPdPd() const = 0;

  /** Clears (disabled) the Element identified by PdPd.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PositionPositionCovarianceType& clearPdPd() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  PositionPositionCovarianceType() {
  }

  /** The destructor [only available to derived classes]. */
  ~PositionPositionCovarianceType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The PositionPositionCovarianceType to copy from.
    */
  PositionPositionCovarianceType(const PositionPositionCovarianceType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this PositionPositionCovarianceType to the contents of the
    * PositionPositionCovarianceType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The PositionPositionCovarianceType on the right hand side (rhs) of the assignment operator whose contents
    *      are used to set the contents of this PositionPositionCovarianceType.
    * @return A reference to this PositionPositionCovarianceType.
    */
  PositionPositionCovarianceType& operator=(const PositionPositionCovarianceType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_POSITIONPOSITIONCOVARIANCETYPE_H

