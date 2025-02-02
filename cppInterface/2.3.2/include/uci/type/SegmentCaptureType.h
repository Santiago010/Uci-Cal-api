/** @file SegmentCaptureType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:08 PM
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

#ifndef UCI_TYPE_SEGMENTCAPTURETYPE_H
#define UCI_TYPE_SEGMENTCAPTURETYPE_H

#include "../base/Accessor.h"
#include "../base/UnsignedIntAccessor.h"
#include "../base/export.h"
#include "EqualityExpressionEnum.h"

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
class SegmentCaptureType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new SegmentCaptureType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SegmentCaptureType.
    */
  static UCI_EXPORT SegmentCaptureType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new SegmentCaptureType initializing the data accessed by the new SegmentCaptureType using
    * the data accessed by the specified SegmentCaptureType (cloning).
    *
    * @param accessor The SegmentCaptureType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created SegmentCaptureType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SegmentCaptureType.
    */
  static UCI_EXPORT SegmentCaptureType& create(const SegmentCaptureType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified SegmentCaptureType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The SegmentCaptureType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(SegmentCaptureType& accessor);

  /** Returns this accessor's type constant, i.e. segmentCaptureType.
    *
    * @return This accessor's type constant, i.e. segmentCaptureType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::segmentCaptureType;
  }

  /** Returns the version that was initialized from the uci:version attribute of SegmentCaptureType.
    *
    * @return The version that was initialized from the uci:version attribute of SegmentCaptureType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const SegmentCaptureType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by CaptureCount.
    *
    * @return The value of the simple primitive data type identified by CaptureCount.
    */
  virtual xs::UnsignedInt getCaptureCount() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by CaptureCount.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SegmentCaptureType& setCaptureCount(xs::UnsignedInt value) = 0;

  /** Returns a const reference to the value of the enumeration identified by LogicalOperator.
    *
    * @return A const reference to the value of the enumeration identified by LogicalOperator.
    */
  virtual const uci::type::EqualityExpressionEnum& getLogicalOperator() const = 0;

  /** Returns a reference to the value of the enumeration identified by LogicalOperator.
    *
    * @return A reference to the value of the enumeration identified by LogicalOperator.
    */
  virtual uci::type::EqualityExpressionEnum& getLogicalOperator() = 0;

  /** Sets the value of the enumeration identified by LogicalOperator.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SegmentCaptureType& setLogicalOperator(const uci::type::EqualityExpressionEnum& value) = 0;

  /** Sets the value of the enumeration identified by LogicalOperator.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SegmentCaptureType& setLogicalOperator(uci::type::EqualityExpressionEnum::EnumerationItem value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  SegmentCaptureType() {
  }

  /** The destructor [only available to derived classes]. */
  ~SegmentCaptureType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The SegmentCaptureType to copy from.
    */
  SegmentCaptureType(const SegmentCaptureType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this SegmentCaptureType to the contents of the SegmentCaptureType on
    * the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The SegmentCaptureType on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this SegmentCaptureType.
    * @return A reference to this SegmentCaptureType.
    */
  SegmentCaptureType& operator=(const SegmentCaptureType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_SEGMENTCAPTURETYPE_H

