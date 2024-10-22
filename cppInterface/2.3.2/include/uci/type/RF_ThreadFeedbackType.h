/** @file RF_ThreadFeedbackType.h
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

#ifndef UCI_TYPE_RF_THREADFEEDBACKTYPE_H
#define UCI_TYPE_RF_THREADFEEDBACKTYPE_H

#include "../base/Accessor.h"
#include "../base/UnsignedIntAccessor.h"
#include "../base/export.h"
#include "PercentType.h"
#include "ThreadAvailabiltyEnum.h"

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

/** Utilization feedback for each of an RFD component's RF paths. */
class RF_ThreadFeedbackType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new RF_ThreadFeedbackType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed RF_ThreadFeedbackType.
    */
  static UCI_EXPORT RF_ThreadFeedbackType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new RF_ThreadFeedbackType initializing the data accessed by the new RF_ThreadFeedbackType
    * using the data accessed by the specified RF_ThreadFeedbackType (cloning).
    *
    * @param accessor The RF_ThreadFeedbackType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created RF_ThreadFeedbackType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed RF_ThreadFeedbackType.
    */
  static UCI_EXPORT RF_ThreadFeedbackType& create(const RF_ThreadFeedbackType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified RF_ThreadFeedbackType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The RF_ThreadFeedbackType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(RF_ThreadFeedbackType& accessor);

  /** Returns this accessor's type constant, i.e. rF_ThreadFeedbackType.
    *
    * @return This accessor's type constant, i.e. rF_ThreadFeedbackType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::rF_ThreadFeedbackType;
  }

  /** Returns the version that was initialized from the uci:version attribute of RF_ThreadFeedbackType.
    *
    * @return The version that was initialized from the uci:version attribute of RF_ThreadFeedbackType.
    */
  static std::string getUCITypeVersion() {
    return "001.001.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const RF_ThreadFeedbackType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by RF_ThreadIndex.
    *
    * @return The value of the simple primitive data type identified by RF_ThreadIndex.
    */
  virtual xs::UnsignedInt getRF_ThreadIndex() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by RF_ThreadIndex.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_ThreadFeedbackType& setRF_ThreadIndex(xs::UnsignedInt value) = 0;

  /** Returns a const reference to the value of the enumeration identified by Availability.
    *
    * @return A const reference to the value of the enumeration identified by Availability.
    */
  virtual const uci::type::ThreadAvailabiltyEnum& getAvailability() const = 0;

  /** Returns a reference to the value of the enumeration identified by Availability.
    *
    * @return A reference to the value of the enumeration identified by Availability.
    */
  virtual uci::type::ThreadAvailabiltyEnum& getAvailability() = 0;

  /** Sets the value of the enumeration identified by Availability.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_ThreadFeedbackType& setAvailability(const uci::type::ThreadAvailabiltyEnum& value) = 0;

  /** Sets the value of the enumeration identified by Availability.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_ThreadFeedbackType& setAvailability(uci::type::ThreadAvailabiltyEnum::EnumerationItem value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by PercentAccess.
    *
    * @return The value of the simple primitive data type identified by PercentAccess.
    */
  virtual uci::type::PercentTypeValue getPercentAccess() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by PercentAccess.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_ThreadFeedbackType& setPercentAccess(uci::type::PercentTypeValue value) = 0;

  /** Returns whether the Element identified by PercentAccess exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PercentAccess is enabled or not.
    */
  virtual bool hasPercentAccess() const = 0;

  /** Clears (disabled) the Element identified by PercentAccess.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_ThreadFeedbackType& clearPercentAccess() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  RF_ThreadFeedbackType() {
  }

  /** The destructor [only available to derived classes]. */
  ~RF_ThreadFeedbackType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The RF_ThreadFeedbackType to copy from.
    */
  RF_ThreadFeedbackType(const RF_ThreadFeedbackType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this RF_ThreadFeedbackType to the contents of the RF_ThreadFeedbackType
    * on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The RF_ThreadFeedbackType on the right hand side (rhs) of the assignment operator whose contents are used
    *      to set the contents of this RF_ThreadFeedbackType.
    * @return A reference to this RF_ThreadFeedbackType.
    */
  RF_ThreadFeedbackType& operator=(const RF_ThreadFeedbackType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_RF_THREADFEEDBACKTYPE_H

