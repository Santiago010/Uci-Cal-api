/** @file NotificationBaseType.h
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

#ifndef UCI_TYPE_NOTIFICATIONBASETYPE_H
#define UCI_TYPE_NOTIFICATIONBASETYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "DateTimeType.h"
#include "NotificationID_Type.h"
#include "NotificationSeverityEnum.h"
#include "NotificationSourceType.h"
#include "NotificationStateEnum.h"
#include "SubjectType.h"
#include "VisibleString1024Type.h"

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

/** Indicates parameters for both Entity and System notification messages. This includes the notification's ID, the
  * notification's current state, the timestamp, the source of the notification, the severity of the notification, the
  * asset that the notification applies to (if applicable), and a notification narrative for a human operator.
  */
class NotificationBaseType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new NotificationBaseType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed NotificationBaseType.
    */
  static UCI_EXPORT NotificationBaseType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new NotificationBaseType initializing the data accessed by the new NotificationBaseType
    * using the data accessed by the specified NotificationBaseType (cloning).
    *
    * @param accessor The NotificationBaseType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created NotificationBaseType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed NotificationBaseType.
    */
  static UCI_EXPORT NotificationBaseType& create(const NotificationBaseType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified NotificationBaseType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The NotificationBaseType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(NotificationBaseType& accessor);

  /** Returns this accessor's type constant, i.e. notificationBaseType.
    *
    * @return This accessor's type constant, i.e. notificationBaseType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::notificationBaseType;
  }

  /** Returns the version that was initialized from the uci:version attribute of NotificationBaseType.
    *
    * @return The version that was initialized from the uci:version attribute of NotificationBaseType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.001.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const NotificationBaseType& accessor) = 0;

  /** Indicates an Asset that the Notification applies to and/or is affected by. Optional when the Notification
    * characterizes the Subject without regard for Assets it might affect. Omission of this element doesn't necessarily
    * mean the Notification isn't applicable to an Asset. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::SubjectType, uci::type::accessorType::subjectType> AppliesTo;

  /** Returns a const reference to the accessor that provides access to the complex content identified by NotificationID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by NotificationID.
    */
  virtual const uci::type::NotificationID_Type& getNotificationID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by NotificationID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by NotificationID.
    */
  virtual uci::type::NotificationID_Type& getNotificationID() = 0;

  /** Sets the complex content identified by NotificationID to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by NotificationID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::NotificationBaseType& setNotificationID(const uci::type::NotificationID_Type& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by NotificationState.
    *
    * @return A const reference to the value of the enumeration identified by NotificationState.
    */
  virtual const uci::type::NotificationStateEnum& getNotificationState() const = 0;

  /** Returns a reference to the value of the enumeration identified by NotificationState.
    *
    * @return A reference to the value of the enumeration identified by NotificationState.
    */
  virtual uci::type::NotificationStateEnum& getNotificationState() = 0;

  /** Sets the value of the enumeration identified by NotificationState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::NotificationBaseType& setNotificationState(const uci::type::NotificationStateEnum& value) = 0;

  /** Sets the value of the enumeration identified by NotificationState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::NotificationBaseType& setNotificationState(uci::type::NotificationStateEnum::EnumerationItem value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Timestamp.
    *
    * @return The value of the simple primitive data type identified by Timestamp.
    */
  virtual uci::type::DateTimeTypeValue getTimestamp() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Timestamp.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::NotificationBaseType& setTimestamp(uci::type::DateTimeTypeValue value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Source.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Source.
    */
  virtual const uci::type::NotificationSourceType& getSource() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Source.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Source.
    */
  virtual uci::type::NotificationSourceType& getSource() = 0;

  /** Sets the complex content identified by Source to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Source.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::NotificationBaseType& setSource(const uci::type::NotificationSourceType& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by Severity.
    *
    * @return A const reference to the value of the enumeration identified by Severity.
    */
  virtual const uci::type::NotificationSeverityEnum& getSeverity() const = 0;

  /** Returns a reference to the value of the enumeration identified by Severity.
    *
    * @return A reference to the value of the enumeration identified by Severity.
    */
  virtual uci::type::NotificationSeverityEnum& getSeverity() = 0;

  /** Sets the value of the enumeration identified by Severity.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::NotificationBaseType& setSeverity(const uci::type::NotificationSeverityEnum& value) = 0;

  /** Sets the value of the enumeration identified by Severity.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::NotificationBaseType& setSeverity(uci::type::NotificationSeverityEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the bounded list identified by AppliesTo.
    *
    * @return A const reference to the bounded list identified by AppliesTo.
    */
  virtual const uci::type::NotificationBaseType::AppliesTo& getAppliesTo() const = 0;

  /** Returns a reference to the bounded list identified by AppliesTo.
    *
    * @return A reference to the bounded list identified by AppliesTo.
    */
  virtual uci::type::NotificationBaseType::AppliesTo& getAppliesTo() = 0;

  /** Sets the bounded list identified by AppliesTo.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::NotificationBaseType& setAppliesTo(const uci::type::NotificationBaseType::AppliesTo& value) = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by NotificationNarrative.
    *
    * @return A const reference to the accessor that provides access to the string identified by NotificationNarrative.
    */
  virtual const uci::type::VisibleString1024Type& getNotificationNarrative() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by NotificationNarrative.
    *
    * @return A reference to the accessor that provides access to the string identified by NotificationNarrative.
    */
  virtual uci::type::VisibleString1024Type& getNotificationNarrative() = 0;

  /** Sets the string identified by NotificationNarrative to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by NotificationNarrative.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::NotificationBaseType& setNotificationNarrative(const uci::type::VisibleString1024Type& value) = 0;

  /** Sets the string identified by NotificationNarrative to the contents of the string that is accessed by the specified
    * accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::NotificationBaseType& setNotificationNarrative(const std::string& value) = 0;

  /** Sets the string identified by NotificationNarrative to the contents of the string that is accessed by the specified
    * accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::NotificationBaseType& setNotificationNarrative(const char* value) = 0;

  /** Returns whether the Element identified by NotificationNarrative exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by NotificationNarrative is enabled or not.
    */
  virtual bool hasNotificationNarrative() const = 0;

  /** Enables the Element identified by NotificationNarrative.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the string identified by NotificationNarrative.
    */
  virtual uci::type::VisibleString1024Type& enableNotificationNarrative(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by NotificationNarrative.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::NotificationBaseType& clearNotificationNarrative() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  NotificationBaseType() {
  }

  /** The destructor [only available to derived classes]. */
  ~NotificationBaseType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The NotificationBaseType to copy from.
    */
  NotificationBaseType(const NotificationBaseType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this NotificationBaseType to the contents of the NotificationBaseType
    * on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The NotificationBaseType on the right hand side (rhs) of the assignment operator whose contents are used
    *      to set the contents of this NotificationBaseType.
    * @return A reference to this NotificationBaseType.
    */
  NotificationBaseType& operator=(const NotificationBaseType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_NOTIFICATIONBASETYPE_H

