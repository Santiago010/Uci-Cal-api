/** @file OffsetLocationErrorType.h
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

#ifndef UCI_TYPE_OFFSETLOCATIONERRORTYPE_H
#define UCI_TYPE_OFFSETLOCATIONERRORTYPE_H

#include "../base/export.h"
#include "DistanceType.h"
#include "OffsetLocationType.h"
#include "PercentType.h"

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

/** Indicates the offset of the component's location as well as the error probability. */
class OffsetLocationErrorType : public virtual OffsetLocationType {
public:

  /** This method constructs a new OffsetLocationErrorType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OffsetLocationErrorType.
    */
  static UCI_EXPORT OffsetLocationErrorType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new OffsetLocationErrorType initializing the data accessed by the new
    * OffsetLocationErrorType using the data accessed by the specified OffsetLocationErrorType (cloning).
    *
    * @param accessor The OffsetLocationErrorType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created OffsetLocationErrorType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OffsetLocationErrorType.
    */
  static UCI_EXPORT OffsetLocationErrorType& create(const OffsetLocationErrorType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified OffsetLocationErrorType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The OffsetLocationErrorType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(OffsetLocationErrorType& accessor);

  /** Returns this accessor's type constant, i.e. offsetLocationErrorType.
    *
    * @return This accessor's type constant, i.e. offsetLocationErrorType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::offsetLocationErrorType;
  }

  /** Returns the version that was initialized from the uci:version attribute of OffsetLocationErrorType.
    *
    * @return The version that was initialized from the uci:version attribute of OffsetLocationErrorType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const OffsetLocationErrorType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by CEP.
    *
    * @return The value of the simple primitive data type identified by CEP.
    */
  virtual uci::type::DistanceTypeValue getCEP() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by CEP.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OffsetLocationErrorType& setCEP(uci::type::DistanceTypeValue value) = 0;

  /** Returns whether the Element identified by CEP exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by CEP is enabled or not.
    */
  virtual bool hasCEP() const = 0;

  /** Clears (disabled) the Element identified by CEP.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OffsetLocationErrorType& clearCEP() = 0;

  /** Returns the value of the SimplePrimitive data type identified by Confidence.
    *
    * @return The value of the simple primitive data type identified by Confidence.
    */
  virtual uci::type::PercentTypeValue getConfidence() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Confidence.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OffsetLocationErrorType& setConfidence(uci::type::PercentTypeValue value) = 0;

  /** Returns whether the Element identified by Confidence exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Confidence is enabled or not.
    */
  virtual bool hasConfidence() const = 0;

  /** Clears (disabled) the Element identified by Confidence.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OffsetLocationErrorType& clearConfidence() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  OffsetLocationErrorType() {
  }

  /** The destructor [only available to derived classes]. */
  ~OffsetLocationErrorType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The OffsetLocationErrorType to copy from.
    */
  OffsetLocationErrorType(const OffsetLocationErrorType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this OffsetLocationErrorType to the contents of the
    * OffsetLocationErrorType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The OffsetLocationErrorType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this OffsetLocationErrorType.
    * @return A reference to this OffsetLocationErrorType.
    */
  OffsetLocationErrorType& operator=(const OffsetLocationErrorType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_OFFSETLOCATIONERRORTYPE_H

